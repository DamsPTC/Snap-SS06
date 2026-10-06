/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a4cdd10; end: 10a4cde1b;  */

void FUN_10a4cdd10(undefined4 param_1,long param_2,long *param_3)

{
  long *plVar1;
  
  FUN_10a4cde1c();
  plVar1 = param_3;
  (**(code **)(*param_3 + 0x200))(param_3,&PTR_DAT_110be7b50);
  if ((int)plVar1 != 0) {
    param_1 = 0;
    *(undefined8 *)(param_2 + 0x240) = 1;
    *(undefined8 *)(param_2 + 0x238) = 0;
    *(undefined1 *)(param_2 + 0x248) = 1;
    (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110be7b50);
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x30))(param_3,&PTR_DAT_110be7e48);
    *(char *)(param_2 + 0x238) = (char)plVar1;
    (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110be7e68);
    *(undefined4 *)(param_2 + 0x23c) = param_1;
    plVar1 = param_3;
    (**(code **)(*param_3 + 0x20))(param_3,&PTR_s_id_110be8a88);
    *(long **)(param_2 + 0x240) = plVar1;
    (**(code **)(*param_3 + 0x220))(param_3);
  }
  (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110be7b70);
  *(undefined4 *)(param_2 + 0x230) = param_1;
  (**(code **)(*param_3 + 0x50))(param_3,&PTR_DAT_110be7b90);
  *(char *)(param_2 + 0x234) = (char)param_3;
  return;
}



/* Entry: 10a4cde1c; end: 10a4cf283;  */

void FUN_10a4cde1c(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,long param_5,
                  long *param_6)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *unaff_x28;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined4 uVar33;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  (**(code **)(*param_6 + 0xa0))(&lStack_180,param_6,&PTR_s_label_110be89e8);
  if (*(char *)(param_5 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_5 + 0x20));
  }
  *(long *)(param_5 + 0x28) = lStack_178;
  *(long *)(param_5 + 0x20) = lStack_180;
  *(long *)(param_5 + 0x30) = lStack_170;
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x30))(param_6,&PTR_s_id_110be8a08);
  *(int *)(param_5 + 0x18) = (int)plVar7;
  uVar22 = (**(code **)(*param_6 + 0xd8))(param_6,&PTR_DAT_110be8a28);
  *(undefined4 *)(param_5 + 0x40) = uVar22;
  *(int *)(param_5 + 0x44) = (int)param_2;
  uVar22 = (**(code **)(*param_6 + 0xd8))(param_6,&PTR_DAT_110be7c08);
  *(undefined4 *)(param_5 + 0x38) = uVar22;
  *(int *)(param_5 + 0x3c) = (int)param_2;
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7c28);
  if ((int)plVar7 != 0) {
    uVar22 = (**(code **)(*param_6 + 0x40))(param_6,&PTR_DAT_110be7c28);
    *(undefined4 *)(param_5 + 0x60) = uVar22;
  }
  func_0x00010a505c2c(param_5 + 0x1e0);
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7c48);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7c48);
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x208))();
    if (0 < (int)plVar7) {
      iVar16 = 0;
      do {
        (**(code **)(*param_6 + 0x218))(param_6,iVar16);
        (**(code **)(*param_6 + 0xa0))(&lStack_180,param_6,&PTR_DAT_110be7c68);
        uVar22 = (**(code **)(*param_6 + 0xe8))(param_6,&PTR_s_direction_110be7c88);
        lVar9 = param_5 + 0x1e0;
        uVar19 = param_2;
        uVar17 = param_3;
        plStack_f8 = &lStack_180;
        FUN_10a2f99e0(lVar9,&lStack_180,&UNK_10dd5b8f9,&plStack_f8,&lStack_110);
        *(undefined4 *)(lVar9 + 0x28) = uVar22;
        *(int *)(lVar9 + 0x2c) = (int)param_2;
        *(int *)(lVar9 + 0x30) = (int)param_3;
        param_2 = uVar19;
        param_3 = uVar17;
        if (lStack_170 < 0) {
          __ZdlPv(lStack_180);
          param_2 = uVar19;
          param_3 = uVar17;
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        iVar16 = iVar16 + 1;
      } while ((int)plVar7 != iVar16);
    }
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  if (*(long *)(param_5 + 0x180) != 0) {
    func_0x00010a5008c4(param_5 + 0x168,*(undefined8 *)(param_5 + 0x178));
    *(undefined8 *)(param_5 + 0x178) = 0;
    lVar9 = *(long *)(param_5 + 0x170);
    if (lVar9 != 0) {
      lVar14 = 0;
      do {
        *(undefined8 *)(*(long *)(param_5 + 0x168) + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
    }
    *(undefined8 *)(param_5 + 0x180) = 0;
  }
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7ca8);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7ca8);
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x208))();
    if (0 < (int)plVar7) {
      iVar16 = 0;
      do {
        (**(code **)(*param_6 + 0x218))(param_6,iVar16);
        (**(code **)(*param_6 + 0xa0))(&lStack_180,param_6,&PTR_DAT_110be7cc8);
        uVar22 = (**(code **)(*param_6 + 0xd8))(param_6,&PTR_DAT_110be7ce8);
        lVar9 = param_5 + 0x168;
        uVar19 = param_2;
        plStack_f8 = &lStack_180;
        FUN_10a2f939c(lVar9,&lStack_180,&UNK_10dd5b8f9,&plStack_f8,&lStack_110);
        *(undefined4 *)(lVar9 + 0x28) = uVar22;
        *(int *)(lVar9 + 0x2c) = (int)param_2;
        param_2 = uVar19;
        if (lStack_170 < 0) {
          __ZdlPv(lStack_180);
          param_2 = uVar19;
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        iVar16 = iVar16 + 1;
      } while ((int)plVar7 != iVar16);
    }
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  func_0x00010a505c2c(param_5 + 0x1b8);
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7d08);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7d08);
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x208))();
    if (0 < (int)plVar7) {
      iVar16 = 0;
      do {
        (**(code **)(*param_6 + 0x218))(param_6,iVar16);
        (**(code **)(*param_6 + 0xa0))(&lStack_180,param_6,&PTR_DAT_110be7cc8);
        uVar22 = (**(code **)(*param_6 + 0xe8))(param_6,&PTR_DAT_110be7ce8);
        lVar9 = param_5 + 0x1b8;
        uVar19 = param_2;
        uVar17 = param_3;
        plStack_f8 = &lStack_180;
        FUN_10a2f99e0(lVar9,&lStack_180,&UNK_10dd5b8f9,&plStack_f8,&lStack_110);
        *(undefined4 *)(lVar9 + 0x28) = uVar22;
        *(int *)(lVar9 + 0x2c) = (int)param_2;
        *(int *)(lVar9 + 0x30) = (int)param_3;
        param_2 = uVar19;
        param_3 = uVar17;
        if (lStack_170 < 0) {
          __ZdlPv(lStack_180);
          param_2 = uVar19;
          param_3 = uVar17;
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        iVar16 = iVar16 + 1;
      } while ((int)plVar7 != iVar16);
    }
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  plVar7 = (long *)(param_5 + 0x208);
  if (*(long *)(param_5 + 0x220) != 0) {
    func_0x00010a5007fc(plVar7,*(undefined8 *)(param_5 + 0x218));
    *(undefined8 *)(param_5 + 0x218) = 0;
    lVar9 = *(long *)(param_5 + 0x210);
    if (lVar9 != 0) {
      lVar14 = 0;
      do {
        *(undefined8 *)(*plVar7 + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
    }
    *(undefined8 *)(param_5 + 0x220) = 0;
  }
  plVar8 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7d28);
  if ((int)plVar8 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7d28);
    plVar8 = param_6;
    (**(code **)(*param_6 + 0x208))();
    if ((int)plVar8 != 0) {
      iVar16 = 0;
      plVar1 = (long *)(param_5 + 0x218);
      auVar27 = NEON_fmov(0x3f800000,4);
      do {
        uVar22 = (undefined4)param_2;
        (**(code **)(*param_6 + 0x218))(param_6,iVar16);
        (**(code **)(*param_6 + 0xa0))(&lStack_128,param_6,&PTR_DAT_110be7d48);
        (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be8a48);
        (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7ea8);
        plVar11 = param_6;
        (**(code **)(*param_6 + 0x208))();
        lStack_110 = 0;
        puStack_108 = (undefined8 *)0x0;
        plStack_f8 = &lStack_110;
        uStack_100 = 0;
        plStack_f0 = (long *)((ulong)plStack_f0 & 0xffffffffffffff00);
        if ((int)plVar11 != 0) {
          uVar19 = (ulong)plVar11 & 0xffffffff;
          FUN_10a4f1138(&lStack_110,uVar19);
          puVar10 = puStack_108 + uVar19 * 0x13;
          do {
            puStack_108[0xc] = 0;
            puStack_108[0xb] = 0x3f800000;
            puStack_108[0xe] = 0;
            puStack_108[0xd] = 0x3f80000000000000;
            puStack_108[0x10] = 0x3f800000;
            puStack_108[0xf] = 0;
            *puStack_108 = 0;
            puStack_108[1] = 0;
            *(undefined4 *)((long)puStack_108 + 4) = 0xffffffff;
            puStack_108[3] = 0;
            puStack_108[2] = 0;
            puStack_108[5] = 0;
            puStack_108[4] = 0;
            puStack_108[7] = 0;
            puStack_108[6] = 0;
            puStack_108[9] = 0;
            puStack_108[8] = 0;
            puStack_108[10] = 0;
            puStack_108[0x12] = 0x3f80000000000000;
            puStack_108[0x11] = 0;
            puStack_108 = puStack_108 + 0x13;
          } while (puStack_108 != puVar10);
          lVar9 = 0;
          uVar17 = 0;
          puStack_108 = puVar10;
          do {
            (**(code **)(*param_6 + 0x218))(param_6,uVar17);
            (**(code **)(*param_6 + 0xa0))(&plStack_f8,param_6,&PTR_DAT_110be8b28);
            uVar15 = ((long)puStack_108 - lStack_110 >> 3) * -0x79435e50d79435e5;
            if (uVar15 < uVar17 || uVar15 - uVar17 == 0) goto LAB_10a4ceecc;
            lVar14 = lStack_110 + lVar9;
            if (*(char *)(lVar14 + 0x27) < '\0') {
              __ZdlPv(*(undefined8 *)(lVar14 + 0x10));
            }
            *(undefined8 *)(lVar14 + 0x20) = uStack_e8;
            *(long **)(lVar14 + 0x18) = plStack_f0;
            *(long **)(lVar14 + 0x10) = plStack_f8;
            plVar11 = param_6;
            (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110be8b48);
            uVar15 = ((long)puStack_108 - lStack_110 >> 3) * -0x79435e50d79435e5;
            if (uVar15 < uVar17 || uVar15 - uVar17 == 0) goto LAB_10a4ceecc;
            *(int *)(lStack_110 + lVar9) = (int)plVar11;
            plVar11 = param_6;
            (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110be7ec8);
            uVar15 = ((long)puStack_108 - lStack_110 >> 3) * -0x79435e50d79435e5;
            if (uVar15 < uVar17 || uVar15 - uVar17 == 0) goto LAB_10a4ceecc;
            *(int *)(lStack_110 + lVar9 + 4) = (int)plVar11;
            plVar11 = param_6;
            (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110be7ee8);
            uVar15 = ((long)puStack_108 - lStack_110 >> 3) * -0x79435e50d79435e5;
            if (uVar15 < uVar17 || uVar15 - uVar17 == 0) goto LAB_10a4ceecc;
            *(char *)(lStack_110 + lVar9 + 8) = (char)plVar11;
            FUN_10a324e90(param_6,&PTR_DAT_110be7f08,lStack_110 + lVar9 + 0x40);
            uVar15 = ((long)puStack_108 - lStack_110 >> 3) * -0x79435e50d79435e5;
            if (uVar15 < uVar17 || uVar15 - uVar17 == 0) goto LAB_10a4ceecc;
            FUN_10a324e90(param_6,&PTR_DAT_110be7f28,lStack_110 + lVar9 + 0x28);
            (**(code **)(*param_6 + 0x1a8))(&plStack_f8,param_6,&PTR_DAT_110be7f48);
            uVar15 = ((long)puStack_108 - lStack_110 >> 3) * -0x79435e50d79435e5;
            if (uVar15 < uVar17 || uVar15 - uVar17 == 0) goto LAB_10a4ceecc;
            lVar14 = lStack_110 + lVar9;
            param_3 = CONCAT44(uStack_d4,uStack_d8);
            param_4 = CONCAT44(uStack_c4,uStack_c8);
            *(ulong *)(lVar14 + 0x90) = CONCAT44(uStack_bc,uStack_c0);
            *(undefined8 *)(lVar14 + 0x88) = param_4;
            *(ulong *)(lVar14 + 0x80) = CONCAT44(uStack_cc,uStack_d0);
            *(ulong *)(lVar14 + 0x78) = param_3;
            *(ulong *)(lVar14 + 0x70) = CONCAT44(uStack_dc,uStack_e0);
            *(undefined8 *)(lVar14 + 0x68) = uStack_e8;
            *(long **)(lVar14 + 0x60) = plStack_f0;
            *(long **)(lVar14 + 0x58) = plStack_f8;
            uVar31 = uStack_e8;
            (**(code **)(*param_6 + 0x220))(param_6);
            uVar22 = (undefined4)uVar31;
            uVar17 = uVar17 + 1;
            lVar9 = lVar9 + 0x98;
          } while (uVar19 * 0x98 - lVar9 != 0);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7f68);
        uVar23 = (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110be7f88);
        uVar33 = (undefined4)param_4;
        uVar19 = param_3;
        uVar28 = uVar22;
        uVar24 = (**(code **)(*param_6 + 0xe8))(param_6,&PTR_DAT_110be7fa8);
        uVar17 = uVar19;
        uVar29 = uVar28;
        uVar25 = (**(code **)(*param_6 + 0xe8))(param_6,&PTR_DAT_110be7fc8);
        uVar15 = uVar17;
        (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7fe8);
        plVar11 = param_6;
        (**(code **)(*param_6 + 0x208))();
        plStack_f8 = (long *)0x0;
        plStack_f0 = (long *)0x0;
        uStack_e8 = 0;
        uVar3 = (int)param_3;
        uVar4 = (int)uVar19;
        uVar5 = (int)uVar17;
        if ((int)plVar11 != 0) {
          uVar20 = (ulong)plVar11 & 0xffffffff;
          FUN_10a4f100c(&plStack_f8,uVar20);
          plVar11 = (long *)((long)plStack_f0 + uVar20 * 0x2c);
          do {
            plStack_f0[1] = 0;
            *plStack_f0 = 0;
            plStack_f0[3] = 0;
            plStack_f0[2] = 0;
            *(undefined8 *)((long)plStack_f0 + 0x24) = 0;
            *(undefined8 *)((long)plStack_f0 + 0x1c) = 0;
            *(long *)((long)plStack_f0 + 0x14) = auVar27._8_8_;
            *(long *)((long)plStack_f0 + 0xc) = auVar27._0_8_;
            plStack_f0 = (long *)((long)plStack_f0 + 0x2c);
          } while (plStack_f0 != plVar11);
          lVar9 = 0;
          uVar18 = 0;
          uVar32 = param_3 & 0xffffffff;
          plStack_f0 = plVar11;
          uStack_e0 = uVar23;
          uStack_dc = uVar22;
          uStack_d8 = (int)param_3;
          uStack_d4 = uVar33;
          uStack_d0 = uVar24;
          uStack_cc = uVar28;
          uStack_c8 = (int)uVar19;
          uStack_c4 = uVar25;
          uStack_c0 = uVar29;
          uStack_bc = (int)uVar17;
          do {
            (**(code **)(*param_6 + 0x218))(param_6,uVar18);
            unaff_x28 = plStack_f8;
            uVar19 = ((long)plStack_f0 - (long)plStack_f8 >> 2) * 0x2e8ba2e8ba2e8ba3;
            if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
LAB_10a4ceecc:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4ceed0);
              (*pcVar6)();
            }
            uVar22 = (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110be8008);
            puVar2 = (undefined4 *)((long)unaff_x28 + lVar9);
            *puVar2 = uVar22;
            puVar2[1] = (int)uVar32;
            puVar2[2] = (int)uVar15;
            puVar2[3] = (int)param_4;
            uVar22 = (**(code **)(*param_6 + 0xe8))(param_6,&PTR_DAT_110be8028);
            puVar2[4] = uVar22;
            puVar2[5] = (int)uVar32;
            puVar2[6] = (int)uVar15;
            plVar11 = param_6;
            (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be8048);
            if ((int)plVar11 != 0) {
              uVar22 = (**(code **)(*param_6 + 0xe8))(param_6,&PTR_DAT_110be8048);
              *(undefined4 *)((long)unaff_x28 + lVar9 + 0x1c) = uVar22;
              *(int *)((long)unaff_x28 + lVar9 + 0x20) = (int)uVar32;
              *(int *)((long)unaff_x28 + lVar9 + 0x24) = (int)uVar15;
              if ((*(byte *)((long)unaff_x28 + lVar9 + 0x28) & 1) == 0) {
                *(undefined1 *)((long)unaff_x28 + lVar9 + 0x28) = 1;
              }
            }
            (**(code **)(*param_6 + 0x220))(param_6);
            uVar18 = uVar18 + 1;
            lVar9 = lVar9 + 0x2c;
            uVar23 = uStack_e0;
            uVar22 = uStack_dc;
            uVar3 = uStack_d8;
            uVar33 = uStack_d4;
            uVar24 = uStack_d0;
            uVar28 = uStack_cc;
            uVar4 = uStack_c8;
            uVar25 = uStack_c4;
            uVar29 = uStack_c0;
            uVar5 = uStack_bc;
          } while (uVar20 * 0x2c - lVar9 != 0);
        }
        uStack_bc = uVar5;
        uStack_c0 = uVar29;
        uStack_c4 = uVar25;
        uStack_c8 = uVar4;
        uStack_cc = uVar28;
        uStack_d0 = uVar24;
        uStack_d4 = uVar33;
        uStack_d8 = uVar3;
        uStack_dc = uVar22;
        uStack_e0 = uVar23;
        (**(code **)(*param_6 + 0x220))(param_6);
        (**(code **)(*param_6 + 0x220))(param_6);
        lStack_180 = 0;
        lStack_178 = 0;
        lStack_170 = 0;
        FUN_10a4f10b4(&lStack_180,lStack_110,puStack_108,
                      ((long)puStack_108 - lStack_110 >> 3) * -0x79435e50d79435e5);
        lStack_168 = 0;
        lStack_160 = 0;
        lStack_158 = 0;
        FUN_10a4f0f94(&lStack_168,plStack_f8,plStack_f0,
                      ((long)plStack_f0 - (long)plStack_f8 >> 2) * 0x2e8ba2e8ba2e8ba3);
        lStack_150 = CONCAT44(uStack_dc,uStack_e0);
        lStack_148 = CONCAT44(uStack_d4,uStack_d8);
        lStack_138 = CONCAT44(uStack_c4,uStack_c8);
        param_2 = CONCAT44(uStack_cc,uStack_d0);
        lStack_130 = CONCAT44(uStack_bc,uStack_c0);
        param_3 = uVar15;
        uStack_140 = param_2;
        if (plStack_f8 != (long *)0x0) {
          plStack_f0 = plStack_f8;
          __ZdlPv();
          param_3 = uVar15;
        }
        plStack_f8 = &lStack_110;
        FUN_10a34e6f0(&plStack_f8);
        (**(code **)(*param_6 + 0x220))(param_6);
        plVar11 = plVar7;
        func_0x000107c2b05c(plVar7,&lStack_128);
        plVar21 = *(long **)(param_5 + 0x210);
        if (plVar21 != (long *)0x0) {
          uVar19 = (long)plVar21 - 1;
          if (((ulong)plVar21 & uVar19) == 0) {
            unaff_x28 = (long *)(uVar19 & (ulong)plVar11);
          }
          else {
            unaff_x28 = plVar11;
            if (plVar21 <= plVar11) {
              uVar17 = 0;
              if (plVar21 != (long *)0x0) {
                uVar17 = (ulong)plVar11 / (ulong)plVar21;
              }
              unaff_x28 = (long *)((long)plVar11 - uVar17 * (long)plVar21);
            }
          }
          plVar12 = *(long **)(*plVar7 + (long)unaff_x28 * 8);
          if (plVar12 != (long *)0x0) {
            for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              plVar13 = (long *)plVar12[1];
              if (plVar13 == plVar11) {
                plVar13 = plVar7;
                func_0x000107c2b068(plVar7,plVar12 + 2,&lStack_128);
                if (((ulong)plVar13 & 1) != 0) goto LAB_10a4ceb68;
              }
              else {
                if (((ulong)plVar21 & uVar19) == 0) {
                  plVar13 = (long *)((ulong)plVar13 & uVar19);
                }
                else if (plVar21 <= plVar13) {
                  uVar17 = 0;
                  if (plVar21 != (long *)0x0) {
                    uVar17 = (ulong)plVar13 / (ulong)plVar21;
                  }
                  plVar13 = (long *)((long)plVar13 - uVar17 * (long)plVar21);
                }
                if (plVar13 != unaff_x28) break;
              }
            }
          }
        }
        plVar12 = (long *)0x80;
        __Znwm();
        uStack_e8 = 1;
        *plVar12 = 0;
        plVar12[1] = (long)plVar11;
        plVar12[3] = lStack_120;
        plVar12[2] = lStack_128;
        plVar12[4] = lStack_118;
        lStack_128 = 0;
        lStack_120 = 0;
        lStack_118 = 0;
        plVar12[6] = lStack_178;
        plVar12[5] = lStack_180;
        plVar12[7] = lStack_170;
        lStack_180 = 0;
        lStack_178 = 0;
        lStack_170 = 0;
        plVar12[9] = lStack_160;
        plVar12[8] = lStack_168;
        plVar12[10] = lStack_158;
        lStack_168 = 0;
        lStack_160 = 0;
        lStack_158 = 0;
        plVar12[0xf] = lStack_130;
        plVar12[0xe] = lStack_138;
        plVar12[0xd] = uStack_140;
        plVar12[0xc] = lStack_148;
        plVar12[0xb] = lStack_150;
        fVar26 = (float)(*(long *)(param_5 + 0x220) + 1);
        fVar30 = *(float *)(param_5 + 0x228);
        param_2 = (ulong)(uint)fVar30;
        plStack_f8 = plVar12;
        plStack_f0 = plVar7;
        if ((plVar21 == (long *)0x0) ||
           (param_3 = (ulong)(uint)(fVar30 * (float)plVar21), fVar30 * (float)plVar21 < fVar26)) {
          if (plVar21 < (long *)0x3) {
            uVar19 = 1;
          }
          else {
            uVar19 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
          }
          uVar19 = uVar19 | (long)plVar21 << 1;
          uVar17 = (ulong)(fVar26 / fVar30);
          if (uVar19 <= uVar17) {
            uVar19 = uVar17;
          }
          FUN_10a501604(plVar7,uVar19);
          plVar21 = *(long **)(param_5 + 0x210);
          if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
            unaff_x28 = (long *)((long)plVar21 - 1U & (ulong)plVar11);
          }
          else {
            unaff_x28 = plVar11;
            if (plVar21 <= plVar11) {
              uVar19 = 0;
              if (plVar21 != (long *)0x0) {
                uVar19 = (ulong)plVar11 / (ulong)plVar21;
              }
              unaff_x28 = (long *)((long)plVar11 - uVar19 * (long)plVar21);
            }
          }
        }
        lVar9 = *plVar7;
        plVar11 = *(long **)(lVar9 + (long)unaff_x28 * 8);
        if (plVar11 == (long *)0x0) {
          *plVar12 = *plVar1;
          *plVar1 = (long)plVar12;
          *(long **)(lVar9 + (long)unaff_x28 * 8) = plVar1;
          if (*plVar12 != 0) {
            plVar11 = *(long **)(*plVar12 + 8);
            if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
              plVar11 = (long *)((ulong)plVar11 & (long)plVar21 - 1U);
            }
            else if (plVar21 <= plVar11) {
              uVar19 = 0;
              if (plVar21 != (long *)0x0) {
                uVar19 = (ulong)plVar11 / (ulong)plVar21;
              }
              plVar11 = (long *)((long)plVar11 - uVar19 * (long)plVar21);
            }
            *(long **)(*plVar7 + (long)plVar11 * 8) = plVar12;
          }
        }
        else {
          *plVar12 = *plVar11;
          *plVar11 = (long)plVar12;
        }
        *(long *)(param_5 + 0x220) = *(long *)(param_5 + 0x220) + 1;
LAB_10a4ceb68:
        if (lStack_168 != 0) {
          lStack_160 = lStack_168;
          __ZdlPv();
        }
        plStack_f8 = &lStack_180;
        FUN_10a34e6f0(&plStack_f8);
        if (lStack_118 < 0) {
          __ZdlPv(lStack_128);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        iVar16 = iVar16 + 1;
      } while (iVar16 != (int)plVar8);
    }
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  func_0x00010a505c2c(param_5 + 400);
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7d68);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7d68);
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x208))();
    if (0 < (int)plVar7) {
      iVar16 = 0;
      do {
        (**(code **)(*param_6 + 0x218))(param_6,iVar16);
        (**(code **)(*param_6 + 0xa0))(&lStack_180,param_6,&PTR_DAT_110be7d88);
        uVar22 = (**(code **)(*param_6 + 0xe8))(param_6,&PTR_DAT_110be7da8);
        lVar9 = param_5 + 400;
        uVar19 = param_2;
        uVar17 = param_3;
        plStack_f8 = &lStack_180;
        FUN_10a2f99e0(lVar9,&lStack_180,&UNK_10dd5b8f9,&plStack_f8,&lStack_110);
        *(undefined4 *)(lVar9 + 0x28) = uVar22;
        *(int *)(lVar9 + 0x2c) = (int)param_2;
        *(int *)(lVar9 + 0x30) = (int)param_3;
        param_2 = uVar19;
        param_3 = uVar17;
        if (lStack_170 < 0) {
          __ZdlPv(lStack_180);
          param_2 = uVar19;
          param_3 = uVar17;
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        iVar16 = iVar16 + 1;
      } while ((int)plVar7 != iVar16);
    }
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  if (*(long *)(param_5 + 0x158) != 0) {
    func_0x00010a500940(param_5 + 0x140,*(undefined8 *)(param_5 + 0x150));
    *(undefined8 *)(param_5 + 0x150) = 0;
    lVar9 = *(long *)(param_5 + 0x148);
    if (lVar9 != 0) {
      lVar14 = 0;
      do {
        *(undefined8 *)(*(long *)(param_5 + 0x140) + lVar14 * 8) = 0;
        lVar14 = lVar14 + 1;
      } while (lVar9 != lVar14);
    }
    *(undefined8 *)(param_5 + 0x158) = 0;
  }
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7dc8);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be7dc8);
    plVar7 = param_6;
    (**(code **)(*param_6 + 0x208))();
    if (0 < (int)plVar7) {
      iVar16 = 0;
      do {
        (**(code **)(*param_6 + 0x218))(param_6,iVar16);
        (**(code **)(*param_6 + 0xa0))(&lStack_180,param_6,&PTR_DAT_110be7de8);
        lVar9 = param_5 + 0x140;
        plStack_f8 = &lStack_180;
        FUN_10a505c80(lVar9,&lStack_180,&plStack_f8);
        (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_s_event_110be8a68,lVar9 + 0x28);
        if (lStack_170 < 0) {
          __ZdlPv(lStack_180);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        iVar16 = iVar16 + 1;
      } while ((int)plVar7 != iVar16);
    }
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7e08);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110be7e08,param_5 + 0x80);
  }
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be7e28);
  if ((int)plVar7 != 0) {
    (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110be7e28,param_5 + 0xd8);
  }
  return;
}



/* Entry: 10a4cf284; end: 10a4cf363;  */

void FUN_10a4cf284(long param_1,long *param_2)

{
  FUN_10a4cf364();
  if (*(char *)(param_1 + 0x248) == '\x01') {
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7b50);
    (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be7e48,*(undefined1 *)(param_1 + 0x238));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x23c),param_2,&PTR_DAT_110be7e68);
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_id_110be8a88,*(undefined8 *)(param_1 + 0x240));
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x230),param_2,&PTR_DAT_110be7b70);
                    /* WARNING: Could not recover jumptable at 0x00010a4cf360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be7b90,*(undefined1 *)(param_1 + 0x234));
  return;
}



/* Entry: 10a4cf364; end: 10a4cfcbb;  */

void FUN_10a4cf364(long param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a00d760(param_2,&PTR_s_label_110be89e8,param_1 + 0x20);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_id_110be8a08,*(undefined4 *)(param_1 + 0x18));
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110be8a28,param_1 + 0x40);
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110be7c08,param_1 + 0x38);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x60),param_2,&PTR_DAT_110be7c28);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7c48);
  plVar5 = (long *)(param_1 + 0x1f0);
  while( true ) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) break;
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110be7c68,plVar5 + 2);
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_s_direction_110be7c88,plVar5 + 5);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7ca8);
  plVar5 = (long *)(param_1 + 0x178);
  while( true ) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) break;
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110be7cc8,plVar5 + 2);
    (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110be7ce8,plVar5 + 5);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7d08);
  plVar5 = (long *)(param_1 + 0x1c8);
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110be7cc8,plVar5 + 2);
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110be7ce8,plVar5 + 5);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7d28);
  plVar5 = (long *)(param_1 + 0x218);
  while (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110be7d48,plVar5 + 2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8a48);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7ea8);
    puVar1 = (undefined4 *)plVar5[6];
    for (puVar3 = (undefined4 *)plVar5[5]; puVar3 != puVar1; puVar3 = puVar3 + 0x26) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110be8b28,puVar3 + 4);
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be8b48,*puVar3);
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be7ec8,puVar3[1]);
      (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be7ee8,*(undefined1 *)(puVar3 + 2));
      (**(code **)(*param_2 + 0x28))
                (param_2,&PTR_DAT_110be7f08,*(long *)(puVar3 + 0x10),
                 *(long *)(puVar3 + 0x12) - *(long *)(puVar3 + 0x10));
      (**(code **)(*param_2 + 0x28))
                (param_2,&PTR_DAT_110be7f28,*(long *)(puVar3 + 10),
                 *(long *)(puVar3 + 0xc) - *(long *)(puVar3 + 10));
      (**(code **)(*param_2 + 0xf0))(param_2,&PTR_DAT_110be7f48,puVar3 + 0x16);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7f68);
    (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110be7f88,plVar5 + 0xb);
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110be7fa8,plVar5 + 0xd);
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110be7fc8,(long)plVar5 + 0x74);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7fe8);
    lVar2 = plVar5[9];
    for (lVar4 = plVar5[8]; lVar4 != lVar2; lVar4 = lVar4 + 0x2c) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110be8008,lVar4);
      (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110be8028,lVar4 + 0x10);
      if (*(char *)(lVar4 + 0x28) == '\x01') {
        (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110be8048,lVar4 + 0x1c);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7d68);
  plVar5 = (long *)(param_1 + 0x1a0);
  while( true ) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) break;
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110be7d88,plVar5 + 2);
    (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110be7da8,plVar5 + 5);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be7dc8);
  plVar5 = (long *)(param_1 + 0x150);
  while( true ) {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) break;
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110be7de8,plVar5 + 2);
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_event_110be8a68,plVar5 + 5);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  if (*(long *)(param_1 + 200) != 0) {
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110be7e08,param_1 + 0x80);
  }
  if (*(long *)(param_1 + 0x120) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a4cfa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110be7e28,param_1 + 0xd8);
    return;
  }
  return;
}



/* Entry: 10a4cfcbc; end: 10a4cfd1b;  */

void FUN_10a4cfcbc(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110be7bb0);
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a4cfd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110be7bb0,param_1 + 0x28);
    return;
  }
  return;
}



/* Entry: 10a4cfd1c; end: 10a4cfd53;  */

void FUN_10a4cfd1c(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4cfd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110be7bb0,param_1 + 0x28);
  return;
}



/* Entry: 10a4cfd54; end: 10a4cfdb3;  */

void FUN_10a4cfd54(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110be7e88);
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a4cfda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110be7e88,param_1 + 0x28);
    return;
  }
  return;
}



/* Entry: 10a4cfdb4; end: 10a4cfdd3;  */

void FUN_10a4cfdb4(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a4cfdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110be7e88,param_1 + 0x28);
  return;
}



/* Entry: 10a4cfdd4; end: 10a4cfef3;  */

void FUN_10a4cfdd4(long param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 uStack_49;
  long *plStack_48;
  
  if ((param_3 & 1) != 0) {
    for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
      plStack_48 = param_2 + 2;
      lVar1 = param_1 + 0x10;
      FUN_10a507b84(lVar1,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
      for (plVar2 = (long *)param_2[0x12]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        FUN_10a22f5ac(lVar1 + 0x80,plVar2 + 2,plVar2 + 2);
      }
    }
  }
  return;
}



/* Entry: 10a4cfef4; end: 10a4cff23;  */

undefined8 * FUN_10a4cfef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bef348;
  func_0x00010a22fc28(param_1 + 2);
  return param_1;
}



/* Entry: 10a4cff24; end: 10a4d001f;  */

void FUN_10a4cff24(long param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  
  FUN_10a4cb5a0(param_1,param_2);
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)param_4 != *(int *)(param_1 + 4) || param_3 != uVar3) {
    uVar2 = param_3;
    if ((int)param_3 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    iVar4 = uVar3 * (int)param_4 - *(int *)(param_1 + 4) * param_3;
    iVar1 = -iVar4;
    if (-1 < iVar4) {
      iVar1 = iVar4;
    }
    if ((int)(uVar2 * 4) <= iVar1) {
      func_0x00010ae02ecc(0,param_4);
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      func_0x00010ae02ecc();
      ppuVar5 = &PTR_PTR_113302298;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      func_0x00010ae02edc();
      FUN_10ae07cd4(ppuVar5,&PTR_PTR_113302298);
    }
    FUN_10a2288e0(param_1,(ulong)param_3 << 0x20 | param_4 & 0xffffffff);
  }
  return;
}



/* Entry: 10a4d0020; end: 10a4d00b3;  */

long * FUN_10a4d0020(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x20;
    __Znwm();
    *puVar4 = &PTR_DAT_110bea2c0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = lVar6;
  }
  *param_2 = 0;
  plVar5 = (long *)param_1[1];
  *param_1 = lVar6;
  param_1[1] = (long)puVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a4d00b4; end: 10a4d00eb;  */

long FUN_10a4d00b4(long param_1)

{
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_10a4f1494(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a4d00ec; end: 10a4d03b3;  */

void FUN_10a4d00ec(undefined8 *param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined1 uStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  uStack_a0 = 1;
  lStack_90 = 0;
  lStack_88 = 0;
  plStack_98 = (long *)0x0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 2;
  lVar8 = param_2;
  func_0x00010ad031c0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&plStack_98,lVar8);
  uStack_7c = (undefined4)*(undefined8 *)(param_2 + 0x30);
  uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  uStack_80 = uRam00000001132ffd98;
  uStack_74 = 3;
  if (param_3 == 0) {
    uStack_74 = 0;
  }
  if (param_4 == 0) {
    uStack_a0 = 0;
  }
  FUN_10a5049e4(&uStack_b0,&uStack_70,param_2);
  plVar5 = (long *)0x68;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bea310;
  uStack_70 = CONCAT71(uStack_70._1_7_,uStack_a0);
  if (lStack_88 < 0) {
    func_0x000107c3192c(&plStack_68,plStack_98,lStack_90);
  }
  else {
    lStack_60 = lStack_90;
    plStack_68 = plStack_98;
    lStack_58 = lStack_88;
    uStack_70._0_1_ = uStack_a0;
  }
  plVar6 = plVar5 + 3;
  *(undefined1 *)plVar6 = (undefined1)uStack_70;
  plVar5[5] = lStack_60;
  plVar5[4] = (long)plStack_68;
  plVar5[6] = lStack_58;
  plVar5[7] = CONCAT44(uStack_7c,uStack_80);
  *(undefined4 *)(plVar5 + 8) = uStack_78;
  *(undefined1 *)((long)plVar5 + 0x44) = uStack_74;
  plVar5[10] = 0;
  plVar5[9] = 0;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plStack_68 = plStack_a8;
  uStack_70 = uStack_b0;
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = plVar6;
  func_0x000109500008(plVar6,&uStack_70);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (((ulong)plVar7 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar5 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    param_1[1] = plVar5;
    *param_1 = plVar6;
  }
  if (plStack_a8 != (long *)0x0) {
    plVar5 = plStack_a8 + 1;
    do {
      lVar8 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (lStack_88 < 0) {
    __ZdlPv(plStack_98);
  }
  return;
}



/* Entry: 10a4d03b4; end: 10a4d144b;  */

void FUN_10a4d03b4(long *param_1,long *param_2,char *param_3,byte *param_4,long *param_5,int param_6
                  )

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long lStack_e0;
  long *plStack_d8;
  code *pcStack_d0;
  long *plStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  byte bStack_8f;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  
  uVar14 = param_5[1];
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar14 = (ulong)*(byte *)((long)param_5 + 0x17);
  }
  if (uVar14 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*param_3 == '\x01') {
    __ZNSt3__15mutex4lockEv(param_2 + 10);
    plVar26 = param_2;
    FUN_10a506d6c(param_2,param_5);
    if (plVar26 != (long *)0x0) {
      uVar15 = param_2[1];
      lVar10 = *plVar26;
      uVar14 = plVar26[1];
      uVar18 = uVar15 - 1;
      if ((uVar15 & uVar18) == 0) {
        uVar14 = uVar18 & uVar14;
      }
      else if (uVar15 <= uVar14) {
        uVar20 = 0;
        if (uVar15 != 0) {
          uVar20 = uVar14 / uVar15;
        }
        uVar14 = uVar14 - uVar20 * uVar15;
      }
      plVar25 = *(long **)(*param_2 + uVar14 * 8);
      do {
        plVar22 = plVar25;
        plVar25 = (long *)*plVar22;
      } while ((long *)*plVar22 != plVar26);
      if (plVar22 == param_2 + 2) {
LAB_10a4d04b0:
        if (lVar10 == 0) {
LAB_10a4d04e4:
          *(undefined8 *)(*param_2 + uVar14 * 8) = 0;
          lVar10 = *plVar26;
          goto LAB_10a4d04ec;
        }
        uVar20 = *(ulong *)(lVar10 + 8);
        if ((uVar15 & uVar18) == 0) {
          uVar21 = uVar20 & uVar18;
        }
        else {
          uVar21 = uVar20;
          if (uVar15 <= uVar20) {
            uVar21 = 0;
            if (uVar15 != 0) {
              uVar21 = uVar20 / uVar15;
            }
            uVar21 = uVar20 - uVar21 * uVar15;
          }
        }
        if (uVar21 != uVar14) goto LAB_10a4d04e4;
LAB_10a4d04f4:
        if ((uVar15 & uVar18) == 0) {
          uVar20 = uVar20 & uVar18;
        }
        else if (uVar15 <= uVar20) {
          uVar18 = 0;
          if (uVar15 != 0) {
            uVar18 = uVar20 / uVar15;
          }
          uVar20 = uVar20 - uVar18 * uVar15;
        }
        if (uVar20 != uVar14) {
          *(long **)(*param_2 + uVar20 * 8) = plVar22;
          lVar10 = *plVar26;
        }
      }
      else {
        uVar20 = plVar22[1];
        if ((uVar15 & uVar18) == 0) {
          uVar20 = uVar20 & uVar18;
        }
        else if (uVar15 <= uVar20) {
          uVar21 = 0;
          if (uVar15 != 0) {
            uVar21 = uVar20 / uVar15;
          }
          uVar20 = uVar20 - uVar21 * uVar15;
        }
        if (uVar20 != uVar14) goto LAB_10a4d04b0;
LAB_10a4d04ec:
        if (lVar10 != 0) {
          uVar20 = *(ulong *)(lVar10 + 8);
          goto LAB_10a4d04f4;
        }
      }
      *plVar22 = lVar10;
      *plVar26 = 0;
      param_2[3] = param_2[3] + -1;
      func_0x00010a28c4e8(plVar26 + 2);
      __ZdlPv(plVar26);
    }
    plVar26 = param_2 + 5;
    FUN_10a506fd4(plVar26,param_5);
    if (plVar26 != (long *)0x0) {
      FUN_10a5070b0(param_2 + 5,plVar26);
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 10);
  }
  bVar2 = *param_4;
  plVar26 = (long *)(ulong)bVar2;
  FUN_10a4d144c(param_1,param_2,param_5,bVar2 == 0);
  if (*param_1 != 0) {
    plVar26 = param_5;
    FUN_10a506e48();
    plVar25 = (long *)param_2[0x1e];
    if (plVar25 != (long *)0x0) {
      uVar14 = (long)plVar25 - 1;
      if (((ulong)plVar25 & uVar14) == 0) {
        plVar22 = (long *)(uVar14 & (ulong)plVar26);
      }
      else {
        plVar22 = plVar26;
        if (plVar25 <= plVar26) {
          uVar15 = 0;
          if (plVar25 != (long *)0x0) {
            uVar15 = (ulong)plVar26 / (ulong)plVar25;
          }
          plVar22 = (long *)((long)plVar26 - uVar15 * (long)plVar25);
        }
      }
      plVar11 = *(long **)(param_2[0x1d] + (long)plVar22 * 8);
      if (plVar11 != (long *)0x0) {
        for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
          plVar12 = (long *)plVar11[1];
          if (plVar12 == plVar26) {
            uVar15 = (ulong)(plVar11 + 2);
            func_0x00010a506ea8(uVar15,param_5);
            if ((uVar15 & 1) != 0) {
              if (*(int *)(plVar11 + 9) == param_6) {
                return;
              }
              (**(code **)(**(long **)(*param_1 + 0x40) + 0x30))();
              *(int *)(plVar11 + 9) = param_6;
              return;
            }
          }
          else {
            if (((ulong)plVar25 & uVar14) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar14);
            }
            else if (plVar25 <= plVar12) {
              uVar15 = 0;
              if (plVar25 != (long *)0x0) {
                uVar15 = (ulong)plVar12 / (ulong)plVar25;
              }
              plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar25);
            }
            if (plVar12 != plVar22) break;
          }
        }
      }
    }
    FUN_109ffdddc(&UNK_10f639994);
    goto LAB_10a4d1348;
  }
  __ZNSt3__15mutex4lockEv(param_2 + 10);
  plVar25 = param_2;
  func_0x00010a507228(param_2,param_5);
  __ZNSt3__15mutex6unlockEv(param_2 + 10);
  if ((int)plVar25 != 2) {
    return;
  }
  __ZNSt3__15mutex4lockEv(param_2 + 10);
  plVar25 = param_2;
  func_0x00010a507228(param_2,param_5);
  if ((int)plVar25 == 2) {
    puVar23 = (undefined8 *)param_2[0x14];
    plVar25 = (long *)puVar23[2];
    plStack_78 = (long *)0x0;
    puStack_70 = (undefined8 *)0x0;
    if (plVar25 == (long *)0x0) {
      pcStack_d0 = FUN_10a4d00ec;
      FUN_10a507630(&plStack_c8,param_5);
      cVar3 = param_3[0x69];
      bVar4 = param_4[1];
      plVar25 = (long *)(ulong)bVar4;
      puVar7 = (undefined8 *)0x108;
      cStack_90 = cVar3;
      bStack_8f = bVar4;
      __Znwm();
      *(undefined2 *)(puVar7 + 3) = 4;
      puVar7[2] = 0;
      puVar7[1] = 0x200000006;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = puVar7 + 3;
      puVar7[0x12] = 0;
      *(undefined1 *)(puVar7 + 0x13) = 0;
      *(undefined1 *)(puVar7 + 0x15) = 0;
      *puVar7 = &PTR_FUN_110bea3d0;
      plVar22 = puVar7 + 0x16;
      *plVar22 = (long)pcStack_d0;
      puVar7[0x19] = lStack_b8;
      puVar7[0x18] = puStack_c0;
      puVar7[0x17] = plStack_c8;
      puStack_c0 = (undefined8 *)0x0;
      lStack_b8 = 0;
      plStack_c8 = (long *)0x0;
      puVar7[0x1b] = uStack_a8;
      puVar7[0x1a] = uStack_b0;
      puVar7[0x1c] = lStack_a0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      lStack_a0 = 0;
      puVar7[0x1d] = uStack_98;
      *(char *)(puVar7 + 0x1e) = cVar3;
      *(byte *)((long)puVar7 + 0xf1) = bVar4;
      *(undefined1 *)(puVar7 + 0x1f) = 1;
      puVar7[0x20] = 0;
      if (plStack_78 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_78 + 1);
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_78 + 8))();
          }
        }
      }
      plStack_78 = puVar7;
      if (puStack_70 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_70);
      }
      plStack_80 = plVar22;
      puStack_70 = puVar7;
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
      if (lStack_b8 < 0) {
        __ZdlPv(plStack_c8);
      }
      pcStack_68 = FUN_10a5072b0;
    }
    else {
      lStack_88 = 0;
      (**(code **)(*plVar25 + 0x28))(plVar25,0,&lStack_88);
      if (lStack_88 != 0) {
        func_0x0001092af97c(&lStack_88);
        goto LAB_10a4d1348;
      }
      pcStack_d0 = FUN_10a4d00ec;
      FUN_10a507630(&plStack_c8,param_5);
      cVar3 = param_3[0x69];
      bVar4 = param_4[1];
      puVar7 = (undefined8 *)0x110;
      cStack_90 = cVar3;
      bStack_8f = bVar4;
      __Znwm();
      puVar7[2] = 0;
      puVar7[1] = 0x200000006;
      *(undefined2 *)(puVar7 + 3) = 4;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[0xb] = 0;
      puVar7[10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = puVar7 + 3;
      puVar7[0x12] = 0;
      *(undefined1 *)(puVar7 + 0x13) = 0;
      *(undefined1 *)(puVar7 + 0x15) = 0;
      plVar22 = puVar7 + 0x16;
      *plVar22 = (long)pcStack_d0;
      *puVar7 = &PTR_FUN_110bea360;
      puVar7[0x19] = lStack_b8;
      puVar7[0x18] = puStack_c0;
      puVar7[0x17] = plStack_c8;
      puStack_c0 = (undefined8 *)0x0;
      lStack_b8 = 0;
      plStack_c8 = (long *)0x0;
      puVar7[0x1b] = uStack_a8;
      puVar7[0x1a] = uStack_b0;
      puVar7[0x1c] = lStack_a0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      lStack_a0 = 0;
      puVar7[0x1d] = uStack_98;
      *(char *)(puVar7 + 0x1e) = cVar3;
      *(byte *)((long)puVar7 + 0xf1) = bVar4;
      *(undefined1 *)(puVar7 + 0x1f) = 1;
      puVar7[0x20] = 0;
      puVar7[0x21] = plVar25;
      if (plStack_78 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_78 + 1);
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar14 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_78 + 8))();
          }
        }
      }
      plStack_78 = puVar7;
      if (puStack_70 != (undefined8 *)0x0) {
        func_0x0001092b4274(&puStack_70);
      }
      plStack_80 = plVar22;
      puStack_70 = puVar7;
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
      if (lStack_b8 < 0) {
        __ZdlPv(plStack_c8);
      }
      pcStack_68 = (code *)0x10a507280;
      __ZNSt13exception_ptrD1Ev(&lStack_88);
    }
    plVar22 = plStack_80;
    if (plStack_80[10] != 0) {
      func_0x0001092b4274();
    }
    plVar22[10] = (long)puStack_70;
    puStack_70 = (undefined8 *)0x0;
    pcStack_d0 = pcStack_68;
    plStack_c8 = plStack_80;
    puStack_c0 = puVar23;
    (**(code **)*puVar23)(puVar23,&pcStack_d0);
    plVar22 = plStack_78;
    plStack_78 = (long *)0x0;
    if ((puStack_70 != (undefined8 *)0x0) &&
       (func_0x0001092b4274(&puStack_70), plStack_78 != (long *)0x0)) {
      puVar1 = (ulong *)(plStack_78 + 1);
      do {
        uVar14 = *puVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plStack_78 + 8))();
        }
      }
    }
    plVar11 = param_2 + 5;
    plVar12 = param_5;
    FUN_10a506e48();
    plVar24 = (long *)param_2[6];
    if (plVar24 != (long *)0x0) {
      uVar14 = (long)plVar24 - 1;
      if (((ulong)plVar24 & uVar14) == 0) {
        plVar25 = (long *)(uVar14 & (ulong)plVar12);
      }
      else {
        plVar25 = plVar12;
        if (plVar24 <= plVar12) {
          uVar15 = 0;
          if (plVar24 != (long *)0x0) {
            uVar15 = (ulong)plVar12 / (ulong)plVar24;
          }
          plVar25 = (long *)((long)plVar12 - uVar15 * (long)plVar24);
        }
      }
      puVar23 = *(undefined8 **)(*plVar11 + (long)plVar25 * 8);
      if (puVar23 != (undefined8 *)0x0) {
        for (pcVar6 = (code *)*puVar23; pcVar6 != (code *)0x0; pcVar6 = *(code **)pcVar6) {
          plVar13 = *(long **)(pcVar6 + 8);
          if (plVar13 == plVar12) {
            pcVar8 = pcVar6 + 0x10;
            func_0x00010a506ea8(pcVar8,param_5);
            if (((ulong)pcVar8 & 1) != 0) goto LAB_10a4d0e0c;
          }
          else {
            if (((ulong)plVar24 & uVar14) == 0) {
              plVar13 = (long *)((ulong)plVar13 & uVar14);
            }
            else if (plVar24 <= plVar13) {
              uVar15 = 0;
              if (plVar24 != (long *)0x0) {
                uVar15 = (ulong)plVar13 / (ulong)plVar24;
              }
              plVar13 = (long *)((long)plVar13 - uVar15 * (long)plVar24);
            }
            if (plVar13 != plVar25) break;
          }
        }
      }
    }
    pcVar6 = (code *)0x50;
    __Znwm();
    puStack_c0 = (undefined8 *)0x0;
    *(long *)pcVar6 = 0;
    *(long **)(pcVar6 + 8) = plVar12;
    pcStack_d0 = pcVar6;
    plStack_c8 = plVar11;
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      func_0x000107c3192c(pcVar6 + 0x10,*param_5,param_5[1]);
    }
    else {
      lVar10 = *param_5;
      *(long *)(pcVar6 + 0x18) = param_5[1];
      *(long *)(pcVar6 + 0x10) = lVar10;
      *(long *)(pcVar6 + 0x20) = param_5[2];
    }
    if (*(char *)((long)param_5 + 0x2f) < '\0') {
      func_0x000107c3192c(pcVar6 + 0x28,param_5[3],param_5[4]);
    }
    else {
      lVar10 = param_5[3];
      *(long *)(pcVar6 + 0x30) = param_5[4];
      *(long *)(pcVar6 + 0x28) = lVar10;
      *(long *)(pcVar6 + 0x38) = param_5[5];
    }
    *(long *)(pcVar6 + 0x40) = param_5[6];
    *(long *)(pcVar6 + 0x48) = 0;
    puStack_c0 = (undefined8 *)CONCAT71(puStack_c0._1_7_,1);
    if ((plVar24 == (long *)0x0) ||
       (*(float *)(param_2 + 9) * (float)plVar24 < (float)(param_2[8] + 1))) {
      uVar14 = 1;
      if ((long *)0x2 < plVar24) {
        uVar14 = (ulong)(((ulong)plVar24 & (long)plVar24 - 1U) != 0);
      }
      plVar25 = (long *)(uVar14 | (long)plVar24 << 1);
      plVar24 = (long *)(long)((float)(param_2[8] + 1) / *(float *)(param_2 + 9));
      if (plVar25 <= plVar24) {
        plVar25 = plVar24;
      }
      if ((long)plVar25 - 1U == 0) {
        plVar25 = (long *)0x2;
      }
      else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      plVar24 = (long *)param_2[6];
      if (plVar24 < plVar25) {
LAB_10a4d0c20:
        plVar24 = plVar25;
        if ((ulong)plVar24 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a4d1348;
        }
        lVar10 = (long)plVar24 << 3;
        __Znwm();
        lVar9 = *plVar11;
        *plVar11 = lVar10;
        if (lVar9 != 0) {
          __ZdlPv();
        }
        plVar25 = (long *)0x0;
        param_2[6] = (long)plVar24;
        do {
          *(undefined8 *)(*plVar11 + (long)plVar25 * 8) = 0;
          plVar25 = (long *)((long)plVar25 + 1);
        } while (plVar24 != plVar25);
        plVar25 = (long *)param_2[7];
        if (plVar25 != (long *)0x0) {
          plVar13 = (long *)plVar25[1];
          uVar14 = (long)plVar24 - 1;
          if (((ulong)plVar24 & uVar14) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar14);
          }
          else if (plVar24 <= plVar13) {
            uVar15 = 0;
            if (plVar24 != (long *)0x0) {
              uVar15 = (ulong)plVar13 / (ulong)plVar24;
            }
            plVar13 = (long *)((long)plVar13 - uVar15 * (long)plVar24);
          }
          *(long **)(*plVar11 + (long)plVar13 * 8) = param_2 + 7;
          plVar16 = (long *)*plVar25;
          while (plVar16 != (long *)0x0) {
            plVar19 = (long *)plVar16[1];
            if (((ulong)plVar24 & uVar14) == 0) {
              plVar19 = (long *)((ulong)plVar19 & uVar14);
            }
            else if (plVar24 <= plVar19) {
              uVar15 = 0;
              if (plVar24 != (long *)0x0) {
                uVar15 = (ulong)plVar19 / (ulong)plVar24;
              }
              plVar19 = (long *)((long)plVar19 - uVar15 * (long)plVar24);
            }
            plVar17 = plVar16;
            if (plVar19 != plVar13) {
              lVar10 = *plVar11;
              if (*(long *)(lVar10 + (long)plVar19 * 8) == 0) {
                *(long **)(lVar10 + (long)plVar19 * 8) = plVar25;
                plVar13 = plVar19;
              }
              else {
                *plVar25 = *plVar16;
                *plVar16 = **(undefined8 **)(lVar10 + (long)plVar19 * 8);
                **(long **)(lVar10 + (long)plVar19 * 8) = (long)plVar16;
                plVar17 = plVar25;
              }
            }
            plVar25 = plVar17;
            plVar16 = (long *)*plVar17;
          }
        }
      }
      else if (plVar25 < plVar24) {
        plVar13 = (long *)(long)((float)(ulong)param_2[8] / *(float *)(param_2 + 9));
        if ((plVar24 < (long *)0x3) || (((ulong)plVar24 & (long)plVar24 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar13) {
          plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
        }
        if (plVar25 <= plVar13) {
          plVar25 = plVar13;
        }
        if (plVar25 < plVar24) {
          if (plVar25 != (long *)0x0) goto LAB_10a4d0c20;
          lVar10 = *plVar11;
          *plVar11 = 0;
          if (lVar10 != 0) {
            __ZdlPv();
          }
          plVar24 = (long *)0x0;
          param_2[6] = 0;
        }
        else {
          plVar24 = (long *)param_2[6];
        }
      }
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        plVar25 = (long *)((long)plVar24 - 1U & (ulong)plVar12);
      }
      else {
        plVar25 = plVar12;
        if (plVar24 <= plVar12) {
          uVar14 = 0;
          if (plVar24 != (long *)0x0) {
            uVar14 = (ulong)plVar12 / (ulong)plVar24;
          }
          plVar25 = (long *)((long)plVar12 - uVar14 * (long)plVar24);
        }
      }
    }
    lVar10 = *plVar11;
    plVar12 = *(long **)(lVar10 + (long)plVar25 * 8);
    if (plVar12 == (long *)0x0) {
      plVar12 = param_2 + 7;
      *(long *)pcVar6 = *plVar12;
      *plVar12 = (long)pcVar6;
      *(long **)(lVar10 + (long)plVar25 * 8) = plVar12;
      if (*(long *)pcVar6 != 0) {
        plVar25 = *(long **)(*(long *)pcVar6 + 8);
        if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
          plVar25 = (long *)((ulong)plVar25 & (long)plVar24 - 1U);
        }
        else if (plVar24 <= plVar25) {
          uVar14 = 0;
          if (plVar24 != (long *)0x0) {
            uVar14 = (ulong)plVar25 / (ulong)plVar24;
          }
          plVar25 = (long *)((long)plVar25 - uVar14 * (long)plVar24);
        }
        *(code **)(*plVar11 + (long)plVar25 * 8) = pcVar6;
      }
    }
    else {
      *(long *)pcVar6 = *plVar12;
      *plVar12 = (long)pcVar6;
    }
    param_2[8] = param_2[8] + 1;
LAB_10a4d0e0c:
    plVar25 = *(long **)(pcVar6 + 0x48);
    if (plVar25 != (long *)0x0) {
      puVar1 = (ulong *)(plVar25 + 1);
      do {
        uVar14 = *puVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar25 + 8))();
        }
      }
    }
    *(long **)(pcVar6 + 0x48) = plVar22;
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 10);
  FUN_10a4d144c(&lStack_e0,param_2,param_5,bVar2 == 0);
  plVar25 = plStack_d8;
  lVar10 = lStack_e0;
  lStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  plVar22 = (long *)param_1[1];
  param_1[1] = (long)plVar25;
  *param_1 = lVar10;
  if (plVar22 != (long *)0x0) {
    plVar25 = plVar22 + 1;
    do {
      lVar10 = *plVar25;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
    }
  }
  plVar25 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar22 = plStack_d8 + 1;
    do {
      lVar10 = *plVar22;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  plVar25 = param_2 + 0x1d;
  plVar22 = param_5;
  FUN_10a506e48();
  plVar11 = (long *)param_2[0x1e];
  if (plVar11 != (long *)0x0) {
    uVar14 = (long)plVar11 - 1;
    if (((ulong)plVar11 & uVar14) == 0) {
      plVar26 = (long *)(uVar14 & (ulong)plVar22);
    }
    else {
      plVar26 = plVar22;
      if (plVar11 <= plVar22) {
        uVar15 = 0;
        if (plVar11 != (long *)0x0) {
          uVar15 = (ulong)plVar22 / (ulong)plVar11;
        }
        plVar26 = (long *)((long)plVar22 - uVar15 * (long)plVar11);
      }
    }
    puVar23 = *(undefined8 **)(*plVar25 + (long)plVar26 * 8);
    if (puVar23 != (undefined8 *)0x0) {
      for (pcVar6 = (code *)*puVar23; pcVar6 != (code *)0x0; pcVar6 = *(code **)pcVar6) {
        plVar12 = *(long **)(pcVar6 + 8);
        if (plVar12 == plVar22) {
          pcVar8 = pcVar6 + 0x10;
          func_0x00010a506ea8(pcVar8,param_5);
          if (((ulong)pcVar8 & 1) != 0) goto LAB_10a4d1294;
        }
        else {
          if (((ulong)plVar11 & uVar14) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar14);
          }
          else if (plVar11 <= plVar12) {
            uVar15 = 0;
            if (plVar11 != (long *)0x0) {
              uVar15 = (ulong)plVar12 / (ulong)plVar11;
            }
            plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar11);
          }
          if (plVar12 != plVar26) break;
        }
      }
    }
  }
  pcVar6 = (code *)0x50;
  __Znwm();
  puStack_c0 = (undefined8 *)0x0;
  *(long *)pcVar6 = 0;
  *(long **)(pcVar6 + 8) = plVar22;
  pcStack_d0 = pcVar6;
  plStack_c8 = plVar25;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(pcVar6 + 0x10,*param_5,param_5[1]);
  }
  else {
    lVar10 = *param_5;
    *(long *)(pcVar6 + 0x18) = param_5[1];
    *(long *)(pcVar6 + 0x10) = lVar10;
    *(long *)(pcVar6 + 0x20) = param_5[2];
  }
  if (*(char *)((long)param_5 + 0x2f) < '\0') {
    func_0x000107c3192c(pcVar6 + 0x28,param_5[3],param_5[4]);
  }
  else {
    lVar10 = param_5[3];
    *(long *)(pcVar6 + 0x30) = param_5[4];
    *(long *)(pcVar6 + 0x28) = lVar10;
    *(long *)(pcVar6 + 0x38) = param_5[5];
  }
  *(long *)(pcVar6 + 0x40) = param_5[6];
  *(undefined4 *)(pcVar6 + 0x48) = 0;
  puStack_c0 = (undefined8 *)CONCAT71(puStack_c0._1_7_,1);
  if ((plVar11 != (long *)0x0) &&
     ((float)(param_2[0x20] + 1) <= *(float *)(param_2 + 0x21) * (float)plVar11))
  goto LAB_10a4d1220;
  uVar14 = 1;
  if ((long *)0x2 < plVar11) {
    uVar14 = (ulong)(((ulong)plVar11 & (long)plVar11 - 1U) != 0);
  }
  plVar26 = (long *)(uVar14 | (long)plVar11 << 1);
  plVar11 = (long *)(long)((float)(param_2[0x20] + 1) / *(float *)(param_2 + 0x21));
  if (plVar26 <= plVar11) {
    plVar26 = plVar11;
  }
  if ((long)plVar26 - 1U == 0) {
    plVar26 = (long *)0x2;
  }
  else if (((ulong)plVar26 & (long)plVar26 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar11 = (long *)param_2[0x1e];
  if (plVar11 < plVar26) {
LAB_10a4d10a8:
    if ((ulong)plVar26 >> 0x3d != 0) {
      func_0x000109ffded8();
LAB_10a4d1348:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4d134c);
      (*pcVar6)();
    }
    lVar10 = (long)plVar26 << 3;
    __Znwm();
    lVar9 = *plVar25;
    *plVar25 = lVar10;
    if (lVar9 != 0) {
      __ZdlPv();
    }
    plVar11 = (long *)0x0;
    param_2[0x1e] = (long)plVar26;
    do {
      *(undefined8 *)(*plVar25 + (long)plVar11 * 8) = 0;
      plVar11 = (long *)((long)plVar11 + 1);
    } while (plVar26 != plVar11);
    plVar12 = (long *)param_2[0x1f];
    plVar11 = plVar26;
    if (plVar12 != (long *)0x0) {
      plVar24 = (long *)plVar12[1];
      uVar14 = (long)plVar26 - 1;
      if (((ulong)plVar26 & uVar14) == 0) {
        plVar24 = (long *)((ulong)plVar24 & uVar14);
      }
      else if (plVar26 <= plVar24) {
        uVar15 = 0;
        if (plVar26 != (long *)0x0) {
          uVar15 = (ulong)plVar24 / (ulong)plVar26;
        }
        plVar24 = (long *)((long)plVar24 - uVar15 * (long)plVar26);
      }
      *(long **)(*plVar25 + (long)plVar24 * 8) = param_2 + 0x1f;
      plVar13 = (long *)*plVar12;
      while (plVar13 != (long *)0x0) {
        plVar16 = (long *)plVar13[1];
        if (((ulong)plVar26 & uVar14) == 0) {
          plVar16 = (long *)((ulong)plVar16 & uVar14);
        }
        else if (plVar26 <= plVar16) {
          uVar15 = 0;
          if (plVar26 != (long *)0x0) {
            uVar15 = (ulong)plVar16 / (ulong)plVar26;
          }
          plVar16 = (long *)((long)plVar16 - uVar15 * (long)plVar26);
        }
        plVar19 = plVar13;
        if (plVar16 != plVar24) {
          lVar10 = *plVar25;
          if (*(long *)(lVar10 + (long)plVar16 * 8) == 0) {
            *(long **)(lVar10 + (long)plVar16 * 8) = plVar12;
            plVar24 = plVar16;
          }
          else {
            *plVar12 = *plVar13;
            *plVar13 = **(undefined8 **)(lVar10 + (long)plVar16 * 8);
            **(long **)(lVar10 + (long)plVar16 * 8) = (long)plVar13;
            plVar19 = plVar12;
          }
        }
        plVar12 = plVar19;
        plVar13 = (long *)*plVar19;
      }
    }
  }
  else if (plVar26 < plVar11) {
    plVar12 = (long *)(long)((float)(ulong)param_2[0x20] / *(float *)(param_2 + 0x21));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar12) {
      plVar12 = (long *)(1L << (-LZCOUNT((long)plVar12 + -1) & 0x3fU));
    }
    if (plVar26 <= plVar12) {
      plVar26 = plVar12;
    }
    if (plVar26 < plVar11) {
      if (plVar26 != (long *)0x0) goto LAB_10a4d10a8;
      lVar10 = *plVar25;
      *plVar25 = 0;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      param_2[0x1e] = 0;
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)param_2[0x1e];
    }
  }
  if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
    plVar26 = (long *)((long)plVar11 - 1U & (ulong)plVar22);
  }
  else {
    plVar26 = plVar22;
    if (plVar11 <= plVar22) {
      uVar14 = 0;
      if (plVar11 != (long *)0x0) {
        uVar14 = (ulong)plVar22 / (ulong)plVar11;
      }
      plVar26 = (long *)((long)plVar22 - uVar14 * (long)plVar11);
    }
  }
LAB_10a4d1220:
  lVar10 = *plVar25;
  plVar22 = *(long **)(lVar10 + (long)plVar26 * 8);
  if (plVar22 == (long *)0x0) {
    plVar22 = param_2 + 0x1f;
    *(long *)pcVar6 = *plVar22;
    *plVar22 = (long)pcVar6;
    *(long **)(lVar10 + (long)plVar26 * 8) = plVar22;
    if (*(long *)pcVar6 != 0) {
      plVar26 = *(long **)(*(long *)pcVar6 + 8);
      if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
        plVar26 = (long *)((ulong)plVar26 & (long)plVar11 - 1U);
      }
      else if (plVar11 <= plVar26) {
        uVar14 = 0;
        if (plVar11 != (long *)0x0) {
          uVar14 = (ulong)plVar26 / (ulong)plVar11;
        }
        plVar26 = (long *)((long)plVar26 - uVar14 * (long)plVar11);
      }
      *(code **)(*plVar25 + (long)plVar26 * 8) = pcVar6;
    }
  }
  else {
    *(long *)pcVar6 = *plVar22;
    *plVar22 = (long)pcVar6;
  }
  param_2[0x20] = param_2[0x20] + 1;
LAB_10a4d1294:
  *(int *)(pcVar6 + 0x48) = param_6;
  return;
}



/* Entry: 10a4d144c; end: 10a4d1c8f;  */

void FUN_10a4d144c(long *param_1,long *param_2,long *param_3,ulong param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar12 = &lStack_d0;
  __ZNSt3__15mutex4lockEv(param_2 + 10);
  plVar18 = param_2;
  FUN_10a506d6c(param_2,param_3);
  if (plVar18 == (long *)0x0) {
    plVar18 = param_2 + 5;
    FUN_10a506fd4(plVar18,param_3);
    if (plVar18 != (long *)0x0) {
      plVar17 = (long *)plVar18[9];
      if (plVar17 != (long *)0x0) {
        plVar9 = plVar17 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_80 = plVar17;
      if ((param_4 & 1) == 0) {
        if (((uint)plVar17[2] >> 1 & 1) == 0) {
          lVar8 = param_2[0x13];
          lVar19 = param_2[0x13];
          lVar6 = param_2[0x12];
          goto LAB_10a4d1570;
        }
        if ((((uint)plVar17[2] >> 1 & 1) == 0) || (((uint)plVar17[2] >> 5 & 1) != 0)) {
          if (((uint)plVar17[2] >> 5 & 1) != 0) {
            __ZNSt13exception_ptrC1ERKS_(&lStack_d0,plVar17 + 0x12);
            func_0x0001092af97c(&lStack_d0);
            goto LAB_10a4d1ba4;
          }
          puVar7 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          goto LAB_10a4d1b48;
        }
        if ((*(byte *)(plVar17 + 0x15) & 1) == 0) goto LAB_10a4d1ba4;
        lVar8 = plVar17[0x13];
        plVar9 = (long *)plVar17[0x14];
        plVar17[0x13] = 0;
        plVar17[0x14] = 0;
        puVar1 = (ulong *)(plVar17 + 1);
        plStack_80 = (long *)0x0;
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
        *param_1 = lVar8;
        param_1[1] = (long)plVar9;
        FUN_10a5070b0(param_2 + 5,plVar18);
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          func_0x000107c3192c(&lStack_d0,*param_3,param_3[1]);
        }
        else {
          lStack_c8 = param_3[1];
          lStack_d0 = *param_3;
          lStack_c0 = param_3[2];
        }
        if (*(char *)((long)param_3 + 0x2f) < '\0') {
          func_0x000107c3192c(&lStack_b8,param_3[3],param_3[4]);
        }
        else {
          lStack_b0 = param_3[4];
          lStack_b8 = param_3[3];
          lStack_a8 = param_3[5];
        }
        lStack_a0 = param_3[6];
        if (plVar9 != (long *)0x0) {
          plVar17 = plVar9 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar3) {
              *plVar17 = *plVar17 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lStack_98 = lVar8;
        plStack_90 = plVar9;
        FUN_10a506e48();
        plVar17 = (long *)param_2[1];
        if (plVar17 != (long *)0x0) {
          uVar11 = (long)plVar17 - 1;
          if (((ulong)plVar17 & uVar11) == 0) {
            plVar18 = (long *)(uVar11 & (ulong)plVar12);
          }
          else {
            plVar18 = plVar12;
            if (plVar17 <= plVar12) {
              uVar5 = 0;
              if (plVar17 != (long *)0x0) {
                uVar5 = (ulong)plVar12 / (ulong)plVar17;
              }
              plVar18 = (long *)((long)plVar12 - uVar5 * (long)plVar17);
            }
          }
          plVar9 = *(long **)(*param_2 + (long)plVar18 * 8);
          if (plVar9 != (long *)0x0) {
            for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
              plVar10 = (long *)plVar9[1];
              if (plVar10 == plVar12) {
                uVar5 = (ulong)(plVar9 + 2);
                func_0x00010a506ea8(uVar5,&lStack_d0);
                if ((uVar5 & 1) != 0) goto LAB_10a4d1a64;
              }
              else {
                if (((ulong)plVar17 & uVar11) == 0) {
                  plVar10 = (long *)((ulong)plVar10 & uVar11);
                }
                else if (plVar17 <= plVar10) {
                  uVar5 = 0;
                  if (plVar17 != (long *)0x0) {
                    uVar5 = (ulong)plVar10 / (ulong)plVar17;
                  }
                  plVar10 = (long *)((long)plVar10 - uVar5 * (long)plVar17);
                }
                if (plVar10 != plVar18) break;
              }
            }
          }
        }
        plVar9 = (long *)0x58;
        __Znwm();
        uStack_68 = 0;
        *plVar9 = 0;
        plVar9[1] = (long)plVar12;
        plStack_78 = plVar9;
        plStack_70 = param_2;
        if (lStack_c0 < 0) {
          func_0x000107c3192c(plVar9 + 2,lStack_d0,lStack_c8);
        }
        else {
          plVar9[3] = lStack_c8;
          plVar9[2] = lStack_d0;
          plVar9[4] = lStack_c0;
        }
        if (lStack_a8 < 0) {
          func_0x000107c3192c(plVar9 + 5,lStack_b8,lStack_b0);
        }
        else {
          plVar9[6] = lStack_b0;
          plVar9[5] = lStack_b8;
          plVar9[7] = lStack_a8;
        }
        plVar9[8] = lStack_a0;
        plVar9[10] = (long)plStack_90;
        plVar9[9] = lStack_98;
        lStack_98 = 0;
        plStack_90 = (long *)0x0;
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        if ((plVar17 == (long *)0x0) ||
           (*(float *)(param_2 + 4) * (float)plVar17 < (float)(param_2[3] + 1))) {
          uVar11 = 1;
          if ((long *)0x2 < plVar17) {
            uVar11 = (ulong)(((ulong)plVar17 & (long)plVar17 - 1U) != 0);
          }
          plVar18 = (long *)(uVar11 | (long)plVar17 << 1);
          plVar17 = (long *)(long)((float)(param_2[3] + 1) / *(float *)(param_2 + 4));
          if (plVar18 <= plVar17) {
            plVar18 = plVar17;
          }
          if ((long)plVar18 - 1U == 0) {
            plVar18 = (long *)0x2;
          }
          else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          plVar17 = (long *)param_2[1];
          if (plVar17 < plVar18) {
LAB_10a4d1878:
            if ((ulong)plVar18 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a4d1ba4;
            }
            lVar8 = (long)plVar18 << 3;
            __Znwm();
            lVar6 = *param_2;
            *param_2 = lVar8;
            if (lVar6 != 0) {
              __ZdlPv();
            }
            plVar17 = (long *)0x0;
            param_2[1] = (long)plVar18;
            do {
              *(undefined8 *)(*param_2 + (long)plVar17 * 8) = 0;
              plVar17 = (long *)((long)plVar17 + 1);
            } while (plVar18 != plVar17);
            plVar10 = (long *)param_2[2];
            plVar17 = plVar18;
            if (plVar10 != (long *)0x0) {
              plVar13 = (long *)plVar10[1];
              uVar11 = (long)plVar18 - 1;
              if (((ulong)plVar18 & uVar11) == 0) {
                plVar13 = (long *)((ulong)plVar13 & uVar11);
              }
              else if (plVar18 <= plVar13) {
                uVar5 = 0;
                if (plVar18 != (long *)0x0) {
                  uVar5 = (ulong)plVar13 / (ulong)plVar18;
                }
                plVar13 = (long *)((long)plVar13 - uVar5 * (long)plVar18);
              }
              *(long **)(*param_2 + (long)plVar13 * 8) = param_2 + 2;
              plVar14 = (long *)*plVar10;
              while (plVar14 != (long *)0x0) {
                plVar16 = (long *)plVar14[1];
                if (((ulong)plVar18 & uVar11) == 0) {
                  plVar16 = (long *)((ulong)plVar16 & uVar11);
                }
                else if (plVar18 <= plVar16) {
                  uVar5 = 0;
                  if (plVar18 != (long *)0x0) {
                    uVar5 = (ulong)plVar16 / (ulong)plVar18;
                  }
                  plVar16 = (long *)((long)plVar16 - uVar5 * (long)plVar18);
                }
                plVar15 = plVar14;
                if (plVar16 != plVar13) {
                  lVar8 = *param_2;
                  if (*(long *)(lVar8 + (long)plVar16 * 8) == 0) {
                    *(long **)(lVar8 + (long)plVar16 * 8) = plVar10;
                    plVar13 = plVar16;
                  }
                  else {
                    *plVar10 = *plVar14;
                    *plVar14 = **(undefined8 **)(lVar8 + (long)plVar16 * 8);
                    **(long **)(lVar8 + (long)plVar16 * 8) = (long)plVar14;
                    plVar15 = plVar10;
                  }
                }
                plVar10 = plVar15;
                plVar14 = (long *)*plVar15;
              }
            }
          }
          else if (plVar18 < plVar17) {
            plVar10 = (long *)(long)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
            if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((long *)0x1 < plVar10) {
              plVar10 = (long *)(1L << (-LZCOUNT((long)plVar10 + -1) & 0x3fU));
            }
            if (plVar18 <= plVar10) {
              plVar18 = plVar10;
            }
            if (plVar18 < plVar17) {
              if (plVar18 != (long *)0x0) goto LAB_10a4d1878;
              lVar8 = *param_2;
              *param_2 = 0;
              if (lVar8 != 0) {
                __ZdlPv();
              }
              param_2[1] = 0;
              plVar17 = (long *)0x0;
            }
            else {
              plVar17 = (long *)param_2[1];
            }
          }
          if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
            plVar18 = (long *)((long)plVar17 - 1U & (ulong)plVar12);
          }
          else {
            plVar18 = plVar12;
            if (plVar17 <= plVar12) {
              uVar11 = 0;
              if (plVar17 != (long *)0x0) {
                uVar11 = (ulong)plVar12 / (ulong)plVar17;
              }
              plVar18 = (long *)((long)plVar12 - uVar11 * (long)plVar17);
            }
          }
        }
        lVar8 = *param_2;
        plVar12 = *(long **)(lVar8 + (long)plVar18 * 8);
        if (plVar12 == (long *)0x0) {
          plVar12 = param_2 + 2;
          *plVar9 = *plVar12;
          *plVar12 = (long)plVar9;
          *(long **)(lVar8 + (long)plVar18 * 8) = plVar12;
          if (*plVar9 != 0) {
            plVar18 = *(long **)(*plVar9 + 8);
            if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
              plVar18 = (long *)((ulong)plVar18 & (long)plVar17 - 1U);
            }
            else if (plVar17 <= plVar18) {
              uVar11 = 0;
              if (plVar17 != (long *)0x0) {
                uVar11 = (ulong)plVar18 / (ulong)plVar17;
              }
              plVar18 = (long *)((long)plVar18 - uVar11 * (long)plVar17);
            }
            *(long **)(*param_2 + (long)plVar18 * 8) = plVar9;
          }
        }
        else {
          *plVar9 = *plVar12;
          *plVar12 = (long)plVar9;
        }
        param_2[3] = param_2[3] + 1;
LAB_10a4d1a64:
        plVar18 = plStack_90;
        if (plStack_90 != (long *)0x0) {
          plVar12 = plStack_90 + 1;
          do {
            lVar8 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
        if (lStack_a8 < 0) {
          __ZdlPv(lStack_b8);
        }
        if (lStack_c0 < 0) {
          __ZdlPv(lStack_d0);
        }
      }
      else {
        __ZNSt3__15mutex6unlockEv(param_2 + 10);
        FUN_109d1a244(&plStack_80);
        plVar18 = plVar17 + 2;
        if ((((uint)*plVar18 >> 1 & 1) == 0) || (((uint)*plVar18 >> 5 & 1) != 0)) {
          if (((uint)*plVar18 >> 5 & 1) != 0) {
            __ZNSt13exception_ptrC1ERKS_(&lStack_d0,plVar17 + 0x12);
            func_0x0001092af97c(&lStack_d0);
            goto LAB_10a4d1ba4;
          }
          puVar7 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
LAB_10a4d1b48:
          *puVar7 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar7,&PTR_DAT_110ae8598,&DAT_1092af9d8);
LAB_10a4d1ba4:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4d1ba8);
          (*pcVar4)();
        }
        if ((*(byte *)(plVar17 + 0x15) & 1) == 0) goto LAB_10a4d1ba4;
        lVar8 = plVar17[0x14];
        lVar19 = plVar17[0x14];
        lVar6 = plVar17[0x13];
LAB_10a4d1570:
        param_1[1] = lVar19;
        *param_1 = lVar6;
        if (lVar8 != 0) {
          plVar18 = (long *)(lVar8 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *plVar18 = *plVar18 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        puVar1 = (ulong *)(plVar17 + 1);
        do {
          uVar11 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11 - 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar11 - 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar17 + 8))(plVar17);
          }
        }
      }
      if ((param_4 & 1) != 0) {
        return;
      }
      goto LAB_10a4d14b8;
    }
    lVar8 = param_2[0x13];
    lVar19 = param_2[0x13];
    lVar6 = param_2[0x12];
  }
  else {
    lVar8 = plVar18[10];
    lVar19 = plVar18[10];
    lVar6 = plVar18[9];
  }
  param_1[1] = lVar19;
  *param_1 = lVar6;
  if (lVar8 != 0) {
    plVar18 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = *plVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
LAB_10a4d14b8:
  __ZNSt3__15mutex6unlockEv(param_2 + 10);
  return;
}



/* Entry: 10a4d1c90; end: 10a4d40d7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a4d1c90(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,ulong param_6,long param_7,long param_8)

{
  long **pplVar1;
  long **pplVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  byte bVar23;
  code *pcVar24;
  bool bVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined **ppuVar28;
  long *plVar29;
  long **pplVar30;
  long **pplVar31;
  undefined8 *puVar32;
  int iVar33;
  undefined4 *puVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  ulong uVar38;
  long ***ppplVar39;
  int iVar40;
  long lVar41;
  int *piVar42;
  int iVar43;
  int iVar44;
  long *plVar45;
  long lVar46;
  long *plVar47;
  ulong uVar48;
  long *plVar49;
  long *plVar50;
  ulong uVar51;
  long *plVar52;
  double *pdVar53;
  double dVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  undefined4 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined *puStack_5b8;
  long *plStack_528;
  long *plStack_520;
  long *plStack_518;
  long *plStack_510;
  long *plStack_508;
  long *plStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  long *plStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  float fStack_4d0;
  undefined4 uStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long **pplStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  double dStack_358;
  double dStack_350;
  double dStack_348;
  double dStack_340;
  undefined8 uStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double *pdStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  long lStack_288;
  undefined4 uStack_280;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long **pplStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_110;
  float fStack_108;
  undefined4 uStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float *pfStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  plStack_528 = (long *)0x0;
  plStack_520 = (long *)0x0;
  plStack_518 = (long *)0x0;
  if (param_6 != 0) {
    if (param_6 >> 0x3c != 0) {
      FUN_10a4f1358();
      goto LAB_10a4d3dbc;
    }
    plVar45 = (long *)(param_6 * 0x10);
    __Znwm();
    plStack_518 = plVar45 + param_6 * 2;
    plStack_528 = plVar45;
    _bzero();
    uVar51 = 0;
    plStack_520 = plVar45 + param_6 * 2;
    puStack_5b8 = &UNK_10f65d043;
    do {
      plVar45 = (long *)(param_5 + uVar51 * 0x80);
      plVar49 = plVar45;
      func_0x00010a0ed4c8();
      pdVar53 = (double *)(plVar49[1] - *plVar49);
      lVar46 = (long)pdVar53 >> 3;
      if (pdVar53 == (double *)0x0 || lVar46 < 1) {
        pdVar53 = (double *)0x0;
      }
      else {
        _malloc();
        if (pdVar53 == (double *)0x0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10a4d3dbc;
        }
      }
      plVar49 = plVar45;
      func_0x00010a0ed4c8();
      if (plVar49[1] != *plVar49) {
        uVar48 = 0;
        do {
          plVar49 = plVar45;
          func_0x00010a0ed4c8();
          if ((ulong)(plVar49[1] - *plVar49 >> 3) <= uVar48) goto LAB_10a4d3dbc;
          pdVar53[uVar48] = *(double *)(*plVar49 + uVar48 * 8);
          uVar48 = uVar48 + 1;
          plVar49 = plVar45;
          func_0x00010a0ed4c8();
        } while (uVar48 < (ulong)(plVar49[1] - *plVar49 >> 3));
      }
      func_0x0001093f6250(&uStack_230);
      dVar7 = uStack_338;
      iVar40 = (int)plVar45[0xd];
      if (1 < iVar40) {
        if (iVar40 == 2) {
          if (7 < lVar46) {
            lVar46 = 0;
            dVar14 = *pdVar53;
            dVar15 = pdVar53[1];
            dVar9 = pdVar53[3];
            dVar7 = pdVar53[2];
            dStack_358 = dVar15;
            uStack_360 = dVar14;
            dStack_348 = dVar9;
            dStack_350 = dVar7;
            dVar16 = pdVar53[4];
            dVar17 = pdVar53[5];
            dVar10 = pdVar53[7];
            dVar8 = pdVar53[6];
            uStack_338 = dVar17;
            dStack_340 = dVar16;
            dStack_328 = dVar10;
            dStack_330 = dVar8;
            do {
              dVar54 = *(double *)((long)&uStack_360 + lVar46);
              if (2.220446049250313e-16 < ABS(dVar54)) break;
              bVar25 = lVar46 != 0x38;
              lVar46 = lVar46 + 8;
            } while (bVar25);
            plVar49 = (long *)0x50;
            __Znwm();
            plVar49[9] = 0;
            *plVar49 = (long)&PTR_DAT_110af5ab0;
            plVar49[2] = (long)dVar15;
            plVar49[1] = (long)dVar14;
            plVar49[4] = (long)dVar9;
            plVar49[3] = (long)dVar7;
            plVar49[6] = (long)dVar17;
            plVar49[5] = (long)dVar16;
            plVar49[8] = (long)dVar10;
            plVar49[7] = (long)dVar8;
            *(undefined4 *)(plVar49 + 9) = 10;
            *(bool *)((long)plVar49 + 0x4c) = ABS(dVar54) <= 2.220446049250313e-16;
LAB_10a4d1fac:
            plVar47 = uStack_230;
            if (uStack_230 != (long *)0x0) {
              lVar46 = *uStack_230;
              uStack_230 = plVar49;
              (**(code **)(lVar46 + 8))(plVar47);
              plVar49 = uStack_230;
            }
            goto LAB_10a4d1fc8;
          }
          puStack_5b8 = &UNK_10f65cf59;
        }
        else if (iVar40 == 3) {
          if (9 < lVar46) {
            dVar9 = pdVar53[1];
            dVar7 = *pdVar53;
            dVar14 = pdVar53[2];
            dVar15 = pdVar53[3];
            dVar10 = pdVar53[5];
            dVar8 = pdVar53[4];
            dVar16 = pdVar53[6];
            dVar17 = pdVar53[7];
            dVar54 = pdVar53[8];
            dVar18 = pdVar53[9];
            plVar49 = (long *)0x68;
            __Znwm();
            *plVar49 = (long)&PTR_DAT_110af5be0;
            *(undefined4 *)(plVar49 + 1) = 0xf;
            plVar49[2] = 0x3ddb7cdfd9d7bdbb;
            plVar49[4] = (long)dVar9;
            plVar49[3] = (long)dVar7;
            plVar49[6] = (long)dVar15;
            plVar49[5] = (long)dVar14;
            plVar49[8] = (long)dVar10;
            plVar49[7] = (long)dVar8;
            plVar49[10] = (long)dVar17;
            plVar49[9] = (long)dVar16;
            plVar49[0xc] = (long)dVar18;
            plVar49[0xb] = (long)dVar54;
            goto LAB_10a4d1fac;
          }
          puStack_5b8 = &UNK_10f65cfa6;
        }
LAB_10a4d3d7c:
        FUN_10a00946c(puStack_5b8);
        goto LAB_10a4d3dbc;
      }
      if (iVar40 != 0) {
        if (iVar40 == 1) {
          if (4 < lVar46) {
            lVar46 = 0;
            uStack_338 = (double)CONCAT44(uStack_338._4_4_,10);
            uStack_360 = *pdVar53;
            dStack_358 = pdVar53[1];
            dStack_348 = pdVar53[3];
            dStack_350 = pdVar53[2];
            fStack_108 = SUB84(dStack_358,0);
            uStack_104 = (undefined4)((ulong)dStack_358 >> 0x20);
            uStack_110._0_4_ = SUB84(uStack_360,0);
            uStack_110._4_4_ = (float)((ulong)uStack_360 >> 0x20);
            uStack_f8 = SUB84(dStack_348,0);
            fStack_f4 = (float)((ulong)dStack_348 >> 0x20);
            fStack_100 = SUB84(dStack_350,0);
            uStack_fc = (undefined4)((ulong)dStack_350 >> 0x20);
            dStack_340 = pdVar53[4];
            fStack_f0 = SUB84(dStack_340,0);
            uStack_ec = (undefined4)((ulong)dStack_340 >> 0x20);
            do {
              pdVar6 = (double *)((long)&uStack_110 + lVar46);
              if (2.220446049250313e-16 < ABS(*pdVar6)) break;
              bVar25 = lVar46 != 0x20;
              lVar46 = lVar46 + 8;
            } while (bVar25);
            uStack_338._5_3_ = SUB83(dVar7,5);
            uStack_338._0_5_ = CONCAT14(ABS(*pdVar6) <= 2.220446049250313e-16,10);
            func_0x0001093f57c4(&uStack_230,&uStack_360);
            plVar49 = uStack_230;
            goto LAB_10a4d1fc8;
          }
          puStack_5b8 = &UNK_10f65cff6;
        }
        goto LAB_10a4d3d7c;
      }
      plVar49 = (long *)0x10;
      __Znwm();
      *plVar49 = (long)&PTR_DAT_110af5830;
      plVar49[1] = 0;
      if (uStack_230 != (long *)0x0) {
        lVar46 = *uStack_230;
        uStack_230 = plVar49;
        (**(code **)(lVar46 + 8))();
        plVar49 = uStack_230;
      }
LAB_10a4d1fc8:
      uStack_230 = plVar49;
      auVar58._0_8_ = (long)(int)*(undefined8 *)((long)plVar45 + 4);
      auVar58._8_8_ = (long)(int)((ulong)*(undefined8 *)((long)plVar45 + 4) >> 0x20);
      auVar58 = NEON_scvtf(auVar58,8);
      plStack_238 = auVar58._8_8_;
      plStack_240 = auVar58._0_8_;
      dStack_250 = (double)(float)*(undefined8 *)((long)plVar45 + 0x14);
      dStack_248 = (double)(float)((ulong)*(undefined8 *)((long)plVar45 + 0x14) >> 0x20);
      dStack_260 = (double)(float)*(undefined8 *)((long)plVar45 + 0x1c);
      dStack_258 = (double)(float)((ulong)*(undefined8 *)((long)plVar45 + 0x1c) >> 0x20);
      func_0x0001093f56e8(&uStack_230,&plStack_240,&dStack_250,&dStack_260);
      uStack_110._0_4_ = *(undefined4 *)((long)plVar45 + 0x24);
      uStack_104 = (undefined4)plVar45[6];
      fStack_100 = -*(float *)((long)plVar45 + 0x34);
      fStack_e4 = -*(float *)(plVar45 + 10);
      uStack_110._4_4_ = -(float)plVar45[5];
      fStack_108 = -(float)((ulong)plVar45[5] >> 0x20);
      fStack_f4 = -(float)plVar45[8];
      fStack_f0 = -(float)((ulong)plVar45[8] >> 0x20);
      uStack_fc = (undefined4)plVar45[7];
      uStack_f8 = (undefined4)((ulong)plVar45[7] >> 0x20);
      uStack_ec = (undefined4)plVar45[9];
      uStack_e8 = (undefined4)((ulong)plVar45[9] >> 0x20);
      uStack_e0 = CONCAT44((float)((ulong)*(undefined8 *)((long)plVar45 + 0x54) >> 0x20) * -0.01,
                           (float)*(undefined8 *)((long)plVar45 + 0x54) * 0.01);
      uStack_d8 = CONCAT44((int)plVar45[0xc],*(float *)((long)plVar45 + 0x5c) * -0.01);
      func_0x0001094f5708(auStack_2a0,&uStack_110);
      plStack_510 = (long *)((ulong)plStack_510 & 0xffffffffffffff00);
      plStack_508 = (long *)((ulong)plStack_508 & 0xffffffffffffff00);
      func_0x0001094cf620(&plStack_500,&uStack_230);
      lVar46 = 0;
      puStack_3e0 = (undefined8 *)0x0;
      puStack_3d8 = (undefined8 *)0x0;
      uStack_3d0 = 0;
      uStack_3c8 = 0x3ff0000000000000;
      uStack_3b8 = 0;
      uStack_3b0 = 0;
      ppplVar39 = &pplStack_3a0;
      uStack_3c0 = 0;
      do {
        lVar41 = 0;
        do {
          iVar40 = (int)lVar41;
          puVar26 = (undefined8 *)auStack_2a0;
          if (iVar40 == 1) {
            puVar26 = (undefined8 *)((long)auStack_2a0 + 4);
          }
          puVar32 = (undefined8 *)auStack_298;
          if (iVar40 != 2) {
            puVar32 = puVar26;
          }
          puVar26 = (undefined8 *)((long)auStack_298 + 4);
          if (iVar40 != 3) {
            puVar26 = puVar32;
          }
          *(undefined4 *)((long)ppplVar39 + lVar41 * 4) = *(undefined4 *)(puVar26 + lVar46 * 2);
          lVar41 = lVar41 + 1;
        } while (lVar41 != 4);
        lVar46 = lVar46 + 1;
        ppplVar39 = ppplVar39 + 2;
      } while (lVar46 != 4);
      uStack_360 = (double)SUB84(pplStack_3a0,0);
      dStack_358 = (double)(float)((ulong)pplStack_3a0 >> 0x20);
      dStack_350 = (double)SUB84(plStack_398,0);
      dStack_348 = (double)(float)((ulong)plStack_398 >> 0x20);
      dStack_340 = (double)(float)uStack_390;
      uStack_338 = (double)(float)((ulong)uStack_390 >> 0x20);
      dStack_330 = (double)(float)uStack_388;
      dStack_328 = (double)(float)((ulong)uStack_388 >> 0x20);
      dStack_320 = (double)(float)uStack_380;
      pdStack_318 = (double *)(double)(float)((ulong)uStack_380 >> 0x20);
      dStack_310 = (double)(float)uStack_378;
      dStack_308 = (double)(float)((ulong)uStack_378 >> 0x20);
      dStack_300 = (double)(float)uStack_370;
      dStack_2f8 = (double)(float)((ulong)uStack_370 >> 0x20);
      dStack_2f0 = (double)(float)uStack_368;
      dStack_2e8 = (double)(float)((ulong)uStack_368 >> 0x20);
      func_0x00010950ff9c(&puStack_2e0,&uStack_360);
      plVar45 = uStack_230;
      puStack_3d8 = puStack_2d8;
      puStack_3e0 = puStack_2e0;
      uStack_3c8 = uStack_2c8;
      uStack_3d0 = uStack_2d0;
      uStack_3b8 = uStack_2b8;
      uStack_3c0 = uStack_2c0;
      uStack_3b0 = uStack_2b0;
      uStack_230 = (long *)0x0;
      if (plVar45 != (long *)0x0) {
        (**(code **)(*plVar45 + 8))();
      }
      _free(pdVar53);
      puVar26 = (undefined8 *)0x180;
      __Znwm();
      puVar26[1] = 0;
      puVar26[2] = 0;
      *puVar26 = &PTR_FUN_110bea270;
      puVar26[4] = plStack_508;
      puVar26[3] = plStack_510;
      func_0x0001094cf620(puVar26 + 5,&plStack_500);
      puVar26[0x2a] = puStack_3d8;
      puVar26[0x29] = puStack_3e0;
      puVar26[0x2c] = uStack_3c8;
      puVar26[0x2b] = uStack_3d0;
      puVar26[0x2e] = uStack_3b8;
      puVar26[0x2d] = uStack_3c0;
      puVar26[0x2f] = uStack_3b0;
      if ((ulong)((long)plStack_520 - (long)plStack_528 >> 4) <= uVar51) goto LAB_10a4d3dbc;
      plVar45 = plStack_528 + uVar51 * 2;
      plVar49 = (long *)plVar45[1];
      *plVar45 = (long)(puVar26 + 3);
      plVar45[1] = (long)puVar26;
      if (plVar49 != (long *)0x0) {
        plVar45 = plVar49 + 1;
        do {
          lVar46 = *plVar45;
          cVar5 = '\x01';
          bVar25 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar25) {
            *plVar45 = lVar46 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar46 == 0) {
          (**(code **)(*plVar49 + 0x10))(plVar49);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
        }
      }
      plVar45 = plStack_500;
      plStack_500 = (long *)0x0;
      if (plVar45 != (long *)0x0) {
        (**(code **)(*plVar45 + 8))();
      }
      uVar51 = uVar51 + 1;
    } while (uVar51 != param_6);
  }
  plStack_510 = (long *)((ulong)plStack_510 & 0xffffffffffffff00);
  fStack_4d0 = (float)((uint)fStack_4d0 & 0xffffff00);
  func_0x0001094ff3cc(param_2,param_4,&plStack_528,&plStack_510,(double)param_3 / 1000000000.0,1);
  FUN_10a4f136c(&plStack_528);
  plVar45 = (long *)0xa8;
  __Znwm();
  plVar47 = plVar45 + 1;
  *plVar47 = 0;
  plVar45[2] = 0;
  *plVar45 = (long)&PTR_FUN_110bea408;
  plVar29 = plVar45 + 3;
  plVar45[4] = 0;
  *plVar29 = 0;
  plVar45[0x14] = 0;
  plVar45[0x13] = 0;
  plVar45[6] = 0;
  plVar45[5] = 0;
  plVar45[8] = 0;
  plVar45[7] = 0;
  plVar45[10] = 0;
  plVar45[9] = 0;
  plVar45[0xc] = 0;
  plVar45[0xb] = 0;
  plVar45[0xe] = 0;
  plVar45[0xd] = 0;
  plVar45[0x10] = 0;
  plVar45[0xf] = 0;
  plVar45[0x12] = 0;
  plVar45[0x11] = 0;
  *(undefined1 *)(plVar45 + 0x14) = 1;
  plVar49 = *(long **)(param_8 + 0x10);
  plStack_528 = plVar29;
  plStack_520 = plVar45;
  if (plVar49 == (long *)0x0) {
    iVar33 = 0;
    iVar40 = 0;
  }
  else {
    iVar40 = 0;
    iVar43 = 0;
    iVar44 = 0;
    iVar33 = 0;
    do {
      iVar4 = *(int *)((long)plVar49 + 0x14);
      if (iVar4 < 2) {
        if (iVar4 == 0) {
          if (iVar33 <= (int)plVar49[2] + 1) {
            iVar33 = (int)plVar49[2] + 1;
          }
        }
        else {
          if (iVar4 != 1) {
LAB_10a4d3d48:
            FUN_10a00946c(&UNK_10f65cefd);
            goto LAB_10a4d3dbc;
          }
          if (iVar40 <= (int)plVar49[2] + 1) {
            iVar40 = (int)plVar49[2] + 1;
          }
        }
      }
      else if (iVar4 == 2) {
        if (iVar43 <= (int)plVar49[2] + 1) {
          iVar43 = (int)plVar49[2] + 1;
        }
      }
      else {
        if (iVar4 != 3) goto LAB_10a4d3d48;
        if (iVar44 <= (int)plVar49[2] + 1) {
          iVar44 = (int)plVar49[2] + 1;
        }
      }
      plVar49 = (long *)*plVar49;
    } while (plVar49 != (long *)0x0);
    iVar40 = iVar43 + iVar44 + iVar40;
  }
  if (iVar40 <= iVar33) {
    iVar40 = iVar33;
  }
  *(int *)(plVar45 + 3) = iVar40;
  *(undefined1 *)((long)plVar45 + 0x1c) = 1;
  if (*(char *)(param_7 + 0x48) == '\x01') {
    plVar27 = (long *)0x260;
    __Znwm();
    plVar50 = plVar27 + 1;
    *plVar50 = 0;
    plVar27[2] = 0;
    *plVar27 = (long)&PTR_DAT_110af9ae8;
    plVar49 = plVar27 + 3;
    func_0x0001094fd754(plVar49);
    uStack_230 = plVar49;
    plStack_228 = plVar27;
    FUN_10a0095ac();
    ppuVar28 = &PTR___tlv_bootstrap_11340ddc8;
    (*(code *)PTR___tlv_bootstrap_11340ddc8)();
    plStack_510 = (long *)0x7ff8000000000000;
    pplVar30 = &plStack_510;
    func_0x00010937f57c(pplVar30,ppuVar28,&plStack_510);
    *(int *)(plVar27 + 3) = (int)pplVar30;
    lVar46 = *(long *)(param_7 + 0x38);
    plVar27[8] = *(long *)(param_7 + 0x40);
    plVar27[7] = lVar46;
    plVar52 = (long *)plVar45[5];
    plVar37 = (long *)plVar45[6];
    if (plVar52 < plVar37) {
      *plVar52 = (long)plVar49;
      plVar52[1] = (long)plVar27;
      do {
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar50,0x10);
        if (bVar25) {
          *plVar50 = *plVar50 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar52 = plVar52 + 2;
    }
    else {
      plVar35 = plVar45 + 4;
      plVar36 = (long *)*plVar35;
      lVar46 = (long)plVar52 - (long)plVar36 >> 4;
      uVar51 = lVar46 + 1;
      if (uVar51 >> 0x3c != 0) {
        func_0x00010a4f1504();
        goto LAB_10a4d3dbc;
      }
      uVar48 = (long)plVar37 - (long)plVar36 >> 3;
      if (uVar48 <= uVar51) {
        uVar48 = uVar51;
      }
      if (0x7fffffffffffffef < (ulong)((long)plVar37 - (long)plVar36)) {
        uVar48 = 0xfffffffffffffff;
      }
      plStack_4f0 = plVar35;
      if (uVar48 >> 0x3c != 0) {
        func_0x000109ffded8();
        goto LAB_10a4d3dbc;
      }
      lVar41 = uVar48 << 4;
      __Znwm();
      puVar26 = (undefined8 *)(lVar41 + ((long)plVar52 - (long)plVar36));
      *puVar26 = plVar49;
      puVar26[1] = plVar27;
      do {
        cVar5 = '\x01';
        bVar25 = (bool)ExclusiveMonitorPass(plVar50,0x10);
        if (bVar25) {
          *plVar50 = *plVar50 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar52 = puVar26 + 2;
      _memcpy(puVar26 + lVar46 * -2,plVar36);
      plVar45[4] = (long)(puVar26 + lVar46 * -2);
      plVar45[5] = (long)plVar52;
      plVar45[6] = lVar41 + uVar48 * 0x10;
      plStack_510 = plVar36;
      plStack_508 = plVar36;
      plStack_500 = plVar36;
      plStack_4f8 = plVar37;
      func_0x0001095037e0(&plStack_510);
    }
    plVar45[5] = (long)plVar52;
    do {
      lVar46 = *plVar50;
      cVar5 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar50,0x10);
      if (bVar25) {
        *plVar50 = lVar46 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar46 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
    }
  }
  if (plVar45 + 7 != (long *)(param_7 + 0x50)) {
    FUN_10a0ea4a0();
  }
  do {
    cVar5 = '\x01';
    bVar25 = (bool)ExclusiveMonitorPass(plVar47,0x10);
    if (bVar25) {
      *plVar47 = *plVar47 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plStack_510 = plVar29;
  plStack_508 = plVar45;
  func_0x0001095004d4(param_2,&plStack_510);
  plVar45 = plStack_508;
  if (plStack_508 != (long *)0x0) {
    plVar49 = plStack_508 + 1;
    do {
      lVar46 = *plVar49;
      cVar5 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar25) {
        *plVar49 = lVar46 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar46 == 0) {
      (**(code **)(*plStack_508 + 0x10))(plStack_508);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
    }
  }
  func_0x000109500570(&puStack_2e0,param_2);
  if (puStack_2e0 == puStack_2d8) {
    *param_1 = 0;
  }
  else {
    plVar45 = (long *)0x68;
    __Znwm();
    plVar45[0xc] = 0;
    plVar45[5] = 0;
    plVar45[4] = 0;
    plVar45[7] = 0;
    plVar45[6] = 0;
    plVar45[1] = 0;
    *plVar45 = 0;
    plVar45[3] = 0;
    plVar45[2] = 0;
    plVar45[9] = 0;
    plVar45[8] = 0;
    plVar45[0xb] = 0;
    plVar45[10] = 0;
    *(undefined4 *)(plVar45 + 7) = 0x3f800000;
    *(undefined4 *)(plVar45 + 0xc) = 0x3f800000;
    *param_1 = plVar45;
    auStack_298 = (undefined1  [8])0x0;
    auStack_2a0 = (undefined1  [8])0x0;
    lStack_288 = 0;
    uStack_290 = 0;
    uStack_280 = 0x3f800000;
    FUN_10a4d40d8();
    if (puStack_2e0 != puStack_2d8) {
      puVar26 = puStack_2e0;
      do {
        if (param_6 == 0) goto LAB_10a4d3dbc;
        puVar34 = (undefined4 *)*puVar26;
        if ((*(byte *)(puVar34 + 0x85) & 1) == 0) {
          plVar47 = (long *)0x248;
          __Znwm();
          plVar47[1] = 0;
          plVar47[2] = 0;
          plVar49 = plVar47 + 3;
          *plVar47 = (long)&PTR_FUN_110bef410;
          _bzero(plVar47 + 4,0x228);
          FUN_10a5061c0(plVar49);
        }
        else {
          FUN_10a50610c(&plStack_510);
          plVar47 = plStack_508;
          plVar49 = plStack_510;
        }
        *(undefined4 *)(plVar49 + 3) = *puVar34;
        plStack_240 = plVar49;
        plStack_238 = plVar47;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar49 + 4,puVar34 + 2);
        *(undefined4 *)(plVar49 + 0xc) = puVar34[1];
        for (plVar47 = *(long **)(puVar34 + 0x3c); plVar47 != (long *)0x0;
            plVar47 = (long *)*plVar47) {
          plStack_510 = plVar47 + 2;
          plVar29 = plVar49 + 0x28;
          FUN_10a505c80(plVar29,plStack_510,&plStack_510);
          *(undefined1 *)(plVar29 + 7) = *(undefined1 *)((long)plVar47 + 0x2c);
          *(undefined4 *)((long)plVar29 + 0x34) = *(undefined4 *)(plVar47 + 5);
          *(undefined2 *)((long)plVar29 + 0x39) = *(undefined2 *)((long)plVar47 + 0x2d);
        }
        for (plVar47 = *(long **)(puVar34 + 0x14); plVar47 != (long *)0x0;
            plVar47 = (long *)*plVar47) {
          if (*(float *)(plVar47 + 7) < *(float *)((long)plVar47 + 0x34)) {
            plStack_510 = plVar47 + 2;
            lVar46 = plVar47[5];
            plVar29 = plVar49 + 0x2d;
            FUN_10a2f939c(plVar29,plStack_510,&UNK_10dd5b8f9,&plStack_510,&pplStack_3a0);
            plVar29[5] = lVar46;
          }
        }
        for (plVar47 = *(long **)(puVar34 + 0x1e); plVar47 != (long *)0x0;
            plVar47 = (long *)*plVar47) {
          plStack_510 = plVar47 + 2;
          lVar46 = plVar47[5];
          uVar70 = *(undefined4 *)(plVar47 + 6);
          plVar29 = plVar49 + 0x32;
          FUN_10a2f99e0(plVar29,plStack_510,&UNK_10dd5b8f9,&plStack_510,&pplStack_3a0);
          plVar29[5] = lVar46;
          *(undefined4 *)(plVar29 + 6) = uVar70;
        }
        for (plVar47 = *(long **)(puVar34 + 0x28); plVar47 != (long *)0x0;
            plVar47 = (long *)*plVar47) {
          plStack_510 = plVar47 + 2;
          fVar71 = *(float *)(plVar47 + 5);
          fVar72 = *(float *)((long)plVar47 + 0x2c);
          fVar77 = *(float *)(plVar47 + 6);
          fVar74 = *(float *)(param_5 + 0x2c);
          fVar73 = *(float *)(param_5 + 0x3c);
          fVar69 = *(float *)(param_5 + 0x4c);
          uVar76 = *(undefined8 *)(param_5 + 0x24);
          uVar55 = *(undefined8 *)(param_5 + 0x34);
          uVar56 = *(undefined8 *)(param_5 + 0x44);
          uVar57 = *(undefined8 *)(param_5 + 0x54);
          fVar75 = *(float *)(param_5 + 0x5c);
          plVar29 = plVar49 + 0x37;
          FUN_10a2f99e0(plVar29,plStack_510,&UNK_10dd5b8f9,&plStack_510,&pplStack_3a0);
          fVar71 = fVar71 * 100.0;
          fVar72 = fVar72 * -100.0;
          fVar77 = fVar77 * -100.0;
          plVar29[5] = CONCAT44((float)((ulong)uVar76 >> 0x20) * fVar71 +
                                (float)((ulong)uVar55 >> 0x20) * fVar72 +
                                (float)((ulong)uVar56 >> 0x20) * fVar77 +
                                (float)((ulong)uVar57 >> 0x20),
                                (float)uVar76 * fVar71 + (float)uVar55 * fVar72 +
                                (float)uVar56 * fVar77 + (float)uVar57);
          *(float *)(plVar29 + 6) = fVar71 * fVar74 + fVar72 * fVar73 + fVar77 * fVar69 + fVar75;
        }
        for (plVar47 = *(long **)(puVar34 + 0x32); plVar47 != (long *)0x0;
            plVar47 = (long *)*plVar47) {
          plStack_510 = plVar47 + 2;
          lVar46 = plVar47[5];
          uVar70 = *(undefined4 *)(plVar47 + 6);
          plVar29 = plVar49 + 0x3c;
          FUN_10a2f99e0(plVar29,plStack_510,&UNK_10dd5b8f9,&plStack_510,&pplStack_3a0);
          plVar29[5] = lVar46;
          *(undefined4 *)(plVar29 + 6) = uVar70;
        }
        if ((bRam00000001137eb260 & 1) == 0) {
          iVar40 = 0x137eb260;
          ___cxa_guard_acquire();
          if (iVar40 != 0) {
            uRam00000001137eb318 = 0xb33bbd2e00000000;
            uRam00000001137eb310 = 0x3f800000;
            ___cxa_guard_release();
          }
        }
        puVar32 = (undefined8 *)(puVar34 + 0x42);
        fVar71 = (float)puVar34[0x76];
        fVar77 = (float)puVar34[0x77];
        fVar72 = (float)puVar34[0x78];
        fVar69 = (float)puVar34[0x79];
        fVar78 = ((-((float)uRam00000001137eb310 * fVar71) + fVar69 * uRam00000001137eb318._4_4_) -
                 fVar77 * uRam00000001137eb310._4_4_) - fVar72 * (float)uRam00000001137eb318;
        fVar81 = ((float)uRam00000001137eb310 * fVar69 + fVar71 * uRam00000001137eb318._4_4_ +
                 fVar72 * uRam00000001137eb310._4_4_) - fVar77 * (float)uRam00000001137eb318;
        fVar83 = (uRam00000001137eb310._4_4_ * fVar69 + fVar77 * uRam00000001137eb318._4_4_ +
                 fVar71 * (float)uRam00000001137eb318) - fVar72 * (float)uRam00000001137eb310;
        fVar64 = ((float)uRam00000001137eb318 * fVar69 + fVar72 * uRam00000001137eb318._4_4_ +
                 fVar77 * (float)uRam00000001137eb310) - fVar71 * uRam00000001137eb310._4_4_;
        fVar65 = fVar81 * (float)uRam00000001137eb310;
        fVar71 = uRam00000001137eb318._4_4_ * fVar78;
        fVar74 = uRam00000001137eb310._4_4_ * fVar83;
        fVar75 = (float)uRam00000001137eb318 * fVar64;
        fVar68 = uRam00000001137eb318._4_4_ * fVar83;
        fVar77 = uRam00000001137eb310._4_4_ * fVar78;
        fVar72 = (float)uRam00000001137eb310 * fVar64;
        fVar79 = (float)uRam00000001137eb318 * fVar81;
        fVar63 = uRam00000001137eb318._4_4_ * fVar64;
        fVar69 = (float)uRam00000001137eb318 * fVar78;
        fVar73 = uRam00000001137eb310._4_4_ * fVar81;
        fVar80 = (float)uRam00000001137eb310 * fVar83;
        *(float *)(plStack_240 + 9) =
             (uRam00000001137eb318._4_4_ * fVar81 + (float)uRam00000001137eb310 * fVar78 +
             (float)uRam00000001137eb318 * fVar83) - uRam00000001137eb310._4_4_ * fVar64;
        *(float *)((long)plStack_240 + 0x4c) = (fVar68 + fVar77 + fVar72) - fVar79;
        *(float *)(plStack_240 + 10) = (fVar63 + fVar69 + fVar73) - fVar80;
        *(float *)((long)plStack_240 + 0x54) = ((-fVar65 + fVar71) - fVar74) - fVar75;
        *(undefined4 *)(plStack_240 + 0xb) = puVar34[0x7a];
        *(undefined4 *)((long)plStack_240 + 0x44) = puVar34[0xb];
        fVar71 = (float)puVar34[10];
        *(float *)(plStack_240 + 8) = fVar71;
        *(float *)(plStack_240 + 7) = (float)puVar34[8] + fVar71 * 0.5;
        *(float *)((long)plStack_240 + 0x3c) = (float)puVar34[9] + (float)puVar34[0xb] * 0.5;
        if (*(long *)(puVar34 + 0x46) != 0) {
          uVar51 = (ulong)(uint)puVar34[0x43];
          if ((int)puVar34[0x43] < 3) {
            lVar46 = (long)(int)puVar34[0x45] * (long)(int)puVar34[0x44];
          }
          else {
            lVar46 = 1;
            piVar42 = *(int **)(puVar34 + 0x52);
            do {
              lVar46 = lVar46 * *piVar42;
              uVar51 = uVar51 - 1;
              piVar42 = piVar42 + 1;
            } while (uVar51 != 0);
          }
          if (lVar46 != 0) {
            uVar48 = *(ulong *)(puVar34 + 0x72);
            fVar77 = (float)uVar48 + (float)puVar34[0x74];
            fVar71 = (float)puVar34[0x73] + (float)puVar34[0x75];
            uVar51 = uVar48 & 0xffffffff;
            *(char *)((long)plStack_240 + 0xbc) = SUB41(fVar77,0);
            *(char *)((long)plStack_240 + 0xbd) = (char)((uint)fVar77 >> 8);
            *(char *)((long)plStack_240 + 0xbe) = (char)((uint)fVar77 >> 0x10);
            *(char *)((long)plStack_240 + 0xbf) = (char)((uint)fVar77 >> 0x18);
            *(char *)(plStack_240 + 0x18) = SUB41(fVar71,0);
            *(char *)((long)plStack_240 + 0xc1) = (char)((uint)fVar71 >> 8);
            *(char *)((long)plStack_240 + 0xc2) = (char)((uint)fVar71 >> 0x10);
            *(char *)((long)plStack_240 + 0xc3) = (char)((uint)fVar71 >> 0x18);
            *(char *)((long)plStack_240 + 0xb4) = (char)uVar51;
            *(char *)((long)plStack_240 + 0xb5) = (char)(uVar51 >> 8);
            *(char *)((long)plStack_240 + 0xb6) = (char)(uVar51 >> 0x10);
            *(char *)((long)plStack_240 + 0xb7) = (char)(uVar51 >> 0x18);
            *(char *)(plStack_240 + 0x17) = (char)(uVar48 >> 0x20);
            *(char *)((long)plStack_240 + 0xb9) = (char)(uVar48 >> 0x28);
            *(char *)((long)plStack_240 + 0xba) = (char)(uVar48 >> 0x30);
            *(char *)((long)plStack_240 + 0xbb) = (char)(uVar48 >> 0x38);
            uStack_230 = (long *)*puVar32;
            plStack_228 = *(long **)(puVar34 + 0x44);
            iVar40 = puVar34[0x43];
            plStack_220 = *(long **)(puVar34 + 0x46);
            plStack_218 = *(long **)(puVar34 + 0x48);
            pplStack_210 = *(long ***)(puVar34 + 0x4a);
            uStack_208 = *(undefined8 *)(puVar34 + 0x4c);
            uStack_200 = *(undefined8 *)(puVar34 + 0x4e);
            lStack_1f8 = *(long *)(puVar34 + 0x50);
            uStack_1e0 = 0;
            uStack_1d8 = 0;
            if (lStack_1f8 != 0) {
              piVar42 = (int *)(lStack_1f8 + 0x14);
              do {
                cVar5 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                if (bVar25) {
                  *piVar42 = *piVar42 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              iVar40 = puVar34[0x43];
            }
            uStack_1f0 = (ulong)&uStack_230 | 8;
            puStack_1e8 = &uStack_1e0;
            if (iVar40 < 3) {
              uStack_1e0 = **(undefined8 **)(puVar34 + 0x54);
              uStack_1d8 = (*(undefined8 **)(puVar34 + 0x54))[1];
            }
            else {
              uStack_230 = (long *)((ulong)uStack_230 & 0xffffffff);
              func_0x000109a84868(&uStack_230,puVar32);
            }
            FUN_10a0f3c50(&plStack_510,&uStack_230,0,0xffffffff);
            FUN_10a4d0020(plStack_240 + 0x19,&plStack_510);
            plVar49 = plStack_510;
            plStack_510 = (long *)0x0;
            if (plVar49 != (long *)0x0) {
              (**(code **)(*plVar49 + 8))();
            }
            if (lStack_1f8 != 0) {
              piVar42 = (int *)(lStack_1f8 + 0x14);
              do {
                iVar40 = *piVar42;
                cVar5 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                if (bVar25) {
                  *piVar42 = iVar40 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar40 + -1 == 0) {
                func_0x000109a848d4(&uStack_230);
              }
            }
            lStack_1f8 = 0;
            plStack_218 = (long *)0x0;
            plStack_220 = (long *)0x0;
            uStack_208 = 0;
            pplStack_210 = (long **)0x0;
            if (0 < uStack_230._4_4_) {
              lVar46 = 0;
              do {
                *(undefined4 *)(uStack_1f0 + lVar46 * 4) = 0;
                lVar46 = lVar46 + 1;
              } while (lVar46 < uStack_230._4_4_);
            }
            if (puStack_1e8 != &uStack_1e0 && puStack_1e8 != (undefined8 *)0x0) {
              _free(puStack_1e8[-1]);
            }
          }
        }
        if (*(long *)(puVar34 + 0x5e) != 0) {
          uVar51 = (ulong)(uint)puVar34[0x5b];
          if ((int)puVar34[0x5b] < 3) {
            lVar46 = (long)(int)puVar34[0x5d] * (long)(int)puVar34[0x5c];
          }
          else {
            lVar46 = 1;
            piVar42 = *(int **)(puVar34 + 0x6a);
            do {
              lVar46 = lVar46 * *piVar42;
              uVar51 = uVar51 - 1;
              piVar42 = piVar42 + 1;
            } while (uVar51 != 0);
          }
          if (lVar46 != 0) {
            uVar48 = *(ulong *)(puVar34 + 0x72);
            fVar77 = (float)uVar48 + (float)puVar34[0x74];
            fVar71 = (float)puVar34[0x73] + (float)puVar34[0x75];
            uVar51 = uVar48 & 0xffffffff;
            *(char *)((long)plStack_240 + 0x114) = SUB41(fVar77,0);
            *(char *)((long)plStack_240 + 0x115) = (char)((uint)fVar77 >> 8);
            *(char *)((long)plStack_240 + 0x116) = (char)((uint)fVar77 >> 0x10);
            *(char *)((long)plStack_240 + 0x117) = (char)((uint)fVar77 >> 0x18);
            *(char *)(plStack_240 + 0x23) = SUB41(fVar71,0);
            *(char *)((long)plStack_240 + 0x119) = (char)((uint)fVar71 >> 8);
            *(char *)((long)plStack_240 + 0x11a) = (char)((uint)fVar71 >> 0x10);
            *(char *)((long)plStack_240 + 0x11b) = (char)((uint)fVar71 >> 0x18);
            *(char *)((long)plStack_240 + 0x10c) = (char)uVar51;
            *(char *)((long)plStack_240 + 0x10d) = (char)(uVar51 >> 8);
            *(char *)((long)plStack_240 + 0x10e) = (char)(uVar51 >> 0x10);
            *(char *)((long)plStack_240 + 0x10f) = (char)(uVar51 >> 0x18);
            *(char *)(plStack_240 + 0x22) = (char)(uVar48 >> 0x20);
            *(char *)((long)plStack_240 + 0x111) = (char)(uVar48 >> 0x28);
            *(char *)((long)plStack_240 + 0x112) = (char)(uVar48 >> 0x30);
            *(char *)((long)plStack_240 + 0x113) = (char)(uVar48 >> 0x38);
            uStack_360 = *(double *)(puVar34 + 0x5a);
            dStack_358 = *(double *)(puVar34 + 0x5c);
            iVar40 = puVar34[0x5b];
            dStack_350 = *(double *)(puVar34 + 0x5e);
            dStack_348 = *(double *)(puVar34 + 0x60);
            dStack_340 = *(double *)(puVar34 + 0x62);
            uStack_338 = *(double *)(puVar34 + 100);
            dStack_330 = *(double *)(puVar34 + 0x66);
            dStack_328 = *(double *)(puVar34 + 0x68);
            dStack_310 = 0.0;
            dStack_308 = 0.0;
            if (dStack_328 != 0.0) {
              piVar42 = (int *)((long)dStack_328 + 0x14);
              do {
                cVar5 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                if (bVar25) {
                  *piVar42 = *piVar42 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              iVar40 = puVar34[0x5b];
            }
            dStack_320 = (double)((ulong)&uStack_360 | 8);
            pdStack_318 = &dStack_310;
            if (iVar40 < 3) {
              dStack_310 = **(double **)(puVar34 + 0x6c);
              dStack_308 = (*(double **)(puVar34 + 0x6c))[1];
            }
            else {
              uStack_360 = (double)((ulong)uStack_360 & 0xffffffff);
              func_0x000109a84868(&uStack_360,puVar34 + 0x5a);
            }
            FUN_10a0f3c50(&plStack_510,&uStack_360,0,0xffffffff);
            FUN_10a4d0020(plStack_240 + 0x24,&plStack_510);
            plVar49 = plStack_510;
            plStack_510 = (long *)0x0;
            if (plVar49 != (long *)0x0) {
              (**(code **)(*plVar49 + 8))();
            }
            if (dStack_328 != 0.0) {
              piVar42 = (int *)((long)dStack_328 + 0x14);
              do {
                iVar40 = *piVar42;
                cVar5 = '\x01';
                bVar25 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                if (bVar25) {
                  *piVar42 = iVar40 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar40 + -1 == 0) {
                func_0x000109a848d4(&uStack_360);
              }
            }
            dStack_328 = 0.0;
            dStack_348 = 0.0;
            dStack_350 = 0.0;
            uStack_338 = 0.0;
            dStack_340 = 0.0;
            if (0 < uStack_360._4_4_) {
              lVar46 = 0;
              do {
                *(undefined4 *)((long)dStack_320 + lVar46 * 4) = 0;
                lVar46 = lVar46 + 1;
              } while (lVar46 < uStack_360._4_4_);
            }
            if (pdStack_318 != &dStack_310 && pdStack_318 != (double *)0x0) {
              _free(pdStack_318[-1]);
            }
            lVar46 = *(long *)(puVar34 + 0x46);
            if (lVar46 != 0) {
              fVar71 = (float)puVar34[0x43];
              uVar51 = (ulong)(uint)fVar71;
              if ((int)fVar71 < 3) {
                lVar41 = (long)(int)puVar34[0x45] * (long)(int)puVar34[0x44];
              }
              else {
                lVar41 = 1;
                piVar42 = *(int **)(puVar34 + 0x52);
                do {
                  lVar41 = lVar41 * *piVar42;
                  uVar51 = uVar51 - 1;
                  piVar42 = piVar42 + 1;
                } while (uVar51 != 0);
              }
              if (lVar41 != 0) {
                fStack_108 = (float)*(undefined8 *)(puVar34 + 0x44);
                uStack_104 = (undefined4)((ulong)*(undefined8 *)(puVar34 + 0x44) >> 0x20);
                uStack_e0 = *(undefined8 *)(puVar34 + 0x4e);
                fStack_f0 = (float)*(undefined8 *)(puVar34 + 0x4a);
                uStack_ec = (undefined4)((ulong)*(undefined8 *)(puVar34 + 0x4a) >> 0x20);
                uStack_f8 = (undefined4)*(undefined8 *)(puVar34 + 0x48);
                fStack_f4 = (float)((ulong)*(undefined8 *)(puVar34 + 0x48) >> 0x20);
                uStack_110._0_4_ = puVar34[0x42];
                uStack_e8 = (undefined4)*(undefined8 *)(puVar34 + 0x4c);
                fStack_e4 = (float)((ulong)*(undefined8 *)(puVar34 + 0x4c) >> 0x20);
                uStack_d8 = *(long *)(puVar34 + 0x50);
                fStack_100 = (float)lVar46;
                uStack_fc = (undefined4)((ulong)lVar46 >> 0x20);
                uStack_c0 = 0;
                uStack_b8 = 0;
                fVar77 = fVar71;
                if (uStack_d8 != 0) {
                  piVar42 = (int *)(uStack_d8 + 0x14);
                  do {
                    cVar5 = '\x01';
                    bVar25 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                    if (bVar25) {
                      *piVar42 = *piVar42 + 1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  fVar77 = (float)puVar34[0x43];
                }
                pfStack_d0 = &fStack_108;
                puStack_c8 = &uStack_c0;
                if ((int)fVar77 < 3) {
                  uStack_c0 = **(undefined8 **)(puVar34 + 0x54);
                  uStack_b8 = (*(undefined8 **)(puVar34 + 0x54))[1];
                  uStack_110._4_4_ = fVar71;
                }
                else {
                  uStack_110._4_4_ = 0.0;
                  func_0x000109a84868(&uStack_110,puVar32);
                }
                FUN_10a0f3c50(&plStack_510,&uStack_110,0,0xffffffff);
                FUN_10a4d0020(plStack_240 + 0x26,&plStack_510);
                plVar49 = plStack_510;
                plStack_510 = (long *)0x0;
                if (plVar49 != (long *)0x0) {
                  (**(code **)(*plVar49 + 8))();
                }
                if (uStack_d8 != 0) {
                  piVar42 = (int *)(uStack_d8 + 0x14);
                  do {
                    iVar40 = *piVar42;
                    cVar5 = '\x01';
                    bVar25 = (bool)ExclusiveMonitorPass(piVar42,0x10);
                    if (bVar25) {
                      *piVar42 = iVar40 + -1;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar40 + -1 == 0) {
                    func_0x000109a848d4(&uStack_110);
                  }
                }
                uStack_d8 = 0;
                uStack_f8 = 0;
                fStack_f4 = 0.0;
                fStack_100 = 0.0;
                uStack_fc = 0;
                uStack_e8 = 0;
                fStack_e4 = 0.0;
                fStack_f0 = 0.0;
                uStack_ec = 0;
                if (0 < (int)uStack_110._4_4_) {
                  lVar46 = 0;
                  do {
                    pfStack_d0[lVar46] = 0.0;
                    lVar46 = lVar46 + 1;
                  } while (lVar46 < (int)uStack_110._4_4_);
                }
                if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
                  _free(puStack_c8[-1]);
                }
              }
            }
          }
        }
        plVar49 = plStack_240;
        plVar47 = *(long **)(puVar34 + 0x8a);
        if (plVar47 != (long *)0x0) {
          plVar29 = plStack_240 + 0x41;
          plVar52 = plStack_240 + 0x43;
          do {
            plStack_510 = (long *)plVar47[2];
            plStack_508 = (long *)plVar47[3];
            FUN_10a501b24(&plStack_500,plVar47 + 4);
            plVar27 = plStack_508;
            plVar37 = plStack_510;
            fVar77 = (float)uRam00000001137eb318;
            fVar72 = uRam00000001137eb318._4_4_;
            fVar71 = uRam00000001137eb310._4_4_;
            auVar22._4_4_ = uStack_4cc;
            auVar22._0_4_ = fStack_4d0;
            auVar22._8_4_ = fStack_4c8;
            auVar22._12_4_ = fStack_4c4;
            auVar58 = NEON_ext(auVar22,auVar22,0xc,1);
            fVar74 = (float)uRam00000001137eb310;
            fVar69 = -uRam00000001137eb310._4_4_;
            fVar79 = -(float)uRam00000001137eb318;
            fVar80 = -fVar74;
            auVar67._4_4_ = (float)uRam00000001137eb318;
            auVar67._0_4_ = uRam00000001137eb310._4_4_;
            auVar67._8_4_ = fVar74;
            auVar67._12_4_ = uRam00000001137eb310._4_4_;
            auVar86._4_4_ = fVar79;
            auVar86._0_4_ = fVar69;
            auVar86._8_4_ = fVar80;
            auVar86._12_4_ = -uRam00000001137eb310._4_4_;
            auVar82 = NEON_ext(auVar67,auVar86,4,1);
            auVar12._4_4_ = fVar79;
            auVar12._0_4_ = fVar69;
            auVar12._8_4_ = fVar80;
            auVar12._12_4_ = fVar79;
            auVar13._4_4_ = fVar79;
            auVar13._0_4_ = fVar69;
            auVar13._8_4_ = fVar80;
            auVar13._12_4_ = fVar79;
            auVar84 = NEON_ext(auVar12,auVar13,4,1);
            auVar85._4_4_ = fStack_4c4;
            auVar85._0_4_ = fStack_4c4;
            auVar85._8_4_ = fStack_4c4;
            auVar85._12_4_ = fStack_4c4;
            auVar86 = NEON_ext(auVar85,auVar22,4,1);
            auVar66._4_4_ = fStack_4c8;
            auVar66._0_4_ = fStack_4d0;
            auVar66._8_4_ = fStack_4d0;
            auVar66._12_4_ = fStack_4c8;
            auVar67 = NEON_ext(auVar66,auVar22,0xc,1);
            fVar69 = auVar86._0_4_ * uRam00000001137eb310._4_4_ +
                     uStack_4cc * uRam00000001137eb318._4_4_ + fStack_4d0 * auVar82._0_4_ +
                     auVar67._0_4_ * auVar84._4_4_;
            fVar75 = auVar86._4_4_ * (float)uRam00000001137eb318 +
                     fStack_4c8 * uRam00000001137eb318._4_4_ + uStack_4cc * auVar82._4_4_ +
                     auVar67._4_4_ * auVar84._12_4_;
            fVar73 = auVar86._8_4_ * fVar74 + auVar58._4_4_ * uRam00000001137eb318._4_4_ +
                     fStack_4c8 * uRam00000001137eb310._4_4_ + auVar67._8_4_ * fVar79;
            fVar79 = auVar86._12_4_ * fVar80 + fStack_4c4 * uRam00000001137eb318._4_4_ +
                     uStack_4cc * auVar82._12_4_ + auVar67._12_4_ * fVar79;
            auVar82._4_4_ = fVar75;
            auVar82._0_4_ = fVar69;
            auVar82._8_4_ = fVar73;
            auVar82._12_4_ = fVar79;
            auVar84._4_4_ = fVar75;
            auVar84._0_4_ = fVar69;
            auVar84._8_4_ = fVar73;
            auVar84._12_4_ = fVar79;
            auVar58 = NEON_ext(auVar82,auVar84,4,1);
            fVar69 = auVar58._4_4_;
            fVar73 = auVar58._12_4_;
            if (plStack_4e8 != plStack_4e0) {
              plStack_4e8[2] =
                   CONCAT44((float)((ulong)plStack_4e8[2] >> 0x20) * 100.0,
                            (float)plStack_4e8[2] * 100.0);
              *(float *)(plStack_4e8 + 3) = *(float *)(plStack_4e8 + 3) * 100.0;
            }
            fStack_4c0 = fStack_4c0 * 100.0;
            fStack_4bc = fStack_4bc * 100.0;
            fVar63 = -(fStack_4bc * fVar77) + fStack_4b8 * 100.0 * fVar71;
            fVar65 = -(fStack_4b8 * 100.0) * fVar74 + fStack_4c0 * fVar77;
            fVar64 = -(fStack_4c0 * fVar71) + fStack_4bc * fVar74;
            fVar80 = fVar72 * fVar63 + -(fVar65 * fVar77) + fVar64 * fVar71;
            fVar77 = (-(fVar74 * fStack_4bc) - -(fStack_4c0 * fVar71)) * fVar74 + fVar63 * fVar77 +
                     fVar72 * fVar65;
            fVar71 = fVar72 * fVar64 + -(fVar63 * fVar71) + fVar65 * fVar74;
            fStack_4c0 = fStack_4c0 + fVar80 + fVar80;
            fStack_4bc = fStack_4bc + fVar77 + fVar77;
            fVar74 = fStack_4b8 * 100.0 + fVar71 + fVar71;
            fVar72 = *(float *)(param_5 + 0x24);
            fVar65 = *(float *)(param_5 + 0x38);
            fVar80 = *(float *)(param_5 + 0x4c);
            fVar63 = (fVar72 - fVar65) - fVar80;
            fVar77 = (fVar65 - fVar72) - fVar80;
            fVar71 = (fVar80 - fVar72) - fVar65;
            fVar80 = fVar72 + fVar65 + fVar80;
            fVar72 = fVar63;
            if (fVar63 <= fVar80) {
              fVar72 = fVar80;
            }
            bVar21 = 2;
            if (fVar77 <= fVar72) {
              fVar77 = fVar72;
              bVar21 = fVar80 < fVar63;
            }
            bVar23 = 3;
            if (fVar71 <= fVar77) {
              fVar71 = fVar77;
              bVar23 = bVar21;
            }
            fVar68 = SQRT(fVar71 + 1.0) * 0.5;
            fVar64 = 0.25 / fVar68;
            fVar63 = (*(float *)(param_5 + 0x44) - *(float *)(param_5 + 0x2c)) * fVar64;
            fVar81 = (*(float *)(param_5 + 0x28) + *(float *)(param_5 + 0x34)) * fVar64;
            fVar83 = (*(float *)(param_5 + 0x3c) + *(float *)(param_5 + 0x48)) * fVar64;
            fVar65 = (*(float *)(param_5 + 0x28) - *(float *)(param_5 + 0x34)) * fVar64;
            fVar78 = (*(float *)(param_5 + 0x2c) + *(float *)(param_5 + 0x44)) * fVar64;
            fVar71 = fVar63;
            fVar77 = fVar83;
            fVar72 = fVar68;
            fVar80 = fVar81;
            if (bVar23 != 2) {
              fVar71 = fVar65;
              fVar77 = fVar68;
              fVar72 = fVar83;
              fVar80 = fVar78;
            }
            fVar64 = (*(float *)(param_5 + 0x3c) - *(float *)(param_5 + 0x48)) * fVar64;
            fVar83 = fVar68;
            if (bVar23 != 0) {
              fVar83 = fVar64;
              fVar65 = fVar78;
              fVar63 = fVar81;
              fVar64 = fVar68;
            }
            if (bVar23 < 2) {
              fVar71 = fVar83;
              fVar77 = fVar65;
              fVar72 = fVar63;
              fVar80 = fVar64;
            }
            fVar65 = -(fStack_4bc * fVar77) + fVar74 * fVar72;
            fVar64 = -(fVar74 * fVar80) + fStack_4c0 * fVar77;
            fVar78 = -(fStack_4c0 * fVar72) + fStack_4bc * fVar80;
            fVar63 = fVar71 * fVar65 + -(fVar64 * fVar77) + fVar78 * fVar72;
            fVar68 = fVar71 * fVar64 + -(fVar78 * fVar80) + fVar65 * fVar77;
            fVar65 = fVar71 * fVar78 + -(fVar65 * fVar72) + fVar64 * fVar80;
            fStack_4c0 = *(float *)(param_5 + 0x54) + fStack_4c0 + fVar63 + fVar63;
            fStack_4bc = *(float *)(param_5 + 0x58) + fStack_4bc + fVar68 + fVar68;
            fStack_4b8 = *(float *)(param_5 + 0x5c) + fVar74 + fVar65 + fVar65;
            fStack_4c4 = ((-(fVar80 * fVar69) + fVar79 * fVar71) - fVar73 * fVar72) -
                         fVar75 * fVar77;
            fVar74 = (fVar80 * fVar79 + fVar69 * fVar71 + fVar75 * fVar72) - fVar73 * fVar77;
            uStack_4cc = (fVar72 * fVar79 + fVar73 * fVar71 + fVar69 * fVar77) - fVar75 * fVar80;
            fStack_4c8 = (fVar77 * fVar79 + fVar75 * fVar71 + fVar73 * fVar80) - fVar69 * fVar72;
            fVar71 = fStack_4c4 * fStack_4c4 + fVar74 * fVar74 +
                     uStack_4cc * uStack_4cc + fStack_4c8 * fStack_4c8;
            if (fVar71 == 0.0) {
              fStack_4c4 = 1.0;
              uVar59 = 0;
              uVar60 = 0;
              uVar61 = 0;
              uVar62 = 0;
              uStack_4cc = 0.0;
              fStack_4c8 = 0.0;
            }
            else {
              fVar71 = 1.0 / SQRT(fVar71);
              fStack_4c4 = fStack_4c4 * fVar71;
              fVar74 = fVar74 * fVar71;
              uVar59 = SUB41(fVar74,0);
              uVar60 = (undefined1)((uint)fVar74 >> 8);
              uVar61 = (undefined1)((uint)fVar74 >> 0x10);
              uVar62 = (undefined1)((uint)fVar74 >> 0x18);
              uStack_4cc = uStack_4cc * fVar71;
              fStack_4c8 = fStack_4c8 * fVar71;
            }
            fStack_4d0 = (float)CONCAT13(uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)));
            pplVar30 = (long **)0x80;
            __Znwm();
            uStack_390 = 0;
            *pplVar30 = (long *)0x0;
            pplVar30[1] = (long *)0x0;
            pplStack_3a0 = pplVar30;
            plStack_398 = plVar29;
            if ((long *)0x7ffffffffffffff7 < plVar27) {
              func_0x000109ffde50();
              goto LAB_10a4d3dbc;
            }
            pplVar1 = pplVar30 + 2;
            if (plVar27 < (long *)0x17) {
              *(char *)((long)pplVar30 + 0x27) = (char)plVar27;
              pplVar31 = pplVar1;
              if (plVar27 != (long *)0x0) goto LAB_10a4d32cc;
            }
            else {
              pplVar2 = (long **)0x19;
              if (((ulong)plVar27 | 7) != 0x17) {
                pplVar2 = (long **)(((ulong)plVar27 | 7) + 1);
              }
              pplVar31 = pplVar2;
              __Znwm();
              pplVar30[3] = plVar27;
              pplVar30[4] = (long *)((ulong)pplVar2 | 0x8000000000000000);
              pplVar30[2] = (long *)pplVar31;
LAB_10a4d32cc:
              _memcpy(pplVar31,plVar37,plVar27);
            }
            *(undefined1 *)((long)pplVar31 + (long)plVar27) = 0;
            FUN_10a501b24(pplVar30 + 5,&plStack_500);
            uStack_390 = CONCAT71(uStack_390._1_7_,1);
            plVar37 = plVar29;
            func_0x000107c2b05c(plVar29,pplVar1);
            pplVar1 = pplStack_3a0;
            pplVar30[1] = plVar37;
            plVar37 = plVar29;
            func_0x000107c2b05c(plVar29,pplStack_3a0 + 2);
            pplVar1[1] = plVar37;
            plVar27 = (long *)plVar49[0x42];
            if (plVar27 != (long *)0x0) {
              uVar51 = (long)plVar27 - 1;
              if (((ulong)plVar27 & uVar51) == 0) {
                plVar50 = (long *)(uVar51 & (ulong)plVar37);
              }
              else {
                plVar50 = plVar37;
                if (plVar27 <= plVar37) {
                  uVar48 = 0;
                  if (plVar27 != (long *)0x0) {
                    uVar48 = (ulong)plVar37 / (ulong)plVar27;
                  }
                  plVar50 = (long *)((long)plVar37 - uVar48 * (long)plVar27);
                }
              }
              plVar35 = *(long **)(*plVar29 + (long)plVar50 * 8);
              if (plVar35 != (long *)0x0) {
                for (plVar35 = (long *)*plVar35; plVar35 != (long *)0x0; plVar35 = (long *)*plVar35)
                {
                  plVar36 = (long *)plVar35[1];
                  if (plVar36 == plVar37) {
                    plVar36 = plVar29;
                    func_0x000107c2b068(plVar29,plVar35 + 2,pplVar1 + 2);
                    if (((ulong)plVar36 & 1) != 0) {
                      func_0x00010a500838(pplVar1 + 2);
                      __ZdlPv(pplVar1);
                      goto LAB_10a4d34b4;
                    }
                  }
                  else {
                    if (((ulong)plVar27 & uVar51) == 0) {
                      plVar36 = (long *)((ulong)plVar36 & uVar51);
                    }
                    else if (plVar27 <= plVar36) {
                      uVar48 = 0;
                      if (plVar27 != (long *)0x0) {
                        uVar48 = (ulong)plVar36 / (ulong)plVar27;
                      }
                      plVar36 = (long *)((long)plVar36 - uVar48 * (long)plVar27);
                    }
                    if (plVar36 != plVar50) break;
                  }
                }
              }
            }
            if ((plVar27 == (long *)0x0) ||
               (*(float *)(plVar49 + 0x45) * (float)plVar27 < (float)(plVar49[0x44] + 1))) {
              uVar51 = 1;
              if ((long *)0x2 < plVar27) {
                uVar51 = (ulong)(((ulong)plVar27 & (long)plVar27 - 1U) != 0);
              }
              uVar51 = uVar51 | (long)plVar27 << 1;
              uVar48 = (ulong)((float)(plVar49[0x44] + 1) / *(float *)(plVar49 + 0x45));
              if (uVar51 <= uVar48) {
                uVar51 = uVar48;
              }
              FUN_10a501604(plVar29,uVar51);
            }
            plVar37 = (long *)plVar49[0x42];
            plVar27 = pplVar1[1];
            uVar51 = (long)plVar37 - 1;
            if (((ulong)plVar37 & uVar51) == 0) {
              plVar27 = (long *)(uVar51 & (ulong)plVar27);
            }
            else if (plVar37 <= plVar27) {
              uVar48 = 0;
              if (plVar37 != (long *)0x0) {
                uVar48 = (ulong)plVar27 / (ulong)plVar37;
              }
              plVar27 = (long *)((long)plVar27 - uVar48 * (long)plVar37);
            }
            lVar46 = *plVar29;
            plVar50 = *(long **)(lVar46 + (long)plVar27 * 8);
            if (plVar50 == (long *)0x0) {
              *pplVar1 = (long *)*plVar52;
              *plVar52 = (long)pplVar1;
              *(long **)(lVar46 + (long)plVar27 * 8) = plVar52;
              if (*pplVar1 != (long *)0x0) {
                plVar27 = (long *)(*pplVar1)[1];
                if (((ulong)plVar37 & uVar51) == 0) {
                  plVar27 = (long *)((ulong)plVar27 & uVar51);
                }
                else if (plVar37 <= plVar27) {
                  uVar51 = 0;
                  if (plVar37 != (long *)0x0) {
                    uVar51 = (ulong)plVar27 / (ulong)plVar37;
                  }
                  plVar27 = (long *)((long)plVar27 - uVar51 * (long)plVar37);
                }
                plVar50 = (long *)(*plVar29 + (long)plVar27 * 8);
                goto LAB_10a4d34a4;
              }
            }
            else {
              *pplVar1 = (long *)*plVar50;
LAB_10a4d34a4:
              *plVar50 = (long)pplVar1;
            }
            plVar49[0x44] = plVar49[0x44] + 1;
LAB_10a4d34b4:
            if (plStack_4e8 != (long *)0x0) {
              plStack_4e0 = plStack_4e8;
              __ZdlPv();
            }
            pplStack_3a0 = &plStack_500;
            FUN_10a34e6f0(&pplStack_3a0);
            plVar47 = (long *)*plVar47;
          } while (plVar47 != (long *)0x0);
        }
        if (*(char *)(puVar34 + 0x85) == '\x01') {
          if (*(char *)(puVar34 + 0x7d) == '\x01') {
            *(bool *)((long)plVar49 + 0x234) = 0.5 < (float)puVar34[0x7c];
            lVar46 = 4;
LAB_10a4d3558:
            uVar70 = *(undefined4 *)((long)puVar34 + lVar46 + 0x1ec);
          }
          else {
            if (*(char *)(puVar34 + 0x7f) == '\x01') {
              *(bool *)((long)plVar49 + 0x234) = 0.5 < (float)puVar34[0x7e];
              lVar46 = 0xc;
              goto LAB_10a4d3558;
            }
            *(undefined1 *)((long)plVar49 + 0x234) = 0;
            uVar70 = 0x3f000000;
          }
          *(undefined4 *)(plVar49 + 0x46) = uVar70;
        }
        puVar32 = (undefined8 *)plVar45[1];
        if (puVar32 < (undefined8 *)plVar45[2]) {
          puVar32[1] = plStack_238;
          *puVar32 = plStack_240;
          plVar45[1] = (long)(puVar32 + 2);
        }
        else {
          lVar46 = (long)puVar32 - *plVar45;
          uVar51 = (lVar46 >> 4) + 1;
          if (uVar51 >> 0x3c != 0) {
            func_0x00010a4f1518();
            goto LAB_10a4d3dbc;
          }
          uVar38 = plVar45[2] - *plVar45;
          uVar48 = (long)uVar38 >> 3;
          if (uVar48 <= uVar51) {
            uVar48 = uVar51;
          }
          if (0x7fffffffffffffef < uVar38) {
            uVar48 = 0xfffffffffffffff;
          }
          plVar49 = plVar45;
          plStack_4f0 = plVar45;
          FUN_10a4f152c();
          puVar32 = (undefined8 *)((long)plVar49 + lVar46);
          puVar32[1] = plStack_238;
          *puVar32 = plStack_240;
          plStack_238 = (long *)0x0;
          plStack_240 = (long *)0x0;
          lVar46 = (long)puVar32 - (plVar45[1] - *plVar45);
          _memcpy(lVar46);
          plStack_510 = (long *)*plVar45;
          *plVar45 = lVar46;
          plVar45[1] = (long)(puVar32 + 2);
          plStack_4f8 = (long *)plVar45[2];
          plVar45[2] = (long)(plVar49 + uVar48 * 2);
          plStack_508 = plStack_510;
          plStack_500 = plStack_510;
          func_0x00010a4f1560(&plStack_510);
          plVar49 = plStack_238;
          plVar45[1] = (long)(puVar32 + 2);
          if (plStack_238 != (long *)0x0) {
            plVar45 = plStack_238 + 1;
            do {
              lVar46 = *plVar45;
              cVar5 = '\x01';
              bVar25 = (bool)ExclusiveMonitorPass(plVar45,0x10);
              if (bVar25) {
                *plVar45 = lVar46 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar46 == 0) {
              (**(code **)(*plStack_238 + 0x10))(plStack_238);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar49);
            }
          }
        }
        plVar45 = (long *)*param_1;
        lVar46 = plVar45[1];
        if (*plVar45 == lVar46) goto LAB_10a4d3dbc;
        lVar41 = *(long *)(lVar46 + -0x10);
        uStack_230 = (long *)CONCAT44(uStack_230._4_4_,(int)((ulong)(lVar46 - *plVar45) >> 4) + -1);
        if ((lVar41 == 0) ||
           (lVar46 = lVar41, ___dynamic_cast(lVar41,&PTR_DAT_110bef5a8,&PTR_DAT_110bef5e0,0),
           lVar46 == 0)) {
          uVar70 = 0;
        }
        else {
          uVar70 = 1;
          if (*(char *)(lVar46 + 0x234) == '\0') {
            uVar70 = 2;
          }
          if (*(char *)(lVar41 + 0x37) < '\0') {
            func_0x000107c3192c(&plStack_510,*(undefined8 *)(lVar41 + 0x20),
                                *(undefined8 *)(lVar41 + 0x28));
          }
          else {
            plStack_510 = *(long **)(lVar41 + 0x20);
            plStack_508 = *(long **)(lVar41 + 0x28);
            plStack_500 = *(long **)(lVar41 + 0x30);
          }
          plStack_4f8 = (long *)((ulong)plStack_4f8 & 0xffffffff00000000);
          puVar32 = (undefined8 *)auStack_2a0;
          FUN_10a50679c(puVar32,&plStack_510,&plStack_510);
          func_0x000109febdc8(puVar32 + 6,&uStack_230);
          if ((long)plStack_500 < 0) {
            __ZdlPv(plStack_510);
          }
        }
        if (*(char *)(lVar41 + 0x37) < '\0') {
          func_0x000107c3192c(&plStack_510,*(undefined8 *)(lVar41 + 0x20),
                              *(undefined8 *)(lVar41 + 0x28));
        }
        else {
          plStack_510 = *(long **)(lVar41 + 0x20);
          plStack_508 = *(long **)(lVar41 + 0x28);
          plStack_500 = *(long **)(lVar41 + 0x30);
        }
        plStack_4f8 = (long *)CONCAT44(plStack_4f8._4_4_,uVar70);
        puVar32 = (undefined8 *)auStack_2a0;
        FUN_10a50679c(puVar32,&plStack_510,&plStack_510);
        func_0x000109febdc8(puVar32 + 6,&uStack_230);
        if ((long)plStack_500 < 0) {
          __ZdlPv(plStack_510);
        }
        puVar26 = puVar26 + 2;
      } while (puVar26 != puStack_2d8);
    }
    if ((lStack_288 != 0) && (*(long *)(param_8 + 0x18) != 0)) {
      plVar45 = plVar45 + 8;
      plVar49 = *(long **)(param_8 + 0x10);
      plStack_510 = (long *)auStack_2a0;
      plStack_4f8 = (long *)0x0;
      plStack_500 = (long *)0x0;
      plStack_4e8 = (long *)0x0;
      plStack_4f0 = (long *)0x0;
      plStack_4d8 = (long *)0x0;
      plStack_4e0 = (long *)0x0;
      fStack_4d0 = 0.0;
      uStack_4cc = 0.0;
      plStack_508 = plVar45;
      if (plVar49 != (long *)0x0) {
        do {
          plVar47 = plStack_4f8;
          if (*(int *)((long)plVar49 + 0x14) == 3) {
            if (plStack_4f8 < plStack_4f0) {
              FUN_10a22fa58(plStack_4f8,plVar49 + 2);
              plVar47 = plVar47 + 9;
            }
            else {
              lVar46 = (long)plStack_4f8 - (long)plStack_500;
              uVar51 = (lVar46 >> 3) * -0x71c71c71c71c71c7 + 1;
              if (0x38e38e38e38e38e < uVar51) {
                FUN_10a4f1420();
                goto LAB_10a4d3dbc;
              }
              lVar41 = (long)plStack_4f0 - (long)plStack_500 >> 3;
              uVar48 = lVar41 * 0x1c71c71c71c71c72;
              if (uVar48 < uVar51 || uVar48 - uVar51 == 0) {
                uVar48 = uVar51;
              }
              if (0x1c71c71c71c71c6 < (ulong)(lVar41 * -0x71c71c71c71c71c7)) {
                uVar48 = 0x38e38e38e38e38e;
              }
              pplStack_210 = &plStack_500;
              if (uVar48 == 0) {
                lVar41 = 0;
              }
              else {
                if (0x38e38e38e38e38e < uVar48) {
                  func_0x000109ffded8();
                  goto LAB_10a4d3dbc;
                }
                lVar41 = uVar48 * 0x48;
                __Znwm();
              }
              lVar46 = lVar41 + lVar46;
              plVar27 = (long *)(lVar41 + uVar48 * 0x48);
              uStack_230 = (long *)lVar41;
              plStack_228 = (long *)lVar46;
              plStack_220 = (long *)lVar46;
              plStack_218 = plVar27;
              FUN_10a22fa58(lVar46,plVar49 + 2);
              plVar52 = plStack_4f8;
              plVar29 = (long *)((long)plStack_500 + (lVar46 - (long)plStack_4f8));
              plVar37 = plVar29;
              plVar47 = plStack_500;
              if (plStack_4f8 != plStack_500) {
                do {
                  *plVar37 = *plVar47;
                  lVar41 = plVar47[1];
                  lVar11 = plVar47[2];
                  plVar37[3] = plVar47[3];
                  plVar37[2] = lVar11;
                  plVar37[1] = lVar41;
                  plVar47[2] = 0;
                  plVar47[3] = 0;
                  plVar47[1] = 0;
                  lVar19 = plVar47[4];
                  lVar20 = plVar47[5];
                  lVar11 = plVar47[7];
                  lVar41 = plVar47[6];
                  plVar37[8] = plVar47[8];
                  plVar37[5] = lVar20;
                  plVar37[4] = lVar19;
                  plVar37[7] = lVar11;
                  plVar37[6] = lVar41;
                  plVar47 = plVar47 + 9;
                  plVar37 = plVar37 + 9;
                  plVar50 = plStack_500;
                } while (plVar47 != plStack_4f8);
                do {
                  if (*(char *)((long)plVar50 + 0x1f) < '\0') {
                    __ZdlPv(plVar50[1]);
                  }
                  plVar50 = plVar50 + 9;
                } while (plVar50 != plVar52);
              }
              plVar47 = (long *)(lVar46 + 0x48);
              plStack_218 = plStack_4f0;
              uStack_230 = plStack_500;
              plStack_500 = plVar29;
              plStack_4f8 = plVar47;
              plStack_4f0 = plVar27;
              plStack_228 = uStack_230;
              plStack_220 = uStack_230;
              FUN_10a4f1434(&uStack_230);
            }
            plVar29 = plStack_4d8;
            if (-1 < (int)uStack_4cc) {
              plVar29 = (long *)(ulong)uStack_4cc._3_1_;
            }
            plStack_4f8 = plVar47;
            if (plVar29 == (long *)0x0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (&plStack_4e0,plVar49 + 3);
            }
          }
          else {
            if (*(char *)((long)plVar49 + 0x2f) < '\0') {
              func_0x000107c3192c(&uStack_230,plVar49[3],plVar49[4]);
            }
            else {
              uStack_230 = (long *)plVar49[3];
              plStack_228 = (long *)plVar49[4];
              plStack_220 = (long *)plVar49[5];
            }
            plStack_218 = (long *)CONCAT44(plStack_218._4_4_,*(undefined4 *)((long)plVar49 + 0x14));
            puVar26 = (undefined8 *)auStack_2a0;
            FUN_10a506374(puVar26,&uStack_230);
            if ((long)plStack_220 < 0) {
              __ZdlPv(uStack_230);
            }
            if (puVar26 != (undefined8 *)0x0) {
              if (((ulong)(long)(int)plVar49[2] < (ulong)((long)(puVar26[7] - puVar26[6]) >> 2)) &&
                 (FUN_10a506500(plVar45,plVar49 + 2,plVar49 + 2,
                                puVar26[6] + (long)(int)plVar49[2] * 4),
                 *(int *)((long)plVar49 + 0x14) - 1U < 2)) {
                plStack_4e8 = (long *)((long)plStack_4e8 + 1);
                plVar47 = plStack_4d8;
                if (-1 < (int)uStack_4cc) {
                  plVar47 = (long *)(ulong)uStack_4cc._3_1_;
                }
                if (plVar47 == (long *)0x0) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (&plStack_4e0,plVar49 + 3);
                }
              }
            }
          }
          plVar47 = plStack_510;
          plVar49 = (long *)*plVar49;
        } while (plVar49 != (long *)0x0);
        if (plStack_4f8 != plStack_500) {
          if ((int)uStack_4cc < 0) {
            func_0x000107c3192c(&uStack_230,plStack_4e0,plStack_4d8);
          }
          else {
            plStack_228 = plStack_4d8;
            uStack_230 = plStack_4e0;
            plStack_220 = (long *)CONCAT44(uStack_4cc,fStack_4d0);
          }
          plStack_218 = (long *)((ulong)plStack_218 & 0xffffffff00000000);
          FUN_10a506374(plVar47,&uStack_230);
          if (plVar47 == (long *)0x0) {
            FUN_109ffdddc(&UNK_10f639994);
LAB_10a4d3dbc:
                    /* WARNING: Does not return */
            pcVar24 = (code *)SoftwareBreakpoint(1,0x10a4d3dc0);
            (*pcVar24)();
          }
          lVar46 = plVar47[6];
          lVar41 = plVar47[7];
          if ((long)plStack_220 < 0) {
            __ZdlPv(uStack_230);
          }
          dStack_358 = 0.0;
          uStack_360 = 0.0;
          dStack_350 = 0.0;
          func_0x000107c27e9c(&uStack_360,(lVar41 - lVar46 >> 2) - (long)plStack_4e8);
          plVar45 = plStack_510;
          if ((int)uStack_4cc < 0) {
            func_0x000107c3192c(&uStack_230,plStack_4e0,plStack_4d8);
          }
          else {
            plStack_228 = plStack_4d8;
            uStack_230 = plStack_4e0;
            plStack_220 = (long *)CONCAT44(uStack_4cc,fStack_4d0);
          }
          plStack_218 = (long *)CONCAT44(plStack_218._4_4_,1);
          FUN_10a506374(plVar45,&uStack_230);
          if ((long)plStack_220 < 0) {
            __ZdlPv(uStack_230);
          }
          if (plVar45 != (long *)0x0) {
            piVar3 = (int *)plVar45[7];
            for (piVar42 = (int *)plVar45[6]; piVar42 != piVar3; piVar42 = piVar42 + 1) {
              if (*piVar42 != 0) {
                func_0x000109febdc8(&uStack_360,piVar42);
              }
            }
          }
          plVar45 = plStack_510;
          if ((int)uStack_4cc < 0) {
            func_0x000107c3192c(&uStack_230,plStack_4e0,plStack_4d8);
          }
          else {
            plStack_228 = plStack_4d8;
            uStack_230 = plStack_4e0;
            plStack_220 = (long *)CONCAT44(uStack_4cc,fStack_4d0);
          }
          plStack_218 = (long *)CONCAT44(plStack_218._4_4_,2);
          FUN_10a506374(plVar45,&uStack_230);
          if ((long)plStack_220 < 0) {
            __ZdlPv(uStack_230);
          }
          plVar47 = plStack_500;
          plVar49 = plStack_4f8;
          if (plVar45 != (long *)0x0) {
            piVar3 = (int *)plVar45[7];
            for (piVar42 = (int *)plVar45[6]; plVar47 = plStack_500, plVar49 = plStack_4f8,
                piVar42 != piVar3; piVar42 = piVar42 + 1) {
              if (*piVar42 != 0) {
                func_0x000109febdc8(&uStack_360,piVar42);
              }
            }
          }
          for (; plVar47 != plVar49; plVar47 = plVar47 + 9) {
            if ((ulong)(long)(int)*plVar47 < (ulong)((long)dStack_358 - (long)uStack_360 >> 2)) {
              FUN_10a506500(plStack_508,plVar47,plVar47,(long)uStack_360 + (long)(int)*plVar47 * 4);
            }
          }
          if (uStack_360 != 0.0) {
            dStack_358 = uStack_360;
            __ZdlPv();
          }
        }
      }
      if ((int)uStack_4cc < 0) {
        __ZdlPv(plStack_4e0);
      }
      FUN_10a4f1494(&plStack_500);
    }
    FUN_10a507a2c(auStack_2a0);
  }
  FUN_10a4f15ac(&puStack_2e0);
  plVar45 = plStack_520;
  if (plStack_520 != (long *)0x0) {
    plVar49 = plStack_520 + 1;
    do {
      lVar46 = *plVar49;
      cVar5 = '\x01';
      bVar25 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar25) {
        *plVar49 = lVar46 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar46 == 0) {
      (**(code **)(*plStack_520 + 0x10))(plStack_520);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar45);
    }
  }
  return;
}



/* Entry: 10a4d40d8; end: 10a4d416f;  */

long * FUN_10a4d40d8(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      func_0x00010a4f1518();
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        FUN_10a4f19dc();
      }
      return param_1;
    }
    lVar3 = param_1[1];
    plVar1 = param_1;
    plStack_38 = param_1;
    FUN_10a4f152c();
    lVar2 = (long)plVar1 + (lVar3 - lVar2);
    lVar3 = lVar2 - (param_1[1] - *param_1);
    _memcpy(lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar1 + param_2 * 2);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a4f1560(param_1);
  }
  return param_1;
}



/* Entry: 10a4d4170; end: 10a4d41d7;  */

long * FUN_10a4d4170(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_10a4f19dc();
  }
  return param_1;
}



/* Entry: 10a4d41d8; end: 10a4d43bb;  */

void FUN_10a4d41d8(long param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  uint5 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  plVar7 = *(long **)(param_4 + 0x10);
  uStack_68 = param_2;
  if (plVar7 != (long *)0x0) {
    do {
      uVar8 = 7;
      if (*(char *)((long)plVar7 + 0x79) == '\0') {
        uVar8 = 1;
      }
      uStack_a0 = CONCAT44(uVar8,0x7fffffff);
      lStack_98 = CONCAT44(lStack_98._4_4_,0x168);
      plStack_90 = (long *)CONCAT35((int3)((ulong)plStack_90 >> 0x28),0x100000000);
      uVar2 = (ulong)_uStack_88 >> 0x28;
      uVar1 = (uint)_uStack_88;
      uStack_88 = (uint5)(uVar1 & 0xffffff00);
      _uStack_88 = CONCAT35((int3)uVar2,uStack_88);
      puVar5 = &uStack_68;
      func_0x0001098ac018(puVar5,&UNK_10e4a7ac1,0x23,&uStack_a0,0,1);
      plStack_90 = plVar7 + 2;
      uVar6 = param_2;
      uStack_a0 = param_1;
      lStack_98 = param_1 + 0x110;
      FUN_10a4d43bc(param_2,&uStack_a0,(ulong)puVar5 & 0xffffffff);
      FUN_10a4d454c(&lStack_80,uVar6);
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  lVar4 = lStack_78;
  lVar3 = lStack_80;
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  FUN_10a4f1b80(&lStack_c0,lStack_80,lStack_78,lStack_78 - lStack_80 >> 2);
  _uStack_88 = uStack_70;
  lStack_78 = 0;
  uStack_70 = 0;
  lStack_80 = 0;
  uStack_d8 = lStack_b8;
  lStack_e0 = lStack_c0;
  uStack_d0 = uStack_b0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a0 = param_4;
  lStack_98 = lVar3;
  plStack_90 = (long *)lVar4;
  FUN_10a4d4620(param_2,&uStack_a0,&lStack_e0);
  *param_3 = (int)param_2;
  if (lStack_e0 != 0) {
    __ZdlPv();
  }
  if (lStack_98 != 0) {
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a4d43bc; end: 10a4d454b;  */

long * FUN_10a4d43bc(long param_1,undefined8 *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined4 *puVar16;
  undefined1 uStack_209;
  code *pcStack_208;
  undefined4 *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 *puStack_1e8;
  code **ppcStack_1e0;
  long *plStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_168;
  long lStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_e8 = (long *)0x0;
  uStack_e0 = 0;
  plStack_f0 = (long *)0x0;
  uStack_78 = (code *)CONCAT44(param_3,0x20000000);
  FUN_10a26ebc0(&plStack_f0,0,&uStack_78,&ppuStack_70,2);
  uStack_a0 = param_2[1];
  uStack_a8 = *param_2;
  uStack_98 = param_2[2];
  pcStack_b8 = FUN_10a4f1664;
  ppuStack_b0 = &PTR_FUN_110be8ba8;
  uStack_78 = FUN_10a4f1664;
  ppuStack_70 = &PTR_FUN_110be8ba8;
  uStack_60 = param_2[1];
  uStack_68 = *param_2;
  uStack_58 = param_2[2];
  plStack_c8 = plStack_e8;
  plStack_d0 = plStack_f0;
  uStack_c0 = uStack_e0;
  plStack_f0 = (long *)0x0;
  plStack_e8 = (long *)0x0;
  uStack_e0 = 0;
  plVar5 = (long *)&UNK_110be8b88;
  plVar3 = (long *)(param_1 + 0x18);
  puVar6 = &uStack_78;
  func_0x0001098aeecc(plVar3,puVar6,&UNK_110be8b88,&plStack_d0);
  if (plStack_d0 != (long *)0x0) {
    plStack_c8 = plStack_d0;
    __ZdlPv();
  }
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  plVar15 = plStack_f0;
  if (plStack_f0 != (long *)0x0) {
    plStack_e8 = plStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar3;
  }
  ___stack_chk_fail();
  if (plStack_d0 != (long *)0x0) {
    plStack_c8 = plStack_d0;
    __ZdlPv();
  }
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  if (plStack_f0 != (long *)0x0) {
    plStack_e8 = plStack_f0;
    __ZdlPv();
  }
  __Unwind_Resume();
  pcStack_f8 = FUN_10a4d454c;
  puVar2 = (undefined4 *)plVar15[1];
  if ((undefined4 *)plVar15[2] <= puVar2) {
    plVar11 = (long *)*plVar15;
    lVar12 = (long)puVar2 - (long)plVar11;
    lVar14 = lVar12 >> 2;
    uVar1 = lVar14 + 1;
    plVar3 = plVar15;
    puVar7 = puVar6;
    puStack_100 = &stack0xfffffffffffffff0;
    if (uVar1 >> 0x3e == 0) {
      uVar9 = plVar15[2] - (long)plVar11;
      uVar10 = (long)uVar9 >> 1;
      if (uVar10 <= uVar1) {
        uVar10 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar9) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 >> 0x3e == 0) {
        lVar4 = uVar10 << 2;
        __Znwm();
        puVar2 = (undefined4 *)(lVar4 + lVar12);
        plVar3 = (long *)(puVar2 + -lVar14);
        puVar16 = puVar2 + 1;
        *puVar2 = (int)puVar6;
        plVar5 = plVar3;
        _memcpy(plVar3,plVar11,lVar12);
        *plVar15 = (long)plVar3;
        plVar15[1] = (long)puVar16;
        plVar15[2] = lVar4 + uVar10 * 4;
        if (plVar11 != (long *)0x0) {
          __ZdlPv(plVar11);
          plVar5 = plVar11;
        }
        goto LAB_10a4d45fc;
      }
    }
    else {
      FUN_10a4f1b6c();
    }
    func_0x000109ffded8();
    lStack_160 = (long)plVar11;
    plStack_158 = plVar15;
    ppuStack_150 = &puStack_100;
    pcStack_148 = FUN_10a4d4620;
    lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_1b8 = plVar5[1];
    plStack_1c0 = (long *)*plVar5;
    lStack_1b0 = plVar5[2];
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
    uStack_190 = puVar7[1];
    uStack_198 = *puVar7;
    uStack_180 = puVar7[3];
    uStack_188 = puVar7[2];
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[1] = 0;
    pcStack_1a8 = FUN_10a4f1d14;
    ppuStack_1a0 = &PTR_FUN_110be8be0;
    plVar3 = plVar3 + 3;
    ppcVar8 = &pcStack_1a8;
    FUN_10a4f1bf0(plVar3,ppcVar8,&plStack_1c0);
    (*(code *)*ppuStack_1a0)(&ppuStack_1a0);
    plVar5 = plStack_1c0;
    if (plStack_1c0 != (long *)0x0) {
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_168) {
      ___stack_chk_fail();
      (*(code *)*ppuStack_1a0)(&ppuStack_1a0);
      if (plStack_1c0 != (long *)0x0) {
        __ZdlPv();
      }
      plVar3 = plVar5;
      __Unwind_Resume(plVar5);
      pcStack_1c8 = FUN_10a4d470c;
      puStack_200 = puVar2;
      lStack_1f0 = lVar12;
      lStack_1f8 = lVar14;
      pppuStack_1d0 = &ppuStack_150;
      ppcStack_1e0 = &pcStack_1a8;
      plStack_1d8 = plVar5;
      plVar5 = plVar3;
      puStack_1e8 = puVar6;
      for (pcVar13 = ppcVar8[2]; pcVar13 != (code *)0x0; pcVar13 = *(code **)pcVar13) {
        pcStack_208 = pcVar13 + 0x10;
        plVar11 = plVar3;
        FUN_10a507b84(plVar3,pcStack_208,&UNK_10dd5b8f9,&pcStack_208,&uStack_209);
        plVar5 = plVar11;
        for (plVar15 = *(long **)(pcVar13 + 0x90); plVar15 != (long *)0x0;
            plVar15 = (long *)*plVar15) {
          plVar5 = plVar11 + 0x10;
          FUN_10a22f5ac(plVar5,plVar15 + 2,plVar15 + 2);
        }
      }
      return plVar5;
    }
    return plVar3;
  }
  puVar16 = puVar2 + 1;
  *puVar2 = (int)puVar6;
  plVar5 = plVar15;
LAB_10a4d45fc:
  plVar15[1] = (long)puVar16;
  return plVar5;
}



/* Entry: 10a4d454c; end: 10a4d461f;  */

long * FUN_10a4d454c(long *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined1 uStack_119;
  code *pcStack_118;
  undefined4 *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  code **ppcStack_f0;
  long *plStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    puVar15 = puVar2 + 1;
    *puVar2 = (int)param_2;
    plVar4 = param_1;
LAB_10a4d45fc:
    param_1[1] = (long)puVar15;
    return plVar4;
  }
  plVar11 = (long *)*param_1;
  lVar12 = (long)puVar2 - (long)plVar11;
  lVar14 = lVar12 >> 2;
  uVar1 = lVar14 + 1;
  plVar4 = param_1;
  puVar7 = param_2;
  if (uVar1 >> 0x3e == 0) {
    uVar9 = param_1[2] - (long)plVar11;
    uVar10 = (long)uVar9 >> 1;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar9) {
      uVar10 = 0x3fffffffffffffff;
    }
    if (uVar10 >> 0x3e == 0) {
      lVar3 = uVar10 << 2;
      __Znwm();
      puVar2 = (undefined4 *)(lVar3 + lVar12);
      plVar5 = (long *)(puVar2 + -lVar14);
      puVar15 = puVar2 + 1;
      *puVar2 = (int)param_2;
      plVar4 = plVar5;
      _memcpy(plVar5,plVar11,lVar12);
      *param_1 = (long)plVar5;
      param_1[1] = (long)puVar15;
      param_1[2] = lVar3 + uVar10 * 4;
      if (plVar11 != (long *)0x0) {
        __ZdlPv(plVar11);
        plVar4 = plVar11;
      }
      goto LAB_10a4d45fc;
    }
  }
  else {
    FUN_10a4f1b6c();
  }
  func_0x000109ffded8();
  pcStack_58 = FUN_10a4d4620;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c8 = param_3[1];
  plStack_d0 = (long *)*param_3;
  lStack_c0 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_a0 = puVar7[1];
  uStack_a8 = *puVar7;
  uStack_90 = puVar7[3];
  uStack_98 = puVar7[2];
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[1] = 0;
  pcStack_b8 = FUN_10a4f1d14;
  ppuStack_b0 = &PTR_FUN_110be8be0;
  plVar4 = plVar4 + 3;
  ppcVar8 = &pcStack_b8;
  lStack_70 = (long)plVar11;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_10a4f1bf0(plVar4,ppcVar8,&plStack_d0);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  plVar11 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return plVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  if (plStack_d0 != (long *)0x0) {
    __ZdlPv();
  }
  plVar5 = plVar11;
  __Unwind_Resume(plVar11);
  pcStack_d8 = FUN_10a4d470c;
  puStack_110 = puVar2;
  lStack_100 = lVar12;
  lStack_108 = lVar14;
  ppuStack_e0 = &puStack_60;
  ppcStack_f0 = &pcStack_b8;
  plStack_e8 = plVar11;
  plVar4 = plVar5;
  puStack_f8 = param_2;
  for (pcVar13 = ppcVar8[2]; pcVar13 != (code *)0x0; pcVar13 = *(code **)pcVar13) {
    pcStack_118 = pcVar13 + 0x10;
    plVar6 = plVar5;
    FUN_10a507b84(plVar5,pcStack_118,&UNK_10dd5b8f9,&pcStack_118,&uStack_119);
    plVar4 = plVar6;
    for (plVar11 = *(long **)(pcVar13 + 0x90); plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      plVar4 = plVar6 + 0x10;
      FUN_10a22f5ac(plVar4,plVar11 + 2,plVar11 + 2);
    }
  }
  return plVar4;
}



/* Entry: 10a4d4620; end: 10a4d470b;  */

long FUN_10a4d4620(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code **ppcVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 uStack_c9;
  code *pcStack_c8;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_78 = param_3[1];
  lStack_80 = *param_3;
  lStack_70 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_50 = param_2[1];
  uStack_58 = *param_2;
  uStack_40 = param_2[3];
  uStack_48 = param_2[2];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  pcStack_68 = FUN_10a4f1d14;
  ppuStack_60 = &PTR_FUN_110be8be0;
  param_1 = param_1 + 0x18;
  ppcVar4 = &pcStack_68;
  FUN_10a4f1bf0(param_1,ppcVar4,&lStack_80);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  lVar1 = lStack_80;
  if (lStack_80 != 0) {
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (lStack_80 != 0) {
    __ZdlPv();
  }
  __Unwind_Resume(lVar1);
  lVar3 = lVar1;
  for (pcVar5 = ppcVar4[2]; pcVar5 != (code *)0x0; pcVar5 = *(code **)pcVar5) {
    pcStack_c8 = pcVar5 + 0x10;
    lVar2 = lVar1;
    FUN_10a507b84(lVar1,pcStack_c8,&UNK_10dd5b8f9,&pcStack_c8,&uStack_c9);
    lVar3 = lVar2;
    for (plVar6 = *(long **)(pcVar5 + 0x90); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      lVar3 = lVar2 + 0x80;
      FUN_10a22f5ac(lVar3,plVar6 + 2,plVar6 + 2);
    }
  }
  return lVar3;
}



/* Entry: 10a4d470c; end: 10a4d4797;  */

void FUN_10a4d470c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uStack_49;
  long *plStack_48;
  
  for (plVar2 = *(long **)(param_2 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    plStack_48 = plVar2 + 2;
    lVar1 = param_1;
    FUN_10a507b84(param_1,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
    for (plVar3 = (long *)plVar2[0x12]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      FUN_10a22f5ac(lVar1 + 0x80,plVar3 + 2,plVar3 + 2);
    }
  }
  return;
}



/* Entry: 10a4d4798; end: 10a4d47e3;  */

void FUN_10a4d4798(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  lStack_28 = param_2;
  FUN_10a507b84(param_1,param_2,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22f5ac(param_1 + 0x80,param_2 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 10a4d47e4; end: 10a4d48af;  */

undefined8 FUN_10a4d47e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined **ppuStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  uStack_60 = 0;
  ppuStack_68 = &PTR_FUN_110bef348;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  plStack_48 = (long *)0x0;
  uStack_38 = 0x3f800000;
  FUN_10a4cfdd4(&ppuStack_68,*(undefined8 *)(param_2 + 0x220),*(undefined1 *)(param_2 + 0x238));
  func_0x00010a4cfe64(&ppuStack_68,*(undefined8 *)(param_2 + 0x1e0),*(undefined1 *)(param_2 + 0x1f8)
                     );
  uVar2 = 0x16800000007;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48;
    do {
      uVar2 = 0x16800000001;
      if (*(char *)((long)plVar1 + 0x79) != '\x01') break;
      plVar1 = (long *)*plVar1;
      uVar2 = 0x16800000007;
    } while (plVar1 != (long *)0x0);
  }
  ppuStack_68 = &PTR_FUN_110bef348;
  func_0x00010a22fc28(&uStack_58);
  return uVar2;
}



/* Entry: 10a4d48b0; end: 10a4d48df;  */

void FUN_10a4d48b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  if (*(char *)(param_2 + 0x1f8) == '\x01') {
    plVar1 = (long *)(param_2 + 0x1e0);
    do {
      plVar1 = (long *)*plVar1;
      if (plVar1 == (long *)0x0) {
        return;
      }
    } while (*(char *)(plVar1 + 0xf) != '\x01');
    *(undefined1 *)(param_2 + 3) = 1;
  }
  return;
}



/* Entry: 10a4d48e0; end: 10a4d5c3f;  */

void FUN_10a4d48e0(long param_1,undefined8 *****param_2,undefined8 param_3,long param_4,long param_5
                  )

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 ****ppppuVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  undefined **ppuVar11;
  undefined8 **ppuVar12;
  code *pcVar13;
  bool bVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 ****ppppuVar17;
  long *plVar18;
  undefined4 *puVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  long *****ppppplVar26;
  long *plVar27;
  undefined8 ***pppuVar28;
  long ****pppplVar29;
  undefined8 ***pppuVar30;
  int iVar31;
  undefined8 *****pppppuVar32;
  long *plVar33;
  undefined8 *****pppppuVar34;
  undefined **ppuVar35;
  int iVar36;
  undefined8 ****ppppuVar37;
  long *****ppppplVar38;
  long *****ppppplVar39;
  undefined8 *****pppppuVar40;
  undefined8 ****ppppuVar41;
  undefined8 uVar42;
  long *****ppppplVar43;
  long lVar44;
  undefined8 *****pppppuVar45;
  long *****ppppplVar46;
  long *plStack_340;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  long *aplStack_2e8 [5];
  long alStack_2c0 [2];
  undefined8 ***apppuStack_2b0 [3];
  undefined8 auStack_294 [2];
  long *aplStack_280 [18];
  long ****pppplStack_1f0;
  long ****pppplStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b0;
  long ****pppplStack_1a8;
  undefined8 ****ppppuStack_1a0;
  ulong uStack_198;
  float fStack_190;
  undefined **ppuStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long lStack_158;
  undefined4 uStack_150;
  int iStack_144;
  long lStack_140;
  long ****pppplStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****appppuStack_128 [2];
  int iStack_114;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined **ppuStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  long *plStack_90;
  long *plStack_88;
  
  uStack_178 = 0;
  ppuStack_180 = &PTR_FUN_110bef348;
  uStack_168 = 0;
  uStack_170 = 0;
  lStack_158 = 0;
  plStack_160 = (long *)0x0;
  uStack_150 = 0x3f800000;
  FUN_10a4cfdd4(&ppuStack_180,*(undefined8 *)(param_5 + 0x220),*(undefined1 *)(param_5 + 0x238));
  func_0x00010a4cfe64(&ppuStack_180,*(undefined8 *)(param_5 + 0x1e0),
                      *(undefined1 *)(param_5 + 0x1f8));
  if (lStack_158 != 0) {
    iStack_114 = *(int *)(*(long *)(param_4 + 0x218) + 0xa0);
    ppuVar35 = *(undefined ***)(param_1 + 0x10);
    pppplStack_1a8 = (long ****)0x0;
    puStack_1b0 = (undefined *)0x0;
    uStack_198 = 0;
    ppppuStack_1a0 = (undefined8 *****)0x0;
    fStack_190 = 1.0;
    pppplStack_1e8 = (long ****)0x0;
    lStack_1e0 = 0;
    uStack_f8 = 0;
    ppuStack_100 = &PTR_FUN_110bef348;
    plStack_e8 = (long *)0x0;
    plStack_f0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    plStack_e0 = (long *)0x0;
    uStack_d0 = 0x3f800000;
    pppplStack_1f0 = (long ****)&pppplStack_1e8;
    FUN_10a4cfdd4(&ppuStack_100,*(undefined8 *)(param_5 + 0x220),*(undefined1 *)(param_5 + 0x238));
    func_0x00010a4cfe64(&ppuStack_100,*(undefined8 *)(param_5 + 0x1e0),
                        *(undefined1 *)(param_5 + 0x1f8));
    plStack_340 = plStack_e0;
    if (plStack_e0 != (long *)0x0) {
      ppuVar1 = ppuVar35 + 2;
      do {
        ppppuVar37 = param_2[2];
        uVar23 = param_4 + 0x198;
        FUN_10a0ec6f0();
        iVar20 = (int)((ulong)ppppuVar37 >> 0x20);
        iVar36 = (int)ppppuVar37;
        iVar31 = iVar36;
        if (iVar36 <= iVar20) {
          iVar31 = iVar20;
        }
        iVar6 = iVar36;
        if (iVar20 <= iVar36) {
          iVar6 = iVar20;
        }
        uVar21 = (uint)((float)(iVar31 * 0x168) / (float)iVar6);
        uVar5 = 0x168;
        if (iVar36 <= iVar20) {
          uVar5 = uVar21;
        }
        if (iVar36 <= iVar20) {
          uVar21 = 0x168;
        }
        uVar8 = (ulong)uVar21;
        uVar9 = (ulong)uVar5;
        if ((uVar23 & 1) != 0) {
          uVar8 = (ulong)uVar5;
          uVar9 = (ulong)uVar21;
        }
        pppppuVar32 = (undefined8 *****)(uVar8 | uVar9 << 0x20);
        iVar31 = 7;
        ppppplVar46 = (long *****)pppplStack_1e8;
        ppppplVar39 = &pppplStack_1e8;
        if (*(char *)((long)plStack_340 + 0x79) == '\0') {
          iVar31 = 1;
        }
LAB_10a4d4a78:
        ppppplVar38 = ppppplVar39;
        if (ppppplVar46 != (long *****)0x0) {
          do {
            ppppplVar43 = ppppplVar46;
            iVar20 = *(int *)(ppppplVar43 + 4);
            if (iVar31 == iVar20) {
              bVar14 = true;
              do {
                bVar10 = bVar14;
                lVar22 = 0;
                iVar20 = (int)uVar8;
                if (!bVar10) {
                  lVar22 = 4;
                  iVar20 = (int)uVar9;
                }
                iVar36 = *(int *)((long)ppppplVar43 + lVar22 + 0x24);
                if (iVar20 != iVar36) {
                  if (iVar20 < iVar36) goto LAB_10a4d4b10;
                  break;
                }
                bVar14 = false;
              } while (bVar10);
              bVar10 = true;
              while( true ) {
                lVar22 = 0;
                if (!bVar10) {
                  lVar22 = 4;
                }
                iVar6 = *(int *)((long)ppppplVar43 + lVar22 + 0x24);
                iVar36 = (int)uVar8;
                if (!bVar10) {
                  iVar36 = (int)uVar9;
                }
                bVar14 = SBORROW4(iVar6,iVar36);
                iVar20 = iVar6 - iVar36;
                if (iVar6 != iVar36) break;
                bVar14 = !bVar10;
                bVar10 = false;
                if (bVar14) goto LAB_10a4d4b74;
              }
            }
            else {
              if (iVar31 < iVar20) goto LAB_10a4d4b10;
              bVar14 = SBORROW4(iVar20,iVar31);
              iVar20 = iVar20 - iVar31;
            }
            if (iVar20 < 0 == bVar14) goto LAB_10a4d4b74;
            ppppplVar46 = (long *****)ppppplVar43[1];
            if ((long *****)ppppplVar43[1] == (long *****)0x0) {
              ppppplVar39 = ppppplVar43 + 1;
              ppppplVar38 = ppppplVar43;
              break;
            }
          } while( true );
        }
        ppppplVar43 = (long *****)0x48;
        __Znwm();
        *(int *)(ppppplVar43 + 4) = iVar31;
        *(undefined8 ******)((long)ppppplVar43 + 0x24) = pppppuVar32;
        ppppplVar43[7] = (long ****)0x0;
        ppppplVar43[8] = (long ****)0x0;
        ppppplVar43[6] = (long ****)0x0;
        *ppppplVar43 = (long ****)0x0;
        ppppplVar43[1] = (long ****)0x0;
        ppppplVar43[2] = (long ****)ppppplVar38;
        *ppppplVar39 = (long ****)ppppplVar43;
        ppppplVar46 = ppppplVar43;
        if ((long *****)*pppplStack_1f0 != (long *****)0x0) {
          ppppplVar46 = (long *****)*ppppplVar39;
          pppplStack_1f0 = (long ****)*pppplStack_1f0;
        }
        func_0x000107c2b058(pppplStack_1e8,ppppplVar46);
        lStack_1e0 = lStack_1e0 + 1;
LAB_10a4d4b74:
        ppppplVar46 = ppppplVar43 + 6;
        if (*ppppplVar46 == ppppplVar43[7]) {
          if (((char)plStack_340[0xf] == '\x01') && (1 < *(ulong *)(param_4 + 0x48))) {
            uStack_2f8 = (undefined8 *****)CONCAT44(uStack_2f8._4_4_,(uint)(iStack_114 == 0));
            lVar22 = param_4 + 0x30;
            FUN_10a1ba680(lVar22,&iStack_114);
            if (lVar22 == 0) {
              FUN_109ffdddc(&UNK_10f639994);
              goto LAB_10a4d5a84;
            }
            appppuStack_128[0] = *(undefined8 *****)(lVar22 + 0x38);
            lVar22 = param_4 + 0x30;
            FUN_10a1ba680(lVar22,&uStack_2f8);
            if (lVar22 == 0) {
              FUN_109ffdddc(&UNK_10f639994);
              goto LAB_10a4d5a84;
            }
            appppuStack_128[1] = *(undefined8 *****)(lVar22 + 0x38);
            ppppuStack_130 = (undefined8 *****)0x2;
            lVar22 = 2;
          }
          else {
            ppppuStack_130 = (undefined8 *****)0x1;
            lVar22 = 1;
            appppuStack_128[0] = param_2;
          }
          lVar44 = 0;
          do {
            ppppuVar37 = appppuStack_128[lVar44];
            iVar20 = (int)param_4 + 0x198;
            FUN_10a0ec6f0();
            iStack_144 = iVar20;
            iVar20 = *(int *)((long)ppppuVar37 + 0x24);
            uVar23 = (long)iVar20 + 0x9e3779b9;
            uVar23 = (ulong)(iVar31 + 0x9e3779b9) + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
            iVar36 = (int)lVar44;
            ppppplVar43 = (long *****)
                          ((long)iVar36 + 0x9e3779b9 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23);
            ppppplVar38 = (long *****)ppuVar35[1];
            if (ppppplVar38 != (long *****)0x0) {
              uVar23 = (long)ppppplVar38 - 1;
              if (((ulong)ppppplVar38 & uVar23) == 0) {
                ppppplVar39 = (long *****)((ulong)ppppplVar43 & uVar23);
              }
              else {
                ppppplVar39 = ppppplVar43;
                if (ppppplVar38 <= ppppplVar43) {
                  uVar8 = 0;
                  if (ppppplVar38 != (long *****)0x0) {
                    uVar8 = (ulong)ppppplVar43 / (ulong)ppppplVar38;
                  }
                  ppppplVar39 = (long *****)((long)ppppplVar43 - uVar8 * (long)ppppplVar38);
                }
              }
              if (*(undefined8 **)(*ppuVar35 + (long)ppppplVar39 * 8) != (undefined8 *)0x0) {
                for (pppppuVar45 = (undefined8 *****)
                                   **(undefined8 **)(*ppuVar35 + (long)ppppplVar39 * 8);
                    pppppuVar45 != (undefined8 *****)0x0;
                    pppppuVar45 = (undefined8 *****)*pppppuVar45) {
                  ppppplVar26 = (long *****)pppppuVar45[1];
                  if (ppppplVar26 == ppppplVar43) {
                    if ((*(int *)(pppppuVar45 + 2) == iVar20 &&
                         *(int *)((long)pppppuVar45 + 0x14) == iVar31) &&
                       (*(int *)(pppppuVar45 + 3) == iVar36)) goto LAB_10a4d4f9c;
                  }
                  else {
                    if (((ulong)ppppplVar38 & uVar23) == 0) {
                      ppppplVar26 = (long *****)((ulong)ppppplVar26 & uVar23);
                    }
                    else if (ppppplVar38 <= ppppplVar26) {
                      uVar8 = 0;
                      if (ppppplVar38 != (long *****)0x0) {
                        uVar8 = (ulong)ppppplVar26 / (ulong)ppppplVar38;
                      }
                      ppppplVar26 = (long *****)((long)ppppplVar26 - uVar8 * (long)ppppplVar38);
                    }
                    if (ppppplVar26 != ppppplVar39) break;
                  }
                }
              }
            }
            pppppuVar45 = (undefined8 *****)0x30;
            __Znwm();
            aplStack_2e8[0] = (long *)0x1;
            *pppppuVar45 = (undefined8 ****)0x0;
            pppppuVar45[1] = ppppplVar43;
            *(int *)(pppppuVar45 + 2) = iVar20;
            *(int *)((long)pppppuVar45 + 0x14) = iVar31;
            *(int *)(pppppuVar45 + 3) = iVar36;
            pppppuVar45[4] = (undefined8 ****)0x0;
            pppppuVar45[5] = (undefined8 ****)0x0;
            uStack_2f8 = pppppuVar45;
            ppuStack_2f0 = ppuVar35;
            if ((ppppplVar38 == (long *****)0x0) ||
               (*(float *)(ppuVar35 + 4) * (float)ppppplVar38 < (float)(ppuVar35[3] + 1))) {
              uVar23 = 1;
              if ((long *****)0x2 < ppppplVar38) {
                uVar23 = (ulong)(((ulong)ppppplVar38 & (long)ppppplVar38 - 1U) != 0);
              }
              ppppplVar39 = (long *****)(uVar23 | (long)ppppplVar38 << 1);
              ppppplVar26 = (long *****)(long)((float)(ppuVar35[3] + 1) / *(float *)(ppuVar35 + 4));
              if (ppppplVar39 <= ppppplVar26) {
                ppppplVar39 = ppppplVar26;
              }
              if ((long)ppppplVar39 - 1U == 0) {
                ppppplVar39 = (long *****)0x2;
              }
              else if (((ulong)ppppplVar39 & (long)ppppplVar39 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
                ppppplVar38 = (long *****)ppuVar35[1];
              }
              if (ppppplVar38 < ppppplVar39) {
LAB_10a4d4dac:
                ppppplVar38 = ppppplVar39;
                if ((ulong)ppppplVar38 >> 0x3d != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a4d5a84;
                }
                puVar15 = (undefined *)((long)ppppplVar38 << 3);
                __Znwm();
                puVar16 = *ppuVar35;
                *ppuVar35 = puVar15;
                if (puVar16 != (undefined *)0x0) {
                  __ZdlPv();
                }
                ppppplVar39 = (long *****)0x0;
                ppuVar35[1] = (undefined *)ppppplVar38;
                do {
                  *(undefined8 *)(*ppuVar35 + (long)ppppplVar39 * 8) = 0;
                  ppppplVar39 = (long *****)((long)ppppplVar39 + 1);
                } while (ppppplVar38 != ppppplVar39);
                plVar27 = (long *)*ppuVar1;
                if (plVar27 != (long *)0x0) {
                  ppppplVar39 = (long *****)plVar27[1];
                  uVar23 = (long)ppppplVar38 - 1;
                  if (((ulong)ppppplVar38 & uVar23) == 0) {
                    ppppplVar39 = (long *****)((ulong)ppppplVar39 & uVar23);
                  }
                  else if (ppppplVar38 <= ppppplVar39) {
                    uVar8 = 0;
                    if (ppppplVar38 != (long *****)0x0) {
                      uVar8 = (ulong)ppppplVar39 / (ulong)ppppplVar38;
                    }
                    ppppplVar39 = (long *****)((long)ppppplVar39 - uVar8 * (long)ppppplVar38);
                  }
                  *(undefined ***)(*ppuVar35 + (long)ppppplVar39 * 8) = ppuVar1;
                  plVar33 = (long *)*plVar27;
                  while (plVar33 != (long *)0x0) {
                    ppppplVar26 = (long *****)plVar33[1];
                    if (((ulong)ppppplVar38 & uVar23) == 0) {
                      ppppplVar26 = (long *****)((ulong)ppppplVar26 & uVar23);
                    }
                    else if (ppppplVar38 <= ppppplVar26) {
                      uVar8 = 0;
                      if (ppppplVar38 != (long *****)0x0) {
                        uVar8 = (ulong)ppppplVar26 / (ulong)ppppplVar38;
                      }
                      ppppplVar26 = (long *****)((long)ppppplVar26 - uVar8 * (long)ppppplVar38);
                    }
                    plVar18 = plVar33;
                    if (ppppplVar26 != ppppplVar39) {
                      puVar15 = *ppuVar35;
                      if (*(long *)(puVar15 + (long)ppppplVar26 * 8) == 0) {
                        *(long **)(puVar15 + (long)ppppplVar26 * 8) = plVar27;
                        ppppplVar39 = ppppplVar26;
                      }
                      else {
                        *plVar27 = *plVar33;
                        *plVar33 = **(undefined8 **)(puVar15 + (long)ppppplVar26 * 8);
                        **(long **)(puVar15 + (long)ppppplVar26 * 8) = (long)plVar33;
                        plVar18 = plVar27;
                      }
                    }
                    plVar27 = plVar18;
                    plVar33 = (long *)*plVar18;
                  }
                }
              }
              else if (ppppplVar39 < ppppplVar38) {
                ppppplVar26 = (long *****)(long)((float)ppuVar35[3] / *(float *)(ppuVar35 + 4));
                if ((ppppplVar38 < (long *****)0x3) ||
                   (((ulong)ppppplVar38 & (long)ppppplVar38 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *****)0x1 < ppppplVar26) {
                  ppppplVar26 = (long *****)(1L << (-LZCOUNT((long)ppppplVar26 + -1) & 0x3fU));
                }
                if (ppppplVar39 <= ppppplVar26) {
                  ppppplVar39 = ppppplVar26;
                }
                if (ppppplVar39 < ppppplVar38) {
                  if (ppppplVar39 != (long *****)0x0) goto LAB_10a4d4dac;
                  puVar15 = *ppuVar35;
                  *ppuVar35 = (undefined *)0x0;
                  if (puVar15 != (undefined *)0x0) {
                    __ZdlPv();
                  }
                  ppppplVar38 = (long *****)0x0;
                  ppuVar35[1] = (undefined *)0x0;
                }
                else {
                  ppppplVar38 = (long *****)ppuVar35[1];
                }
              }
              if (((ulong)ppppplVar38 & (long)ppppplVar38 - 1U) == 0) {
                ppppplVar39 = (long *****)((long)ppppplVar38 - 1U & (ulong)ppppplVar43);
              }
              else {
                ppppplVar39 = ppppplVar43;
                if (ppppplVar38 <= ppppplVar43) {
                  uVar23 = 0;
                  if (ppppplVar38 != (long *****)0x0) {
                    uVar23 = (ulong)ppppplVar43 / (ulong)ppppplVar38;
                  }
                  ppppplVar39 = (long *****)((long)ppppplVar43 - uVar23 * (long)ppppplVar38);
                }
              }
            }
            puVar15 = *ppuVar35;
            puVar24 = *(undefined8 **)(puVar15 + (long)ppppplVar39 * 8);
            if (puVar24 == (undefined8 *)0x0) {
              *pppppuVar45 = (undefined8 ****)*ppuVar1;
              *ppuVar1 = (undefined *)pppppuVar45;
              *(undefined ***)(puVar15 + (long)ppppplVar39 * 8) = ppuVar1;
              if (*pppppuVar45 != (undefined8 ****)0x0) {
                ppppplVar39 = (long *****)(*pppppuVar45)[1];
                if (((ulong)ppppplVar38 & (long)ppppplVar38 - 1U) == 0) {
                  ppppplVar39 = (long *****)((ulong)ppppplVar39 & (long)ppppplVar38 - 1U);
                }
                else if (ppppplVar38 <= ppppplVar39) {
                  uVar23 = 0;
                  if (ppppplVar38 != (long *****)0x0) {
                    uVar23 = (ulong)ppppplVar39 / (ulong)ppppplVar38;
                  }
                  ppppplVar39 = (long *****)((long)ppppplVar39 - uVar23 * (long)ppppplVar38);
                }
                puVar24 = (undefined8 *)(*ppuVar35 + (long)ppppplVar39 * 8);
                goto LAB_10a4d4f8c;
              }
            }
            else {
              *pppppuVar45 = (undefined8 ****)*puVar24;
LAB_10a4d4f8c:
              *puVar24 = pppppuVar45;
            }
            ppuVar35[3] = ppuVar35[3] + 1;
LAB_10a4d4f9c:
            pppppuVar40 = pppppuVar45 + 4;
            ppppuVar17 = *pppppuVar40;
            if (ppppuVar17 == (undefined8 ****)0x0) {
              FUN_10a1b498c(&uStack_2f8,(long)iVar20,iVar31);
              func_0x00010a343394(pppppuVar40,&uStack_2f8);
              ppuVar11 = ppuStack_2f0;
              if (ppuStack_2f0 != (undefined **)0x0) {
                ppuVar2 = ppuStack_2f0 + 1;
                do {
                  puVar15 = *ppuVar2;
                  cVar7 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
                  if (bVar14) {
                    *ppuVar2 = puVar15 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (puVar15 == (undefined *)0x0) {
                  (**(code **)(*ppuStack_2f0 + 0x10))(ppuStack_2f0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
                }
              }
              ppppuVar17 = *pppppuVar40;
              if (ppppuVar17 == (undefined8 ****)0x0) {
                FUN_10a00946c(&UNK_10f65cf3f);
                goto LAB_10a4d5a84;
              }
            }
            ppppuVar41 = pppppuVar45[5];
            if (ppppuVar41 != (undefined8 ****)0x0) {
              ppppuVar3 = ppppuVar41 + 1;
              do {
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppppuVar3,0x10);
                if (bVar14) {
                  *ppppuVar3 = (undefined8 ***)((long)*ppppuVar3 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            uStack_2f8 = pppppuVar32;
            pppuStack_110 = ppppuVar17;
            pppuStack_108 = ppppuVar41;
            (*(code *)**ppppuVar17)(&lStack_140,ppppuVar17,ppppuVar37,&iStack_144,&uStack_2f8);
            if (ppppuVar41 != (undefined8 ****)0x0) {
              ppppuVar37 = ppppuVar41 + 1;
              do {
                pppuVar28 = *ppppuVar37;
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppppuVar37,0x10);
                if (bVar14) {
                  *ppppuVar37 = (undefined8 ***)((long)pppuVar28 + -1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (pppuVar28 == (undefined8 ***)0x0) {
                (*(code *)(*ppppuVar41)[2])(ppppuVar41);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar41);
              }
            }
            lVar25 = 0;
            if (lStack_140 != 0) {
              lVar25 = lStack_140 + 0x10;
            }
            FUN_10a0f3910(&uStack_2f8,lVar25,0);
            FUN_109fed8e4(ppppplVar46,&uStack_2f8);
            if (alStack_2c0[0] != 0) {
              piVar4 = (int *)(alStack_2c0[0] + 0x14);
              do {
                iVar20 = *piVar4;
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar14) {
                  *piVar4 = iVar20 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar20 + -1 == 0) {
                func_0x000109a848d4(&uStack_2f8);
              }
            }
            alStack_2c0[0] = 0;
            aplStack_2e8[1] = (long *)0x0;
            aplStack_2e8[0] = (long *)0x0;
            aplStack_2e8[3] = (long *)0x0;
            aplStack_2e8[2] = (long *)0x0;
            if (0 < uStack_2f8._4_4_) {
              lVar25 = 0;
              do {
                *(undefined4 *)(alStack_2c0[1] + lVar25 * 4) = 0;
                lVar25 = lVar25 + 1;
              } while (lVar25 < uStack_2f8._4_4_);
            }
            if ((undefined8 ****)apppuStack_2b0[0] != apppuStack_2b0 + 1 &&
                (undefined8 ****)apppuStack_2b0[0] != (undefined8 ****)0x0) {
              _free(apppuStack_2b0[0][-1]);
            }
            ppppplVar39 = (long *****)pppplStack_138;
            if ((long *****)pppplStack_138 != (long *****)0x0) {
              ppppplVar38 = (long *****)(pppplStack_138 + 1);
              do {
                pppplVar29 = *ppppplVar38;
                cVar7 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(ppppplVar38,0x10);
                if (bVar14) {
                  *ppppplVar38 = (long ****)((long)pppplVar29 + -1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (pppplVar29 == (long ****)0x0) {
                (*(code *)(*pppplStack_138)[2])(pppplStack_138);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar39);
              }
            }
            lVar44 = lVar44 + 1;
          } while (lVar44 != lVar22);
        }
        ppppplVar38 = (long *****)&uStack_2f8;
        func_0x000107c2b05c(ppppplVar38,plStack_340 + 6);
        ppppplVar43 = (long *****)pppplStack_1a8;
        if ((long *****)pppplStack_1a8 == (long *****)0x0) {
LAB_10a4d525c:
          pppppuVar32 = (undefined8 *****)0x98;
          __Znwm();
          ppuStack_2f0 = &puStack_1b0;
          aplStack_2e8[0] = (long *)0x0;
          *pppppuVar32 = (undefined8 ****)0x0;
          pppppuVar32[1] = ppppplVar38;
          uStack_2f8 = pppppuVar32;
          FUN_10a22f23c(pppppuVar32 + 2,plStack_340 + 2);
          pppppuVar32[0x10] = (undefined8 ****)0x0;
          pppppuVar32[0x11] = (undefined8 ****)0x0;
          pppppuVar32[0x12] = (undefined8 ****)0x0;
          aplStack_2e8[0] = (long *)CONCAT71(aplStack_2e8[0]._1_7_,1);
          if ((ppppplVar43 == (long *****)0x0) ||
             (fStack_190 * (float)ppppplVar43 < (float)(uStack_198 + 1))) {
            uVar23 = 1;
            if ((long *****)0x2 < ppppplVar43) {
              uVar23 = (ulong)(((ulong)ppppplVar43 & (long)ppppplVar43 - 1U) != 0);
            }
            ppppplVar39 = (long *****)(uVar23 | (long)ppppplVar43 << 1);
            ppppplVar43 = (long *****)(long)((float)(uStack_198 + 1) / fStack_190);
            if (ppppplVar39 <= ppppplVar43) {
              ppppplVar39 = ppppplVar43;
            }
            if ((long)ppppplVar39 - 1U == 0) {
              ppppplVar39 = (long *****)0x2;
            }
            else if (((ulong)ppppplVar39 & (long)ppppplVar39 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            pppplVar29 = pppplStack_1a8;
            if (pppplStack_1a8 < ppppplVar39) {
LAB_10a4d5318:
              if ((ulong)ppppplVar39 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a4d5a84;
              }
              puVar15 = (undefined *)((long)ppppplVar39 << 3);
              __Znwm();
              bVar14 = puStack_1b0 != (undefined *)0x0;
              puStack_1b0 = puVar15;
              if (bVar14) {
                __ZdlPv();
              }
              ppppplVar43 = (long *****)0x0;
              do {
                *(undefined8 *)(puStack_1b0 + (long)ppppplVar43 * 8) = 0;
                ppppplVar43 = (long *****)((long)ppppplVar43 + 1);
              } while (ppppplVar39 != ppppplVar43);
              pppplStack_1a8 = (long ****)ppppplVar39;
              if ((undefined8 *****)ppppuStack_1a0 != (undefined8 *****)0x0) {
                ppppplVar43 = (long *****)ppppuStack_1a0[1];
                uVar23 = (long)ppppplVar39 - 1;
                if (((ulong)ppppplVar39 & uVar23) == 0) {
                  ppppplVar43 = (long *****)((ulong)ppppplVar43 & uVar23);
                }
                else if (ppppplVar39 <= ppppplVar43) {
                  uVar8 = 0;
                  if (ppppplVar39 != (long *****)0x0) {
                    uVar8 = (ulong)ppppplVar43 / (ulong)ppppplVar39;
                  }
                  ppppplVar43 = (long *****)((long)ppppplVar43 - uVar8 * (long)ppppplVar39);
                }
                *(undefined8 ******)(puStack_1b0 + (long)ppppplVar43 * 8) = &ppppuStack_1a0;
                pppppuVar45 = (undefined8 *****)*ppppuStack_1a0;
                pppppuVar40 = (undefined8 *****)ppppuStack_1a0;
                while (pppppuVar45 != (undefined8 *****)0x0) {
                  ppppplVar26 = (long *****)pppppuVar45[1];
                  if (((ulong)ppppplVar39 & uVar23) == 0) {
                    ppppplVar26 = (long *****)((ulong)ppppplVar26 & uVar23);
                  }
                  else if (ppppplVar39 <= ppppplVar26) {
                    uVar8 = 0;
                    if (ppppplVar39 != (long *****)0x0) {
                      uVar8 = (ulong)ppppplVar26 / (ulong)ppppplVar39;
                    }
                    ppppplVar26 = (long *****)((long)ppppplVar26 - uVar8 * (long)ppppplVar39);
                  }
                  pppppuVar34 = pppppuVar45;
                  if (ppppplVar26 != ppppplVar43) {
                    if (*(long *)(puStack_1b0 + (long)ppppplVar26 * 8) == 0) {
                      *(undefined8 ******)(puStack_1b0 + (long)ppppplVar26 * 8) = pppppuVar40;
                      ppppplVar43 = ppppplVar26;
                    }
                    else {
                      *pppppuVar40 = *pppppuVar45;
                      *pppppuVar45 = (undefined8 ****)
                                     **(undefined8 **)(puStack_1b0 + (long)ppppplVar26 * 8);
                      **(undefined8 **)(puStack_1b0 + (long)ppppplVar26 * 8) = pppppuVar45;
                      pppppuVar34 = pppppuVar40;
                    }
                  }
                  pppppuVar40 = pppppuVar34;
                  pppppuVar45 = (undefined8 *****)*pppppuVar34;
                }
              }
            }
            else if (ppppplVar39 < pppplStack_1a8) {
              ppppplVar43 = (long *****)(long)((float)uStack_198 / fStack_190);
              if ((pppplStack_1a8 < (long *****)0x3) ||
                 (((ulong)pppplStack_1a8 & (long)pppplStack_1a8 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *****)0x1 < ppppplVar43) {
                ppppplVar43 = (long *****)(1L << (-LZCOUNT((long)ppppplVar43 + -1) & 0x3fU));
              }
              puVar15 = puStack_1b0;
              if (ppppplVar39 <= ppppplVar43) {
                ppppplVar39 = ppppplVar43;
              }
              if (ppppplVar39 < pppplVar29) {
                if (ppppplVar39 != (long *****)0x0) goto LAB_10a4d5318;
                puStack_1b0 = (undefined *)0x0;
                if (puVar15 != (undefined *)0x0) {
                  __ZdlPv();
                }
                pppplStack_1a8 = (long ****)0x0;
              }
            }
            ppppplVar43 = (long *****)pppplStack_1a8;
            if (((ulong)pppplStack_1a8 & (long)pppplStack_1a8 - 1U) == 0) {
              ppppplVar39 = (long *****)((long)pppplStack_1a8 - 1U & (ulong)ppppplVar38);
            }
            else {
              ppppplVar39 = ppppplVar38;
              if (pppplStack_1a8 <= ppppplVar38) {
                uVar23 = 0;
                if ((long *****)pppplStack_1a8 != (long *****)0x0) {
                  uVar23 = (ulong)ppppplVar38 / (ulong)pppplStack_1a8;
                }
                ppppplVar39 = (long *****)((long)ppppplVar38 - uVar23 * (long)pppplStack_1a8);
              }
            }
          }
          puVar24 = *(undefined8 **)(puStack_1b0 + (long)ppppplVar39 * 8);
          if (puVar24 == (undefined8 *)0x0) {
            *pppppuVar32 = ppppuStack_1a0;
            *(undefined8 ******)(puStack_1b0 + (long)ppppplVar39 * 8) = &ppppuStack_1a0;
            ppppuStack_1a0 = pppppuVar32;
            if (*pppppuVar32 != (undefined8 ****)0x0) {
              ppppplVar39 = (long *****)(*pppppuVar32)[1];
              if (((ulong)ppppplVar43 & (long)ppppplVar43 - 1U) == 0) {
                ppppplVar39 = (long *****)((ulong)ppppplVar39 & (long)ppppplVar43 - 1U);
              }
              else if (ppppplVar43 <= ppppplVar39) {
                uVar23 = 0;
                if (ppppplVar43 != (long *****)0x0) {
                  uVar23 = (ulong)ppppplVar39 / (ulong)ppppplVar43;
                }
                ppppplVar39 = (long *****)((long)ppppplVar39 - uVar23 * (long)ppppplVar43);
              }
              *(undefined8 ******)(puStack_1b0 + (long)ppppplVar39 * 8) = pppppuVar32;
            }
          }
          else {
            *pppppuVar32 = (undefined8 ****)*puVar24;
            *puVar24 = pppppuVar32;
          }
          uStack_198 = uStack_198 + 1;
        }
        else {
          uVar23 = (long)pppplStack_1a8 - 1;
          if (((ulong)pppplStack_1a8 & uVar23) == 0) {
            ppppplVar39 = (long *****)(uVar23 & (ulong)ppppplVar38);
          }
          else {
            ppppplVar39 = ppppplVar38;
            if (pppplStack_1a8 <= ppppplVar38) {
              uVar8 = 0;
              if ((long *****)pppplStack_1a8 != (long *****)0x0) {
                uVar8 = (ulong)ppppplVar38 / (ulong)pppplStack_1a8;
              }
              ppppplVar39 = (long *****)((long)ppppplVar38 - uVar8 * (long)pppplStack_1a8);
            }
          }
          if (*(undefined8 **)(puStack_1b0 + (long)ppppplVar39 * 8) == (undefined8 *)0x0)
          goto LAB_10a4d525c;
          pppppuVar32 = (undefined8 *****)**(undefined8 **)(puStack_1b0 + (long)ppppplVar39 * 8);
          while( true ) {
            if (pppppuVar32 == (undefined8 *****)0x0) goto LAB_10a4d525c;
            ppppplVar26 = (long *****)pppppuVar32[1];
            if (ppppplVar26 == ppppplVar38) break;
            if (((ulong)ppppplVar43 & uVar23) == 0) {
              ppppplVar26 = (long *****)((ulong)ppppplVar26 & uVar23);
            }
            else if (ppppplVar43 <= ppppplVar26) {
              uVar8 = 0;
              if (ppppplVar43 != (long *****)0x0) {
                uVar8 = (ulong)ppppplVar26 / (ulong)ppppplVar43;
              }
              ppppplVar26 = (long *****)((long)ppppplVar26 - uVar8 * (long)ppppplVar43);
            }
            if (ppppplVar26 != ppppplVar39) goto LAB_10a4d525c;
LAB_10a4d5254:
            pppppuVar32 = (undefined8 *****)*pppppuVar32;
          }
          pppppuVar45 = pppppuVar32 + 2;
          FUN_10a22f138(pppppuVar45,plStack_340 + 2);
          if (((ulong)pppppuVar45 & 1) == 0) goto LAB_10a4d5254;
        }
        if (pppppuVar32 + 0x10 != ppppplVar46) {
          FUN_109ffe85c();
        }
        plStack_340 = (long *)*plStack_340;
        if (plStack_340 == (long *)0x0) break;
      } while( true );
    }
    ppuStack_100 = &PTR_FUN_110bef348;
    func_0x00010a22fc28(&plStack_f0);
    func_0x00010a505fd8(pppplStack_1e8);
    if (plStack_160 != (long *)0x0) {
      plVar27 = plStack_160;
LAB_10a4d55d0:
      ppppplVar39 = (long *****)&uStack_2f8;
      func_0x000107c2b05c(ppppplVar39,plVar27 + 6);
      pppplVar29 = pppplStack_1a8;
      if ((long *****)pppplStack_1a8 != (long *****)0x0) {
        uVar23 = (long)pppplStack_1a8 - 1;
        if (((ulong)pppplStack_1a8 & uVar23) == 0) {
          ppppplVar46 = (long *****)(uVar23 & (ulong)ppppplVar39);
        }
        else {
          ppppplVar46 = ppppplVar39;
          if (pppplStack_1a8 <= ppppplVar39) {
            uVar8 = 0;
            if ((long *****)pppplStack_1a8 != (long *****)0x0) {
              uVar8 = (ulong)ppppplVar39 / (ulong)pppplStack_1a8;
            }
            ppppplVar46 = (long *****)((long)ppppplVar39 - uVar8 * (long)pppplStack_1a8);
          }
        }
        if ((*(long **)(puStack_1b0 + (long)ppppplVar46 * 8) != (long *)0x0) &&
           (plVar33 = (long *)**(long **)(puStack_1b0 + (long)ppppplVar46 * 8),
           plVar33 != (long *)0x0)) {
          do {
            ppppplVar38 = (long *****)plVar33[1];
            if (ppppplVar39 == ppppplVar38) {
              plVar18 = plVar33 + 2;
              FUN_10a22f138(plVar18,plVar27 + 2);
              if (((ulong)plVar18 & 1) != 0) goto LAB_10a4d5678;
            }
            else {
              if (((ulong)pppplVar29 & uVar23) == 0) {
                ppppplVar38 = (long *****)((ulong)ppppplVar38 & uVar23);
              }
              else if (pppplVar29 <= ppppplVar38) {
                uVar8 = 0;
                if ((long *****)pppplVar29 != (long *****)0x0) {
                  uVar8 = (ulong)ppppplVar38 / (ulong)pppplVar29;
                }
                ppppplVar38 = (long *****)((long)ppppplVar38 - uVar8 * (long)pppplVar29);
              }
              if (ppppplVar38 != ppppplVar46) break;
            }
            plVar33 = (long *)*plVar33;
            if (plVar33 == (long *)0x0) break;
          } while( true );
        }
      }
      FUN_109ffdddc(&UNK_10f639994);
LAB_10a4d5a84:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10a4d5a88);
      (*pcVar13)();
    }
LAB_10a4d59f4:
    FUN_10a505f18(&puStack_1b0);
  }
  ppuStack_180 = &PTR_FUN_110bef348;
  func_0x00010a22fc28(&uStack_170);
  return;
LAB_10a4d4b10:
  ppppplVar46 = (long *****)*ppppplVar43;
  ppppplVar39 = ppppplVar43;
  goto LAB_10a4d4a78;
LAB_10a4d5678:
  appppuStack_128[0] = (undefined8 *****)0x0;
  ppppuStack_130 = (undefined8 *****)0x0;
  appppuStack_128[1] = (undefined8 ****)0x0;
  lVar22 = plVar33[0x10];
  lVar44 = plVar33[0x11];
  ppuStack_2f0 = (undefined **)((ulong)ppuStack_2f0 & 0xffffffffffffff00);
  lVar25 = lVar44 - lVar22;
  uStack_2f8 = &ppppuStack_130;
  if (lVar25 != 0) {
    FUN_109ffe348(&ppppuStack_130,(lVar25 >> 5) * -0x5555555555555555);
    pppppuVar32 = &ppppuStack_130;
    FUN_109ffe57c(pppppuVar32,lVar22,lVar44,appppuStack_128[0]);
    appppuStack_128[0] = pppppuVar32;
  }
  if (*(char *)((long)plVar27 + 0x2f) < '\0') {
    func_0x000107c3192c(&pppplStack_1f0,plVar27[3],plVar27[4]);
  }
  else {
    pppplStack_1e8 = (long ****)plVar27[4];
    pppplStack_1f0 = (long ****)plVar27[3];
    lStack_1e0 = plVar27[5];
  }
  if (*(char *)((long)plVar27 + 0x47) < '\0') {
    func_0x000107c3192c(&lStack_1d8,plVar27[6],plVar27[7]);
  }
  else {
    lStack_1d0 = plVar27[7];
    lStack_1d8 = plVar27[6];
    lStack_1c8 = plVar27[8];
  }
  if (appppuStack_128[0] == ppppuStack_130) goto LAB_10a4d5a84;
  uStack_1c0 = NEON_rev64(*ppppuStack_130[8],4);
  uVar42 = *(undefined8 *)(param_1 + 8);
  puVar19 = *(undefined4 **)(param_4 + 0x218);
  FUN_10a22b608(puVar19,puVar19[0x28]);
  FUN_10a4d03b4(&pppuStack_110,uVar42,plVar27 + 2,param_5,&pppplStack_1f0,*puVar19);
  ppppuVar17 = appppuStack_128[0];
  ppppuVar37 = ppppuStack_130;
  if ((undefined8 ****)pppuStack_110 != (undefined8 ****)0x0) {
    lVar44 = *(long *)(param_4 + 0x218);
    lVar22 = lVar44;
    FUN_10a22b608(lVar44,*(undefined4 *)(lVar44 + 0xa0));
    if (ppppuVar17 == ppppuVar37) goto LAB_10a4d5a84;
    FUN_10a4cff24(&ppuStack_100,lVar22,*(undefined4 *)ppppuVar37[8],
                  *(undefined4 *)((long)ppppuVar37[8] + 4));
    plVar33 = plStack_88;
    apppuStack_2b0[1] = (undefined8 ***)ppuStack_b8;
    apppuStack_2b0[0] = pppuStack_c0;
    apppuStack_2b0[2] = (undefined8 ***)ppuStack_b0;
    auStack_294[1] = uStack_9c;
    aplStack_2e8[0] = (long *)CONCAT71(uStack_f7,uStack_f8);
    ppuStack_2f0 = ppuStack_100;
    aplStack_2e8[2] = plStack_e8;
    aplStack_2e8[1] = plStack_f0;
    alStack_2c0[0] = CONCAT44(uStack_cc,uStack_d0);
    aplStack_2e8[4] = plStack_d8;
    aplStack_2e8[3] = plStack_e0;
    alStack_2c0[1] = lStack_c8;
    aplStack_280[1] = plStack_88;
    aplStack_280[0] = plStack_90;
    if (plStack_88 == (long *)0x0) {
      uStack_2f8 = (undefined8 *****)0x1;
    }
    else {
      plVar18 = plStack_88 + 1;
      do {
        cVar7 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar14) {
          *plVar18 = *plVar18 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      uStack_2f8 = (undefined8 *****)0x1;
      if (plStack_88 != (long *)0x0) {
        plVar18 = plStack_88 + 1;
        do {
          lVar22 = *plVar18;
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar14) {
            *plVar18 = lVar22 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
        }
      }
    }
    if (((long)ppppuVar17 - (long)ppppuVar37 != 0x60) && (1 < *(ulong *)(lVar44 + 0x30))) {
      FUN_10a22b608(lVar44,*(int *)(lVar44 + 0xa0) != 1);
      FUN_10a4cff24(&ppuStack_100,lVar44,*(undefined4 *)ppppuVar37[0x14],
                    *(undefined4 *)((long)ppppuVar37[0x14] + 4));
      ppuVar12 = ppuStack_b0;
      pppuVar28 = pppuStack_c0;
      uVar42 = CONCAT44(uStack_a4,uStack_a8);
      apppuStack_2b0[(long)uStack_2f8 * 0x10 + 1] = (undefined8 ***)ppuStack_b8;
      apppuStack_2b0[(long)uStack_2f8 * 0x10] = pppuVar28;
      *(undefined8 *)(&stack0xfffffffffffffd68 + (long)uStack_2f8 * 0x80) = uVar42;
      apppuStack_2b0[(long)uStack_2f8 * 0x10 + 2] = (undefined8 ***)ppuVar12;
      uVar42 = CONCAT44(uStack_a0,uStack_a4);
      auStack_294[(long)uStack_2f8 * 0x10 + 1] = uStack_9c;
      auStack_294[(long)uStack_2f8 * 0x10] = uVar42;
      plVar18 = plStack_e8;
      plVar33 = plStack_f0;
      ppuVar35 = ppuStack_100;
      aplStack_2e8[(long)uStack_2f8 * 0x10] = (long *)CONCAT71(uStack_f7,uStack_f8);
      (&ppuStack_2f0)[(long)uStack_2f8 * 0x10] = ppuVar35;
      aplStack_2e8[(long)uStack_2f8 * 0x10 + 2] = plVar18;
      aplStack_2e8[(long)uStack_2f8 * 0x10 + 1] = plVar33;
      lVar44 = lStack_c8;
      plVar33 = plStack_e0;
      lVar22 = CONCAT44(uStack_cc,uStack_d0);
      aplStack_2e8[(long)uStack_2f8 * 0x10 + 4] = plStack_d8;
      aplStack_2e8[(long)uStack_2f8 * 0x10 + 3] = plVar33;
      alStack_2c0[(long)uStack_2f8 * 0x10 + 1] = lVar44;
      alStack_2c0[(long)uStack_2f8 * 0x10] = lVar22;
      plVar33 = plStack_88;
      plVar18 = plStack_90;
      aplStack_280[(long)uStack_2f8 * 0x10 + 1] = plStack_88;
      aplStack_280[(long)uStack_2f8 * 0x10] = plVar18;
      plVar18 = plStack_88;
      if (plVar33 == (long *)0x0) {
        uStack_2f8 = (undefined8 *****)((long)uStack_2f8 + 1);
      }
      else {
        plVar33 = plVar33 + 1;
        do {
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar14) {
            *plVar33 = *plVar33 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        uStack_2f8 = (undefined8 *****)((long)uStack_2f8 + 1);
        if (plStack_88 != (long *)0x0) {
          plVar33 = plStack_88 + 1;
          do {
            lVar22 = *plVar33;
            cVar7 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar14) {
              *plVar33 = lVar22 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar22 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
          }
        }
      }
    }
    FUN_10a4d1c90(&lStack_300,pppuStack_110,(long)(*(double *)(param_4 + 0x20) * 1000000000.0),
                  &ppppuStack_130,&ppuStack_2f0,uStack_2f8,plVar27 + 2,plVar27 + 0x10);
    FUN_10a4d5c40(param_4 + 0x108,plVar27 + 2,lStack_300);
    lVar22 = lStack_300;
    lStack_300 = 0;
    if (lVar22 != 0) {
      FUN_10a4f19dc();
    }
    if (uStack_2f8 != (undefined8 *****)0x0) {
      plVar33 = &lStack_300 + (long)uStack_2f8 * 0x10;
      pppppuVar32 = uStack_2f8;
      do {
        pppppuVar32 = (undefined8 *****)((long)pppppuVar32 + -1);
        func_0x00010a042d30(plVar33);
        plVar33 = plVar33 + -0x10;
      } while (pppppuVar32 != (undefined8 *****)0x0);
    }
  }
  pppuVar28 = pppuStack_108;
  if ((undefined8 ****)pppuStack_108 != (undefined8 ****)0x0) {
    ppppuVar37 = (undefined8 ****)(pppuStack_108 + 1);
    do {
      pppuVar30 = *ppppuVar37;
      cVar7 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(ppppuVar37,0x10);
      if (bVar14) {
        *ppppuVar37 = (undefined8 ***)((long)pppuVar30 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (pppuVar30 == (undefined8 ***)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar28);
    }
  }
  if (lStack_1c8 < 0) {
    __ZdlPv(lStack_1d8);
  }
  if (lStack_1e0 < 0) {
    __ZdlPv(pppplStack_1f0);
  }
  uStack_2f8 = &ppppuStack_130;
  FUN_109ffe3e8(&uStack_2f8);
  plVar27 = (long *)*plVar27;
  if (plVar27 == (long *)0x0) goto LAB_10a4d59f4;
  goto LAB_10a4d55d0;
}



/* Entry: 10a4d5c40; end: 10a4d5d0b;  */

void FUN_10a4d5c40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x38;
      __Znwm();
      puVar1[6] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      *puVar1 = &PTR_FUN_110bef718;
      *(undefined4 *)(puVar1 + 6) = 0x3f800000;
      *param_1 = puVar1;
    }
    puVar1 = puVar1 + 2;
    uStack_38 = param_2;
    FUN_10a502118(puVar1,param_2,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
    func_0x00010a4f2748(puVar1 + 0x10);
    uVar2 = *param_3;
    puVar1[0x11] = param_3[1];
    puVar1[0x10] = uVar2;
    puVar1[0x12] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    func_0x00010a4f27a4(puVar1 + 0x13,param_3 + 3);
    func_0x00010a4f2844(puVar1 + 0x18,param_3 + 8);
  }
  return;
}



/* Entry: 10a4d5d0c; end: 10a4d5d4b;  */

undefined8 * FUN_10a4d5d0c(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a4d5d4c; end: 10a4d5dd3;  */

void FUN_10a4d5d4c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010a4d41a0(lVar3);
    func_0x00010a507b30(lVar3 + 0xe8);
    if (((*(byte *)(param_2 + 8) & 1) == 0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2[3] != 0)
       ) {
      FUN_10a4f1e88(plVar2[2]);
      plVar2[2] = 0;
      lVar3 = plVar2[1];
      if (lVar3 != 0) {
        lVar1 = 0;
        do {
          *(undefined8 *)(*plVar2 + lVar1 * 8) = 0;
          lVar1 = lVar1 + 1;
        } while (lVar3 != lVar1);
      }
      plVar2[3] = 0;
    }
  }
  return;
}



/* Entry: 10a4d5dd4; end: 10a4d5e17;  */

undefined8 * FUN_10a4d5dd4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110be80a8;
  func_0x00010a507e34(param_1 + 2,0);
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x00010a507de8();
  }
  return param_1;
}



/* Entry: 10a4d5e18; end: 10a4d5e1b;  */

undefined8 * FUN_10a4d5e18(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110be80a8;
  func_0x00010a507e34(param_1 + 2,0);
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x00010a507de8();
  }
  return param_1;
}



/* Entry: 10a4d5e1c; end: 10a4d5e2f;  */

void FUN_10a4d5e1c(void)

{
  FUN_10a4d5dd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4d5e30; end: 10a4d5eeb;  */

void FUN_10a4d5e30(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  
  param_2 = param_2 + 0x10;
  FUN_10a507e80();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar6 = param_2 + 0xc0;
  FUN_10a4f1ec4(lVar6,param_3 + 0x70);
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if ((ulong)(*(long *)(param_2 + 0x88) - *(long *)(param_2 + 0x80) >> 4) <=
        (ulong)(long)*(int *)(lVar6 + 0x58)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4d5eec);
      (*pcVar5)();
    }
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x80) + (long)*(int *)(lVar6 + 0x58) * 0x10);
    lVar6 = puVar2[1];
    uVar7 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}



/* Entry: 10a4d5eec; end: 10a4d6e2b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4d657c) */
/* WARNING: Removing unreachable block (ram,0x00010a4d66b8) */

void FUN_10a4d5eec(long param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long **pplVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long *plVar14;
  undefined **ppuVar15;
  long *plVar16;
  long *plVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  ulong unaff_x21;
  ulong uVar21;
  long *plVar22;
  undefined **ppuVar23;
  uint uVar24;
  undefined *unaff_x22;
  long *plVar25;
  int iVar26;
  char *unaff_x23;
  long *plVar27;
  undefined **ppuVar28;
  uint uVar29;
  undefined **unaff_x24;
  undefined **ppuVar30;
  long *plVar31;
  undefined *unaff_x25;
  undefined **ppuVar32;
  undefined **unaff_x26;
  long *unaff_x27;
  undefined **ppuVar33;
  long *unaff_x28;
  float fVar34;
  undefined **ppuStack_260;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  long lStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  char *pcStack_1c8;
  undefined *puStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  long lStack_190;
  uint uStack_188;
  int iStack_184;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined auStack_170 [8];
  undefined8 auStack_168 [2];
  char cStack_151;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined1 uStack_138;
  undefined1 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_80;
  uint uStack_7c;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = &PTR_DAT_110be8110;
  plVar16 = param_2;
  (**(code **)(*param_2 + 0x200))();
  if ((int)plVar16 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8110);
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8bf8);
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_10a4f1f9c(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 != 0) {
        lVar10 = 0;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10 * 8) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar8 != lVar10);
      }
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    plVar16 = param_2;
    (**(code **)(*param_2 + 0x208))();
    ppuVar7 = (undefined **)
              (long)((float)((ulong)plVar16 & 0xffffffff) / *(float *)(param_1 + 0x30));
    uStack_188 = (uint)plVar16;
    FUN_10a4f204c(param_1 + 0x10);
    if (uStack_188 != 0) {
      unaff_x21 = 0;
      lStack_190 = param_1;
      do {
        (**(code **)(*param_2 + 0x218))(param_2,unaff_x21);
        auStack_170[0] = 0;
        func_0x000107c2b054(auStack_168,"");
        func_0x000107c2b054(auStack_150,"");
        iStack_184 = (int)unaff_x21;
        ppuVar7 = &puStack_c0;
        uStack_138 = 0;
        uStack_128 = 0;
        lStack_118 = 0;
        uStack_110 = 0;
        lStack_120 = 0;
        uStack_108 = 0;
        (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8290);
        (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8290);
        FUN_10a4d7d1c(auStack_170,param_2);
        (**(code **)(*param_2 + 0x220))(param_2);
        (**(code **)(*param_2 + 0x220))(param_2);
        param_1 = param_1 + 0x10;
        puStack_c0 = auStack_170;
        FUN_10a502118(param_1,auStack_170,&UNK_10dd5b8f9,&puStack_c0,&plStack_100);
        (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8c18);
        plVar25 = param_2;
        (**(code **)(*param_2 + 0x208))();
        plVar16 = (long *)(param_1 + 0x80);
        FUN_10a4d40d8(plVar16,(ulong)plVar25 & 0xffffffff);
        if ((uint)plVar25 != 0) {
          unaff_x27 = (long *)0x0;
          do {
            (**(code **)(*param_2 + 0x218))(param_2,unaff_x27);
            plVar22 = param_2;
            (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110be8c78);
            if ((int)plVar22 == 0) {
              plVar31 = (long *)0x248;
              __Znwm();
              plVar31[1] = 0;
              plVar31[2] = 0;
              plVar22 = plVar31 + 3;
              *plVar31 = (long)&PTR_FUN_110bef410;
              _bzero(plVar31 + 4,0x228);
              FUN_10a5061c0(plVar22);
              plStack_b8 = (long *)0x6;
              puStack_c0 = &DAT_10f365d6f;
              lStack_a8 = 0x61d2e94f00000000;
              uStack_b0 = 0x50314a08f;
              plStack_98 = plVar31;
            }
            else {
              FUN_10a50610c(&plStack_100);
              plStack_b8 = (long *)0xa;
              puStack_c0 = &DAT_10f65da83;
              lStack_a8 = -0x1293f5b800000000;
              uStack_b0 = 0x50314a0a910e048;
              plStack_98 = plStack_f8;
              plVar22 = plStack_100;
            }
            plStack_a0 = plVar22;
            (**(code **)(*param_2 + 0x1f0))(param_2,&puStack_c0,plVar22);
            plVar22 = *(long **)(param_1 + 0x88);
            if (plVar22 < *(long **)(param_1 + 0x90)) {
              plVar22[1] = (long)plStack_98;
              *plVar22 = (long)plStack_a0;
              if (plStack_98 != (long *)0x0) {
                plVar31 = plStack_98 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                  if (bVar3) {
                    *plVar31 = *plVar31 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              plVar22 = plVar22 + 2;
            }
            else {
              lVar8 = (long)plVar22 - *plVar16;
              uVar21 = (lVar8 >> 4) + 1;
              if (uVar21 >> 0x3c != 0) {
                func_0x00010a4f1518();
                goto LAB_10a4d6c28;
              }
              uVar11 = (long)*(long **)(param_1 + 0x90) - *plVar16;
              uVar12 = (long)uVar11 >> 3;
              if (uVar12 <= uVar21) {
                uVar12 = uVar21;
              }
              if (0x7fffffffffffffef < uVar11) {
                uVar12 = 0xfffffffffffffff;
              }
              plVar27 = plVar16;
              plStack_e0 = plVar16;
              FUN_10a4f152c();
              plVar31 = (long *)((long)plVar27 + lVar8);
              plVar31[1] = (long)plStack_98;
              *plVar31 = (long)plStack_a0;
              if (plStack_98 != (long *)0x0) {
                plVar22 = plStack_98 + 1;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar3) {
                    *plVar22 = *plVar22 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              plVar22 = plVar31 + 2;
              lVar8 = (long)plVar31 - (*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80));
              _memcpy(lVar8);
              plStack_100 = *(long **)(param_1 + 0x80);
              *(long *)(param_1 + 0x80) = lVar8;
              *(long **)(param_1 + 0x88) = plVar22;
              uStack_e8 = *(undefined8 *)(param_1 + 0x90);
              *(long **)(param_1 + 0x90) = plVar27 + uVar12 * 2;
              plStack_f8 = plStack_100;
              plStack_f0 = plStack_100;
              func_0x00010a4f1560(&plStack_100);
            }
            plVar31 = plStack_98;
            *(long **)(param_1 + 0x88) = plVar22;
            if (plStack_98 != (long *)0x0) {
              plVar22 = plStack_98 + 1;
              do {
                lVar8 = *plVar22;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar3) {
                  *plVar22 = lVar8 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar8 == 0) {
                (**(code **)(*plStack_98 + 0x10))(plStack_98);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
              }
            }
            (**(code **)(*param_2 + 0x220))(param_2);
            uVar24 = (int)unaff_x27 + 1;
            unaff_x27 = (long *)(ulong)uVar24;
          } while (uVar24 != (uint)plVar25);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        plVar16 = param_2;
        (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110be8c38);
        if ((int)plVar16 != 0) {
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8c38);
          plStack_f8 = (long *)0x0;
          plStack_100 = (long *)0x0;
          uStack_e8 = 0;
          plStack_f0 = (long *)0x0;
          plStack_e0 = (long *)CONCAT44(plStack_e0._4_4_,0x3f800000);
          func_0x0001093c8d00(&plStack_100,
                              (long)(float)(ulong)(*(long *)(param_1 + 0x88) -
                                                   *(long *)(param_1 + 0x80) >> 4));
          lVar8 = *(long *)(param_1 + 0x80);
          if (*(long *)(param_1 + 0x88) != lVar8) {
            lVar10 = 0;
            uVar21 = 0;
            do {
              puStack_c0 = (undefined *)(*(long *)(lVar8 + lVar10) + 0x18);
              pplVar6 = &plStack_100;
              func_0x0001093c8fa4(pplVar6,puStack_c0,&UNK_10dd5b8f9,&puStack_c0,&plStack_d8);
              *(int *)((long)pplVar6 + 0x14) = (int)uVar21;
              uVar21 = uVar21 + 1;
              lVar8 = *(long *)(param_1 + 0x80);
              lVar10 = lVar10 + 0x10;
            } while (uVar21 < (ulong)(*(long *)(param_1 + 0x88) - lVar8 >> 4));
          }
          unaff_x27 = param_2;
          (**(code **)(*param_2 + 0x208))();
          FUN_10a4f2258((undefined **)(param_1 + 0xc0),
                        (long)((float)((ulong)unaff_x27 & 0xffffffff) / *(float *)(param_1 + 0xe0)))
          ;
          if ((int)unaff_x27 != 0) {
            iVar26 = 0;
            ppuStack_180 = (undefined **)(param_1 + 0xd0);
            ppuStack_178 = (undefined **)(param_1 + 0xc0);
            do {
              ppuVar15 = ppuStack_178;
              (**(code **)(*param_2 + 0x218))(param_2,iVar26);
              uStack_7c = uStack_7c & 0xffffff00;
              plStack_b8 = (long *)0x0;
              puStack_c0 = (undefined *)0x0;
              lStack_a8 = 0;
              uStack_b0 = 0;
              plStack_a0 = (long *)((ulong)plStack_a0 & 0xffffffffffffff00);
              (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8078);
              (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8078);
              FUN_10a4d78fc(&puStack_c0,param_2);
              (**(code **)(*param_2 + 0x220))(param_2);
              (**(code **)(*param_2 + 0x220))(param_2);
              plVar16 = param_2;
              (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110be8cb8);
              ppuVar23 = ppuVar15;
              FUN_10a22f7e8(ppuVar15,&puStack_c0);
              ppuVar30 = *(undefined ***)(param_1 + 200);
              if (ppuVar30 != (undefined **)0x0) {
                unaff_x28 = (long *)((long)ppuVar30 + -1);
                if (((ulong)ppuVar30 & (ulong)unaff_x28) == 0) {
                  ppuVar7 = (undefined **)((ulong)unaff_x28 & (ulong)ppuVar23);
                }
                else {
                  ppuVar7 = ppuVar23;
                  if (ppuVar30 <= ppuVar23) {
                    uVar21 = 0;
                    if (ppuVar30 != (undefined **)0x0) {
                      uVar21 = (ulong)ppuVar23 / (ulong)ppuVar30;
                    }
                    ppuVar7 = (undefined **)((long)ppuVar23 - uVar21 * (long)ppuVar30);
                  }
                }
                if (*(long **)(*ppuVar15 + (long)ppuVar7 * 8) != (long *)0x0) {
                  plVar25 = (long *)**(long **)(*ppuVar15 + (long)ppuVar7 * 8);
                  ppuVar15 = ppuStack_178;
                  for (; ppuStack_178 = ppuVar15, plVar25 != (long *)0x0; plVar25 = (long *)*plVar25
                      ) {
                    ppuVar9 = (undefined **)plVar25[1];
                    if (ppuVar9 == ppuVar23) {
                      uVar21 = (ulong)(plVar25 + 2);
                      FUN_10a22f8c4(uVar21,&puStack_c0);
                      if ((uVar21 & 1) != 0) goto LAB_10a4d66b0;
                    }
                    else {
                      if (((ulong)ppuVar30 & (ulong)unaff_x28) == 0) {
                        ppuVar9 = (undefined **)((ulong)ppuVar9 & (ulong)unaff_x28);
                      }
                      else if (ppuVar30 <= ppuVar9) {
                        uVar21 = 0;
                        if (ppuVar30 != (undefined **)0x0) {
                          uVar21 = (ulong)ppuVar9 / (ulong)ppuVar30;
                        }
                        ppuVar9 = (undefined **)((long)ppuVar9 - uVar21 * (long)ppuVar30);
                      }
                      if (ppuVar9 != ppuVar7) break;
                    }
                    ppuVar15 = ppuStack_178;
                  }
                }
              }
              unaff_x28 = (long *)0x60;
              __Znwm();
              *unaff_x28 = 0;
              unaff_x28[1] = (long)ppuVar23;
              unaff_x28[2] = (long)puStack_c0;
              unaff_x28[4] = uStack_b0;
              unaff_x28[3] = (long)plStack_b8;
              unaff_x28[5] = lStack_a8;
              unaff_x28[10] = CONCAT44(uStack_7c,uStack_80);
              unaff_x28[7] = (long)plStack_98;
              unaff_x28[6] = (long)plStack_a0;
              unaff_x28[9] = lStack_88;
              unaff_x28[8] = lStack_90;
              *(int *)(unaff_x28 + 0xb) = (int)plVar16;
              uStack_c8 = 1;
              fVar34 = (float)(*(long *)(param_1 + 0xd8) + 1);
              plStack_d8 = unaff_x28;
              ppuStack_d0 = ppuVar15;
              if ((ppuVar30 == (undefined **)0x0) ||
                 (*(float *)(param_1 + 0xe0) * (float)ppuVar30 < fVar34)) {
                uVar21 = 1;
                if ((undefined **)0x2 < ppuVar30) {
                  uVar21 = (ulong)(((ulong)ppuVar30 & (long)ppuVar30 - 1U) != 0);
                }
                uVar21 = uVar21 | (long)ppuVar30 << 1;
                uVar12 = (ulong)(fVar34 / *(float *)(param_1 + 0xe0));
                if (uVar21 <= uVar12) {
                  uVar21 = uVar12;
                }
                FUN_10a4f2258(ppuVar15,uVar21);
                ppuVar30 = *(undefined ***)(param_1 + 200);
                if (((ulong)ppuVar30 & (long)ppuVar30 - 1U) == 0) {
                  ppuVar7 = (undefined **)((long)ppuVar30 - 1U & (ulong)ppuVar23);
                }
                else {
                  ppuVar7 = ppuVar23;
                  if (ppuVar30 <= ppuVar23) {
                    uVar21 = 0;
                    if (ppuVar30 != (undefined **)0x0) {
                      uVar21 = (ulong)ppuVar23 / (ulong)ppuVar30;
                    }
                    ppuVar7 = (undefined **)((long)ppuVar23 - uVar21 * (long)ppuVar30);
                  }
                }
              }
              puVar13 = *ppuVar15;
              plVar16 = *(long **)(puVar13 + (long)ppuVar7 * 8);
              if (plVar16 == (long *)0x0) {
                *plStack_d8 = (long)*ppuStack_180;
                *ppuStack_180 = (undefined *)plStack_d8;
                *(undefined ***)(puVar13 + (long)ppuVar7 * 8) = ppuStack_180;
                if (*plStack_d8 != 0) {
                  ppuVar23 = *(undefined ***)(*plStack_d8 + 8);
                  if (((ulong)ppuVar30 & (long)ppuVar30 - 1U) == 0) {
                    ppuVar23 = (undefined **)((ulong)ppuVar23 & (long)ppuVar30 - 1U);
                  }
                  else if (ppuVar30 <= ppuVar23) {
                    uVar21 = 0;
                    if (ppuVar30 != (undefined **)0x0) {
                      uVar21 = (ulong)ppuVar23 / (ulong)ppuVar30;
                    }
                    ppuVar23 = (undefined **)((long)ppuVar23 - uVar21 * (long)ppuVar30);
                  }
                  *(long **)(*ppuVar15 + (long)ppuVar23 * 8) = plStack_d8;
                }
              }
              else {
                *plStack_d8 = *plVar16;
                *plVar16 = (long)plStack_d8;
              }
              *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
LAB_10a4d66b0:
              (**(code **)(*param_2 + 0x220))(param_2);
              iVar26 = iVar26 + 1;
            } while (iVar26 != (int)unaff_x27);
          }
          func_0x0001093c8ab0(&plStack_100);
          (**(code **)(*param_2 + 0x220))(param_2);
        }
        (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8c58);
        (**(code **)(*param_2 + 0x1d8))(&puStack_c0,param_2,&PTR_DAT_110bc4460);
        plVar16 = plStack_b8;
        if ((uStack_b0 & 1) == 0) {
          FUN_10a108fd4(&PTR_DAT_110bc4460);
LAB_10a4d6c28:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4d6c2c);
          (*pcVar5)();
        }
        if (plStack_b8 == (long *)0x0) {
          plVar25 = (long *)0x0;
          unaff_x26 = (undefined **)0x0;
        }
        else {
          if ((long)plStack_b8 < 0) {
            func_0x00010a4f2478();
            goto LAB_10a4d6c28;
          }
          plVar25 = plStack_b8;
          __Znwm();
          unaff_x26 = (undefined **)((long)plVar25 + (long)plVar16);
          _bzero();
        }
        _memcpy(plVar25,puStack_c0,plVar16);
        ppuVar7 = &PTR_DAT_110bc4400;
        (**(code **)(*param_2 + 0x210))(param_2);
        plVar22 = param_2;
        (**(code **)(*param_2 + 0x208))();
        if ((int)plVar22 == 0) {
          plVar31 = (long *)0x0;
          plVar27 = (long *)0x0;
        }
        else {
          plVar22 = (long *)((ulong)plVar22 & 0xffffffff);
          plVar27 = plVar22;
          FUN_10a4f24a0();
          _bzero();
          plVar16 = (long *)0x0;
          plVar31 = plVar27 + (long)plVar22 * 2;
          plVar14 = plVar27 + 1;
          do {
            if (plVar22 == plVar16) goto LAB_10a4d6c28;
            (**(code **)(*param_2 + 0x218))(param_2,plVar16);
            plVar17 = param_2;
            (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110be8aa8);
            *(char *)(plVar14 + -1) = (char)plVar17;
            (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8ac8);
            plVar17 = param_2;
            (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110be8b68);
            *(int *)((long)plVar14 + -4) = (int)plVar17;
            (**(code **)(*param_2 + 0x220))(param_2);
            (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8ae8);
            plVar17 = param_2;
            (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110be8b68);
            *(int *)plVar14 = (int)plVar17;
            (**(code **)(*param_2 + 0x220))(param_2);
            (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8b08);
            ppuVar7 = &PTR_DAT_110be8b68;
            plVar17 = param_2;
            (**(code **)(*param_2 + 200))();
            *(int *)((long)plVar14 + 4) = (int)plVar17;
            (**(code **)(*param_2 + 0x220))(param_2);
            (**(code **)(*param_2 + 0x220))(param_2);
            plVar16 = (long *)((long)plVar16 + 1);
            plVar14 = plVar14 + 2;
            unaff_x27 = plVar27;
            unaff_x28 = plVar25;
          } while (plVar22 != plVar16);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        func_0x00010a4f24d4(param_1 + 0x98);
        ppuStack_178 = (undefined **)((long)unaff_x26 - (long)plVar25);
        if (ppuStack_178 != (undefined **)0x0) {
          unaff_x26 = (undefined **)0x0;
          ppuStack_180 = (undefined **)((long)plVar31 - (long)plVar27 >> 4);
          unaff_x28 = (long *)(param_1 + 0xa8);
          do {
            if (unaff_x26 == ppuStack_180) goto LAB_10a4d6c28;
            bVar1 = *(byte *)((long)plVar25 + (long)unaff_x26);
            plVar22 = (long *)(ulong)bVar1;
            plVar31 = *(long **)(param_1 + 0xa0);
            uVar24 = (uint)bVar1;
            if (plVar31 != (long *)0x0) {
              uVar21 = (long)plVar31 - 1;
              uVar29 = (uint)plVar31;
              if (((ulong)plVar31 & uVar21) == 0) {
                plVar16 = (long *)((ulong)(uVar29 - 1) & (ulong)plVar22);
              }
              else {
                plVar16 = plVar22;
                if (plVar31 <= plVar22) {
                  uVar4 = 0;
                  if (uVar29 != 0) {
                    uVar4 = uVar24 / uVar29;
                  }
                  plVar16 = (long *)(ulong)(uVar24 - uVar4 * uVar29);
                }
              }
              plVar14 = *(long **)(*(long *)(param_1 + 0x98) + (long)plVar16 * 8);
              if (plVar14 != (long *)0x0) {
                do {
                  while( true ) {
                    plVar14 = (long *)*plVar14;
                    if (plVar14 == (long *)0x0) goto LAB_10a4d69e8;
                    plVar17 = (long *)plVar14[1];
                    if (plVar17 != plVar22) break;
                    if (*(byte *)(plVar14 + 2) == uVar24) goto LAB_10a4d6b04;
                  }
                  if (((ulong)plVar31 & uVar21) == 0) {
                    plVar17 = (long *)((ulong)plVar17 & uVar21);
                  }
                  else if (plVar31 <= plVar17) {
                    uVar12 = 0;
                    if (plVar31 != (long *)0x0) {
                      uVar12 = (ulong)plVar17 / (ulong)plVar31;
                    }
                    plVar17 = (long *)((long)plVar17 - uVar12 * (long)plVar31);
                  }
                } while (plVar17 == plVar16);
              }
            }
LAB_10a4d69e8:
            plVar14 = (long *)0x28;
            __Znwm();
            *plVar14 = 0;
            plVar14[1] = (long)plVar22;
            *(byte *)(plVar14 + 2) = bVar1;
            lVar8 = plVar27[(long)unaff_x26 * 2];
            *(long *)((long)plVar14 + 0x1c) = (plVar27 + (long)unaff_x26 * 2)[1];
            *(long *)((long)plVar14 + 0x14) = lVar8;
            fVar34 = (float)(*(long *)(param_1 + 0xb0) + 1);
            if ((plVar31 == (long *)0x0) || (*(float *)(param_1 + 0xb8) * (float)plVar31 < fVar34))
            {
              uVar21 = 1;
              if ((long *)0x2 < plVar31) {
                uVar21 = (ulong)(((ulong)plVar31 & (long)plVar31 - 1U) != 0);
              }
              ppuVar7 = (undefined **)(uVar21 | (long)plVar31 << 1);
              ppuVar15 = (undefined **)(long)(fVar34 / *(float *)(param_1 + 0xb8));
              if (ppuVar7 <= ppuVar15) {
                ppuVar7 = ppuVar15;
              }
              FUN_10a4f2538(param_1 + 0x98);
              plVar31 = *(long **)(param_1 + 0xa0);
              if (((ulong)plVar31 & (long)plVar31 - 1U) == 0) {
                plVar16 = (long *)((ulong)((int)plVar31 - 1) & (ulong)plVar22);
              }
              else {
                plVar16 = plVar22;
                if (plVar31 <= plVar22) {
                  uVar21 = 0;
                  if (plVar31 != (long *)0x0) {
                    uVar21 = (ulong)plVar22 / (ulong)plVar31;
                  }
                  plVar16 = (long *)((long)plVar22 - uVar21 * (long)plVar31);
                }
              }
            }
            lVar8 = *(long *)(param_1 + 0x98);
            plVar22 = *(long **)(lVar8 + (long)plVar16 * 8);
            if (plVar22 == (long *)0x0) {
              *plVar14 = *unaff_x28;
              *unaff_x28 = (long)plVar14;
              *(long **)(lVar8 + (long)plVar16 * 8) = unaff_x28;
              if (*plVar14 != 0) {
                plVar22 = *(long **)(*plVar14 + 8);
                if (((ulong)plVar31 & (long)plVar31 - 1U) == 0) {
                  plVar22 = (long *)((ulong)plVar22 & (long)plVar31 - 1U);
                }
                else if (plVar31 <= plVar22) {
                  uVar21 = 0;
                  if (plVar31 != (long *)0x0) {
                    uVar21 = (ulong)plVar22 / (ulong)plVar31;
                  }
                  plVar22 = (long *)((long)plVar22 - uVar21 * (long)plVar31);
                }
                plVar22 = (long *)(*(long *)(param_1 + 0x98) + (long)plVar22 * 8);
                goto LAB_10a4d6af4;
              }
            }
            else {
              *plVar14 = *plVar22;
LAB_10a4d6af4:
              *plVar22 = (long)plVar14;
            }
            *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
LAB_10a4d6b04:
            unaff_x26 = (undefined **)((long)unaff_x26 + 1);
            unaff_x27 = plVar25;
          } while (unaff_x26 != ppuStack_178);
        }
        if (plVar27 != (long *)0x0) {
          __ZdlPv(plVar27);
        }
        unaff_x25 = &UNK_10dd5b8f9;
        if (plVar25 != (long *)0x0) {
          __ZdlPv(plVar25);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        iVar26 = iStack_184;
        if (lStack_120 != 0) {
          lStack_118 = lStack_120;
          __ZdlPv();
        }
        param_1 = lStack_190;
        unaff_x22 = auStack_170;
        unaff_x23 = "";
        unaff_x24 = &PTR_DAT_110be8290;
        if (cStack_139 < '\0') {
          __ZdlPv(auStack_150[0]);
        }
        if (cStack_151 < '\0') {
          __ZdlPv(auStack_168[0]);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        unaff_x21 = (ulong)(iVar26 + 1U);
      } while (iVar26 + 1U != uStack_188);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
    plVar16 = param_2;
    (**(code **)(*param_2 + 0x220))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar7 == 0) {
    __Unwind_Resume(plVar16);
  }
  plVar25 = plVar16;
  func_0x000104bd46a0();
  pcStack_198 = FUN_10a4d6e2c;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_1f0 = unaff_x28;
  plStack_1e8 = unaff_x27;
  ppuStack_1e0 = unaff_x26;
  puStack_1d8 = unaff_x25;
  ppuStack_1d0 = unaff_x24;
  pcStack_1c8 = unaff_x23;
  puStack_1c0 = unaff_x22;
  uStack_1b8 = unaff_x21;
  plStack_1b0 = plVar16;
  plStack_1a8 = param_2;
  puStack_1a0 = &stack0xfffffffffffffff0;
  (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8110);
  ppuVar15 = &PTR_DAT_110be8bf8;
  (**(code **)(*ppuVar7 + 0x18))(ppuVar7);
  plVar25 = plVar25 + 4;
  do {
    plVar25 = (long *)*plVar25;
    if (plVar25 == (long *)0x0) {
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x20))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
        return;
      }
      ___stack_chk_fail();
      if ((int)ppuVar15 == 0) {
        __Unwind_Resume(ppuVar7);
      }
      func_0x000104bd46a0();
      puVar13 = *ppuVar15;
      if ((puVar13 != (undefined *)0x0) && (*(long *)(puVar13 + 0x28) != 0)) {
        if (*ppuVar7 == (undefined *)0x0) {
          *ppuVar15 = (undefined *)0x0;
          plVar16 = (long *)*ppuVar7;
          *ppuVar7 = puVar13;
          if (plVar16 != (long *)0x0) {
                    /* WARNING: Jumptable with 0 entries at 0x00010a4d76c8 */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar16 + 8))();
            return;
          }
        }
        else {
          for (plVar16 = *(long **)(puVar13 + 0x20); plVar16 != (long *)0x0;
              plVar16 = (long *)*plVar16) {
            FUN_10a4d76d8(*ppuVar7 + 0x10,plVar16 + 2,plVar16 + 0x10);
          }
        }
      }
      return;
    }
    (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
    (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8290);
    (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8290);
    func_0x00010a4d7c3c(plVar25 + 2,ppuVar7);
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8c18);
    plVar22 = (long *)plVar25[0x11];
    for (plVar16 = (long *)plVar25[0x10]; plVar16 != plVar22; plVar16 = plVar16 + 2) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      lVar8 = *plVar16;
      ppuVar15 = &PTR_DAT_110be8c98;
      if (lVar8 != 0) {
        ___dynamic_cast(lVar8,&PTR_DAT_110bef5a8,&PTR_DAT_110bef5e0,0);
        if (lVar8 != 0) {
          ppuVar15 = &PTR_DAT_110be8c78;
        }
      }
      ppuStack_228 = (undefined **)ppuVar15[1];
      ppuStack_230 = (undefined **)*ppuVar15;
      ppuStack_218 = (undefined **)ppuVar15[3];
      ppuStack_220 = (undefined **)ppuVar15[2];
      (**(code **)(*ppuVar7 + 0x118))(ppuVar7,&ppuStack_230,*plVar16);
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    }
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8c38);
    plVar16 = plVar25 + 0x1a;
    while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8078);
      (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8078);
      func_0x00010a4d7b00(plVar16 + 2,ppuVar7);
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x40))(ppuVar7,&PTR_DAT_110be8cb8,(int)plVar16[0xb]);
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    }
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    ppuVar15 = &PTR_DAT_110be8c58;
    (**(code **)(*ppuVar7 + 0x18))(ppuVar7);
    ppuStack_218 = (undefined **)0x0;
    ppuStack_220 = (undefined **)0x0;
    ppuStack_208 = (undefined **)0x0;
    ppuStack_210 = (undefined **)0x0;
    ppuStack_228 = (undefined **)0x0;
    ppuStack_230 = (undefined **)0x0;
    ppuVar23 = (undefined **)plVar25[0x16];
    if (ppuVar23 == (undefined **)0x0) {
      ppuVar30 = (undefined **)0x0;
      ppuStack_238 = (undefined **)0x0;
    }
    else {
      if ((long)ppuVar23 < 0) {
        func_0x00010a4f2478();
LAB_10a4d7518:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4d751c);
        (*pcVar5)();
      }
      ppuVar30 = ppuVar23;
      __Znwm();
      ppuStack_238 = (undefined **)((long)ppuVar30 + (long)ppuVar23);
      ppuStack_230 = ppuVar30;
      ppuStack_228 = ppuVar30;
      ppuStack_220 = ppuStack_238;
      if ((ulong)ppuVar23 >> 0x3c != 0) {
        func_0x00010a4f248c();
        goto LAB_10a4d7518;
      }
      FUN_10a4f24a0();
      ppuStack_208 = ppuVar23 + (long)ppuVar15 * 2;
      ppuStack_210 = ppuVar23;
    }
    plVar16 = (long *)plVar25[0x15];
    ppuVar19 = ppuStack_208;
    ppuVar23 = ppuVar30;
    ppuVar28 = ppuStack_210;
    ppuStack_260 = ppuVar30;
    ppuVar32 = ppuStack_208;
    ppuVar9 = ppuStack_210;
    ppuVar33 = ppuStack_210;
    ppuStack_218 = ppuStack_210;
    if (plVar16 != (long *)0x0) {
      do {
        lVar8 = plVar16[2];
        if (ppuVar23 < ppuStack_238) {
          *(char *)ppuVar23 = (char)lVar8;
          ppuVar20 = ppuVar30;
        }
        else {
          lVar10 = (long)ppuVar23 - (long)ppuVar30;
          ppuVar15 = (undefined **)(lVar10 + 1);
          if ((long)ppuVar15 < 0) {
            ppuStack_230 = ppuStack_260;
            ppuStack_220 = ppuStack_238;
            ppuStack_228 = ppuVar23;
            ppuStack_218 = ppuVar28;
            ppuStack_210 = ppuVar9;
            ppuStack_208 = ppuVar32;
            func_0x00010a4f2478();
            goto LAB_10a4d7518;
          }
          ppuVar18 = (undefined **)(((long)ppuStack_238 - (long)ppuVar30) * 2);
          if (ppuVar18 < ppuVar15 || (long)ppuVar18 - (long)ppuVar15 == 0) {
            ppuVar18 = ppuVar15;
          }
          if (0x3ffffffffffffffe < (ulong)((long)ppuStack_238 - (long)ppuVar30)) {
            ppuVar18 = (undefined **)0x7fffffffffffffff;
          }
          if (ppuVar18 == (undefined **)0x0) {
            ppuVar20 = (undefined **)0x0;
          }
          else {
            ppuVar20 = ppuVar18;
            __Znwm();
          }
          ppuVar23 = (undefined **)((long)ppuVar20 + lVar10);
          ppuStack_238 = (undefined **)((long)ppuVar20 + (long)ppuVar18);
          *(char *)ppuVar23 = (char)lVar8;
          ppuVar15 = ppuVar30;
          _memcpy(ppuVar20,ppuVar30,lVar10);
          ppuStack_260 = ppuVar20;
          if (ppuVar30 != (undefined **)0x0) {
            __ZdlPv(ppuVar30);
          }
        }
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
        if (ppuVar9 < ppuVar19) {
          puVar13 = *(undefined **)((long)plVar16 + 0x14);
          ppuVar9[1] = *(undefined **)((long)plVar16 + 0x1c);
          *ppuVar9 = puVar13;
          ppuVar18 = ppuVar33;
        }
        else {
          lVar8 = (long)ppuVar9 - (long)ppuVar33;
          uVar21 = (lVar8 >> 4) + 1;
          if (uVar21 >> 0x3c != 0) {
            ppuStack_230 = ppuStack_260;
            ppuStack_220 = ppuStack_238;
            ppuStack_228 = ppuVar23;
            ppuStack_218 = ppuVar28;
            ppuStack_210 = ppuVar9;
            ppuStack_208 = ppuVar32;
            func_0x00010a4f248c();
            goto LAB_10a4d7518;
          }
          uVar12 = (long)ppuVar19 - (long)ppuVar33 >> 3;
          if (uVar12 <= uVar21) {
            uVar12 = uVar21;
          }
          if (0x7fffffffffffffef < (ulong)((long)ppuVar19 - (long)ppuVar33)) {
            uVar12 = 0xfffffffffffffff;
          }
          FUN_10a4f24a0();
          ppuVar9 = (undefined **)(uVar12 + lVar8);
          ppuVar19 = (undefined **)(uVar12 + (long)ppuVar15 * 0x10);
          puVar13 = *(undefined **)((long)plVar16 + 0x14);
          ppuVar9[1] = *(undefined **)((long)plVar16 + 0x1c);
          *ppuVar9 = puVar13;
          ppuVar28 = ppuVar9 + (lVar8 >> 4) * -2;
          ppuVar15 = ppuVar33;
          _memcpy(ppuVar28,ppuVar33,lVar8);
          ppuVar32 = ppuVar19;
          ppuVar18 = ppuVar28;
          if (ppuVar33 != (undefined **)0x0) {
            __ZdlPv(ppuVar33);
          }
        }
        ppuVar9 = ppuVar9 + 2;
        plVar16 = (long *)*plVar16;
        ppuVar30 = ppuVar20;
        ppuVar33 = ppuVar18;
      } while (plVar16 != (long *)0x0);
      ppuStack_230 = ppuStack_260;
      ppuStack_220 = ppuStack_238;
      ppuVar30 = ppuVar23;
      ppuStack_228 = ppuVar23;
      ppuStack_218 = ppuVar28;
      ppuStack_210 = ppuVar9;
      ppuStack_208 = ppuVar32;
    }
    (**(code **)(*ppuVar7 + 0x28))
              (ppuVar7,&PTR_DAT_110bc4460,ppuStack_260,(long)ppuVar30 - (long)ppuStack_260);
    ppuVar15 = &PTR_DAT_110bc4400;
    (**(code **)(*ppuVar7 + 0x18))(ppuVar7);
    ppuVar9 = ppuStack_210;
    ppuVar30 = ppuStack_218;
    for (ppuVar23 = ppuStack_218; ppuVar23 != ppuVar9; ppuVar23 = ppuVar23 + 2) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x70))(ppuVar7,&PTR_DAT_110be8aa8,*(undefined1 *)ppuVar23);
      (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8ac8);
      (**(code **)(*ppuVar7 + 0x50))(ppuVar7,&PTR_DAT_110be8b68,*(undefined4 *)((long)ppuVar23 + 4))
      ;
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8ae8);
      (**(code **)(*ppuVar7 + 0x50))(ppuVar7,&PTR_DAT_110be8b68,*(undefined4 *)(ppuVar23 + 1));
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x18))(ppuVar7,&PTR_DAT_110be8b08);
      ppuVar15 = &PTR_DAT_110be8b68;
      (**(code **)(*ppuVar7 + 0x50))
                (ppuVar7,&PTR_DAT_110be8b68,*(undefined4 *)((long)ppuVar23 + 0xc));
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
      (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    }
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    if (ppuVar30 != (undefined **)0x0) {
      __ZdlPv(ppuVar30);
    }
    if (ppuStack_260 != (undefined **)0x0) {
      __ZdlPv(ppuStack_260);
    }
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
    (**(code **)(*ppuVar7 + 0x20))(ppuVar7);
  } while( true );
}



/* Entry: 10a4d6e2c; end: 10a4d7657;  */

void FUN_10a4d6e2c(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long *plVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuStack_d0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8110);
  ppuVar5 = &PTR_DAT_110be8bf8;
  (**(code **)(*param_2 + 0x18))(param_2);
  plVar17 = (long *)(param_1 + 0x20);
  do {
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) {
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x20))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      if ((int)ppuVar5 == 0) {
        __Unwind_Resume(param_2);
      }
      func_0x000104bd46a0();
      puVar6 = *ppuVar5;
      if ((puVar6 != (undefined *)0x0) && (*(long *)(puVar6 + 0x28) != 0)) {
        if (*param_2 == 0) {
          *ppuVar5 = (undefined *)0x0;
          plVar17 = (long *)*param_2;
          *param_2 = (long)puVar6;
          if (plVar17 != (long *)0x0) {
                    /* WARNING: Jumptable with 0 entries at 0x00010a4d76c8 */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar17 + 8))();
            return;
          }
        }
        else {
          for (plVar17 = *(long **)(puVar6 + 0x20); plVar17 != (long *)0x0;
              plVar17 = (long *)*plVar17) {
            FUN_10a4d76d8(*param_2 + 0x10,plVar17 + 2,plVar17 + 0x10);
          }
        }
      }
      return;
    }
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8290);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8290);
    func_0x00010a4d7c3c(plVar17 + 2,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8c18);
    plVar2 = (long *)plVar17[0x11];
    for (plVar10 = (long *)plVar17[0x10]; plVar10 != plVar2; plVar10 = plVar10 + 2) {
      (**(code **)(*param_2 + 0x10))(param_2);
      lVar4 = *plVar10;
      ppuVar5 = &PTR_DAT_110be8c98;
      if (lVar4 != 0) {
        ___dynamic_cast(lVar4,&PTR_DAT_110bef5a8,&PTR_DAT_110bef5e0,0);
        if (lVar4 != 0) {
          ppuVar5 = &PTR_DAT_110be8c78;
        }
      }
      ppuStack_98 = (undefined **)ppuVar5[1];
      ppuStack_a0 = (undefined **)*ppuVar5;
      ppuStack_88 = (undefined **)ppuVar5[3];
      ppuStack_90 = (undefined **)ppuVar5[2];
      (**(code **)(*param_2 + 0x118))(param_2,&ppuStack_a0,*plVar10);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8c38);
    plVar10 = plVar17 + 0x1a;
    while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8078);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8078);
      func_0x00010a4d7b00(plVar10 + 2,param_2);
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110be8cb8,*(undefined4 *)(plVar10 + 0xb));
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    ppuVar5 = &PTR_DAT_110be8c58;
    (**(code **)(*param_2 + 0x18))(param_2);
    ppuStack_88 = (undefined **)0x0;
    ppuStack_90 = (undefined **)0x0;
    ppuStack_78 = (undefined **)0x0;
    ppuStack_80 = (undefined **)0x0;
    ppuStack_98 = (undefined **)0x0;
    ppuStack_a0 = (undefined **)0x0;
    ppuVar13 = (undefined **)plVar17[0x16];
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar11 = (undefined **)0x0;
      ppuStack_a8 = (undefined **)0x0;
    }
    else {
      if ((long)ppuVar13 < 0) {
        func_0x00010a4f2478();
LAB_10a4d7518:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4d751c);
        (*pcVar3)();
      }
      ppuVar11 = ppuVar13;
      __Znwm();
      ppuStack_a8 = (undefined **)((long)ppuVar11 + (long)ppuVar13);
      ppuStack_a0 = ppuVar11;
      ppuStack_98 = ppuVar11;
      ppuStack_90 = ppuStack_a8;
      if ((ulong)ppuVar13 >> 0x3c != 0) {
        func_0x00010a4f248c();
        goto LAB_10a4d7518;
      }
      FUN_10a4f24a0();
      ppuStack_78 = ppuVar13 + (long)ppuVar5 * 2;
      ppuStack_80 = ppuVar13;
    }
    plVar10 = (long *)plVar17[0x15];
    ppuVar9 = ppuStack_78;
    ppuVar13 = ppuVar11;
    ppuVar15 = ppuStack_80;
    ppuStack_d0 = ppuVar11;
    ppuVar16 = ppuStack_78;
    ppuVar18 = ppuStack_80;
    ppuVar19 = ppuStack_80;
    ppuStack_88 = ppuStack_80;
    if (plVar10 != (long *)0x0) {
      do {
        lVar4 = plVar10[2];
        if (ppuVar13 < ppuStack_a8) {
          *(char *)ppuVar13 = (char)lVar4;
          ppuVar12 = ppuVar11;
        }
        else {
          lVar14 = (long)ppuVar13 - (long)ppuVar11;
          ppuVar5 = (undefined **)(lVar14 + 1);
          if ((long)ppuVar5 < 0) {
            ppuStack_a0 = ppuStack_d0;
            ppuStack_90 = ppuStack_a8;
            ppuStack_98 = ppuVar13;
            ppuStack_88 = ppuVar15;
            ppuStack_80 = ppuVar18;
            ppuStack_78 = ppuVar16;
            func_0x00010a4f2478();
            goto LAB_10a4d7518;
          }
          ppuVar7 = (undefined **)(((long)ppuStack_a8 - (long)ppuVar11) * 2);
          if (ppuVar7 < ppuVar5 || (long)ppuVar7 - (long)ppuVar5 == 0) {
            ppuVar7 = ppuVar5;
          }
          if (0x3ffffffffffffffe < (ulong)((long)ppuStack_a8 - (long)ppuVar11)) {
            ppuVar7 = (undefined **)0x7fffffffffffffff;
          }
          if (ppuVar7 == (undefined **)0x0) {
            ppuVar12 = (undefined **)0x0;
          }
          else {
            ppuVar12 = ppuVar7;
            __Znwm();
          }
          ppuVar13 = (undefined **)((long)ppuVar12 + lVar14);
          ppuStack_a8 = (undefined **)((long)ppuVar12 + (long)ppuVar7);
          *(char *)ppuVar13 = (char)lVar4;
          ppuVar5 = ppuVar11;
          _memcpy(ppuVar12,ppuVar11,lVar14);
          ppuStack_d0 = ppuVar12;
          if (ppuVar11 != (undefined **)0x0) {
            __ZdlPv(ppuVar11);
          }
        }
        ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        if (ppuVar18 < ppuVar9) {
          puVar6 = *(undefined **)((long)plVar10 + 0x14);
          ppuVar18[1] = *(undefined **)((long)plVar10 + 0x1c);
          *ppuVar18 = puVar6;
          ppuVar7 = ppuVar19;
        }
        else {
          lVar4 = (long)ppuVar18 - (long)ppuVar19;
          uVar1 = (lVar4 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            ppuStack_a0 = ppuStack_d0;
            ppuStack_90 = ppuStack_a8;
            ppuStack_98 = ppuVar13;
            ppuStack_88 = ppuVar15;
            ppuStack_80 = ppuVar18;
            ppuStack_78 = ppuVar16;
            func_0x00010a4f248c();
            goto LAB_10a4d7518;
          }
          uVar8 = (long)ppuVar9 - (long)ppuVar19 >> 3;
          if (uVar8 <= uVar1) {
            uVar8 = uVar1;
          }
          if (0x7fffffffffffffef < (ulong)((long)ppuVar9 - (long)ppuVar19)) {
            uVar8 = 0xfffffffffffffff;
          }
          FUN_10a4f24a0();
          ppuVar18 = (undefined **)(uVar8 + lVar4);
          ppuVar9 = (undefined **)(uVar8 + (long)ppuVar5 * 0x10);
          puVar6 = *(undefined **)((long)plVar10 + 0x14);
          ppuVar18[1] = *(undefined **)((long)plVar10 + 0x1c);
          *ppuVar18 = puVar6;
          ppuVar15 = ppuVar18 + (lVar4 >> 4) * -2;
          ppuVar5 = ppuVar19;
          _memcpy(ppuVar15,ppuVar19,lVar4);
          ppuVar16 = ppuVar9;
          ppuVar7 = ppuVar15;
          if (ppuVar19 != (undefined **)0x0) {
            __ZdlPv(ppuVar19);
          }
        }
        ppuVar18 = ppuVar18 + 2;
        plVar10 = (long *)*plVar10;
        ppuVar11 = ppuVar12;
        ppuVar19 = ppuVar7;
      } while (plVar10 != (long *)0x0);
      ppuStack_a0 = ppuStack_d0;
      ppuStack_90 = ppuStack_a8;
      ppuVar11 = ppuVar13;
      ppuStack_98 = ppuVar13;
      ppuStack_88 = ppuVar15;
      ppuStack_80 = ppuVar18;
      ppuStack_78 = ppuVar16;
    }
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110bc4460,ppuStack_d0,(long)ppuVar11 - (long)ppuStack_d0);
    ppuVar5 = &PTR_DAT_110bc4400;
    (**(code **)(*param_2 + 0x18))(param_2);
    ppuVar18 = ppuStack_80;
    ppuVar11 = ppuStack_88;
    for (ppuVar13 = ppuStack_88; ppuVar13 != ppuVar18; ppuVar13 = ppuVar13 + 2) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110be8aa8,*(undefined1 *)ppuVar13);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8ac8);
      (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110be8b68,*(undefined4 *)((long)ppuVar13 + 4))
      ;
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8ae8);
      (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110be8b68,*(undefined4 *)(ppuVar13 + 1));
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8b08);
      ppuVar5 = &PTR_DAT_110be8b68;
      (**(code **)(*param_2 + 0x50))
                (param_2,&PTR_DAT_110be8b68,*(undefined4 *)((long)ppuVar13 + 0xc));
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    if (ppuVar11 != (undefined **)0x0) {
      __ZdlPv(ppuVar11);
    }
    if (ppuStack_d0 != (undefined **)0x0) {
      __ZdlPv(ppuStack_d0);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  } while( true );
}



/* Entry: 10a4d7658; end: 10a4d76d7;  */

void FUN_10a4d7658(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x28) != 0)) {
    if (*param_1 == 0) {
      *param_2 = 0;
      plVar2 = (long *)*param_1;
      *param_1 = lVar1;
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Jumptable with 0 entries at 0x00010a4d76c8 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
    else {
      for (plVar2 = *(long **)(lVar1 + 0x20); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        FUN_10a4d76d8(*param_1 + 0x10,plVar2 + 2,plVar2 + 0x10);
      }
    }
  }
  return;
}



/* Entry: 10a4d76d8; end: 10a4d7753;  */

undefined1  [16] FUN_10a4d76d8(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  FUN_10a507f68(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    func_0x00010a4f2748(param_1 + 0x80);
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x88) = param_3[1];
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined8 *)(param_1 + 0x90) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    func_0x00010a4f27a4(param_1 + 0x98,param_3 + 3);
    func_0x00010a4f2844(param_1 + 0xc0,param_3 + 8);
  }
  auVar2._8_8_ = param_2 & 0xff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a4d7754; end: 10a4d78a3;  */

void FUN_10a4d7754(undefined8 param_1)

{
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65d0cd;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010a4d784c(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65d0d6;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10a4d78a4(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65d0db;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 2;
  FUN_10a4d78a4(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a4d78a4; end: 10a4d78fb;  */

ulong FUN_10a4d78a4(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a508294(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a4d78fc; end: 10a4d7d1b;  */

void FUN_10a4d78fc(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,long *param_6)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110be8130,0);
  *param_5 = (int)plVar1;
  (**(code **)(*param_6 + 0xa8))(&uStack_38,param_6,&PTR_DAT_110be8150,"",0);
  if (*(char *)((long)param_5 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_5 + 2));
  }
  *(undefined8 *)(param_5 + 4) = uStack_30;
  *(undefined8 *)(param_5 + 2) = uStack_38;
  *(undefined8 *)(param_5 + 6) = uStack_28;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110be8170,0);
  param_5[1] = (int)plVar1;
  plVar1 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be8190);
  if (((int)plVar1 != 0) &&
     (plVar1 = param_6, (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be8190),
     (int)plVar1 != 0)) {
    param_5[0x10] = 0;
    uVar2 = 0;
    *(undefined8 *)(param_5 + 10) = 0;
    *(undefined8 *)(param_5 + 8) = 0;
    *(undefined8 *)(param_5 + 0xe) = 0;
    *(undefined8 *)(param_5 + 0xc) = 0;
    *(undefined1 *)(param_5 + 0x11) = 1;
    (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be8190);
    plVar1 = param_6;
    (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be8d18);
    if ((int)plVar1 != 0) {
      *(undefined2 *)(param_5 + 8) = 0x100;
      plVar1 = param_6;
      (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110be8d18);
      *(char *)(param_5 + 8) = (char)plVar1;
    }
    plVar1 = param_6;
    (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be8d38);
    if ((int)plVar1 != 0) {
      *(undefined8 *)(param_5 + 0xd) = 0;
      *(undefined8 *)(param_5 + 0xb) = 0;
      *(undefined8 *)(param_5 + 9) = 0;
      param_5[0xf] = 0x3f800000;
      *(undefined1 *)(param_5 + 0x10) = 1;
      (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110be8d38);
      (**(code **)(*param_6 + 0xe8))(param_6,&PTR_DAT_110be8cd8);
      param_5[9] = uVar2;
      param_5[10] = param_2;
      param_5[0xb] = param_3;
      (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110be8cf8);
      param_5[0xc] = uVar2;
      param_5[0xd] = param_2;
      param_5[0xe] = param_3;
      param_5[0xf] = param_4;
      (**(code **)(*param_6 + 0x220))(param_6);
    }
    (**(code **)(*param_6 + 0x220))(param_6);
  }
  return;
}



/* Entry: 10a4d7d1c; end: 10a4d80ab;  */

void FUN_10a4d7d1c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 *param_5,long *param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  undefined7 uStack_27;
  
  plVar3 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110be81b0);
  if ((int)plVar3 == 0) {
    plVar3 = param_6;
    (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110be8d58);
    *param_5 = (char)plVar3;
    (**(code **)(*param_6 + 0xa0))(&uStack_38,param_6,&PTR_DAT_110be8d78);
    if ((char)param_5[0x1f] < '\0') {
      __ZdlPv(*(undefined8 *)(param_5 + 8));
    }
    *(ulong *)(param_5 + 0x10) = uStack_30;
    *(undefined8 *)(param_5 + 8) = uStack_38;
    *(ulong *)(param_5 + 0x18) = CONCAT71(uStack_27,bStack_28);
    (**(code **)(*param_6 + 0xa0))(&uStack_38,param_6,&PTR_DAT_110be8d98);
    if ((char)param_5[0x37] < '\0') {
      __ZdlPv(*(undefined8 *)(param_5 + 0x20));
    }
    *(ulong *)(param_5 + 0x28) = uStack_30;
    *(undefined8 *)(param_5 + 0x20) = uStack_38;
    *(ulong *)(param_5 + 0x30) = CONCAT71(uStack_27,bStack_28);
    plVar3 = param_6;
    (**(code **)(*param_6 + 0x200))(param_6,&PTR_s_boundingBox_110be8db8);
    uVar6 = (undefined4)uStack_38;
    if ((int)plVar3 != 0) {
      *(undefined8 *)(param_5 + 0x38) = 0;
      *(undefined8 *)(param_5 + 0x40) = 0;
      param_5[0x48] = 1;
      (**(code **)(*param_6 + 0x108))(param_6,&PTR_s_boundingBox_110be8db8);
      *(undefined4 *)(param_5 + 0x38) = uVar6;
      *(undefined4 *)(param_5 + 0x3c) = param_2;
      *(undefined4 *)(param_5 + 0x40) = param_3;
      *(undefined4 *)(param_5 + 0x44) = param_4;
    }
    FUN_10a324e90(param_6,&PTR_DAT_110be8dd8,param_5 + 0x50);
    plVar3 = param_6;
    (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110be8df8);
    param_5[0x68] = (char)plVar3;
    (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110be8e18);
    uVar2 = SUB81(param_6,0);
LAB_10a4d7fe4:
    param_5[0x69] = uVar2;
    return;
  }
  (**(code **)(*param_6 + 0xa0))(&uStack_38,param_6,&PTR_DAT_110be81b0);
  if ((char)param_5[0x37] < '\0') {
    __ZdlPv(*(undefined8 *)(param_5 + 0x20));
  }
  *(ulong *)(param_5 + 0x28) = uStack_30;
  *(undefined8 *)(param_5 + 0x20) = uStack_38;
  *(ulong *)(param_5 + 0x30) = CONCAT71(uStack_27,bStack_28);
  (**(code **)(*param_6 + 0xa0))(&uStack_38,param_6,&PTR_DAT_110be81d0);
  if ((char)param_5[0x1f] < '\0') {
    __ZdlPv(*(undefined8 *)(param_5 + 8));
  }
  *(ulong *)(param_5 + 0x10) = uStack_30;
  *(undefined8 *)(param_5 + 8) = uStack_38;
  *(ulong *)(param_5 + 0x18) = CONCAT71(uStack_27,bStack_28);
  plVar3 = param_6;
  uVar7 = uStack_38;
  (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110be81f0);
  uVar6 = (undefined4)uVar7;
  *param_5 = (char)plVar3;
  plVar3 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_s_boundingBox_110be8210);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_6 + 0x108))(param_6,&PTR_s_boundingBox_110be8210);
    *(undefined4 *)(param_5 + 0x38) = uVar6;
    *(undefined4 *)(param_5 + 0x3c) = param_2;
    *(undefined4 *)(param_5 + 0x40) = param_3;
    *(undefined4 *)(param_5 + 0x44) = param_4;
    if ((param_5[0x48] & 1) == 0) {
      param_5[0x48] = 1;
    }
  }
  (**(code **)(*param_6 + 0x1d8))(&uStack_38,param_6,&PTR_DAT_110be8230);
  if ((bStack_28 & 1) == 0) {
    puVar4 = (undefined8 *)0x19;
    __Znwm();
    uStack_70 = 0x8000000000000019;
    uStack_78 = 0x17;
    puVar4[1] = 0x54706f74536f5473;
    *puVar4 = 0x64497463656a626f;
    *(undefined8 *)((long)puVar4 + 0xf) = 0x676e696b63617254;
    *(undefined1 *)((long)puVar4 + 0x17) = 0;
    puStack_80 = puVar4;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_68,&UNK_10f63b9fc,&puStack_80);
    FUN_10a012db0(auStack_50,auStack_68,&UNK_10f63ba05);
    FUN_10a0029c0(auStack_50);
  }
  else {
    uVar5 = uStack_30 >> 2;
    if ((uStack_30 & 3) != 0) {
      uVar5 = uVar5 + 1;
    }
    func_0x000108a5942c(param_5 + 0x50,uVar5);
    if ((bStack_28 & 1) != 0) {
      _memcpy(*(undefined8 *)(param_5 + 0x50),uStack_38,uStack_30);
      plVar3 = param_6;
      (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110be8250,0);
      param_5[0x68] = (char)plVar3;
      (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110be8270,0);
      uVar2 = SUB81(param_6,0);
      goto LAB_10a4d7fe4;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4d8060);
  (*pcVar1)();
}



/* Entry: 10a4d80ac; end: 10a4d818f;  */

void FUN_10a4d80ac(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long *unaff_x26;
  undefined1 *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined1 auStack_150 [8];
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 auStack_130 [2];
  char cStack_119;
  undefined1 uStack_118;
  undefined1 uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 < (long *)param_1[2]) {
    lVar13 = *param_2;
    plVar5 = plVar3 + 2;
    plVar3[1] = param_2[1];
    *plVar3 = lVar13;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar13 = (long)plVar3 - *param_1;
    uVar12 = (lVar13 >> 4) + 1;
    if (uVar12 >> 0x3c != 0) {
      func_0x00010a4f1518();
      func_0x00010a23116c(param_1 + 2);
      plVar3 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((int)plVar3 != 0) {
        iVar11 = 0;
        do {
          (**(code **)(*param_2 + 0x218))(param_2,iVar11);
          auStack_150[0] = 0;
          func_0x000107c2b054(auStack_148,"");
          func_0x000107c2b054(auStack_130,"");
          uStack_118 = 0;
          uStack_108 = 0;
          lStack_f8 = 0;
          uStack_f0 = 0;
          lStack_100 = 0;
          uStack_e8 = 0;
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8290);
          FUN_10a4d7d1c(auStack_150,param_2);
          (**(code **)(*param_2 + 0x220))(param_2);
          plVar4 = param_1 + 2;
          puStack_1a0 = auStack_150;
          FUN_10a507b84(plVar4,auStack_150,&UNK_10dd5b8f9,&puStack_1a0,auStack_e0);
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8078);
          plVar5 = param_2;
          (**(code **)(*param_2 + 0x208))();
          if ((int)plVar5 != 0) {
            iVar15 = 0;
            plVar1 = plVar4 + 0x10;
            plVar2 = plVar4 + 0x12;
            do {
              uStack_15c = uStack_15c & 0xffffff00;
              lStack_198 = 0;
              puStack_1a0 = (undefined1 *)0x0;
              lStack_188 = 0;
              lStack_190 = 0;
              uStack_180 = 0;
              (**(code **)(*param_2 + 0x218))(param_2,iVar15);
              (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8078);
              FUN_10a4d78fc(&puStack_1a0,param_2);
              (**(code **)(*param_2 + 0x220))(param_2);
              (**(code **)(*param_2 + 0x220))(param_2);
              plVar9 = plVar1;
              FUN_10a22f7e8(plVar1,&puStack_1a0);
              plVar14 = (long *)plVar4[0x11];
              if (plVar14 != (long *)0x0) {
                uVar12 = (long)plVar14 - 1;
                if (((ulong)plVar14 & uVar12) == 0) {
                  unaff_x26 = (long *)(uVar12 & (ulong)plVar9);
                }
                else {
                  unaff_x26 = plVar9;
                  if (plVar14 <= plVar9) {
                    uVar10 = 0;
                    if (plVar14 != (long *)0x0) {
                      uVar10 = (ulong)plVar9 / (ulong)plVar14;
                    }
                    unaff_x26 = (long *)((long)plVar9 - uVar10 * (long)plVar14);
                  }
                }
                plVar7 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
                if (plVar7 != (long *)0x0) {
                  for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
                    plVar8 = (long *)plVar7[1];
                    if (plVar8 == plVar9) {
                      uVar10 = (ulong)(plVar7 + 2);
                      FUN_10a22f8c4(uVar10,&puStack_1a0);
                      if ((uVar10 & 1) != 0) goto LAB_10a4d8524;
                    }
                    else {
                      if (((ulong)plVar14 & uVar12) == 0) {
                        plVar8 = (long *)((ulong)plVar8 & uVar12);
                      }
                      else if (plVar14 <= plVar8) {
                        uVar10 = 0;
                        if (plVar14 != (long *)0x0) {
                          uVar10 = (ulong)plVar8 / (ulong)plVar14;
                        }
                        plVar8 = (long *)((long)plVar8 - uVar10 * (long)plVar14);
                      }
                      if (plVar8 != unaff_x26) break;
                    }
                  }
                }
              }
              plVar7 = (long *)0x58;
              __Znwm();
              uStack_d0 = 1;
              *plVar7 = 0;
              plVar7[1] = (long)plVar9;
              plVar7[2] = (long)puStack_1a0;
              plVar7[5] = lStack_188;
              plVar7[4] = lStack_190;
              plVar7[3] = lStack_198;
              lStack_198 = 0;
              lStack_190 = 0;
              lStack_188 = 0;
              plVar7[10] = CONCAT44(uStack_15c,uStack_160);
              plVar7[7] = lStack_178;
              plVar7[6] = CONCAT71(uStack_17f,uStack_180);
              plVar7[9] = lStack_168;
              plVar7[8] = lStack_170;
              plStack_d8 = plVar1;
              if ((plVar14 == (long *)0x0) ||
                 (*(float *)(plVar4 + 0x14) * (float)plVar14 < (float)(plVar4[0x13] + 1))) {
                uVar12 = 1;
                if ((long *)0x2 < plVar14) {
                  uVar12 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
                }
                uVar12 = uVar12 | (long)plVar14 << 1;
                uVar10 = (ulong)((float)(plVar4[0x13] + 1) / *(float *)(plVar4 + 0x14));
                if (uVar12 <= uVar10) {
                  uVar12 = uVar10;
                }
                FUN_10a22f3a0(plVar1,uVar12);
                plVar14 = (long *)plVar4[0x11];
                if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
                  unaff_x26 = (long *)((long)plVar14 - 1U & (ulong)plVar9);
                }
                else {
                  unaff_x26 = plVar9;
                  if (plVar14 <= plVar9) {
                    uVar12 = 0;
                    if (plVar14 != (long *)0x0) {
                      uVar12 = (ulong)plVar9 / (ulong)plVar14;
                    }
                    unaff_x26 = (long *)((long)plVar9 - uVar12 * (long)plVar14);
                  }
                }
              }
              lVar13 = *plVar1;
              plVar9 = *(long **)(lVar13 + (long)unaff_x26 * 8);
              if (plVar9 == (long *)0x0) {
                *plVar7 = *plVar2;
                *plVar2 = (long)plVar7;
                *(long **)(lVar13 + (long)unaff_x26 * 8) = plVar2;
                if (*plVar7 != 0) {
                  plVar9 = *(long **)(*plVar7 + 8);
                  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
                    plVar9 = (long *)((ulong)plVar9 & (long)plVar14 - 1U);
                  }
                  else if (plVar14 <= plVar9) {
                    uVar12 = 0;
                    if (plVar14 != (long *)0x0) {
                      uVar12 = (ulong)plVar9 / (ulong)plVar14;
                    }
                    plVar9 = (long *)((long)plVar9 - uVar12 * (long)plVar14);
                  }
                  plVar9 = (long *)(*plVar1 + (long)plVar9 * 8);
                  goto LAB_10a4d8514;
                }
              }
              else {
                *plVar7 = *plVar9;
LAB_10a4d8514:
                *plVar9 = (long)plVar7;
              }
              plVar4[0x13] = plVar4[0x13] + 1;
LAB_10a4d8524:
              if (lStack_188 < 0) {
                __ZdlPv(lStack_198);
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 != (int)plVar5);
          }
          (**(code **)(*param_2 + 0x220))(param_2);
          if (lStack_100 != 0) {
            lStack_f8 = lStack_100;
            __ZdlPv();
          }
          if (cStack_119 < '\0') {
            __ZdlPv(auStack_130[0]);
          }
          if (cStack_131 < '\0') {
            __ZdlPv(auStack_148[0]);
          }
          (**(code **)(*param_2 + 0x220))(param_2);
          iVar11 = iVar11 + 1;
        } while (iVar11 != (int)plVar3);
      }
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar10 = (long)uVar6 >> 3;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar10 = 0xfffffffffffffff;
    }
    plVar4 = param_1;
    plStack_38 = param_1;
    FUN_10a4f152c();
    plVar3 = (long *)((long)plVar4 + lVar13);
    lVar13 = *param_2;
    plVar5 = plVar3 + 2;
    plVar3[1] = param_2[1];
    *plVar3 = lVar13;
    *param_2 = 0;
    param_2[1] = 0;
    lVar13 = (long)plVar3 - (param_1[1] - *param_1);
    _memcpy(lVar13);
    lStack_58 = *param_1;
    *param_1 = lVar13;
    param_1[1] = (long)plVar5;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar10 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a4f1560(&lStack_58);
  }
  param_1[1] = (long)plVar5;
  return;
}



/* Entry: 10a4d8190; end: 10a4d867b;  */

void FUN_10a4d8190(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  long *unaff_x26;
  float fVar15;
  undefined1 *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined1 auStack_f0 [8];
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 uStack_70;
  
  func_0x00010a23116c(param_1 + 0x10);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((int)plVar3 != 0) {
    iVar11 = 0;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar11);
      auStack_f0[0] = 0;
      func_0x000107c2b054(auStack_e8,"");
      func_0x000107c2b054(auStack_d0,"");
      uStack_b8 = 0;
      uStack_a8 = 0;
      lStack_98 = 0;
      uStack_90 = 0;
      lStack_a0 = 0;
      uStack_88 = 0;
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8290);
      FUN_10a4d7d1c(auStack_f0,param_2);
      (**(code **)(*param_2 + 0x220))(param_2);
      lVar4 = param_1 + 0x10;
      puStack_140 = auStack_f0;
      FUN_10a507b84(lVar4,auStack_f0,&UNK_10dd5b8f9,&puStack_140,auStack_80);
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8078);
      plVar5 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((int)plVar5 != 0) {
        iVar14 = 0;
        plVar1 = (long *)(lVar4 + 0x80);
        plVar2 = (long *)(lVar4 + 0x90);
        do {
          uStack_fc = uStack_fc & 0xffffff00;
          lStack_138 = 0;
          puStack_140 = (undefined1 *)0x0;
          lStack_128 = 0;
          lStack_130 = 0;
          uStack_120 = 0;
          (**(code **)(*param_2 + 0x218))(param_2,iVar14);
          (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be8078);
          FUN_10a4d78fc(&puStack_140,param_2);
          (**(code **)(*param_2 + 0x220))(param_2);
          (**(code **)(*param_2 + 0x220))(param_2);
          plVar8 = plVar1;
          FUN_10a22f7e8(plVar1,&puStack_140);
          plVar13 = *(long **)(lVar4 + 0x88);
          if (plVar13 != (long *)0x0) {
            uVar12 = (long)plVar13 - 1;
            if (((ulong)plVar13 & uVar12) == 0) {
              unaff_x26 = (long *)(uVar12 & (ulong)plVar8);
            }
            else {
              unaff_x26 = plVar8;
              if (plVar13 <= plVar8) {
                uVar9 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar9 = (ulong)plVar8 / (ulong)plVar13;
                }
                unaff_x26 = (long *)((long)plVar8 - uVar9 * (long)plVar13);
              }
            }
            plVar6 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
            if (plVar6 != (long *)0x0) {
              for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
                plVar7 = (long *)plVar6[1];
                if (plVar7 == plVar8) {
                  uVar9 = (ulong)(plVar6 + 2);
                  FUN_10a22f8c4(uVar9,&puStack_140);
                  if ((uVar9 & 1) != 0) goto LAB_10a4d8524;
                }
                else {
                  if (((ulong)plVar13 & uVar12) == 0) {
                    plVar7 = (long *)((ulong)plVar7 & uVar12);
                  }
                  else if (plVar13 <= plVar7) {
                    uVar9 = 0;
                    if (plVar13 != (long *)0x0) {
                      uVar9 = (ulong)plVar7 / (ulong)plVar13;
                    }
                    plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar13);
                  }
                  if (plVar7 != unaff_x26) break;
                }
              }
            }
          }
          plVar6 = (long *)0x58;
          __Znwm();
          uStack_70 = 1;
          *plVar6 = 0;
          plVar6[1] = (long)plVar8;
          plVar6[2] = (long)puStack_140;
          plVar6[5] = lStack_128;
          plVar6[4] = lStack_130;
          plVar6[3] = lStack_138;
          lStack_138 = 0;
          lStack_130 = 0;
          lStack_128 = 0;
          plVar6[10] = CONCAT44(uStack_fc,uStack_100);
          plVar6[7] = lStack_118;
          plVar6[6] = CONCAT71(uStack_11f,uStack_120);
          plVar6[9] = lStack_108;
          plVar6[8] = lStack_110;
          fVar15 = (float)(*(long *)(lVar4 + 0x98) + 1);
          plStack_78 = plVar1;
          if ((plVar13 == (long *)0x0) || (*(float *)(lVar4 + 0xa0) * (float)plVar13 < fVar15)) {
            uVar12 = 1;
            if ((long *)0x2 < plVar13) {
              uVar12 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
            }
            uVar12 = uVar12 | (long)plVar13 << 1;
            uVar9 = (ulong)(fVar15 / *(float *)(lVar4 + 0xa0));
            if (uVar12 <= uVar9) {
              uVar12 = uVar9;
            }
            FUN_10a22f3a0(plVar1,uVar12);
            plVar13 = *(long **)(lVar4 + 0x88);
            if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
              unaff_x26 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
            }
            else {
              unaff_x26 = plVar8;
              if (plVar13 <= plVar8) {
                uVar12 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar12 = (ulong)plVar8 / (ulong)plVar13;
                }
                unaff_x26 = (long *)((long)plVar8 - uVar12 * (long)plVar13);
              }
            }
          }
          lVar10 = *plVar1;
          plVar8 = *(long **)(lVar10 + (long)unaff_x26 * 8);
          if (plVar8 == (long *)0x0) {
            *plVar6 = *plVar2;
            *plVar2 = (long)plVar6;
            *(long **)(lVar10 + (long)unaff_x26 * 8) = plVar2;
            if (*plVar6 != 0) {
              plVar8 = *(long **)(*plVar6 + 8);
              if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
                plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
              }
              else if (plVar13 <= plVar8) {
                uVar12 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar12 = (ulong)plVar8 / (ulong)plVar13;
                }
                plVar8 = (long *)((long)plVar8 - uVar12 * (long)plVar13);
              }
              plVar8 = (long *)(*plVar1 + (long)plVar8 * 8);
              goto LAB_10a4d8514;
            }
          }
          else {
            *plVar6 = *plVar8;
LAB_10a4d8514:
            *plVar8 = (long)plVar6;
          }
          *(long *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) + 1;
LAB_10a4d8524:
          if (lStack_128 < 0) {
            __ZdlPv(lStack_138);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)plVar5);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      if (lStack_a0 != 0) {
        lStack_98 = lStack_a0;
        __ZdlPv();
      }
      if (cStack_b9 < '\0') {
        __ZdlPv(auStack_d0[0]);
      }
      if (cStack_d1 < '\0') {
        __ZdlPv(auStack_e8[0]);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      iVar11 = iVar11 + 1;
    } while (iVar11 != (int)plVar3);
  }
  return;
}



/* Entry: 10a4d867c; end: 10a4d87e3;  */

void FUN_10a4d867c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8290);
    func_0x00010a4d7c3c(plVar1 + 2,param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8078);
    plVar2 = plVar1 + 0x12;
    while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be8078);
      func_0x00010a4d7b00(plVar2 + 2,param_2);
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  return;
}



/* Entry: 10a4d87e4; end: 10a4d886f;  */

void FUN_10a4d87e4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 uStack_49;
  long *plStack_48;
  
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    plStack_48 = param_2 + 2;
    lVar1 = param_1 + 0x10;
    FUN_10a507b84(lVar1,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
    for (plVar2 = (long *)param_2[0x12]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      FUN_10a22f5ac(lVar1 + 0x80,plVar2 + 2,plVar2 + 2);
    }
  }
  return;
}



/* Entry: 10a4d8870; end: 10a4d898b;  */

void FUN_10a4d8870(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  param_1 = param_1 + 0x10;
  lStack_28 = param_2;
  FUN_10a507b84(param_1,param_2,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22f5ac(param_1 + 0x80,param_2 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 10a4d898c; end: 10a4d8a23;  */

void FUN_10a4d898c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_40 = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_38,*param_3,param_3[1]);
  }
  else {
    uStack_30 = param_3[1];
    uStack_38 = *param_3;
    lStack_28 = param_3[2];
  }
  FUN_10a4f29a8(param_1,param_2 + 0x58,&lStack_40);
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  return;
}



/* Entry: 10a4d8a24; end: 10a4d8ba7;  */

void FUN_10a4d8a24(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long lStack_60;
  code *pcStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x58);
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    plVar9 = (long *)(lVar4 + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = *(long **)(param_1 + 0x68);
  puStack_48 = puVar1;
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x28;
    __Znwm();
    *plVar9 = param_1;
    plVar9[1] = lVar3;
    plVar9[2] = lVar4;
    if (lVar4 != 0) {
      plVar8 = (long *)(lVar4 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar9[4] = 0x10a508458;
    pcStack_58 = FUN_10a508380;
    plStack_50 = plVar9;
    (**(code **)*puVar1)(puVar1,&pcStack_58);
  }
  else {
    lStack_60 = 0;
    (**(code **)(*plVar9 + 0x28))(plVar9,0,&lStack_60);
    if (lStack_60 != 0) {
      func_0x0001092af97c(&lStack_60);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a4d8b84);
      (*pcVar7)();
    }
    plVar8 = (long *)0x30;
    __Znwm();
    *plVar8 = param_1;
    plVar8[1] = lVar3;
    plVar8[2] = lVar4;
    if (lVar4 != 0) {
      plVar2 = (long *)(lVar4 + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar8[4] = (long)FUN_10a508424;
    plVar8[5] = (long)plVar9;
    pcStack_58 = (code *)0x10a508350;
    plStack_50 = plVar8;
    (**(code **)*puVar1)(puVar1,&pcStack_58);
    __ZNSt13exception_ptrD1Ev(&lStack_60);
  }
  lStack_60 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_60);
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar4);
  }
  return;
}



/* Entry: 10a4d8ba8; end: 10a4d8e97;  */

void FUN_10a4d8ba8(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float afStack_c8 [4];
  undefined1 *apuStack_b8 [4];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  long lStack_18;
  ulong uVar12;
  
  lVar4 = 0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0x3f80000000000000;
  apuStack_b8[0] = auStack_38;
  apuStack_b8[1] = auStack_58;
  apuStack_b8[2] = auStack_78;
  apuStack_b8[3] = auStack_98;
  param_1[5] = 0x3f800000;
  param_1[4] = 0;
  param_1[7] = 0x3f80000000000000;
  param_1[6] = 0;
  do {
    puVar6 = apuStack_b8[lVar4];
    puVar7 = (undefined4 *)(puVar6 + 0x10);
    lVar8 = 4;
    puVar11 = param_2;
    do {
      puVar7[-4] = *(undefined4 *)puVar11;
      if (lVar4 + lVar8 == 4) {
        *(undefined4 *)(puVar6 + lVar4 * 4 + 0x10) = 0x3f800000;
      }
      else {
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
      puVar11 = puVar11 + 2;
    } while (lVar8 != 0);
    lVar4 = lVar4 + 1;
    param_2 = (undefined8 *)((long)param_2 + 4);
  } while (lVar4 != 4);
  lVar4 = 0;
  do {
    fVar14 = ABS(*(float *)apuStack_b8[lVar4]);
    lVar8 = 4;
    do {
      fVar15 = ABS(*(float *)((long)apuStack_b8[lVar4] + lVar8));
      if (fVar15 <= fVar14) {
        fVar15 = fVar14;
      }
      fVar14 = fVar15;
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x10);
    afStack_c8[lVar4] = fVar14;
    if (fVar14 == 0.0) goto LAB_10a4d8e70;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  lVar8 = 0;
  uVar5 = 0;
  lVar4 = 1;
  do {
    puVar6 = apuStack_b8[uVar5];
    fVar14 = afStack_c8[uVar5];
    uVar12 = uVar5;
    if (uVar5 < 3) {
      fVar15 = ABS(*(float *)(puVar6 + uVar5 * 4) / fVar14);
      lVar3 = lVar4;
      do {
        fVar16 = ABS(*(float *)(apuStack_b8[lVar3] + uVar5 * 4) / afStack_c8[lVar3]);
        uVar9 = (uint)lVar3;
        if (fVar16 <= fVar15) {
          uVar9 = (uint)uVar12;
        }
        uVar12 = (ulong)uVar9;
        if (fVar16 <= fVar15) {
          fVar16 = fVar15;
        }
        fVar15 = fVar16;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 4);
    }
    if (uVar5 != (uVar12 & 0xffffffff)) {
      iVar10 = (int)uVar12;
      apuStack_b8[uVar5] = apuStack_b8[iVar10];
      apuStack_b8[iVar10] = puVar6;
      afStack_c8[uVar5] = afStack_c8[iVar10];
      afStack_c8[iVar10] = fVar14;
    }
    if (uVar5 < 3) {
      puVar6 = apuStack_b8[uVar5];
      lVar3 = lVar4;
      do {
        puVar13 = apuStack_b8[lVar3];
        fVar14 = *(float *)(puVar13 + uVar5 * 4);
        fVar15 = *(float *)(puVar6 + uVar5 * 4);
        *(undefined4 *)(puVar13 + uVar5 * 4) = 0;
        lVar2 = lVar8;
        do {
          *(float *)(puVar13 + lVar2 + 4) =
               *(float *)(puVar13 + lVar2 + 4) + *(float *)(puVar6 + lVar2 + 4) * (-fVar14 / fVar15)
          ;
          lVar2 = lVar2 + 4;
        } while (lVar2 != 0x1c);
        lVar3 = lVar3 + 1;
        param_2 = (undefined8 *)0x1c;
      } while (lVar3 != 4);
    }
    uVar5 = uVar5 + 1;
    lVar4 = lVar4 + 1;
    lVar8 = lVar8 + 4;
  } while (uVar5 != 4);
  if (*(float *)(apuStack_b8[3] + 0xc) != 0.0) {
    lVar4 = 0;
    uVar5 = 3;
    do {
      puVar6 = apuStack_b8[uVar5];
      lVar8 = lVar4;
      uVar12 = uVar5;
      do {
        puVar13 = apuStack_b8[uVar12 - 1 & 0xffffffff];
        fVar14 = *(float *)(puVar6 + uVar5 * 4);
        fVar15 = *(float *)(puVar13 + uVar5 * 4);
        lVar3 = lVar8;
        do {
          *(float *)(puVar13 + lVar3 + 0xc) =
               *(float *)(puVar13 + lVar3 + 0xc) +
               *(float *)(puVar6 + lVar3 + 0xc) * (-fVar15 / fVar14);
          lVar3 = lVar3 + 4;
        } while (lVar3 != 0x14);
        lVar8 = lVar8 + -4;
        bVar1 = 1 < (long)uVar12;
        uVar12 = uVar12 - 1;
      } while (bVar1);
      lVar4 = lVar4 + -4;
      bVar1 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar1 && uVar5 != 0);
    lVar4 = 0;
    do {
      lVar8 = 0;
      puVar6 = apuStack_b8[lVar4];
      fVar14 = *(float *)(puVar6 + lVar4 * 4);
      do {
        *(float *)((long)param_1 + lVar8 * 4) = *(float *)(puVar6 + lVar8 + 0x10) / fVar14;
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x10);
      lVar4 = lVar4 + 1;
      param_1 = (undefined8 *)((long)param_1 + 4);
      param_2 = (undefined8 *)0x14;
    } while (lVar4 != 4);
  }
LAB_10a4d8e70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = *(undefined8 *)(param_3 + 0x1d4);
  uStack_140 = *(undefined8 *)(param_3 + 0x1cc);
  uStack_128 = *(undefined8 *)(param_3 + 0x1e4);
  uStack_130 = *(undefined8 *)(param_3 + 0x1dc);
  uStack_118 = *(undefined8 *)(param_3 + 500);
  uStack_120 = *(undefined8 *)(param_3 + 0x1ec);
  uStack_108 = *(undefined8 *)(param_3 + 0x204);
  uStack_110 = *(undefined8 *)(param_3 + 0x1fc);
  FUN_10a4f5170(&uStack_140,param_4);
  param_2[1] = uStack_138;
  *param_2 = uStack_140;
  param_2[3] = uStack_128;
  param_2[2] = uStack_130;
  param_2[5] = uStack_118;
  param_2[4] = uStack_120;
  param_2[7] = uStack_108;
  param_2[6] = uStack_110;
  FUN_10a4f5170(param_2,param_3 + 0xc0);
  lVar4 = 0;
  uStack_140 = *(undefined8 *)(param_3 + 0x180);
  uStack_138._0_4_ = *(undefined4 *)(param_3 + 0x188);
  do {
    *(float *)((long)&uStack_140 + lVar4) = -*(float *)((long)&uStack_140 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  uStack_138 = CONCAT44(uStack_138._4_4_,(undefined4)uStack_138);
  FUN_10a4d8f50(param_2,&uStack_140);
  return;
}



/* Entry: 10a4d8e98; end: 10a4d8f4f;  */

void FUN_10a4d8e98(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *(undefined8 *)(param_2 + 0x1d4);
  uStack_70 = *(undefined8 *)(param_2 + 0x1cc);
  uStack_58 = *(undefined8 *)(param_2 + 0x1e4);
  uStack_60 = *(undefined8 *)(param_2 + 0x1dc);
  uStack_48 = *(undefined8 *)(param_2 + 500);
  uStack_50 = *(undefined8 *)(param_2 + 0x1ec);
  uStack_38 = *(undefined8 *)(param_2 + 0x204);
  uStack_40 = *(undefined8 *)(param_2 + 0x1fc);
  FUN_10a4f5170(&uStack_70,param_3);
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  FUN_10a4f5170(param_1,param_2 + 0xc0);
  lVar1 = 0;
  uStack_70 = *(undefined8 *)(param_2 + 0x180);
  uStack_68._0_4_ = *(undefined4 *)(param_2 + 0x188);
  do {
    *(float *)((long)&uStack_70 + lVar1) = -*(float *)((long)&uStack_70 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0xc);
  uStack_68 = CONCAT44(uStack_68._4_4_,(undefined4)uStack_68);
  FUN_10a4d8f50(param_1,&uStack_70);
  return;
}



/* Entry: 10a4d8f50; end: 10a4d8fa3;  */

void FUN_10a4d8f50(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  param_1[6] = CONCAT44((float)((ulong)param_1[6] >> 0x20) -
                        ((float)((ulong)param_1[2] >> 0x20) * fVar2 +
                         (float)((ulong)*param_1 >> 0x20) * fVar1 +
                        (float)((ulong)param_1[4] >> 0x20) * fVar3),
                        (float)param_1[6] -
                        ((float)param_1[2] * fVar2 + (float)*param_1 * fVar1 +
                        (float)param_1[4] * fVar3));
  *(float *)(param_1 + 7) =
       *(float *)(param_1 + 7) -
       (*(float *)(param_1 + 3) * fVar2 + *(float *)(param_1 + 1) * fVar1 +
       *(float *)(param_1 + 5) * fVar3);
  return;
}



/* Entry: 10a4d8fa4; end: 10a4d906b;  */

void FUN_10a4d8fa4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  float fStack_28;
  undefined4 uStack_24;
  
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  fVar1 = *(float *)(param_2 + 0x180);
  fVar2 = *(float *)(param_2 + 0x184);
  fVar3 = *(float *)(param_2 + 0x188);
  uStack_30 = CONCAT44((float)((ulong)param_3[6] >> 0x20) -
                       ((float)((ulong)uStack_50 >> 0x20) * fVar2 +
                        (float)((ulong)uStack_60 >> 0x20) * fVar1 +
                       (float)((ulong)uStack_40 >> 0x20) * fVar3),
                       (float)param_3[6] -
                       ((float)uStack_50 * fVar2 + (float)uStack_60 * fVar1 +
                       (float)uStack_40 * fVar3));
  fStack_28 = (float)param_3[7];
  _fStack_28 = CONCAT44((int)((ulong)param_3[7] >> 0x20),
                        fStack_28 -
                        ((float)uStack_48 * fVar2 + (float)uStack_58 * fVar1 +
                        (float)uStack_38 * fVar3));
  uStack_98 = *(undefined8 *)(param_2 + 0x194);
  uStack_a0 = *(undefined8 *)(param_2 + 0x18c);
  uStack_88 = *(undefined8 *)(param_2 + 0x1a4);
  uStack_90 = *(undefined8 *)(param_2 + 0x19c);
  uStack_78 = *(undefined8 *)(param_2 + 0x1b4);
  uStack_80 = *(undefined8 *)(param_2 + 0x1ac);
  uStack_68 = *(undefined8 *)(param_2 + 0x1c4);
  uStack_70 = *(undefined8 *)(param_2 + 0x1bc);
  FUN_10a4f5170(&uStack_a0,&uStack_60);
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  FUN_10a4f5170(param_1,param_2 + 0x80);
  return;
}



/* Entry: 10a4d906c; end: 10a4d916b;  */

void FUN_10a4d906c(undefined8 *param_1,float *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  fVar11 = *param_2;
  auVar8 = *(undefined1 (*) [16])(param_2 + 1);
  pauVar1 = (undefined1 (*) [12])(param_2 + 5);
  fVar13 = (float)*(undefined8 *)(param_2 + 7);
  fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 7) >> 0x20);
  auVar9 = *pauVar1;
  fVar26 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar12._12_4_ = fVar14;
  auVar12._0_12_ = *pauVar1;
  auVar12 = NEON_rev64(auVar12,4);
  auVar15._12_4_ = fVar14;
  auVar15._0_12_ = *pauVar1;
  auVar15 = NEON_ext(auVar12,auVar15,8,1);
  auVar17._12_4_ = fVar14;
  auVar17._0_12_ = *pauVar1;
  auVar22._12_4_ = fVar14;
  auVar22._0_12_ = *pauVar1;
  auVar12 = NEON_ext(auVar17,auVar22,4,1);
  auVar12 = NEON_ext(auVar12,auVar8,0xc,1);
  auVar17 = NEON_ext(auVar8,auVar8,0xc,1);
  fVar10 = auVar8._0_4_;
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = fVar10;
  auVar20._12_4_ = auVar17._12_4_;
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._8_4_ = auVar8._4_4_;
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._4_4_ = auVar17._0_4_;
  auVar19._0_4_ = fVar10;
  auVar21._0_12_ = auVar19._0_12_;
  auVar21._12_4_ = auVar17._4_4_;
  auVar2._12_4_ = fVar14;
  auVar2._0_12_ = *pauVar1;
  auVar17 = NEON_ext(auVar21,auVar2,4,1);
  fVar25 = fVar13 * -auVar12._0_4_ + auVar17._0_4_ * auVar15._0_4_;
  fVar23 = param_2[3];
  fVar16 = param_2[4];
  uVar7 = *(ulong *)(param_2 + 2);
  fVar27 = (float)uVar7;
  dVar24 = 1.0 / (double)((-fVar13 * fVar27 + fVar10 * fVar14) * -auVar12._12_4_ + fVar25 * fVar11 +
                         (-fVar16 * fVar27 + (float)*(undefined8 *)*pauVar1 * fVar10) * fVar26);
  fVar26 = -fVar26;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar7;
  auVar22 = NEON_ext(ZEXT416((uint)fVar11),auVar6,0xc,1);
  dVar4 = (double)(fVar27 * fVar26 + auVar15._0_4_ * fVar11) * dVar24;
  dVar5 = (double)(auVar9._0_4_ * -fVar11 + auVar22._4_4_ * (float)(uVar7 >> 0x20)) * dVar24;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulong)dVar5 >> 0x20);
  param_1[1] = CONCAT44((float)((double)(fVar14 * -auVar12._12_4_ + auVar17._12_4_ * auVar15._12_4_)
                               * dVar24),
                        (float)((double)(auVar8._12_4_ * -auVar12._8_4_ +
                                        auVar17._8_4_ * auVar15._8_4_) * dVar24));
  *param_1 = CONCAT44((float)((double)(fVar14 * -auVar12._4_4_ + auVar17._4_4_ * auVar15._4_4_) *
                             dVar24),(float)((double)fVar25 * dVar24));
  param_1[3] = CONCAT44((float)((double)(auVar9._8_4_ * -fVar11 + auVar15._12_4_ * fVar10) * dVar24)
                        ,(float)((double)(fVar16 * fVar26 + auVar22._8_4_ * fVar13) * dVar24));
  param_1[2] = CONCAT44((float)auVar3._8_8_,(float)dVar4);
  *(float *)(param_1 + 4) = (float)(dVar24 * (double)(fVar23 * -auVar12._4_4_ + fVar16 * fVar11));
  return;
}



/* Entry: 10a4d916c; end: 10a4d9237;  */

void FUN_10a4d916c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = *param_2;
  *(undefined4 *)(lVar3 + 200) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + 0xc0) = uVar1;
  if ((undefined8 *)(lVar3 + 0xc0) != param_2) {
    FUN_10a12d500(lVar3 + 0xd0,param_2[2],param_2[3],
                  ((long)(param_2[3] - param_2[2]) >> 2) * -0x5555555555555555);
  }
  uVar1 = param_2[5];
  *(undefined8 *)(lVar3 + 0xed) = *(undefined8 *)((long)param_2 + 0x2d);
  *(undefined8 *)(lVar3 + 0xe8) = uVar1;
  lVar3 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar3 + 0x1a1) & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x1a1) = 1;
    if (*(char *)(param_2 + 6) == '\x01') {
      uVar1 = param_2[5];
      if ((*(byte *)(lVar3 + 0x3d8) & 1) == 0) {
        *(undefined1 *)(lVar3 + 0x3d8) = 1;
      }
      *(undefined8 *)(lVar3 + 0x3d0) = uVar1;
      lVar2 = 0x1a0;
    }
    else {
      *(undefined4 *)(lVar3 + 0x3c4) = 0;
      lVar2 = 0x3c0;
    }
    *(undefined1 *)(lVar3 + lVar2) = 1;
  }
  return;
}



/* Entry: 10a4d9238; end: 10a4d927b;  */

void FUN_10a4d9238(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(char *)(param_2 + 1) == '\x01') {
    uVar2 = *param_2;
    if ((*(byte *)(lVar1 + 0x3d8) & 1) == 0) {
      *(undefined1 *)(lVar1 + 0x3d8) = 1;
    }
    *(undefined8 *)(lVar1 + 0x3d0) = uVar2;
    lVar3 = 0x1a0;
  }
  else {
    *(undefined4 *)(lVar1 + 0x3c4) = 0;
    lVar3 = 0x3c0;
  }
  *(undefined1 *)(lVar1 + lVar3) = 1;
  return;
}



/* Entry: 10a4d927c; end: 10a4d92db;  */

undefined8 * FUN_10a4d927c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110be8300;
  func_0x00010a508864(param_1 + 1);
  return param_1;
}



/* Entry: 10a4d92dc; end: 10a4d93d7;  */

void FUN_10a4d92dc(undefined8 param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  fVar1 = *(float *)(param_2 + 0x104);
  fVar2 = *(float *)(param_2 + 0x110);
  fVar3 = *(float *)(param_2 + 0x11c);
  fVar4 = *(float *)(param_2 + 0x108);
  fVar5 = *(float *)(param_2 + 0x114);
  fVar6 = *(float *)(param_2 + 0x120);
  fVar7 = *(float *)(param_2 + 0x10c);
  fVar8 = *(float *)(param_2 + 0x118);
  fVar9 = *(float *)(param_2 + 0x124);
  fVar10 = *param_3;
  fVar11 = param_3[1];
  fVar12 = param_3[2];
  fVar13 = param_3[3];
  fVar14 = param_3[4];
  fVar15 = param_3[5];
  fVar16 = param_3[6];
  fVar17 = param_3[7];
  fVar18 = param_3[8];
  fStack_50 = fVar2 * fVar13 + fVar1 * fVar10 + fVar3 * fVar16;
  fStack_4c = fVar2 * fVar14 + fVar1 * fVar11 + fVar3 * fVar17;
  fStack_48 = fVar2 * fVar15 + fVar1 * fVar12 + fVar3 * fVar18;
  fStack_40 = fVar5 * fVar13 + fVar4 * fVar10 + fVar6 * fVar16;
  fStack_3c = fVar5 * fVar14 + fVar4 * fVar11 + fVar6 * fVar17;
  fStack_38 = fVar5 * fVar15 + fVar4 * fVar12 + fVar6 * fVar18;
  fStack_30 = fVar8 * fVar13 + fVar7 * fVar10 + fVar9 * fVar16;
  fStack_2c = fVar8 * fVar14 + fVar7 * fVar11 + fVar9 * fVar17;
  uStack_44 = 0;
  uStack_34 = 0;
  fStack_28 = fVar8 * fVar15 + fVar7 * fVar12 + fVar9 * fVar18;
  uStack_1c = 0;
  uStack_24 = 0;
  uStack_14 = 0x3f800000;
  func_0x000109519fd0(param_1,&fStack_50,param_2 + 0x128);
  return;
}



/* Entry: 10a4d93d8; end: 10a4d9607;  */

void FUN_10a4d93d8(long param_1,undefined8 *param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  uint uVar11;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  float afStack_1a0 [4];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  
  fVar10 = *(float *)(param_2 + 1);
  uVar11 = *(uint *)((long)param_2 + 0x14);
  fVar4 = fVar10;
  _atan2f(fVar10,uVar11);
  uStack_a0 = 0xc0490fdb;
  fStack_98 = fVar4 + -3.1415927;
  ___sincosf_stret();
  fStack_80 = -fStack_98;
  uStack_9c = 0;
  uStack_7c = 0;
  uStack_8c = 0x3f800000;
  uStack_94 = 0;
  uStack_84 = 0;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_64 = 0x3f800000;
  uStack_d8 = 0;
  uStack_e0 = 0x3f800000;
  uStack_c8 = 0x3f800000;
  uStack_d0 = 0xb33bbd2e00000000;
  uStack_b8 = 0xb33bbd2e;
  uStack_c0 = 0xbf80000000000000;
  uStack_a8 = 0x3f80000000000000;
  uStack_b0 = 0;
  uStack_138 = *(undefined4 *)(param_2 + 4);
  uStack_160 = *param_2;
  uStack_158 = (ulong)(uint)fVar10;
  uStack_150 = *(undefined8 *)((long)param_2 + 0xc);
  uStack_148 = (ulong)uVar11;
  uStack_140 = param_2[3];
  fStack_12c = 0.0;
  fStack_128 = 0.0;
  uStack_134 = 0;
  fStack_130 = 0.0;
  uStack_124 = 0x3f800000;
  uStack_78 = uStack_a0;
  FUN_10a4f5170(&uStack_160,&uStack_e0);
  uStack_118 = *(undefined8 *)(param_1 + 0x378);
  uStack_120 = *(undefined8 *)(param_1 + 0x370);
  uStack_108 = *(undefined8 *)(param_1 + 0x388);
  uStack_110 = *(undefined8 *)(param_1 + 0x380);
  uStack_f8 = *(undefined8 *)(param_1 + 0x398);
  uStack_100 = *(undefined8 *)(param_1 + 0x390);
  uStack_e8 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_f0 = *(undefined8 *)(param_1 + 0x3a0);
  FUN_10a4f5170(&uStack_120,&uStack_160);
  uStack_158 = 0;
  uStack_160 = 0x3f800000;
  uStack_148 = 0;
  uStack_150 = 0x3f80000000000000;
  uStack_138 = 0x3f800000;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_124 = 0x3f800000;
  fStack_130 = -(float)*(undefined8 *)param_3;
  fStack_12c = -(float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fStack_128 = -param_3[2];
  uStack_218 = uStack_118;
  uStack_220 = uStack_120;
  uStack_208 = uStack_108;
  uStack_210 = uStack_110;
  uStack_1f8 = uStack_f8;
  uStack_200 = uStack_100;
  uStack_1e8 = uStack_e8;
  uStack_1f0 = uStack_f0;
  FUN_10a4f5170(&uStack_220,&uStack_a0);
  uStack_1d8 = uStack_218;
  uStack_1e0 = uStack_220;
  uStack_1c8 = uStack_208;
  uStack_1d0 = uStack_210;
  uStack_1b8 = uStack_1f8;
  uStack_1c0 = uStack_200;
  uStack_1a8 = uStack_1e8;
  uStack_1b0 = uStack_1f0;
  FUN_10a4f5170(&uStack_1e0,&uStack_160);
  uStack_188 = *(undefined8 *)(param_1 + 0x388);
  uStack_190 = *(undefined8 *)(param_1 + 0x380);
  afStack_1a0[2] = (float)*(undefined8 *)(param_1 + 0x378);
  afStack_1a0[3] = (float)((ulong)*(undefined8 *)(param_1 + 0x378) >> 0x20);
  afStack_1a0[0] = (float)*(undefined8 *)(param_1 + 0x370);
  afStack_1a0[1] = (float)((ulong)*(undefined8 *)(param_1 + 0x370) >> 0x20);
  uStack_178 = *(undefined8 *)(param_1 + 0x398);
  uStack_180 = *(undefined8 *)(param_1 + 0x390);
  uStack_168 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_170 = *(undefined8 *)(param_1 + 0x3a0);
  FUN_10a4f5170(afStack_1a0,&uStack_1e0);
  lVar3 = 0;
  uVar7 = *(undefined8 *)(param_3 + 1);
  uVar2 = CONCAT44(afStack_1a0[3],afStack_1a0[2]);
  uVar1 = CONCAT44(afStack_1a0[1],afStack_1a0[0]);
  afStack_1a0[0] = *param_3;
  uVar5 = NEON_rev64(uVar7,4);
  afStack_1a0[1] = (float)uVar5;
  afStack_1a0[2] = (float)((ulong)uVar5 >> 0x20);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x10c) = uVar6;
  *(undefined8 *)(param_1 + 0x104) = uVar5;
  *(undefined8 *)(param_1 + 0x11c) = uVar9;
  *(undefined8 *)(param_1 + 0x114) = uVar8;
  *(undefined8 *)(param_1 + 0x130) = uVar2;
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  *(undefined8 *)(param_1 + 0x140) = uStack_188;
  *(undefined8 *)(param_1 + 0x138) = uStack_190;
  *(undefined8 *)(param_1 + 0x150) = uStack_178;
  *(undefined8 *)(param_1 + 0x148) = uStack_180;
  *(undefined8 *)(param_1 + 0x160) = uStack_168;
  *(undefined8 *)(param_1 + 0x158) = uStack_170;
  fVar4 = 0.0;
  *(int *)(param_1 + 0x16c) = (int)uVar7;
  do {
    fVar4 = fVar4 + *(float *)((long)afStack_1a0 + lVar3) * *(float *)((long)afStack_1a0 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0xc);
  *(float *)(param_1 + 0x168) = SQRT(fVar4);
  return;
}



/* Entry: 10a4d9608; end: 10a4d97f3;  */

undefined8
FUN_10a4d9608(float param_1,float param_2,long param_3,undefined8 param_4,int param_5,
             undefined8 *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  float afStack_80 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  fVar8 = 0.15;
  if (*(char *)(param_3 + 0xf4) == '\0') {
    fVar8 = 0.05;
  }
  if (param_5 == 0) {
    FUN_10a4d8e98(afStack_80,param_3 + 0x1a4,param_4);
    uStack_90 = uStack_50;
    uStack_88._0_4_ = (float)uStack_48;
  }
  else if (param_5 == 1) {
    uStack_68 = *(undefined8 *)(param_3 + 0x388);
    uStack_70 = *(undefined8 *)(param_3 + 0x380);
    afStack_80[2] = (float)*(undefined8 *)(param_3 + 0x378);
    afStack_80[3] = (float)((ulong)*(undefined8 *)(param_3 + 0x378) >> 0x20);
    afStack_80[0] = (float)*(undefined8 *)(param_3 + 0x370);
    afStack_80[1] = (float)((ulong)*(undefined8 *)(param_3 + 0x370) >> 0x20);
    uStack_58 = *(undefined8 *)(param_3 + 0x398);
    uStack_60 = *(undefined8 *)(param_3 + 0x390);
    uStack_48 = *(undefined8 *)(param_3 + 0x3a8);
    uStack_50 = *(undefined8 *)(param_3 + 0x3a0);
    FUN_10a4f5170(afStack_80,param_4);
    uStack_b8 = CONCAT44(afStack_80[3],afStack_80[2]);
    uStack_c0 = CONCAT44(afStack_80[1],afStack_80[0]);
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    FUN_10a4f5170(&uStack_c0,param_3 + 0x264);
  }
  else {
    uStack_68 = *(undefined8 *)(param_3 + 0x388);
    uStack_70 = *(undefined8 *)(param_3 + 0x380);
    afStack_80[2] = (float)*(undefined8 *)(param_3 + 0x378);
    afStack_80[3] = (float)((ulong)*(undefined8 *)(param_3 + 0x378) >> 0x20);
    afStack_80[0] = (float)*(undefined8 *)(param_3 + 0x370);
    afStack_80[1] = (float)((ulong)*(undefined8 *)(param_3 + 0x370) >> 0x20);
    uStack_58 = *(undefined8 *)(param_3 + 0x398);
    uStack_60 = *(undefined8 *)(param_3 + 0x390);
    uStack_48 = *(undefined8 *)(param_3 + 0x3a8);
    uStack_50 = *(undefined8 *)(param_3 + 0x3a0);
    FUN_10a4f5170(afStack_80,param_4);
    uStack_b8._0_4_ = afStack_80[2];
    uStack_b8._4_4_ = afStack_80[3];
    uStack_c0._0_4_ = afStack_80[0];
    uStack_c0._4_4_ = afStack_80[1];
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    uStack_88 = uStack_48;
    uStack_90 = uStack_50;
    FUN_10a4f5170(&uStack_c0,param_3 + 0x264);
    fVar6 = *(float *)(param_3 + 0x3b4);
    fVar7 = *(float *)(param_3 + 0x3b8);
    fVar9 = *(float *)(param_3 + 0x3bc);
    fVar5 = (float)((ulong)uStack_88 >> 0x20) +
            (float)((ulong)uStack_a8 >> 0x20) * fVar7 + uStack_b8._4_4_ * fVar6 +
            (float)((ulong)uStack_98 >> 0x20) * fVar9;
    uStack_90 = CONCAT44(((float)((ulong)uStack_90 >> 0x20) +
                         (float)((ulong)uStack_b0 >> 0x20) * fVar7 + uStack_c0._4_4_ * fVar6 +
                         (float)((ulong)uStack_a0 >> 0x20) * fVar9) / fVar5,
                         ((float)uStack_90 +
                         (float)uStack_b0 * fVar7 + (float)uStack_c0 * fVar6 +
                         (float)uStack_a0 * fVar9) / fVar5);
    uStack_88._0_4_ =
         ((float)uStack_88 +
         (float)uStack_a8 * fVar7 + (float)uStack_b8 * fVar6 + (float)uStack_98 * fVar9) / fVar5;
  }
  afStack_80[0] = (float)uStack_90;
  afStack_80[1] = (float)((ulong)uStack_90 >> 0x20);
  afStack_80[2] = (float)uStack_88;
  if (1.1754944e-38 < (float)uStack_88) {
    lVar4 = 0;
    do {
      *(float *)((long)afStack_80 + lVar4) = *(float *)((long)afStack_80 + lVar4) / (float)uStack_88
      ;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0xc);
    fVar5 = (float)*(undefined8 *)(param_3 + 0xa4) * afStack_80[1] +
            (float)*(undefined8 *)(param_3 + 0x98) * afStack_80[0] +
            (float)*(undefined8 *)(param_3 + 0xb0) * afStack_80[2];
    fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0xa4) >> 0x20) * afStack_80[1] +
            (float)((ulong)*(undefined8 *)(param_3 + 0x98) >> 0x20) * afStack_80[0] +
            (float)((ulong)*(undefined8 *)(param_3 + 0xb0) >> 0x20) * afStack_80[2];
    fVar7 = param_2 * fVar8;
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (param_1 * fVar8 < fVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar6) && !NAN(fVar7)) {
        bVar1 = fVar6 < fVar7;
        bVar2 = fVar6 == fVar7;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      param_2 = param_2 * (1.0 - fVar8);
      bVar1 = false;
      if ((fVar5 < param_1 * (1.0 - fVar8)) && (bVar1 = false, !NAN(fVar6) && !NAN(param_2))) {
        bVar1 = fVar6 < param_2;
      }
      if (bVar1) {
        *param_6 = CONCAT44(fVar6,fVar5);
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10a4d97f4; end: 10a4d9a93;  */

bool FUN_10a4d97f4(long param_1,float *param_2,undefined8 *param_3)

{
  char cVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  undefined8 uStack_50;
  float fStack_48;
  
  if ((bRam00000001137eb268 & 1) == 0) {
    iVar3 = 0x137eb268;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam00000001137eb250 = 0x3db27ebe;
      ___cxa_guard_release(0x1137eb268);
    }
  }
  if ((bRam00000001137eb270 & 1) == 0) {
    iVar3 = 0x137eb270;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uRam00000001137eb254 = 0xbf3504f3;
      ___cxa_guard_release(0x1137eb270);
    }
  }
  cVar1 = *(char *)(param_1 + 0xf4);
  fVar5 = *param_2;
  fVar6 = param_2[1];
  FUN_10a4d906c(&uStack_a0,param_1 + 0x98);
  lVar4 = 0;
  uStack_50 = CONCAT44((float)((ulong)uStack_88 >> 0x20) +
                       fStack_90 * fVar6 + (float)((ulong)uStack_a0 >> 0x20) * fVar5,
                       (float)uStack_88 + fStack_94 * fVar6 + (float)uStack_a0 * fVar5);
  fStack_48 = (float)uStack_80 + fVar6 * fStack_8c + fStack_98 * fVar5;
  fVar5 = 0.0;
  do {
    fVar5 = fVar5 + *(float *)((long)&uStack_50 + lVar4) * *(float *)((long)&uStack_50 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  if (1e-05 < SQRT(fVar5)) {
    lVar4 = 0;
    do {
      *(float *)((long)&uStack_50 + lVar4) = *(float *)((long)&uStack_50 + lVar4) / SQRT(fVar5);
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0xc);
  }
  uStack_d8 = *(undefined4 *)(param_3 + 1);
  uStack_c8 = *(undefined4 *)((long)param_3 + 0x14);
  uStack_b8 = *(undefined4 *)(param_3 + 4);
  uStack_e0 = *param_3;
  uStack_d0 = *(undefined8 *)((long)param_3 + 0xc);
  uStack_c0 = param_3[3];
  uStack_d4 = 0;
  uStack_c4 = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3f800000;
  uStack_a0 = *(undefined8 *)(param_1 + 0x370);
  uStack_88 = *(undefined8 *)(param_1 + 0x388);
  uStack_78 = *(undefined8 *)(param_1 + 0x398);
  uStack_80 = *(undefined8 *)(param_1 + 0x390);
  uStack_68 = *(undefined8 *)(param_1 + 0x3a8);
  uStack_70 = *(undefined8 *)(param_1 + 0x3a0);
  fStack_98 = (float)*(undefined8 *)(param_1 + 0x378);
  fStack_94 = (float)((ulong)*(undefined8 *)(param_1 + 0x378) >> 0x20);
  fStack_90 = (float)*(undefined8 *)(param_1 + 0x380);
  fStack_8c = (float)((ulong)*(undefined8 *)(param_1 + 0x380) >> 0x20);
  FUN_10a4f5170(&uStack_a0,&uStack_e0);
  lVar4 = 0;
  fVar5 = 0.0;
  uStack_68._4_4_ = uStack_68._4_4_ + ((uStack_88._4_4_ * 0.0 + fStack_94 * 0.0) - uStack_78._4_4_);
  uStack_60 = CONCAT44(((float)((ulong)uStack_70 >> 0x20) +
                       ((fStack_8c * 0.0 + (float)((ulong)uStack_a0 >> 0x20) * 0.0) -
                       (float)((ulong)uStack_80 >> 0x20))) / uStack_68._4_4_,
                       ((float)uStack_70 +
                       ((fStack_90 * 0.0 + (float)uStack_a0 * 0.0) - (float)uStack_80)) /
                       uStack_68._4_4_);
  fStack_58 = ((float)uStack_68 + (((float)uStack_88 * 0.0 + fStack_98 * 0.0) - (float)uStack_78)) /
              uStack_68._4_4_;
  do {
    fVar5 = fVar5 + *(float *)((long)&uStack_50 + lVar4) * *(float *)((long)&uStack_60 + lVar4);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0xc);
  pfVar2 = (float *)0x1137eb254;
  if (cVar1 == '\0') {
    pfVar2 = (float *)0x1137eb250;
  }
  return *pfVar2 < fVar5;
}



/* Entry: 10a4d9a94; end: 10a4d9bab;  */

bool FUN_10a4d9a94(long param_1,uint param_2)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  
  if (*(char *)(param_1 + 0x3c1) != '\x01') {
    return (param_2 & 2) == 0;
  }
  if ((param_2 >> 1 & 1) != 0) {
    FUN_10a4d9bac(param_1 + 0x170,0);
    return false;
  }
  FUN_10a4d9bac(param_1 + 0x170,(param_2 & 0x20) == 0);
  uVar6 = *(ulong *)(param_1 + 0x198);
  if (9 < uVar6) {
    uVar6 = uVar6 - 1;
    uVar10 = *(long *)(param_1 + 400) + 1;
    *(ulong *)(param_1 + 400) = uVar10;
    *(ulong *)(param_1 + 0x198) = uVar6;
    if (uVar10 < 0x2000) goto LAB_10a4d9b1c;
    __ZdlPv(**(undefined8 **)(param_1 + 0x178));
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 8;
    uVar6 = *(ulong *)(param_1 + 0x198);
    *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + -0x1000;
  }
  if (uVar6 < 8) {
    return false;
  }
LAB_10a4d9b1c:
  lVar2 = *(long *)(param_1 + 0x178);
  if (*(long *)(param_1 + 0x180) != lVar2) {
    uVar10 = *(ulong *)(param_1 + 400);
    puVar4 = (undefined8 *)(lVar2 + (uVar10 >> 0xc) * 8);
    pbVar5 = (byte *)*puVar4;
    pbVar8 = pbVar5 + (uVar10 & 0xfff);
    pbVar1 = (byte *)(*(long *)(lVar2 + (uVar10 + uVar6 >> 0xc) * 8) + (uVar10 + uVar6 & 0xfff));
    if (pbVar8 != pbVar1) {
      uVar9 = 0;
      do {
        pbVar7 = pbVar8 + 1;
        bVar3 = *pbVar8;
        pbVar8 = pbVar7;
        if ((long)pbVar7 - (long)pbVar5 == 0x1000) {
          puVar4 = puVar4 + 1;
          pbVar5 = (byte *)*puVar4;
          pbVar8 = pbVar5;
        }
        uVar9 = uVar9 + bVar3;
      } while (pbVar8 != pbVar1);
      return 7 < uVar9;
    }
  }
  return false;
}



/* Entry: 10a4d9bac; end: 10a4d9d2f;  */

void FUN_10a4d9bac(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long *plStack_50;
  
  puVar4 = (undefined8 *)param_1[1];
  lVar6 = param_1[2];
  uVar2 = lVar6 - (long)puVar4;
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = (lVar6 - (long)puVar4) * 0x200 - 1;
  }
  uVar1 = param_1[4];
  lVar8 = param_1[5];
  uVar7 = lVar8 + uVar1;
  if (uVar5 != uVar7) goto LAB_10a4d9cc8;
  if (uVar1 < 0x1000) {
    lVar8 = param_1[3];
    uVar5 = lVar8 - *param_1;
    if (uVar2 < uVar5) {
      uVar3 = 0x1000;
      __Znwm(0x1000);
      if (lVar8 == lVar6) {
        FUN_10a508efc(param_1,uVar3);
        puVar4 = (undefined8 *)param_1[1];
        goto LAB_10a4d9c00;
      }
      func_0x00010a508e00();
    }
    else {
      lVar6 = (long)uVar5 >> 2;
      if (lVar8 == *param_1) {
        lVar6 = 1;
      }
      lVar8 = param_2;
      plStack_50 = param_1;
      FUN_10a5091fc();
      lStack_68 = lVar6 + uVar2;
      lStack_58 = lVar6 + lVar8 * 8;
      uVar3 = 0x1000;
      lStack_70 = lVar6;
      lStack_60 = lStack_68;
      __Znwm(0x1000);
      FUN_10a508ffc(&lStack_70,uVar3);
      lVar6 = param_1[2];
      while (lVar6 != param_1[1]) {
        lVar6 = lVar6 + -8;
        FUN_10a5090f8(&lStack_70,lVar6);
      }
      lVar6 = *param_1;
      param_1[1] = lStack_68;
      *param_1 = lStack_70;
      param_1[3] = lStack_58;
      param_1[2] = lStack_60;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = uVar1 - 0x1000;
LAB_10a4d9c00:
    uVar3 = *puVar4;
    param_1[1] = (long)(puVar4 + 1);
    FUN_10a508d04(param_1,uVar3);
  }
  puVar4 = (undefined8 *)param_1[1];
  lVar8 = param_1[5];
  uVar7 = param_1[4] + lVar8;
LAB_10a4d9cc8:
  *(char *)(puVar4[uVar7 >> 0xc] + (uVar7 & 0xfff)) = (char)param_2;
  param_1[5] = lVar8 + 1;
  return;
}



/* Entry: 10a4d9d30; end: 10a4d9dff;  */

undefined4
FUN_10a4d9d30(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar2 = -*(float *)(param_4 + 0x18);
  uVar6 = 0;
  _atan2f(fVar2,*(undefined4 *)(param_4 + 0x20));
  fVar3 = *(float *)(param_4 + 0x1c);
  fVar5 = 1.0;
  if (-1.0 <= fVar3) {
    fVar5 = -fVar3;
  }
  fVar4 = -1.0;
  if (fVar3 <= 1.0) {
    fVar4 = fVar5;
  }
  _asinf(fVar4);
  fVar5 = *(float *)(param_4 + 4);
  _atan2f(fVar5,*(undefined4 *)(param_4 + 0x10));
  func_0x000109672874(-fVar5,-fVar4,CONCAT44(uVar6,fVar2),*param_5,param_5[1],param_5[2],
                      **(undefined8 **)(param_1 + 8),param_2,param_3,1);
  puVar1 = (undefined4 *)**(undefined8 **)(param_1 + 8);
  *(ushort *)(puVar1 + 0x255) = *(ushort *)(puVar1 + 0x255) | 0x200;
  return *puVar1;
}



/* Entry: 10a4d9e00; end: 10a4da463;  */

void FUN_10a4d9e00(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4,long *param_5,
                  undefined8 *param_6,undefined8 *param_7,uint *param_8,long *param_9,long *param_10
                  )

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  bool bVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  int *piVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined1 uVar20;
  int iVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined **ppuVar24;
  long *plVar25;
  undefined4 uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  undefined1 *puVar31;
  int iVar32;
  undefined8 *puVar33;
  int iVar34;
  uint *puVar35;
  ulong *puVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  ulong unaff_d10;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 ****ppppuStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined7 uStack_398;
  char cStack_391;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined7 uStack_350;
  char cStack_349;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined8 ****ppppuStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  char *pcStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  long lStack_1f0;
  uint auStack_1e8 [14];
  long lStack_1b0;
  long alStack_1a8 [2];
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  float fStack_118;
  long lStack_110;
  float fStack_108;
  undefined8 uStack_104;
  float fStack_fc;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long lStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar25 = param_5;
  puVar33 = param_6;
  puVar15 = param_7;
  uStack_128 = param_1;
  uStack_124 = param_2;
  if ((int)param_5 != 0) {
    lStack_b0 = *(long *)(param_3 + 0x30);
    uStack_a8 = param_3[0x32];
    plVar25 = &lStack_b0;
    FUN_10a4d93d8(param_3,param_7);
  }
  if (param_3[0xf1] == 0) {
    puVar35 = (uint *)0x2;
  }
  else {
    if ((*(byte *)((long)param_3 + 0x3c1) & 1) == 0) {
      puVar15 = *(undefined8 **)(param_3 + 0x5e);
      puVar33 = *(undefined8 **)(param_3 + 0x60);
      param_3[0x66] = 0;
      param_3[0x67] = 0;
      lVar27 = (long)puVar33 - (long)puVar15;
      while (uVar30 = lVar27 >> 3, 2 < uVar30) {
        __ZdlPv(*puVar15);
        puVar33 = *(undefined8 **)(param_3 + 0x60);
        puVar15 = (undefined8 *)(*(long *)(param_3 + 0x5e) + 8);
        *(undefined8 **)(param_3 + 0x5e) = puVar15;
        lVar27 = (long)puVar33 - (long)puVar15;
      }
      if (uVar30 == 1) {
        uVar30 = 0x800;
LAB_10a4d9ee8:
        *(ulong *)(param_3 + 100) = uVar30;
      }
      else {
        if (uVar30 == 2) {
          uVar30 = 0x1000;
          goto LAB_10a4d9ee8;
        }
        uVar30 = *(ulong *)(param_3 + 100);
      }
      uVar28 = (ulong)lStack_b0 >> 8;
      lStack_b0 = CONCAT71((int7)uVar28,1);
      uVar28 = *(ulong *)(param_3 + 0x66);
      plVar25 = puVar15 + (uVar30 >> 0xc);
      if (uVar28 < 10) {
        if (puVar33 == puVar15) {
          puVar22 = (undefined1 *)0x0;
        }
        else {
          puVar22 = (undefined1 *)(*plVar25 + (uVar30 & 0xfff));
        }
        if (uVar28 != 0) {
          puVar31 = (undefined1 *)*plVar25;
          uVar30 = uVar28;
          do {
            puVar23 = puVar22 + 1;
            *puVar22 = 1;
            if ((long)puVar23 - (long)puVar31 == 0x1000) {
              plVar25 = plVar25 + 1;
              puVar23 = (undefined1 *)*plVar25;
              puVar31 = puVar23;
            }
            uVar30 = uVar30 - 1;
            puVar22 = puVar23;
          } while (uVar30 != 0);
        }
        FUN_10a5088e4(param_3 + 0x5c,10 - uVar28,&lStack_b0);
      }
      else {
        puVar31 = (undefined1 *)*plVar25;
        puVar22 = (undefined1 *)0x0;
        if (puVar33 != puVar15) {
          puVar22 = puVar31 + (uVar30 & 0xfff);
        }
        lVar27 = -10;
        do {
          puVar23 = puVar22 + 1;
          *puVar22 = 1;
          puVar22 = puVar23;
          if ((long)puVar23 - (long)puVar31 == 0x1000) {
            plVar25 = plVar25 + 1;
            puVar31 = (undefined1 *)*plVar25;
            puVar22 = puVar31;
          }
          bVar9 = lVar27 != -1;
          lVar27 = lVar27 + 1;
        } while (bVar9);
        plVar3 = puVar15 + (uVar28 + uVar30 >> 0xc);
        if ((long)puVar33 - (long)puVar15 == 0) {
          puVar23 = (undefined1 *)0x0;
        }
        else {
          puVar23 = (undefined1 *)(*plVar3 + (uVar28 + uVar30 & 0xfff));
        }
        if ((puVar23 != puVar22) &&
           (0 < (long)(puVar23 +
                      (long)(puVar31 +
                            ((((long)plVar3 - (long)plVar25) * 0x200 - (long)puVar22) - *plVar3)))))
        {
          lVar27 = 0;
          if (puVar33 != puVar15) {
            lVar27 = ((long)puVar33 - (long)puVar15) * 0x200 + -1;
          }
          lVar11 = uVar28 - (long)(puVar23 +
                                  (long)(puVar31 +
                                        ((((long)plVar3 - (long)plVar25) * 0x200 - (long)puVar22) -
                                        *plVar3)));
          *(long *)(param_3 + 0x66) = lVar11;
          if (0x1fff < (lVar27 - uVar30) - lVar11) {
            do {
              __ZdlPv(puVar33[-1]);
              puVar33 = (undefined8 *)(*(long *)(param_3 + 0x60) + -8);
              *(undefined8 **)(param_3 + 0x60) = puVar33;
              lVar27 = 0;
              if (puVar33 != *(undefined8 **)(param_3 + 0x5e)) {
                lVar27 = ((long)puVar33 - (long)*(undefined8 **)(param_3 + 0x5e)) * 0x200 + -1;
              }
            } while ((ulong)(lVar27 - (*(long *)(param_3 + 0x66) + *(long *)(param_3 + 100))) >> 0xd
                     != 0);
          }
        }
      }
    }
    param_3[0xf2] = 0;
    if ((char)param_3[0x3d] == '\x01') {
      if ((param_4 & 1) == 0) {
        uVar37 = param_3[0x5a];
        uVar19 = 3;
      }
      else {
        uVar19 = 3;
        uVar37 = 0x40400000;
      }
    }
    else {
      uVar19 = 0;
      lVar27 = 0xc4;
      if (param_4 == 0) {
        lVar27 = 0x16c;
      }
      uVar37 = *(uint *)((long)param_3 + lVar27);
    }
    func_0x000109672520(uVar37,0x3dcccccd,0x3d4ccccd,0x40a00000,**(undefined8 **)(param_3 + 2),
                        &uStack_128,param_5,param_5,uVar19);
    puVar15 = (undefined8 *)((long)param_7 + 0x24);
    puVar35 = param_3;
    puVar33 = param_7;
    FUN_10a4d9d30(param_3,param_9);
    plVar25 = param_10;
  }
  puVar10 = param_3;
  puVar18 = puVar35;
  FUN_10a4d9a94();
  if ((int)puVar10 != 0) {
    param_9 = &lStack_110;
    lVar11 = **(long **)(param_3 + 2);
    func_0x000109673688(lVar11,0);
    lVar27 = 0;
    iVar41 = 0;
    plVar25 = &lStack_168;
    do {
      lVar29 = 0;
      lVar1 = (long)iVar41;
      iVar41 = iVar41 + 4;
      do {
        *(undefined4 *)((long)plVar25 + lVar29) = *(undefined4 *)(lVar11 + lVar1 * 4 + lVar29);
        lVar29 = lVar29 + 4;
      } while (lVar29 != 0x10);
      lVar27 = lVar27 + 1;
      plVar25 = plVar25 + 2;
    } while (lVar27 != 4);
    if ((int)param_6 == 2) {
      lVar27 = 0;
      uVar30 = 0;
      do {
        puVar12 = (undefined8 *)
                  ((long)param_8 +
                  (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2) + 8);
        uVar19 = *puVar12;
        *(undefined8 *)((long)auStack_1e8 + lVar27) = puVar12[1];
        *(undefined8 *)((long)auStack_1e8 + lVar27 + -8) = uVar19;
        uVar30 = (long)(int)uVar30 + 4;
        lVar27 = lVar27 + 0x10;
      } while (lVar27 != 0x40);
      lStack_b0 = *(long *)(param_3 + 0xdc);
      lStack_98 = *(long *)(param_3 + 0xe2);
      uStack_a8 = (uint)*(long *)(param_3 + 0xde);
      uStack_a4 = (undefined4)((ulong)*(long *)(param_3 + 0xde) >> 0x20);
      uStack_a0 = (undefined4)*(long *)(param_3 + 0xe0);
      uStack_9c = (undefined4)((ulong)*(long *)(param_3 + 0xe0) >> 0x20);
      lStack_88 = *(long *)(param_3 + 0xe6);
      lStack_90 = *(long *)(param_3 + 0xe4);
      lStack_78 = *(long *)(param_3 + 0xea);
      lStack_80 = *(long *)(param_3 + 0xe8);
      FUN_10a4f5170(&lStack_b0,&lStack_1f0);
      alStack_1a8[0] = CONCAT44(uStack_a4,uStack_a8);
      alStack_1a8[1] = CONCAT44(uStack_9c,uStack_a0);
      lStack_1b0 = lStack_b0;
      lStack_198 = lStack_98;
      lStack_188 = lStack_88;
      lStack_190 = lStack_90;
      lStack_178 = lStack_78;
      uStack_180 = lStack_80;
      FUN_10a4f5170(&lStack_1b0,param_3 + 0x99);
      lStack_b0 = lStack_1b0;
      uStack_a4 = (undefined4)alStack_1a8[1];
      uStack_a0 = (undefined4)((ulong)alStack_1a8[1] >> 0x20);
      lStack_98 = lStack_190;
      uStack_a8 = (uint)alStack_1a8[0];
      uStack_9c = (undefined4)lStack_198;
      lStack_90 = CONCAT44(lStack_90._4_4_,(undefined4)lStack_188);
      lStack_d8 = lStack_168;
      uStack_cc = uStack_158;
      uStack_c0 = uStack_148;
      uStack_d0 = uStack_160;
      uStack_c4 = uStack_150;
      uStack_b8 = uStack_140;
      FUN_10a4d906c(&lStack_110,&lStack_b0);
      fStack_e0 = uStack_180._4_4_ * fStack_fc + fStack_108 * (float)uStack_180 +
                  fStack_f0 * (float)lStack_178;
      uStack_e8 = CONCAT44((float)((ulong)uStack_104 >> 0x20) * uStack_180._4_4_ +
                           (float)((ulong)lStack_110 >> 0x20) * (float)uStack_180 +
                           (float)((ulong)uStack_f8 >> 0x20) * (float)lStack_178,
                           (float)uStack_104 * uStack_180._4_4_ +
                           (float)lStack_110 * (float)uStack_180 +
                           (float)uStack_f8 * (float)lStack_178);
      FUN_10a4d906c(&lStack_110,&lStack_d8);
      lVar27 = 0;
      uStack_120 = CONCAT44((float)((ulong)uStack_104 >> 0x20) * fStack_134 +
                            (float)((ulong)lStack_110 >> 0x20) * fStack_138 +
                            (float)((ulong)uStack_f8 >> 0x20) * fStack_130,
                            (float)uStack_104 * fStack_134 + (float)lStack_110 * fStack_138 +
                            (float)uStack_f8 * fStack_130);
      fStack_118 = fStack_134 * fStack_fc + fStack_108 * fStack_138 + fStack_f0 * fStack_130;
      do {
        *(float *)((long)&uStack_e8 + lVar27) = -*(float *)((long)&uStack_e8 + lVar27);
        lVar27 = lVar27 + 4;
      } while (lVar27 != 0xc);
      lVar27 = 0;
      do {
        *(float *)((long)&uStack_120 + lVar27) = -*(float *)((long)&uStack_120 + lVar27);
        lVar27 = lVar27 + 4;
      } while (lVar27 != 0xc);
      lVar27 = 0;
      do {
        *(float *)((long)&uStack_e8 + lVar27) =
             *(float *)((long)&uStack_e8 + lVar27) - *(float *)((long)&uStack_120 + lVar27);
        lVar27 = lVar27 + 4;
      } while (lVar27 != 0xc);
      *(undefined8 *)(param_3 + 0xc9) = uStack_e8;
      param_3[0xcb] = (uint)fStack_e0;
    }
    else {
      param_3[0xca] = 0;
      param_3[0xcb] = 0;
      param_3[0xc9] = 0;
    }
    puVar18 = param_3 + 0x69;
    plVar25 = &lStack_168;
    FUN_10a4d8fa4(&lStack_b0);
    *(ulong *)(param_8 + 4) = CONCAT44(uStack_a4,uStack_a8);
    *(long *)(param_8 + 2) = lStack_b0;
    *(long *)(param_8 + 8) = lStack_98;
    *(ulong *)(param_8 + 6) = CONCAT44(uStack_9c,uStack_a0);
    *(long *)(param_8 + 0xc) = lStack_88;
    *(long *)(param_8 + 10) = lStack_90;
    *(long *)(param_8 + 0x10) = lStack_78;
    *(long *)(param_8 + 0xe) = lStack_80;
    *param_8 = (uint)((int)puVar35 == 0x2000 & (byte)param_3[0x3d]);
    puVar10 = (uint *)&lStack_168;
    FUN_10a4d8ba8(&lStack_b0);
    lVar27 = 0;
    uVar30 = 0;
    lStack_1f0 = lStack_80;
    auStack_1e8[0] = (uint)lStack_78;
    do {
      puVar12 = (undefined8 *)
                ((long)param_8 +
                (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2) + 8);
      uVar19 = *puVar12;
      *(undefined8 *)((long)alStack_1a8 + lVar27) = puVar12[1];
      *(undefined8 *)((long)alStack_1a8 + lVar27 + -8) = uVar19;
      uVar30 = (long)(int)uVar30 + 4;
      lVar27 = lVar27 + 0x10;
    } while (lVar27 != 0x40);
    lVar27 = 0;
    uVar43 = param_7[1];
    uVar19 = *param_7;
    uVar44 = param_7[3];
    uVar42 = param_7[2];
    param_3[0x49] = *(uint *)(param_7 + 4);
    *(undefined8 *)(param_3 + 0x43) = uVar43;
    *(undefined8 *)(param_3 + 0x41) = uVar19;
    *(undefined8 *)(param_3 + 0x47) = uVar44;
    *(undefined8 *)(param_3 + 0x45) = uVar42;
    *(long *)(param_3 + 0x4c) = alStack_1a8[0];
    *(long *)(param_3 + 0x4a) = lStack_1b0;
    *(long *)(param_3 + 0x50) = lStack_198;
    *(long *)(param_3 + 0x4e) = alStack_1a8[1];
    *(long *)(param_3 + 0x54) = lStack_188;
    *(long *)(param_3 + 0x52) = lStack_190;
    *(long *)(param_3 + 0x58) = lStack_178;
    *(long *)(param_3 + 0x56) = uStack_180;
    fVar39 = 0.0;
    param_3[0x5b] = (uint)lStack_78;
    do {
      fVar38 = *(float *)((long)auStack_1e8 + lVar27 + -8);
      fVar39 = fVar39 + fVar38 * fVar38;
      lVar27 = lVar27 + 4;
    } while (lVar27 != 0xc);
    param_3[0x5a] = (uint)SQRT(fVar39);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_388 = puVar33[1];
  puStack_390 = (undefined *)*puVar33;
  uStack_378 = puVar33[3];
  uStack_380 = puVar33[2];
  uStack_368 = puVar33[5];
  uStack_370 = puVar33[4];
  ppuVar16 = &puStack_390;
  FUN_10a4cace0(ppuVar16,puVar33);
  FUN_10ad055a0();
  if ((int)ppuVar16 != 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar16 == (undefined *)0x0) {
      ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppuVar16 = (undefined **)*ppuVar16;
      if ((ppuVar16 == (undefined **)0x0) ||
         ((**(code **)(*ppuVar16 + 0x18))(), ppuVar16 == (undefined **)0x0)) goto LAB_10a4da500;
      ppuVar24 = ppuVar16 + 7;
    }
    else {
      ppuVar24 = (undefined **)(*ppuVar16 + 8);
    }
    if (((uint)*(undefined8 *)(*ppuVar24 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&uStack_360,&UNK_10f65d0e1);
      func_0x000107c2b054(&ppppuStack_3a8,"");
      if (cStack_349 < '\0') {
        uStack_2e0 = "null";
        if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) != 0) {
          uStack_2e0 = uStack_360;
        }
      }
      else {
        uStack_2e0 = "null";
        if (cStack_349 != '\0') {
          uStack_2e0 = (char *)&uStack_360;
        }
      }
      if (cStack_391 < '\0') {
        uStack_320 = "null";
        if (CONCAT44(uStack_39c,uStack_3a0) != 0) {
          uStack_320 = (char *)ppppuStack_3a8;
        }
      }
      else {
        uStack_320 = "null";
        if (cStack_391 != '\0') {
          uStack_320 = (char *)&ppppuStack_3a8;
        }
      }
      FUN_10a224324(&uStack_2e0,&uStack_320);
      if (cStack_349 < '\0') {
        if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) == 0) goto LAB_10a4db4a0;
        func_0x000107c3192c(&uStack_2e0,uStack_360);
LAB_10a4db648:
        uVar20 = 1;
      }
      else {
        if (cStack_349 != '\0') {
          plStack_2d8 = (long *)CONCAT44(uStack_358._4_4_,(undefined4)uStack_358);
          uStack_2e0 = uStack_360;
          lStack_2d0 = CONCAT17(cStack_349,uStack_350);
          goto LAB_10a4db648;
        }
LAB_10a4db4a0:
        uVar20 = 0;
        uStack_2e0 = (char *)((ulong)uStack_2e0 & 0xffffffffffffff00);
      }
      lStack_2c8 = CONCAT71(lStack_2c8._1_7_,uVar20);
      if (cStack_391 < '\0') {
        if (CONCAT44(uStack_39c,uStack_3a0) == 0) goto LAB_10a4db674;
        func_0x000107c3192c(&uStack_320,ppppuStack_3a8);
LAB_10a4db768:
        uVar20 = 1;
      }
      else {
        if (cStack_391 != '\0') {
          uStack_318 = CONCAT44(uStack_39c,uStack_3a0);
          uStack_320 = (char *)ppppuStack_3a8;
          uStack_310 = CONCAT17(cStack_391,uStack_398);
          goto LAB_10a4db768;
        }
LAB_10a4db674:
        uVar20 = 0;
        uStack_320 = (char *)((ulong)uStack_320 & 0xffffffffffffff00);
      }
      uStack_308 = CONCAT71(uStack_308._1_7_,uVar20);
      FUN_10a234a0c(&uStack_2e0,&uStack_320);
      goto LAB_10a4db7f4;
    }
  }
LAB_10a4da500:
  iVar41 = (int)ppuVar16;
  uStack_3b0 = plVar25[2];
  iVar21 = (int)uStack_3b0;
  iVar32 = (int)(uStack_3b0 >> 0x20);
  if (((iVar21 < 0x501) && (iVar32 < 0x2d1)) && (iVar32 * iVar21 < 0xe1001)) {
    lStack_3c0 = plVar25[5];
    lStack_3b8 = plVar25[3];
  }
  else {
    if (iVar32 * 0x500 < iVar21 * 0x2d0) {
      uVar37 = 0;
      if (iVar21 != 0) {
        uVar37 = (iVar32 * 0x500) / iVar21;
      }
      uStack_3b0 = (ulong)uVar37 << 0x20 | 0x500;
      if ((uVar37 & 1) != 0) {
        uStack_3b0 = CONCAT44(uVar37 - 1,0x500);
      }
    }
    else {
      uVar37 = 0;
      if (iVar32 != 0) {
        uVar37 = (iVar21 * 0x2d0) / iVar32;
      }
      uStack_3b0 = (ulong)uVar37 | 0x2d000000000;
      if ((uVar37 & 1) != 0) {
        uStack_3b0 = CONCAT44(0x2d0,uVar37 - 1);
      }
    }
    puVar33 = *(undefined8 **)(*(long *)(puVar18 + 2) + 0x3e0);
    if (puVar33 == (undefined8 *)0x0) {
      FUN_10a1b498c(&uStack_2e0,*(undefined4 *)((long)plVar25 + 0x24),
                    *(undefined4 *)((long)plVar25 + 0x24));
      func_0x00010a343394(*(long *)(puVar18 + 2) + 0x3e0,&uStack_2e0);
      plVar3 = plStack_2d8;
      if (plStack_2d8 != (long *)0x0) {
        plVar2 = plStack_2d8 + 1;
        do {
          lVar27 = *plVar2;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *plVar2 = lVar27 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      puVar33 = *(undefined8 **)(*(long *)(puVar18 + 2) + 0x3e0);
    }
    puVar12 = puVar15;
    FUN_10a0ec6f0();
    uStack_320 = (char *)CONCAT44(uStack_320._4_4_,(int)puVar12);
    (**(code **)*puVar33)(&uStack_2e0,puVar33,plVar25,&uStack_320,&uStack_3b0);
    param_9 = plStack_2d8;
    iVar41 = (int)puVar33;
    lStack_3c0 = *(long *)((long)uStack_2e0 + 0x28);
    lStack_3b8 = *(long *)((long)uStack_2e0 + 0x18);
    if (plStack_2d8 != (long *)0x0) {
      plVar25 = plStack_2d8 + 1;
      do {
        lVar27 = *plVar25;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar9) {
          *plVar25 = lVar27 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar27 == 0) {
        (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
        plVar25 = param_9;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        iVar41 = (int)plVar25;
      }
    }
  }
  FUN_10ad055a0();
  if (iVar41 != 0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar16 == (undefined *)0x0) {
      ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar25 = (long *)*ppuVar16;
      if ((plVar25 == (long *)0x0) || ((**(code **)(*plVar25 + 0x18))(), plVar25 == (long *)0x0))
      goto LAB_10a4da69c;
      plVar25 = plVar25 + 7;
    }
    else {
      plVar25 = (long *)(*ppuVar16 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar25 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&uStack_360,&UNK_10f65d111);
      func_0x000107c2b054(&ppppuStack_3a8,"");
      if (cStack_349 < '\0') {
        uStack_2e0 = "null";
        if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) != 0) {
          uStack_2e0 = uStack_360;
        }
      }
      else {
        uStack_2e0 = "null";
        if (cStack_349 != '\0') {
          uStack_2e0 = (char *)&uStack_360;
        }
      }
      if (cStack_391 < '\0') {
        uStack_320 = "null";
        if (CONCAT44(uStack_39c,uStack_3a0) != 0) {
          uStack_320 = (char *)ppppuStack_3a8;
        }
      }
      else {
        uStack_320 = "null";
        if (cStack_391 != '\0') {
          uStack_320 = (char *)&ppppuStack_3a8;
        }
      }
      FUN_10a224324(&uStack_2e0,&uStack_320);
      if (cStack_349 < '\0') {
        if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) == 0) goto LAB_10a4db52c;
        func_0x000107c3192c(&uStack_2e0,uStack_360);
LAB_10a4db690:
        uVar20 = 1;
      }
      else {
        if (cStack_349 != '\0') {
          plStack_2d8 = (long *)CONCAT44(uStack_358._4_4_,(undefined4)uStack_358);
          uStack_2e0 = uStack_360;
          lStack_2d0 = CONCAT17(cStack_349,uStack_350);
          goto LAB_10a4db690;
        }
LAB_10a4db52c:
        uVar20 = 0;
        uStack_2e0 = (char *)((ulong)uStack_2e0 & 0xffffffffffffff00);
      }
      lStack_2c8 = CONCAT71(lStack_2c8._1_7_,uVar20);
      if (cStack_391 < '\0') {
        if (CONCAT44(uStack_39c,uStack_3a0) == 0) goto LAB_10a4db6bc;
        func_0x000107c3192c(&uStack_320,ppppuStack_3a8);
LAB_10a4db790:
        uVar20 = 1;
      }
      else {
        if (cStack_391 != '\0') {
          uStack_318 = CONCAT44(uStack_39c,uStack_3a0);
          uStack_320 = (char *)ppppuStack_3a8;
          uStack_310 = CONCAT17(cStack_391,uStack_398);
          goto LAB_10a4db790;
        }
LAB_10a4db6bc:
        uVar20 = 0;
        uStack_320 = (char *)((ulong)uStack_320 & 0xffffffffffffff00);
      }
      uStack_308 = CONCAT71(uStack_308._1_7_,uVar20);
      FUN_10a234a0c(&uStack_2e0,&uStack_320);
      goto LAB_10a4db7f4;
    }
  }
LAB_10a4da69c:
  lVar27 = *(long *)(puVar18 + 2);
  if (*(long *)(lVar27 + 8) == 0) {
LAB_10a4da6c4:
    if (*(int *)(lVar27 + 0x1c) == *(int *)((long)puVar15 + 4) &&
        *(int *)(lVar27 + 0x20) == *(int *)(puVar15 + 1)) {
      uVar37 = 0;
    }
    else {
      uVar37 = *(byte *)(lVar27 + 0x1a0) ^ 1;
    }
    lVar11 = *(long *)(lVar27 + 8);
    param_9 = (long *)(lVar27 + 0x18);
    FUN_10a0ec6f0();
    puVar33 = puVar15;
    FUN_10a0ec6f0();
    uVar30 = uStack_3b0;
    lVar27 = *(long *)(puVar18 + 2);
    uVar44 = puVar15[3];
    uVar42 = puVar15[2];
    uVar43 = puVar15[5];
    uVar19 = puVar15[4];
    uVar45 = *puVar15;
    *(undefined8 *)(lVar27 + 0x20) = puVar15[1];
    *(undefined8 *)(lVar27 + 0x18) = uVar45;
    *(undefined8 *)(lVar27 + 0x30) = uVar44;
    *(undefined8 *)(lVar27 + 0x28) = uVar42;
    *(undefined8 *)(lVar27 + 0x40) = uVar43;
    *(undefined8 *)(lVar27 + 0x38) = uVar19;
    uVar46 = puVar15[9];
    uVar45 = puVar15[8];
    uVar43 = puVar15[0xb];
    uVar19 = puVar15[10];
    uVar44 = *(undefined8 *)((long)puVar15 + 100);
    uVar42 = *(undefined8 *)((long)puVar15 + 0x5c);
    uVar47 = puVar15[6];
    *(undefined8 *)(lVar27 + 0x50) = puVar15[7];
    *(undefined8 *)(lVar27 + 0x48) = uVar47;
    *(undefined8 *)(lVar27 + 0x7c) = uVar44;
    *(undefined8 *)(lVar27 + 0x74) = uVar42;
    *(undefined8 *)(lVar27 + 0x70) = uVar43;
    *(undefined8 *)(lVar27 + 0x68) = uVar19;
    *(undefined8 *)(lVar27 + 0x60) = uVar46;
    *(undefined8 *)(lVar27 + 0x58) = uVar45;
    FUN_10a22b858(lVar27 + 0x88,puVar15 + 0xe);
    *(ulong *)(lVar27 + 0xfc) = uVar30;
    FUN_10a0ec6f0();
    uVar4 = (uint)puVar15 & 3;
    uStack_320 = (char *)CONCAT44(*(undefined4 *)(&UNK_10e4b9df0 + (ulong)uVar4 * 4),
                                  *(undefined4 *)(&UNK_10e4b9dd0 + (ulong)uVar4 * 4));
    uStack_310 = CONCAT44(*(undefined4 *)(&UNK_10e4b9dd0 + (ulong)uVar4 * 4),
                          *(undefined4 *)(&UNK_10e4b9de0 + (ulong)uVar4 * 4));
    uStack_318 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    ppppuStack_2f0 = (undefined8 *****)0x0;
    uStack_2f8 = 0x3f800000;
    uStack_2e8 = 0x3f80000000000000;
    *(byte *)(lVar27 + 0x3b0) = ((byte)puVar15 ^ 0xff) & 1;
    *(undefined8 *)(lVar27 + 0x2cc) = 0x3f800000;
    *(undefined8 *)(lVar27 + 0x2c4) = 0;
    *(undefined8 *)(lVar27 + 0x2dc) = 0x3f80000000000000;
    *(undefined8 *)(lVar27 + 0x2d4) = 0;
    *(undefined8 *)(lVar27 + 0x2ac) = 0;
    *(ulong *)(lVar27 + 0x2a4) = (ulong)uStack_320;
    *(undefined8 *)(lVar27 + 700) = 0;
    *(ulong *)(lVar27 + 0x2b4) = uStack_310;
    FUN_10a4d8ba8(&uStack_2e0,&uStack_320);
    *(long **)(lVar27 + 0x2ec) = plStack_2d8;
    *(char **)(lVar27 + 0x2e4) = uStack_2e0;
    *(long *)(lVar27 + 0x2fc) = lStack_2c8;
    *(long *)(lVar27 + 0x2f4) = lStack_2d0;
    *(long *)(lVar27 + 0x30c) = lStack_2b8;
    *(long *)(lVar27 + 0x304) = lStack_2c0;
    *(long *)(lVar27 + 0x31c) = lStack_2a8;
    *(char **)(lVar27 + 0x314) = pcStack_2b0;
    plStack_2d8 = *(long **)(lVar27 + 0x2ac);
    uStack_2e0 = *(char **)(lVar27 + 0x2a4);
    lStack_2c8 = *(long *)(lVar27 + 700);
    lStack_2d0 = *(long *)(lVar27 + 0x2b4);
    lStack_2b8 = *(long *)(lVar27 + 0x2cc);
    lStack_2c0 = *(long *)(lVar27 + 0x2c4);
    lStack_2a8 = *(long *)(lVar27 + 0x2dc);
    pcStack_2b0 = *(char **)(lVar27 + 0x2d4);
    FUN_10a4f5170(&uStack_2e0,lVar27 + 0x1a4);
    *(long **)(lVar27 + 0x338) = plStack_2d8;
    *(char **)(lVar27 + 0x330) = uStack_2e0;
    *(long *)(lVar27 + 0x348) = lStack_2c8;
    *(long *)(lVar27 + 0x340) = lStack_2d0;
    *(long *)(lVar27 + 0x358) = lStack_2b8;
    *(long *)(lVar27 + 0x350) = lStack_2c0;
    *(long *)(lVar27 + 0x368) = lStack_2a8;
    *(char **)(lVar27 + 0x360) = pcStack_2b0;
    iVar41 = (int)lVar27 + 0x330;
    FUN_10a4d8ba8(&uStack_2e0);
    *(long **)(lVar27 + 0x378) = plStack_2d8;
    *(char **)(lVar27 + 0x370) = uStack_2e0;
    *(long *)(lVar27 + 0x388) = lStack_2c8;
    *(long *)(lVar27 + 0x380) = lStack_2d0;
    *(long *)(lVar27 + 0x398) = lStack_2b8;
    *(long *)(lVar27 + 0x390) = lStack_2c0;
    *(long *)(lVar27 + 0x3a8) = lStack_2a8;
    *(char **)(lVar27 + 0x3a0) = pcStack_2b0;
    iVar32 = (int)uVar30;
    fVar39 = *(float *)(lVar27 + 0x24) * 0.017453292 * 0.5;
    _tanf();
    fVar39 = ((float)iVar32 / 2.0) / fVar39;
    *(float *)(lVar27 + 0xf8) = fVar39;
    *(undefined8 *)(lVar27 + 0xa0) = 0;
    *(undefined4 *)(lVar27 + 0x9c) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xb8) = 0x3f800000;
    *(float *)(lVar27 + 0xa8) = fVar39;
    iVar34 = (int)(uVar30 >> 0x20);
    *(float *)(lVar27 + 0x98) = fVar39;
    iVar21 = iVar32;
    if (iVar32 <= iVar34) {
      iVar21 = iVar34;
    }
    *(float *)(lVar27 + 0xb0) = (float)iVar32 / 2.0;
    *(float *)(lVar27 + 0xb4) = (float)iVar34 / 2.0;
    *(float *)(lVar27 + 0x3cc) = (float)iVar21 * 0.05 * (float)iVar21 * 0.05;
    if (lVar11 == 0 || (((uint)puVar33 ^ (uint)param_9) & 1) != 0) {
      uVar19 = 8;
      __Znwm(8);
      func_0x00010967fb44();
      func_0x00010a50927c(*(long *)(puVar18 + 2) + 8,uVar19);
      uStack_2e0 = (char *)0x0;
      uVar19 = **(undefined8 **)(*(long *)(puVar18 + 2) + 8);
      func_0x000109673718(uVar19,0,&uStack_2e0);
      iVar41 = (int)uVar19;
    }
  }
  else {
    uVar30 = lVar27 + 0x18;
    func_0x00010a4effb4(uVar30,puVar15);
    iVar41 = (int)uVar30;
    if ((uVar30 & 1) == 0) {
      lVar27 = *(long *)(puVar18 + 2);
      goto LAB_10a4da6c4;
    }
    uVar37 = 0;
  }
  lVar27 = *(long *)(puVar18 + 2);
  if (*(char *)(lVar27 + 0x3c0) == '\x01') {
    if ((*(byte *)(lVar27 + 0x3d8) & 1) == 0) {
      *(undefined1 *)(lVar27 + 0x3d8) = 1;
    }
    *(undefined8 *)(lVar27 + 0x3d0) = 0x3f2666663f000000;
    lVar27 = *(long *)(puVar18 + 2);
    uStack_2e0 = *(char **)(lVar27 + 0xc0);
    plStack_2d8 = (long *)CONCAT44(plStack_2d8._4_4_,*(undefined4 *)(lVar27 + 200));
    FUN_10a4d93d8(lVar27,&puStack_390,&uStack_2e0);
    iVar41 = (int)lVar27;
    *(undefined1 *)(*(long *)(puVar18 + 2) + 0x3c0) = 0;
  }
  FUN_10ad055a0();
  if (iVar41 == 0) {
LAB_10a4da990:
    lVar27 = *(long *)(puVar18 + 2);
    puVar36 = *(ulong **)(lVar27 + 0xd0);
    if (*(ulong **)(lVar27 + 0xd8) != puVar36) {
      lVar11 = 0;
      uStack_2e0 = (char *)*puVar36;
      plStack_2d8 = (long *)CONCAT44(plStack_2d8._4_4_,(int)puVar36[1]);
      do {
        *(float *)((long)&uStack_2e0 + lVar11) = -*(float *)((long)&uStack_2e0 + lVar11);
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0xc);
      fVar39 = *(float *)(lVar27 + 0x2a0) +
               uStack_2e0._4_4_ * *(float *)(lVar27 + 0x280) +
               *(float *)(lVar27 + 0x270) * (float)uStack_2e0 +
               *(float *)(lVar27 + 0x290) * plStack_2d8._0_4_;
      *(ulong *)(lVar27 + 0x3b4) =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x294) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar27 + 0x274) >> 0x20) * uStack_2e0._4_4_ +
                    (float)((ulong)*(undefined8 *)(lVar27 + 0x264) >> 0x20) * (float)uStack_2e0 +
                    (float)((ulong)*(undefined8 *)(lVar27 + 0x284) >> 0x20) * plStack_2d8._0_4_) /
                    fVar39,((float)*(undefined8 *)(lVar27 + 0x294) +
                           (float)*(undefined8 *)(lVar27 + 0x274) * uStack_2e0._4_4_ +
                           (float)*(undefined8 *)(lVar27 + 0x264) * (float)uStack_2e0 +
                           (float)*(undefined8 *)(lVar27 + 0x284) * plStack_2d8._0_4_) / fVar39);
      *(float *)(lVar27 + 0x3bc) =
           (*(float *)(lVar27 + 0x29c) +
           uStack_2e0._4_4_ * *(float *)(lVar27 + 0x27c) +
           *(float *)(lVar27 + 0x26c) * (float)uStack_2e0 +
           *(float *)(lVar27 + 0x28c) * plStack_2d8._0_4_) / fVar39;
      lVar27 = *(long *)(puVar18 + 2);
    }
    puVar10[0] = 4;
    puVar10[1] = 1;
    puVar36 = (ulong *)(puVar10 + 2);
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[2] = 0x3f800000;
    puVar10[3] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0x3f800000;
    puVar10[0xc] = 0x3f800000;
    puVar10[0xd] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0x3f800000;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    puVar10[0x12] = 0x3f800000;
    puVar10[0x13] = 0;
    puVar10[0x18] = 0;
    puVar10[0x19] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0x3f800000;
    puVar10[0x1c] = 0x3f800000;
    puVar10[0x1d] = 0;
    puVar10[0x1a] = 0;
    puVar10[0x1b] = 0;
    puVar10[0x20] = 0;
    puVar10[0x21] = 0x3f800000;
    puVar10[0x1e] = 0;
    puVar10[0x1f] = 0;
    puVar10[0x24] = 0;
    puVar10[0x25] = 0;
    puVar10[0x22] = 0x3f800000;
    puVar10[0x23] = 0;
    puVar10[0x28] = 0;
    puVar10[0x29] = 0;
    puVar10[0x26] = 0;
    puVar10[0x27] = 0x3f800000;
    puVar10[0x2c] = 0x3f800000;
    puVar10[0x2d] = 0;
    puVar10[0x2a] = 0;
    puVar10[0x2b] = 0;
    puVar10[0x30] = 0;
    puVar10[0x31] = 0x3f800000;
    puVar10[0x2e] = 0;
    puVar10[0x2f] = 0;
    puVar10[0x32] = 0xffffffff;
    FUN_10a4d92dc(puVar36,lVar27,&puStack_390);
    lVar27 = 0;
    uVar30 = 0;
    lVar11 = *(long *)(puVar18 + 2);
    do {
      puVar15 = (undefined8 *)
                ((long)puVar36 +
                (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2));
      uVar19 = *puVar15;
      *(undefined8 *)((long)&uStack_358 + lVar27) = puVar15[1];
      *(undefined8 *)((long)&uStack_360 + lVar27) = uVar19;
      uVar30 = (long)(int)uVar30 + 4;
      lVar27 = lVar27 + 0x10;
    } while (lVar27 != 0x40);
    FUN_10a4d8e98(&uStack_320,lVar11 + 0x1a4,&uStack_360);
    FUN_10a4d8ba8(&uStack_2e0,&uStack_320);
    lVar27 = 0;
    uVar30 = 0;
    uStack_360 = pcStack_2b0;
    uStack_358._0_4_ = (undefined4)lStack_2a8;
    lVar11 = *(long *)(puVar18 + 2);
    do {
      puVar15 = (undefined8 *)
                ((long)puVar36 +
                (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2));
      uVar19 = *puVar15;
      *(undefined8 *)((long)&uStack_318 + lVar27) = puVar15[1];
      *(undefined8 *)((long)&uStack_320 + lVar27) = uVar19;
      uVar30 = (long)(int)uVar30 + 4;
      lVar27 = lVar27 + 0x10;
    } while (lVar27 != 0x40);
    lVar27 = 0;
    *(undefined4 *)(lVar11 + 0x124) = (undefined4)uStack_370;
    *(undefined8 *)(lVar11 + 0x10c) = uStack_388;
    *(undefined **)(lVar11 + 0x104) = puStack_390;
    *(undefined8 *)(lVar11 + 0x11c) = uStack_378;
    *(undefined8 *)(lVar11 + 0x114) = uStack_380;
    *(ulong *)(lVar11 + 0x130) = uStack_318;
    *(char **)(lVar11 + 0x128) = uStack_320;
    *(ulong *)(lVar11 + 0x140) = uStack_308;
    *(ulong *)(lVar11 + 0x138) = uStack_310;
    *(ulong *)(lVar11 + 0x150) = uStack_2f8;
    *(ulong *)(lVar11 + 0x148) = uStack_300;
    *(ulong *)(lVar11 + 0x160) = uStack_2e8;
    *(undefined8 *****)(lVar11 + 0x158) = ppppuStack_2f0;
    fVar39 = 0.0;
    *(undefined4 *)(lVar11 + 0x16c) = (undefined4)lStack_2a8;
    do {
      fVar39 = fVar39 + *(float *)((long)&uStack_360 + lVar27) *
                        *(float *)((long)&uStack_360 + lVar27);
      lVar27 = lVar27 + 4;
    } while (lVar27 != 0xc);
    *(float *)(lVar11 + 0x168) = SQRT(fVar39);
    *puVar10 = 3;
    puVar15 = &uStack_2e0;
    FUN_10a4d92dc(puVar15,*(long *)(puVar18 + 2),&puStack_390);
    *(long **)(puVar10 + 4) = plStack_2d8;
    *puVar36 = (ulong)uStack_2e0;
    *(long *)(puVar10 + 8) = lStack_2c8;
    *(long *)(puVar10 + 6) = lStack_2d0;
    *(long *)(puVar10 + 0xc) = lStack_2b8;
    *(long *)(puVar10 + 10) = lStack_2c0;
    *(long *)(puVar10 + 0x10) = lStack_2a8;
    *(char **)(puVar10 + 0xe) = pcStack_2b0;
    plVar25 = *(long **)(*(long *)(puVar18 + 2) + 8);
    if (plVar25 == (long *)0x0) goto LAB_10a4db21c;
    param_9 = (long *)*plVar25;
    func_0x00010967360c(param_9,0);
    uStack_298 = NEON_scvtf(uStack_3b0,4);
    uStack_2a0 = 0;
    func_0x0001096723c8(*(undefined4 *)(*(long *)(puVar18 + 2) + 0xf8),
                        **(undefined8 **)(*(long *)(puVar18 + 2) + 8),0,&uStack_298,&uStack_2a0);
    unaff_d10 = uStack_370 & 0xffffffff;
    if ((bRam00000001137eb278 & 1) == 0) goto LAB_10a4db2c8;
    do {
      if ((bRam00000001137eb280 & 1) == 0) {
        iVar41 = 0x137eb280;
        ___cxa_guard_acquire();
        if (iVar41 != 0) {
          uRam00000001137eb25c = 0xbf248dbb;
          ___cxa_guard_release(0x1137eb280);
        }
      }
      plVar25 = *(long **)(puVar18 + 2);
      cVar5 = *(char *)((long)plVar25 + 0xf4);
      lVar27 = 0xc;
      if (cVar5 == '\0') {
        lVar27 = 8;
      }
      fVar38 = *(float *)(lVar27 + 0x1137eb250);
      fVar39 = (float)unaff_d10;
      if ((*(int *)((long)plVar25 + 0x3c4) == 0) || (fVar38 <= fVar39)) {
        if (*(int *)((long)plVar25 + 0x3c4) != 2) goto LAB_10a4dad28;
        if ((((uVar37 & 1) != 0) && (0 < *(int *)((long)plVar25 + 0xfc))) &&
           (0 < (int)plVar25[0x20])) {
          uVar19 = NEON_ucvtf(CONCAT44((int)plVar25[0x20],*(int *)((long)plVar25 + 0xfc)),4);
          uVar43 = NEON_scvtf(uStack_3b0,4);
          uStack_2e0 = (char *)CONCAT44(((float)((ulong)*param_9 >> 0x20) /
                                        (float)((ulong)uVar19 >> 0x20)) *
                                        (float)((ulong)uVar43 >> 0x20),
                                        ((float)*param_9 / (float)uVar19) * (float)uVar43);
          lVar27 = 0x168;
          if (cVar5 == '\0') {
            lVar27 = 0x16c;
          }
          uVar26 = 3;
          if (cVar5 == '\0') {
            uVar26 = 0;
          }
          func_0x000109672520(*(undefined4 *)((long)plVar25 + lVar27),0x3dcccccd,0x3d4ccccd,
                              0x40a00000,*(undefined8 *)plVar25[1],&uStack_2e0,0,0,uVar26);
          plVar25 = *(long **)(puVar18 + 2);
        }
        FUN_10a4d9d30(plVar25,lStack_3c0,lStack_3b8,&puStack_390,(long)&uStack_370 + 4);
        param_9 = *(long **)(puVar18 + 2);
      }
      else {
        *(undefined4 *)((long)plVar25 + 0x3c4) = 1;
LAB_10a4dad28:
        param_9 = plVar25;
        plVar25 = (long *)0x2;
      }
      FUN_10a4d9a94(param_9,plVar25);
      if ((uint)param_9 != 0) {
        lVar11 = **(long **)(*(long *)(puVar18 + 2) + 8);
        func_0x000109673688(lVar11,0);
        lVar27 = 0;
        iVar41 = 0;
        puVar15 = &uStack_2e0;
        do {
          lVar29 = 0;
          lVar1 = (long)iVar41;
          iVar41 = iVar41 + 4;
          do {
            *(undefined4 *)((long)puVar15 + lVar29) = *(undefined4 *)(lVar11 + lVar1 * 4 + lVar29);
            lVar29 = lVar29 + 4;
          } while (lVar29 != 0x10);
          lVar27 = lVar27 + 1;
          puVar15 = puVar15 + 2;
        } while (lVar27 != 4);
        puVar35 = puVar18 + 2;
        FUN_10a4d8fa4(&uStack_320,*(long *)puVar35 + 0x1a4,&uStack_2e0);
        puVar36[1] = uStack_318;
        *puVar36 = (ulong)uStack_320;
        puVar36[3] = uStack_308;
        puVar36[2] = uStack_310;
        puVar36[5] = uStack_2f8;
        puVar36[4] = uStack_300;
        puVar36[7] = uStack_2e8;
        puVar36[6] = (ulong)ppppuStack_2f0;
        *puVar10 = (uint)((int)plVar25 == 0x2000 & *(byte *)(*(long *)puVar35 + 0xf4));
        FUN_10a4d8ba8(&uStack_320,&uStack_2e0);
        lVar27 = 0;
        uVar30 = 0;
        ppppuStack_3a8 = ppppuStack_2f0;
        uStack_3a0 = (undefined4)uStack_2e8;
        lVar11 = *(long *)puVar35;
        do {
          puVar15 = (undefined8 *)
                    ((long)puVar36 +
                    (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2));
          uVar19 = *puVar15;
          *(undefined8 *)((long)&uStack_358 + lVar27) = puVar15[1];
          *(undefined8 *)((long)&uStack_360 + lVar27) = uVar19;
          uVar30 = (long)(int)uVar30 + 4;
          lVar27 = lVar27 + 0x10;
        } while (lVar27 != 0x40);
        lVar27 = 0;
        *(undefined4 *)(lVar11 + 0x124) = (undefined4)uStack_370;
        *(undefined8 *)(lVar11 + 0x10c) = uStack_388;
        *(undefined **)(lVar11 + 0x104) = puStack_390;
        *(undefined8 *)(lVar11 + 0x11c) = uStack_378;
        *(undefined8 *)(lVar11 + 0x114) = uStack_380;
        *(ulong *)(lVar11 + 0x130) = CONCAT44(uStack_358._4_4_,(undefined4)uStack_358);
        *(char **)(lVar11 + 0x128) = uStack_360;
        *(undefined8 *)(lVar11 + 0x140) = uStack_348;
        *(ulong *)(lVar11 + 0x138) = CONCAT17(cStack_349,uStack_350);
        *(undefined8 *)(lVar11 + 0x150) = uStack_338;
        *(undefined8 *)(lVar11 + 0x148) = uStack_340;
        *(undefined8 *)(lVar11 + 0x160) = uStack_328;
        *(undefined8 *)(lVar11 + 0x158) = uStack_330;
        fVar40 = 0.0;
        *(undefined4 *)(lVar11 + 0x16c) = (undefined4)uStack_2e8;
        do {
          fVar40 = fVar40 + *(float *)((long)&ppppuStack_3a8 + lVar27) *
                            *(float *)((long)&ppppuStack_3a8 + lVar27);
          lVar27 = lVar27 + 4;
        } while (lVar27 != 0xc);
        *(float *)(lVar11 + 0x168) = SQRT(fVar40);
      }
      piVar13 = *(int **)(puVar18 + 2);
      piVar13[0xf2] = piVar13[0xf2] + 1;
      piVar17 = piVar13;
      if (((char)piVar13[0x68] == '\x01') &&
         (*(undefined1 *)(piVar13 + 0x68) = 0, (*(byte *)(piVar13 + 0xf6) & 1) != 0)) {
        fVar48 = (float)piVar13[0xf4];
        fVar40 = (float)piVar13[0xf5];
        if ((char)piVar13[0xec] == '\0') {
          fVar48 = (float)piVar13[0xf5];
          fVar40 = 1.0 - (float)piVar13[0xf4];
        }
        if (((fVar39 < fVar38) || (fVar48 = fVar48 * (float)piVar13[0x3f], fVar48 < 0.0)) ||
           (fVar40 = fVar40 * (float)piVar13[0x40], fVar40 < 0.0)) goto LAB_10a4daec0;
        uStack_2e0 = (char *)CONCAT44(fVar40,fVar48);
        FUN_10a4d97f4(piVar13,&uStack_2e0,&puStack_390);
        piVar17 = *(int **)(puVar18 + 2);
        if ((int)piVar13 == 0) goto LAB_10a4daec0;
        piVar17[0xf1] = 2;
        piVar17[0xed] = 0;
        piVar17[0xee] = 0;
        piVar17[0xef] = 0;
        puVar18 = puVar18 + 2;
        puVar15 = *(undefined8 **)puVar18;
        FUN_10a4d9e00(fVar48,fVar40,puVar15,1,1,1,&puStack_390,puVar10,lStack_3c0,lStack_3b8);
        uVar4 = *(int *)(*(long *)puVar18 + 0x10) + 1;
        *(uint *)(*(long *)puVar18 + 0x10) = uVar4;
        puVar10[0x32] = uVar4;
        goto LAB_10a4db21c;
      }
LAB_10a4daec0:
      if (piVar17[0xf1] != 0) {
        puVar10[0x32] = piVar17[4];
      }
      lVar27 = 0;
      uVar30 = 0;
      iVar41 = piVar17[0xf2];
      iVar21 = *piVar17;
      uStack_320 = (char *)0x0;
      do {
        puVar15 = (undefined8 *)
                  ((long)puVar36 +
                  (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2));
        uVar19 = *puVar15;
        *(undefined8 *)((long)&plStack_2d8 + lVar27) = puVar15[1];
        *(undefined8 *)((long)&uStack_2e0 + lVar27) = uVar19;
        uVar30 = (long)(int)uVar30 + 4;
        lVar27 = lVar27 + 0x10;
      } while (lVar27 != 0x40);
      FUN_10a4d9608((float)(int)uStack_3b0,(float)uStack_3b0._4_4_,piVar17,&uStack_2e0,2,&uStack_320
                   );
      lVar27 = 0;
      uVar30 = 0;
      uStack_360 = (char *)0x0;
      puVar14 = *(ulong **)(puVar18 + 2);
      do {
        puVar15 = (undefined8 *)
                  ((long)puVar36 +
                  (-(uVar30 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar30 & 0xffffffff) << 2));
        uVar19 = *puVar15;
        *(undefined8 *)((long)&plStack_2d8 + lVar27) = puVar15[1];
        *(undefined8 *)((long)&uStack_2e0 + lVar27) = uVar19;
        uVar30 = (long)(int)uVar30 + 4;
        lVar27 = lVar27 + 0x10;
      } while (lVar27 != 0x40);
      FUN_10a4d9608((float)(int)uStack_3b0,(float)uStack_3b0._4_4_,puVar14,&uStack_2e0,0,&uStack_360
                   );
      puVar33 = *(undefined8 **)(puVar18 + 2);
      puVar15 = puVar33;
      puVar36 = puVar14;
      if (fVar39 < fVar38 || ((uVar37 | (uint)piVar17 ^ 0xffffffff) & 1) != 0) {
LAB_10a4daffc:
        if ((*(int *)((long)puVar15 + 0x3c4) != 0) &&
           ((((int)puVar14 == 0 || ((((ulong)plVar25 & 0x1022) == 0 && (iVar21 < iVar41)))) &&
            (fVar38 <= fVar39)))) {
          iVar41 = *(int *)(puVar15 + 0x20);
          fVar39 = 0.5;
          fVar38 = 0.65;
          if (*(char *)(puVar15 + 0x76) == '\0') {
            fVar39 = 0.65;
            fVar38 = 0.5;
          }
          fVar39 = fVar39 * (float)*(int *)((long)puVar15 + 0xfc);
          uStack_2e0 = (char *)CONCAT44(fVar38 * (float)iVar41,fVar39);
          FUN_10a4d97f4(puVar15,&uStack_2e0,&puStack_390);
          if ((int)puVar15 != 0) {
            puVar18 = puVar18 + 2;
            puVar15 = *(undefined8 **)puVar18;
            FUN_10a4d9e00(fVar39,fVar38 * (float)iVar41,puVar15,0,0,2,&puStack_390,puVar10,
                          lStack_3c0,lStack_3b8);
            *(undefined4 *)(*(long *)puVar18 + 0x3c4) = 2;
          }
        }
      }
      else {
        fVar40 = (float)uStack_360;
        fVar48 = uStack_360._4_4_;
        fVar6 = (float)uStack_320;
        uVar30 = (ulong)uStack_320 & 0xffffffff;
        fVar7 = uStack_320._4_4_;
        FUN_10a4d97f4(puVar33,&uStack_320,&puStack_390);
        puVar15 = *(undefined8 **)(puVar18 + 2);
        if ((int)puVar33 == 0) goto LAB_10a4daffc;
        if (*(int *)((long)puVar15 + 0x3c4) == 0) {
          *(undefined4 *)((long)puVar15 + 0x3c4) = 2;
          FUN_10a4d9e00(uVar30,fVar7,puVar15,0,1,2,&puStack_390,puVar10,lStack_3c0,lStack_3b8);
        }
        else {
          uVar4 = (uint)param_9 ^ 1;
          if (*(float *)((long)puVar15 + 0x3cc) <
              (fVar40 - fVar6) * (fVar40 - fVar6) + 0.0 + (fVar48 - fVar7) * (fVar48 - fVar7)) {
            uVar4 = 1;
          }
          if (((uVar4 & 1) == 0) && (((ulong)plVar25 & 0x1022) != 0 || iVar41 <= iVar21))
          goto LAB_10a4daffc;
          *(undefined4 *)((long)puVar15 + 0x3c4) = 2;
          FUN_10a4d9e00(uVar30,fVar7,puVar15,0,0,2,&puStack_390,puVar10,lStack_3c0,lStack_3b8);
        }
      }
LAB_10a4db21c:
      iVar41 = (int)puVar15;
      FUN_10ad055a0();
      if (iVar41 != 0) {
        ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar16 == (undefined *)0x0) {
          ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar25 = (long *)*ppuVar16;
          if ((plVar25 == (long *)0x0) || ((**(code **)(*plVar25 + 0x18))(), plVar25 == (long *)0x0)
             ) goto LAB_10a4db250;
          plVar25 = plVar25 + 7;
        }
        else {
          plVar25 = (long *)(*ppuVar16 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar25 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&uStack_360,&UNK_10f65d16a);
          func_0x000107c2b054(&ppppuStack_3a8,"");
          uStack_320 = "null";
          uStack_2e0 = uStack_320;
          if (cStack_349 < '\0') {
            if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) != 0) {
              uStack_2e0 = uStack_360;
            }
          }
          else if (cStack_349 != '\0') {
            uStack_2e0 = (char *)&uStack_360;
          }
          if (cStack_391 < '\0') {
            if (CONCAT44(uStack_39c,uStack_3a0) != 0) {
              uStack_320 = (char *)ppppuStack_3a8;
            }
          }
          else if (cStack_391 != '\0') {
            uStack_320 = (char *)&ppppuStack_3a8;
          }
          FUN_10a224324(&uStack_2e0,&uStack_320);
          if (cStack_349 < '\0') {
            if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) == 0) goto LAB_10a4db62c;
            func_0x000107c3192c(&uStack_2e0,uStack_360);
LAB_10a4db720:
            uVar20 = 1;
          }
          else {
            if (cStack_349 != '\0') {
              plStack_2d8 = (long *)CONCAT44(uStack_358._4_4_,(undefined4)uStack_358);
              uStack_2e0 = uStack_360;
              lStack_2d0 = CONCAT17(cStack_349,uStack_350);
              goto LAB_10a4db720;
            }
LAB_10a4db62c:
            uVar20 = 0;
            uStack_2e0 = (char *)((ulong)uStack_2e0 & 0xffffffffffffff00);
          }
          lStack_2c8 = CONCAT71(lStack_2c8._1_7_,uVar20);
          if (cStack_391 < '\0') {
            if (CONCAT44(uStack_39c,uStack_3a0) == 0) goto LAB_10a4db74c;
            func_0x000107c3192c(&uStack_320,ppppuStack_3a8);
LAB_10a4db7e0:
            uVar20 = 1;
          }
          else {
            if (cStack_391 != '\0') {
              uStack_318 = CONCAT44(uStack_39c,uStack_3a0);
              uStack_320 = (char *)ppppuStack_3a8;
              uStack_310 = CONCAT17(cStack_391,uStack_398);
              goto LAB_10a4db7e0;
            }
LAB_10a4db74c:
            uVar20 = 0;
            uStack_320 = (char *)((ulong)uStack_320 & 0xffffffffffffff00);
          }
          uStack_308 = CONCAT71(uStack_308._1_7_,uVar20);
          FUN_10a234a0c(&uStack_2e0,&uStack_320);
          goto LAB_10a4db7f4;
        }
      }
LAB_10a4db250:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
        return;
      }
      ___stack_chk_fail();
LAB_10a4db2c8:
      iVar41 = 0x137eb278;
      ___cxa_guard_acquire();
      if (iVar41 != 0) {
        uRam00000001137eb258 = 0xbd0ef2bd;
        ___cxa_guard_release(0x1137eb278);
      }
    } while( true );
  }
  ppuVar16 = &PTR___tlv_bootstrap_11340dfd8;
  (*(code *)PTR___tlv_bootstrap_11340dfd8)();
  if (*ppuVar16 == (undefined *)0x0) {
    ppuVar16 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    plVar25 = (long *)*ppuVar16;
    if ((plVar25 == (long *)0x0) || ((**(code **)(*plVar25 + 0x18))(), plVar25 == (long *)0x0))
    goto LAB_10a4da990;
    plVar25 = plVar25 + 7;
  }
  else {
    plVar25 = (long *)(*ppuVar16 + 8);
  }
  if (((uint)*(undefined8 *)(*plVar25 + 0x10) >> 1 & 1) == 0) goto LAB_10a4da990;
  func_0x000107c2b054(&uStack_360,&UNK_10f65d146);
  func_0x000107c2b054(&ppppuStack_3a8,"");
  if (cStack_349 < '\0') {
    uStack_2e0 = "null";
    if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) != 0) {
      uStack_2e0 = uStack_360;
    }
  }
  else {
    uStack_2e0 = "null";
    if (cStack_349 != '\0') {
      uStack_2e0 = (char *)&uStack_360;
    }
  }
  if (cStack_391 < '\0') {
    uStack_320 = "null";
    if (CONCAT44(uStack_39c,uStack_3a0) != 0) {
      uStack_320 = (char *)ppppuStack_3a8;
    }
  }
  else {
    uStack_320 = "null";
    if (cStack_391 != '\0') {
      uStack_320 = (char *)&ppppuStack_3a8;
    }
  }
  FUN_10a224324(&uStack_2e0,&uStack_320);
  if (cStack_349 < '\0') {
    if (CONCAT44(uStack_358._4_4_,(undefined4)uStack_358) == 0) goto LAB_10a4db5b8;
    func_0x000107c3192c(&uStack_2e0,uStack_360);
LAB_10a4db6d8:
    uVar20 = 1;
  }
  else {
    if (cStack_349 != '\0') {
      plStack_2d8 = (long *)CONCAT44(uStack_358._4_4_,(undefined4)uStack_358);
      uStack_2e0 = uStack_360;
      lStack_2d0 = CONCAT17(cStack_349,uStack_350);
      goto LAB_10a4db6d8;
    }
LAB_10a4db5b8:
    uVar20 = 0;
    uStack_2e0 = (char *)((ulong)uStack_2e0 & 0xffffffffffffff00);
  }
  lStack_2c8 = CONCAT71(lStack_2c8._1_7_,uVar20);
  if (cStack_391 < '\0') {
    if (CONCAT44(uStack_39c,uStack_3a0) == 0) goto LAB_10a4db704;
    func_0x000107c3192c(&uStack_320,ppppuStack_3a8);
LAB_10a4db7b8:
    uVar20 = 1;
  }
  else {
    if (cStack_391 != '\0') {
      uStack_318 = CONCAT44(uStack_39c,uStack_3a0);
      uStack_320 = (char *)ppppuStack_3a8;
      uStack_310 = CONCAT17(cStack_391,uStack_398);
      goto LAB_10a4db7b8;
    }
LAB_10a4db704:
    uVar20 = 0;
    uStack_320 = (char *)((ulong)uStack_320 & 0xffffffffffffff00);
  }
  uStack_308 = CONCAT71(uStack_308._1_7_,uVar20);
  FUN_10a234a0c(&uStack_2e0,&uStack_320);
LAB_10a4db7f4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a4db7f8);
  (*pcVar8)();
}



/* Entry: 10a4da464; end: 10a4db8b7;  */

void FUN_10a4da464(uint *param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  int *piVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  int *piVar12;
  undefined1 uVar13;
  int iVar14;
  undefined **ppuVar15;
  long *plVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  long *plVar23;
  undefined8 *puVar24;
  int iVar25;
  ulong *puVar26;
  long *unaff_x24;
  uint uVar27;
  undefined8 uVar28;
  float fVar29;
  int iVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  ulong unaff_d10;
  float fVar39;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined7 uStack_1a8;
  char cStack_1a1;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined7 uStack_160;
  char cStack_159;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 ****ppppuStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long *aplStack_e8 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_198 = param_4[1];
  puStack_1a0 = (undefined *)*param_4;
  uStack_188 = param_4[3];
  uStack_190 = param_4[2];
  uStack_178 = param_4[5];
  uStack_180 = param_4[4];
  ppuVar11 = &puStack_1a0;
  FUN_10a4cace0(ppuVar11,param_4);
  FUN_10ad055a0();
  if ((int)ppuVar11 != 0) {
    ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar11 == (undefined *)0x0) {
      ppuVar11 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      ppuVar11 = (undefined **)*ppuVar11;
      if ((ppuVar11 == (undefined **)0x0) ||
         ((**(code **)(*ppuVar11 + 0x18))(), ppuVar11 == (undefined **)0x0)) goto LAB_10a4da500;
      ppuVar15 = ppuVar11 + 7;
    }
    else {
      ppuVar15 = (undefined **)(*ppuVar11 + 8);
    }
    if (((uint)*(undefined8 *)(*ppuVar15 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&uStack_170,&UNK_10f65d0e1);
      func_0x000107c2b054(&ppppuStack_1b8,"");
      if (cStack_159 < '\0') {
        uStack_f0 = "null";
        if (CONCAT44(uStack_168._4_4_,(undefined4)uStack_168) != 0) {
          uStack_f0 = uStack_170;
        }
      }
      else {
        uStack_f0 = "null";
        if (cStack_159 != '\0') {
          uStack_f0 = (char *)&uStack_170;
        }
      }
      if (cStack_1a1 < '\0') {
        uStack_130 = "null";
        if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
          uStack_130 = (char *)ppppuStack_1b8;
        }
      }
      else {
        uStack_130 = "null";
        if (cStack_1a1 != '\0') {
          uStack_130 = (char *)&ppppuStack_1b8;
        }
      }
      FUN_10a224324(&uStack_f0,&uStack_130);
      if (cStack_159 < '\0') {
        if (CONCAT44(uStack_168._4_4_,(undefined4)uStack_168) != 0) {
          func_0x000107c3192c(&uStack_f0,uStack_170);
          goto LAB_10a4db648;
        }
LAB_10a4db4a0:
        uVar13 = 0;
        uStack_f0 = (char *)((ulong)uStack_f0 & 0xffffffffffffff00);
      }
      else {
        if (cStack_159 == '\0') goto LAB_10a4db4a0;
        aplStack_e8[0] = (long *)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
        uStack_f0 = uStack_170;
        aplStack_e8[1] = (long *)CONCAT17(cStack_159,uStack_160);
LAB_10a4db648:
        uVar13 = 1;
      }
      uStack_d8 = CONCAT71(uStack_d8._1_7_,uVar13);
      if (cStack_1a1 < '\0') {
        if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
          func_0x000107c3192c(&uStack_130,ppppuStack_1b8);
          goto LAB_10a4db768;
        }
LAB_10a4db674:
        uVar13 = 0;
        uStack_130 = (char *)((ulong)uStack_130 & 0xffffffffffffff00);
      }
      else {
        if (cStack_1a1 == '\0') goto LAB_10a4db674;
        uStack_128 = CONCAT44(uStack_1ac,uStack_1b0);
        uStack_130 = (char *)ppppuStack_1b8;
        uStack_120 = CONCAT17(cStack_1a1,uStack_1a8);
LAB_10a4db768:
        uVar13 = 1;
      }
      uStack_118 = CONCAT71(uStack_118._1_7_,uVar13);
      FUN_10a234a0c(&uStack_f0,&uStack_130);
      goto LAB_10a4db7f4;
    }
  }
LAB_10a4da500:
  iVar30 = (int)ppuVar11;
  uStack_1c0 = *(ulong *)(param_3 + 0x10);
  iVar14 = (int)uStack_1c0;
  iVar22 = (int)(uStack_1c0 >> 0x20);
  if (((iVar14 < 0x501) && (iVar22 < 0x2d1)) && (iVar22 * iVar14 < 0xe1001)) {
    uStack_1d0 = *(undefined8 *)(param_3 + 0x28);
    uStack_1c8 = *(undefined8 *)(param_3 + 0x18);
  }
  else {
    if (iVar22 * 0x500 < iVar14 * 0x2d0) {
      uVar27 = 0;
      if (iVar14 != 0) {
        uVar27 = (iVar22 * 0x500) / iVar14;
      }
      uStack_1c0 = (ulong)uVar27 << 0x20 | 0x500;
      if ((uVar27 & 1) != 0) {
        uStack_1c0 = CONCAT44(uVar27 - 1,0x500);
      }
    }
    else {
      uVar27 = 0;
      if (iVar22 != 0) {
        uVar27 = (iVar14 * 0x2d0) / iVar22;
      }
      uStack_1c0 = (ulong)uVar27 | 0x2d000000000;
      if ((uVar27 & 1) != 0) {
        uStack_1c0 = CONCAT44(0x2d0,uVar27 - 1);
      }
    }
    puVar24 = *(undefined8 **)(param_2[1] + 0x3e0);
    if (puVar24 == (undefined8 *)0x0) {
      FUN_10a1b498c(&uStack_f0,*(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x24));
      func_0x00010a343394(param_2[1] + 0x3e0,&uStack_f0);
      plVar16 = aplStack_e8[0];
      if (aplStack_e8[0] != (long *)0x0) {
        plVar23 = aplStack_e8[0] + 1;
        do {
          lVar18 = *plVar23;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar4) {
            *plVar23 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*aplStack_e8[0] + 0x10))(aplStack_e8[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      puVar24 = *(undefined8 **)(param_2[1] + 0x3e0);
    }
    puVar10 = param_5;
    FUN_10a0ec6f0();
    uStack_130 = (char *)CONCAT44(uStack_130._4_4_,(int)puVar10);
    (**(code **)*puVar24)(&uStack_f0,puVar24,param_3,&uStack_130,&uStack_1c0);
    unaff_x24 = aplStack_e8[0];
    iVar30 = (int)puVar24;
    uStack_1d0 = *(undefined8 *)((long)uStack_f0 + 0x28);
    uStack_1c8 = *(undefined8 *)((long)uStack_f0 + 0x18);
    if (aplStack_e8[0] != (long *)0x0) {
      plVar16 = aplStack_e8[0] + 1;
      do {
        lVar18 = *plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar18 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*aplStack_e8[0] + 0x10))(aplStack_e8[0]);
        plVar16 = unaff_x24;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        iVar30 = (int)plVar16;
      }
    }
  }
  FUN_10ad055a0();
  if (iVar30 != 0) {
    ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar11 == (undefined *)0x0) {
      ppuVar11 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar16 = (long *)*ppuVar11;
      if ((plVar16 == (long *)0x0) || ((**(code **)(*plVar16 + 0x18))(), plVar16 == (long *)0x0))
      goto LAB_10a4da69c;
      plVar16 = plVar16 + 7;
    }
    else {
      plVar16 = (long *)(*ppuVar11 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar16 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&uStack_170,&UNK_10f65d111);
      func_0x000107c2b054(&ppppuStack_1b8,"");
      if (cStack_159 < '\0') {
        uStack_f0 = "null";
        if (CONCAT44(uStack_168._4_4_,(undefined4)uStack_168) != 0) {
          uStack_f0 = uStack_170;
        }
      }
      else {
        uStack_f0 = "null";
        if (cStack_159 != '\0') {
          uStack_f0 = (char *)&uStack_170;
        }
      }
      if (cStack_1a1 < '\0') {
        uStack_130 = "null";
        if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
          uStack_130 = (char *)ppppuStack_1b8;
        }
      }
      else {
        uStack_130 = "null";
        if (cStack_1a1 != '\0') {
          uStack_130 = (char *)&ppppuStack_1b8;
        }
      }
      FUN_10a224324(&uStack_f0,&uStack_130);
      if (cStack_159 < '\0') {
        if (CONCAT44(uStack_168._4_4_,(undefined4)uStack_168) != 0) {
          func_0x000107c3192c(&uStack_f0,uStack_170);
          goto LAB_10a4db690;
        }
LAB_10a4db52c:
        uVar13 = 0;
        uStack_f0 = (char *)((ulong)uStack_f0 & 0xffffffffffffff00);
      }
      else {
        if (cStack_159 == '\0') goto LAB_10a4db52c;
        aplStack_e8[0] = (long *)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
        uStack_f0 = uStack_170;
        aplStack_e8[1] = (long *)CONCAT17(cStack_159,uStack_160);
LAB_10a4db690:
        uVar13 = 1;
      }
      uStack_d8 = CONCAT71(uStack_d8._1_7_,uVar13);
      if (cStack_1a1 < '\0') {
        if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
          func_0x000107c3192c(&uStack_130,ppppuStack_1b8);
          goto LAB_10a4db790;
        }
LAB_10a4db6bc:
        uVar13 = 0;
        uStack_130 = (char *)((ulong)uStack_130 & 0xffffffffffffff00);
      }
      else {
        if (cStack_1a1 == '\0') goto LAB_10a4db6bc;
        uStack_128 = CONCAT44(uStack_1ac,uStack_1b0);
        uStack_130 = (char *)ppppuStack_1b8;
        uStack_120 = CONCAT17(cStack_1a1,uStack_1a8);
LAB_10a4db790:
        uVar13 = 1;
      }
      uStack_118 = CONCAT71(uStack_118._1_7_,uVar13);
      FUN_10a234a0c(&uStack_f0,&uStack_130);
      goto LAB_10a4db7f4;
    }
  }
LAB_10a4da69c:
  lVar18 = param_2[1];
  if (*(long *)(lVar18 + 8) == 0) {
LAB_10a4da6c4:
    if (*(int *)(lVar18 + 0x1c) == *(int *)((long)param_5 + 4) &&
        *(int *)(lVar18 + 0x20) == *(int *)(param_5 + 1)) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(byte *)(lVar18 + 0x1a0) ^ 1;
    }
    lVar19 = *(long *)(lVar18 + 8);
    unaff_x24 = (long *)(lVar18 + 0x18);
    FUN_10a0ec6f0();
    puVar24 = param_5;
    FUN_10a0ec6f0();
    uVar20 = uStack_1c0;
    lVar18 = param_2[1];
    uVar33 = param_5[3];
    uVar31 = param_5[2];
    uVar32 = param_5[5];
    uVar28 = param_5[4];
    uVar34 = *param_5;
    *(undefined8 *)(lVar18 + 0x20) = param_5[1];
    *(undefined8 *)(lVar18 + 0x18) = uVar34;
    *(undefined8 *)(lVar18 + 0x30) = uVar33;
    *(undefined8 *)(lVar18 + 0x28) = uVar31;
    *(undefined8 *)(lVar18 + 0x40) = uVar32;
    *(undefined8 *)(lVar18 + 0x38) = uVar28;
    uVar35 = param_5[9];
    uVar34 = param_5[8];
    uVar32 = param_5[0xb];
    uVar28 = param_5[10];
    uVar33 = *(undefined8 *)((long)param_5 + 100);
    uVar31 = *(undefined8 *)((long)param_5 + 0x5c);
    uVar37 = param_5[6];
    *(undefined8 *)(lVar18 + 0x50) = param_5[7];
    *(undefined8 *)(lVar18 + 0x48) = uVar37;
    *(undefined8 *)(lVar18 + 0x7c) = uVar33;
    *(undefined8 *)(lVar18 + 0x74) = uVar31;
    *(undefined8 *)(lVar18 + 0x70) = uVar32;
    *(undefined8 *)(lVar18 + 0x68) = uVar28;
    *(undefined8 *)(lVar18 + 0x60) = uVar35;
    *(undefined8 *)(lVar18 + 0x58) = uVar34;
    FUN_10a22b858(lVar18 + 0x88,param_5 + 0xe);
    *(ulong *)(lVar18 + 0xfc) = uVar20;
    FUN_10a0ec6f0();
    uVar2 = (uint)param_5 & 3;
    uStack_130 = (char *)CONCAT44(*(undefined4 *)(&UNK_10e4b9df0 + (ulong)uVar2 * 4),
                                  *(undefined4 *)(&UNK_10e4b9dd0 + (ulong)uVar2 * 4));
    uStack_120 = CONCAT44(*(undefined4 *)(&UNK_10e4b9dd0 + (ulong)uVar2 * 4),
                          *(undefined4 *)(&UNK_10e4b9de0 + (ulong)uVar2 * 4));
    uStack_128 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    ppppuStack_100 = (undefined8 *****)0x0;
    uStack_108 = 0x3f800000;
    uStack_f8 = 0x3f80000000000000;
    *(byte *)(lVar18 + 0x3b0) = ((byte)param_5 ^ 0xff) & 1;
    *(undefined8 *)(lVar18 + 0x2cc) = 0x3f800000;
    *(undefined8 *)(lVar18 + 0x2c4) = 0;
    *(undefined8 *)(lVar18 + 0x2dc) = 0x3f80000000000000;
    *(undefined8 *)(lVar18 + 0x2d4) = 0;
    *(undefined8 *)(lVar18 + 0x2ac) = 0;
    *(ulong *)(lVar18 + 0x2a4) = (ulong)uStack_130;
    *(undefined8 *)(lVar18 + 700) = 0;
    *(ulong *)(lVar18 + 0x2b4) = uStack_120;
    FUN_10a4d8ba8(&uStack_f0,&uStack_130);
    *(long **)(lVar18 + 0x2ec) = aplStack_e8[0];
    *(char **)(lVar18 + 0x2e4) = uStack_f0;
    *(undefined8 *)(lVar18 + 0x2fc) = uStack_d8;
    *(long **)(lVar18 + 0x2f4) = aplStack_e8[1];
    *(undefined8 *)(lVar18 + 0x30c) = uStack_c8;
    *(undefined8 *)(lVar18 + 0x304) = uStack_d0;
    *(undefined8 *)(lVar18 + 0x31c) = uStack_b8;
    *(char **)(lVar18 + 0x314) = pcStack_c0;
    aplStack_e8[0] = *(long **)(lVar18 + 0x2ac);
    uStack_f0 = *(char **)(lVar18 + 0x2a4);
    uStack_d8 = *(undefined8 *)(lVar18 + 700);
    aplStack_e8[1] = *(long **)(lVar18 + 0x2b4);
    uStack_c8 = *(undefined8 *)(lVar18 + 0x2cc);
    uStack_d0 = *(undefined8 *)(lVar18 + 0x2c4);
    uStack_b8 = *(undefined8 *)(lVar18 + 0x2dc);
    pcStack_c0 = *(char **)(lVar18 + 0x2d4);
    FUN_10a4f5170(&uStack_f0,lVar18 + 0x1a4);
    *(long **)(lVar18 + 0x338) = aplStack_e8[0];
    *(char **)(lVar18 + 0x330) = uStack_f0;
    *(undefined8 *)(lVar18 + 0x348) = uStack_d8;
    *(long **)(lVar18 + 0x340) = aplStack_e8[1];
    *(undefined8 *)(lVar18 + 0x358) = uStack_c8;
    *(undefined8 *)(lVar18 + 0x350) = uStack_d0;
    *(undefined8 *)(lVar18 + 0x368) = uStack_b8;
    *(char **)(lVar18 + 0x360) = pcStack_c0;
    iVar30 = (int)lVar18 + 0x330;
    FUN_10a4d8ba8(&uStack_f0);
    *(long **)(lVar18 + 0x378) = aplStack_e8[0];
    *(char **)(lVar18 + 0x370) = uStack_f0;
    *(undefined8 *)(lVar18 + 0x388) = uStack_d8;
    *(long **)(lVar18 + 0x380) = aplStack_e8[1];
    *(undefined8 *)(lVar18 + 0x398) = uStack_c8;
    *(undefined8 *)(lVar18 + 0x390) = uStack_d0;
    *(undefined8 *)(lVar18 + 0x3a8) = uStack_b8;
    *(char **)(lVar18 + 0x3a0) = pcStack_c0;
    iVar22 = (int)uVar20;
    fVar36 = *(float *)(lVar18 + 0x24) * 0.017453292 * 0.5;
    _tanf();
    fVar36 = ((float)iVar22 / 2.0) / fVar36;
    *(float *)(lVar18 + 0xf8) = fVar36;
    *(undefined8 *)(lVar18 + 0xa0) = 0;
    *(undefined4 *)(lVar18 + 0x9c) = 0;
    *(undefined4 *)(lVar18 + 0xac) = 0;
    *(undefined4 *)(lVar18 + 0xb8) = 0x3f800000;
    *(float *)(lVar18 + 0xa8) = fVar36;
    iVar25 = (int)(uVar20 >> 0x20);
    *(float *)(lVar18 + 0x98) = fVar36;
    iVar14 = iVar22;
    if (iVar22 <= iVar25) {
      iVar14 = iVar25;
    }
    *(float *)(lVar18 + 0xb0) = (float)iVar22 / 2.0;
    *(float *)(lVar18 + 0xb4) = (float)iVar25 / 2.0;
    *(float *)(lVar18 + 0x3cc) = (float)iVar14 * 0.05 * (float)iVar14 * 0.05;
    if (lVar19 == 0 || (((uint)puVar24 ^ (uint)unaff_x24) & 1) != 0) {
      uVar28 = 8;
      __Znwm(8);
      func_0x00010967fb44();
      func_0x00010a50927c(param_2[1] + 8,uVar28);
      uStack_f0 = (char *)0x0;
      uVar28 = **(undefined8 **)(param_2[1] + 8);
      func_0x000109673718(uVar28,0,&uStack_f0);
      iVar30 = (int)uVar28;
    }
  }
  else {
    uVar20 = lVar18 + 0x18;
    func_0x00010a4effb4(uVar20,param_5);
    iVar30 = (int)uVar20;
    if ((uVar20 & 1) == 0) {
      lVar18 = param_2[1];
      goto LAB_10a4da6c4;
    }
    uVar27 = 0;
  }
  lVar18 = param_2[1];
  if (*(char *)(lVar18 + 0x3c0) == '\x01') {
    if ((*(byte *)(lVar18 + 0x3d8) & 1) == 0) {
      *(undefined1 *)(lVar18 + 0x3d8) = 1;
    }
    *(undefined8 *)(lVar18 + 0x3d0) = 0x3f2666663f000000;
    lVar18 = param_2[1];
    uStack_f0 = *(char **)(lVar18 + 0xc0);
    aplStack_e8[0] = (long *)CONCAT44(aplStack_e8[0]._4_4_,*(undefined4 *)(lVar18 + 200));
    FUN_10a4d93d8(lVar18,&puStack_1a0,&uStack_f0);
    iVar30 = (int)lVar18;
    *(undefined1 *)(param_2[1] + 0x3c0) = 0;
  }
  FUN_10ad055a0();
  if (iVar30 == 0) {
LAB_10a4da990:
    lVar18 = param_2[1];
    puVar26 = *(ulong **)(lVar18 + 0xd0);
    if (*(ulong **)(lVar18 + 0xd8) != puVar26) {
      lVar19 = 0;
      uStack_f0 = (char *)*puVar26;
      aplStack_e8[0] = (long *)CONCAT44(aplStack_e8[0]._4_4_,(int)puVar26[1]);
      do {
        *(float *)((long)aplStack_e8 + lVar19 + -8) = -*(float *)((long)aplStack_e8 + lVar19 + -8);
        lVar19 = lVar19 + 4;
      } while (lVar19 != 0xc);
      fVar36 = *(float *)(lVar18 + 0x2a0) +
               uStack_f0._4_4_ * *(float *)(lVar18 + 0x280) +
               *(float *)(lVar18 + 0x270) * (float)uStack_f0 +
               *(float *)(lVar18 + 0x290) * aplStack_e8[0]._0_4_;
      *(ulong *)(lVar18 + 0x3b4) =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar18 + 0x294) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar18 + 0x274) >> 0x20) * uStack_f0._4_4_ +
                    (float)((ulong)*(undefined8 *)(lVar18 + 0x264) >> 0x20) * (float)uStack_f0 +
                    (float)((ulong)*(undefined8 *)(lVar18 + 0x284) >> 0x20) * aplStack_e8[0]._0_4_)
                    / fVar36,((float)*(undefined8 *)(lVar18 + 0x294) +
                             (float)*(undefined8 *)(lVar18 + 0x274) * uStack_f0._4_4_ +
                             (float)*(undefined8 *)(lVar18 + 0x264) * (float)uStack_f0 +
                             (float)*(undefined8 *)(lVar18 + 0x284) * aplStack_e8[0]._0_4_) / fVar36
                   );
      *(float *)(lVar18 + 0x3bc) =
           (*(float *)(lVar18 + 0x29c) +
           uStack_f0._4_4_ * *(float *)(lVar18 + 0x27c) +
           *(float *)(lVar18 + 0x26c) * (float)uStack_f0 +
           *(float *)(lVar18 + 0x28c) * aplStack_e8[0]._0_4_) / fVar36;
      lVar18 = param_2[1];
    }
    param_1[0] = 4;
    param_1[1] = 1;
    puVar26 = (ulong *)(param_1 + 2);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0x3f800000;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0x3f800000;
    param_1[0xc] = 0x3f800000;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0x3f800000;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0x3f800000;
    param_1[0x13] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0x3f800000;
    param_1[0x1c] = 0x3f800000;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0x3f800000;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0x3f800000;
    param_1[0x23] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0x3f800000;
    param_1[0x2c] = 0x3f800000;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0x3f800000;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x32] = 0xffffffff;
    FUN_10a4d92dc(puVar26,lVar18,&puStack_1a0);
    lVar18 = 0;
    uVar20 = 0;
    lVar19 = param_2[1];
    do {
      puVar24 = (undefined8 *)
                ((long)puVar26 +
                (-(uVar20 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar20 & 0xffffffff) << 2));
      uVar28 = *puVar24;
      *(undefined8 *)((long)&uStack_168 + lVar18) = puVar24[1];
      *(undefined8 *)((long)&uStack_170 + lVar18) = uVar28;
      uVar20 = (long)(int)uVar20 + 4;
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0x40);
    FUN_10a4d8e98(&uStack_130,lVar19 + 0x1a4,&uStack_170);
    FUN_10a4d8ba8(&uStack_f0,&uStack_130);
    lVar18 = 0;
    uVar20 = 0;
    uStack_170 = pcStack_c0;
    uStack_168._0_4_ = (undefined4)uStack_b8;
    lVar19 = param_2[1];
    do {
      puVar24 = (undefined8 *)
                ((long)puVar26 +
                (-(uVar20 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar20 & 0xffffffff) << 2));
      uVar28 = *puVar24;
      *(undefined8 *)((long)&uStack_128 + lVar18) = puVar24[1];
      *(undefined8 *)((long)&uStack_130 + lVar18) = uVar28;
      uVar20 = (long)(int)uVar20 + 4;
      lVar18 = lVar18 + 0x10;
    } while (lVar18 != 0x40);
    lVar18 = 0;
    *(undefined4 *)(lVar19 + 0x124) = (undefined4)uStack_180;
    *(undefined8 *)(lVar19 + 0x10c) = uStack_198;
    *(undefined **)(lVar19 + 0x104) = puStack_1a0;
    *(undefined8 *)(lVar19 + 0x11c) = uStack_188;
    *(undefined8 *)(lVar19 + 0x114) = uStack_190;
    *(ulong *)(lVar19 + 0x130) = uStack_128;
    *(char **)(lVar19 + 0x128) = uStack_130;
    *(ulong *)(lVar19 + 0x140) = uStack_118;
    *(ulong *)(lVar19 + 0x138) = uStack_120;
    *(ulong *)(lVar19 + 0x150) = uStack_108;
    *(ulong *)(lVar19 + 0x148) = uStack_110;
    *(ulong *)(lVar19 + 0x160) = uStack_f8;
    *(undefined8 *****)(lVar19 + 0x158) = ppppuStack_100;
    fVar36 = 0.0;
    *(undefined4 *)(lVar19 + 0x16c) = (undefined4)uStack_b8;
    do {
      fVar36 = fVar36 + *(float *)((long)&uStack_170 + lVar18) *
                        *(float *)((long)&uStack_170 + lVar18);
      lVar18 = lVar18 + 4;
    } while (lVar18 != 0xc);
    *(float *)(lVar19 + 0x168) = SQRT(fVar36);
    *param_1 = 3;
    puVar24 = &uStack_f0;
    FUN_10a4d92dc(puVar24,param_2[1],&puStack_1a0);
    *(long **)(param_1 + 4) = aplStack_e8[0];
    *puVar26 = (ulong)uStack_f0;
    *(undefined8 *)(param_1 + 8) = uStack_d8;
    *(long **)(param_1 + 6) = aplStack_e8[1];
    *(undefined8 *)(param_1 + 0xc) = uStack_c8;
    *(undefined8 *)(param_1 + 10) = uStack_d0;
    *(undefined8 *)(param_1 + 0x10) = uStack_b8;
    *(char **)(param_1 + 0xe) = pcStack_c0;
    plVar16 = *(long **)(param_2[1] + 8);
    if (plVar16 == (long *)0x0) goto LAB_10a4db21c;
    unaff_x24 = (long *)*plVar16;
    func_0x00010967360c(unaff_x24,0);
    uStack_a8 = NEON_scvtf(uStack_1c0,4);
    uStack_b0 = 0;
    func_0x0001096723c8(*(undefined4 *)(param_2[1] + 0xf8),**(undefined8 **)(param_2[1] + 8),0,
                        &uStack_a8,&uStack_b0);
    unaff_d10 = uStack_180 & 0xffffffff;
    if ((bRam00000001137eb278 & 1) == 0) goto LAB_10a4db2c8;
    do {
      if ((bRam00000001137eb280 & 1) == 0) {
        iVar30 = 0x137eb280;
        ___cxa_guard_acquire();
        if (iVar30 != 0) {
          uRam00000001137eb25c = 0xbf248dbb;
          ___cxa_guard_release(0x1137eb280);
        }
      }
      plVar16 = (long *)param_2[1];
      cVar3 = *(char *)((long)plVar16 + 0xf4);
      lVar18 = 0xc;
      if (cVar3 == '\0') {
        lVar18 = 8;
      }
      fVar39 = *(float *)(lVar18 + 0x1137eb250);
      fVar36 = (float)unaff_d10;
      if ((*(int *)((long)plVar16 + 0x3c4) == 0) || (fVar39 <= fVar36)) {
        if (*(int *)((long)plVar16 + 0x3c4) != 2) goto LAB_10a4dad28;
        if ((((uVar27 & 1) != 0) && (0 < *(int *)((long)plVar16 + 0xfc))) &&
           (0 < (int)plVar16[0x20])) {
          uVar28 = NEON_ucvtf(CONCAT44((int)plVar16[0x20],*(int *)((long)plVar16 + 0xfc)),4);
          uVar32 = NEON_scvtf(uStack_1c0,4);
          uStack_f0 = (char *)CONCAT44(((float)((ulong)*unaff_x24 >> 0x20) /
                                       (float)((ulong)uVar28 >> 0x20)) *
                                       (float)((ulong)uVar32 >> 0x20),
                                       ((float)*unaff_x24 / (float)uVar28) * (float)uVar32);
          lVar18 = 0x168;
          if (cVar3 == '\0') {
            lVar18 = 0x16c;
          }
          uVar17 = 3;
          if (cVar3 == '\0') {
            uVar17 = 0;
          }
          func_0x000109672520(*(undefined4 *)((long)plVar16 + lVar18),0x3dcccccd,0x3d4ccccd,
                              0x40a00000,*(undefined8 *)plVar16[1],&uStack_f0,0,0,uVar17);
          plVar16 = (long *)param_2[1];
        }
        FUN_10a4d9d30(plVar16,uStack_1d0,uStack_1c8,&puStack_1a0,(long)&uStack_180 + 4);
        unaff_x24 = (long *)param_2[1];
      }
      else {
        *(undefined4 *)((long)plVar16 + 0x3c4) = 1;
LAB_10a4dad28:
        unaff_x24 = plVar16;
        plVar16 = (long *)0x2;
      }
      FUN_10a4d9a94(unaff_x24,plVar16);
      if ((uint)unaff_x24 != 0) {
        lVar19 = **(long **)(param_2[1] + 8);
        func_0x000109673688(lVar19,0);
        lVar18 = 0;
        iVar30 = 0;
        puVar24 = &uStack_f0;
        do {
          lVar21 = 0;
          lVar1 = (long)iVar30;
          iVar30 = iVar30 + 4;
          do {
            *(undefined4 *)((long)puVar24 + lVar21) = *(undefined4 *)(lVar19 + lVar1 * 4 + lVar21);
            lVar21 = lVar21 + 4;
          } while (lVar21 != 0x10);
          lVar18 = lVar18 + 1;
          puVar24 = puVar24 + 2;
        } while (lVar18 != 4);
        plVar23 = param_2 + 1;
        FUN_10a4d8fa4(&uStack_130,*plVar23 + 0x1a4,&uStack_f0);
        puVar26[1] = uStack_128;
        *puVar26 = (ulong)uStack_130;
        puVar26[3] = uStack_118;
        puVar26[2] = uStack_120;
        puVar26[5] = uStack_108;
        puVar26[4] = uStack_110;
        puVar26[7] = uStack_f8;
        puVar26[6] = (ulong)ppppuStack_100;
        *param_1 = (uint)((int)plVar16 == 0x2000 & *(byte *)(*plVar23 + 0xf4));
        FUN_10a4d8ba8(&uStack_130,&uStack_f0);
        lVar18 = 0;
        uVar20 = 0;
        ppppuStack_1b8 = ppppuStack_100;
        uStack_1b0 = (undefined4)uStack_f8;
        lVar19 = *plVar23;
        do {
          puVar24 = (undefined8 *)
                    ((long)puVar26 +
                    (-(uVar20 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar20 & 0xffffffff) << 2));
          uVar28 = *puVar24;
          *(undefined8 *)((long)&uStack_168 + lVar18) = puVar24[1];
          *(undefined8 *)((long)&uStack_170 + lVar18) = uVar28;
          uVar20 = (long)(int)uVar20 + 4;
          lVar18 = lVar18 + 0x10;
        } while (lVar18 != 0x40);
        lVar18 = 0;
        *(undefined4 *)(lVar19 + 0x124) = (undefined4)uStack_180;
        *(undefined8 *)(lVar19 + 0x10c) = uStack_198;
        *(undefined **)(lVar19 + 0x104) = puStack_1a0;
        *(undefined8 *)(lVar19 + 0x11c) = uStack_188;
        *(undefined8 *)(lVar19 + 0x114) = uStack_190;
        *(ulong *)(lVar19 + 0x130) = CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
        *(char **)(lVar19 + 0x128) = uStack_170;
        *(undefined8 *)(lVar19 + 0x140) = uStack_158;
        *(ulong *)(lVar19 + 0x138) = CONCAT17(cStack_159,uStack_160);
        *(undefined8 *)(lVar19 + 0x150) = uStack_148;
        *(undefined8 *)(lVar19 + 0x148) = uStack_150;
        *(undefined8 *)(lVar19 + 0x160) = uStack_138;
        *(undefined8 *)(lVar19 + 0x158) = uStack_140;
        fVar29 = 0.0;
        *(undefined4 *)(lVar19 + 0x16c) = (undefined4)uStack_f8;
        do {
          fVar29 = fVar29 + *(float *)((long)&ppppuStack_1b8 + lVar18) *
                            *(float *)((long)&ppppuStack_1b8 + lVar18);
          lVar18 = lVar18 + 4;
        } while (lVar18 != 0xc);
        *(float *)(lVar19 + 0x168) = SQRT(fVar29);
      }
      piVar8 = (int *)param_2[1];
      piVar8[0xf2] = piVar8[0xf2] + 1;
      piVar12 = piVar8;
      if (((char)piVar8[0x68] == '\x01') &&
         (*(undefined1 *)(piVar8 + 0x68) = 0, (*(byte *)(piVar8 + 0xf6) & 1) != 0)) {
        fVar38 = (float)piVar8[0xf4];
        fVar29 = (float)piVar8[0xf5];
        if ((char)piVar8[0xec] == '\0') {
          fVar38 = (float)piVar8[0xf5];
          fVar29 = 1.0 - (float)piVar8[0xf4];
        }
        if (((fVar36 < fVar39) || (fVar38 = fVar38 * (float)piVar8[0x3f], fVar38 < 0.0)) ||
           (fVar29 = fVar29 * (float)piVar8[0x40], fVar29 < 0.0)) goto LAB_10a4daec0;
        uStack_f0 = (char *)CONCAT44(fVar29,fVar38);
        FUN_10a4d97f4(piVar8,&uStack_f0,&puStack_1a0);
        piVar12 = (int *)param_2[1];
        if ((int)piVar8 == 0) goto LAB_10a4daec0;
        piVar12[0xf1] = 2;
        piVar12[0xed] = 0;
        piVar12[0xee] = 0;
        piVar12[0xef] = 0;
        param_2 = param_2 + 1;
        puVar24 = (undefined8 *)*param_2;
        FUN_10a4d9e00(fVar38,fVar29,puVar24,1,1,1,&puStack_1a0,param_1,uStack_1d0,uStack_1c8);
        uVar2 = *(int *)(*param_2 + 0x10) + 1;
        *(uint *)(*param_2 + 0x10) = uVar2;
        param_1[0x32] = uVar2;
        goto LAB_10a4db21c;
      }
LAB_10a4daec0:
      if (piVar12[0xf1] != 0) {
        param_1[0x32] = piVar12[4];
      }
      lVar18 = 0;
      uVar20 = 0;
      iVar30 = piVar12[0xf2];
      iVar14 = *piVar12;
      uStack_130 = (char *)0x0;
      do {
        puVar24 = (undefined8 *)
                  ((long)puVar26 +
                  (-(uVar20 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar20 & 0xffffffff) << 2));
        uVar28 = *puVar24;
        *(undefined8 *)((long)aplStack_e8 + lVar18) = puVar24[1];
        *(undefined8 *)((long)aplStack_e8 + lVar18 + -8) = uVar28;
        uVar20 = (long)(int)uVar20 + 4;
        lVar18 = lVar18 + 0x10;
      } while (lVar18 != 0x40);
      FUN_10a4d9608((float)(int)uStack_1c0,(float)uStack_1c0._4_4_,piVar12,&uStack_f0,2,&uStack_130)
      ;
      lVar18 = 0;
      uVar20 = 0;
      uStack_170 = (char *)0x0;
      puVar9 = (ulong *)param_2[1];
      do {
        puVar24 = (undefined8 *)
                  ((long)puVar26 +
                  (-(uVar20 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar20 & 0xffffffff) << 2));
        uVar28 = *puVar24;
        *(undefined8 *)((long)aplStack_e8 + lVar18) = puVar24[1];
        *(undefined8 *)((long)aplStack_e8 + lVar18 + -8) = uVar28;
        uVar20 = (long)(int)uVar20 + 4;
        lVar18 = lVar18 + 0x10;
      } while (lVar18 != 0x40);
      FUN_10a4d9608((float)(int)uStack_1c0,(float)uStack_1c0._4_4_,puVar9,&uStack_f0,0,&uStack_170);
      puVar10 = (undefined8 *)param_2[1];
      puVar24 = puVar10;
      puVar26 = puVar9;
      if (fVar36 < fVar39 || ((uVar27 | (uint)piVar12 ^ 0xffffffff) & 1) != 0) {
LAB_10a4daffc:
        if ((*(int *)((long)puVar24 + 0x3c4) != 0) &&
           ((((int)puVar9 == 0 || ((((ulong)plVar16 & 0x1022) == 0 && (iVar14 < iVar30)))) &&
            (fVar39 <= fVar36)))) {
          iVar30 = *(int *)(puVar24 + 0x20);
          fVar36 = 0.5;
          fVar39 = 0.65;
          if (*(char *)(puVar24 + 0x76) == '\0') {
            fVar39 = 0.5;
            fVar36 = 0.65;
          }
          fVar36 = fVar36 * (float)*(int *)((long)puVar24 + 0xfc);
          uStack_f0 = (char *)CONCAT44(fVar39 * (float)iVar30,fVar36);
          FUN_10a4d97f4(puVar24,&uStack_f0,&puStack_1a0);
          if ((int)puVar24 != 0) {
            param_2 = param_2 + 1;
            puVar24 = (undefined8 *)*param_2;
            FUN_10a4d9e00(fVar36,fVar39 * (float)iVar30,puVar24,0,0,2,&puStack_1a0,param_1,
                          uStack_1d0,uStack_1c8);
            *(undefined4 *)(*param_2 + 0x3c4) = 2;
          }
        }
      }
      else {
        fVar29 = (float)uStack_170;
        fVar38 = uStack_170._4_4_;
        fVar5 = (float)uStack_130;
        uVar20 = (ulong)uStack_130 & 0xffffffff;
        fVar6 = uStack_130._4_4_;
        FUN_10a4d97f4(puVar10,&uStack_130,&puStack_1a0);
        puVar24 = (undefined8 *)param_2[1];
        if ((int)puVar10 == 0) goto LAB_10a4daffc;
        if (*(int *)((long)puVar24 + 0x3c4) == 0) {
          *(undefined4 *)((long)puVar24 + 0x3c4) = 2;
          FUN_10a4d9e00(uVar20,fVar6,puVar24,0,1,2,&puStack_1a0,param_1,uStack_1d0,uStack_1c8);
        }
        else {
          uVar2 = (uint)unaff_x24 ^ 1;
          if (*(float *)((long)puVar24 + 0x3cc) <
              (fVar29 - fVar5) * (fVar29 - fVar5) + 0.0 + (fVar38 - fVar6) * (fVar38 - fVar6)) {
            uVar2 = 1;
          }
          if (((uVar2 & 1) == 0) && (((ulong)plVar16 & 0x1022) != 0 || iVar30 <= iVar14))
          goto LAB_10a4daffc;
          *(undefined4 *)((long)puVar24 + 0x3c4) = 2;
          FUN_10a4d9e00(uVar20,fVar6,puVar24,0,0,2,&puStack_1a0,param_1,uStack_1d0,uStack_1c8);
        }
      }
LAB_10a4db21c:
      iVar30 = (int)puVar24;
      FUN_10ad055a0();
      if (iVar30 != 0) {
        ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
        (*(code *)PTR___tlv_bootstrap_11340dfd8)();
        if (*ppuVar11 == (undefined *)0x0) {
          ppuVar11 = &PTR___tlv_bootstrap_11340dd98;
          (*(code *)PTR___tlv_bootstrap_11340dd98)();
          plVar16 = (long *)*ppuVar11;
          if ((plVar16 == (long *)0x0) || ((**(code **)(*plVar16 + 0x18))(), plVar16 == (long *)0x0)
             ) goto LAB_10a4db250;
          plVar16 = plVar16 + 7;
        }
        else {
          plVar16 = (long *)(*ppuVar11 + 8);
        }
        if (((uint)*(undefined8 *)(*plVar16 + 0x10) >> 1 & 1) != 0) {
          func_0x000107c2b054(&uStack_170,&UNK_10f65d16a);
          func_0x000107c2b054(&ppppuStack_1b8,"");
          uStack_130 = "null";
          uStack_f0 = uStack_130;
          if (cStack_159 < '\0') {
            if (CONCAT44(uStack_168._4_4_,(undefined4)uStack_168) != 0) {
              uStack_f0 = uStack_170;
            }
          }
          else if (cStack_159 != '\0') {
            uStack_f0 = (char *)&uStack_170;
          }
          if (cStack_1a1 < '\0') {
            if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
              uStack_130 = (char *)ppppuStack_1b8;
            }
          }
          else if (cStack_1a1 != '\0') {
            uStack_130 = (char *)&ppppuStack_1b8;
          }
          FUN_10a224324(&uStack_f0,&uStack_130);
          if (cStack_159 < '\0') {
            if (CONCAT44(uStack_168._4_4_,(undefined4)uStack_168) != 0) {
              func_0x000107c3192c(&uStack_f0,uStack_170);
              goto LAB_10a4db720;
            }
LAB_10a4db62c:
            uVar13 = 0;
            uStack_f0 = (char *)((ulong)uStack_f0 & 0xffffffffffffff00);
          }
          else {
            if (cStack_159 == '\0') goto LAB_10a4db62c;
            aplStack_e8[0] = (long *)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
            uStack_f0 = uStack_170;
            aplStack_e8[1] = (long *)CONCAT17(cStack_159,uStack_160);
LAB_10a4db720:
            uVar13 = 1;
          }
          uStack_d8 = CONCAT71(uStack_d8._1_7_,uVar13);
          if (cStack_1a1 < '\0') {
            if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
              func_0x000107c3192c(&uStack_130,ppppuStack_1b8);
              goto LAB_10a4db7e0;
            }
LAB_10a4db74c:
            uVar13 = 0;
            uStack_130 = (char *)((ulong)uStack_130 & 0xffffffffffffff00);
          }
          else {
            if (cStack_1a1 == '\0') goto LAB_10a4db74c;
            uStack_128 = CONCAT44(uStack_1ac,uStack_1b0);
            uStack_130 = (char *)ppppuStack_1b8;
            uStack_120 = CONCAT17(cStack_1a1,uStack_1a8);
LAB_10a4db7e0:
            uVar13 = 1;
          }
          uStack_118 = CONCAT71(uStack_118._1_7_,uVar13);
          FUN_10a234a0c(&uStack_f0,&uStack_130);
          goto LAB_10a4db7f4;
        }
      }
LAB_10a4db250:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
        return;
      }
      ___stack_chk_fail();
LAB_10a4db2c8:
      iVar30 = 0x137eb278;
      ___cxa_guard_acquire();
      if (iVar30 != 0) {
        uRam00000001137eb258 = 0xbd0ef2bd;
        ___cxa_guard_release(0x1137eb278);
      }
    } while( true );
  }
  ppuVar11 = &PTR___tlv_bootstrap_11340dfd8;
  (*(code *)PTR___tlv_bootstrap_11340dfd8)();
  if (*ppuVar11 == (undefined *)0x0) {
    ppuVar11 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    plVar16 = (long *)*ppuVar11;
    if ((plVar16 == (long *)0x0) || ((**(code **)(*plVar16 + 0x18))(), plVar16 == (long *)0x0))
    goto LAB_10a4da990;
    plVar16 = plVar16 + 7;
  }
  else {
    plVar16 = (long *)(*ppuVar11 + 8);
  }
  if (((uint)*(undefined8 *)(*plVar16 + 0x10) >> 1 & 1) == 0) goto LAB_10a4da990;
  func_0x000107c2b054(&uStack_170,&UNK_10f65d146);
  func_0x000107c2b054(&ppppuStack_1b8,"");
  if (cStack_159 < '\0') {
    uStack_f0 = "null";
    if (CONCAT44(uStack_168._4_4_,(undefined4)uStack_168) != 0) {
      uStack_f0 = uStack_170;
    }
  }
  else {
    uStack_f0 = "null";
    if (cStack_159 != '\0') {
      uStack_f0 = (char *)&uStack_170;
    }
  }
  if (cStack_1a1 < '\0') {
    uStack_130 = "null";
    if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
      uStack_130 = (char *)ppppuStack_1b8;
    }
  }
  else {
    uStack_130 = "null";
    if (cStack_1a1 != '\0') {
      uStack_130 = (char *)&ppppuStack_1b8;
    }
  }
  FUN_10a224324(&uStack_f0,&uStack_130);
  if (cStack_159 < '\0') {
    if (CONCAT44(uStack_168._4_4_,(undefined4)uStack_168) != 0) {
      func_0x000107c3192c(&uStack_f0,uStack_170);
      goto LAB_10a4db6d8;
    }
LAB_10a4db5b8:
    uVar13 = 0;
    uStack_f0 = (char *)((ulong)uStack_f0 & 0xffffffffffffff00);
  }
  else {
    if (cStack_159 == '\0') goto LAB_10a4db5b8;
    aplStack_e8[0] = (long *)CONCAT44(uStack_168._4_4_,(undefined4)uStack_168);
    uStack_f0 = uStack_170;
    aplStack_e8[1] = (long *)CONCAT17(cStack_159,uStack_160);
LAB_10a4db6d8:
    uVar13 = 1;
  }
  uStack_d8 = CONCAT71(uStack_d8._1_7_,uVar13);
  if (cStack_1a1 < '\0') {
    if (CONCAT44(uStack_1ac,uStack_1b0) != 0) {
      func_0x000107c3192c(&uStack_130,ppppuStack_1b8);
      goto LAB_10a4db7b8;
    }
LAB_10a4db704:
    uVar13 = 0;
    uStack_130 = (char *)((ulong)uStack_130 & 0xffffffffffffff00);
  }
  else {
    if (cStack_1a1 == '\0') goto LAB_10a4db704;
    uStack_128 = CONCAT44(uStack_1ac,uStack_1b0);
    uStack_130 = (char *)ppppuStack_1b8;
    uStack_120 = CONCAT17(cStack_1a1,uStack_1a8);
LAB_10a4db7b8:
    uVar13 = 1;
  }
  uStack_118 = CONCAT71(uStack_118._1_7_,uVar13);
  FUN_10a234a0c(&uStack_f0,&uStack_130);
LAB_10a4db7f4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a4db7f8);
  (*pcVar7)();
}



/* Entry: 10a4db8b8; end: 10a4db9af;  */

long ****** FUN_10a4db8b8(long ******param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long ******pppppplVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long *******ppppppplVar6;
  undefined **ppuVar7;
  long ******pppppplVar8;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long ******pppppplVar9;
  undefined8 unaff_x28;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  long ******pppppplStack_8e8;
  long *****ppppplStack_8e0;
  long *****ppppplStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  long ******pppppplStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [900];
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 in_stack_ffffffffffffffd8;
  
  if ((param_3 == 0) || (*(int *)(param_3 + 0x198) != 1)) {
    return param_1;
  }
  if (*(long *)(param_3 + 0xa8) == 0) {
    ppuVar7 = &PTR_PTR_1133026b8;
  }
  else {
    if (param_2 != 0) {
      FUN_10a4da464(&uStack_ec,param_1,param_2,*(long *)(param_3 + 0xa8),param_3 + 0x198);
      puVar1 = (undefined8 *)0xcc;
      __Znwm();
      puVar1[0x15] = CONCAT44(uStack_40,uStack_44);
      puVar1[0x14] = CONCAT44(uStack_48,uStack_4c);
      puVar1[0x17] = CONCAT44(uStack_30,uStack_34);
      puVar1[0x16] = CONCAT44(uStack_38,uStack_3c);
      *(undefined8 *)((long)puVar1 + 0xc4) = in_stack_ffffffffffffffd8;
      *(ulong *)((long)puVar1 + 0xbc) = CONCAT44(uStack_2c,uStack_30);
      puVar1[0xd] = uStack_84;
      puVar1[0xc] = uStack_8c;
      puVar1[0xf] = CONCAT44(uStack_70,uStack_74);
      puVar1[0xe] = uStack_7c;
      puVar1[0x11] = CONCAT44(uStack_60,uStack_64);
      puVar1[0x10] = CONCAT44(uStack_68,uStack_6c);
      puVar1[0x13] = CONCAT44(uStack_50,uStack_54);
      puVar1[0x12] = CONCAT44(uStack_58,uStack_5c);
      puVar1[5] = uStack_c4;
      puVar1[4] = uStack_cc;
      puVar1[7] = uStack_b4;
      puVar1[6] = uStack_bc;
      puVar1[9] = uStack_a4;
      puVar1[8] = uStack_ac;
      puVar1[0xb] = uStack_94;
      puVar1[10] = uStack_9c;
      puVar1[1] = uStack_e4;
      *puVar1 = uStack_ec;
      puVar1[3] = uStack_d4;
      puVar1[2] = uStack_dc;
      pppppplVar2 = *(long *******)(param_3 + 0xd0);
      *(undefined8 **)(param_3 + 0xd0) = puVar1;
      if (pppppplVar2 == (long ******)0x0) {
        return (long ******)0x0;
      }
      __ZdlPv();
      return pppppplVar2;
    }
    ppuVar7 = &PTR_PTR_113302680;
    param_3 = 0;
  }
  ppppppplVar6 = (long *******)ppuVar7;
  FUN_10ae079a0(0,ppuVar7,param_3);
  uStack_60 = (undefined4)unaff_x28;
  uStack_5c = (undefined4)((ulong)unaff_x28 >> 0x20);
  uStack_58 = (undefined4)unaff_x27;
  uStack_54 = (undefined4)((ulong)unaff_x27 >> 0x20);
  uStack_50 = (undefined4)unaff_x26;
  uStack_4c = (undefined4)((ulong)unaff_x26 >> 0x20);
  uStack_48 = (undefined4)unaff_x25;
  uStack_44 = (undefined4)((ulong)unaff_x25 >> 0x20);
  uStack_40 = (undefined4)unaff_x24;
  uStack_3c = (undefined4)((ulong)unaff_x24 >> 0x20);
  uStack_38 = (undefined4)unaff_x23;
  uStack_34 = (undefined4)((ulong)unaff_x23 >> 0x20);
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  uStack_70 = (undefined4)*(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_6c = (undefined4)((ulong)*(undefined8 *)PTR____stack_chk_guard_11034bdc0 >> 0x20);
  pppppplVar2 = (long ******)0x0;
  if (ppppppplVar6 != (long *******)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppppppplVar6[0x13],
                  ppppppplVar6[0xf],ppppppplVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    pppppplVar9 = ppppppplVar6[0x12];
    pppppplVar8 = ppppppplVar6[0xb];
    uVar3 = 0;
    _clock_gettime_nsec_np();
    uVar4 = uVar3;
    _pthread_self();
    _pthread_mach_thread_np();
    pppppplStack_8e8 = (long ******)(ppppppplVar6 + 1);
    uStack_8b8 = *(undefined4 *)(ppppppplVar6 + 0xe);
    uStack_8c0 = uVar4 & 0xffffffff;
    pppppplStack_8b0 = (long ******)(ppppppplVar6 + 0x10);
    pppppplVar2 = *ppppppplVar6;
    ppuVar7 = (undefined **)&pppppplStack_8e8;
    uStack_8f0 = uStack_898;
    ppppplStack_8e0 = (long *****)pppppplVar8;
    ppppplStack_8d8 = (long *****)pppppplVar9;
    uStack_8d0 = (ulong)(pppppplVar9 != (long ******)0x0);
    uStack_8c8 = uVar3;
    FUN_10ae0784c(pppppplVar2,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == CONCAT44(uStack_6c,uStack_70)) {
    return pppppplVar2;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  func_0x00010ae087bc();
  FUN_10ae07e54(pppppplVar2);
  return pppppplVar2;
}



/* Entry: 10a4db9b0; end: 10a4dbaa7;  */

void FUN_10a4db9b0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  plVar8 = (long *)(param_1 + 0x60);
  if ((*plVar8 != 0) && (((uint)*(undefined8 *)(*plVar8 + 0x10) >> 1 & 1) != 0)) {
    func_0x0001092af8bc(plVar8);
    lVar6 = *plVar8;
    if ((*(byte *)(lVar6 + 0xb0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4dbaa8);
      (*pcVar4)();
    }
    uVar11 = *(undefined8 *)(lVar6 + 0xa0);
    uVar10 = *(undefined8 *)(lVar6 + 0x98);
    uVar9 = *(undefined8 *)(lVar6 + 0xa8);
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    *(undefined8 *)(lVar6 + 0xa8) = 0;
    *(undefined8 *)(lVar6 + 0x98) = 0;
    plVar5 = (long *)*plVar8;
    *plVar8 = 0;
    if (plVar5 != (long *)0x0) {
      puVar1 = (ulong *)(plVar5 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    puStack_38 = &uStack_50;
    func_0x00010a4f5ef0(&puStack_38);
    FUN_10a4f5cf8(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar11;
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    *(undefined8 *)(param_1 + 0x78) = uVar9;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    puStack_38 = &uStack_50;
    func_0x00010a4f5ef0(&puStack_38);
  }
  return;
}



/* Entry: 10a4dbaa8; end: 10a4dbab3;  */

undefined8 FUN_10a4dbaa8(void)

{
  return 0x16800000001;
}



/* Entry: 10a4dbab4; end: 10a4dc3d7;  */

/* WARNING: Removing unreachable block (ram,0x00010a4dc1a0) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1a4) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1ac) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1b4) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1b8) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1d8) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1dc) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1e4) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1ec) */
/* WARNING: Removing unreachable block (ram,0x00010a4dc1f0) */

void FUN_10a4dbab4(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  code *pcVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 *puStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  
  if ((*(byte *)(param_5 + 0x268) & 1) == 0) goto LAB_10a4dc30c;
  plVar22 = (long *)(param_5 + 0x240);
  plVar1 = (long *)(param_1 + 0x10);
  uVar8 = (uint)(char)*(byte *)(param_1 + 0x27);
  uVar25 = (ulong)uVar8;
  uVar19 = *(ulong *)(param_1 + 0x18);
  if (-1 < (int)uVar8) {
    uVar19 = (ulong)*(byte *)(param_1 + 0x27);
  }
  bVar6 = *(byte *)(param_5 + 599);
  uVar5 = *(ulong *)(param_5 + 0x248);
  if (-1 < (char)bVar6) {
    uVar5 = (ulong)bVar6;
  }
  if (uVar19 == uVar5) {
    plVar17 = (long *)*plVar1;
    if (-1 < (int)uVar8) {
      plVar17 = plVar1;
    }
    plVar24 = (long *)*plVar22;
    if (-1 < (char)bVar6) {
      plVar24 = plVar22;
    }
    _memcmp(plVar17,plVar24);
    if ((int)plVar17 != 0) goto LAB_10a4dbb48;
  }
  else {
LAB_10a4dbb48:
    lVar12 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    if ((lVar12 != 0) && (func_0x00010a5093ac(), (*(byte *)(param_5 + 0x268) & 1) == 0))
    goto LAB_10a4dc30c;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar1,plVar22);
    uVar25 = (ulong)*(byte *)(param_1 + 0x27);
  }
  if (((uint)uVar25 >> 7 & 1) == 0) {
    uVar19 = uVar25 & 0xff;
  }
  else {
    uVar19 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar19 != 0) {
    puVar23 = *(undefined8 **)(param_1 + 8);
    if (puVar23 == (undefined8 *)0x0) {
      if ((*(byte *)(param_5 + 0x268) & 1) == 0) goto LAB_10a4dc30c;
      pcVar13 = (code *)0x38;
      __Znwm();
      pcVar21 = pcVar13 + 8;
      *(long *)pcVar21 = 0;
      *(long *)(pcVar13 + 0x10) = 0;
      *(undefined ***)pcVar13 = &PTR_DAT_110bb3748;
      pcStack_a0 = pcVar13 + 0x18;
      uVar19 = *(ulong *)(param_1 + 0x18);
      plVar22 = *(long **)(param_1 + 0x10);
      if (-1 < (char)uVar25) {
        uVar19 = uVar25 & 0xff;
        plVar22 = plVar1;
      }
      FUN_10a4f0e48(pcStack_a0,plVar22,uVar19);
      puVar23 = (undefined8 *)0x90;
      pcStack_80 = pcStack_a0;
      pcStack_78 = pcVar13;
      __Znwm();
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
        if (bVar10) {
          *(long *)pcVar21 = *(long *)pcVar21 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      *puVar23 = 0;
      puVar23[1] = 0;
      uVar14 = 0x10;
      pcStack_98 = pcVar13;
      __Znwm();
      func_0x00010959b8bc();
      puVar23[2] = uVar14;
      puVar15 = (undefined8 *)0x20;
      __Znwm();
      pcVar13 = pcStack_98;
      *puVar15 = &PTR_FUN_110bea4a8;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = uVar14;
      puVar23[3] = puVar15;
      puVar23[4] = 0x32aaaba7;
      puVar23[6] = 0;
      puVar23[5] = 0;
      puVar23[8] = 0;
      puVar23[7] = 0;
      puVar23[10] = 0;
      puVar23[9] = 0;
      puVar23[0xc] = 0;
      puVar23[0xb] = 0;
      puVar23[0xe] = 0;
      puVar23[0xd] = 0;
      puVar23[0xf] = 0;
      *(undefined4 *)(puVar23 + 0x10) = 0xffffffff;
      puVar23[0x11] = 0;
      if (pcStack_98 != (code *)0x0) {
        pcVar21 = pcStack_98 + 8;
        do {
          lVar12 = *(long *)pcVar21;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
          if (bVar10) {
            *(long *)pcVar21 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcStack_98 + 0x10))(pcStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar13);
        }
      }
      lVar12 = *(long *)(param_1 + 8);
      *(undefined8 **)(param_1 + 8) = puVar23;
      if (lVar12 != 0) {
        func_0x00010a5093ac();
      }
      pcVar13 = pcStack_78;
      if (pcStack_78 != (code *)0x0) {
        pcVar21 = pcStack_78 + 8;
        do {
          lVar12 = *(long *)pcVar21;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
          if (bVar10) {
            *(long *)pcVar21 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*(long *)pcStack_78 + 0x10))(pcStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar13);
        }
      }
      puVar23 = *(undefined8 **)(param_1 + 8);
    }
    plVar22 = *(long **)(param_3 + 8);
    if (plVar22 != (long *)0x0) {
      plVar1 = plVar22 + 1;
      do {
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    FUN_10a4db9b0(puVar23);
    if (0.2 < *(double *)(param_4 + 0x20) - (double)puVar23[0x11] && puVar23[0xc] == 0) {
      if ((*(byte *)(param_5 + 0x268) & 1) == 0) {
LAB_10a4dc30c:
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10a4dc310);
        (*pcVar13)();
      }
      if ((*(byte *)(param_5 + 0x264) & 1) == 0) {
        iVar18 = (int)*(undefined8 *)(param_2 + 0x10);
        iVar20 = (int)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
        iVar11 = iVar18;
        if (iVar18 <= iVar20) {
          iVar11 = iVar20;
        }
        iVar3 = iVar18;
        if (iVar20 <= iVar18) {
          iVar3 = iVar20;
        }
        uVar8 = (int)(((float)iVar11 / (float)iVar3) * 224.0 + 0.5) + 3U & 0xfffffff8;
        uVar4 = uVar8;
        uVar9 = 0xe0;
        if (iVar18 <= iVar20) {
          uVar4 = 0xe0;
          uVar9 = uVar8;
        }
        uVar19 = (ulong)uVar4 | (ulong)(uVar9 >> 3) << 0x23;
      }
      else {
        uVar19 = 0xe0000000e0;
      }
      uVar25 = param_4 + 0x198;
      FUN_10a0ec6f0();
      bVar10 = (uVar25 & 1) != 0;
      uVar25 = uVar19 >> 0x20;
      if (bVar10) {
        uVar25 = uVar19;
      }
      uStack_a8 = uVar19 & 0xffffffff;
      if (bVar10) {
        uStack_a8 = uVar19 >> 0x20;
      }
      uStack_a8 = uStack_a8 | uVar25 << 0x20;
      iVar11 = *(int *)(param_2 + 0x24);
      if (*(int *)(puVar23 + 0x10) != iVar11) {
        *(int *)(puVar23 + 0x10) = iVar11;
        FUN_10a1b498c(&pcStack_a0,iVar11,1);
        func_0x00010a343394(puVar23,&pcStack_a0);
        pcVar13 = pcStack_98;
        if (pcStack_98 != (code *)0x0) {
          pcVar21 = pcStack_98 + 8;
          do {
            lVar12 = *(long *)pcVar21;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
            if (bVar10) {
              *(long *)pcVar21 = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*(long *)pcStack_98 + 0x10))(pcStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar13);
          }
        }
      }
      puVar15 = (undefined8 *)*puVar23;
      iVar11 = (int)param_4 + 0x198;
      FUN_10a0ec6f0();
      pcStack_a0 = (code *)CONCAT44(pcStack_a0._4_4_,iVar11);
      (**(code **)*puVar15)(&uStack_b8,puVar15,param_2,&pcStack_a0,&uStack_a8);
      lVar12 = puVar23[2];
      plVar1 = (long *)puVar23[3];
      if (plVar1 != (long *)0x0) {
        plVar17 = plVar1 + 1;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar10) {
            *plVar17 = *plVar17 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      FUN_109d1a80c();
      plVar17 = plStack_b0;
      puVar15 = (undefined8 *)*puVar15;
      if (plVar1 != (long *)0x0) {
        plVar24 = plVar1 + 1;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar10) {
            *plVar24 = *plVar24 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      if (plStack_b0 != (long *)0x0) {
        plVar24 = plStack_b0 + 1;
        do {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar10) {
            *plVar24 = *plVar24 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plVar24 = (long *)puVar15[2];
      pcStack_98 = (code *)0x0;
      puStack_90 = (undefined8 *)0x0;
      if (plVar24 == (long *)0x0) {
        puVar16 = (undefined8 *)0xf0;
        __Znwm();
        *(undefined2 *)(puVar16 + 3) = 4;
        puVar16[2] = 0;
        puVar16[1] = 0x200000006;
        puVar16[5] = 0;
        puVar16[4] = 0;
        puVar16[7] = 0;
        puVar16[6] = 0;
        puVar16[9] = 0;
        puVar16[8] = 0;
        puVar16[0xb] = 0;
        puVar16[10] = 0;
        puVar16[0xd] = 0;
        puVar16[0xc] = 0;
        puVar16[0xf] = 0;
        puVar16[0xe] = 0;
        puVar16[0x10] = 0;
        puVar16[0x11] = puVar16 + 3;
        puVar16[0x12] = 0;
        *(undefined1 *)(puVar16 + 0x13) = 0;
        *(undefined1 *)(puVar16 + 0x16) = 0;
        *puVar16 = &PTR_DAT_110be9090;
        pcStack_a0 = (code *)(puVar16 + 0x17);
        *(long *)pcStack_a0 = lVar12;
        puVar16[0x18] = plVar1;
        puVar16[0x19] = uStack_b8;
        puVar16[0x1a] = plVar17;
        *(undefined1 *)(puVar16 + 0x1c) = 1;
        puVar16[0x1d] = 0;
        pcStack_88 = FUN_10a4f54a8;
        pcStack_98 = (code *)puVar16;
        puStack_90 = puVar16;
      }
      else {
        pcStack_80 = (code *)0x0;
        (**(code **)(*plVar24 + 0x28))(plVar24,0,&pcStack_80);
        if (pcStack_80 != (code *)0x0) {
          func_0x0001092af97c(&pcStack_80);
          goto LAB_10a4dc30c;
        }
        puVar16 = (undefined8 *)0xf8;
        __Znwm();
        puVar16[2] = 0;
        puVar16[1] = 0x200000006;
        *(undefined2 *)(puVar16 + 3) = 4;
        puVar16[5] = 0;
        puVar16[4] = 0;
        puVar16[7] = 0;
        puVar16[6] = 0;
        puVar16[9] = 0;
        puVar16[8] = 0;
        puVar16[0xb] = 0;
        puVar16[10] = 0;
        puVar16[0xd] = 0;
        puVar16[0xc] = 0;
        puVar16[0xf] = 0;
        puVar16[0xe] = 0;
        puVar16[0x10] = 0;
        puVar16[0x11] = puVar16 + 3;
        puVar16[0x12] = 0;
        *(undefined1 *)(puVar16 + 0x13) = 0;
        *(undefined1 *)(puVar16 + 0x16) = 0;
        *puVar16 = &PTR_FUN_110be9020;
        puVar16[0x17] = lVar12;
        puVar16[0x18] = plVar1;
        puVar16[0x19] = uStack_b8;
        puVar16[0x1a] = plVar17;
        *(undefined1 *)(puVar16 + 0x1c) = 1;
        puVar16[0x1d] = 0;
        puVar16[0x1e] = plVar24;
        if (pcStack_98 != (code *)0x0) {
          pcVar13 = pcStack_98 + 8;
          do {
            uVar19 = *(ulong *)pcVar13;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
            if (bVar10) {
              *(ulong *)pcVar13 = uVar19 - 4;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((uVar19 & 0x1fffffffc) == 4) {
            do {
              uVar19 = *(ulong *)pcVar13;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pcVar13,0x10);
              if (bVar10) {
                *(ulong *)pcVar13 = uVar19 - 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (uVar19 - 1 == 0) {
              (**(code **)(*(long *)pcStack_98 + 8))();
            }
          }
        }
        pcStack_98 = (code *)puVar16;
        if (puStack_90 != (undefined8 *)0x0) {
          func_0x0001092b4274(&puStack_90);
        }
        pcStack_88 = FUN_10a4f5478;
        pcStack_a0 = (code *)(puVar16 + 0x17);
        puStack_90 = puVar16;
        __ZNSt13exception_ptrD1Ev(&pcStack_80);
      }
      pcVar13 = pcStack_a0;
      if (*(long *)(pcStack_a0 + 0x30) != 0) {
        func_0x0001092b4274();
      }
      *(undefined8 **)(pcVar13 + 0x30) = puStack_90;
      puStack_90 = (undefined8 *)0x0;
      pcStack_80 = pcStack_88;
      pcStack_78 = pcStack_a0;
      puStack_70 = puVar15;
      (**(code **)*puVar15)(puVar15,&pcStack_80);
      pcVar13 = pcStack_98;
      pcStack_98 = (code *)0x0;
      if ((puStack_90 != (undefined8 *)0x0) &&
         (func_0x0001092b4274(&puStack_90), pcStack_98 != (code *)0x0)) {
        pcVar21 = pcStack_98 + 8;
        do {
          uVar19 = *(ulong *)pcVar21;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
          if (bVar10) {
            *(ulong *)pcVar21 = uVar19 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *(ulong *)pcVar21;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
            if (bVar10) {
              *(ulong *)pcVar21 = uVar19 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*(long *)pcStack_98 + 8))();
          }
        }
      }
      plVar17 = (long *)puVar23[0xc];
      if (plVar17 != (long *)0x0) {
        puVar2 = (ulong *)(plVar17 + 1);
        do {
          uVar19 = *puVar2;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar10) {
            *puVar2 = uVar19 - 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uVar19 & 0x1fffffffc) == 4) {
          do {
            uVar19 = *puVar2;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar10) {
              *puVar2 = uVar19 - 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (uVar19 - 1 == 0) {
            (**(code **)(*plVar17 + 8))();
          }
        }
      }
      puVar23[0xc] = pcVar13;
      puVar23[0x11] = *(undefined8 *)(param_4 + 0x20);
      if (plVar1 != (long *)0x0) {
        plVar17 = plVar1 + 1;
        do {
          lVar12 = *plVar17;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar10) {
            *plVar17 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      if (plStack_b0 != (long *)0x0) {
        plVar1 = plStack_b0 + 1;
        do {
          lVar12 = *plVar1;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b0);
        }
      }
    }
    FUN_10a4db9b0(puVar23);
    if ((undefined8 *)(*(long *)(param_4 + 0x118) + 0x10) != puVar23 + 0xd) {
      FUN_10a4f5b88();
    }
    if (plVar22 != (long *)0x0) {
      plVar1 = plVar22 + 1;
      do {
        lVar12 = *plVar1;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
      }
    }
  }
  return;
}



/* Entry: 10a4dc3d8; end: 10a4dc3db;  */

long FUN_10a4dc3d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a4dc3dc; end: 10a4dc427;  */

undefined8 * FUN_10a4dc3dc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110be8338;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x00010a5093ac();
  }
  return param_1;
}



/* Entry: 10a4dc428; end: 10a4dc42b;  */

undefined8 * FUN_10a4dc428(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110be8338;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x00010a5093ac();
  }
  return param_1;
}



/* Entry: 10a4dc42c; end: 10a4dc43f;  */

void FUN_10a4dc42c(void)

{
  FUN_10a4dc3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a4dc440; end: 10a4dc48b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4dc46c) */

void FUN_10a4dc440(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a4dc48c; end: 10a4dc7e3;  */

void FUN_10a4dc48c(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined7 uStack_d0;
  char cStack_c9;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110be83a0);
  if ((int)plVar6 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be83a0);
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110be83c0);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((int)plVar6 != 0) {
      iVar12 = 0;
      plVar1 = (long *)(param_1 + 0x10);
      do {
        (**(code **)(*param_2 + 0x218))(param_2,iVar12);
        (**(code **)(*param_2 + 0xa0))(&uStack_e0,param_2,&PTR_DAT_110be83e0);
        uVar15 = 0;
        (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110be8400);
        (**(code **)(*param_2 + 0x220))(param_2);
        puVar9 = *(undefined8 **)(param_1 + 0x18);
        if (puVar9 < *(undefined8 **)(param_1 + 0x20)) {
          if (cStack_c9 < '\0') {
            func_0x000107c3192c(puVar9,uStack_e0,uStack_d8);
          }
          else {
            puVar9[2] = CONCAT17(cStack_c9,uStack_d0);
            puVar9[1] = uStack_d8;
            *puVar9 = uStack_e0;
          }
          *(undefined4 *)(puVar9 + 3) = uVar15;
          plVar7 = puVar9 + 4;
          *(long **)(param_1 + 0x18) = plVar7;
        }
        else {
          lVar13 = (long)puVar9 - *plVar1;
          uVar2 = (lVar13 >> 5) + 1;
          if (uVar2 >> 0x3b != 0) {
            FUN_10a4f5ea8();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a4dc7a8);
            (*pcVar5)();
          }
          uVar8 = (long)*(undefined8 **)(param_1 + 0x20) - *plVar1;
          uVar10 = (long)uVar8 >> 4;
          if (uVar10 <= uVar2) {
            uVar10 = uVar2;
          }
          if (0x7fffffffffffffdf < uVar8) {
            uVar10 = 0x7ffffffffffffff;
          }
          plStack_a8 = plVar1;
          if (uVar10 == 0) {
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = plVar1;
            FUN_10a4f5ebc();
          }
          puVar9 = (undefined8 *)((long)plVar7 + lVar13);
          plStack_b0 = plVar7 + uVar10 * 4;
          plStack_b8 = puVar9;
          plStack_c8 = plVar7;
          plStack_c0 = puVar9;
          if (cStack_c9 < '\0') {
            func_0x000107c3192c(puVar9,uStack_e0,uStack_d8);
          }
          else {
            puVar9[2] = CONCAT17(cStack_c9,uStack_d0);
            puVar9[1] = uStack_d8;
            *puVar9 = uStack_e0;
          }
          *(undefined4 *)(puVar9 + 3) = uVar15;
          plStack_b8 = plStack_b8 + 4;
          puVar14 = *(undefined8 **)(param_1 + 0x10);
          puVar4 = *(undefined8 **)(param_1 + 0x18);
          ppuStack_98 = &puStack_80;
          ppuStack_90 = &puStack_78;
          puVar3 = (undefined8 *)((long)plStack_c0 + ((long)puVar14 - (long)puVar4));
          puVar9 = puVar14;
          puStack_78 = puVar3;
          plStack_a0 = plVar1;
          puStack_80 = puVar3;
          if ((long)puVar14 - (long)puVar4 == 0) {
            uStack_88 = 1;
          }
          else {
            do {
              uVar16 = puVar9[1];
              uVar11 = *puVar9;
              puStack_78[2] = puVar9[2];
              puStack_78[1] = uVar16;
              *puStack_78 = uVar11;
              puVar9[1] = 0;
              puVar9[2] = 0;
              *puVar9 = 0;
              *(undefined4 *)(puStack_78 + 3) = *(undefined4 *)(puVar9 + 3);
              puVar9 = puVar9 + 4;
              puStack_78 = puStack_78 + 4;
            } while (puVar9 != puVar4);
            uStack_88 = 1;
            do {
              if (*(char *)((long)puVar14 + 0x17) < '\0') {
                __ZdlPv(*puVar14);
              }
              puVar14 = puVar14 + 4;
            } while (puVar14 != puVar4);
          }
          FUN_10a4f5e30(&plStack_a0);
          plVar7 = plStack_b8;
          plStack_c8 = *(long **)(param_1 + 0x10);
          *(undefined8 **)(param_1 + 0x10) = puVar3;
          uVar11 = *(undefined8 *)(param_1 + 0x20);
          *(long **)(param_1 + 0x20) = plStack_b0;
          *(long **)(param_1 + 0x18) = plStack_b8;
          plStack_c0 = plStack_c8;
          plStack_b8 = plStack_c8;
          plStack_b0 = (long *)uVar11;
          func_0x00010959bfc8(&plStack_c8);
        }
        *(long **)(param_1 + 0x18) = plVar7;
        if (cStack_c9 < '\0') {
          __ZdlPv(uStack_e0);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != (int)plVar6);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  return;
}



/* Entry: 10a4dc7e4; end: 10a4dc8cf;  */

void FUN_10a4dc7e4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be83a0);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110be83c0);
  lVar2 = *(long *)(param_1 + 0x18);
  for (lVar1 = *(long *)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110be83e0,lVar1);
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(lVar1 + 0x18),param_2,&PTR_DAT_110be8400);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010a4dc8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a4dc8d0; end: 10a4dcb5f;  */

void FUN_10a4dc8d0(long param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 uStack_39;
  long *plStack_38;
  
  lVar8 = param_1;
  FUN_10a5094b0();
  if (lVar8 == 0) {
    plStack_38 = param_2;
    FUN_10a509594(param_1,param_2,&UNK_10dd5b8f9,&plStack_38,&uStack_39);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              ((long *)(param_1 + 0x28),param_2 + 3);
    uVar1 = *(undefined1 *)((long)param_2 + 0x34);
    *(int *)(param_1 + 0x40) = (int)param_2[6];
    *(undefined1 *)(param_1 + 0x44) = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x48,param_2 + 7);
    uVar10 = *(undefined8 *)((long)param_2 + 0x66);
    uVar7 = *(undefined8 *)((long)param_2 + 0x5e);
    lVar8 = param_2[10];
    *(long *)(param_1 + 0x68) = param_2[0xb];
    *(long *)(param_1 + 0x60) = lVar8;
    *(undefined8 *)(param_1 + 0x76) = uVar10;
    *(undefined8 *)(param_1 + 0x6e) = uVar7;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_1 + 0x80,param_2 + 0xe);
    lVar8 = param_2[0x11];
    *(long *)(param_1 + 0xa0) = param_2[0x12];
    *(long *)(param_1 + 0x98) = lVar8;
    if ((long *)(param_1 + 0x28) != param_2 + 3) {
      FUN_10a292b24(param_1 + 0xa8,param_2[0x13],param_2 + 0x14);
    }
    return;
  }
  plVar5 = (long *)param_2[0x13];
  while (plVar5 != param_2 + 0x14) {
    plStack_38 = plVar5 + 4;
    lVar4 = lVar8 + 0xa8;
    FUN_10a4f5f30(lVar4,plStack_38,&UNK_10dd5b8f9,&plStack_38,&uStack_39);
    lVar9 = plVar5[7];
    *(long *)(lVar4 + 0x40) = plVar5[8];
    *(long *)(lVar4 + 0x38) = lVar9;
    lVar11 = plVar5[10];
    lVar9 = plVar5[9];
    lVar13 = plVar5[0xc];
    lVar12 = plVar5[0xb];
    lVar15 = plVar5[0xe];
    lVar14 = plVar5[0xd];
    lVar16 = plVar5[0xf];
    *(long *)(lVar4 + 0x80) = plVar5[0x10];
    *(long *)(lVar4 + 0x78) = lVar16;
    *(long *)(lVar4 + 0x70) = lVar15;
    *(long *)(lVar4 + 0x68) = lVar14;
    *(long *)(lVar4 + 0x60) = lVar13;
    *(long *)(lVar4 + 0x58) = lVar12;
    *(long *)(lVar4 + 0x50) = lVar11;
    *(long *)(lVar4 + 0x48) = lVar9;
    plVar2 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar3 = (long *)*plVar5 != plVar6;
        plVar6 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10a4dcb60; end: 10a4dd1ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a4dcef8) */
/* WARNING: Removing unreachable block (ram,0x00010a4dcca8) */
/* WARNING: Removing unreachable block (ram,0x00010a4dcc40) */
/* WARNING: Removing unreachable block (ram,0x00010a4dcbdc) */
/* WARNING: Removing unreachable block (ram,0x00010a4dcc94) */
/* WARNING: Removing unreachable block (ram,0x00010a4dcee8) */
/* WARNING: Removing unreachable block (ram,0x00010a4dcf08) */

void FUN_10a4dcb60(long *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *****pppppuVar4;
  undefined8 ***pppuVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  undefined8 **ppuStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined8 ****ppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  undefined8 ****ppppuStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined7 uStack_f8;
  char cStack_f1;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 ***pppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  FUN_10a09d9a0(auStack_150,param_2,0);
  lVar8 = 0xa8;
  __Znwm();
  FUN_10a22e58c();
  func_0x0001095a4b1c(lVar8 + 0x98);
  *param_1 = lVar8;
  FUN_10a177b84(&pppuStack_90,auStack_150);
  uStack_68 = uStack_88;
  ppppuStack_70 = (undefined8 ****)pppuStack_90;
  uStack_60 = uStack_80;
  plVar9 = (long *)0x38;
  __Znwm();
  plVar11 = plVar9 + 1;
  *plVar11 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_DAT_110bb3748;
  plStack_170 = plVar9 + 3;
  *plStack_170 = (long)&PTR_FUN_110ba56f0;
  plVar9[5] = uStack_68;
  plVar9[4] = (long)ppppuStack_70;
  plVar9[6] = uStack_60;
  uStack_60 = uStack_60 & 0xffffffffffffff;
  ppppuStack_70 = (undefined8 ****)((ulong)ppppuStack_70 & 0xffffffffffffff00);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_168 = plVar9;
  plStack_160 = plStack_170;
  plStack_158 = plVar9;
  func_0x000107c2b054(&ppppuStack_70,"");
  FUN_10a177ca8(&ppuStack_b0,auStack_150);
  uStack_88 = uStack_a8;
  pppuStack_90 = (undefined8 ***)ppuStack_b0;
  uStack_80 = uStack_a0;
  uVar1 = uStack_68;
  if (-1 < (long)uStack_60) {
    uVar1 = uStack_60 >> 0x38;
  }
  if (uVar1 == 0) {
    uStack_188 = uStack_a8;
    ppuStack_190 = ppuStack_b0;
    uStack_180 = uStack_a0;
  }
  else {
    FUN_10a096efc(&uStack_108,auStack_150);
    if (cStack_f1 < '\0') {
      func_0x000107c3192c(&uStack_f0,uStack_108,uStack_100);
    }
    else {
      uStack_e8 = uStack_100;
      uStack_f0 = uStack_108;
      uStack_e0 = CONCAT17(cStack_f1,uStack_f8);
    }
    uVar1 = uStack_68;
    pppppuVar4 = (undefined8 *****)ppppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar1 = uStack_60 >> 0x38;
      pppppuVar4 = &ppppuStack_70;
    }
    puVar10 = &uStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar10,pppppuVar4,uVar1);
    uStack_c8 = puVar10[1];
    uStack_d0 = *puVar10;
    uStack_c0 = puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    FUN_10a4de5ec(&ppppuStack_138,auStack_150);
    if ((char)bStack_121 < '\0') {
      func_0x000107c3192c(&ppppuStack_120,ppppuStack_138,uStack_130);
    }
    else {
      uStack_118 = uStack_130;
      ppppuStack_120 = ppppuStack_138;
      uStack_110 = (ulong)bStack_121 << 0x38;
    }
    uVar1 = uStack_118;
    pppppuVar4 = (undefined8 *****)ppppuStack_120;
    if (-1 < (long)uStack_110) {
      uVar1 = uStack_110 >> 0x38;
      pppppuVar4 = &ppppuStack_120;
    }
    puVar10 = &uStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar10,pppppuVar4,uVar1);
    uStack_a8 = puVar10[1];
    ppuStack_b0 = (undefined8 **)*puVar10;
    uStack_a0 = puVar10[2];
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = 0;
    if ((long)uStack_110 < 0) {
      __ZdlPv(ppppuStack_120);
    }
    if ((char)bStack_121 < '\0') {
      __ZdlPv(ppppuStack_138);
    }
    if ((long)uStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    if ((long)uStack_e0 < 0) {
      __ZdlPv(uStack_f0);
    }
    if (cStack_f1 < '\0') {
      __ZdlPv(uStack_108);
    }
    FUN_10a177b84(&uStack_108,auStack_150);
    FUN_10a09d9a0(&ppppuStack_120,&ppuStack_b0,0);
    FUN_10a177c38(&uStack_f0,&uStack_108,&ppppuStack_120);
    if ((long)uStack_e0 < 0) {
      func_0x000107c3192c(&uStack_d0,uStack_f0,uStack_e8);
    }
    else {
      uStack_c8 = uStack_e8;
      uStack_d0 = uStack_f0;
      uStack_c0 = uStack_e0;
    }
    iVar7 = (int)&uStack_d0;
    FUN_10ad01a04();
    if ((long)uStack_c0 < 0) {
      __ZdlPv(uStack_d0);
    }
    if (uStack_e0._7_1_ < '\0') {
      __ZdlPv(uStack_f0);
    }
    if (uStack_110._7_1_ < '\0') {
      __ZdlPv(ppppuStack_120);
    }
    pppuVar5 = pppuStack_90;
    uVar1 = uStack_88;
    uVar6 = uStack_80;
    if (cStack_f1 < '\0') {
      __ZdlPv(uStack_108);
      pppuVar5 = pppuStack_90;
      uVar1 = uStack_88;
      uVar6 = uStack_80;
    }
    ppuStack_190 = ppuStack_b0;
    uStack_188 = uStack_a8;
    uStack_180 = uStack_a0;
    pppuStack_90 = pppuVar5;
    uStack_88 = uVar1;
    uStack_80 = uVar6;
    if (iVar7 == 0) {
      uStack_88 = 0;
      uStack_80 = 0;
      pppuStack_90 = (undefined8 ***)0x0;
      ppuStack_190 = pppuVar5;
      uStack_188 = uVar1;
      uStack_180 = uVar6;
    }
  }
  func_0x0001095a4c0c(*(undefined8 *)(lVar8 + 0x98),param_2 + 0x18,&plStack_170,&ppuStack_190);
  if ((long)uStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
  plVar9 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    plVar11 = plStack_168 + 1;
    do {
      lVar8 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar11 = plStack_158 + 1;
    do {
      lVar8 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  return;
}



/* Entry: 10a4dd1ac; end: 10a4dd1ef;  */

long FUN_10a4dd1ac(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  lStack_28 = param_1;
  FUN_10a0426d8(&lStack_28);
  return param_1;
}



/* Entry: 10a4dd1f0; end: 10a4dd363;  */

void FUN_10a4dd1f0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar10 = (long *)param_1[2];
  do {
    do {
      plVar1 = plVar10;
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar2 = param_2;
      FUN_10a28f158(param_2,plVar1 + 2);
      plVar10 = (long *)*plVar1;
    } while (lVar2 != 0);
    uVar4 = param_1[1];
    uVar3 = plVar1[1];
    uVar5 = uVar4 - 1;
    if ((uVar4 & uVar5) == 0) {
      uVar3 = uVar5 & uVar3;
    }
    else if (uVar4 <= uVar3) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar3 / uVar4;
      }
      uVar3 = uVar3 - uVar7 * uVar4;
    }
    plVar8 = *(long **)(*param_1 + uVar3 * 8);
    do {
      plVar6 = plVar8;
      plVar8 = (long *)*plVar6;
    } while ((long *)*plVar6 != plVar1);
    plVar8 = plVar10;
    if (plVar6 == param_1 + 2) {
LAB_10a4dd2a8:
      if (plVar10 == (long *)0x0) {
LAB_10a4dd2e0:
        *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
        plVar8 = (long *)*plVar1;
        goto LAB_10a4dd2e8;
      }
      uVar7 = plVar10[1];
      if ((uVar4 & uVar5) == 0) {
        uVar9 = uVar7 & uVar5;
      }
      else {
        uVar9 = uVar7;
        if (uVar4 <= uVar7) {
          uVar9 = 0;
          if (uVar4 != 0) {
            uVar9 = uVar7 / uVar4;
          }
          uVar9 = uVar7 - uVar9 * uVar4;
        }
      }
      if (uVar9 != uVar3) goto LAB_10a4dd2e0;
LAB_10a4dd2f0:
      if ((uVar4 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar4 <= uVar7) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar7 / uVar4;
        }
        uVar7 = uVar7 - uVar5 * uVar4;
      }
      if (uVar7 != uVar3) {
        *(long **)(*param_1 + uVar7 * 8) = plVar6;
        plVar8 = (long *)*plVar1;
      }
    }
    else {
      uVar7 = plVar6[1];
      if ((uVar4 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar4 <= uVar7) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar7 / uVar4;
        }
        uVar7 = uVar7 - uVar9 * uVar4;
      }
      if (uVar7 != uVar3) goto LAB_10a4dd2a8;
LAB_10a4dd2e8:
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        goto LAB_10a4dd2f0;
      }
    }
    *plVar6 = (long)plVar8;
    *plVar1 = 0;
    param_1[3] = param_1[3] + -1;
    func_0x00010a28f84c(plVar1 + 2);
    __ZdlPv(plVar1);
  } while( true );
}



/* Entry: 10a4dd364; end: 10a4de397;  */

long * FUN_10a4dd364(code **param_1,undefined8 *param_2,long *param_3,int param_4)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  bool bVar7;
  code *pcVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  code **ppcVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  code *pcVar17;
  code **ppcVar18;
  code *pcVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  code **ppcVar25;
  code **ppcVar26;
  code **ppcVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  code *pcStack_138;
  code *pcStack_130;
  code **ppcStack_128;
  code *pcStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined6 uStack_e0;
  undefined8 uStack_da;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  code **ppcStack_90;
  code *pcStack_88;
  code *pcStack_80;
  code *pcStack_78;
  code ***apppcStack_70 [2];
  
  if ((param_4 != 0) &&
     (ppcVar25 = param_1, FUN_10a509984(param_1,param_2), ppcVar25 != (code **)0x0)) {
    FUN_109d1a244(ppcVar25 + 5);
  }
  ppcVar26 = param_1;
  FUN_10a509984(param_1,param_2);
  ppcVar25 = ppcVar26 + 5;
  ppcVar27 = (code **)0x0;
  if (ppcVar26 == (code **)0x0) {
LAB_10a4dd590:
    FUN_109d1a80c();
    pcVar6 = *ppcVar27;
    plVar22 = *(long **)(pcVar6 + 0x10);
    pcStack_88 = (code *)0x0;
    pcStack_80 = (code *)0x0;
    if (plVar22 == (long *)0x0) {
      pcStack_130 = FUN_10a4dcb60;
      FUN_10a22e58c(&ppcStack_128,param_3);
      pcVar8 = (code *)0x158;
      __Znwm();
      *(undefined2 *)(pcVar8 + 0x18) = 4;
      *(undefined8 *)(pcVar8 + 0x10) = 0;
      *(undefined8 *)(pcVar8 + 8) = 0x200000006;
      *(undefined8 *)(pcVar8 + 0x28) = 0;
      *(undefined8 *)(pcVar8 + 0x20) = 0;
      *(undefined8 *)(pcVar8 + 0x38) = 0;
      *(undefined8 *)(pcVar8 + 0x30) = 0;
      *(undefined8 *)(pcVar8 + 0x48) = 0;
      *(undefined8 *)(pcVar8 + 0x40) = 0;
      *(undefined8 *)(pcVar8 + 0x58) = 0;
      *(undefined8 *)(pcVar8 + 0x50) = 0;
      *(undefined8 *)(pcVar8 + 0x68) = 0;
      *(undefined8 *)(pcVar8 + 0x60) = 0;
      *(undefined8 *)(pcVar8 + 0x78) = 0;
      *(undefined8 *)(pcVar8 + 0x70) = 0;
      *(undefined8 *)(pcVar8 + 0x80) = 0;
      *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
      *(undefined8 *)(pcVar8 + 0x90) = 0;
      pcVar8[0x98] = (code)0x0;
      pcVar8[0xa0] = (code)0x0;
      *(undefined ***)pcVar8 = &PTR_DAT_110be9138;
      *(code **)(pcVar8 + 0xa8) = pcStack_130;
      *(ulong *)(pcVar8 + 0xc0) = uStack_118;
      *(code **)(pcVar8 + 0xb8) = pcStack_120;
      *(code ***)(pcVar8 + 0xb0) = ppcStack_128;
      pcStack_120 = (code *)0x0;
      uStack_118 = 0;
      ppcStack_128 = (code **)0x0;
      *(undefined4 *)(pcVar8 + 200) = (undefined4)uStack_110;
      pcVar8[0xcc] = uStack_110._4_1_;
      *(undefined8 *)(pcVar8 + 0xd8) = uStack_100;
      *(long *)(pcVar8 + 0xd0) = lStack_108;
      *(long *)(pcVar8 + 0xe0) = lStack_f8;
      lStack_108 = 0;
      uStack_100 = 0;
      *(ulong *)(pcVar8 + 0xf0) = CONCAT26(uStack_e2,uStack_e8);
      *(undefined8 *)(pcVar8 + 0xe8) = uStack_f0;
      *(undefined8 *)(pcVar8 + 0xfe) = uStack_da;
      *(ulong *)(pcVar8 + 0xf6) = CONCAT62(uStack_e0,uStack_e2);
      *(long *)(pcVar8 + 0x118) = lStack_c0;
      *(undefined8 *)(pcVar8 + 0x110) = uStack_c8;
      *(undefined8 *)(pcVar8 + 0x108) = uStack_d0;
      lStack_f8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      lStack_c0 = 0;
      *(undefined8 *)(pcVar8 + 0x128) = uStack_b0;
      *(undefined8 *)(pcVar8 + 0x120) = uStack_b8;
      *(long **)(pcVar8 + 0x130) = plStack_a8;
      *(long *)(pcVar8 + 0x138) = lStack_a0;
      *(long *)(pcVar8 + 0x140) = lStack_98;
      if (lStack_98 == 0) {
        *(code **)(pcVar8 + 0x130) = pcVar8 + 0x138;
      }
      else {
        plStack_a8 = &lStack_a0;
        *(code **)(lStack_a0 + 0x10) = pcVar8 + 0x138;
        lStack_a0 = 0;
        lStack_98 = 0;
      }
      pcVar8[0x148] = (code)0x1;
      *(undefined8 *)(pcVar8 + 0x150) = 0;
      if (pcStack_88 != (code *)0x0) {
        puVar1 = (ulong *)((long)pcStack_88 + 8);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar7) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*(long *)pcStack_88 + 8))();
          }
        }
      }
      pcStack_88 = pcVar8;
      if (pcStack_80 != (code *)0x0) {
        func_0x0001092b4274(&pcStack_80);
      }
      ppcStack_90 = (code **)(pcVar8 + 0xa8);
      pcStack_80 = pcVar8;
      FUN_10a1f3f34(&plStack_a8,lStack_a0);
      if (lStack_c0 < 0) {
        __ZdlPv(uStack_d0);
      }
      if (lStack_f8 < 0) {
        __ZdlPv(lStack_108);
      }
      if ((long)uStack_118 < 0) {
        __ZdlPv(ppcStack_128);
      }
      pcStack_78 = FUN_10a4f6254;
    }
    else {
      apppcStack_70[0] = (code ***)0x0;
      (**(code **)(*plVar22 + 0x28))(plVar22,0,apppcStack_70);
      if (apppcStack_70[0] != (code ***)0x0) {
        func_0x0001092af97c(apppcStack_70);
        goto LAB_10a4de27c;
      }
      pcStack_130 = FUN_10a4dcb60;
      FUN_10a22e58c(&ppcStack_128,param_3);
      pcVar8 = (code *)0x160;
      __Znwm();
      *(undefined2 *)(pcVar8 + 0x18) = 4;
      *(undefined8 *)(pcVar8 + 0x10) = 0;
      *(undefined8 *)(pcVar8 + 8) = 0x200000006;
      *(undefined8 *)(pcVar8 + 0x28) = 0;
      *(undefined8 *)(pcVar8 + 0x20) = 0;
      *(undefined8 *)(pcVar8 + 0x38) = 0;
      *(undefined8 *)(pcVar8 + 0x30) = 0;
      *(undefined8 *)(pcVar8 + 0x48) = 0;
      *(undefined8 *)(pcVar8 + 0x40) = 0;
      *(undefined8 *)(pcVar8 + 0x58) = 0;
      *(undefined8 *)(pcVar8 + 0x50) = 0;
      *(undefined8 *)(pcVar8 + 0x68) = 0;
      *(undefined8 *)(pcVar8 + 0x60) = 0;
      *(undefined8 *)(pcVar8 + 0x78) = 0;
      *(undefined8 *)(pcVar8 + 0x70) = 0;
      *(undefined8 *)(pcVar8 + 0x80) = 0;
      *(code **)(pcVar8 + 0x88) = pcVar8 + 0x18;
      *(undefined8 *)(pcVar8 + 0x90) = 0;
      pcVar8[0x98] = (code)0x0;
      pcVar8[0xa0] = (code)0x0;
      *(undefined ***)pcVar8 = &PTR_FUN_110be90c8;
      *(code **)(pcVar8 + 0xa8) = pcStack_130;
      *(ulong *)(pcVar8 + 0xc0) = uStack_118;
      *(code **)(pcVar8 + 0xb8) = pcStack_120;
      *(code ***)(pcVar8 + 0xb0) = ppcStack_128;
      pcStack_120 = (code *)0x0;
      uStack_118 = 0;
      ppcStack_128 = (code **)0x0;
      *(undefined4 *)(pcVar8 + 200) = (undefined4)uStack_110;
      pcVar8[0xcc] = uStack_110._4_1_;
      *(undefined8 *)(pcVar8 + 0xd8) = uStack_100;
      *(long *)(pcVar8 + 0xd0) = lStack_108;
      *(long *)(pcVar8 + 0xe0) = lStack_f8;
      lStack_108 = 0;
      uStack_100 = 0;
      *(ulong *)(pcVar8 + 0xf0) = CONCAT26(uStack_e2,uStack_e8);
      *(undefined8 *)(pcVar8 + 0xe8) = uStack_f0;
      *(undefined8 *)(pcVar8 + 0xfe) = uStack_da;
      *(ulong *)(pcVar8 + 0xf6) = CONCAT62(uStack_e0,uStack_e2);
      *(long *)(pcVar8 + 0x118) = lStack_c0;
      *(undefined8 *)(pcVar8 + 0x110) = uStack_c8;
      *(undefined8 *)(pcVar8 + 0x108) = uStack_d0;
      lStack_f8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      lStack_c0 = 0;
      *(undefined8 *)(pcVar8 + 0x128) = uStack_b0;
      *(undefined8 *)(pcVar8 + 0x120) = uStack_b8;
      *(long **)(pcVar8 + 0x130) = plStack_a8;
      *(long *)(pcVar8 + 0x138) = lStack_a0;
      *(long *)(pcVar8 + 0x140) = lStack_98;
      if (lStack_98 == 0) {
        *(code **)(pcVar8 + 0x130) = pcVar8 + 0x138;
      }
      else {
        plStack_a8 = &lStack_a0;
        *(code **)(lStack_a0 + 0x10) = pcVar8 + 0x138;
        lStack_a0 = 0;
        lStack_98 = 0;
      }
      pcVar8[0x148] = (code)0x1;
      *(undefined8 *)(pcVar8 + 0x150) = 0;
      *(long **)(pcVar8 + 0x158) = plVar22;
      if (pcStack_88 != (code *)0x0) {
        puVar1 = (ulong *)((long)pcStack_88 + 8);
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar10 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar7) {
              *puVar1 = uVar10 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*(long *)pcStack_88 + 8))();
          }
        }
      }
      pcStack_88 = pcVar8;
      if (pcStack_80 != (code *)0x0) {
        func_0x0001092b4274(&pcStack_80);
      }
      ppcStack_90 = (code **)(pcVar8 + 0xa8);
      pcStack_80 = pcVar8;
      FUN_10a1f3f34(&plStack_a8,lStack_a0);
      if (lStack_c0 < 0) {
        __ZdlPv(uStack_d0);
      }
      if (lStack_f8 < 0) {
        __ZdlPv(lStack_108);
      }
      if ((long)uStack_118 < 0) {
        __ZdlPv(ppcStack_128);
      }
      pcStack_78 = FUN_10a4f6224;
      __ZNSt13exception_ptrD1Ev(apppcStack_70);
    }
    ppcVar25 = ppcStack_90;
    ppcVar27 = &pcStack_130;
    if (ppcStack_90[0x15] != (code *)0x0) {
      func_0x0001092b4274();
    }
    ppcVar25[0x15] = pcStack_80;
    pcStack_80 = (code *)0x0;
    pcStack_130 = pcStack_78;
    ppcStack_128 = ppcStack_90;
    pcStack_120 = pcVar6;
    (*(code *)**(undefined8 **)pcVar6)(pcVar6,&pcStack_130);
    pcStack_138 = pcStack_88;
    pcStack_88 = (code *)0x0;
    if ((pcStack_80 != (code *)0x0) && (func_0x0001092b4274(&pcStack_80), pcStack_88 != (code *)0x0)
       ) {
      puVar1 = (ulong *)((long)pcStack_88 + 8);
      do {
        uVar10 = *puVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar10 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = uVar10 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*(long *)pcStack_88 + 8))();
        }
      }
    }
    ppcVar25 = param_1;
    func_0x000107c2b05c(param_1,param_2);
    ppcVar26 = (code **)param_1[1];
    if (ppcVar26 != (code **)0x0) {
      uVar10 = (long)ppcVar26 - 1;
      if (((ulong)ppcVar26 & uVar10) == 0) {
        ppcVar27 = (code **)(uVar10 & (ulong)ppcVar25);
      }
      else {
        ppcVar27 = ppcVar25;
        if (ppcVar26 <= ppcVar25) {
          uVar16 = 0;
          if (ppcVar26 != (code **)0x0) {
            uVar16 = (ulong)ppcVar25 / (ulong)ppcVar26;
          }
          ppcVar27 = (code **)((long)ppcVar25 - uVar16 * (long)ppcVar26);
        }
      }
      if (*(undefined8 **)(*param_1 + (long)ppcVar27 * 8) != (undefined8 *)0x0) {
        for (pcVar6 = (code *)**(undefined8 **)(*param_1 + (long)ppcVar27 * 8);
            pcVar6 != (code *)0x0; pcVar6 = *(code **)pcVar6) {
          ppcVar13 = *(code ***)(pcVar6 + 8);
          if (ppcVar13 == ppcVar25) {
            ppcVar13 = param_1;
            func_0x000107c2b068(param_1,pcVar6 + 0x10,param_2);
            if (((ulong)ppcVar13 & 1) != 0) goto LAB_10a4dddbc;
          }
          else {
            if (((ulong)ppcVar26 & uVar10) == 0) {
              ppcVar13 = (code **)((ulong)ppcVar13 & uVar10);
            }
            else if (ppcVar26 <= ppcVar13) {
              uVar16 = 0;
              if (ppcVar26 != (code **)0x0) {
                uVar16 = (ulong)ppcVar13 / (ulong)ppcVar26;
              }
              ppcVar13 = (code **)((long)ppcVar13 - uVar16 * (long)ppcVar26);
            }
            if (ppcVar13 != ppcVar27) break;
          }
        }
      }
    }
    pcVar6 = (code *)0x30;
    __Znwm();
    pcStack_120 = (code *)0x0;
    *(undefined8 *)pcVar6 = 0;
    *(code ***)(pcVar6 + 8) = ppcVar25;
    pcStack_130 = pcVar6;
    ppcStack_128 = param_1;
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(pcVar6 + 0x10,*param_2,param_2[1]);
    }
    else {
      uVar28 = *param_2;
      *(undefined8 *)(pcVar6 + 0x18) = param_2[1];
      *(undefined8 *)(pcVar6 + 0x10) = uVar28;
      *(undefined8 *)(pcVar6 + 0x20) = param_2[2];
    }
    *(undefined8 *)(pcVar6 + 0x28) = 0;
    pcStack_120 = (code *)CONCAT71(pcStack_120._1_7_,1);
    if ((ppcVar26 == (code **)0x0) ||
       (*(float *)(param_1 + 4) * (float)ppcVar26 < (float)(param_1[3] + 1))) {
      uVar10 = 1;
      if ((code **)0x2 < ppcVar26) {
        uVar10 = (ulong)(((ulong)ppcVar26 & (long)ppcVar26 - 1U) != 0);
      }
      ppcVar27 = (code **)(uVar10 | (long)ppcVar26 << 1);
      ppcVar26 = (code **)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
      if (ppcVar27 <= ppcVar26) {
        ppcVar27 = ppcVar26;
      }
      if ((long)ppcVar27 - 1U == 0) {
        ppcVar27 = (code **)0x2;
      }
      else if (((ulong)ppcVar27 & (long)ppcVar27 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      ppcVar26 = (code **)param_1[1];
      if (ppcVar26 < ppcVar27) {
LAB_10a4ddbd0:
        if ((ulong)ppcVar27 >> 0x3d != 0) {
          func_0x000109ffded8();
          goto LAB_10a4de27c;
        }
        pcVar8 = (code *)((long)ppcVar27 << 3);
        __Znwm();
        pcVar9 = *param_1;
        *param_1 = pcVar8;
        if (pcVar9 != (code *)0x0) {
          __ZdlPv();
        }
        ppcVar26 = (code **)0x0;
        param_1[1] = (code *)ppcVar27;
        do {
          *(undefined8 *)(*param_1 + (long)ppcVar26 * 8) = 0;
          ppcVar26 = (code **)((long)ppcVar26 + 1);
        } while (ppcVar27 != ppcVar26);
        pcVar8 = param_1[2];
        ppcVar26 = ppcVar27;
        if (pcVar8 != (code *)0x0) {
          ppcVar13 = *(code ***)(pcVar8 + 8);
          uVar10 = (long)ppcVar27 - 1;
          if (((ulong)ppcVar27 & uVar10) == 0) {
            ppcVar13 = (code **)((ulong)ppcVar13 & uVar10);
          }
          else if (ppcVar27 <= ppcVar13) {
            uVar16 = 0;
            if (ppcVar27 != (code **)0x0) {
              uVar16 = (ulong)ppcVar13 / (ulong)ppcVar27;
            }
            ppcVar13 = (code **)((long)ppcVar13 - uVar16 * (long)ppcVar27);
          }
          *(code ***)(*param_1 + (long)ppcVar13 * 8) = param_1 + 2;
          pcVar9 = *(code **)pcVar8;
          while (pcVar9 != (code *)0x0) {
            ppcVar18 = *(code ***)(pcVar9 + 8);
            if (((ulong)ppcVar27 & uVar10) == 0) {
              ppcVar18 = (code **)((ulong)ppcVar18 & uVar10);
            }
            else if (ppcVar27 <= ppcVar18) {
              uVar16 = 0;
              if (ppcVar27 != (code **)0x0) {
                uVar16 = (ulong)ppcVar18 / (ulong)ppcVar27;
              }
              ppcVar18 = (code **)((long)ppcVar18 - uVar16 * (long)ppcVar27);
            }
            pcVar17 = pcVar9;
            if (ppcVar18 != ppcVar13) {
              pcVar19 = *param_1;
              if (*(long *)(pcVar19 + (long)ppcVar18 * 8) == 0) {
                *(code **)(pcVar19 + (long)ppcVar18 * 8) = pcVar8;
                ppcVar13 = ppcVar18;
              }
              else {
                *(long *)pcVar8 = *(long *)pcVar9;
                *(undefined8 *)pcVar9 = **(undefined8 **)(pcVar19 + (long)ppcVar18 * 8);
                **(long **)(pcVar19 + (long)ppcVar18 * 8) = (long)pcVar9;
                pcVar17 = pcVar8;
              }
            }
            pcVar8 = pcVar17;
            pcVar9 = *(code **)pcVar17;
          }
        }
      }
      else if (ppcVar27 < ppcVar26) {
        ppcVar13 = (code **)(long)((float)param_1[3] / *(float *)(param_1 + 4));
        if ((ppcVar26 < (code **)0x3) || (((ulong)ppcVar26 & (long)ppcVar26 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((code **)0x1 < ppcVar13) {
          ppcVar13 = (code **)(1L << (-LZCOUNT((long)ppcVar13 + -1) & 0x3fU));
        }
        if (ppcVar27 <= ppcVar13) {
          ppcVar27 = ppcVar13;
        }
        if (ppcVar27 < ppcVar26) {
          if (ppcVar27 != (code **)0x0) goto LAB_10a4ddbd0;
          pcVar8 = *param_1;
          *param_1 = (code *)0x0;
          if (pcVar8 != (code *)0x0) {
            __ZdlPv();
          }
          param_1[1] = (code *)0x0;
          ppcVar26 = (code **)0x0;
        }
        else {
          ppcVar26 = (code **)param_1[1];
        }
      }
      if (((ulong)ppcVar26 & (long)ppcVar26 - 1U) == 0) {
        ppcVar27 = (code **)((long)ppcVar26 - 1U & (ulong)ppcVar25);
      }
      else {
        ppcVar27 = ppcVar25;
        if (ppcVar26 <= ppcVar25) {
          uVar10 = 0;
          if (ppcVar26 != (code **)0x0) {
            uVar10 = (ulong)ppcVar25 / (ulong)ppcVar26;
          }
          ppcVar27 = (code **)((long)ppcVar25 - uVar10 * (long)ppcVar26);
        }
      }
    }
    pcVar8 = *param_1;
    puVar14 = *(undefined8 **)(pcVar8 + (long)ppcVar27 * 8);
    if (puVar14 == (undefined8 *)0x0) {
      ppcVar25 = param_1 + 2;
      *(code **)pcVar6 = *ppcVar25;
      *ppcVar25 = pcVar6;
      *(code ***)(pcVar8 + (long)ppcVar27 * 8) = ppcVar25;
      if (*(long *)pcVar6 != 0) {
        ppcVar25 = *(code ***)(*(long *)pcVar6 + 8);
        if (((ulong)ppcVar26 & (long)ppcVar26 - 1U) == 0) {
          ppcVar25 = (code **)((ulong)ppcVar25 & (long)ppcVar26 - 1U);
        }
        else if (ppcVar26 <= ppcVar25) {
          uVar10 = 0;
          if (ppcVar26 != (code **)0x0) {
            uVar10 = (ulong)ppcVar25 / (ulong)ppcVar26;
          }
          ppcVar25 = (code **)((long)ppcVar25 - uVar10 * (long)ppcVar26);
        }
        *(code **)(*param_1 + (long)ppcVar25 * 8) = pcVar6;
      }
    }
    else {
      *(undefined8 *)pcVar6 = *puVar14;
      *puVar14 = pcVar6;
    }
    param_1[3] = param_1[3] + 1;
LAB_10a4dddbc:
    func_0x0001092b4524(pcVar6 + 0x28,&pcStack_138);
    if (param_4 == 0) {
      plVar22 = (long *)0x0;
      if (pcStack_138 == (code *)0x0) goto LAB_10a4dde54;
    }
    else {
      FUN_109d1a244(&pcStack_138);
      if ((((uint)*(undefined8 *)(pcStack_138 + 0x10) >> 1 & 1) == 0) ||
         (((uint)*(undefined8 *)(pcStack_138 + 0x10) >> 5 & 1) != 0)) {
        if (((uint)*(undefined8 *)(pcStack_138 + 0x10) >> 5 & 1) == 0) {
          puVar14 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar14 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar14,&PTR_DAT_110ae8598,&DAT_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(&pcStack_130,pcStack_138 + 0x90);
          func_0x0001092af97c(&pcStack_130);
        }
        goto LAB_10a4de27c;
      }
      if (((byte)pcStack_138[0xa0] & 1) == 0) goto LAB_10a4de27c;
      plVar22 = *(long **)(pcStack_138 + 0x98);
    }
    pcVar6 = pcStack_138 + 8;
    do {
      uVar10 = *(ulong *)pcVar6;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
      if (bVar7) {
        *(ulong *)pcVar6 = uVar10 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        lVar11 = *(long *)pcVar6;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar6,0x10);
        if (bVar7) {
          *(long *)pcVar6 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 + -1 == 0) {
        (**(code **)(*(long *)pcStack_138 + 8))();
      }
    }
  }
  else {
    if (((uint)*(undefined8 *)(*ppcVar25 + 0x10) >> 1 & 1) != 0) {
      ppcVar27 = ppcVar25;
      func_0x0001092af8bc();
      if (((byte)(*ppcVar25)[0xa0] & 1) == 0) goto LAB_10a4de27c;
      ppcVar25 = *(code ***)(*ppcVar25 + 0x98);
      if ((*(float *)(ppcVar25 + 3) == *(float *)(param_3 + 3)) &&
         (*(char *)((long)ppcVar25 + 0x1c) == *(char *)((long)param_3 + 0x1c))) {
        bVar2 = *(byte *)((long)ppcVar25 + 0x37);
        pcVar6 = ppcVar25[5];
        if (-1 < (char)bVar2) {
          pcVar6 = (code *)(ulong)bVar2;
        }
        bVar3 = *(byte *)((long)param_3 + 0x37);
        pcVar8 = (code *)param_3[5];
        if (-1 < (char)bVar3) {
          pcVar8 = (code *)(ulong)bVar3;
        }
        if (pcVar6 == pcVar8) {
          ppcVar27 = (code **)ppcVar25[4];
          if (-1 < (char)bVar2) {
            ppcVar27 = ppcVar25 + 4;
          }
          plVar22 = (long *)param_3[4];
          if (-1 < (char)bVar3) {
            plVar22 = param_3 + 4;
          }
          _memcmp(ppcVar27,plVar22);
          if (((((((int)ppcVar27 == 0) && (*(int *)(ppcVar25 + 7) == (int)param_3[7])) &&
                (*(char *)((long)ppcVar25 + 0x44) == *(char *)((long)param_3 + 0x44))) &&
               ((*(float *)(ppcVar25 + 8) == *(float *)(param_3 + 8) &&
                (*(char *)((long)ppcVar25 + 0x46) == *(char *)((long)param_3 + 0x46))))) &&
              ((*(int *)(ppcVar25 + 9) == (int)param_3[9] &&
               ((*(char *)((long)ppcVar25 + 0x4c) == *(char *)((long)param_3 + 0x4c) &&
                (*(float *)(ppcVar25 + 10) == *(float *)(param_3 + 10))))))) &&
             ((*(char *)((long)ppcVar25 + 0x54) == *(char *)((long)param_3 + 0x54) &&
              ((*(float *)(ppcVar25 + 0xe) == *(float *)(param_3 + 0xe) &&
               (*(char *)((long)ppcVar25 + 0x74) == *(char *)((long)param_3 + 0x74))))))) {
            bVar2 = *(byte *)((long)ppcVar25 + 0x17);
            pcVar6 = ppcVar25[1];
            if (-1 < (char)bVar2) {
              pcVar6 = (code *)(ulong)bVar2;
            }
            bVar3 = *(byte *)((long)param_3 + 0x17);
            pcVar8 = (code *)param_3[1];
            if (-1 < (char)bVar3) {
              pcVar8 = (code *)(ulong)bVar3;
            }
            if (pcVar6 == pcVar8) {
              ppcVar27 = (code **)*ppcVar25;
              if (-1 < (char)bVar2) {
                ppcVar27 = ppcVar25;
              }
              plVar22 = (long *)*param_3;
              if (-1 < (char)bVar3) {
                plVar22 = param_3;
              }
              _memcmp(ppcVar27,plVar22);
              if ((int)ppcVar27 == 0) goto LAB_10a4dd3dc;
            }
          }
        }
      }
      goto LAB_10a4dd590;
    }
LAB_10a4dd3dc:
    FUN_10a509984(param_1,param_2);
    ppcVar25 = param_1 + 5;
    if ((param_1 == (code **)0x0) || (((uint)*(undefined8 *)(*ppcVar25 + 0x10) >> 1 & 1) == 0)) {
      return (long *)0x0;
    }
    func_0x0001092af8bc(ppcVar25);
    if (((byte)(*ppcVar25)[0xa0] & 1) == 0) goto LAB_10a4de27c;
    plVar22 = *(long **)(*ppcVar25 + 0x98);
  }
LAB_10a4dde54:
  if (plVar22 != (long *)0x0) {
    if ((*(char *)(plVar22[0x13] + 0x150) == '\x01') && (plVar22[0x12] == param_3[0x12])) {
      plVar23 = (long *)plVar22[0x10];
      if (plVar23 == plVar22 + 0x11) {
        return plVar22;
      }
      plVar24 = (long *)param_3[0x10];
      while( true ) {
        ppcVar25 = &pcStack_130;
        FUN_10a28f494(ppcVar25,plVar23 + 4,plVar24 + 4);
        if (((ulong)ppcVar25 & 1) == 0) break;
        plVar20 = (long *)plVar23[1];
        plVar15 = plVar23;
        if ((long *)plVar23[1] == (long *)0x0) {
          do {
            plVar23 = (long *)plVar15[2];
            bVar7 = (long *)*plVar23 != plVar15;
            plVar15 = plVar23;
          } while (bVar7);
        }
        else {
          do {
            plVar23 = plVar20;
            plVar20 = (long *)*plVar23;
          } while ((long *)*plVar23 != (long *)0x0);
        }
        plVar20 = (long *)plVar24[1];
        plVar15 = plVar24;
        if ((long *)plVar24[1] == (long *)0x0) {
          do {
            plVar24 = (long *)plVar15[2];
            bVar7 = (long *)*plVar24 != plVar15;
            plVar15 = plVar24;
          } while (bVar7);
        }
        else {
          do {
            plVar24 = plVar20;
            plVar20 = (long *)*plVar24;
          } while ((long *)*plVar24 != (long *)0x0);
        }
        if (plVar23 == plVar22 + 0x11) {
          return plVar22;
        }
      }
    }
    ppcStack_90 = (code **)0x0;
    pcStack_88 = (code *)0x0;
    pcStack_80 = (code *)0x0;
    lVar11 = param_3[0x12];
    func_0x000107c31930(&ppcStack_90);
    plVar23 = (long *)param_3[0x12];
    if (plVar23 == (long *)0x0) {
      plVar23 = (long *)0x0;
      plVar24 = (long *)0x0;
    }
    else {
      if ((ulong)plVar23 >> 0x3a != 0) {
        FUN_10a4f6124();
        goto LAB_10a4de27c;
      }
      FUN_10a4f6138();
      plVar24 = plVar23 + lVar11 * 8;
    }
    plVar20 = (long *)param_3[0x10];
    plVar15 = plVar23;
    ppcVar25 = ppcStack_90;
    while (ppcStack_90 = ppcVar25, plVar20 != param_3 + 0x11) {
      plVar12 = plVar20 + 4;
      FUN_10a0b4ec0(&ppcStack_90);
      if (plVar23 < plVar24) {
        lVar29 = plVar20[8];
        lVar11 = plVar20[7];
        lVar31 = plVar20[10];
        lVar30 = plVar20[9];
        lVar32 = plVar20[0xb];
        lVar34 = plVar20[0xe];
        lVar33 = plVar20[0xd];
        plVar23[5] = plVar20[0xc];
        plVar23[4] = lVar32;
        plVar23[7] = lVar34;
        plVar23[6] = lVar33;
        plVar23[1] = lVar29;
        *plVar23 = lVar11;
        plVar23[3] = lVar31;
        plVar23[2] = lVar30;
        plVar12 = plVar15;
      }
      else {
        lVar11 = (long)plVar23 - (long)plVar15;
        uVar10 = (lVar11 >> 6) + 1;
        if (uVar10 >> 0x3a != 0) {
          FUN_10a4f6124();
          goto LAB_10a4de27c;
        }
        uVar16 = (long)plVar24 - (long)plVar15 >> 5;
        if (uVar16 <= uVar10) {
          uVar16 = uVar10;
        }
        if (0x7fffffffffffffbf < (ulong)((long)plVar24 - (long)plVar15)) {
          uVar16 = 0x3ffffffffffffff;
        }
        FUN_10a4f6138();
        plVar23 = (long *)(uVar16 + lVar11);
        plVar24 = (long *)(uVar16 + (long)plVar12 * 0x40);
        lVar30 = plVar20[8];
        lVar29 = plVar20[7];
        lVar32 = plVar20[10];
        lVar31 = plVar20[9];
        lVar33 = plVar20[0xb];
        lVar35 = plVar20[0xe];
        lVar34 = plVar20[0xd];
        plVar23[5] = plVar20[0xc];
        plVar23[4] = lVar33;
        plVar23[7] = lVar35;
        plVar23[6] = lVar34;
        plVar23[1] = lVar30;
        *plVar23 = lVar29;
        plVar23[3] = lVar32;
        plVar23[2] = lVar31;
        plVar12 = plVar23 + (lVar11 >> 6) * -8;
        _memcpy(plVar12,plVar15,lVar11);
        if (plVar15 != (long *)0x0) {
          __ZdlPv(plVar15);
        }
      }
      plVar23 = plVar23 + 8;
      plVar5 = (long *)plVar20[1];
      plVar21 = plVar20;
      plVar15 = plVar12;
      ppcVar25 = ppcStack_90;
      if ((long *)plVar20[1] == (long *)0x0) {
        do {
          plVar20 = (long *)plVar21[2];
          bVar7 = (long *)*plVar20 != plVar21;
          plVar21 = plVar20;
        } while (bVar7);
      }
      else {
        do {
          plVar20 = plVar5;
          plVar5 = (long *)*plVar20;
        } while ((long *)*plVar20 != (long *)0x0);
      }
    }
    pcStack_130 = (code *)0x0;
    ppcStack_128 = (code **)0x0;
    pcStack_120 = (code *)0x0;
    FUN_10a0cf0cc(&pcStack_130,ppcVar25,pcStack_88,
                  ((long)pcStack_88 - (long)ppcVar25 >> 3) * -0x5555555555555555);
    uStack_118 = 0;
    uStack_110 = 0;
    lStack_108 = 0;
    lVar11 = (long)plVar23 - (long)plVar15;
    if (lVar11 != 0) {
      uVar10 = lVar11 >> 6;
      if (uVar10 >> 0x3a != 0) {
        FUN_10a4f6124();
LAB_10a4de27c:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4de280);
        (*pcVar6)();
      }
      FUN_10a4f6138();
      lStack_108 = uVar10 + (long)ppcVar25 * 0x40;
      uStack_118 = uVar10;
      uStack_110 = uVar10;
      _memmove();
      uStack_110 = uVar10 + lVar11;
    }
    if (plVar15 != (long *)0x0) {
      __ZdlPv(plVar15);
    }
    apppcStack_70[0] = &ppcStack_90;
    FUN_10a0426d8(apppcStack_70);
    func_0x0001095ac76c(plVar22[0x13],&pcStack_130,&uStack_118);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar22,param_3);
    lVar11 = param_3[3];
    *(undefined1 *)((long)plVar22 + 0x1c) = *(undefined1 *)((long)param_3 + 0x1c);
    *(int *)(plVar22 + 3) = (int)lVar11;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar22 + 4,param_3 + 4);
    lVar29 = param_3[8];
    lVar11 = param_3[7];
    uVar28 = *(undefined8 *)((long)param_3 + 0x46);
    *(undefined8 *)((long)plVar22 + 0x4e) = *(undefined8 *)((long)param_3 + 0x4e);
    *(undefined8 *)((long)plVar22 + 0x46) = uVar28;
    plVar22[8] = lVar29;
    plVar22[7] = lVar11;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (plVar22 + 0xb,param_3 + 0xb);
    lVar11 = param_3[0xe];
    plVar22[0xf] = param_3[0xf];
    plVar22[0xe] = lVar11;
    if (param_3 != plVar22) {
      FUN_10a292b24(plVar22 + 0x10,param_3[0x10],param_3 + 0x11);
    }
    if (uStack_118 != 0) {
      uStack_110 = uStack_118;
      __ZdlPv();
    }
    ppcStack_90 = &pcStack_130;
    FUN_10a0426d8(&ppcStack_90);
  }
  return plVar22;
}



/* Entry: 10a4de398; end: 10a4de53b;  */

void FUN_10a4de398(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uStack_60;
  undefined8 uStack_58;
  
  FUN_10a22dff8();
  uVar5 = param_3;
  FUN_10a0ec6f0();
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 4);
  if ((uVar5 & 1) != 0) {
    iVar1 = *(int *)(param_3 + 4);
    iVar2 = *(int *)(param_3 + 8);
  }
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 == (long *)0x0) {
    return;
  }
LAB_10a4de408:
  *(float *)(plVar11 + 0x13) = (float)iVar2 / (float)iVar1;
  plVar9 = (long *)plVar11[0x15];
  if (plVar9 == plVar11 + 0x16) {
    bVar6 = 0;
  }
  else {
    do {
      bVar6 = *(byte *)(plVar9 + 9);
      if ((bVar6 & 1) != 0) break;
      plVar10 = plVar9;
      plVar3 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar9 = (long *)plVar10[2];
          bVar4 = (long *)*plVar9 != plVar10;
          plVar10 = plVar9;
        } while (bVar4);
      }
      else {
        do {
          plVar9 = plVar3;
          plVar3 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
    } while (plVar9 != plVar11 + 0x16);
  }
  *(byte *)((long)plVar11 + 0x9c) = bVar6;
  FUN_10ad59dac();
  lVar8 = 0;
  uStack_60 = uVar5;
  uStack_58 = param_2;
  do {
    if (*(int *)((long)&uStack_60 + lVar8) != *(int *)(&UNK_10e4b9e68 + lVar8)) {
      if (*(int *)((long)&uStack_60 + lVar8) < *(int *)(&UNK_10e4b9e68 + lVar8)) {
        lVar8 = 0;
        goto LAB_10a4de49c;
      }
      break;
    }
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x10);
  uVar7 = 3;
  goto LAB_10a4de4f4;
  while (lVar8 = lVar8 + 4, lVar8 != 0x10) {
LAB_10a4de49c:
    if (*(int *)((long)&uStack_60 + lVar8) != *(int *)(&UNK_10e4b9e78 + lVar8)) {
      if (*(int *)((long)&uStack_60 + lVar8) < *(int *)(&UNK_10e4b9e78 + lVar8)) {
        lVar8 = 0;
        goto LAB_10a4de4cc;
      }
      break;
    }
  }
  uVar7 = 2;
  goto LAB_10a4de4f4;
  while (lVar8 = lVar8 + 4, lVar8 != 0x10) {
LAB_10a4de4cc:
    if (*(int *)((long)&uStack_60 + lVar8) != *(int *)(&UNK_10e4b9e88 + lVar8)) {
      uVar7 = (uint)(*(int *)(&UNK_10e4b9e88 + lVar8) <= *(int *)((long)&uStack_60 + lVar8));
      goto LAB_10a4de4f4;
    }
  }
  uVar7 = 1;
LAB_10a4de4f4:
  *(uint *)((long)plVar11 + 0xa4) = uVar7;
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return;
  }
  goto LAB_10a4de408;
}



/* Entry: 10a4de53c; end: 10a4de5eb;  */

void FUN_10a4de53c(undefined1 *param_1,int *param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  uVar3 = 0;
  uVar4 = 0;
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = *param_2;
    bVar2 = false;
    if (iVar1 != -1) {
      FUN_10a4cace0(&uStack_78,param_3);
      bVar2 = iVar1 == 0;
      uVar5 = uStack_78;
      FUN_10a0ecd48(param_2);
      uVar4 = (undefined4)uVar5;
      *(undefined8 *)(param_1 + 0x10) = uStack_70;
      *(undefined8 *)(param_1 + 8) = uStack_78;
      *(undefined8 *)(param_1 + 0x18) = uStack_68;
      *(undefined8 *)(param_1 + 0x20) = uStack_60;
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x28) = uStack_58;
    }
  }
  *param_1 = uVar3;
  param_1[1] = bVar2;
  *(undefined4 *)(param_1 + 4) = uVar4;
  return;
}



/* Entry: 10a4de5ec; end: 10a4de69f;  */

undefined8 ****** FUN_10a4de5ec(ulong *param_1,undefined8 ******param_2,ulong param_3)

{
  char cVar1;
  undefined8 ******ppppppuVar2;
  bool bVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *****pppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  __ZNKSt3__14__fs10filesystem4path11__extensionEv();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    ppppppuVar4 = (undefined8 ******)param_2[0x10];
    do {
      if (ppppppuVar4 == param_2 + 0x11) {
        return (undefined8 ******)0x0;
      }
      ppppppuVar5 = ppppppuVar4 + 4;
      cVar1 = *(char *)((long)ppppppuVar4 + 0x37);
      if (cVar1 < '\0') {
        if (ppppppuVar4[5] != (undefined8 *****)0x3) {
          if (ppppppuVar4[5] != (undefined8 *****)0x7) goto LAB_10a4de734;
          ppppppuVar5 = (undefined8 ******)*ppppppuVar5;
          goto LAB_10a4de704;
        }
        ppppppuVar5 = (undefined8 ******)*ppppppuVar5;
LAB_10a4de720:
        if (*(short *)ppppppuVar5 == 0x6b73 && *(char *)((long)ppppppuVar5 + 2) == 'y') {
          return (undefined8 ******)0x1;
        }
      }
      else if (cVar1 == '\a') {
LAB_10a4de704:
        if (*(int *)ppppppuVar5 == 0x5f766e69 && *(int *)((long)ppppppuVar5 + 3) == 0x796b735f) {
          return (undefined8 ******)0x1;
        }
      }
      else if (cVar1 == '\x03') goto LAB_10a4de720;
LAB_10a4de734:
      ppppppuVar5 = ppppppuVar4;
      ppppppuVar2 = (undefined8 ******)ppppppuVar4[1];
      if ((undefined8 ******)ppppppuVar4[1] == (undefined8 ******)0x0) {
        do {
          ppppppuVar4 = (undefined8 ******)ppppppuVar5[2];
          bVar3 = (undefined8 ******)*ppppppuVar4 != ppppppuVar5;
          ppppppuVar5 = ppppppuVar4;
        } while (bVar3);
      }
      else {
        do {
          ppppppuVar4 = ppppppuVar2;
          ppppppuVar2 = (undefined8 ******)*ppppppuVar4;
        } while ((undefined8 ******)*ppppppuVar4 != (undefined8 ******)0x0);
      }
    } while( true );
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    ppppppuVar5 = &pppppuStack_58;
    if (param_3 == 0) goto LAB_10a4de670;
  }
  else {
    ppppppuVar4 = (undefined8 ******)0x19;
    if ((param_3 | 7) != 0x17) {
      ppppppuVar4 = (undefined8 ******)((param_3 | 7) + 1);
    }
    ppppppuVar5 = ppppppuVar4;
    __Znwm();
    uStack_48 = (ulong)ppppppuVar4 | 0x8000000000000000;
    pppppuStack_58 = ppppppuVar5;
    uStack_50 = param_3;
  }
  ppppppuVar4 = ppppppuVar5;
  _memmove(ppppppuVar5,param_2,param_3);
  param_2 = ppppppuVar4;
LAB_10a4de670:
  *(undefined1 *)((long)ppppppuVar5 + param_3) = 0;
  param_1[1] = uStack_50;
  *param_1 = (ulong)pppppuStack_58;
  param_1[2] = uStack_48;
  return param_2;
}



/* Entry: 10a4de6a0; end: 10a4de77b;  */

undefined8 FUN_10a4de6a0(long param_1)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0x80);
  do {
    if (plVar4 == (long *)(param_1 + 0x88)) {
      return 0;
    }
    plVar5 = plVar4 + 4;
    cVar1 = *(char *)((long)plVar4 + 0x37);
    if (cVar1 < '\0') {
      if (plVar4[5] != 3) {
        if (plVar4[5] != 7) goto LAB_10a4de734;
        plVar5 = (long *)*plVar5;
        goto LAB_10a4de704;
      }
      plVar5 = (long *)*plVar5;
LAB_10a4de720:
      if ((short)*plVar5 == 0x6b73 && *(char *)((long)plVar5 + 2) == 'y') {
        return 1;
      }
    }
    else if (cVar1 == '\a') {
LAB_10a4de704:
      if ((int)*plVar5 == 0x5f766e69 && *(int *)((long)plVar5 + 3) == 0x796b735f) {
        return 1;
      }
    }
    else if (cVar1 == '\x03') goto LAB_10a4de720;
LAB_10a4de734:
    plVar5 = plVar4;
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar3 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar3);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a4de77c; end: 10a4df17b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4dee24) */
/* WARNING: Removing unreachable block (ram,0x00010a4dee34) */
/* WARNING: Removing unreachable block (ram,0x00010a4deeb0) */
/* WARNING: Removing unreachable block (ram,0x00010a4deec0) */
/* WARNING: Removing unreachable block (ram,0x00010a4def84) */
/* WARNING: Removing unreachable block (ram,0x00010a4def8c) */
/* WARNING: Removing unreachable block (ram,0x00010a4def3c) */
/* WARNING: Removing unreachable block (ram,0x00010a4def44) */

void FUN_10a4de77c(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 ****ppppuVar8;
  long *plVar9;
  undefined1 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 ****ppppuVar14;
  undefined4 uVar15;
  undefined8 ***pppuVar16;
  undefined8 ***pppuVar17;
  undefined8 ****ppppuStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined8 ****ppppuStack_1b0;
  long lStack_1a8;
  char cStack_199;
  undefined8 ****ppppuStack_198;
  long *plStack_190;
  undefined7 uStack_188;
  char cStack_181;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 auStack_c0 [2];
  undefined8 ****ppppuStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 ****ppppuStack_88;
  long *plStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  plVar12 = param_1;
  FUN_10ad055a0();
  ppuVar7 = &PTR___tlv_bootstrap_11340dfd8;
  if ((int)plVar12 != 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar6 == (undefined *)0x0) {
      ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar12 = (long *)*ppuVar6;
      if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0))
      goto LAB_10a4de7f0;
      plVar12 = plVar12 + 7;
    }
    else {
      plVar12 = (long *)(*ppuVar6 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppuStack_1d0,&UNK_10f65d1e9);
      func_0x000107c2b054(&ppppuStack_88,"");
      if (uStack_1c0 < 0) {
        uStack_110 = (undefined8 *****)"null";
        if (lStack_1c8 != 0) {
          uStack_110 = (undefined8 *****)ppppuStack_1d0;
        }
      }
      else {
        uStack_110 = (undefined8 *****)"null";
        if (uStack_1c0._7_1_ != '\0') {
          uStack_110 = &ppppuStack_1d0;
        }
      }
      ppppuStack_b0 = (undefined8 ****)"null";
      if (uStack_74._3_1_ != '\0') {
        ppppuStack_b0 = &ppppuStack_88;
      }
      FUN_10a224324(&uStack_110,&ppppuStack_b0);
      if (uStack_1c0 < 0) {
        if (lStack_1c8 == 0) goto LAB_10a4dee84;
        func_0x000107c3192c(&uStack_110,ppppuStack_1d0);
LAB_10a4def2c:
        uVar10 = 1;
      }
      else {
        if (uStack_1c0._7_1_ != '\0') {
          lStack_108 = lStack_1c8;
          uStack_110 = (undefined8 *****)ppppuStack_1d0;
          lStack_100 = uStack_1c0;
          goto LAB_10a4def2c;
        }
LAB_10a4dee84:
        uVar10 = 0;
        uStack_110 = (undefined8 *****)((ulong)uStack_110 & 0xffffffffffffff00);
      }
      uStack_f8 = CONCAT71(uStack_f8._1_7_,uVar10);
      if (uStack_74._3_1_ == '\0') {
        ppppuStack_b0 = (undefined8 ****)((ulong)ppppuStack_b0 & 0xffffffffffffff00);
      }
      else {
        plStack_a8 = plStack_80;
        ppppuStack_b0 = ppppuStack_88;
        uStack_a0 = CONCAT44(uStack_74,uStack_78);
      }
      uStack_98 = uStack_74._3_1_ != '\0';
      FUN_10a234a0c(&uStack_110,&ppppuStack_b0);
      goto LAB_10a4deff8;
    }
  }
LAB_10a4de7f0:
  lVar11 = *param_2;
  *(undefined8 *)(lVar11 + 0x10) = *param_6;
  *(undefined8 *)(lVar11 + 0x18) = param_6[1];
  *(undefined8 *)(lVar11 + 0x20) = param_6[2];
  *(undefined8 *)(lVar11 + 0x28) = param_6[3];
  *(undefined8 *)(lVar11 + 0x30) = param_6[4];
  *(undefined4 *)(lVar11 + 0x38) = *(undefined4 *)(param_6 + 5);
  lVar11 = *param_2;
  func_0x0001095a899c(lVar11,param_4,param_5);
  iVar5 = (int)lVar11;
  FUN_10ad055a0();
  if (iVar5 == 0) {
LAB_10a4de864:
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (long)(param_1 + 1);
    plVar12 = *(long **)(param_3 + 0x80);
    if (plVar12 != (long *)(param_3 + 0x88)) {
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      do {
        func_0x0001095a6adc(&uStack_110,*param_2,plVar12 + 4);
        lStack_178 = lStack_108;
        uStack_180 = uStack_110;
        uStack_168 = uStack_f8;
        lStack_170 = lStack_100;
        uStack_158 = uStack_e8;
        uStack_160 = uStack_f0;
        lStack_148 = lStack_d8;
        uStack_150 = uStack_e0;
        uStack_130 = 0;
        uStack_128 = 0;
        if (lStack_d8 != 0) {
          piVar1 = (int *)(lStack_d8 + 0x14);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_140 = (ulong)&uStack_180 | 8;
        puStack_138 = &uStack_130;
        if (uStack_110._4_4_ < 3) {
          uStack_130 = *puStack_c8;
          uStack_128 = puStack_c8[1];
        }
        else {
          uStack_180 = (undefined8 *****)((ulong)uStack_110 & 0xffffffff);
          func_0x000109a84868(&uStack_180,&uStack_110);
        }
        FUN_10a0f3c50(&plStack_118,&uStack_180,0,0xffffffff);
        if (lStack_148 != 0) {
          piVar1 = (int *)(lStack_148 + 0x14);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_180);
          }
        }
        lStack_148 = 0;
        uVar15 = 0;
        uStack_168 = 0;
        lStack_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        if (0 < uStack_180._4_4_) {
          lVar11 = 0;
          do {
            *(undefined4 *)(uStack_140 + lVar11 * 4) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < uStack_180._4_4_);
        }
        if (puStack_138 != &uStack_130 && puStack_138 != (undefined8 *)0x0) {
          uVar15 = 0;
          _free(puStack_138[-1]);
        }
        ppppuStack_88 = (undefined8 *****)0x0;
        plStack_80 = (long *)0x0;
        if ((char)plVar12[0xf] == '\x01') {
          func_0x0001095ad700(*param_2,plVar12 + 4);
          uStack_78 = uVar15;
        }
        FUN_10a4d0020(&ppppuStack_88,&plStack_118);
        plVar9 = param_1;
        FUN_10a4f73d8(param_1,&ppppuStack_1d0,plVar12 + 4);
        ppppuVar14 = (undefined8 ****)*plVar9;
        if (ppppuVar14 == (undefined8 ****)0x0) {
          ppppuVar14 = (undefined8 ****)0x50;
          __Znwm();
          uStack_a0 = 0;
          ppppuStack_b0 = ppppuVar14;
          plStack_a8 = param_1;
          if (*(char *)((long)plVar12 + 0x37) < '\0') {
            func_0x000107c3192c(ppppuVar14 + 4,plVar12[4],plVar12[5]);
          }
          else {
            pppuVar17 = (undefined8 ***)plVar12[5];
            pppuVar16 = (undefined8 ***)plVar12[4];
            ppppuVar14[6] = (undefined8 ***)plVar12[6];
            ppppuVar14[5] = pppuVar17;
            ppppuVar14[4] = pppuVar16;
          }
          ppppuVar14[7] = (undefined8 ***)0x0;
          ppppuVar14[8] = (undefined8 ***)0x0;
          ppppuVar14[9] = (undefined8 ***)0x0;
          FUN_10a4f7384(param_1,ppppuStack_1d0,plVar9,ppppuVar14);
        }
        ppppuVar8 = ppppuVar14 + 7;
        FUN_10a16b1ec(ppppuVar8,&ppppuStack_88);
        iVar5 = (int)ppppuVar8;
        *(undefined4 *)(ppppuVar14 + 9) = uStack_78;
        FUN_10ad055a0();
        if (iVar5 != 0) {
          if (*ppuVar7 == (undefined *)0x0) {
            plVar9 = (long *)*ppuVar6;
            if ((plVar9 == (long *)0x0) || ((**(code **)(*plVar9 + 0x18))(), plVar9 == (long *)0x0))
            goto LAB_10a4deaa4;
            plVar9 = plVar9 + 7;
          }
          else {
            plVar9 = (long *)(*ppuVar7 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar9 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&ppppuStack_198,&UNK_10f65d234);
            func_0x000107c2b054(&ppppuStack_1b0,"");
            if (cStack_181 < '\0') {
              ppppuStack_b0 = (undefined8 ****)"null";
              if (plStack_190 != (long *)0x0) {
                ppppuStack_b0 = ppppuStack_198;
              }
            }
            else {
              ppppuStack_b0 = (undefined8 ****)"null";
              if (cStack_181 != '\0') {
                ppppuStack_b0 = &ppppuStack_198;
              }
            }
            if (cStack_199 < '\0') {
              ppppuStack_1d0 = (undefined8 ****)"null";
              if (lStack_1a8 != 0) {
                ppppuStack_1d0 = ppppuStack_1b0;
              }
            }
            else {
              ppppuStack_1d0 = (undefined8 ****)"null";
              if (cStack_199 != '\0') {
                ppppuStack_1d0 = &ppppuStack_1b0;
              }
            }
            FUN_10a224324(&ppppuStack_b0,&ppppuStack_1d0);
            if (cStack_181 < '\0') {
              if (plStack_190 == (long *)0x0) goto LAB_10a4ded08;
              func_0x000107c3192c(&ppppuStack_b0,ppppuStack_198);
LAB_10a4ded24:
              uStack_98 = 1;
            }
            else {
              if (cStack_181 != '\0') {
                plStack_a8 = plStack_190;
                ppppuStack_b0 = ppppuStack_198;
                uStack_a0 = CONCAT17(cStack_181,uStack_188);
                goto LAB_10a4ded24;
              }
LAB_10a4ded08:
              uStack_98 = 0;
              ppppuStack_b0 = (undefined8 ****)((ulong)ppppuStack_b0 & 0xffffffffffffff00);
            }
            if (cStack_199 < '\0') {
              if (lStack_1a8 == 0) goto LAB_10a4ded50;
              func_0x000107c3192c(&ppppuStack_1d0,ppppuStack_1b0);
LAB_10a4ded6c:
              uStack_1b8 = 1;
            }
            else {
              if (cStack_199 != '\0') {
                lStack_1c8 = lStack_1a8;
                ppppuStack_1d0 = ppppuStack_1b0;
                goto LAB_10a4ded6c;
              }
LAB_10a4ded50:
              uStack_1b8 = 0;
              ppppuStack_1d0 = (undefined8 ****)((ulong)ppppuStack_1d0 & 0xffffffffffffff00);
            }
            FUN_10a234a0c(&ppppuStack_b0,&ppppuStack_1d0);
            goto LAB_10a4deff8;
          }
        }
LAB_10a4deaa4:
        plVar9 = plStack_80;
        if (plStack_80 != (long *)0x0) {
          plVar13 = plStack_80 + 1;
          do {
            lVar11 = *plVar13;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = plStack_118;
        plStack_118 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        if (lStack_d8 != 0) {
          piVar1 = (int *)(lStack_d8 + 0x14);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            func_0x000109a848d4(&uStack_110);
          }
        }
        lStack_d8 = 0;
        uStack_f8 = 0;
        lStack_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        if (0 < uStack_110._4_4_) {
          lVar11 = 0;
          do {
            *(undefined4 *)(lStack_d0 + lVar11 * 4) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 < uStack_110._4_4_);
        }
        if (puStack_c8 != auStack_c0 && puStack_c8 != (undefined8 *)0x0) {
          _free(puStack_c8[-1]);
        }
        plVar9 = (long *)plVar12[1];
        plVar13 = plVar12;
        if ((long *)plVar12[1] == (long *)0x0) {
          do {
            plVar12 = (long *)plVar13[2];
            bVar4 = (long *)*plVar12 != plVar13;
            plVar13 = plVar12;
          } while (bVar4);
        }
        else {
          do {
            plVar12 = plVar9;
            plVar9 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
      } while (plVar12 != (long *)(param_3 + 0x88));
    }
    return;
  }
  ppuVar6 = ppuVar7;
  (*(code *)PTR___tlv_bootstrap_11340dfd8)();
  if (*ppuVar6 == (undefined *)0x0) {
    ppuVar6 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    plVar12 = (long *)*ppuVar6;
    if ((plVar12 == (long *)0x0) || ((**(code **)(*plVar12 + 0x18))(), plVar12 == (long *)0x0))
    goto LAB_10a4de864;
    plVar12 = plVar12 + 7;
  }
  else {
    plVar12 = (long *)(*ppuVar6 + 8);
  }
  if (((uint)*(undefined8 *)(*plVar12 + 0x10) >> 1 & 1) == 0) goto LAB_10a4de864;
  func_0x000107c2b054(&ppppuStack_1d0,&UNK_10f65d206);
  func_0x000107c2b054(&ppppuStack_88,"");
  if (uStack_1c0 < 0) {
    uStack_110 = (undefined8 *****)"null";
    if (lStack_1c8 != 0) {
      uStack_110 = (undefined8 *****)ppppuStack_1d0;
    }
  }
  else {
    uStack_110 = (undefined8 *****)"null";
    if (uStack_1c0._7_1_ != '\0') {
      uStack_110 = &ppppuStack_1d0;
    }
  }
  ppppuStack_b0 = (undefined8 ****)"null";
  if (uStack_74._3_1_ != '\0') {
    ppppuStack_b0 = &ppppuStack_88;
  }
  FUN_10a224324(&uStack_110,&ppppuStack_b0);
  if (uStack_1c0 < 0) {
    if (lStack_1c8 == 0) goto LAB_10a4def10;
    func_0x000107c3192c(&uStack_110,ppppuStack_1d0);
LAB_10a4def74:
    uVar10 = 1;
  }
  else {
    if (uStack_1c0._7_1_ != '\0') {
      lStack_108 = lStack_1c8;
      uStack_110 = (undefined8 *****)ppppuStack_1d0;
      lStack_100 = uStack_1c0;
      goto LAB_10a4def74;
    }
LAB_10a4def10:
    uVar10 = 0;
    uStack_110 = (undefined8 *****)((ulong)uStack_110 & 0xffffffffffffff00);
  }
  uStack_f8 = CONCAT71(uStack_f8._1_7_,uVar10);
  if (uStack_74._3_1_ == '\0') {
    ppppuStack_b0 = (undefined8 ****)((ulong)ppppuStack_b0 & 0xffffffffffffff00);
  }
  else {
    plStack_a8 = plStack_80;
    ppppuStack_b0 = ppppuStack_88;
    uStack_a0 = CONCAT44(uStack_74,uStack_78);
  }
  uStack_98 = uStack_74._3_1_ != '\0';
  FUN_10a234a0c(&uStack_110,&ppppuStack_b0);
LAB_10a4deff8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a4deffc);
  (*pcVar3)();
}



/* Entry: 10a4df17c; end: 10a4dff07;  */

void FUN_10a4df17c(long *param_1,undefined8 *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,long *param_6)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined **ppuVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  long *plVar29;
  undefined8 *puVar30;
  long *plVar31;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined **)0xe8;
  __Znwm();
  *ppuVar9 = FUN_10a53538c;
  ppuVar9[1] = FUN_10a5359ec;
  puVar16 = (undefined *)*param_6;
  ppuVar9[0x18] = (undefined *)param_6[1];
  ppuVar9[0x17] = puVar16;
  ppuVar28 = ppuVar9 + 0x19;
  *ppuVar28 = param_3;
  ppuVar9[0x1a] = (undefined *)param_2;
  ppuVar9[0x1b] = param_4;
  *param_6 = 0;
  param_6[1] = 0;
  func_0x0001092ba17c(ppuVar9 + 2);
  puVar16 = ppuVar9[7];
  if (puVar16 != (undefined *)0x0) {
    plVar26 = (long *)(puVar16 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = *plVar26 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = (long)puVar16;
  FUN_10a4de398(ppuVar9 + 9,param_5,param_2 + 1);
  puVar30 = param_2 + 0x11;
  iVar7 = *(int *)*param_2;
  ppuVar10 = (undefined **)0x78;
  __Znwm();
  *ppuVar10 = FUN_10a53512c;
  ppuVar10[1] = FUN_10a5352cc;
  func_0x0001092ba17c(ppuVar10 + 2);
  puVar16 = ppuVar10[7];
  if (puVar16 != (undefined *)0x0) {
    plVar26 = (long *)(puVar16 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = *plVar26 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuVar9[0x11] = puVar16;
  FUN_10a4dd1f0(puVar30,ppuVar9 + 9);
  ppuVar10[9] = (undefined *)0x0;
  ppuVar10[10] = (undefined *)0x0;
  ppuVar10[0xb] = (undefined *)0x0;
  plVar26 = (long *)ppuVar9[0xb];
  if (plVar26 != (long *)0x0) {
    do {
      puVar11 = puVar30;
      FUN_10a4dd364(puVar30,plVar26 + 2,plVar26 + 5,iVar7 == 1);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = puVar30;
        FUN_10a509984(puVar30,plVar26 + 2);
        if (puVar11 == (undefined8 *)0x0) {
          FUN_109ffdddc(&UNK_10f639994);
          goto LAB_10a4dfc2c;
        }
        lVar24 = puVar11[5];
        plVar29 = (long *)ppuVar10[10];
        if (plVar29 < ppuVar10[0xb]) {
          *plVar29 = lVar24;
          if (lVar24 != 0) {
            plVar31 = (long *)(lVar24 + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar4) {
                *plVar31 = *plVar31 + 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar29 = plVar29 + 1;
        }
        else {
          plVar31 = (long *)ppuVar10[9];
          lVar21 = (long)plVar29 - (long)plVar31 >> 3;
          uVar22 = lVar21 + 1;
          if (uVar22 >> 0x3d != 0) {
            FUN_10a4f616c();
            goto LAB_10a4dfc2c;
          }
          uVar17 = (long)ppuVar10[0xb] - (long)plVar31;
          uVar23 = (long)uVar17 >> 2;
          if (uVar23 <= uVar22) {
            uVar23 = uVar22;
          }
          if (0x7ffffffffffffff7 < uVar17) {
            uVar23 = 0x1fffffffffffffff;
          }
          if (uVar23 == 0) {
            lVar12 = 0;
          }
          else {
            if (uVar23 >> 0x3d != 0) {
              func_0x000109ffded8();
              goto LAB_10a4dfc2c;
            }
            lVar12 = uVar23 << 3;
            __Znwm();
          }
          plVar2 = (long *)(lVar12 + ((long)plVar29 - (long)plVar31));
          *plVar2 = lVar24;
          if (lVar24 != 0) {
            plVar29 = (long *)(lVar24 + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar4) {
                *plVar29 = *plVar29 + 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            plVar31 = (long *)ppuVar10[9];
            plVar29 = (long *)ppuVar10[10];
            lVar21 = (long)plVar29 - (long)plVar31 >> 3;
          }
          plVar13 = plVar2 + -lVar21;
          plVar19 = plVar31;
          if (plVar31 != plVar29) {
            do {
              *plVar13 = *plVar19;
              plVar20 = plVar19 + 1;
              *plVar19 = 0;
              plVar13 = plVar13 + 1;
              plVar19 = plVar20;
            } while (plVar20 != plVar29);
            do {
              plVar13 = (long *)*plVar31;
              if (plVar13 != (long *)0x0) {
                puVar1 = (ulong *)(plVar13 + 1);
                do {
                  uVar22 = *puVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar4) {
                    *puVar1 = uVar22 - 4;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if ((uVar22 & 0x1fffffffc) == 4) {
                  do {
                    uVar22 = *puVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = uVar22 - 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (uVar22 - 1 == 0) {
                    (**(code **)(*plVar13 + 8))();
                  }
                }
              }
              plVar31 = plVar31 + 1;
            } while (plVar31 != plVar29);
            plVar31 = (long *)ppuVar10[9];
          }
          plVar29 = plVar2 + 1;
          ppuVar10[9] = (undefined *)(plVar2 + -lVar21);
          ppuVar10[10] = (undefined *)plVar29;
          ppuVar10[0xb] = (undefined *)(lVar12 + uVar23 * 8);
          if (plVar31 != (long *)0x0) {
            __ZdlPv(plVar31);
          }
        }
        ppuVar10[10] = (undefined *)plVar29;
      }
      plVar26 = (long *)*plVar26;
    } while (plVar26 != (long *)0x0);
    puVar16 = ppuVar10[9];
    puVar15 = ppuVar10[10];
    if (puVar16 != puVar15) {
      puStack_f0 = (undefined *)((long)puVar15 - (long)puVar16 >> 3);
      func_0x0001098b7954(&plStack_d8,&puStack_f0);
      plVar26 = (long *)(puStack_c8 + 8);
      if (*plVar26 != 0) {
        func_0x0001092b4274(plVar26);
      }
      lVar24 = 0;
      *plVar26 = lStack_d0;
      lStack_d0 = 0;
      do {
        puVar5 = puStack_c8;
        ppuVar18 = (undefined **)(*(long *)(puStack_c8 + 0x18) + lVar24 * 0x10);
        lVar24 = lVar24 + 1;
        ppuVar18[1] = puStack_c8;
        func_0x0001092b4524(ppuVar18,puVar16);
        puVar27 = *ppuVar18;
        plVar26 = (long *)(puVar27 + 0x10);
        do {
          lVar21 = *plVar26;
          if (lVar21 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar4) {
              *plVar26 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              pcStack_c0 = (code *)&UNK_1098b7cfc;
              ppuStack_b0 = &PTR_PTR_1132fed68;
              uStack_b8 = ppuVar18;
              func_0x000109d1b588(puVar27 + 0x18,&pcStack_c0);
              *(undefined8 *)(puVar27 + 0x10) = 0;
              goto LAB_10a4df520;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar21 >> 1 & 1) == 0);
        FUN_109d183ec(puVar5);
LAB_10a4df520:
        puVar16 = puVar16 + 8;
      } while (puVar16 != puVar15);
      ppuVar10[0xd] = (undefined *)plStack_d8;
      plStack_d8 = (long *)0x0;
      if ((lStack_d0 != 0) && (func_0x0001092b4274(&lStack_d0), plStack_d8 != (long *)0x0)) {
        puVar1 = (ulong *)(plStack_d8 + 1);
        do {
          uVar22 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar22 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar22 & 0x1fffffffc) == 4) {
          do {
            uVar22 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar22 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar22 - 1 == 0) {
            (**(code **)(*plStack_d8 + 8))();
          }
        }
      }
      goto LAB_10a4df5a0;
    }
  }
  FUN_109d1b124(ppuVar10 + 0xd);
LAB_10a4df5a0:
  ppuVar10[0xc] = ppuVar10[0xd];
  plVar26 = (long *)(ppuVar10[0xd] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
    if (bVar4) {
      *plVar26 = *plVar26 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(ppuVar10[0xc] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(ppuVar10 + 0xe) = 0;
    puVar16 = ppuVar10[0xc];
    plVar26 = (long *)(puVar16 + 0x10);
    ppuVar18 = (undefined **)ppuVar10[3];
    do {
      lVar24 = *plVar26;
      if (lVar24 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
        if (bVar4) {
          *plVar26 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          pcStack_c0 = (code *)0x0;
          uStack_b8 = ppuVar10;
          ppuStack_b0 = ppuVar18;
          func_0x000109d1b588(puVar16 + 0x18,&pcStack_c0);
          *(undefined8 *)(puVar16 + 0x10) = 0;
          goto LAB_10a4df6f0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar24 >> 1 & 1) == 0);
  }
  plVar26 = (long *)ppuVar10[0xc];
  if (((uint)*(undefined8 *)(ppuVar10[0xc] + 0x10) >> 5 & 1) == 0) {
    if (plVar26 != (long *)0x0) {
      puVar1 = (ulong *)(plVar26 + 1);
      do {
        uVar22 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar22 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar22 & 0x1fffffffc) == 4) {
        do {
          uVar22 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar22 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar22 - 1 == 0) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    }
    plVar26 = (long *)ppuVar10[0xd];
    if (plVar26 != (long *)0x0) {
      puVar1 = (ulong *)(plVar26 + 1);
      do {
        uVar22 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar22 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar22 & 0x1fffffffc) == 4) {
        do {
          uVar22 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar22 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar22 - 1 == 0) {
          (**(code **)(*plVar26 + 8))();
        }
      }
    }
    func_0x0001092ba100(ppuVar10 + 2);
    FUN_10a4f6180(ppuVar10 + 9);
    func_0x000109d1a1d0(ppuVar10 + 2);
    __ZdlPv(ppuVar10);
LAB_10a4df6f0:
    ppuVar9[0xe] = ppuVar9[0x11];
    plVar26 = (long *)(ppuVar9[0x11] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = *plVar26 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(ppuVar9[0xe] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(ppuVar9 + 0x1c) = 0;
      puVar16 = ppuVar9[0xe];
      plVar26 = (long *)(puVar16 + 0x10);
      ppuVar10 = (undefined **)ppuVar9[3];
      do {
        lVar24 = *plVar26;
        if (lVar24 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar4) {
            *plVar26 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            pcStack_c0 = (code *)0x0;
            ppuVar18 = (undefined **)(puVar16 + 0x18);
            uStack_b8 = ppuVar9;
            ppuStack_b0 = ppuVar10;
            func_0x000109d1b588(ppuVar18,&pcStack_c0);
            *(undefined8 *)(puVar16 + 0x10) = 0;
            goto LAB_10a4dfbb8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar24 >> 1 & 1) == 0);
    }
    ppuVar18 = (undefined **)ppuVar9[0xe];
    if (((uint)*(undefined8 *)(ppuVar9[0xe] + 0x10) >> 5 & 1) == 0) {
      if (ppuVar18 != (undefined **)0x0) {
        ppuVar10 = ppuVar18 + 1;
        do {
          puVar16 = *ppuVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar4) {
            *ppuVar10 = puVar16 + -4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)puVar16 & 0x1fffffffc) == 4) {
          do {
            puVar16 = *ppuVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
            if (bVar4) {
              *ppuVar10 = puVar16 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (puVar16 + -1 == (undefined *)0x0) {
            (**(code **)(*ppuVar18 + 8))();
          }
        }
      }
      plVar26 = (long *)ppuVar9[0x11];
      if (plVar26 != (long *)0x0) {
        puVar1 = (ulong *)(plVar26 + 1);
        do {
          uVar22 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar22 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar22 & 0x1fffffffc) == 4) {
          do {
            uVar22 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar22 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar22 - 1 == 0) {
            (**(code **)(*plVar26 + 8))();
          }
        }
      }
      ppuVar9[0x14] = (undefined *)0x0;
      ppuVar9[0x15] = (undefined *)0x0;
      ppuVar9[0x16] = (undefined *)0x0;
      plVar26 = (long *)ppuVar9[0xb];
      if (plVar26 == (long *)0x0) {
        puVar15 = (undefined *)0x0;
        puVar16 = (undefined *)0x0;
      }
      else {
        do {
          ppuVar10 = (undefined **)(ppuVar9[0x1a] + 0x88);
          FUN_10a4dd364(ppuVar10,plVar26 + 2,plVar26 + 5,0);
          if ((ppuVar10 != (undefined **)0x0) &&
             (puVar16 = ppuVar10[0x13], (puVar16[0x150] & 1) != 0)) {
            iVar7 = (int)plVar26 + 0x28;
            FUN_10a4de6a0();
            if (iVar7 == 0) {
              uVar8 = 0x40000000;
            }
            else {
              pcStack_c0 = (code *)((ulong)pcStack_c0 & 0xffffffffffffff00);
              ppuVar18 = ppuVar28;
              func_0x0001098ac018(ppuVar28,&UNK_10e4c8f08,0x24,&pcStack_c0,0,1);
              uVar8 = SUB84(ppuVar18,0);
              puVar16 = ppuVar10[0x13];
            }
            uVar25 = *(undefined8 *)(puVar16 + 0x10c);
            pcStack_c0 = (code *)0x47fffffff;
            ppuStack_b0._0_5_ = 0x100000002;
            uVar22 = (ulong)puStack_a8 >> 0x28;
            puStack_a8._0_4_ = (uint)puStack_a8 & 0xffffff00;
            puStack_a8._0_5_ = (uint5)(uint)puStack_a8;
            puStack_a8 = (undefined *)CONCAT35((int3)uVar22,(uint5)puStack_a8);
            ppuVar18 = ppuVar28;
            uStack_b8 = (undefined **)uVar25;
            func_0x0001098ac018(ppuVar28,&UNK_10e4a7ac1,0x23,&pcStack_c0,0,1);
            pcStack_c0 = (code *)0x77fffffff;
            ppuStack_b0 = (undefined **)CONCAT35(ppuStack_b0._5_3_,0x100000002);
            uVar22 = (ulong)puStack_a8 >> 0x28;
            puStack_a8._0_4_ = (uint)puStack_a8 & 0xffffff00;
            puStack_a8._0_5_ = (uint5)(uint)puStack_a8;
            puStack_a8 = (undefined *)CONCAT35((int3)uVar22,(uint5)puStack_a8);
            ppuVar14 = ppuVar28;
            uStack_b8 = (undefined **)uVar25;
            func_0x0001098ac018(ppuVar28,&UNK_10e4a7ac1,0x23,&pcStack_c0,0,1);
            puVar16 = *ppuVar28;
            ppuVar9[0x12] = (undefined *)0x0;
            ppuVar9[0x13] = (undefined *)0x0;
            ppuVar9[0x11] = (undefined *)0x0;
            pcStack_c0 = (code *)CONCAT44((int)ppuVar14,(int)ppuVar18);
            uStack_b8 = (undefined **)CONCAT44(uStack_b8._4_4_,uVar8);
            FUN_10a26ebc0(ppuVar9 + 0x11,0,&pcStack_c0,(long)&uStack_b8 + 4,3);
            pcStack_c0 = FUN_10a4f68d8;
            uStack_b8 = &PTR_FUN_110be9180;
            puVar16 = puVar16 + 0x18;
            ppuStack_b0 = ppuVar10;
            FUN_10a4f6764(puVar16,&pcStack_c0,ppuVar9 + 0x11);
            (*(code *)*uStack_b8)(&uStack_b8);
            if (ppuVar9[0x11] != (undefined *)0x0) {
              ppuVar9[0x12] = ppuVar9[0x11];
              __ZdlPv();
            }
            plVar29 = (long *)ppuVar9[0x15];
            if (plVar29 < ppuVar9[0x16]) {
              if (*(char *)((long)plVar26 + 0x27) < '\0') {
                func_0x000107c3192c(plVar29,plVar26[2],plVar26[3]);
              }
              else {
                lVar21 = plVar26[3];
                lVar24 = plVar26[2];
                plVar29[2] = plVar26[4];
                plVar29[1] = lVar21;
                *plVar29 = lVar24;
              }
              *(int *)(plVar29 + 3) = (int)puVar16;
              ppuVar10 = (undefined **)(plVar29 + 4);
            }
            else {
              ppuVar10 = ppuVar9 + 0x14;
              FUN_10a4f6c34(ppuVar10,plVar26 + 2,puVar16);
            }
            ppuVar9[0x15] = (undefined *)ppuVar10;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
        puVar16 = ppuVar9[0x14];
        puVar15 = ppuVar9[0x15];
      }
      puStack_f0 = (undefined *)0x0;
      puStack_e8 = (undefined *)0x0;
      puStack_e0 = (undefined *)0x0;
      FUN_10a4f6dec(&puStack_f0,puVar16,puVar15,(long)puVar15 - (long)puVar16 >> 5);
      puVar5 = puStack_e0;
      puVar15 = puStack_e8;
      puVar16 = puStack_f0;
      puStack_a0 = ppuVar9[0x16];
      puStack_a8 = ppuVar9[0x15];
      ppuStack_b0 = (undefined **)ppuVar9[0x14];
      ppuVar9[0x14] = (undefined *)0x0;
      ppuVar9[0x15] = (undefined *)0x0;
      ppuVar9[0x16] = (undefined *)0x0;
      puStack_e8 = (undefined *)0x0;
      puStack_e0 = (undefined *)0x0;
      uStack_f8 = 0;
      puStack_f0 = (undefined *)0x0;
      ppuVar9[0xf] = puVar15;
      ppuVar9[0xe] = puVar16;
      ppuVar9[0x10] = puVar5;
      uStack_108 = 0;
      uStack_100 = 0;
      pcStack_c0 = FUN_10a4f6f6c;
      uStack_b8 = &PTR_FUN_110be91b8;
      lStack_d0 = 0;
      puStack_c8 = (undefined *)0x0;
      plStack_d8 = (long *)0x0;
      puVar16 = ppuVar9[0x19] + 0x18;
      FUN_10a4f6e60(puVar16,&pcStack_c0,ppuVar9 + 0xe);
      (*(code *)*uStack_b8)(&uStack_b8);
      FUN_10a4f70dc(&plStack_d8);
      if (ppuVar9[0xe] != (undefined *)0x0) {
        ppuVar9[0xf] = ppuVar9[0xe];
        __ZdlPv();
      }
      *(int *)ppuVar9[0x1b] = (int)puVar16;
      FUN_10a4f70dc(&uStack_108);
      func_0x0001092ba100(ppuVar9 + 2);
      if (puStack_f0 != (undefined *)0x0) {
        puStack_e8 = puStack_f0;
        __ZdlPv();
      }
      FUN_10a4f70dc(ppuVar9 + 0x14);
      func_0x00010a22eba0(ppuVar9 + 9);
      func_0x000109d1a1d0(ppuVar9 + 2);
      plVar26 = (long *)ppuVar9[0x18];
      if (plVar26 != (long *)0x0) {
        puVar1 = (ulong *)(plVar26 + 1);
        do {
          uVar22 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar22 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar22 & 0x1fffffffc) == 4) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          do {
            uVar22 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar22 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar22 - 1 == 0) {
            (**(code **)(*plVar26 + 8))(plVar26);
          }
        }
      }
      plVar26 = (long *)ppuVar9[0x17];
      if (plVar26 != (long *)0x0) {
        puVar1 = (ulong *)(plVar26 + 1);
        do {
          uVar22 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar22 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar22 & 0x1fffffffc) == 4) {
          do {
            uVar22 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar22 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar22 - 1 == 0) {
            (**(code **)(*plVar26 + 8))();
          }
        }
      }
      __ZdlPv(ppuVar9);
      ppuVar18 = ppuVar9;
LAB_10a4dfbb8:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
        return;
      }
      ___stack_chk_fail();
    }
    func_0x0001092af97c(ppuVar18 + 0x12);
  }
  else {
    func_0x0001092af97c(plVar26 + 0x12);
  }
LAB_10a4dfc2c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a4dfc30);
  (*pcVar6)();
}



/* Entry: 10a4dff08; end: 10a4dff13;  */

undefined8 FUN_10a4dff08(void)

{
  return 0x16800000001;
}



/* Entry: 10a4dff14; end: 10a4dffc7;  */

void FUN_10a4dff14(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  
  if ((*(byte *)(param_2 + 0x1c8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4dff7c);
    (*pcVar1)();
  }
  plVar4 = *(long **)(param_2 + 0x1b0);
  while( true ) {
    if (plVar4 == (long *)0x0) {
      return;
    }
    uVar2 = (ulong)(plVar4 + 5);
    FUN_10a4de6a0();
    if ((uVar2 & 1) != 0) break;
    plVar4 = (long *)*plVar4;
  }
  if ((*(byte *)(param_2 + 0x199) & 1) == 0) {
    uVar3 = 0;
    *(undefined1 *)(param_2 + 0x199) = 1;
  }
  else {
    uVar3 = *(undefined1 *)(param_2 + 0x198);
  }
  *(undefined1 *)(param_2 + 0x198) = uVar3;
  return;
}



/* Entry: 10a4dffc8; end: 10a4e153f;  */

/* WARNING: Removing unreachable block (ram,0x00010a4e0f00) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0f08) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0cdc) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0cec) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0de8) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0df0) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0c54) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0c64) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0da4) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0db4) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0fd4) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0fdc) */
/* WARNING: Removing unreachable block (ram,0x00010a4e10ac) */
/* WARNING: Removing unreachable block (ram,0x00010a4e10b4) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0e74) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0e7c) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0c98) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0ca8) */
/* WARNING: Removing unreachable block (ram,0x00010a4e101c) */
/* WARNING: Removing unreachable block (ram,0x00010a4e1024) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0ebc) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0ecc) */
/* WARNING: Removing unreachable block (ram,0x00010a4e1064) */
/* WARNING: Removing unreachable block (ram,0x00010a4e106c) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0f48) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0f58) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0e30) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0e40) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0d20) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0d30) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0f8c) */
/* WARNING: Removing unreachable block (ram,0x00010a4e0f94) */

void FUN_10a4dffc8(long param_1,long param_2,undefined8 param_3,long param_4,char *param_5)

{
  long ****pppplVar1;
  long **pplVar2;
  long *****ppppplVar3;
  int *piVar4;
  long *plVar5;
  long ****pppplVar6;
  char cVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  undefined1 uVar21;
  long lVar22;
  long *****ppppplVar23;
  ulong extraout_x9;
  undefined8 *puVar24;
  ulong uVar25;
  long **pplVar26;
  long ***ppplVar27;
  ulong extraout_x10;
  long *****ppppplVar28;
  long **pplVar29;
  long **pplVar30;
  undefined8 uVar31;
  long *****ppppplVar32;
  int iVar33;
  long *plVar34;
  long ****pppplVar35;
  long ***ppplVar36;
  char *pcVar37;
  long *****ppppplVar38;
  long *****ppppplVar39;
  long *****ppppplVar40;
  float fVar41;
  long ****pppplStack_2b0;
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  ulong uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long ****pppplStack_250;
  long ***ppplStack_248;
  long ***ppplStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long ***ppplStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long ****pppplStack_1e8;
  long ***ppplStack_1e0;
  undefined7 uStack_1d8;
  char cStack_1d1;
  undefined1 auStack_1b8 [16];
  long *plStack_1a8;
  undefined8 uStack_190;
  long ***ppplStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long ***ppplStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  int iStack_118;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 *puStack_e8;
  long lStack_c8;
  long *plStack_c0;
  long ****pppplStack_b8;
  long ***ppplStack_b0;
  undefined7 uStack_a8;
  char cStack_a1;
  long ****pppplStack_a0;
  long ***ppplStack_98;
  undefined7 uStack_90;
  char cStack_89;
  long lStack_88;
  long *plStack_80;
  undefined8 auStack_78 [3];
  
  if ((param_5[0x1c8] & 1U) == 0) goto LAB_10a4e126c;
  FUN_10a4de398(auStack_1b8,param_5 + 0x1a0,param_4 + 0x198);
  lVar19 = param_1 + 8;
  FUN_10a4dd1f0(lVar19,auStack_1b8);
  iVar14 = (int)lVar19;
  FUN_10ad055a0();
  ppuVar17 = &PTR___tlv_bootstrap_11340dfd8;
  if (iVar14 == 0) {
LAB_10a4e0058:
    FUN_10a4de53c(&pppplStack_1e8,param_4 + 0x198,*(undefined8 *)(param_4 + 0xa8));
    cVar7 = *param_5;
    puVar16 = (undefined8 *)0x18;
    __Znwm();
    puVar16[2] = 0;
    puVar16[1] = 0;
    *puVar16 = puVar16 + 1;
    pppplStack_2b0 = (long ****)0x0;
    func_0x00010a293674(param_4 + 0x110);
    func_0x00010a293674(&pppplStack_2b0,0);
    if (plStack_1a8 != (long *)0x0) {
      pppplVar1 = (long ****)(param_1 + 0x30);
      pplVar2 = (long **)(param_1 + 0x40);
      (*(code *)PTR___tlv_bootstrap_11340dfd8)();
      ppuVar15 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      puVar16 = (undefined8 *)(extraout_x9 | 4);
      puVar24 = (undefined8 *)(extraout_x10 | 4);
      plVar34 = plStack_1a8;
      do {
        ppppplVar3 = (long *****)(plVar34 + 2);
        lVar19 = param_1 + 8;
        FUN_10a4dd364(lVar19,ppppplVar3,plVar34 + 5,cVar7 == '\0');
        if ((lVar19 != 0) &&
           (lVar22 = *(long *)(lVar19 + 0x98), *(char *)(lVar22 + 0x150) == '\x01')) {
          pppplVar35 = (long ****)(long)*(char *)((long)plVar34 + 0x27);
          ppppplVar39 = ppppplVar3;
          if ((long)pppplVar35 < 0) {
            pppplVar35 = (long ****)plVar34[3];
            ppppplVar39 = (long *****)plVar34[2];
          }
          uVar31 = *(undefined8 *)(lVar22 + 0x10c);
          auStack_78[0] = uVar31;
          if ((long ****)0x7ffffffffffffff7 < pppplVar35) {
            func_0x000109ffde50();
            goto LAB_10a4e126c;
          }
          iVar14 = *(int *)(param_2 + 0x24);
          if (pppplVar35 < (long ****)0x17) {
            uStack_180 = (long ****)CONCAT17((char)pppplVar35,(undefined7)uStack_180);
            ppppplVar38 = (long *****)&uStack_190;
            ppppplVar32 = ppppplVar3;
            if (pppplVar35 != (long ****)0x0) goto LAB_10a4e01f0;
          }
          else {
            ppppplVar32 = (long *****)0x19;
            if (((ulong)pppplVar35 | 7) != 0x17) {
              ppppplVar32 = (long *****)(((ulong)pppplVar35 | 7) + 1);
            }
            ppppplVar38 = ppppplVar32;
            __Znwm();
            uStack_180 = (long ****)((ulong)ppppplVar32 | 0x8000000000000000);
            uStack_190 = ppppplVar38;
            ppplStack_188 = (long ***)pppplVar35;
LAB_10a4e01f0:
            _memmove(ppppplVar38,ppppplVar39,pppplVar35);
          }
          *(char *)((long)ppppplVar38 + (long)pppplVar35) = '\0';
          ppplStack_128 = ppplStack_188;
          uStack_130 = uStack_190;
          ppplStack_120 = (long ***)uStack_180;
          uStack_114 = (uint)uVar31;
          uStack_110 = (uint)((ulong)uVar31 >> 0x20);
          puVar18 = &uStack_190;
          iStack_118 = iVar14;
          func_0x000107c2b05c(puVar18,&uStack_130);
          uVar12 = uStack_110;
          uVar11 = uStack_114;
          iVar33 = iStack_118;
          uVar25 = (long)puVar18 + 0x9e3779b9;
          uVar25 = (long)iStack_118 + 0x9e3779b9 + uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25;
          ppppplVar38 = (long *****)
                        ((ulong)((uStack_114 & 0xff00 | uStack_110 & 0xff) + 0x9e3779b9) +
                         uVar25 * 0x40 + (uVar25 >> 2) ^ uVar25);
          ppppplVar39 = *(long ******)(param_1 + 0x38);
          if (ppppplVar39 != (long *****)0x0) {
            pcVar37 = (char *)((long)ppppplVar39 + -1);
            if (((ulong)ppppplVar39 & (ulong)pcVar37) == 0) {
              ppppplVar32 = (long *****)((ulong)ppppplVar38 & (ulong)pcVar37);
            }
            else {
              ppppplVar32 = ppppplVar38;
              if (ppppplVar39 <= ppppplVar38) {
                uVar25 = 0;
                if (ppppplVar39 != (long *****)0x0) {
                  uVar25 = (ulong)ppppplVar38 / (ulong)ppppplVar39;
                }
                ppppplVar32 = (long *****)((long)ppppplVar38 - uVar25 * (long)ppppplVar39);
              }
            }
            if (((*pppplVar1)[(long)ppppplVar32] != (long **)0x0) &&
               (ppppplVar40 = (long *****)*(*pppplVar1)[(long)ppppplVar32],
               ppppplVar40 != (long *****)0x0)) {
              pppplVar35 = (long ****)ppplStack_128;
              ppppplVar28 = uStack_130;
              if (-1 < (long)ppplStack_120) {
                pppplVar35 = (long ****)((ulong)ppplStack_120 >> 0x38);
                ppppplVar28 = (long *****)&uStack_130;
              }
              do {
                ppppplVar23 = (long *****)ppppplVar40[1];
                if (ppppplVar23 == ppppplVar38) {
                  bVar8 = *(byte *)((long)ppppplVar40 + 0x27);
                  pppplVar6 = ppppplVar40[3];
                  if (-1 < (char)bVar8) {
                    pppplVar6 = (long ****)(ulong)bVar8;
                  }
                  if (pppplVar6 == pppplVar35) {
                    ppppplVar23 = (long *****)ppppplVar40[2];
                    if (-1 < (char)bVar8) {
                      ppppplVar23 = ppppplVar40 + 2;
                    }
                    _memcmp(ppppplVar23,ppppplVar28,pppplVar35);
                    if ((((int)ppppplVar23 == 0 && *(int *)(ppppplVar40 + 5) == iVar33) &&
                        (*(uint *)((long)ppppplVar40 + 0x2c) == uVar11)) &&
                       (*(uint *)(ppppplVar40 + 6) == uVar12)) goto LAB_10a4e0670;
                  }
                }
                else {
                  if (((ulong)ppppplVar39 & (ulong)pcVar37) == 0) {
                    ppppplVar23 = (long *****)((ulong)ppppplVar23 & (ulong)pcVar37);
                  }
                  else if (ppppplVar39 <= ppppplVar23) {
                    uVar25 = 0;
                    if (ppppplVar39 != (long *****)0x0) {
                      uVar25 = (ulong)ppppplVar23 / (ulong)ppppplVar39;
                    }
                    ppppplVar23 = (long *****)((long)ppppplVar23 - uVar25 * (long)ppppplVar39);
                  }
                  if (ppppplVar23 != ppppplVar32) break;
                }
                ppppplVar40 = (long *****)*ppppplVar40;
              } while (ppppplVar40 != (long *****)0x0);
            }
          }
          ppppplVar40 = (long *****)0x58;
          __Znwm();
          uStack_180 = (long ****)0x0;
          *ppppplVar40 = (long ****)0x0;
          ppppplVar40[1] = (long ****)ppppplVar38;
          uStack_190 = ppppplVar40;
          ppplStack_188 = (long ***)pppplVar1;
          if ((long)ppplStack_120 < 0) {
            func_0x000107c3192c(ppppplVar40 + 2,uStack_130,ppplStack_128);
            iVar33 = iStack_118;
          }
          else {
            ppppplVar40[3] = (long ****)ppplStack_128;
            ppppplVar40[2] = (long ****)uStack_130;
            ppppplVar40[4] = (long ****)ppplStack_120;
          }
          *(int *)(ppppplVar40 + 5) = iVar33;
          *(ulong *)((long)ppppplVar40 + 0x2c) = CONCAT44(uStack_110,uStack_114);
          ppppplVar40[8] = (long ****)0x0;
          ppppplVar40[7] = (long ****)0x0;
          ppppplVar40[10] = (long ****)0x0;
          ppppplVar40[9] = (long ****)0x0;
          uStack_180 = (long ****)CONCAT71(uStack_180._1_7_,1);
          fVar41 = (float)(*(long *)(param_1 + 0x48) + 1);
          if ((ppppplVar39 == (long *****)0x0) ||
             (*(float *)(param_1 + 0x50) * (float)ppppplVar39 < fVar41)) {
            uVar25 = 1;
            if ((long *****)0x2 < ppppplVar39) {
              uVar25 = (ulong)(((ulong)ppppplVar39 & (ulong)((long)ppppplVar39 + -1)) != 0);
            }
            ppppplVar32 = (long *****)(uVar25 | (long)ppppplVar39 << 1);
            ppppplVar39 = (long *****)(long)(fVar41 / *(float *)(param_1 + 0x50));
            if (ppppplVar32 <= ppppplVar39) {
              ppppplVar32 = ppppplVar39;
            }
            if ((char *)((long)ppppplVar32 + -1) == (char *)0x0) {
              ppppplVar32 = (long *****)0x2;
            }
            else if (((ulong)ppppplVar32 & (ulong)((long)ppppplVar32 + -1)) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            ppppplVar39 = *(long ******)(param_1 + 0x38);
            if (ppppplVar39 < ppppplVar32) {
LAB_10a4e0478:
              if ((ulong)ppppplVar32 >> 0x3d != 0) {
                func_0x000109ffded8();
                goto LAB_10a4e126c;
              }
              ppplVar36 = (long ***)((long)ppppplVar32 << 3);
              __Znwm();
              ppplVar27 = *pppplVar1;
              *pppplVar1 = ppplVar36;
              if (ppplVar27 != (long ***)0x0) {
                __ZdlPv();
              }
              ppppplVar39 = (long *****)0x0;
              *(long ******)(param_1 + 0x38) = ppppplVar32;
              do {
                (*pppplVar1)[(long)ppppplVar39] = (long **)0x0;
                ppppplVar39 = (long *****)((long)ppppplVar39 + 1);
              } while (ppppplVar32 != ppppplVar39);
              pplVar26 = (long **)*pplVar2;
              ppppplVar39 = ppppplVar32;
              if (pplVar26 != (long **)0x0) {
                ppppplVar28 = (long *****)pplVar26[1];
                pcVar37 = (char *)((long)ppppplVar32 + -1);
                if (((ulong)ppppplVar32 & (ulong)pcVar37) == 0) {
                  ppppplVar28 = (long *****)((ulong)ppppplVar28 & (ulong)pcVar37);
                }
                else if (ppppplVar32 <= ppppplVar28) {
                  uVar25 = 0;
                  if (ppppplVar32 != (long *****)0x0) {
                    uVar25 = (ulong)ppppplVar28 / (ulong)ppppplVar32;
                  }
                  ppppplVar28 = (long *****)((long)ppppplVar28 - uVar25 * (long)ppppplVar32);
                }
                (*pppplVar1)[(long)ppppplVar28] = pplVar2;
                pplVar29 = (long **)*pplVar26;
                while (pplVar29 != (long **)0x0) {
                  ppppplVar23 = (long *****)pplVar29[1];
                  if (((ulong)ppppplVar32 & (ulong)pcVar37) == 0) {
                    ppppplVar23 = (long *****)((ulong)ppppplVar23 & (ulong)pcVar37);
                  }
                  else if (ppppplVar32 <= ppppplVar23) {
                    uVar25 = 0;
                    if (ppppplVar32 != (long *****)0x0) {
                      uVar25 = (ulong)ppppplVar23 / (ulong)ppppplVar32;
                    }
                    ppppplVar23 = (long *****)((long)ppppplVar23 - uVar25 * (long)ppppplVar32);
                  }
                  pplVar30 = pplVar29;
                  if (ppppplVar23 != ppppplVar28) {
                    ppplVar36 = *pppplVar1;
                    if (ppplVar36[(long)ppppplVar23] == (long **)0x0) {
                      ppplVar36[(long)ppppplVar23] = pplVar26;
                      ppppplVar28 = ppppplVar23;
                    }
                    else {
                      *pplVar26 = *pplVar29;
                      *pplVar29 = *ppplVar36[(long)ppppplVar23];
                      *ppplVar36[(long)ppppplVar23] = (long *)pplVar29;
                      pplVar30 = pplVar26;
                    }
                  }
                  pplVar26 = pplVar30;
                  pplVar29 = (long **)*pplVar30;
                }
              }
            }
            else if (ppppplVar32 < ppppplVar39) {
              ppppplVar28 = (long *****)
                            (long)((float)*(ulong *)(param_1 + 0x48) / *(float *)(param_1 + 0x50));
              if ((ppppplVar39 < (long *****)0x3) ||
                 (((ulong)ppppplVar39 & (ulong)((long)ppppplVar39 + -1)) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *****)0x1 < ppppplVar28) {
                ppppplVar28 = (long *****)
                              (1L << (-LZCOUNT((char *)((long)ppppplVar28 + -1)) & 0x3fU));
              }
              if (ppppplVar32 <= ppppplVar28) {
                ppppplVar32 = ppppplVar28;
              }
              if (ppppplVar32 < ppppplVar39) {
                if (ppppplVar32 != (long *****)0x0) goto LAB_10a4e0478;
                ppplVar36 = *pppplVar1;
                *pppplVar1 = (long ***)0x0;
                if (ppplVar36 != (long ***)0x0) {
                  __ZdlPv();
                }
                *(undefined8 *)(param_1 + 0x38) = 0;
                ppppplVar39 = (long *****)0x0;
              }
              else {
                ppppplVar39 = *(long ******)(param_1 + 0x38);
              }
            }
            if (((ulong)ppppplVar39 & (ulong)((long)ppppplVar39 + -1)) == 0) {
              ppppplVar32 = (long *****)((ulong)((long)ppppplVar39 + -1) & (ulong)ppppplVar38);
            }
            else {
              ppppplVar32 = ppppplVar38;
              if (ppppplVar39 <= ppppplVar38) {
                uVar25 = 0;
                if (ppppplVar39 != (long *****)0x0) {
                  uVar25 = (ulong)ppppplVar38 / (ulong)ppppplVar39;
                }
                ppppplVar32 = (long *****)((long)ppppplVar38 - uVar25 * (long)ppppplVar39);
              }
            }
          }
          ppplVar36 = *pppplVar1;
          pplVar26 = ppplVar36[(long)ppppplVar32];
          if (pplVar26 == (long **)0x0) {
            *ppppplVar40 = (long ****)*pplVar2;
            *pplVar2 = (long *)ppppplVar40;
            ppplVar36[(long)ppppplVar32] = pplVar2;
            if (*ppppplVar40 != (long ****)0x0) {
              ppppplVar32 = (long *****)(*ppppplVar40)[1];
              if (((ulong)ppppplVar39 & (ulong)((long)ppppplVar39 + -1)) == 0) {
                ppppplVar32 = (long *****)((ulong)ppppplVar32 & (ulong)((long)ppppplVar39 + -1));
              }
              else if (ppppplVar39 <= ppppplVar32) {
                uVar25 = 0;
                if (ppppplVar39 != (long *****)0x0) {
                  uVar25 = (ulong)ppppplVar32 / (ulong)ppppplVar39;
                }
                ppppplVar32 = (long *****)((long)ppppplVar32 - uVar25 * (long)ppppplVar39);
              }
              (*pppplVar1)[(long)ppppplVar32] = (long **)ppppplVar40;
            }
          }
          else {
            *ppppplVar40 = (long ****)*pplVar26;
            *pplVar26 = (long *)ppppplVar40;
          }
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
LAB_10a4e0670:
          ppppplVar39 = ppppplVar40 + 7;
          if (*ppppplVar39 == (long ****)0x0) {
            FUN_10a1b498c(&uStack_190,iVar14,4);
            FUN_10a1b498c(&uStack_180,4,7);
            func_0x00010a343394(ppppplVar39,&uStack_190);
            func_0x00010a343394(ppppplVar40 + 9,&uStack_180);
            plVar20 = (long *)CONCAT71(uStack_177,uStack_178);
            if (plVar20 != (long *)0x0) {
              plVar5 = plVar20 + 1;
              do {
                lVar22 = *plVar5;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar10) {
                  *plVar5 = lVar22 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar22 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
              }
            }
            ppplVar36 = ppplStack_188;
            if ((long ****)ppplStack_188 != (long ****)0x0) {
              pppplVar35 = (long ****)(ppplStack_188 + 1);
              do {
                ppplVar27 = *pppplVar35;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(pppplVar35,0x10);
                if (bVar10) {
                  *pppplVar35 = (long ***)((long)ppplVar27 + -1);
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (ppplVar27 == (long ***)0x0) {
                (*(code *)(*ppplStack_188)[2])(ppplStack_188);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar36);
              }
            }
          }
          if ((long)ppplStack_120 < 0) {
            __ZdlPv(uStack_130);
          }
          pppplVar35 = *ppppplVar39;
          iVar14 = (int)param_4 + 0x198;
          FUN_10a0ec6f0();
          uStack_130 = (long *****)CONCAT44(uStack_130._4_4_,iVar14);
          (*(code *)**pppplVar35)(&lStack_88,pppplVar35,param_2,&uStack_130,auStack_78);
          iVar14 = (int)pppplVar35;
          FUN_10ad055a0();
          if (iVar14 != 0) {
            if (*ppuVar17 == (undefined *)0x0) {
              plVar20 = (long *)*ppuVar15;
              if ((plVar20 == (long *)0x0) ||
                 ((**(code **)(*plVar20 + 0x18))(), plVar20 == (long *)0x0)) goto LAB_10a4e06e8;
              plVar20 = plVar20 + 7;
            }
            else {
              plVar20 = (long *)(*ppuVar17 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar20 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppplStack_a0,&UNK_10f65d19c);
              func_0x000107c2b054(&pppplStack_b8,"");
              uStack_130 = (long *****)"null";
              if (cStack_89 != '\0') {
                uStack_130 = &pppplStack_a0;
              }
              uStack_190 = (long *****)"null";
              if (cStack_a1 != '\0') {
                uStack_190 = &pppplStack_b8;
              }
              FUN_10a224324(&uStack_130,&uStack_190);
              if (cStack_89 == '\0') {
                uStack_130 = (long *****)((ulong)uStack_130 & 0xffffffffffffff00);
              }
              else {
                ppplStack_128 = ppplStack_98;
                uStack_130 = (long *****)pppplStack_a0;
                ppplStack_120 = (long ***)CONCAT17(cStack_89,uStack_90);
              }
              iStack_118 = CONCAT31(iStack_118._1_3_,cStack_89 != '\0');
              if (cStack_a1 == '\0') {
                uStack_190 = (long *****)((ulong)uStack_190 & 0xffffffffffffff00);
              }
              else {
                ppplStack_188 = ppplStack_b0;
                uStack_190 = (long *****)pppplStack_b8;
                uStack_180 = (long ****)CONCAT17(cStack_a1,uStack_a8);
              }
              uStack_178 = cStack_a1 != '\0';
              FUN_10a234a0c(&uStack_130,&uStack_190);
              goto LAB_10a4e126c;
            }
          }
LAB_10a4e06e8:
          pppplVar35 = ppppplVar40[9];
          uStack_130 = (long *****)((ulong)uStack_130 & 0xffffffff00000000);
          (*(code *)**pppplVar35)(&lStack_c8,pppplVar35,lStack_88,&uStack_130,auStack_78);
          iVar14 = (int)pppplVar35;
          FUN_10ad055a0();
          if (iVar14 != 0) {
            if (*ppuVar17 == (undefined *)0x0) {
              plVar20 = (long *)*ppuVar15;
              if ((plVar20 == (long *)0x0) ||
                 ((**(code **)(*plVar20 + 0x18))(), plVar20 == (long *)0x0)) goto LAB_10a4e073c;
              plVar20 = plVar20 + 7;
            }
            else {
              plVar20 = (long *)(*ppuVar17 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar20 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppplStack_a0,&UNK_10f65d1c2);
              func_0x000107c2b054(&pppplStack_b8,"");
              uStack_130 = (long *****)"null";
              if (cStack_89 != '\0') {
                uStack_130 = &pppplStack_a0;
              }
              uStack_190 = (long *****)"null";
              if (cStack_a1 != '\0') {
                uStack_190 = &pppplStack_b8;
              }
              FUN_10a224324(&uStack_130,&uStack_190);
              if (cStack_89 != '\0') {
                ppplStack_120 = (long ***)CONCAT17(cStack_89,uStack_90);
                ppplStack_128 = ppplStack_98;
                uStack_130 = (long *****)pppplStack_a0;
              }
              else {
                uStack_130 = (long *****)((ulong)uStack_130 & 0xffffffffffffff00);
              }
              iStack_118 = CONCAT31(iStack_118._1_3_,cStack_89 != '\0');
              if (cStack_a1 == '\0') {
                uStack_190 = (long *****)((ulong)uStack_190 & 0xffffffffffffff00);
              }
              else {
                ppplStack_188 = ppplStack_b0;
                uStack_190 = (long *****)pppplStack_b8;
                uStack_180 = (long ****)CONCAT17(cStack_a1,uStack_a8);
              }
              uStack_178 = cStack_a1 != '\0';
              FUN_10a234a0c(&uStack_130,&uStack_190);
              goto LAB_10a4e126c;
            }
          }
LAB_10a4e073c:
          lVar22 = 0;
          if (lStack_88 != 0) {
            lVar22 = lStack_88 + 0x10;
          }
          FUN_10a0f3910(&uStack_130,lVar22,0);
          lVar22 = 0;
          if (lStack_c8 != 0) {
            lVar22 = lStack_c8 + 0x10;
          }
          FUN_10a0f3910(&uStack_190,lVar22,0);
          iVar14 = (int)lVar22;
          uStack_298 = CONCAT44(uStack_114,iStack_118);
          ppplStack_2a8 = ppplStack_128;
          pppplStack_2b0 = (long ****)uStack_130;
          ppplStack_2a0 = ppplStack_120;
          uStack_290 = CONCAT44(uStack_10c,uStack_110);
          uStack_288 = uStack_108;
          lStack_278 = lStack_f8;
          uStack_280 = uStack_100;
          uStack_260 = 0;
          uStack_258 = 0;
          if (uStack_130._4_4_ < 3) {
            uStack_260 = *puStack_e8;
            uStack_258 = puStack_e8[1];
            uStack_270 = (ulong)&pppplStack_2b0 | 8;
            puStack_268 = &uStack_260;
          }
          else {
            uStack_270 = uStack_f0;
            puStack_268 = puStack_e8;
            uStack_f0 = extraout_x9 | 8;
            puStack_e8 = (undefined8 *)(extraout_x9 + 0x50);
          }
          uStack_130 = (long *****)CONCAT44(uStack_130._4_4_,0x42ff0000);
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar16[3] = 0;
          puVar16[2] = 0;
          puVar16[5] = 0;
          puVar16[4] = 0;
          *(undefined8 *)((long)puVar16 + 0x34) = 0;
          *(undefined8 *)((long)puVar16 + 0x2c) = 0;
          ppplStack_248 = ppplStack_188;
          pppplStack_250 = (long ****)uStack_190;
          ppplStack_240 = (long ***)uStack_180;
          uStack_228 = uStack_168;
          uStack_230 = uStack_170;
          uStack_218 = uStack_158;
          uStack_220 = uStack_160;
          uStack_200 = 0;
          uStack_1f8 = 0;
          if (uStack_190._4_4_ < 3) {
            uStack_200 = *puStack_148;
            uStack_1f8 = puStack_148[1];
            ppplStack_210 = (long ***)&ppplStack_248;
            puStack_208 = &uStack_200;
          }
          else {
            ppplStack_210 = ppplStack_150;
            puStack_208 = puStack_148;
            ppplStack_150 = (long ***)(extraout_x10 | 8);
            puStack_148 = (undefined8 *)(extraout_x10 + 0x50);
          }
          uStack_190 = (long *****)CONCAT44(uStack_190._4_4_,0x42ff0000);
          puVar24[1] = 0;
          *puVar24 = 0;
          puVar24[3] = 0;
          puVar24[2] = 0;
          puVar24[5] = 0;
          puVar24[4] = 0;
          *(undefined8 *)((long)puVar24 + 0x34) = 0;
          *(undefined8 *)((long)puVar24 + 0x2c) = 0;
          if (puStack_148 != (undefined8 *)(extraout_x10 + 0x50)) {
            iVar14 = (int)puStack_148[-1];
            _free();
            if (lStack_f8 != 0) {
              piVar4 = (int *)(lStack_f8 + 0x14);
              do {
                iVar33 = *piVar4;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
                if (bVar10) {
                  *piVar4 = iVar33 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar33 + -1 == 0) {
                iVar14 = (int)&uStack_130;
                func_0x000109a848d4();
              }
            }
          }
          lStack_f8 = 0;
          iStack_118 = 0;
          uStack_114 = 0;
          ppplStack_120 = (long ***)0x0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          if (0 < uStack_130._4_4_) {
            lVar22 = 0;
            do {
              *(undefined4 *)(uStack_f0 + lVar22 * 4) = 0;
              lVar22 = lVar22 + 1;
            } while (lVar22 < uStack_130._4_4_);
          }
          if (puStack_e8 != (undefined8 *)(extraout_x9 + 0x50) && puStack_e8 != (undefined8 *)0x0) {
            iVar14 = (int)puStack_e8[-1];
            _free();
          }
          plVar20 = plStack_c0;
          if (plStack_c0 != (long *)0x0) {
            plVar5 = plStack_c0 + 1;
            do {
              lVar22 = *plVar5;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar10) {
                *plVar5 = lVar22 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              iVar14 = (int)plVar20;
            }
          }
          plVar20 = plStack_80;
          if (plStack_80 != (long *)0x0) {
            plVar5 = plStack_80 + 1;
            do {
              lVar22 = *plVar5;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar10) {
                *plVar5 = lVar22 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_80 + 0x10))(plStack_80);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              iVar14 = (int)plVar20;
            }
          }
          FUN_10ad055a0();
          if (iVar14 != 0) {
            if (*ppuVar17 == (undefined *)0x0) {
              plVar20 = (long *)*ppuVar15;
              if ((plVar20 == (long *)0x0) ||
                 ((**(code **)(*plVar20 + 0x18))(), plVar20 == (long *)0x0)) goto LAB_10a4e0980;
              plVar20 = plVar20 + 7;
            }
            else {
              plVar20 = (long *)(*ppuVar17 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar20 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppplStack_a0,&UNK_10f65d27b);
              func_0x000107c2b054(&pppplStack_b8,"");
              uStack_130 = (long *****)"null";
              if (cStack_89 != '\0') {
                uStack_130 = &pppplStack_a0;
              }
              uStack_190 = (long *****)"null";
              if (cStack_a1 != '\0') {
                uStack_190 = &pppplStack_b8;
              }
              FUN_10a224324(&uStack_130,&uStack_190);
              if (cStack_89 == '\0') {
                uStack_130 = (long *****)((ulong)uStack_130 & 0xffffffffffffff00);
              }
              else {
                ppplStack_128 = ppplStack_98;
                uStack_130 = (long *****)pppplStack_a0;
                ppplStack_120 = (long ***)CONCAT17(cStack_89,uStack_90);
              }
              iStack_118 = CONCAT31(iStack_118._1_3_,cStack_89 != '\0');
              if (cStack_a1 == '\0') {
                uStack_190 = (long *****)((ulong)uStack_190 & 0xffffffffffffff00);
              }
              else {
                ppplStack_188 = ppplStack_b0;
                uStack_190 = (long *****)pppplStack_b8;
                uStack_180 = (long ****)CONCAT17(cStack_a1,uStack_a8);
              }
              uStack_178 = cStack_a1 != '\0';
              FUN_10a234a0c(&uStack_130,&uStack_190);
              goto LAB_10a4e126c;
            }
          }
LAB_10a4e0980:
          FUN_10a4de77c(&uStack_130,(long *)(lVar19 + 0x98),plVar34 + 5,&pppplStack_2b0,
                        &pppplStack_250,&pppplStack_1e8);
          lVar19 = *(long *)(param_4 + 0x110);
          uStack_190 = ppppplVar3;
          FUN_10a509ab0(lVar19,ppppplVar3,&uStack_190);
          ppplVar36 = (long ***)(lVar19 + 0x40);
          func_0x00010a29373c((undefined8 *)(lVar19 + 0x38),*ppplVar36);
          *(long ******)(lVar19 + 0x38) = uStack_130;
          *(long ****)(lVar19 + 0x40) = ppplStack_128;
          *(long ****)(lVar19 + 0x48) = ppplStack_120;
          if ((long ****)ppplStack_120 == (long ****)0x0) {
            *(undefined8 *)(lVar19 + 0x38) = ppplVar36;
          }
          else {
            ppplStack_128[2] = (long **)ppplVar36;
            ppplStack_128 = (long ***)0x0;
            ppplStack_120 = (long ***)0x0;
            uStack_130 = (long *****)&ppplStack_128;
          }
          puVar18 = &uStack_130;
          func_0x00010a29373c(puVar18,ppplStack_128);
          iVar14 = (int)puVar18;
          FUN_10ad055a0();
          if (iVar14 != 0) {
            if (*ppuVar17 == (undefined *)0x0) {
              plVar20 = (long *)*ppuVar15;
              if ((plVar20 == (long *)0x0) ||
                 ((**(code **)(*plVar20 + 0x18))(), plVar20 == (long *)0x0)) goto LAB_10a4e0adc;
              plVar20 = plVar20 + 7;
            }
            else {
              plVar20 = (long *)(*ppuVar17 + 8);
            }
            if (((uint)*(undefined8 *)(*plVar20 + 0x10) >> 1 & 1) != 0) {
              func_0x000107c2b054(&pppplStack_a0,&UNK_10f65d29b);
              func_0x000107c2b054(&pppplStack_b8,"");
              uStack_130 = (long *****)"null";
              if (cStack_89 != '\0') {
                uStack_130 = &pppplStack_a0;
              }
              uStack_190 = (long *****)"null";
              if (cStack_a1 != '\0') {
                uStack_190 = &pppplStack_b8;
              }
              FUN_10a224324(&uStack_130,&uStack_190);
              if (cStack_89 == '\0') {
                uStack_130 = (long *****)((ulong)uStack_130 & 0xffffffffffffff00);
              }
              else {
                ppplStack_128 = ppplStack_98;
                uStack_130 = (long *****)pppplStack_a0;
                ppplStack_120 = (long ***)CONCAT17(cStack_89,uStack_90);
              }
              iStack_118 = CONCAT31(iStack_118._1_3_,cStack_89 != '\0');
              if (cStack_a1 == '\0') {
                uStack_190 = (long *****)((ulong)uStack_190 & 0xffffffffffffff00);
              }
              else {
                ppplStack_188 = ppplStack_b0;
                uStack_190 = (long *****)pppplStack_b8;
                uStack_180 = (long ****)CONCAT17(cStack_a1,uStack_a8);
              }
              uStack_178 = cStack_a1 != '\0';
              FUN_10a234a0c(&uStack_130,&uStack_190);
              goto LAB_10a4e126c;
            }
          }
LAB_10a4e0adc:
          FUN_10a0021b8(&pppplStack_2b0);
        }
        plVar34 = (long *)*plVar34;
      } while (plVar34 != (long *)0x0);
    }
    func_0x00010a22eba0(auStack_1b8);
    return;
  }
  ppuVar15 = ppuVar17;
  (*(code *)PTR___tlv_bootstrap_11340dfd8)();
  if (*ppuVar15 == (undefined *)0x0) {
    ppuVar15 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    plVar34 = (long *)*ppuVar15;
    if ((plVar34 == (long *)0x0) || ((**(code **)(*plVar34 + 0x18))(), plVar34 == (long *)0x0))
    goto LAB_10a4e0058;
    plVar34 = plVar34 + 7;
  }
  else {
    plVar34 = (long *)(*ppuVar15 + 8);
  }
  if (((uint)*(undefined8 *)(*plVar34 + 0x10) >> 1 & 1) == 0) goto LAB_10a4e0058;
  func_0x000107c2b054(&uStack_190,&UNK_10f65d259);
  func_0x000107c2b054(&pppplStack_1e8,"");
  if ((long)uStack_180 < 0) {
    pppplStack_2b0 = (long ****)"null";
    if ((long ****)ppplStack_188 != (long ****)0x0) {
      pppplStack_2b0 = (long ****)uStack_190;
    }
  }
  else {
    pppplStack_2b0 = (long ****)"null";
    if (uStack_180._7_1_ != '\0') {
      pppplStack_2b0 = (long ****)&uStack_190;
    }
  }
  if (cStack_1d1 < '\0') {
    uStack_130 = (long *****)"null";
    if ((long ****)ppplStack_1e0 != (long ****)0x0) {
      uStack_130 = (long *****)pppplStack_1e8;
    }
  }
  else {
    uStack_130 = (long *****)"null";
    if (cStack_1d1 != '\0') {
      uStack_130 = &pppplStack_1e8;
    }
  }
  FUN_10a224324(&pppplStack_2b0,&uStack_130);
  if ((long)uStack_180 < 0) {
    if ((long ****)ppplStack_188 != (long ****)0x0) {
      func_0x000107c3192c(&pppplStack_2b0,uStack_190);
      goto LAB_10a4e1210;
    }
LAB_10a4e11f4:
    uVar21 = 0;
    pppplStack_2b0 = (long ****)((ulong)pppplStack_2b0 & 0xffffffffffffff00);
  }
  else {
    if (uStack_180._7_1_ == '\0') goto LAB_10a4e11f4;
    ppplStack_2a8 = ppplStack_188;
    pppplStack_2b0 = (long ****)uStack_190;
    ppplStack_2a0 = (long ***)uStack_180;
LAB_10a4e1210:
    uVar21 = 1;
  }
  uStack_298 = CONCAT71(uStack_298._1_7_,uVar21);
  if (cStack_1d1 < '\0') {
    if ((long ****)ppplStack_1e0 != (long ****)0x0) {
      func_0x000107c3192c(&uStack_130,pppplStack_1e8);
      goto LAB_10a4e1258;
    }
LAB_10a4e123c:
    uVar21 = 0;
    uStack_130 = (long *****)((ulong)uStack_130 & 0xffffffffffffff00);
  }
  else {
    if (cStack_1d1 == '\0') goto LAB_10a4e123c;
    ppplStack_128 = ppplStack_1e0;
    uStack_130 = (long *****)pppplStack_1e8;
    ppplStack_120 = (long ***)CONCAT17(cStack_1d1,uStack_1d8);
LAB_10a4e1258:
    uVar21 = 1;
  }
  iStack_118 = CONCAT31(iStack_118._1_3_,uVar21);
  FUN_10a234a0c(&pppplStack_2b0,&uStack_130);
LAB_10a4e126c:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10a4e1270);
  (*pcVar13)();
}



/* Entry: 10a4e1540; end: 10a4e15b3;  */

undefined8 * FUN_10a4e1540(undefined8 *param_1)

{
  FUN_10a0d92c8(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a4e15b4; end: 10a4e1667;  */

void FUN_10a4e15b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_2 != (undefined8 *)0x0) {
    puVar4 = param_2;
    FUN_10a509b74();
    if (param_2 + 1 != puVar4) {
      FUN_10a4e1668(param_2,param_3);
      puVar4 = param_2;
      func_0x00010a509bf0();
      if (param_2 + 1 != puVar4) {
        func_0x00010a4e16a4(param_2,param_4);
        lVar6 = param_2[1];
        uVar7 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar7;
        if (lVar6 != 0) {
          plVar1 = (long *)(lVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
        uVar5 = 1;
        goto LAB_10a4e1654;
      }
    }
  }
  uVar5 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10a4e1654:
  *(undefined1 *)(param_1 + 3) = uVar5;
  return;
}



/* Entry: 10a4e1668; end: 10a4e16df;  */

/* WARNING: Removing unreachable block (ram,0x00010a4e1e34) */

undefined ** FUN_10a4e1668(long *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined1 *puVar15;
  long *plVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined ***pppuVar21;
  undefined1 auVar22 [16];
  undefined **ppuStack_d90;
  undefined8 uStack_d88;
  long lStack_d80;
  undefined8 uStack_d70;
  undefined **appuStack_d68 [7];
  undefined *puStack_d30;
  undefined **appuStack_d28 [7];
  undefined **ppuStack_cf0;
  code *pcStack_ce0;
  undefined **appuStack_cd8 [7];
  undefined *puStack_ca0;
  undefined **appuStack_c98 [7];
  undefined **ppuStack_c60;
  undefined *puStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c18;
  undefined *puStack_c10;
  undefined **ppuStack_c08;
  undefined4 uStack_bd0;
  undefined **ppuStack_bc8;
  undefined **ppuStack_bc0;
  undefined **ppuStack_bb8;
  undefined **ppuStack_bb0;
  undefined **ppuStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined **ppuStack_b78;
  undefined **ppuStack_b70;
  undefined **ppuStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b28;
  undefined **appuStack_b20 [7];
  undefined *puStack_ae8;
  undefined **appuStack_ae0 [8];
  undefined8 uStack_aa0;
  undefined **appuStack_a98 [7];
  undefined *puStack_a60;
  undefined **appuStack_a58 [7];
  undefined **ppuStack_a20;
  undefined8 uStack_a18;
  undefined **ppuStack_a10;
  undefined **appuStack_a08 [7];
  undefined *puStack_9d0;
  undefined **appuStack_9c8 [7];
  undefined **ppuStack_990;
  undefined8 uStack_988;
  undefined **ppuStack_980;
  undefined **ppuStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined *puStack_948;
  undefined **ppuStack_940;
  undefined **ppuStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined **ppuStack_900;
  undefined **ppuStack_8f8;
  undefined **ppuStack_8f0;
  undefined **ppuStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined *puStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined **ppuStack_870;
  undefined8 uStack_860;
  undefined **appuStack_858 [7];
  undefined *puStack_820;
  undefined **appuStack_818 [7];
  undefined **ppuStack_7e0;
  undefined8 uStack_7d0;
  undefined **ppuStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined *puStack_790;
  undefined **ppuStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined **appuStack_710 [2];
  undefined8 uStack_700;
  undefined **ppuStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined *puStack_6c0;
  undefined **ppuStack_6b8;
  undefined **ppuStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_640;
  undefined8 uStack_638;
  code *pcStack_630;
  undefined **ppuStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined8 uStack_560;
  undefined **appuStack_558 [7];
  undefined8 uStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined8 uStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined8 uStack_498;
  undefined **appuStack_490 [7];
  undefined8 uStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined8 uStack_3f8;
  undefined **ppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined *puStack_3b8;
  undefined **ppuStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_370;
  undefined **ppuStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined *puStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2e8;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  long *plStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined **appuStack_130 [7];
  undefined *puStack_f8;
  undefined **appuStack_f0 [7];
  long lStack_b8;
  long lStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 auStack_18 [8];
  
  puVar15 = auStack_18;
  FUN_10a503944(param_1,puVar15,param_2);
  if (*param_1 != 0) {
    return (undefined **)(*param_1 + 0x38);
  }
  plVar9 = (long *)&UNK_10f65dca5;
  FUN_109ffdddc();
  uStack_28 = 0x10a4e16a4;
  plVar16 = &lStack_38;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a4f73d8();
  if (*plVar9 == 0) {
    ppuVar10 = (undefined **)&UNK_10f65dca5;
    FUN_109ffdddc();
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 *)ppuVar10 = 0;
    *(undefined1 *)(ppuVar10 + 1) = 0;
    ppuVar10[2] = (undefined *)0x0;
    ppuVar10[3] = (undefined *)0x0;
    func_0x0001098b9e94(ppuVar10 + 4);
    ppuStack_cf0 = ppuVar10 + 0xf;
    *(undefined4 *)ppuStack_cf0 = 0;
    *(undefined4 *)((long)ppuVar10 + 0x7c) = 0;
    puVar19 = (undefined8 *)*plVar16;
    lVar17 = puVar19[1];
    puVar20 = (undefined *)*puVar19;
    ppuVar10[0x11] = (undefined *)puVar19[1];
    ppuVar10[0x10] = puVar20;
    if (lVar17 != 0) {
      plVar9 = (long *)(lVar17 + 8);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar8) {
          *plVar9 = *plVar9 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    ppuVar1 = ppuVar10 + 0x12;
    FUN_109d20224(ppuVar1,&UNK_10f65d2be,0x19);
    ppuStack_1e0 = (undefined **)ppuVar10[0x10];
    ppuVar2 = ppuVar10 + 0x65;
    ppuStack_3f0 = (undefined **)0x0;
    uStack_3f8 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    ppuStack_400 = (undefined **)0x0;
    ppuStack_408 = (undefined **)0x0;
    pppuVar13 = (undefined ***)&UNK_1053a6a3c;
    ppuStack_418 = (undefined **)&UNK_1053a6a3c;
    ppuStack_410 = &PTR_DAT_110ae9180;
    plStack_1d8 = (long *)&UNK_1053a6a3c;
    ppuStack_1d0 = &PTR_DAT_110ae9180;
    func_0x000109d18d1c(ppuVar2,&UNK_10f65d2d8,0x19,&ppuStack_1e0);
    func_0x0001092ba41c(&ppuStack_1e0);
    (*(code *)*ppuStack_410)(&ppuStack_410);
    ppuVar10[0x7c] = (undefined *)ppuVar1;
    ppuVar10[0x7d] = (undefined *)ppuVar2;
    func_0x000107c2b054(&ppuStack_d90,&DAT_10f63a6be);
    uStack_ba0 = 0;
    ppuStack_ba8 = (undefined **)0x0;
    uStack_b90 = 0;
    uStack_b98 = 0;
    ppuStack_bb0 = (undefined **)0x0;
    ppuStack_bb8 = (undefined **)0x0;
    ppuStack_bc8 = (undefined **)&UNK_1053a6a3c;
    ppuStack_bc0 = &PTR_DAT_110ae9180;
    uStack_bd0 = 0;
    ppuStack_3f0 = (undefined **)0x0;
    uStack_3f8 = 0;
    uStack_3e0 = 0;
    uStack_3e8 = 0;
    ppuStack_3d0 = (undefined **)0x0;
    uStack_3d8 = 0;
    ppuStack_408 = (undefined **)FUN_10a26dc34;
    ppuStack_3b0 = (undefined **)0x0;
    puStack_3b8 = (undefined *)0x0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    uStack_390 = 0;
    uStack_398 = 0;
    ppuStack_400 = &PTR_DAT_110ae9180;
    ppuStack_3c8 = (undefined **)&UNK_1098ba5f4;
    ppuStack_3c0 = &PTR_DAT_110ae9180;
    pcStack_ce0 = FUN_10a26dc34;
    appuStack_cd8[0] = &PTR_DAT_110ae9180;
    puStack_ca0 = &UNK_1098ba5f4;
    appuStack_c98[0] = &PTR_DAT_110ae9180;
    uStack_638 = uStack_d88;
    ppuStack_640 = ppuStack_d90;
    pcStack_630 = (code *)lStack_d80;
    ppuStack_d90 = (undefined **)0x0;
    uStack_d88 = 0;
    lStack_d80 = 0;
    plStack_1d8 = (long *)&UNK_1053a6a3c;
    puStack_c58 = &UNK_1053a6a3c;
    ppuStack_c18 = &PTR_PTR_1132fed50;
    puStack_c10 = &UNK_1053a6a3c;
    ppuStack_c50 = &PTR_DAT_110ae9180;
    ppuStack_1d0 = &PTR_DAT_110ae9180;
    ppuStack_198 = &PTR_PTR_1132fed50;
    ppuStack_190 = (undefined **)&UNK_1053a6a3c;
    ppuStack_188 = &PTR_DAT_110ae9180;
    ppuStack_c08 = &PTR_DAT_110ae9180;
    uStack_150 = (ulong)uStack_150._4_4_ << 0x20;
    ppuStack_c60 = ppuVar1;
    ppuStack_418 = ppuStack_cf0;
    ppuStack_1e0 = ppuVar1;
    func_0x0001098ba404(ppuVar10 + 4,&ppuStack_640,&ppuStack_1e0,ppuVar10 + 4);
    puVar20 = ppuVar10[8];
    puVar6 = ppuVar10[9];
    lVar17 = *(long *)(ppuVar10[5] + ((ulong)(puVar6 + (long)puVar20 + -1) >> 4) * 8);
    func_0x0001092ba41c(&ppuStack_198);
    func_0x0001092ba41c(&ppuStack_1e0);
    if ((long)pcStack_630 < 0) {
      __ZdlPv(ppuStack_640);
    }
    puVar19 = (undefined8 *)0xb8;
    __Znwm();
    ppuVar18 = appuStack_c98[0];
    *(undefined1 *)(puVar19 + 2) = 0;
    *puVar19 = &PTR_DAT_110be91e0;
    if (((ulong)appuStack_c98[0][1] & 1) == 0) {
      puVar19[3] = 0;
      puVar19[4] = 0;
    }
    else {
      puVar11 = (undefined8 *)0x58;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_110bb9cf8;
      puVar11[3] = puStack_ca0;
      (*(code *)ppuVar18[2])(puVar11 + 4,appuStack_c98);
      puVar19[3] = puVar11 + 3;
      puVar19[4] = puVar11;
    }
    puVar20 = (undefined *)(lVar17 + ((ulong)(puVar6 + (long)puVar20 + -1) & 0xf) * 0x668);
    puVar19[5] = ppuStack_cf0;
    puVar19[7] = pcStack_ce0;
    (*(code *)appuStack_cd8[0][2])(puVar19 + 8,appuStack_cd8);
    puVar19[0xf] = puStack_ca0;
    (*(code *)appuStack_c98[0][2])(puVar19 + 0x10,appuStack_c98);
    puVar19[1] = puVar20;
    *(undefined1 *)(puVar19 + 2) = 1;
    func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4a670f,0x2b,puVar19);
    ppuVar10[0x7e] = puVar20;
    (*(code *)*appuStack_c98[0])(appuStack_c98);
    (*(code *)*appuStack_cd8[0])(appuStack_cd8);
    (*(code *)*ppuStack_3c0)(&ppuStack_3c0);
    (*(code *)*ppuStack_400)(&ppuStack_400);
    func_0x0001092ba41c(&ppuStack_c18);
    func_0x0001092ba41c(&ppuStack_c60);
    (*(code *)*ppuStack_bc0)(&ppuStack_bc0);
    if (lStack_d80 < 0) {
      __ZdlPv(ppuStack_d90);
    }
    ppuVar10[0x84] = (undefined *)0x0;
    ppuVar10[0x83] = (undefined *)0x0;
    ppuVar10[0x86] = (undefined *)0x0;
    ppuVar10[0x85] = (undefined *)0x0;
    ppuVar10[0x88] = (undefined *)0x0;
    ppuVar10[0x87] = (undefined *)0x0;
    ppuVar10[0x8a] = (undefined *)0x0;
    ppuVar10[0x89] = (undefined *)0x0;
    ppuVar10[0x8c] = (undefined *)0x0;
    ppuVar10[0x8b] = (undefined *)0x0;
    ppuVar10[0x8e] = (undefined *)0x0;
    ppuVar10[0x8d] = (undefined *)0x0;
    ppuVar10[0x80] = (undefined *)0x0;
    ppuVar10[0x7f] = (undefined *)0x0;
    ppuVar10[0x82] = (undefined *)0x0;
    ppuVar10[0x81] = (undefined *)0x0;
    *(undefined4 *)(ppuVar10 + 0x81) = 0xffffffff;
    auVar22 = NEON_fmov(0xbf800000,4);
    *(long *)((long)ppuVar10 + 0x41c) = auVar22._8_8_;
    *(long *)((long)ppuVar10 + 0x414) = auVar22._0_8_;
    *(undefined4 *)((long)ppuVar10 + 0x424) = 0x7fc00000;
    ppuVar10[0x85] = (undefined *)0x3f8000007fc00000;
    ppuVar10[0x86] = (undefined *)0x0;
    ppuVar10[0x87] = (undefined *)0x0;
    *(undefined4 *)(ppuVar10 + 0x88) = 0x3f800000;
    *(undefined8 *)((long)ppuVar10 + 0x444) = 0;
    *(undefined8 *)((long)ppuVar10 + 0x44c) = 0;
    *(undefined4 *)((long)ppuVar10 + 0x454) = 0x3f800000;
    ppuVar10[0x8c] = (undefined *)0x0;
    ppuVar10[0x8b] = (undefined *)0x0;
    *(undefined4 *)(ppuVar10 + 0x8d) = 0x3f800000;
    *(undefined1 *)(ppuVar10 + 0x91) = 0;
    ppuVar10[0x90] = (undefined *)0x0;
    ppuVar10[0x8f] = (undefined *)0x0;
    *(undefined2 *)((long)ppuVar10 + 0x489) = 0x101;
    *(undefined1 *)((long)ppuVar10 + 0x48b) = 2;
    ppuVar10[0x92] = puVar15;
    ppuVar10[0x93] = ppuVar10[0x7e] + 0x10;
    _bzero(ppuVar10 + 0x94,0x408);
    uStack_1b0 = 0;
    ppuStack_1b8 = (undefined **)0x0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    ppuStack_1c0 = (undefined **)0x0;
    ppuStack_1c8 = (undefined **)0x0;
    plStack_1d8 = (long *)0x10a26dc44;
    ppuStack_1d0 = &PTR_DAT_110ae9180;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    uStack_160 = 0;
    uStack_168 = 0;
    ppuStack_198 = (undefined **)&UNK_1098ba5f4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    uStack_d70 = 0x10a26dc44;
    appuStack_d68[0] = &PTR_DAT_110ae9180;
    puStack_d30 = &UNK_1098ba5f4;
    appuStack_d28[0] = &PTR_DAT_110ae9180;
    puVar19 = (undefined8 *)0xb0;
    __Znwm();
    puVar19[3] = 0;
    puVar19[4] = 0;
    puVar19[6] = 0x10a26dc44;
    puVar19[7] = &PTR_DAT_110ae9180;
    puVar19[0xe] = &UNK_1098ba5f4;
    puVar19[0xf] = &PTR_DAT_110ae9180;
    *puVar19 = &PTR_FUN_110bea520;
    puVar19[1] = 0;
    *(undefined1 *)(puVar19 + 2) = 0;
    func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4a7ac1,0x23,puVar19);
    (*(code *)*appuStack_d28[0])(appuStack_d28);
    (*(code *)*appuStack_d68[0])(appuStack_d68);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
    pcVar12 = (char *)0x113835230;
    FUN_10a08f69c();
    cVar7 = *pcVar12;
    func_0x000107c2b054(&ppuStack_140,&DAT_10f3de190);
    uStack_8c8 = 0;
    uStack_8d0 = 0;
    uStack_8d8 = 0;
    uStack_8e0 = 0;
    ppuStack_8e8 = (undefined **)0x0;
    ppuStack_8f0 = (undefined **)0x0;
    ppuStack_900 = (undefined **)&UNK_1053a6a3c;
    ppuStack_8f8 = &PTR_DAT_110ae9180;
    uStack_388 = (ulong)uStack_388._4_4_ << 0x20;
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    uStack_610 = 0;
    uStack_5f8 = 0;
    uStack_600 = 0;
    pcStack_630 = FUN_10a4f8bf4;
    ppuStack_628 = &PTR_DAT_110ae9180;
    uStack_5d8 = 0;
    ppuStack_5e0 = (undefined **)0x0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    ppuStack_5f0 = (undefined **)&UNK_1098ba5f4;
    ppuStack_5e8 = &PTR_DAT_110ae9180;
    uStack_a18 = uStack_138;
    ppuStack_a20 = ppuStack_140;
    ppuStack_a10 = appuStack_130[0];
    uStack_138 = 0;
    appuStack_130[0] = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_1e0 = &PTR_PTR_1132fed50;
    plStack_1d8 = (long *)&UNK_1053a6a3c;
    ppuStack_418 = &PTR_PTR_1132fed50;
    ppuStack_410 = (undefined **)&UNK_1053a6a3c;
    ppuStack_3d0 = &PTR_PTR_1132fed50;
    ppuStack_408 = &PTR_DAT_110ae9180;
    ppuStack_1d0 = &PTR_DAT_110ae9180;
    ppuStack_198 = &PTR_PTR_1132fed50;
    ppuStack_190 = (undefined **)&UNK_1053a6a3c;
    ppuStack_188 = &PTR_DAT_110ae9180;
    ppuStack_3c8 = (undefined **)&UNK_1053a6a3c;
    ppuStack_3c0 = &PTR_DAT_110ae9180;
    uStack_150 = uStack_150 & 0xffffffff00000000;
    ppuStack_640 = ppuVar10;
    func_0x0001098ba404(ppuVar10 + 4,&ppuStack_a20,&ppuStack_1e0,ppuVar10 + 4);
    puVar20 = ppuVar10[8];
    puVar6 = ppuVar10[9];
    lVar17 = *(long *)(ppuVar10[5] + ((ulong)(puVar6 + (long)puVar20 + -1) >> 4) * 8);
    func_0x0001092ba41c(&ppuStack_198);
    func_0x0001092ba41c(&ppuStack_1e0);
    if ((long)ppuStack_a10 < 0) {
      __ZdlPv(ppuStack_a20);
    }
    puVar19 = (undefined8 *)0xb8;
    __Znwm();
    ppuVar18 = ppuStack_5e8;
    *(undefined1 *)(puVar19 + 2) = 0;
    *puVar19 = &PTR_FUN_110be9220;
    if (((ulong)ppuStack_5e8[1] & 1) == 0) {
      puVar19[3] = 0;
      puVar19[4] = 0;
    }
    else {
      pppuVar13 = (undefined ***)0x58;
      __Znwm();
      pppuVar13[1] = (undefined **)0x0;
      pppuVar13[2] = (undefined **)0x0;
      *pppuVar13 = &PTR_FUN_110bb9cf8;
      pppuVar13[3] = ppuStack_5f0;
      (*(code *)ppuVar18[2])(pppuVar13 + 4,&ppuStack_5e8);
      puVar19[3] = pppuVar13 + 3;
      puVar19[4] = pppuVar13;
    }
    puVar19[5] = ppuStack_640;
    puVar19[7] = pcStack_630;
    (*(code *)ppuStack_628[2])(puVar19 + 8,&ppuStack_628);
    puVar19[0xf] = ppuStack_5f0;
    (*(code *)ppuStack_5e8[2])(puVar19 + 0x10,&ppuStack_5e8);
    puVar19[1] = lVar17 + ((ulong)(puVar6 + (long)puVar20 + -1) & 0xf) * 0x668;
    *(undefined1 *)(puVar19 + 2) = 1;
    func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c8f08,0x24,puVar19);
    (*(code *)*ppuStack_5e8)(&ppuStack_5e8);
    (*(code *)*ppuStack_628)(&ppuStack_628);
    func_0x0001092ba41c(&ppuStack_3d0);
    func_0x0001092ba41c(&ppuStack_418);
    (*(code *)*ppuStack_8f8)(&ppuStack_8f8);
    ppuStack_1b8 = (undefined **)0x0;
    ppuStack_1c0 = (undefined **)0x0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    ppuStack_198 = (undefined **)0x0;
    uStack_1a0 = 0;
    ppuStack_1d0 = (undefined **)0x10a4f8c04;
    ppuStack_1c8 = &PTR_DAT_110ae9180;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    ppuStack_190 = (undefined **)&UNK_1098ba5f4;
    ppuStack_188 = &PTR_DAT_110ae9180;
    uStack_700 = 0x10a4f8c04;
    ppuStack_6f8 = &PTR_DAT_110ae9180;
    puStack_6c0 = &UNK_1098ba5f4;
    ppuStack_6b8 = &PTR_DAT_110ae9180;
    puVar11 = (undefined8 *)0xb8;
    appuStack_710[0] = ppuVar10;
    ppuStack_1e0 = ppuVar10;
    __Znwm();
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = ppuVar10;
    puVar11[7] = 0x10a4f8c04;
    puVar11[8] = &PTR_DAT_110ae9180;
    puVar11[0xf] = &UNK_1098ba5f4;
    puVar11[0x10] = &PTR_DAT_110ae9180;
    *puVar11 = &PTR_FUN_110bea560;
    puVar11[1] = 0;
    *(undefined1 *)(puVar11 + 2) = 0;
    func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c90da,0x22,puVar11);
    (*(code *)*ppuStack_6b8)(&ppuStack_6b8);
    (*(code *)*ppuStack_6f8)(&ppuStack_6f8);
    (*(code *)*ppuStack_188)(&ppuStack_188);
    (*(code *)*ppuStack_1c8)(&ppuStack_1c8);
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    ppuStack_1b8 = (undefined **)0x0;
    ppuStack_1c0 = (undefined **)0x0;
    ppuStack_1c8 = (undefined **)0x0;
    plStack_1d8 = (long *)0x10a4f8c14;
    ppuStack_1d0 = &PTR_DAT_110ae9180;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    uStack_160 = 0;
    uStack_168 = 0;
    ppuStack_198 = (undefined **)&UNK_1098ba5f4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    uStack_988 = 0x10a4f8c14;
    ppuStack_980 = &PTR_DAT_110ae9180;
    puStack_948 = &UNK_1098ba5f4;
    ppuStack_940 = &PTR_DAT_110ae9180;
    puVar11 = (undefined8 *)0xb0;
    __Znwm();
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[6] = 0x10a4f8c14;
    puVar11[7] = &PTR_DAT_110ae9180;
    puVar11[0xe] = &UNK_1098ba5f4;
    puVar11[0xf] = &PTR_DAT_110ae9180;
    *puVar11 = &PTR_FUN_110bea6e0;
    puVar11[1] = 0;
    *(undefined1 *)(puVar11 + 2) = 0;
    func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c8fed,0x22,puVar11);
    (*(code *)*ppuStack_940)(&ppuStack_940);
    (*(code *)*ppuStack_980)(&ppuStack_980);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
    if (cVar7 == '\0') {
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a4f8c24;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8c24;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_DAT_110beaef8;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c90fd,0x1d,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_8c0 = 0;
      uStack_8c8 = 0;
      uStack_8d0 = 0;
      uStack_8d8 = 0;
      uStack_8e0 = 0;
      ppuStack_8e8 = (undefined **)0x0;
      ppuStack_8f8 = (undefined **)0x10a4f8c44;
      ppuStack_8f0 = &PTR_DAT_110ae9180;
      uStack_8a0 = 0;
      ppuStack_8a8 = (undefined **)0x0;
      uStack_890 = 0;
      uStack_898 = 0;
      uStack_880 = 0;
      uStack_888 = 0;
      puStack_8b8 = &UNK_1098ba5f4;
      ppuStack_8b0 = &PTR_DAT_110ae9180;
      plStack_1d8 = (long *)0x10a4f8c44;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8c44;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110beb090;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c8fc9,0x23,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      (*(code *)*ppuStack_8b0)(&ppuStack_8b0);
      (*(code *)*ppuStack_8f0)(&ppuStack_8f0);
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      ppuStack_3f0 = (undefined **)0x0;
      uStack_3f8 = 0;
      ppuStack_400 = (undefined **)0x0;
      ppuStack_410 = (undefined **)0x10a4f8c54;
      ppuStack_408 = &PTR_DAT_110ae9180;
      puStack_3b8 = (undefined *)0x0;
      ppuStack_3c0 = (undefined **)0x0;
      uStack_3a8 = 0;
      ppuStack_3b0 = (undefined **)0x0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      ppuStack_3d0 = (undefined **)&UNK_1098ba5f4;
      ppuStack_3c8 = &PTR_DAT_110ae9180;
      plStack_1d8 = (long *)0x10a4f8c54;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8c54;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110beb1c8;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bd6df,0x20,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
      (*(code *)*ppuStack_408)(&ppuStack_408);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a4f8c64;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8c64;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110beb3d0;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c8f2d,0x26,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a26dc54;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a26dc54;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110beb508;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4a7b05,0x24,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a4f8ce4;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8ce4;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110beb6a0;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bdf3c,0x2e,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a4f8cf4;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8cf4;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110beb908;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bb2e7,0x26,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a26dc9c;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a26dc9c;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bebaa0;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4a7ae5,0x1f,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a4f8cc4;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8cc4;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bebc38;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bea76,0x26,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      ppuStack_3f0 = (undefined **)0x0;
      uStack_3f8 = 0;
      ppuStack_400 = (undefined **)0x0;
      ppuStack_410 = (undefined **)0x10a4f8cb4;
      ppuStack_408 = &PTR_DAT_110ae9180;
      puStack_3b8 = (undefined *)0x0;
      ppuStack_3c0 = (undefined **)0x0;
      uStack_3a8 = 0;
      ppuStack_3b0 = (undefined **)0x0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      ppuStack_3d0 = (undefined **)&UNK_1098ba5f4;
      ppuStack_3c8 = &PTR_DAT_110ae9180;
      plStack_1d8 = (long *)0x10a4f8cb4;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8cb4;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bebe68;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4beea5,0x26,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
      (*(code *)*ppuStack_408)(&ppuStack_408);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a4f8cd4;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8cd4;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bec070;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bf192,0x25,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a26dcac;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a26dcac;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bec2d8;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4a6e3c,0x2c,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      ppuStack_3f0 = (undefined **)0x0;
      uStack_3f8 = 0;
      ppuStack_400 = (undefined **)0x0;
      ppuStack_410 = (undefined **)0x10a4f8d04;
      ppuStack_408 = &PTR_DAT_110ae9180;
      puStack_3b8 = (undefined *)0x0;
      ppuStack_3c0 = (undefined **)0x0;
      uStack_3a8 = 0;
      ppuStack_3b0 = (undefined **)0x0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      ppuStack_3d0 = (undefined **)&UNK_1098ba5f4;
      ppuStack_3c8 = &PTR_DAT_110ae9180;
      plStack_1d8 = (long *)0x10a4f8d04;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8d04;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bec470;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bf94d,0x22,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
      (*(code *)*ppuStack_408)(&ppuStack_408);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      puVar20 = (undefined *)0x10a4f8c74;
      plStack_1d8 = (long *)0x10a4f8c74;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8c74;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bec678;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bfc14,0x2e,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      ppuStack_3f0 = (undefined **)0x0;
      uStack_3f8 = 0;
      ppuStack_400 = (undefined **)0x0;
      ppuStack_410 = (undefined **)0x10a4f8c94;
      ppuStack_408 = &PTR_DAT_110ae9180;
      puStack_3b8 = (undefined *)0x0;
      ppuStack_3c0 = (undefined **)0x0;
      uStack_3a8 = 0;
      ppuStack_3b0 = (undefined **)0x0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      ppuStack_3d0 = (undefined **)&UNK_1098ba5f4;
      ppuStack_3c8 = &PTR_DAT_110ae9180;
      plStack_1d8 = (long *)0x10a4f8c94;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8c94;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bec8e0;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c008b,0x1d,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
      (*(code *)*ppuStack_408)(&ppuStack_408);
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      ppuStack_3f0 = (undefined **)0x0;
      uStack_3f8 = 0;
      ppuStack_400 = (undefined **)0x0;
      pppuVar21 = &ppuStack_418;
      ppuStack_410 = (undefined **)0x10a4f8ca4;
      ppuStack_408 = &PTR_DAT_110ae9180;
      puStack_3b8 = (undefined *)0x0;
      ppuStack_3c0 = (undefined **)0x0;
      uStack_3a8 = 0;
      ppuStack_3b0 = (undefined **)0x0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      ppuStack_3d0 = (undefined **)&UNK_1098ba5f4;
      ppuStack_3c8 = &PTR_DAT_110ae9180;
      plStack_1d8 = (long *)0x10a4f8ca4;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8ca4;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110becb08;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c0339,0x1c,puVar11);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
      ppuVar18 = ppuStack_408;
    }
    else {
      uStack_7b8 = 0;
      uStack_7c0 = 0;
      uStack_7a8 = 0;
      uStack_7b0 = 0;
      uStack_798 = 0;
      uStack_7a0 = 0;
      uStack_7d0 = 0x10a4f8c24;
      ppuStack_7c8 = &PTR_DAT_110ae9180;
      uStack_778 = 0;
      uStack_780 = 0;
      uStack_768 = 0;
      uStack_770 = 0;
      uStack_758 = 0;
      uStack_760 = 0;
      puStack_790 = &UNK_1098ba5f4;
      ppuStack_788 = &PTR_DAT_110ae9180;
      puVar19 = (undefined8 *)0xb8;
      ppuStack_7e0 = ppuVar10;
      __Znwm();
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = ppuVar10;
      puVar19[7] = 0x10a4f8c24;
      puVar19[8] = &PTR_DAT_110ae9180;
      puVar19[0xf] = &UNK_1098ba5f4;
      puVar19[0x10] = &PTR_DAT_110ae9180;
      *puVar19 = &PTR_FUN_110bea8f8;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c90fd,0x1d,puVar19);
      (*(code *)*ppuStack_788)(&ppuStack_788);
      (*(code *)*ppuStack_7c8)(&ppuStack_7c8);
      uVar5 = *(undefined8 *)(*plVar16 + 0x10);
      ppuVar18 = *(undefined ***)(*plVar16 + 0x18);
      if (ppuVar18 != (undefined **)0x0) {
        ppuVar3 = ppuVar18 + 1;
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar8) {
            *ppuVar3 = *ppuVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppuStack_190 = (undefined **)0x0;
      ppuStack_198 = (undefined **)0x0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x10a4f8c34;
      ppuStack_1c0 = &PTR_DAT_110ae9180;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      uStack_150 = 0;
      uStack_158 = 0;
      ppuStack_188 = (undefined **)&UNK_1098ba5f4;
      ppuStack_180 = &PTR_DAT_110ae9180;
      plStack_1d8 = (long *)0x0;
      ppuStack_1e0 = (undefined **)0x0;
      ppuStack_bb0 = (undefined **)0x10a4f8c34;
      ppuStack_ba8 = &PTR_DAT_110ae9180;
      ppuStack_b70 = (undefined **)&UNK_1098ba5f4;
      ppuStack_b68 = &PTR_DAT_110ae9180;
      puVar19 = (undefined8 *)0xc0;
      ppuStack_bc8 = (undefined **)uVar5;
      ppuStack_bc0 = ppuVar18;
      __Znwm();
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = uVar5;
      puVar19[6] = ppuVar18;
      ppuStack_bc0 = (undefined **)0x0;
      ppuStack_bc8 = (undefined **)0x0;
      puVar19[8] = 0x10a4f8c34;
      puVar19[9] = &PTR_DAT_110ae9180;
      puVar19[0x10] = &UNK_1098ba5f4;
      puVar19[0x11] = &PTR_DAT_110ae9180;
      *puVar19 = &PTR_FUN_110beab28;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bcbdf,0x17,puVar19);
      (*(code *)*ppuStack_b68)(&ppuStack_b68);
      (*(code *)*ppuStack_ba8)(&ppuStack_ba8);
      ppuVar18 = ppuStack_bc0;
      if (ppuStack_bc0 != (undefined **)0x0) {
        ppuVar3 = ppuStack_bc0 + 1;
        do {
          puVar20 = *ppuVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar8) {
            *ppuVar3 = puVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuStack_bc0 + 0x10))(ppuStack_bc0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
        }
      }
      (*(code *)*ppuStack_180)(&ppuStack_180);
      (*(code *)*ppuStack_1c0)(&ppuStack_1c0);
      plVar9 = plStack_1d8;
      if (plStack_1d8 != (long *)0x0) {
        plVar4 = plStack_1d8 + 1;
        do {
          lVar17 = *plVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = lVar17 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_198 = (undefined **)0x0;
      uStack_1a0 = 0;
      ppuStack_1d0 = (undefined **)0x10a4f8c44;
      ppuStack_1c8 = &PTR_DAT_110ae9180;
      ppuStack_178 = (undefined **)0x0;
      ppuStack_180 = (undefined **)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      ppuStack_190 = (undefined **)&UNK_1098ba5f4;
      ppuStack_188 = &PTR_DAT_110ae9180;
      uStack_860 = 0x10a4f8c44;
      appuStack_858[0] = &PTR_DAT_110ae9180;
      puStack_820 = &UNK_1098ba5f4;
      appuStack_818[0] = &PTR_DAT_110ae9180;
      puVar19 = (undefined8 *)0xb8;
      ppuStack_870 = ppuVar10;
      ppuStack_1e0 = ppuVar10;
      __Znwm();
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = ppuVar10;
      puVar19[7] = 0x10a4f8c44;
      puVar19[8] = &PTR_DAT_110ae9180;
      puVar19[0xf] = &UNK_1098ba5f4;
      puVar19[0x10] = &PTR_DAT_110ae9180;
      *puVar19 = &PTR_FUN_110bead40;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c8fc9,0x23,puVar19);
      (*(code *)*appuStack_818[0])(appuStack_818);
      (*(code *)*appuStack_858[0])(appuStack_858);
      (*(code *)*ppuStack_188)(&ppuStack_188);
      (*(code *)*ppuStack_1c8)(&ppuStack_1c8);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a4f8cb4;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      uStack_138 = 0x10a4f8cb4;
      appuStack_130[0] = &PTR_DAT_110ae9180;
      puStack_f8 = &UNK_1098ba5f4;
      appuStack_f0[0] = &PTR_DAT_110ae9180;
      puVar19 = (undefined8 *)0xb0;
      __Znwm();
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[6] = 0x10a4f8cb4;
      puVar19[7] = &PTR_DAT_110ae9180;
      puVar19[0xe] = &UNK_1098ba5f4;
      puVar19[0xf] = &PTR_DAT_110ae9180;
      *puVar19 = &PTR_FUN_110bed588;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4beea5,0x26,puVar19);
      (*(code *)*appuStack_f0[0])(appuStack_f0);
      (*(code *)*appuStack_130[0])(appuStack_130);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      ppuStack_1e0 = (undefined **)*plVar16;
      plStack_1d8 = (long *)plVar16[1];
      if (plVar16[1] != 0) {
        plVar9 = (long *)(plVar16[1] + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar8) {
            *plVar9 = *plVar9 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_198 = (undefined **)0x0;
      uStack_1a0 = 0;
      ppuStack_188 = (undefined **)0x0;
      ppuStack_190 = (undefined **)0x0;
      ppuStack_1d0 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x10a26dc54;
      ppuStack_1b8 = &PTR_DAT_110ae9180;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      ppuStack_180 = (undefined **)&UNK_1098ba5f4;
      ppuStack_178 = &PTR_DAT_110ae9180;
      FUN_10a259f8c(ppuVar10 + 4,&ppuStack_1e0,0,0);
      (*(code *)*ppuStack_178)(&ppuStack_178);
      (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
      ppuVar18 = ppuStack_1d0;
      ppuStack_1d0 = (undefined **)0x0;
      if (ppuVar18 != (undefined **)0x0) {
        FUN_10aac7268();
        __ZdlPv();
      }
      plVar9 = plStack_1d8;
      if (plStack_1d8 != (long *)0x0) {
        plVar4 = plStack_1d8 + 1;
        do {
          lVar17 = *plVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = lVar17 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_260 = 0x10a26dc9c;
      ppuStack_258 = &PTR_DAT_110ae9180;
      uStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      puStack_220 = &UNK_1098ba5f4;
      ppuStack_218 = &PTR_DAT_110ae9180;
      puVar19 = (undefined8 *)0xb0;
      __Znwm();
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[6] = 0x10a26dc9c;
      puVar19[7] = &PTR_DAT_110ae9180;
      puVar19[0xe] = &UNK_1098ba5f4;
      puVar19[0xf] = &PTR_DAT_110ae9180;
      *puVar19 = &PTR_FUN_110bed6a8;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4a7ae5,0x1f,puVar19);
      (*(code *)*ppuStack_218)(&ppuStack_218);
      (*(code *)*ppuStack_258)(&ppuStack_258);
      uStack_2c0 = 0;
      uStack_2c8 = 0;
      uStack_2b0 = 0;
      uStack_2b8 = 0;
      uStack_2d0 = 0;
      uStack_2d8 = 0;
      uStack_2e8 = 0x10a4f8cc4;
      ppuStack_2e0 = &PTR_DAT_110ae9180;
      uStack_290 = 0;
      uStack_298 = 0;
      uStack_280 = 0;
      uStack_288 = 0;
      uStack_270 = 0;
      uStack_278 = 0;
      puStack_2a8 = &UNK_1098ba5f4;
      ppuStack_2a0 = &PTR_DAT_110ae9180;
      puVar19 = (undefined8 *)0xb0;
      __Znwm();
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[6] = 0x10a4f8cc4;
      puVar19[7] = &PTR_DAT_110ae9180;
      puVar19[0xe] = &UNK_1098ba5f4;
      puVar19[0xf] = &PTR_DAT_110ae9180;
      *puVar19 = &PTR_FUN_110bed6e8;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bea76,0x26,puVar19);
      (*(code *)*ppuStack_2a0)(&ppuStack_2a0);
      (*(code *)*ppuStack_2e0)(&ppuStack_2e0);
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_370 = 0x10a4f8cd4;
      ppuStack_368 = &PTR_DAT_110ae9180;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      puStack_330 = &UNK_1098ba5f4;
      ppuStack_328 = &PTR_DAT_110ae9180;
      puVar19 = (undefined8 *)0xb0;
      __Znwm();
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[6] = 0x10a4f8cd4;
      puVar19[7] = &PTR_DAT_110ae9180;
      puVar19[0xe] = &UNK_1098ba5f4;
      puVar19[0xf] = &PTR_DAT_110ae9180;
      *puVar19 = &PTR_FUN_110bed868;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bf192,0x25,puVar19);
      (*(code *)*ppuStack_328)(&ppuStack_328);
      (*(code *)*ppuStack_368)(&ppuStack_368);
      lVar17 = *plVar16;
      ppuStack_410 = *(undefined ***)(lVar17 + 0x10);
      ppuStack_408 = *(undefined ***)(lVar17 + 0x18);
      if (*(long *)(lVar17 + 0x18) != 0) {
        plVar9 = (long *)(*(long *)(lVar17 + 0x18) + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar8) {
            *plVar9 = *plVar9 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppuStack_3d0 = (undefined **)0x0;
      uStack_3d8 = 0;
      ppuStack_3c0 = (undefined **)0x0;
      ppuStack_3c8 = (undefined **)0x0;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      uStack_3f8 = 0x10a4f8ce4;
      ppuStack_3f0 = &PTR_DAT_110ae9180;
      uStack_3a0 = 0;
      uStack_3a8 = 0;
      uStack_390 = 0;
      uStack_398 = 0;
      uStack_380 = 0;
      uStack_388 = 0;
      puStack_3b8 = &UNK_1098ba5f4;
      ppuStack_3b0 = &PTR_DAT_110ae9180;
      puVar19 = (undefined8 *)0xc8;
      ppuStack_418 = ppuVar10;
      __Znwm();
      puVar19[3] = 0;
      puVar19[4] = 0;
      puVar19[5] = ppuVar10;
      puVar19[7] = ppuStack_408;
      puVar19[6] = ppuStack_410;
      ppuStack_410 = (undefined **)0x0;
      ppuStack_408 = (undefined **)0x0;
      puVar19[9] = 0x10a4f8ce4;
      puVar19[10] = &PTR_DAT_110ae9180;
      puVar19[0x11] = &UNK_1098ba5f4;
      puVar19[0x12] = &PTR_DAT_110ae9180;
      *puVar19 = &PTR_FUN_110bed9e8;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bdf3c,0x2e,puVar19);
      (*(code *)*ppuStack_3b0)(&ppuStack_3b0);
      (*(code *)*ppuStack_3f0)(&ppuStack_3f0);
      ppuVar18 = ppuStack_408;
      if (ppuStack_408 != (undefined **)0x0) {
        ppuVar3 = ppuStack_408 + 1;
        do {
          puVar20 = *ppuVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar8) {
            *ppuVar3 = puVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (puVar20 == (undefined *)0x0) {
          (**(code **)(*ppuStack_408 + 0x10))(ppuStack_408);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
        }
      }
      uStack_b88 = 0;
      uStack_b90 = 0;
      uStack_b98 = 0;
      uStack_ba0 = 0;
      ppuStack_ba8 = (undefined **)0x0;
      ppuStack_bb0 = (undefined **)0x0;
      ppuStack_bc0 = (undefined **)0x10a26dc8c;
      ppuStack_bb8 = &PTR_DAT_110ae9180;
      uStack_b60 = 0;
      ppuStack_b68 = (undefined **)0x0;
      uStack_b50 = 0;
      uStack_b58 = 0;
      uStack_4e0 = 0x10a523d34;
      ppuStack_4d8 = &PTR_DAT_110bedb58;
      uStack_b80 = 0x10a523d34;
      ppuStack_b78 = &PTR_DAT_110bedb58;
      uStack_b48 = 0;
      uStack_498 = 0x10a26dc8c;
      appuStack_490[0] = &PTR_DAT_110ae9180;
      uStack_458 = 0x10a523d34;
      ppuStack_450 = &PTR_DAT_110bedb58;
      puVar19 = (undefined8 *)0xb0;
      ppuStack_b70 = ppuVar10;
      ppuStack_4d0 = ppuVar10;
      ppuStack_448 = ppuVar10;
      __Znwm();
      *(undefined1 *)(puVar19 + 2) = 0;
      *puVar19 = &PTR_FUN_110bedb80;
      puVar11 = (undefined8 *)0x58;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0x10a523d34;
      *puVar11 = &PTR_FUN_110bb9cf8;
      puVar11[4] = &PTR_DAT_110bedb58;
      puVar11[5] = ppuVar10;
      puVar19[3] = puVar11 + 3;
      puVar19[4] = puVar11;
      puVar19[6] = 0x10a26dc8c;
      puVar19[7] = &PTR_DAT_110ae9180;
      puVar19[0xe] = 0x10a523d34;
      puVar19[0xf] = &PTR_DAT_110bedb58;
      puVar19[0x10] = ppuVar10;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4a698d,0x1d,puVar19);
      (*(code *)*ppuStack_450)(&ppuStack_450);
      (*(code *)*appuStack_490[0])(appuStack_490);
      (*(code *)*ppuStack_4d8)(&ppuStack_4d8);
      (*(code *)*ppuStack_b78)(&ppuStack_b78);
      (*(code *)*ppuStack_bb8)(&ppuStack_bb8);
      uStack_b88 = 0;
      uStack_b90 = 0;
      uStack_b98 = 0;
      uStack_ba0 = 0;
      ppuStack_ba8 = (undefined **)0x0;
      ppuStack_bb0 = (undefined **)0x0;
      ppuStack_bc0 = (undefined **)0x10a4f8cf4;
      ppuStack_bb8 = &PTR_DAT_110ae9180;
      uStack_b60 = 0;
      ppuStack_b68 = (undefined **)0x0;
      uStack_b50 = 0;
      uStack_b58 = 0;
      uStack_5a8 = 0x10a523d34;
      ppuStack_5a0 = &PTR_DAT_110bedb58;
      uStack_b80 = 0x10a523d34;
      ppuStack_b78 = &PTR_DAT_110bedb58;
      uStack_b48 = 0;
      uStack_560 = 0x10a4f8cf4;
      appuStack_558[0] = &PTR_DAT_110ae9180;
      uStack_520 = 0x10a523d34;
      ppuStack_518 = &PTR_DAT_110bedb58;
      puVar19 = (undefined8 *)0xb0;
      ppuStack_b70 = ppuVar10;
      ppuStack_598 = ppuVar10;
      ppuStack_510 = ppuVar10;
      __Znwm();
      *(undefined1 *)(puVar19 + 2) = 0;
      *puVar19 = &PTR_FUN_110bedbc0;
      puVar11 = (undefined8 *)0x58;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0x10a523d34;
      *puVar11 = &PTR_FUN_110bb9cf8;
      puVar11[4] = &PTR_DAT_110bedb58;
      puVar11[5] = ppuVar10;
      puVar19[3] = puVar11 + 3;
      puVar19[4] = puVar11;
      puVar19[6] = 0x10a4f8cf4;
      puVar19[7] = &PTR_DAT_110ae9180;
      puVar19[0xe] = 0x10a523d34;
      puVar19[0xf] = &PTR_DAT_110bedb58;
      puVar19[0x10] = ppuVar10;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bb2e7,0x26,puVar19);
      (*(code *)*ppuStack_518)(&ppuStack_518);
      (*(code *)*appuStack_558[0])(appuStack_558);
      (*(code *)*ppuStack_5a0)(&ppuStack_5a0);
      (*(code *)*ppuStack_b78)(&ppuStack_b78);
      (*(code *)*ppuStack_bb8)(&ppuStack_bb8);
      uStack_618 = 0;
      uStack_620 = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      uStack_600 = 0;
      pcStack_630 = (code *)0x10a26dcac;
      ppuStack_628 = &PTR_DAT_110ae9180;
      uStack_5d0 = 0;
      uStack_5d8 = 0;
      uStack_5c0 = 0;
      uStack_5c8 = 0;
      uStack_680 = 0x10a523d34;
      ppuStack_678 = &PTR_DAT_110bedb58;
      ppuStack_5f0 = (undefined **)0x10a523d34;
      ppuStack_5e8 = &PTR_DAT_110bedb58;
      uStack_5b8 = 0;
      ppuStack_bb8 = (undefined **)0x10a26dcac;
      ppuStack_bb0 = &PTR_DAT_110ae9180;
      ppuStack_b78 = (undefined **)0x10a523d34;
      ppuStack_b70 = &PTR_DAT_110bedb58;
      puVar19 = (undefined8 *)0xb8;
      ppuStack_bc8 = ppuVar10;
      ppuStack_b68 = ppuVar10;
      ppuStack_670 = ppuVar10;
      ppuStack_640 = ppuVar10;
      ppuStack_5e0 = ppuVar10;
      __Znwm();
      *(undefined1 *)(puVar19 + 2) = 0;
      *puVar19 = &PTR_FUN_110bedd40;
      puVar11 = (undefined8 *)0x58;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_110bb9cf8;
      puVar11[3] = 0x10a523d34;
      puVar11[4] = &PTR_DAT_110bedb58;
      puVar11[5] = ppuVar10;
      puVar19[3] = puVar11 + 3;
      puVar19[4] = puVar11;
      puVar19[5] = ppuVar10;
      puVar19[7] = 0x10a26dcac;
      puVar19[8] = &PTR_DAT_110ae9180;
      puVar19[0xf] = 0x10a523d34;
      puVar19[0x10] = &PTR_DAT_110bedb58;
      puVar19[0x11] = ppuVar10;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4a6e3c,0x2c,puVar19);
      (*(code *)*ppuStack_b70)(&ppuStack_b70);
      (*(code *)*ppuStack_bb0)(&ppuStack_bb0);
      (*(code *)*ppuStack_678)(&ppuStack_678);
      (*(code *)*ppuStack_5e8)(&ppuStack_5e8);
      (*(code *)*ppuStack_628)(&ppuStack_628);
      uStack_6e8 = 0;
      uStack_6f0 = 0;
      uStack_6d8 = 0;
      uStack_6e0 = 0;
      uStack_6c8 = 0;
      uStack_6d0 = 0;
      uStack_700 = 0x10a4f8d04;
      pppuVar13 = appuStack_710;
      ppuStack_6f8 = &PTR_DAT_110ae9180;
      uStack_6a0 = 0;
      uStack_6a8 = 0;
      uStack_690 = 0;
      uStack_698 = 0;
      uStack_750 = 0x10a523d34;
      ppuStack_748 = &PTR_DAT_110bedb58;
      puStack_6c0 = (undefined *)0x10a523d34;
      ppuStack_6b8 = &PTR_DAT_110bedb58;
      uStack_688 = 0;
      pcStack_630 = (code *)0x10a4f8d04;
      ppuStack_628 = &PTR_DAT_110ae9180;
      ppuStack_5f0 = (undefined **)0x10a523d34;
      ppuStack_5e8 = &PTR_DAT_110bedb58;
      puVar19 = (undefined8 *)0xb8;
      ppuStack_740 = ppuVar10;
      appuStack_710[0] = ppuVar10;
      ppuStack_6b0 = ppuVar10;
      ppuStack_640 = ppuVar10;
      ppuStack_5e0 = ppuVar10;
      __Znwm();
      *(undefined1 *)(puVar19 + 2) = 0;
      *puVar19 = &PTR_FUN_110bedd80;
      puVar11 = (undefined8 *)0x58;
      __Znwm();
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = &PTR_FUN_110bb9cf8;
      puVar11[3] = 0x10a523d34;
      puVar11[4] = &PTR_DAT_110bedb58;
      puVar11[5] = ppuVar10;
      puVar19[3] = puVar11 + 3;
      puVar19[4] = puVar11;
      puVar19[5] = ppuVar10;
      puVar19[7] = 0x10a4f8d04;
      puVar19[8] = &PTR_DAT_110ae9180;
      puVar19[0xf] = 0x10a523d34;
      puVar19[0x10] = &PTR_DAT_110bedb58;
      puVar19[0x11] = ppuVar10;
      puVar19[1] = 0;
      *(undefined1 *)(puVar19 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bf94d,0x22,puVar19);
      (*(code *)*ppuStack_5e8)(&ppuStack_5e8);
      (*(code *)*ppuStack_628)(&ppuStack_628);
      (*(code *)*ppuStack_748)(&ppuStack_748);
      (*(code *)*ppuStack_6b8)(&ppuStack_6b8);
      (*(code *)*ppuStack_6f8)(&ppuStack_6f8);
      uStack_7b8 = 0;
      uStack_7c0 = 0;
      uStack_7a8 = 0;
      uStack_7b0 = 0;
      uStack_798 = 0;
      uStack_7a0 = 0;
      uStack_7d0 = 0x10a4f8d14;
      ppuStack_7c8 = &PTR_DAT_110ae9180;
      uStack_778 = 0;
      uStack_780 = 0;
      uStack_768 = 0;
      uStack_770 = 0;
      uStack_758 = 0;
      uStack_760 = 0;
      puVar20 = &UNK_1098ba5f4;
      puStack_790 = &UNK_1098ba5f4;
      ppuStack_788 = &PTR_DAT_110ae9180;
      uStack_700 = 0x10a4f8d14;
      ppuStack_6f8 = &PTR_DAT_110ae9180;
      puStack_6c0 = &UNK_1098ba5f4;
      ppuStack_6b8 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb8;
      ppuStack_7e0 = ppuVar10;
      appuStack_710[0] = ppuVar10;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = ppuVar10;
      puVar11[7] = 0x10a4f8d14;
      puVar11[8] = &PTR_DAT_110ae9180;
      puVar11[0xf] = &UNK_1098ba5f4;
      puVar11[0x10] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bedea0;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c8e74,0x1f,puVar11);
      (*(code *)*ppuStack_6b8)(&ppuStack_6b8);
      (*(code *)*ppuStack_6f8)(&ppuStack_6f8);
      (*(code *)*ppuStack_788)(&ppuStack_788);
      (*(code *)*ppuStack_7c8)(&ppuStack_7c8);
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_198 = (undefined **)0x0;
      uStack_1a0 = 0;
      ppuStack_1d0 = (undefined **)0x10a4f8c54;
      ppuStack_1c8 = &PTR_DAT_110ae9180;
      ppuStack_178 = (undefined **)0x0;
      ppuStack_180 = (undefined **)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      ppuStack_190 = (undefined **)&UNK_1098ba5f4;
      ppuStack_188 = &PTR_DAT_110ae9180;
      uStack_860 = 0x10a4f8c54;
      appuStack_858[0] = &PTR_DAT_110ae9180;
      puStack_820 = &UNK_1098ba5f4;
      appuStack_818[0] = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb8;
      ppuStack_870 = ppuVar10;
      ppuStack_1e0 = ppuVar10;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = ppuVar10;
      puVar11[7] = 0x10a4f8c54;
      puVar11[8] = &PTR_DAT_110ae9180;
      puVar11[0xf] = &UNK_1098ba5f4;
      puVar11[0x10] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110becd30;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bd6df,0x20,puVar11);
      (*(code *)*appuStack_818[0])(appuStack_818);
      (*(code *)*appuStack_858[0])(appuStack_858);
      (*(code *)*ppuStack_188)(&ppuStack_188);
      (*(code *)*ppuStack_1c8)(&ppuStack_1c8);
      uStack_8d8 = 0;
      uStack_8e0 = 0;
      uStack_8c8 = 0;
      uStack_8d0 = 0;
      puStack_8b8 = (undefined *)0x0;
      uStack_8c0 = 0;
      ppuStack_8f0 = (undefined **)0x10a4f8c64;
      ppuStack_8e8 = &PTR_DAT_110ae9180;
      uStack_898 = 0;
      uStack_8a0 = 0;
      uStack_888 = 0;
      uStack_890 = 0;
      uStack_878 = 0;
      uStack_880 = 0;
      ppuStack_8b0 = (undefined **)&UNK_1098ba5f4;
      ppuStack_8a8 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb8;
      ppuStack_900 = ppuVar10;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = ppuVar10;
      puVar11[7] = 0x10a4f8c64;
      puVar11[8] = &PTR_DAT_110ae9180;
      puVar11[0xf] = &UNK_1098ba5f4;
      puVar11[0x10] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_DAT_110bece50;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c8f2d,0x26,puVar11);
      (*(code *)*ppuStack_8a8)(&ppuStack_8a8);
      (*(code *)*ppuStack_8e8)(&ppuStack_8e8);
      uStack_968 = 0;
      uStack_970 = 0;
      uStack_958 = 0;
      uStack_960 = 0;
      puStack_948 = (undefined *)0x0;
      uStack_950 = 0;
      ppuStack_980 = (undefined **)0x10a4f8c74;
      ppuStack_978 = &PTR_DAT_110ae9180;
      uStack_928 = 0;
      uStack_930 = 0;
      uStack_918 = 0;
      uStack_920 = 0;
      uStack_908 = 0;
      uStack_910 = 0;
      ppuStack_940 = (undefined **)&UNK_1098ba5f4;
      ppuStack_938 = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb8;
      ppuStack_990 = ppuVar10;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = ppuVar10;
      puVar11[7] = 0x10a4f8c74;
      puVar11[8] = &PTR_DAT_110ae9180;
      puVar11[0xf] = &UNK_1098ba5f4;
      puVar11[0x10] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_DAT_110becf70;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4bfc14,0x2e,puVar11);
      (*(code *)*ppuStack_938)(&ppuStack_938);
      (*(code *)*ppuStack_978)(&ppuStack_978);
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_198 = (undefined **)0x0;
      uStack_1a0 = 0;
      ppuStack_1d0 = (undefined **)0x10a4f8c84;
      ppuStack_1c8 = &PTR_DAT_110ae9180;
      ppuStack_178 = (undefined **)0x0;
      ppuStack_180 = (undefined **)0x0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      ppuStack_190 = (undefined **)&UNK_1098ba5f4;
      ppuStack_188 = &PTR_DAT_110ae9180;
      ppuStack_a10 = (undefined **)0x10a4f8c84;
      appuStack_a08[0] = &PTR_DAT_110ae9180;
      puStack_9d0 = &UNK_1098ba5f4;
      appuStack_9c8[0] = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb8;
      ppuStack_a20 = ppuVar10;
      ppuStack_1e0 = ppuVar10;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[5] = ppuVar10;
      puVar11[7] = 0x10a4f8c84;
      puVar11[8] = &PTR_DAT_110ae9180;
      puVar11[0xf] = &UNK_1098ba5f4;
      puVar11[0x10] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bed0f0;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c0c6c,0x1c,puVar11);
      (*(code *)*appuStack_9c8[0])(appuStack_9c8);
      (*(code *)*appuStack_a08[0])(appuStack_a08);
      (*(code *)*ppuStack_188)(&ppuStack_188);
      (*(code *)*ppuStack_1c8)(&ppuStack_1c8);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      plStack_1d8 = (long *)0x10a4f8c94;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      uStack_aa0 = 0x10a4f8c94;
      appuStack_a98[0] = &PTR_DAT_110ae9180;
      puStack_a60 = &UNK_1098ba5f4;
      appuStack_a58[0] = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8c94;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bed318;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c008b,0x1d,puVar11);
      (*(code *)*appuStack_a58[0])(appuStack_a58);
      (*(code *)*appuStack_a98[0])(appuStack_a98);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      (*(code *)*ppuStack_1d0)(&ppuStack_1d0);
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      ppuStack_1b8 = (undefined **)0x0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1c8 = (undefined **)0x0;
      pppuVar21 = &ppuStack_1e0;
      plStack_1d8 = (long *)0x10a4f8ca4;
      ppuStack_1d0 = &PTR_DAT_110ae9180;
      ppuStack_180 = (undefined **)0x0;
      ppuStack_188 = (undefined **)0x0;
      uStack_170 = 0;
      ppuStack_178 = (undefined **)0x0;
      uStack_160 = 0;
      uStack_168 = 0;
      ppuStack_198 = (undefined **)&UNK_1098ba5f4;
      ppuStack_190 = &PTR_DAT_110ae9180;
      uStack_b28 = 0x10a4f8ca4;
      appuStack_b20[0] = &PTR_DAT_110ae9180;
      puStack_ae8 = &UNK_1098ba5f4;
      appuStack_ae0[0] = &PTR_DAT_110ae9180;
      puVar11 = (undefined8 *)0xb0;
      __Znwm();
      puVar11[3] = 0;
      puVar11[4] = 0;
      puVar11[6] = 0x10a4f8ca4;
      puVar11[7] = &PTR_DAT_110ae9180;
      puVar11[0xe] = &UNK_1098ba5f4;
      puVar11[0xf] = &PTR_DAT_110ae9180;
      *puVar11 = &PTR_FUN_110bed450;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 0;
      func_0x0001098ba2b4(ppuVar10 + 4,&UNK_10e4c0339,0x1c,puVar11);
      (*(code *)*appuStack_ae0[0])(appuStack_ae0);
      (*(code *)*appuStack_b20[0])(appuStack_b20);
      (*(code *)*ppuStack_190)(&ppuStack_190);
      ppuVar18 = ppuStack_1d0;
    }
    pppuVar14 = pppuVar21 + 2;
    (*(code *)*ppuVar18)(pppuVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      __ZdlPv(puVar19);
      (*(code *)*ppuStack_5e8)(pppuVar21 + 0xb);
      (*(code *)*ppuStack_628)(pppuVar21 + 3);
      (*(code *)*ppuStack_748)(puVar20 + 8);
      (*(code *)*ppuStack_6b8)(pppuVar13 + 0xb);
      (*(code *)*ppuStack_6f8)(pppuVar13 + 3);
      FUN_10a509d1c(ppuVar10 + 0x93);
      func_0x00010a042d30(ppuVar10 + 0x8f);
      func_0x00010a09db0c(ppuVar10 + 0x7f);
      do {
        do {
          func_0x000109d18f34(ppuVar2);
          FUN_109d201a8(ppuVar1);
          func_0x00010a06e274(ppuVar10 + 0x10);
          func_0x0001098b9fe8(ppuVar10 + 4);
          func_0x00010a509cc4(ppuVar10 + 2);
          __Unwind_Resume(pppuVar14);
          (*(code *)*appuStack_c98[0])(puVar19 + 0xb);
          (*(code *)*appuStack_cd8[0])(puVar19 + 3);
          (*(code *)*ppuStack_3c0)(&ppuStack_3c0);
          (*(code *)*ppuStack_400)(&ppuStack_400);
          func_0x0001092ba41c(&ppuStack_c18);
          func_0x0001092ba41c(&ppuStack_c60);
          (*(code *)*ppuStack_bc0)(&ppuStack_bc0);
        } while (-1 < lStack_d80);
        __ZdlPv(ppuStack_d90);
      } while( true );
    }
    return ppuVar10;
  }
  return (undefined **)(*plVar9 + 0x38);
}



/* Entry: 10a4e16e0; end: 10a4e42df;  */

/* WARNING: Removing unreachable block (ram,0x00010a4e1e34) */

undefined ** FUN_10a4e16e0(undefined **param_1,long *param_2,undefined *param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined ***pppuVar18;
  undefined1 auVar19 [16];
  undefined **ppuStack_d50;
  undefined8 uStack_d48;
  long lStack_d40;
  undefined8 uStack_d30;
  undefined **appuStack_d28 [7];
  undefined *puStack_cf0;
  undefined **appuStack_ce8 [7];
  undefined **ppuStack_cb0;
  code *pcStack_ca0;
  undefined **appuStack_c98 [7];
  undefined *puStack_c60;
  undefined **appuStack_c58 [7];
  undefined **ppuStack_c20;
  undefined *puStack_c18;
  undefined **ppuStack_c10;
  undefined **ppuStack_bd8;
  undefined *puStack_bd0;
  undefined **ppuStack_bc8;
  undefined4 uStack_b90;
  undefined **ppuStack_b88;
  undefined **ppuStack_b80;
  undefined **ppuStack_b78;
  undefined **ppuStack_b70;
  undefined **ppuStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined **ppuStack_b38;
  undefined **ppuStack_b30;
  undefined **ppuStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_ae8;
  undefined **appuStack_ae0 [7];
  undefined *puStack_aa8;
  undefined **appuStack_aa0 [8];
  undefined8 uStack_a60;
  undefined **appuStack_a58 [7];
  undefined *puStack_a20;
  undefined **appuStack_a18 [7];
  undefined **ppuStack_9e0;
  undefined8 uStack_9d8;
  undefined **ppuStack_9d0;
  undefined **appuStack_9c8 [7];
  undefined *puStack_990;
  undefined **appuStack_988 [7];
  undefined **ppuStack_950;
  undefined8 uStack_948;
  undefined **ppuStack_940;
  undefined **ppuStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined *puStack_908;
  undefined **ppuStack_900;
  undefined **ppuStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined *puStack_878;
  undefined **ppuStack_870;
  undefined **ppuStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined **ppuStack_830;
  undefined8 uStack_820;
  undefined **appuStack_818 [7];
  undefined *puStack_7e0;
  undefined **appuStack_7d8 [7];
  undefined **ppuStack_7a0;
  undefined8 uStack_790;
  undefined **ppuStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined *puStack_750;
  undefined **ppuStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined **appuStack_6d0 [2];
  undefined8 uStack_6c0;
  undefined **ppuStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined *puStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined **ppuStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_600;
  undefined8 uStack_5f8;
  code *pcStack_5f0;
  undefined **ppuStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined8 uStack_520;
  undefined **appuStack_518 [7];
  undefined8 uStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined8 uStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined8 uStack_458;
  undefined **appuStack_450 [7];
  undefined8 uStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined **ppuStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined **appuStack_f0 [7];
  undefined *puStack_b8;
  undefined **appuStack_b0 [7];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  func_0x0001098b9e94(param_1 + 4);
  ppuStack_cb0 = param_1 + 0xf;
  *(undefined4 *)ppuStack_cb0 = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  puVar16 = (undefined8 *)*param_2;
  lVar14 = puVar16[1];
  puVar17 = (undefined *)*puVar16;
  param_1[0x11] = (undefined *)puVar16[1];
  param_1[0x10] = puVar17;
  if (lVar14 != 0) {
    plVar1 = (long *)(lVar14 + 8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  ppuVar2 = param_1 + 0x12;
  FUN_109d20224(ppuVar2,&UNK_10f65d2be,0x19);
  ppuStack_1a0 = (undefined **)param_1[0x10];
  ppuVar3 = param_1 + 0x65;
  ppuStack_3b0 = (undefined **)0x0;
  uStack_3b8 = 0;
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  ppuStack_3c0 = (undefined **)0x0;
  ppuStack_3c8 = (undefined **)0x0;
  pppuVar12 = (undefined ***)&UNK_1053a6a3c;
  ppuStack_3d8 = (undefined **)&UNK_1053a6a3c;
  ppuStack_3d0 = &PTR_DAT_110ae9180;
  plStack_198 = (long *)&UNK_1053a6a3c;
  ppuStack_190 = &PTR_DAT_110ae9180;
  func_0x000109d18d1c(ppuVar3,&UNK_10f65d2d8,0x19,&ppuStack_1a0);
  func_0x0001092ba41c(&ppuStack_1a0);
  (*(code *)*ppuStack_3d0)(&ppuStack_3d0);
  param_1[0x7c] = (undefined *)ppuVar2;
  param_1[0x7d] = (undefined *)ppuVar3;
  func_0x000107c2b054(&ppuStack_d50,&DAT_10f63a6be);
  uStack_b60 = 0;
  ppuStack_b68 = (undefined **)0x0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  ppuStack_b70 = (undefined **)0x0;
  ppuStack_b78 = (undefined **)0x0;
  ppuStack_b88 = (undefined **)&UNK_1053a6a3c;
  ppuStack_b80 = &PTR_DAT_110ae9180;
  uStack_b90 = 0;
  ppuStack_3b0 = (undefined **)0x0;
  uStack_3b8 = 0;
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  ppuStack_390 = (undefined **)0x0;
  uStack_398 = 0;
  ppuStack_3c8 = (undefined **)FUN_10a26dc34;
  ppuStack_370 = (undefined **)0x0;
  puStack_378 = (undefined *)0x0;
  uStack_360 = 0;
  uStack_368 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  ppuStack_3c0 = &PTR_DAT_110ae9180;
  ppuStack_388 = (undefined **)&UNK_1098ba5f4;
  ppuStack_380 = &PTR_DAT_110ae9180;
  pcStack_ca0 = FUN_10a26dc34;
  appuStack_c98[0] = &PTR_DAT_110ae9180;
  puStack_c60 = &UNK_1098ba5f4;
  appuStack_c58[0] = &PTR_DAT_110ae9180;
  uStack_5f8 = uStack_d48;
  ppuStack_600 = ppuStack_d50;
  pcStack_5f0 = (code *)lStack_d40;
  ppuStack_d50 = (undefined **)0x0;
  uStack_d48 = 0;
  lStack_d40 = 0;
  plStack_198 = (long *)&UNK_1053a6a3c;
  puStack_c18 = &UNK_1053a6a3c;
  ppuStack_bd8 = &PTR_PTR_1132fed50;
  puStack_bd0 = &UNK_1053a6a3c;
  ppuStack_c10 = &PTR_DAT_110ae9180;
  ppuStack_190 = &PTR_DAT_110ae9180;
  ppuStack_158 = &PTR_PTR_1132fed50;
  ppuStack_150 = (undefined **)&UNK_1053a6a3c;
  ppuStack_148 = &PTR_DAT_110ae9180;
  ppuStack_bc8 = &PTR_DAT_110ae9180;
  uStack_110 = (ulong)uStack_110._4_4_ << 0x20;
  ppuStack_c20 = ppuVar2;
  ppuStack_3d8 = ppuStack_cb0;
  ppuStack_1a0 = ppuVar2;
  func_0x0001098ba404(param_1 + 4,&ppuStack_600,&ppuStack_1a0,param_1 + 4);
  puVar17 = param_1[8];
  puVar7 = param_1[9];
  lVar14 = *(long *)(param_1[5] + ((ulong)(puVar7 + (long)puVar17 + -1) >> 4) * 8);
  func_0x0001092ba41c(&ppuStack_158);
  func_0x0001092ba41c(&ppuStack_1a0);
  if ((long)pcStack_5f0 < 0) {
    __ZdlPv(ppuStack_600);
  }
  puVar16 = (undefined8 *)0xb8;
  __Znwm();
  ppuVar15 = appuStack_c58[0];
  *(undefined1 *)(puVar16 + 2) = 0;
  *puVar16 = &PTR_DAT_110be91e0;
  if (((ulong)appuStack_c58[0][1] & 1) == 0) {
    puVar16[3] = 0;
    puVar16[4] = 0;
  }
  else {
    puVar10 = (undefined8 *)0x58;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110bb9cf8;
    puVar10[3] = puStack_c60;
    (*(code *)ppuVar15[2])(puVar10 + 4,appuStack_c58);
    puVar16[3] = puVar10 + 3;
    puVar16[4] = puVar10;
  }
  puVar17 = (undefined *)(lVar14 + ((ulong)(puVar7 + (long)puVar17 + -1) & 0xf) * 0x668);
  puVar16[5] = ppuStack_cb0;
  puVar16[7] = pcStack_ca0;
  (*(code *)appuStack_c98[0][2])(puVar16 + 8,appuStack_c98);
  puVar16[0xf] = puStack_c60;
  (*(code *)appuStack_c58[0][2])(puVar16 + 0x10,appuStack_c58);
  puVar16[1] = puVar17;
  *(undefined1 *)(puVar16 + 2) = 1;
  func_0x0001098ba2b4(param_1 + 4,&UNK_10e4a670f,0x2b,puVar16);
  param_1[0x7e] = puVar17;
  (*(code *)*appuStack_c58[0])(appuStack_c58);
  (*(code *)*appuStack_c98[0])(appuStack_c98);
  (*(code *)*ppuStack_380)(&ppuStack_380);
  (*(code *)*ppuStack_3c0)(&ppuStack_3c0);
  func_0x0001092ba41c(&ppuStack_bd8);
  func_0x0001092ba41c(&ppuStack_c20);
  (*(code *)*ppuStack_b80)(&ppuStack_b80);
  if (lStack_d40 < 0) {
    __ZdlPv(ppuStack_d50);
  }
  param_1[0x84] = (undefined *)0x0;
  param_1[0x83] = (undefined *)0x0;
  param_1[0x86] = (undefined *)0x0;
  param_1[0x85] = (undefined *)0x0;
  param_1[0x88] = (undefined *)0x0;
  param_1[0x87] = (undefined *)0x0;
  param_1[0x8a] = (undefined *)0x0;
  param_1[0x89] = (undefined *)0x0;
  param_1[0x8c] = (undefined *)0x0;
  param_1[0x8b] = (undefined *)0x0;
  param_1[0x8e] = (undefined *)0x0;
  param_1[0x8d] = (undefined *)0x0;
  param_1[0x80] = (undefined *)0x0;
  param_1[0x7f] = (undefined *)0x0;
  param_1[0x82] = (undefined *)0x0;
  param_1[0x81] = (undefined *)0x0;
  *(undefined4 *)(param_1 + 0x81) = 0xffffffff;
  auVar19 = NEON_fmov(0xbf800000,4);
  *(long *)((long)param_1 + 0x41c) = auVar19._8_8_;
  *(long *)((long)param_1 + 0x414) = auVar19._0_8_;
  *(undefined4 *)((long)param_1 + 0x424) = 0x7fc00000;
  param_1[0x85] = (undefined *)0x3f8000007fc00000;
  param_1[0x86] = (undefined *)0x0;
  param_1[0x87] = (undefined *)0x0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x444) = 0;
  *(undefined8 *)((long)param_1 + 0x44c) = 0;
  *(undefined4 *)((long)param_1 + 0x454) = 0x3f800000;
  param_1[0x8c] = (undefined *)0x0;
  param_1[0x8b] = (undefined *)0x0;
  *(undefined4 *)(param_1 + 0x8d) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x90] = (undefined *)0x0;
  param_1[0x8f] = (undefined *)0x0;
  *(undefined2 *)((long)param_1 + 0x489) = 0x101;
  *(undefined1 *)((long)param_1 + 0x48b) = 2;
  param_1[0x92] = param_3;
  param_1[0x93] = param_1[0x7e] + 0x10;
  _bzero(param_1 + 0x94,0x408);
  uStack_170 = 0;
  ppuStack_178 = (undefined **)0x0;
  uStack_160 = 0;
  uStack_168 = 0;
  ppuStack_180 = (undefined **)0x0;
  ppuStack_188 = (undefined **)0x0;
  plStack_198 = (long *)0x10a26dc44;
  ppuStack_190 = &PTR_DAT_110ae9180;
  ppuStack_140 = (undefined **)0x0;
  ppuStack_148 = (undefined **)0x0;
  uStack_130 = 0;
  ppuStack_138 = (undefined **)0x0;
  uStack_120 = 0;
  uStack_128 = 0;
  ppuStack_158 = (undefined **)&UNK_1098ba5f4;
  ppuStack_150 = &PTR_DAT_110ae9180;
  uStack_d30 = 0x10a26dc44;
  appuStack_d28[0] = &PTR_DAT_110ae9180;
  puStack_cf0 = &UNK_1098ba5f4;
  appuStack_ce8[0] = &PTR_DAT_110ae9180;
  puVar16 = (undefined8 *)0xb0;
  __Znwm();
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[6] = 0x10a26dc44;
  puVar16[7] = &PTR_DAT_110ae9180;
  puVar16[0xe] = &UNK_1098ba5f4;
  puVar16[0xf] = &PTR_DAT_110ae9180;
  *puVar16 = &PTR_FUN_110bea520;
  puVar16[1] = 0;
  *(undefined1 *)(puVar16 + 2) = 0;
  func_0x0001098ba2b4(param_1 + 4,&UNK_10e4a7ac1,0x23,puVar16);
  (*(code *)*appuStack_ce8[0])(appuStack_ce8);
  (*(code *)*appuStack_d28[0])(appuStack_d28);
  (*(code *)*ppuStack_150)(&ppuStack_150);
  (*(code *)*ppuStack_190)(&ppuStack_190);
  pcVar11 = (char *)0x113835230;
  FUN_10a08f69c();
  cVar8 = *pcVar11;
  func_0x000107c2b054(&ppuStack_100,&DAT_10f3de190);
  uStack_888 = 0;
  uStack_890 = 0;
  uStack_898 = 0;
  uStack_8a0 = 0;
  ppuStack_8a8 = (undefined **)0x0;
  ppuStack_8b0 = (undefined **)0x0;
  ppuStack_8c0 = (undefined **)&UNK_1053a6a3c;
  ppuStack_8b8 = &PTR_DAT_110ae9180;
  uStack_348 = (ulong)uStack_348._4_4_ << 0x20;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  pcStack_5f0 = FUN_10a4f8bf4;
  ppuStack_5e8 = &PTR_DAT_110ae9180;
  uStack_598 = 0;
  ppuStack_5a0 = (undefined **)0x0;
  uStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  uStack_580 = 0;
  ppuStack_5b0 = (undefined **)&UNK_1098ba5f4;
  ppuStack_5a8 = &PTR_DAT_110ae9180;
  uStack_9d8 = uStack_f8;
  ppuStack_9e0 = ppuStack_100;
  ppuStack_9d0 = appuStack_f0[0];
  uStack_f8 = 0;
  appuStack_f0[0] = (undefined **)0x0;
  ppuStack_100 = (undefined **)0x0;
  ppuStack_1a0 = &PTR_PTR_1132fed50;
  plStack_198 = (long *)&UNK_1053a6a3c;
  ppuStack_3d8 = &PTR_PTR_1132fed50;
  ppuStack_3d0 = (undefined **)&UNK_1053a6a3c;
  ppuStack_390 = &PTR_PTR_1132fed50;
  ppuStack_3c8 = &PTR_DAT_110ae9180;
  ppuStack_190 = &PTR_DAT_110ae9180;
  ppuStack_158 = &PTR_PTR_1132fed50;
  ppuStack_150 = (undefined **)&UNK_1053a6a3c;
  ppuStack_148 = &PTR_DAT_110ae9180;
  ppuStack_388 = (undefined **)&UNK_1053a6a3c;
  ppuStack_380 = &PTR_DAT_110ae9180;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  ppuStack_600 = param_1;
  func_0x0001098ba404(param_1 + 4,&ppuStack_9e0,&ppuStack_1a0,param_1 + 4);
  puVar17 = param_1[8];
  puVar7 = param_1[9];
  lVar14 = *(long *)(param_1[5] + ((ulong)(puVar7 + (long)puVar17 + -1) >> 4) * 8);
  func_0x0001092ba41c(&ppuStack_158);
  func_0x0001092ba41c(&ppuStack_1a0);
  if ((long)ppuStack_9d0 < 0) {
    __ZdlPv(ppuStack_9e0);
  }
  puVar16 = (undefined8 *)0xb8;
  __Znwm();
  ppuVar15 = ppuStack_5a8;
  *(undefined1 *)(puVar16 + 2) = 0;
  *puVar16 = &PTR_FUN_110be9220;
  if (((ulong)ppuStack_5a8[1] & 1) == 0) {
    puVar16[3] = 0;
    puVar16[4] = 0;
  }
  else {
    pppuVar12 = (undefined ***)0x58;
    __Znwm();
    pppuVar12[1] = (undefined **)0x0;
    pppuVar12[2] = (undefined **)0x0;
    *pppuVar12 = &PTR_FUN_110bb9cf8;
    pppuVar12[3] = ppuStack_5b0;
    (*(code *)ppuVar15[2])(pppuVar12 + 4,&ppuStack_5a8);
    puVar16[3] = pppuVar12 + 3;
    puVar16[4] = pppuVar12;
  }
  puVar16[5] = ppuStack_600;
  puVar16[7] = pcStack_5f0;
  (*(code *)ppuStack_5e8[2])(puVar16 + 8,&ppuStack_5e8);
  puVar16[0xf] = ppuStack_5b0;
  (*(code *)ppuStack_5a8[2])(puVar16 + 0x10,&ppuStack_5a8);
  puVar16[1] = lVar14 + ((ulong)(puVar7 + (long)puVar17 + -1) & 0xf) * 0x668;
  *(undefined1 *)(puVar16 + 2) = 1;
  func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c8f08,0x24,puVar16);
  (*(code *)*ppuStack_5a8)(&ppuStack_5a8);
  (*(code *)*ppuStack_5e8)(&ppuStack_5e8);
  func_0x0001092ba41c(&ppuStack_390);
  func_0x0001092ba41c(&ppuStack_3d8);
  (*(code *)*ppuStack_8b8)(&ppuStack_8b8);
  ppuStack_178 = (undefined **)0x0;
  ppuStack_180 = (undefined **)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  ppuStack_158 = (undefined **)0x0;
  uStack_160 = 0;
  ppuStack_190 = (undefined **)0x10a4f8c04;
  ppuStack_188 = &PTR_DAT_110ae9180;
  ppuStack_138 = (undefined **)0x0;
  ppuStack_140 = (undefined **)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  ppuStack_150 = (undefined **)&UNK_1098ba5f4;
  ppuStack_148 = &PTR_DAT_110ae9180;
  uStack_6c0 = 0x10a4f8c04;
  ppuStack_6b8 = &PTR_DAT_110ae9180;
  puStack_680 = &UNK_1098ba5f4;
  ppuStack_678 = &PTR_DAT_110ae9180;
  puVar10 = (undefined8 *)0xb8;
  appuStack_6d0[0] = param_1;
  ppuStack_1a0 = param_1;
  __Znwm();
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = param_1;
  puVar10[7] = 0x10a4f8c04;
  puVar10[8] = &PTR_DAT_110ae9180;
  puVar10[0xf] = &UNK_1098ba5f4;
  puVar10[0x10] = &PTR_DAT_110ae9180;
  *puVar10 = &PTR_FUN_110bea560;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 0;
  func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c90da,0x22,puVar10);
  (*(code *)*ppuStack_678)(&ppuStack_678);
  (*(code *)*ppuStack_6b8)(&ppuStack_6b8);
  (*(code *)*ppuStack_148)(&ppuStack_148);
  (*(code *)*ppuStack_188)(&ppuStack_188);
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  ppuStack_178 = (undefined **)0x0;
  ppuStack_180 = (undefined **)0x0;
  ppuStack_188 = (undefined **)0x0;
  plStack_198 = (long *)0x10a4f8c14;
  ppuStack_190 = &PTR_DAT_110ae9180;
  ppuStack_140 = (undefined **)0x0;
  ppuStack_148 = (undefined **)0x0;
  uStack_130 = 0;
  ppuStack_138 = (undefined **)0x0;
  uStack_120 = 0;
  uStack_128 = 0;
  ppuStack_158 = (undefined **)&UNK_1098ba5f4;
  ppuStack_150 = &PTR_DAT_110ae9180;
  uStack_948 = 0x10a4f8c14;
  ppuStack_940 = &PTR_DAT_110ae9180;
  puStack_908 = &UNK_1098ba5f4;
  ppuStack_900 = &PTR_DAT_110ae9180;
  puVar10 = (undefined8 *)0xb0;
  __Znwm();
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[6] = 0x10a4f8c14;
  puVar10[7] = &PTR_DAT_110ae9180;
  puVar10[0xe] = &UNK_1098ba5f4;
  puVar10[0xf] = &PTR_DAT_110ae9180;
  *puVar10 = &PTR_FUN_110bea6e0;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 0;
  func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c8fed,0x22,puVar10);
  (*(code *)*ppuStack_900)(&ppuStack_900);
  (*(code *)*ppuStack_940)(&ppuStack_940);
  (*(code *)*ppuStack_150)(&ppuStack_150);
  (*(code *)*ppuStack_190)(&ppuStack_190);
  if (cVar8 == '\0') {
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a4f8c24;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8c24;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_DAT_110beaef8;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c90fd,0x1d,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_880 = 0;
    uStack_888 = 0;
    uStack_890 = 0;
    uStack_898 = 0;
    uStack_8a0 = 0;
    ppuStack_8a8 = (undefined **)0x0;
    ppuStack_8b8 = (undefined **)0x10a4f8c44;
    ppuStack_8b0 = &PTR_DAT_110ae9180;
    uStack_860 = 0;
    ppuStack_868 = (undefined **)0x0;
    uStack_850 = 0;
    uStack_858 = 0;
    uStack_840 = 0;
    uStack_848 = 0;
    puStack_878 = &UNK_1098ba5f4;
    ppuStack_870 = &PTR_DAT_110ae9180;
    plStack_198 = (long *)0x10a4f8c44;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8c44;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110beb090;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c8fc9,0x23,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    (*(code *)*ppuStack_870)(&ppuStack_870);
    (*(code *)*ppuStack_8b0)(&ppuStack_8b0);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    ppuStack_3b0 = (undefined **)0x0;
    uStack_3b8 = 0;
    ppuStack_3c0 = (undefined **)0x0;
    ppuStack_3d0 = (undefined **)0x10a4f8c54;
    ppuStack_3c8 = &PTR_DAT_110ae9180;
    puStack_378 = (undefined *)0x0;
    ppuStack_380 = (undefined **)0x0;
    uStack_368 = 0;
    ppuStack_370 = (undefined **)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    ppuStack_390 = (undefined **)&UNK_1098ba5f4;
    ppuStack_388 = &PTR_DAT_110ae9180;
    plStack_198 = (long *)0x10a4f8c54;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8c54;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110beb1c8;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bd6df,0x20,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    (*(code *)*ppuStack_388)(&ppuStack_388);
    (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a4f8c64;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8c64;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110beb3d0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c8f2d,0x26,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a26dc54;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a26dc54;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110beb508;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4a7b05,0x24,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a4f8ce4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8ce4;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110beb6a0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bdf3c,0x2e,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a4f8cf4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8cf4;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110beb908;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bb2e7,0x26,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a26dc9c;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a26dc9c;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bebaa0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4a7ae5,0x1f,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a4f8cc4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8cc4;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bebc38;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bea76,0x26,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    ppuStack_3b0 = (undefined **)0x0;
    uStack_3b8 = 0;
    ppuStack_3c0 = (undefined **)0x0;
    ppuStack_3d0 = (undefined **)0x10a4f8cb4;
    ppuStack_3c8 = &PTR_DAT_110ae9180;
    puStack_378 = (undefined *)0x0;
    ppuStack_380 = (undefined **)0x0;
    uStack_368 = 0;
    ppuStack_370 = (undefined **)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    ppuStack_390 = (undefined **)&UNK_1098ba5f4;
    ppuStack_388 = &PTR_DAT_110ae9180;
    plStack_198 = (long *)0x10a4f8cb4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8cb4;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bebe68;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4beea5,0x26,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    (*(code *)*ppuStack_388)(&ppuStack_388);
    (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a4f8cd4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8cd4;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bec070;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bf192,0x25,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a26dcac;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a26dcac;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bec2d8;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4a6e3c,0x2c,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    ppuStack_3b0 = (undefined **)0x0;
    uStack_3b8 = 0;
    ppuStack_3c0 = (undefined **)0x0;
    ppuStack_3d0 = (undefined **)0x10a4f8d04;
    ppuStack_3c8 = &PTR_DAT_110ae9180;
    puStack_378 = (undefined *)0x0;
    ppuStack_380 = (undefined **)0x0;
    uStack_368 = 0;
    ppuStack_370 = (undefined **)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    ppuStack_390 = (undefined **)&UNK_1098ba5f4;
    ppuStack_388 = &PTR_DAT_110ae9180;
    plStack_198 = (long *)0x10a4f8d04;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8d04;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bec470;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bf94d,0x22,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    (*(code *)*ppuStack_388)(&ppuStack_388);
    (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    puVar17 = (undefined *)0x10a4f8c74;
    plStack_198 = (long *)0x10a4f8c74;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8c74;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bec678;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bfc14,0x2e,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    ppuStack_3b0 = (undefined **)0x0;
    uStack_3b8 = 0;
    ppuStack_3c0 = (undefined **)0x0;
    ppuStack_3d0 = (undefined **)0x10a4f8c94;
    ppuStack_3c8 = &PTR_DAT_110ae9180;
    puStack_378 = (undefined *)0x0;
    ppuStack_380 = (undefined **)0x0;
    uStack_368 = 0;
    ppuStack_370 = (undefined **)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    ppuStack_390 = (undefined **)&UNK_1098ba5f4;
    ppuStack_388 = &PTR_DAT_110ae9180;
    plStack_198 = (long *)0x10a4f8c94;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8c94;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bec8e0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c008b,0x1d,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    (*(code *)*ppuStack_388)(&ppuStack_388);
    (*(code *)*ppuStack_3c8)(&ppuStack_3c8);
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    ppuStack_3b0 = (undefined **)0x0;
    uStack_3b8 = 0;
    ppuStack_3c0 = (undefined **)0x0;
    pppuVar18 = &ppuStack_3d8;
    ppuStack_3d0 = (undefined **)0x10a4f8ca4;
    ppuStack_3c8 = &PTR_DAT_110ae9180;
    puStack_378 = (undefined *)0x0;
    ppuStack_380 = (undefined **)0x0;
    uStack_368 = 0;
    ppuStack_370 = (undefined **)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    ppuStack_390 = (undefined **)&UNK_1098ba5f4;
    ppuStack_388 = &PTR_DAT_110ae9180;
    plStack_198 = (long *)0x10a4f8ca4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8ca4;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110becb08;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c0339,0x1c,puVar10);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    (*(code *)*ppuStack_388)(&ppuStack_388);
    ppuVar15 = ppuStack_3c8;
  }
  else {
    uStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    uStack_758 = 0;
    uStack_760 = 0;
    uStack_790 = 0x10a4f8c24;
    ppuStack_788 = &PTR_DAT_110ae9180;
    uStack_738 = 0;
    uStack_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    puStack_750 = &UNK_1098ba5f4;
    ppuStack_748 = &PTR_DAT_110ae9180;
    puVar16 = (undefined8 *)0xb8;
    ppuStack_7a0 = param_1;
    __Znwm();
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[5] = param_1;
    puVar16[7] = 0x10a4f8c24;
    puVar16[8] = &PTR_DAT_110ae9180;
    puVar16[0xf] = &UNK_1098ba5f4;
    puVar16[0x10] = &PTR_DAT_110ae9180;
    *puVar16 = &PTR_FUN_110bea8f8;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c90fd,0x1d,puVar16);
    (*(code *)*ppuStack_748)(&ppuStack_748);
    (*(code *)*ppuStack_788)(&ppuStack_788);
    uVar6 = *(undefined8 *)(*param_2 + 0x10);
    ppuVar15 = *(undefined ***)(*param_2 + 0x18);
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar4 = ppuVar15 + 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar9) {
          *ppuVar4 = *ppuVar4 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    ppuStack_150 = (undefined **)0x0;
    ppuStack_158 = (undefined **)0x0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x10a4f8c34;
    ppuStack_180 = &PTR_DAT_110ae9180;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    ppuStack_148 = (undefined **)&UNK_1098ba5f4;
    ppuStack_140 = &PTR_DAT_110ae9180;
    plStack_198 = (long *)0x0;
    ppuStack_1a0 = (undefined **)0x0;
    ppuStack_b70 = (undefined **)0x10a4f8c34;
    ppuStack_b68 = &PTR_DAT_110ae9180;
    ppuStack_b30 = (undefined **)&UNK_1098ba5f4;
    ppuStack_b28 = &PTR_DAT_110ae9180;
    puVar16 = (undefined8 *)0xc0;
    ppuStack_b88 = (undefined **)uVar6;
    ppuStack_b80 = ppuVar15;
    __Znwm();
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[5] = uVar6;
    puVar16[6] = ppuVar15;
    ppuStack_b80 = (undefined **)0x0;
    ppuStack_b88 = (undefined **)0x0;
    puVar16[8] = 0x10a4f8c34;
    puVar16[9] = &PTR_DAT_110ae9180;
    puVar16[0x10] = &UNK_1098ba5f4;
    puVar16[0x11] = &PTR_DAT_110ae9180;
    *puVar16 = &PTR_FUN_110beab28;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bcbdf,0x17,puVar16);
    (*(code *)*ppuStack_b28)(&ppuStack_b28);
    (*(code *)*ppuStack_b68)(&ppuStack_b68);
    ppuVar15 = ppuStack_b80;
    if (ppuStack_b80 != (undefined **)0x0) {
      ppuVar4 = ppuStack_b80 + 1;
      do {
        puVar17 = *ppuVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar9) {
          *ppuVar4 = puVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuStack_b80 + 0x10))(ppuStack_b80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
      }
    }
    (*(code *)*ppuStack_140)(&ppuStack_140);
    (*(code *)*ppuStack_180)(&ppuStack_180);
    plVar1 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar5 = plStack_198 + 1;
      do {
        lVar14 = *plVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *plVar5 = lVar14 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_158 = (undefined **)0x0;
    uStack_160 = 0;
    ppuStack_190 = (undefined **)0x10a4f8c44;
    ppuStack_188 = &PTR_DAT_110ae9180;
    ppuStack_138 = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    ppuStack_150 = (undefined **)&UNK_1098ba5f4;
    ppuStack_148 = &PTR_DAT_110ae9180;
    uStack_820 = 0x10a4f8c44;
    appuStack_818[0] = &PTR_DAT_110ae9180;
    puStack_7e0 = &UNK_1098ba5f4;
    appuStack_7d8[0] = &PTR_DAT_110ae9180;
    puVar16 = (undefined8 *)0xb8;
    ppuStack_830 = param_1;
    ppuStack_1a0 = param_1;
    __Znwm();
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[5] = param_1;
    puVar16[7] = 0x10a4f8c44;
    puVar16[8] = &PTR_DAT_110ae9180;
    puVar16[0xf] = &UNK_1098ba5f4;
    puVar16[0x10] = &PTR_DAT_110ae9180;
    *puVar16 = &PTR_FUN_110bead40;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c8fc9,0x23,puVar16);
    (*(code *)*appuStack_7d8[0])(appuStack_7d8);
    (*(code *)*appuStack_818[0])(appuStack_818);
    (*(code *)*ppuStack_148)(&ppuStack_148);
    (*(code *)*ppuStack_188)(&ppuStack_188);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a4f8cb4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    uStack_f8 = 0x10a4f8cb4;
    appuStack_f0[0] = &PTR_DAT_110ae9180;
    puStack_b8 = &UNK_1098ba5f4;
    appuStack_b0[0] = &PTR_DAT_110ae9180;
    puVar16 = (undefined8 *)0xb0;
    __Znwm();
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[6] = 0x10a4f8cb4;
    puVar16[7] = &PTR_DAT_110ae9180;
    puVar16[0xe] = &UNK_1098ba5f4;
    puVar16[0xf] = &PTR_DAT_110ae9180;
    *puVar16 = &PTR_FUN_110bed588;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4beea5,0x26,puVar16);
    (*(code *)*appuStack_b0[0])(appuStack_b0);
    (*(code *)*appuStack_f0[0])(appuStack_f0);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    ppuStack_1a0 = (undefined **)*param_2;
    plStack_198 = (long *)param_2[1];
    if (param_2[1] != 0) {
      plVar1 = (long *)(param_2[1] + 8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = *plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_158 = (undefined **)0x0;
    uStack_160 = 0;
    ppuStack_148 = (undefined **)0x0;
    ppuStack_150 = (undefined **)0x0;
    ppuStack_190 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x10a26dc54;
    ppuStack_178 = &PTR_DAT_110ae9180;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    ppuStack_140 = (undefined **)&UNK_1098ba5f4;
    ppuStack_138 = &PTR_DAT_110ae9180;
    FUN_10a259f8c(param_1 + 4,&ppuStack_1a0,0,0);
    (*(code *)*ppuStack_138)(&ppuStack_138);
    (*(code *)*ppuStack_178)(&ppuStack_178);
    ppuVar15 = ppuStack_190;
    ppuStack_190 = (undefined **)0x0;
    if (ppuVar15 != (undefined **)0x0) {
      FUN_10aac7268();
      __ZdlPv();
    }
    plVar1 = plStack_198;
    if (plStack_198 != (long *)0x0) {
      plVar5 = plStack_198 + 1;
      do {
        lVar14 = *plVar5;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar9) {
          *plVar5 = lVar14 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_198 + 0x10))(plStack_198);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_220 = 0x10a26dc9c;
    ppuStack_218 = &PTR_DAT_110ae9180;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    puStack_1e0 = &UNK_1098ba5f4;
    ppuStack_1d8 = &PTR_DAT_110ae9180;
    puVar16 = (undefined8 *)0xb0;
    __Znwm();
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[6] = 0x10a26dc9c;
    puVar16[7] = &PTR_DAT_110ae9180;
    puVar16[0xe] = &UNK_1098ba5f4;
    puVar16[0xf] = &PTR_DAT_110ae9180;
    *puVar16 = &PTR_FUN_110bed6a8;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4a7ae5,0x1f,puVar16);
    (*(code *)*ppuStack_1d8)(&ppuStack_1d8);
    (*(code *)*ppuStack_218)(&ppuStack_218);
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_2a8 = 0x10a4f8cc4;
    ppuStack_2a0 = &PTR_DAT_110ae9180;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    puStack_268 = &UNK_1098ba5f4;
    ppuStack_260 = &PTR_DAT_110ae9180;
    puVar16 = (undefined8 *)0xb0;
    __Znwm();
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[6] = 0x10a4f8cc4;
    puVar16[7] = &PTR_DAT_110ae9180;
    puVar16[0xe] = &UNK_1098ba5f4;
    puVar16[0xf] = &PTR_DAT_110ae9180;
    *puVar16 = &PTR_FUN_110bed6e8;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bea76,0x26,puVar16);
    (*(code *)*ppuStack_260)(&ppuStack_260);
    (*(code *)*ppuStack_2a0)(&ppuStack_2a0);
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_330 = 0x10a4f8cd4;
    ppuStack_328 = &PTR_DAT_110ae9180;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    puStack_2f0 = &UNK_1098ba5f4;
    ppuStack_2e8 = &PTR_DAT_110ae9180;
    puVar16 = (undefined8 *)0xb0;
    __Znwm();
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[6] = 0x10a4f8cd4;
    puVar16[7] = &PTR_DAT_110ae9180;
    puVar16[0xe] = &UNK_1098ba5f4;
    puVar16[0xf] = &PTR_DAT_110ae9180;
    *puVar16 = &PTR_FUN_110bed868;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bf192,0x25,puVar16);
    (*(code *)*ppuStack_2e8)(&ppuStack_2e8);
    (*(code *)*ppuStack_328)(&ppuStack_328);
    lVar14 = *param_2;
    ppuStack_3d0 = *(undefined ***)(lVar14 + 0x10);
    ppuStack_3c8 = *(undefined ***)(lVar14 + 0x18);
    if (*(long *)(lVar14 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar14 + 0x18) + 8);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = *plVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    ppuStack_390 = (undefined **)0x0;
    uStack_398 = 0;
    ppuStack_380 = (undefined **)0x0;
    ppuStack_388 = (undefined **)0x0;
    uStack_3a0 = 0;
    uStack_3a8 = 0;
    uStack_3b8 = 0x10a4f8ce4;
    ppuStack_3b0 = &PTR_DAT_110ae9180;
    uStack_360 = 0;
    uStack_368 = 0;
    uStack_350 = 0;
    uStack_358 = 0;
    uStack_340 = 0;
    uStack_348 = 0;
    puStack_378 = &UNK_1098ba5f4;
    ppuStack_370 = &PTR_DAT_110ae9180;
    puVar16 = (undefined8 *)0xc8;
    ppuStack_3d8 = param_1;
    __Znwm();
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[5] = param_1;
    puVar16[7] = ppuStack_3c8;
    puVar16[6] = ppuStack_3d0;
    ppuStack_3d0 = (undefined **)0x0;
    ppuStack_3c8 = (undefined **)0x0;
    puVar16[9] = 0x10a4f8ce4;
    puVar16[10] = &PTR_DAT_110ae9180;
    puVar16[0x11] = &UNK_1098ba5f4;
    puVar16[0x12] = &PTR_DAT_110ae9180;
    *puVar16 = &PTR_FUN_110bed9e8;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bdf3c,0x2e,puVar16);
    (*(code *)*ppuStack_370)(&ppuStack_370);
    (*(code *)*ppuStack_3b0)(&ppuStack_3b0);
    ppuVar15 = ppuStack_3c8;
    if (ppuStack_3c8 != (undefined **)0x0) {
      ppuVar4 = ppuStack_3c8 + 1;
      do {
        puVar17 = *ppuVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar9) {
          *ppuVar4 = puVar17 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuStack_3c8 + 0x10))(ppuStack_3c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
      }
    }
    uStack_b48 = 0;
    uStack_b50 = 0;
    uStack_b58 = 0;
    uStack_b60 = 0;
    ppuStack_b68 = (undefined **)0x0;
    ppuStack_b70 = (undefined **)0x0;
    ppuStack_b80 = (undefined **)0x10a26dc8c;
    ppuStack_b78 = &PTR_DAT_110ae9180;
    uStack_b20 = 0;
    ppuStack_b28 = (undefined **)0x0;
    uStack_b10 = 0;
    uStack_b18 = 0;
    uStack_4a0 = 0x10a523d34;
    ppuStack_498 = &PTR_DAT_110bedb58;
    uStack_b40 = 0x10a523d34;
    ppuStack_b38 = &PTR_DAT_110bedb58;
    uStack_b08 = 0;
    uStack_458 = 0x10a26dc8c;
    appuStack_450[0] = &PTR_DAT_110ae9180;
    uStack_418 = 0x10a523d34;
    ppuStack_410 = &PTR_DAT_110bedb58;
    puVar16 = (undefined8 *)0xb0;
    ppuStack_b30 = param_1;
    ppuStack_490 = param_1;
    ppuStack_408 = param_1;
    __Znwm();
    *(undefined1 *)(puVar16 + 2) = 0;
    *puVar16 = &PTR_FUN_110bedb80;
    puVar10 = (undefined8 *)0x58;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0x10a523d34;
    *puVar10 = &PTR_FUN_110bb9cf8;
    puVar10[4] = &PTR_DAT_110bedb58;
    puVar10[5] = param_1;
    puVar16[3] = puVar10 + 3;
    puVar16[4] = puVar10;
    puVar16[6] = 0x10a26dc8c;
    puVar16[7] = &PTR_DAT_110ae9180;
    puVar16[0xe] = 0x10a523d34;
    puVar16[0xf] = &PTR_DAT_110bedb58;
    puVar16[0x10] = param_1;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4a698d,0x1d,puVar16);
    (*(code *)*ppuStack_410)(&ppuStack_410);
    (*(code *)*appuStack_450[0])(appuStack_450);
    (*(code *)*ppuStack_498)(&ppuStack_498);
    (*(code *)*ppuStack_b38)(&ppuStack_b38);
    (*(code *)*ppuStack_b78)(&ppuStack_b78);
    uStack_b48 = 0;
    uStack_b50 = 0;
    uStack_b58 = 0;
    uStack_b60 = 0;
    ppuStack_b68 = (undefined **)0x0;
    ppuStack_b70 = (undefined **)0x0;
    ppuStack_b80 = (undefined **)0x10a4f8cf4;
    ppuStack_b78 = &PTR_DAT_110ae9180;
    uStack_b20 = 0;
    ppuStack_b28 = (undefined **)0x0;
    uStack_b10 = 0;
    uStack_b18 = 0;
    uStack_568 = 0x10a523d34;
    ppuStack_560 = &PTR_DAT_110bedb58;
    uStack_b40 = 0x10a523d34;
    ppuStack_b38 = &PTR_DAT_110bedb58;
    uStack_b08 = 0;
    uStack_520 = 0x10a4f8cf4;
    appuStack_518[0] = &PTR_DAT_110ae9180;
    uStack_4e0 = 0x10a523d34;
    ppuStack_4d8 = &PTR_DAT_110bedb58;
    puVar16 = (undefined8 *)0xb0;
    ppuStack_b30 = param_1;
    ppuStack_558 = param_1;
    ppuStack_4d0 = param_1;
    __Znwm();
    *(undefined1 *)(puVar16 + 2) = 0;
    *puVar16 = &PTR_FUN_110bedbc0;
    puVar10 = (undefined8 *)0x58;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0x10a523d34;
    *puVar10 = &PTR_FUN_110bb9cf8;
    puVar10[4] = &PTR_DAT_110bedb58;
    puVar10[5] = param_1;
    puVar16[3] = puVar10 + 3;
    puVar16[4] = puVar10;
    puVar16[6] = 0x10a4f8cf4;
    puVar16[7] = &PTR_DAT_110ae9180;
    puVar16[0xe] = 0x10a523d34;
    puVar16[0xf] = &PTR_DAT_110bedb58;
    puVar16[0x10] = param_1;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bb2e7,0x26,puVar16);
    (*(code *)*ppuStack_4d8)(&ppuStack_4d8);
    (*(code *)*appuStack_518[0])(appuStack_518);
    (*(code *)*ppuStack_560)(&ppuStack_560);
    (*(code *)*ppuStack_b38)(&ppuStack_b38);
    (*(code *)*ppuStack_b78)(&ppuStack_b78);
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    uStack_5d0 = 0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    pcStack_5f0 = (code *)0x10a26dcac;
    ppuStack_5e8 = &PTR_DAT_110ae9180;
    uStack_590 = 0;
    uStack_598 = 0;
    uStack_580 = 0;
    uStack_588 = 0;
    uStack_640 = 0x10a523d34;
    ppuStack_638 = &PTR_DAT_110bedb58;
    ppuStack_5b0 = (undefined **)0x10a523d34;
    ppuStack_5a8 = &PTR_DAT_110bedb58;
    uStack_578 = 0;
    ppuStack_b78 = (undefined **)0x10a26dcac;
    ppuStack_b70 = &PTR_DAT_110ae9180;
    ppuStack_b38 = (undefined **)0x10a523d34;
    ppuStack_b30 = &PTR_DAT_110bedb58;
    puVar16 = (undefined8 *)0xb8;
    ppuStack_b88 = param_1;
    ppuStack_b28 = param_1;
    ppuStack_630 = param_1;
    ppuStack_600 = param_1;
    ppuStack_5a0 = param_1;
    __Znwm();
    *(undefined1 *)(puVar16 + 2) = 0;
    *puVar16 = &PTR_FUN_110bedd40;
    puVar10 = (undefined8 *)0x58;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110bb9cf8;
    puVar10[3] = 0x10a523d34;
    puVar10[4] = &PTR_DAT_110bedb58;
    puVar10[5] = param_1;
    puVar16[3] = puVar10 + 3;
    puVar16[4] = puVar10;
    puVar16[5] = param_1;
    puVar16[7] = 0x10a26dcac;
    puVar16[8] = &PTR_DAT_110ae9180;
    puVar16[0xf] = 0x10a523d34;
    puVar16[0x10] = &PTR_DAT_110bedb58;
    puVar16[0x11] = param_1;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4a6e3c,0x2c,puVar16);
    (*(code *)*ppuStack_b30)(&ppuStack_b30);
    (*(code *)*ppuStack_b70)(&ppuStack_b70);
    (*(code *)*ppuStack_638)(&ppuStack_638);
    (*(code *)*ppuStack_5a8)(&ppuStack_5a8);
    (*(code *)*ppuStack_5e8)(&ppuStack_5e8);
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_688 = 0;
    uStack_690 = 0;
    uStack_6c0 = 0x10a4f8d04;
    pppuVar12 = appuStack_6d0;
    ppuStack_6b8 = &PTR_DAT_110ae9180;
    uStack_660 = 0;
    uStack_668 = 0;
    uStack_650 = 0;
    uStack_658 = 0;
    uStack_710 = 0x10a523d34;
    ppuStack_708 = &PTR_DAT_110bedb58;
    puStack_680 = (undefined *)0x10a523d34;
    ppuStack_678 = &PTR_DAT_110bedb58;
    uStack_648 = 0;
    pcStack_5f0 = (code *)0x10a4f8d04;
    ppuStack_5e8 = &PTR_DAT_110ae9180;
    ppuStack_5b0 = (undefined **)0x10a523d34;
    ppuStack_5a8 = &PTR_DAT_110bedb58;
    puVar16 = (undefined8 *)0xb8;
    ppuStack_700 = param_1;
    appuStack_6d0[0] = param_1;
    ppuStack_670 = param_1;
    ppuStack_600 = param_1;
    ppuStack_5a0 = param_1;
    __Znwm();
    *(undefined1 *)(puVar16 + 2) = 0;
    *puVar16 = &PTR_FUN_110bedd80;
    puVar10 = (undefined8 *)0x58;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110bb9cf8;
    puVar10[3] = 0x10a523d34;
    puVar10[4] = &PTR_DAT_110bedb58;
    puVar10[5] = param_1;
    puVar16[3] = puVar10 + 3;
    puVar16[4] = puVar10;
    puVar16[5] = param_1;
    puVar16[7] = 0x10a4f8d04;
    puVar16[8] = &PTR_DAT_110ae9180;
    puVar16[0xf] = 0x10a523d34;
    puVar16[0x10] = &PTR_DAT_110bedb58;
    puVar16[0x11] = param_1;
    puVar16[1] = 0;
    *(undefined1 *)(puVar16 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bf94d,0x22,puVar16);
    (*(code *)*ppuStack_5a8)(&ppuStack_5a8);
    (*(code *)*ppuStack_5e8)(&ppuStack_5e8);
    (*(code *)*ppuStack_708)(&ppuStack_708);
    (*(code *)*ppuStack_678)(&ppuStack_678);
    (*(code *)*ppuStack_6b8)(&ppuStack_6b8);
    uStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    uStack_758 = 0;
    uStack_760 = 0;
    uStack_790 = 0x10a4f8d14;
    ppuStack_788 = &PTR_DAT_110ae9180;
    uStack_738 = 0;
    uStack_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    puVar17 = &UNK_1098ba5f4;
    puStack_750 = &UNK_1098ba5f4;
    ppuStack_748 = &PTR_DAT_110ae9180;
    uStack_6c0 = 0x10a4f8d14;
    ppuStack_6b8 = &PTR_DAT_110ae9180;
    puStack_680 = &UNK_1098ba5f4;
    ppuStack_678 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb8;
    ppuStack_7a0 = param_1;
    appuStack_6d0[0] = param_1;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = param_1;
    puVar10[7] = 0x10a4f8d14;
    puVar10[8] = &PTR_DAT_110ae9180;
    puVar10[0xf] = &UNK_1098ba5f4;
    puVar10[0x10] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bedea0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c8e74,0x1f,puVar10);
    (*(code *)*ppuStack_678)(&ppuStack_678);
    (*(code *)*ppuStack_6b8)(&ppuStack_6b8);
    (*(code *)*ppuStack_748)(&ppuStack_748);
    (*(code *)*ppuStack_788)(&ppuStack_788);
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_158 = (undefined **)0x0;
    uStack_160 = 0;
    ppuStack_190 = (undefined **)0x10a4f8c54;
    ppuStack_188 = &PTR_DAT_110ae9180;
    ppuStack_138 = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    ppuStack_150 = (undefined **)&UNK_1098ba5f4;
    ppuStack_148 = &PTR_DAT_110ae9180;
    uStack_820 = 0x10a4f8c54;
    appuStack_818[0] = &PTR_DAT_110ae9180;
    puStack_7e0 = &UNK_1098ba5f4;
    appuStack_7d8[0] = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb8;
    ppuStack_830 = param_1;
    ppuStack_1a0 = param_1;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = param_1;
    puVar10[7] = 0x10a4f8c54;
    puVar10[8] = &PTR_DAT_110ae9180;
    puVar10[0xf] = &UNK_1098ba5f4;
    puVar10[0x10] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110becd30;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bd6df,0x20,puVar10);
    (*(code *)*appuStack_7d8[0])(appuStack_7d8);
    (*(code *)*appuStack_818[0])(appuStack_818);
    (*(code *)*ppuStack_148)(&ppuStack_148);
    (*(code *)*ppuStack_188)(&ppuStack_188);
    uStack_898 = 0;
    uStack_8a0 = 0;
    uStack_888 = 0;
    uStack_890 = 0;
    puStack_878 = (undefined *)0x0;
    uStack_880 = 0;
    ppuStack_8b0 = (undefined **)0x10a4f8c64;
    ppuStack_8a8 = &PTR_DAT_110ae9180;
    uStack_858 = 0;
    uStack_860 = 0;
    uStack_848 = 0;
    uStack_850 = 0;
    uStack_838 = 0;
    uStack_840 = 0;
    ppuStack_870 = (undefined **)&UNK_1098ba5f4;
    ppuStack_868 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb8;
    ppuStack_8c0 = param_1;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = param_1;
    puVar10[7] = 0x10a4f8c64;
    puVar10[8] = &PTR_DAT_110ae9180;
    puVar10[0xf] = &UNK_1098ba5f4;
    puVar10[0x10] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_DAT_110bece50;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c8f2d,0x26,puVar10);
    (*(code *)*ppuStack_868)(&ppuStack_868);
    (*(code *)*ppuStack_8a8)(&ppuStack_8a8);
    uStack_928 = 0;
    uStack_930 = 0;
    uStack_918 = 0;
    uStack_920 = 0;
    puStack_908 = (undefined *)0x0;
    uStack_910 = 0;
    ppuStack_940 = (undefined **)0x10a4f8c74;
    ppuStack_938 = &PTR_DAT_110ae9180;
    uStack_8e8 = 0;
    uStack_8f0 = 0;
    uStack_8d8 = 0;
    uStack_8e0 = 0;
    uStack_8c8 = 0;
    uStack_8d0 = 0;
    ppuStack_900 = (undefined **)&UNK_1098ba5f4;
    ppuStack_8f8 = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb8;
    ppuStack_950 = param_1;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = param_1;
    puVar10[7] = 0x10a4f8c74;
    puVar10[8] = &PTR_DAT_110ae9180;
    puVar10[0xf] = &UNK_1098ba5f4;
    puVar10[0x10] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_DAT_110becf70;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4bfc14,0x2e,puVar10);
    (*(code *)*ppuStack_8f8)(&ppuStack_8f8);
    (*(code *)*ppuStack_938)(&ppuStack_938);
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_158 = (undefined **)0x0;
    uStack_160 = 0;
    ppuStack_190 = (undefined **)0x10a4f8c84;
    ppuStack_188 = &PTR_DAT_110ae9180;
    ppuStack_138 = (undefined **)0x0;
    ppuStack_140 = (undefined **)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    ppuStack_150 = (undefined **)&UNK_1098ba5f4;
    ppuStack_148 = &PTR_DAT_110ae9180;
    ppuStack_9d0 = (undefined **)0x10a4f8c84;
    appuStack_9c8[0] = &PTR_DAT_110ae9180;
    puStack_990 = &UNK_1098ba5f4;
    appuStack_988[0] = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb8;
    ppuStack_9e0 = param_1;
    ppuStack_1a0 = param_1;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = param_1;
    puVar10[7] = 0x10a4f8c84;
    puVar10[8] = &PTR_DAT_110ae9180;
    puVar10[0xf] = &UNK_1098ba5f4;
    puVar10[0x10] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bed0f0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c0c6c,0x1c,puVar10);
    (*(code *)*appuStack_988[0])(appuStack_988);
    (*(code *)*appuStack_9c8[0])(appuStack_9c8);
    (*(code *)*ppuStack_148)(&ppuStack_148);
    (*(code *)*ppuStack_188)(&ppuStack_188);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    plStack_198 = (long *)0x10a4f8c94;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    uStack_a60 = 0x10a4f8c94;
    appuStack_a58[0] = &PTR_DAT_110ae9180;
    puStack_a20 = &UNK_1098ba5f4;
    appuStack_a18[0] = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8c94;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bed318;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c008b,0x1d,puVar10);
    (*(code *)*appuStack_a18[0])(appuStack_a18);
    (*(code *)*appuStack_a58[0])(appuStack_a58);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    (*(code *)*ppuStack_190)(&ppuStack_190);
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    ppuStack_178 = (undefined **)0x0;
    ppuStack_180 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0x0;
    pppuVar18 = &ppuStack_1a0;
    plStack_198 = (long *)0x10a4f8ca4;
    ppuStack_190 = &PTR_DAT_110ae9180;
    ppuStack_140 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    uStack_130 = 0;
    ppuStack_138 = (undefined **)0x0;
    uStack_120 = 0;
    uStack_128 = 0;
    ppuStack_158 = (undefined **)&UNK_1098ba5f4;
    ppuStack_150 = &PTR_DAT_110ae9180;
    uStack_ae8 = 0x10a4f8ca4;
    appuStack_ae0[0] = &PTR_DAT_110ae9180;
    puStack_aa8 = &UNK_1098ba5f4;
    appuStack_aa0[0] = &PTR_DAT_110ae9180;
    puVar10 = (undefined8 *)0xb0;
    __Znwm();
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[6] = 0x10a4f8ca4;
    puVar10[7] = &PTR_DAT_110ae9180;
    puVar10[0xe] = &UNK_1098ba5f4;
    puVar10[0xf] = &PTR_DAT_110ae9180;
    *puVar10 = &PTR_FUN_110bed450;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 0;
    func_0x0001098ba2b4(param_1 + 4,&UNK_10e4c0339,0x1c,puVar10);
    (*(code *)*appuStack_aa0[0])(appuStack_aa0);
    (*(code *)*appuStack_ae0[0])(appuStack_ae0);
    (*(code *)*ppuStack_150)(&ppuStack_150);
    ppuVar15 = ppuStack_190;
  }
  pppuVar13 = pppuVar18 + 2;
  (*(code *)*ppuVar15)(pppuVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    __ZdlPv(puVar16);
    (*(code *)*ppuStack_5a8)(pppuVar18 + 0xb);
    (*(code *)*ppuStack_5e8)(pppuVar18 + 3);
    (*(code *)*ppuStack_708)(puVar17 + 8);
    (*(code *)*ppuStack_678)(pppuVar12 + 0xb);
    (*(code *)*ppuStack_6b8)(pppuVar12 + 3);
    FUN_10a509d1c(param_1 + 0x93);
    func_0x00010a042d30(param_1 + 0x8f);
    func_0x00010a09db0c(param_1 + 0x7f);
    do {
      do {
        func_0x000109d18f34(ppuVar3);
        FUN_109d201a8(ppuVar2);
        func_0x00010a06e274(param_1 + 0x10);
        func_0x0001098b9fe8(param_1 + 4);
        func_0x00010a509cc4(param_1 + 2);
        __Unwind_Resume(pppuVar13);
        (*(code *)*appuStack_c58[0])(puVar16 + 0xb);
        (*(code *)*appuStack_c98[0])(puVar16 + 3);
        (*(code *)*ppuStack_380)(&ppuStack_380);
        (*(code *)*ppuStack_3c0)(&ppuStack_3c0);
        func_0x0001092ba41c(&ppuStack_bd8);
        func_0x0001092ba41c(&ppuStack_c20);
        (*(code *)*ppuStack_b80)(&ppuStack_b80);
      } while (-1 < lStack_d40);
      __ZdlPv(ppuStack_d50);
    } while( true );
  }
  return param_1;
}



/* Entry: 10a4e42e0; end: 10a4e4aff;  */

void FUN_10a4e42e0(long *param_1,char *param_2,int *param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  bool bVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long ***ppplVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long **pplVar14;
  undefined8 uVar15;
  uint *puVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined *puStack_140;
  undefined8 uStack_138;
  long ***ppplStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long **pplStack_108;
  long **pplStack_100;
  undefined1 uStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long **applStack_c8 [3];
  long ***ppplStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_1;
  cVar3 = *param_2;
  puVar16 = *(uint **)(lVar12 + 0x3f0);
  *puVar16 = (uint)(cVar3 != '\x01');
  cVar4 = param_2[1];
  puVar16[1] = (uint)(cVar4 != '\x01');
  if ((*(int *)(lVar12 + 0x408) == *param_3) && (*(byte *)(lVar12 + 0x488) == param_4)) {
    if (((*(char *)(lVar12 + 0x489) != cVar3) || (*(char *)(lVar12 + 0x48a) != cVar4)) ||
       (*(char *)(lVar12 + 0x48b) != param_2[2])) {
      uVar5 = *(undefined2 *)param_2;
      *(char *)(lVar12 + 0x48b) = param_2[2];
      *(undefined2 *)(lVar12 + 0x489) = uVar5;
      pplStack_108 = (long **)(*(long *)(*param_1 + 0x3f0) + 0x10);
      uStack_f8 = 0;
      pplStack_100 = pplStack_108;
      func_0x0001098bef88(applStack_c8,*(long *)(*param_1 + 0x3f0) + 0xa8,&pplStack_108);
      uVar11 = (uint)applStack_c8[0][2];
      while ((uVar11 >> 1 & 1) == 0) {
        FUN_10a5267a8(*param_1);
        uVar11 = (uint)applStack_c8[0][2];
      }
      if ((((uint)applStack_c8[0][2] >> 1 & 1) == 0) || (((uint)applStack_c8[0][2] >> 5 & 1) != 0))
      goto LAB_10a4e498c;
      if ((long ***)applStack_c8[0] != (long ***)0x0) {
        ppplVar10 = (long ***)(applStack_c8[0] + 1);
        do {
          pplVar14 = *ppplVar10;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppplVar10,0x10);
          if (bVar6) {
            *ppplVar10 = (long **)((long)pplVar14 + -4);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (((ulong)pplVar14 & 0x1fffffffc) == 4) {
          do {
            pplVar14 = *ppplVar10;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppplVar10,0x10);
            if (bVar6) {
              *ppplVar10 = (long **)((long)pplVar14 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long **)((long)pplVar14 + -1) == (long **)0x0) {
            (*(code *)(*applStack_c8[0])[1])();
          }
        }
      }
    }
  }
  else {
    uVar21 = *(undefined8 *)(param_3 + 2);
    uVar15 = *(undefined8 *)param_3;
    uVar22 = *(undefined8 *)(param_3 + 4);
    uVar24 = *(undefined8 *)(param_3 + 10);
    uVar23 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(lVar12 + 0x420) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(lVar12 + 0x418) = uVar22;
    *(undefined8 *)(lVar12 + 0x430) = uVar24;
    *(undefined8 *)(lVar12 + 0x428) = uVar23;
    *(undefined8 *)(lVar12 + 0x410) = uVar21;
    *(undefined8 *)(lVar12 + 0x408) = uVar15;
    uVar21 = *(undefined8 *)(param_3 + 0xe);
    uVar15 = *(undefined8 *)(param_3 + 0xc);
    uVar23 = *(undefined8 *)(param_3 + 0x12);
    uVar22 = *(undefined8 *)(param_3 + 0x10);
    uVar25 = *(undefined8 *)(param_3 + 0x16);
    uVar24 = *(undefined8 *)(param_3 + 0x14);
    uVar26 = *(undefined8 *)(param_3 + 0x17);
    *(undefined8 *)(lVar12 + 0x46c) = *(undefined8 *)(param_3 + 0x19);
    *(undefined8 *)(lVar12 + 0x464) = uVar26;
    *(undefined8 *)(lVar12 + 0x450) = uVar23;
    *(undefined8 *)(lVar12 + 0x448) = uVar22;
    *(undefined8 *)(lVar12 + 0x460) = uVar25;
    *(undefined8 *)(lVar12 + 0x458) = uVar24;
    *(undefined8 *)(lVar12 + 0x440) = uVar21;
    *(undefined8 *)(lVar12 + 0x438) = uVar15;
    FUN_10a22b858(lVar12 + 0x478,param_3 + 0x1c);
    lVar12 = *param_1;
    *(char *)(lVar12 + 0x488) = (char)param_4;
    uVar5 = *(undefined2 *)param_2;
    *(char *)(lVar12 + 0x48b) = param_2[2];
    *(undefined2 *)(lVar12 + 0x489) = uVar5;
    FUN_10a4e4b00(param_1);
  }
  puVar13 = (undefined8 *)*param_1;
  if (*(char *)(puVar13 + 1) == '\x01') {
    if (param_2[0x170] == '\x01') {
      uVar15 = *puVar13;
      param_2[0x158] = *(char *)(puVar13 + 1);
      *(undefined8 *)(param_2 + 0x150) = uVar15;
      param_2[0x15c] = '\x01';
      puVar13 = (undefined8 *)*param_1;
      if (*(char *)(puVar13 + 1) != '\x01') goto LAB_10a4e4500;
    }
    *(undefined1 *)(puVar13 + 1) = 0;
  }
LAB_10a4e4500:
  if (param_2[0x1f8] == '\x01') {
    if ((param_2[0x238] & 1U) == 0) {
      param_2[0x210] = '\0';
      param_2[0x211] = '\0';
      param_2[0x212] = '\0';
      param_2[0x213] = '\0';
      param_2[0x214] = '\0';
      param_2[0x215] = '\0';
      param_2[0x216] = '\0';
      param_2[0x217] = '\0';
      param_2[0x208] = '\0';
      param_2[0x209] = '\0';
      param_2[0x20a] = '\0';
      param_2[0x20b] = '\0';
      param_2[0x20c] = '\0';
      param_2[0x20d] = '\0';
      param_2[0x20e] = '\0';
      param_2[0x20f] = '\0';
      param_2[0x220] = '\0';
      param_2[0x221] = '\0';
      param_2[0x222] = '\0';
      param_2[0x223] = '\0';
      param_2[0x224] = '\0';
      param_2[0x225] = '\0';
      param_2[0x226] = '\0';
      param_2[0x227] = '\0';
      param_2[0x218] = '\0';
      param_2[0x219] = '\0';
      param_2[0x21a] = '\0';
      param_2[0x21b] = '\0';
      param_2[0x21c] = '\0';
      param_2[0x21d] = '\0';
      param_2[0x21e] = '\0';
      param_2[0x21f] = '\0';
      param_2[0x230] = '\0';
      param_2[0x231] = '\0';
      param_2[0x232] = '\0';
      param_2[0x233] = '\0';
      param_2[0x234] = '\0';
      param_2[0x235] = '\0';
      param_2[0x236] = '\0';
      param_2[0x237] = '\0';
      param_2[0x228] = '\0';
      param_2[0x229] = '\0';
      param_2[0x22a] = '\0';
      param_2[0x22b] = '\0';
      param_2[0x22c] = '\0';
      param_2[0x22d] = '\0';
      param_2[0x22e] = '\0';
      param_2[0x22f] = '\0';
      *(undefined ***)(param_2 + 0x200) = &PTR_FUN_110bef348;
      param_2[0x218] = '\0';
      param_2[0x219] = '\0';
      param_2[0x21a] = '\0';
      param_2[0x21b] = '\0';
      param_2[0x21c] = '\0';
      param_2[0x21d] = '\0';
      param_2[0x21e] = '\0';
      param_2[0x21f] = '\0';
      param_2[0x210] = '\0';
      param_2[0x211] = '\0';
      param_2[0x212] = '\0';
      param_2[0x213] = '\0';
      param_2[0x214] = '\0';
      param_2[0x215] = '\0';
      param_2[0x216] = '\0';
      param_2[0x217] = '\0';
      param_2[0x228] = '\0';
      param_2[0x229] = '\0';
      param_2[0x22a] = '\0';
      param_2[0x22b] = '\0';
      param_2[0x22c] = '\0';
      param_2[0x22d] = '\0';
      param_2[0x22e] = '\0';
      param_2[0x22f] = '\0';
      param_2[0x220] = '\0';
      param_2[0x221] = '\0';
      param_2[0x222] = '\0';
      param_2[0x223] = '\0';
      param_2[0x224] = '\0';
      param_2[0x225] = '\0';
      param_2[0x226] = '\0';
      param_2[0x227] = '\0';
      param_2[0x230] = '\0';
      param_2[0x231] = '\0';
      param_2[0x232] = -0x80;
      param_2[0x233] = '?';
      param_2[0x238] = '\x01';
    }
    func_0x00010a4cfe64(param_2 + 0x200,*(undefined8 *)(param_2 + 0x1e0),1);
    if (param_2[0x1f8] == '\x01') {
      func_0x00010a22fc28(param_2 + 0x1d0);
      param_2[0x1f8] = '\0';
    }
  }
  lVar12 = *param_1;
  FUN_10a4e4eb8(&pplStack_108,lVar12 + 0x498,param_2);
  FUN_10a4e4cac(lVar12 + 0x498,&pplStack_108);
  if (ppplStack_f0 != (long ***)0x0) {
    ppplStack_e8 = ppplStack_f0;
    __ZdlPv();
  }
  applStack_c8[0] = (long **)&pplStack_108;
  FUN_10a26dd18(applStack_c8);
  lVar17 = *param_1;
  lVar12 = *(long *)(lVar17 + 0x498) + 0x158;
  FUN_10a52adc4(lVar12,&UNK_10e4c9071,0x3e);
  plVar18 = *(long **)(param_2 + 8);
  if (((int)lVar12 != 0) && (plVar19 = *(long **)(param_2 + 0x10), plVar18 != plVar19)) {
    do {
      lVar7 = *plVar18;
      uVar28 = *(undefined4 *)((long)plVar18 + 4);
      pplVar14 = (long **)*plVar18;
      uVar27 = (undefined4)plVar18[1];
      lVar20 = *(long *)(lVar17 + 0x498);
      puStack_140 = &UNK_10e4c9071;
      uStack_138 = 0x3e;
      ppplStack_b0 = (long ***)0x0;
      __ZNSt3__15mutex4lockEv(lVar20 + 0x158);
      lVar12 = lVar20 + 0x198;
      func_0x0001098bee44(lVar12,&puStack_140);
      if (lVar12 == 0) {
        uVar15 = 0x10;
        ___cxa_allocate_exception(0x10);
        __ZNSt13runtime_errorC1EPKc();
LAB_10a4e496c:
        ___cxa_throw(uVar15,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
        goto LAB_10a4e49f4;
      }
      plVar9 = *(long **)(lVar12 + 0x20);
      (**(code **)(*plVar9 + 0x10))();
      FUN_10a042ab0();
      if (((ulong)plVar9 & 1) == 0) {
        uVar15 = 0x10;
        ___cxa_allocate_exception(0x10);
        __ZNSt13runtime_errorC1EPKc();
        goto LAB_10a4e496c;
      }
      lVar2 = *(long *)(lVar12 + 0x20);
      plVar9 = *(long **)(lVar12 + 0x28);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppplVar10 = *(long ****)(lVar20 + 0x1d8);
      if (ppplVar10 == (long ***)0x0) {
        ppplStack_f0 = (long ***)0x0;
LAB_10a4e46c8:
        ppplVar10 = ppplStack_f0;
        if (ppplStack_b0 != applStack_c8) {
          ppplStack_f0 = ppplStack_b0;
          ppplStack_b0 = ppplVar10;
          goto LAB_10a4e47cc;
        }
        (*(code *)(*ppplStack_b0)[3])(ppplStack_b0,&pplStack_108);
        (*(code *)(*ppplStack_b0)[4])();
        ppplStack_b0 = ppplStack_f0;
        ppplStack_f0 = &pplStack_108;
LAB_10a4e47e0:
        lVar12 = 0x20;
LAB_10a4e47e4:
        (**(code **)((long)*ppplStack_f0 + lVar12))();
      }
      else {
        if (ppplVar10 == (long ***)(lVar20 + 0x1c0)) {
          ppplStack_f0 = &pplStack_108;
          (*(code *)(*ppplVar10)[3])(ppplVar10,&pplStack_108);
        }
        else {
          (*(code *)(*ppplVar10)[2])();
          ppplStack_f0 = ppplVar10;
        }
        if (ppplStack_f0 != &pplStack_108) goto LAB_10a4e46c8;
        if (ppplStack_b0 == applStack_c8) {
          (*(code *)(*ppplStack_f0)[3])(ppplStack_f0,alStack_a8);
          (*(code *)(*ppplStack_f0)[4])();
          ppplStack_f0 = (long ***)0x0;
          (*(code *)(*ppplStack_b0)[3])(ppplStack_b0,&pplStack_108);
          (*(code *)(*ppplStack_b0)[4])();
          ppplStack_b0 = (long ***)0x0;
          ppplStack_f0 = &pplStack_108;
          (**(code **)(alStack_a8[0] + 0x18))(alStack_a8,applStack_c8);
          (**(code **)(alStack_a8[0] + 0x20))(alStack_a8);
          ppplStack_b0 = applStack_c8;
        }
        else {
          (*(code *)(*ppplStack_f0)[3])(ppplStack_f0,applStack_c8);
          (*(code *)(*ppplStack_f0)[4])();
          ppplStack_f0 = ppplStack_b0;
          ppplStack_b0 = applStack_c8;
        }
LAB_10a4e47cc:
        if (ppplStack_f0 == &pplStack_108) goto LAB_10a4e47e0;
        if (ppplStack_f0 != (long ***)0x0) {
          lVar12 = 0x28;
          goto LAB_10a4e47e4;
        }
      }
      __ZNSt3__15mutex6unlockEv(lVar20 + 0x158);
      if (ppplStack_b0 == (long ***)0x0) {
        FUN_10a52af20((int)lVar7,uVar28,uVar27,lVar2 + 8);
      }
      else {
        pplStack_100 = (long **)CONCAT44(pplStack_100._4_4_,uVar27);
        pplStack_108 = pplVar14;
        FUN_10a52af20((int)lVar7,uVar28,uVar27,lVar2 + 8);
        uStack_118 = uStack_138;
        puStack_120 = puStack_140;
        ppuStack_128 = &PTR_DAT_110bef780;
        ppplStack_130 = &pplStack_108;
        if (ppplStack_b0 == (long ***)0x0) {
          FUN_10a06186c();
          goto LAB_10a4e49f4;
        }
        (*(code *)(*ppplStack_b0)[6])(ppplStack_b0,&puStack_120,&ppuStack_128,&ppplStack_130);
      }
      if (ppplStack_b0 == applStack_c8) {
        lVar12 = 0x20;
LAB_10a4e487c:
        (**(code **)((long)*ppplStack_b0 + lVar12))();
      }
      else if (ppplStack_b0 != (long ***)0x0) {
        lVar12 = 0x28;
        goto LAB_10a4e487c;
      }
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar18 = (long *)((long)plVar18 + 0xc);
    } while (plVar18 != plVar19);
    plVar18 = *(long **)(param_2 + 8);
  }
  *(long **)(param_2 + 0x10) = plVar18;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
LAB_10a4e498c:
  if (((uint)applStack_c8[0][2] >> 5 & 1) == 0) {
    puVar13 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar13 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar13,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pplStack_108,applStack_c8[0] + 0x12);
    func_0x0001092af97c(&pplStack_108);
  }
LAB_10a4e49f4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a4e49f8);
  (*pcVar8)();
}



/* Entry: 10a4e4b00; end: 10a4e4cab;  */

void FUN_10a4e4b00(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plStack_30;
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(*param_1 + 0x78) = 0;
  func_0x0001098b7d14(&plStack_30,*param_1 + 0x3f0);
  uVar6 = (uint)plStack_30[2];
  while ((uVar6 >> 1 & 1) == 0) {
    FUN_10a5267a8(*param_1);
    uVar6 = (uint)plStack_30[2];
  }
  if ((((uint)plStack_30[2] >> 1 & 1) != 0) && (((uint)plStack_30[2] >> 5 & 1) == 0)) {
    if (plStack_30 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_30 + 1);
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar7 & 0x1fffffffc) == 4) {
        do {
          uVar7 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar7 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar7 - 1 == 0) {
          (**(code **)(*plStack_30 + 8))();
        }
      }
    }
    return;
  }
  if (((uint)plStack_30[2] >> 5 & 1) == 0) {
    puVar5 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
    *puVar5 = &PTR_DAT_110ae85c0;
    ___cxa_throw(puVar5,&PTR_DAT_110ae8598,&DAT_1092af9d8);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(auStack_28,plStack_30 + 0x12);
    func_0x0001092af97c(auStack_28);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4e4c38);
  (*pcVar4)();
}



/* Entry: 10a4e4cac; end: 10a4e4eb7;  */

void FUN_10a4e4cac(undefined8 *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long *plStack_28;
  
  if (((*param_2 == param_2[1]) && (param_2[3] == param_2[4])) &&
     ((*(byte *)(param_2 + 6) & 1) == 0)) {
    return;
  }
  func_0x0001098b0f24(&plStack_28,param_1);
  if (((uint)plStack_28[2] >> 1 & 1) == 0) {
    func_0x00010a2937dc(auStack_58,*param_1);
    FUN_10a012db0(auStack_40,auStack_58,&UNK_10f649633);
    FUN_10a0029c0(auStack_40);
  }
  else {
    if ((((uint)plStack_28[2] >> 1 & 1) != 0) && (((uint)plStack_28[2] >> 5 & 1) == 0)) {
      if (plStack_28 == (long *)0x0) {
        return;
      }
      puVar1 = (ulong *)(plStack_28 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) != 4) {
        return;
      }
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 != 0) {
        return;
      }
      (**(code **)(*plStack_28 + 8))();
      return;
    }
    if (((uint)plStack_28[2] >> 5 & 1) == 0) {
      puVar5 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      *puVar5 = &PTR_DAT_110ae85c0;
      ___cxa_throw(puVar5,&PTR_DAT_110ae8598,&DAT_1092af9d8);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_40,plStack_28 + 0x12);
      func_0x0001092af97c(auStack_40);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a4e4e10);
  (*pcVar4)();
}



/* Entry: 10a4e4eb8; end: 10a4e704b;  */

void FUN_10a4e4eb8(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  double *pdVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  code *pcVar11;
  bool bVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined **ppuVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  ulong *puVar28;
  ulong *puVar29;
  long *plVar30;
  long *plVar31;
  double dVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  long *plStack_88;
  long *plStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  long *plStack_68;
  
  lVar17 = *(long *)(*param_2 + 0x210);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = lVar17 + 0x68;
  plVar1 = param_2 + 0x6d;
  cVar6 = *(char *)(param_3 + 0x198);
  bVar7 = *(byte *)(param_3 + 0x199);
  bVar8 = *(byte *)((long)param_2 + 0x305);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) goto LAB_10a4e4f34;
  }
  else if (cVar6 != *(char *)((long)param_2 + 0x304)) {
LAB_10a4e4f34:
    if (bVar7 == 0) {
      if ((int)param_2[0x60] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x60]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 0x60) = 0;
        bVar8 = *(byte *)((long)param_2 + 0x305) & 1;
      }
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_2 + 0x305) = 0;
      }
    }
    else {
      if ((bVar8 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x305) = 1;
      }
      *(char *)((long)param_2 + 0x304) = cVar6;
      FUN_10ae03140(0,&UNK_10e4c8f08,0x24);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0x60];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x305) & 1) == 0) goto LAB_10a4e7020;
        uVar9 = *(undefined1 *)((long)param_2 + 0x304);
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_FUN_110bee0c8;
        plVar13[1] = (long)plVar1;
        *(undefined1 *)(plVar13 + 2) = uVar9;
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0x60) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x305) & 1) == 0) goto LAB_10a4e7020;
        uVar9 = *(undefined1 *)((long)param_2 + 0x304);
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_FUN_110bee0c8;
        plVar13[1] = (long)plVar1;
        *(undefined1 *)(plVar13 + 2) = uVar9;
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  plVar13 = (long *)(param_3 + 0x138);
  plVar31 = param_2 + 0x61;
  bVar7 = *(byte *)(param_3 + 0x170);
  bVar8 = *(byte *)(param_2 + 0x69);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) {
      if (bVar7 != 0) goto LAB_10a4e5080;
LAB_10a4e50d4:
      FUN_10a526974(plVar31,param_1);
    }
  }
  else {
    plVar25 = plVar13;
    FUN_10a4fb6f8(plVar13,param_2 + 0x62);
    if (((ulong)plVar25 & 1) == 0) {
      if ((bVar7 & 1) == 0) goto LAB_10a4e50d4;
LAB_10a4e5080:
      if (bVar8 == 0) {
        param_2[0x62] = 0;
        param_2[99] = 0;
        param_2[100] = 0;
        FUN_10a051a50();
        lVar21 = *(long *)(param_3 + 0x158);
        lVar17 = *(long *)(param_3 + 0x150);
        uVar33 = *(undefined8 *)(param_3 + 0x15d);
        *(undefined8 *)((long)param_2 + 0x33d) = *(undefined8 *)(param_3 + 0x165);
        *(undefined8 *)((long)param_2 + 0x335) = uVar33;
        param_2[0x66] = lVar21;
        param_2[0x65] = lVar17;
        *(undefined1 *)(param_2 + 0x69) = 1;
      }
      else {
        if (param_2 + 0x62 != plVar13) {
          FUN_10a12d500();
        }
        lVar21 = *(long *)(param_3 + 0x158);
        lVar17 = *(long *)(param_3 + 0x150);
        uVar33 = *(undefined8 *)(param_3 + 0x15d);
        *(undefined8 *)((long)param_2 + 0x33d) = *(undefined8 *)(param_3 + 0x165);
        *(undefined8 *)((long)param_2 + 0x335) = uVar33;
        param_2[0x66] = lVar21;
        param_2[0x65] = lVar17;
      }
      FUN_10ae03140(0,&UNK_10e4c90da,0x22);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = *plVar31;
      if ((int)lVar17 == 0) {
        FUN_10a5269d4(&plStack_80,plVar31,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)plVar31 = (int)puVar14;
      }
      else {
        FUN_10a5269d4(&plStack_80,plVar31,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  puVar28 = (ulong *)(param_3 + 0x20);
  plVar13 = param_2 + 0x3a;
  bVar7 = *(byte *)(param_3 + 0x48);
  bVar8 = *(byte *)(param_2 + 0x40);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) {
      if (bVar7 == 0) goto LAB_10a4e537c;
      if (bVar8 != 0) goto LAB_10a4e5214;
LAB_10a4e52ec:
      FUN_10a22bd48(param_2 + 0x3b,puVar28);
      *(undefined1 *)(param_2 + 0x40) = 1;
LAB_10a4e5300:
      FUN_10ae03140(0,&UNK_10e4bf192,0x25);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = *plVar13;
      if ((int)lVar17 == 0) {
        FUN_10a526d50(&plStack_68,plVar13,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_68);
        *(int *)plVar13 = (int)puVar14;
        plVar13 = plStack_68;
      }
      else {
        FUN_10a526d50(&plStack_80,plVar13,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
        plVar13 = plStack_80;
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
    }
  }
  else {
    puVar18 = puVar28;
    FUN_10a5185d4(puVar28,param_2 + 0x3b);
    if (((ulong)puVar18 & 1) == 0) {
      if (*(char *)(param_3 + 0x48) == '\x01') {
        if ((*(byte *)(param_2 + 0x40) & 1) == 0) goto LAB_10a4e52ec;
LAB_10a4e5214:
        puVar18 = (ulong *)(param_2 + 0x3b);
        if (puVar18 != puVar28) {
          *(undefined4 *)(param_2 + 0x3f) = *(undefined4 *)(param_3 + 0x40);
          plVar31 = *(long **)(param_3 + 0x30);
          lVar17 = param_2[0x3c];
          if (lVar17 != 0) {
            lVar21 = 0;
            do {
              *(undefined8 *)(*puVar18 + lVar21 * 8) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar17 != lVar21);
            plVar25 = (long *)param_2[0x3d];
            param_2[0x3d] = 0;
            param_2[0x3e] = 0;
            if (plVar25 != (long *)0x0 && plVar31 != (long *)0x0) {
LAB_10a4e6798:
              iVar4 = (int)plVar31[2];
              plVar27 = plVar25 + 2;
              *(int *)plVar27 = iVar4;
              if (plVar25 != plVar31) {
                *(int *)(plVar25 + 7) = (int)plVar31[7];
                plVar24 = (long *)plVar31[5];
                lVar17 = plVar25[4];
                if (lVar17 != 0) {
                  lVar21 = 0;
                  do {
                    *(undefined8 *)(plVar25[3] + lVar21 * 8) = 0;
                    lVar21 = lVar21 + 1;
                  } while (lVar17 != lVar21);
                  plVar30 = (long *)plVar25[5];
                  plVar25[5] = 0;
                  plVar25[6] = 0;
                  while (plVar30 != (long *)0x0) {
                    if (plVar24 == (long *)0x0) goto LAB_10a4e68b0;
                    uVar33 = plVar24[2];
                    uVar35 = plVar24[5];
                    uVar34 = plVar24[4];
                    plVar30[3] = plVar24[3];
                    plVar30[2] = uVar33;
                    plVar30[5] = uVar35;
                    plVar30[4] = uVar34;
                    uVar34 = plVar24[7];
                    uVar33 = plVar24[6];
                    uVar36 = plVar24[9];
                    uVar35 = plVar24[8];
                    uVar37 = plVar24[10];
                    uVar39 = plVar24[0xd];
                    uVar38 = plVar24[0xc];
                    plVar30[0xb] = plVar24[0xb];
                    plVar30[10] = uVar37;
                    plVar30[0xd] = uVar39;
                    plVar30[0xc] = uVar38;
                    plVar30[7] = uVar34;
                    plVar30[6] = uVar33;
                    plVar30[9] = uVar36;
                    plVar30[8] = uVar35;
                    lVar17 = *plVar30;
                    FUN_10a526dd8(plVar25 + 3,plVar30);
                    plVar24 = (long *)*plVar24;
                    plVar30 = (long *)lVar17;
                  }
                }
                for (; plVar24 != (undefined8 *)0x0; plVar24 = (long *)*plVar24) {
                  puVar14 = (undefined8 *)0x70;
                  __Znwm();
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  uVar33 = plVar24[2];
                  uVar35 = plVar24[5];
                  uVar34 = plVar24[4];
                  puVar14[3] = plVar24[3];
                  puVar14[2] = uVar33;
                  puVar14[5] = uVar35;
                  puVar14[4] = uVar34;
                  uVar34 = plVar24[7];
                  uVar33 = plVar24[6];
                  uVar36 = plVar24[9];
                  uVar35 = plVar24[8];
                  uVar37 = plVar24[10];
                  uVar39 = plVar24[0xd];
                  uVar38 = plVar24[0xc];
                  puVar14[0xb] = plVar24[0xb];
                  puVar14[10] = uVar37;
                  puVar14[0xd] = uVar39;
                  puVar14[0xc] = uVar38;
                  puVar14[7] = uVar34;
                  puVar14[6] = uVar33;
                  puVar14[9] = uVar36;
                  puVar14[8] = uVar35;
                  plVar30 = plVar25 + 3;
                  FUN_10aad09b8(plVar30,puVar14 + 2);
                  puVar14[1] = plVar30;
                  FUN_10a526dd8(plVar25 + 3,puVar14);
                }
                goto LAB_10a4e686c;
              }
              goto LAB_10a4e6874;
            }
LAB_10a4e5260:
            func_0x00010a22ca34(puVar18,plVar25);
          }
          for (; plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
            plVar25 = (long *)0x40;
            __Znwm();
            puStack_70 = (ulong *)0x0;
            *plVar25 = 0;
            plVar25[1] = 0;
            *(undefined4 *)(plVar25 + 2) = *(undefined4 *)(plVar31 + 2);
            plStack_80 = plVar25;
            puStack_78 = puVar18;
            FUN_10a22c248(plVar25 + 3,plVar31 + 3);
            puStack_70 = (ulong *)CONCAT71(puStack_70._1_7_,1);
            plVar25[1] = (long)(int)plVar25[2];
            puVar28 = puVar18;
            FUN_10a527208(puVar18,(long)(int)plVar25[2],plVar25 + 2);
            FUN_10a52751c(puVar18,plVar25,puVar28);
          }
        }
        goto LAB_10a4e5300;
      }
LAB_10a4e537c:
      FUN_10a526cf8(plVar13,param_1);
    }
  }
  bVar7 = *(byte *)((long)param_2 + 0x1cd);
  if (*(byte *)(param_3 + 0x51) != bVar7) {
    if (*(byte *)(param_3 + 0x51) == 0) {
      if ((int)param_2[0x39] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x39]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 0x39) = 0;
        bVar7 = *(byte *)((long)param_2 + 0x1cd) & 1;
      }
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_2 + 0x1cd) = 0;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x1cd) = 1;
      }
      FUN_10ae03140(0,&UNK_10e4beea5,0x26);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0x39];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x1cd) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee1d0;
        plVar13[1] = (long)plVar1;
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0x39) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x1cd) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee1d0;
        plVar13[1] = (long)plVar1;
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  bVar7 = *(byte *)(param_3 + 0x110);
  if ((*(byte *)(param_2 + 0x25) & bVar7) == 0) {
    if (bVar7 != *(byte *)(param_2 + 0x25)) {
      if (bVar7 != 0) goto LAB_10a4e5504;
LAB_10a4e558c:
      func_0x00010a28590c(param_2 + 0xd,param_1);
    }
  }
  else {
    uVar19 = param_3 + 0x58;
    FUN_10a28a860(uVar19,param_2 + 0xe);
    if ((uVar19 & 1) == 0) {
      if ((*(byte *)(param_3 + 0x110) & 1) == 0) goto LAB_10a4e558c;
LAB_10a4e5504:
      FUN_10a28fbb8(param_2 + 0xe,param_3 + 0x58);
      FUN_10ae03140(0,&UNK_10e4a7b05,0x24);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0xd];
      if ((int)lVar17 == 0) {
        FUN_10a52799c(&plStack_80,param_2 + 0xd,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0xd) = (int)puVar14;
      }
      else {
        FUN_10a52799c(&plStack_80,param_2 + 0xd,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  plVar13 = param_2 + 0x2f;
  bVar7 = *(byte *)(param_3 + 0x2b0);
  if ((*(byte *)(param_2 + 0x33) & bVar7) == 0) {
    if (bVar7 != *(byte *)(param_2 + 0x33)) {
      if (bVar7 != 0) goto LAB_10a4e55fc;
LAB_10a4e5688:
      func_0x00010a2859a8(plVar13,param_1);
    }
  }
  else {
    uVar19 = param_3 + 0x298;
    func_0x00010aacffc4(uVar19,param_2 + 0x30);
    if ((uVar19 & 1) == 0) {
      if ((*(byte *)(param_3 + 0x2b0) & 1) == 0) goto LAB_10a4e5688;
LAB_10a4e55fc:
      FUN_10a290e60(param_2 + 0x30,param_3 + 0x298);
      FUN_10ae03140(0,&UNK_10e4a7ae5,0x1f);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = *plVar13;
      if ((int)lVar17 == 0) {
        FUN_10a527da8(&plStack_80,plVar13,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)plVar13 = (int)puVar14;
      }
      else {
        FUN_10a527da8(&plStack_80,plVar13,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  plVar13 = (long *)(param_3 + 0x2b8);
  plVar31 = param_2 + 0x34;
  bVar7 = *(byte *)(param_3 + 0x2d0);
  bVar8 = *(byte *)(param_2 + 0x38);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) {
      if (bVar7 != 0) {
        if (bVar8 != 0) goto LAB_10a4e5710;
LAB_10a4e575c:
        param_2[0x35] = 0;
        param_2[0x36] = 0;
        param_2[0x37] = 0;
        FUN_10a22fc9c(param_2 + 0x35,*(long *)(param_3 + 0x2b8),*(long *)(param_3 + 0x2c0),
                      (*(long *)(param_3 + 0x2c0) - *(long *)(param_3 + 0x2b8) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
        *(undefined1 *)(param_2 + 0x38) = 1;
        goto LAB_10a4e5798;
      }
LAB_10a4e5814:
      FUN_10a5280c4(plVar31,param_1);
    }
  }
  else {
    plVar25 = plVar13;
    func_0x00010aacfb0c(plVar13,param_2 + 0x35);
    if (((ulong)plVar25 & 1) == 0) {
      if (*(char *)(param_3 + 0x2d0) != '\x01') goto LAB_10a4e5814;
      if ((*(byte *)(param_2 + 0x38) & 1) == 0) goto LAB_10a4e575c;
LAB_10a4e5710:
      if (param_2 + 0x35 != plVar13) {
        FUN_10a290fc4(param_2 + 0x35,*(long *)(param_3 + 0x2b8),*(long *)(param_3 + 0x2c0),
                      (*(long *)(param_3 + 0x2c0) - *(long *)(param_3 + 0x2b8) >> 3) *
                      0x2e8ba2e8ba2e8ba3);
      }
LAB_10a4e5798:
      FUN_10ae03140(0,&UNK_10e4bea76,0x26);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = *plVar31;
      if ((int)lVar17 == 0) {
        FUN_10a528124(&plStack_68,plVar31,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_68);
        *(int *)plVar31 = (int)puVar14;
        plVar13 = plStack_68;
      }
      else {
        FUN_10a528124(&plStack_80,plVar31,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
        plVar13 = plStack_80;
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
    }
  }
  plVar13 = param_2 + 0x26;
  bVar7 = *(byte *)(param_3 + 0x238);
  bVar8 = *(byte *)(param_2 + 0x2e);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) {
      if (bVar7 != 0) {
        if (bVar8 != 0) goto LAB_10a4e5894;
LAB_10a4e58d8:
        *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x208);
        param_2[0x27] = (long)&PTR_FUN_110bef348;
        FUN_10a22ec14(param_2 + 0x29,param_3 + 0x210);
        *(undefined1 *)(param_2 + 0x2e) = 1;
        goto LAB_10a4e5900;
      }
LAB_10a4e597c:
      FUN_10a528440(plVar13,param_1);
    }
  }
  else {
    uVar19 = param_3 + 0x210;
    FUN_10a28beec(uVar19,param_2 + 0x29);
    if ((uVar19 & 1) == 0) {
      if (*(char *)(param_3 + 0x238) != '\x01') goto LAB_10a4e597c;
      if ((*(byte *)(param_2 + 0x2e) & 1) == 0) goto LAB_10a4e58d8;
LAB_10a4e5894:
      *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x208);
      if (param_2 + 0x27 != (long *)(param_3 + 0x200)) {
        *(undefined4 *)(param_2 + 0x2d) = *(undefined4 *)(param_3 + 0x230);
        FUN_10a2916cc(param_2 + 0x29,*(undefined8 *)(param_3 + 0x220),0);
      }
LAB_10a4e5900:
      FUN_10ae03140(0,&UNK_10e4bb2e7,0x26);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = *plVar13;
      if ((int)lVar17 == 0) {
        FUN_10a5284a4(&plStack_68,plVar13,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_68);
        *(int *)plVar13 = (int)puVar14;
        plVar13 = plStack_68;
      }
      else {
        FUN_10a5284a4(&plStack_80,plVar13,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
        plVar13 = plStack_80;
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
    }
  }
  plVar13 = (long *)(param_3 + 0x118);
  plVar31 = param_2 + 0x41;
  bVar7 = *(byte *)(param_3 + 0x130);
  bVar8 = *(byte *)(param_2 + 0x45);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) {
      if (bVar7 != 0) {
        if (bVar8 != 0) goto LAB_10a4e5a08;
LAB_10a4e5b84:
        FUN_10a22d2fc(param_2 + 0x42,plVar13);
        *(undefined1 *)(param_2 + 0x45) = 1;
        goto LAB_10a4e5c34;
      }
LAB_10a4e5b9c:
      FUN_10a5287bc(plVar31,param_1);
    }
  }
  else {
    plVar25 = plVar13;
    FUN_10a513b08(plVar13,param_2[0x42],param_2[0x44]);
    if (((ulong)plVar25 & 1) == 0) {
      if (*(char *)(param_3 + 0x130) != '\x01') goto LAB_10a4e5b9c;
      if ((*(byte *)(param_2 + 0x45) & 1) == 0) goto LAB_10a4e5b84;
LAB_10a4e5a08:
      plVar25 = param_2 + 0x42;
      if (plVar25 != plVar13) {
        puVar28 = *(ulong **)(param_3 + 0x118);
        if (param_2[0x44] != 0) {
          puVar18 = (ulong *)param_2[0x42];
          param_2[0x42] = (long)(param_2 + 0x43);
          *(undefined8 *)(param_2[0x43] + 0x10) = 0;
          param_2[0x44] = 0;
          param_2[0x43] = 0;
          puVar22 = (ulong *)puVar18[1];
          if (puVar22 != (ulong *)0x0) {
            puVar18 = puVar22;
          }
          plStack_80 = plVar25;
          puStack_78 = puVar18;
          puStack_70 = puVar18;
          if (puVar18 != (ulong *)0x0) {
            puVar22 = puVar18;
            FUN_10a529048();
            puStack_78 = puVar22;
            do {
              if (puVar28 == (ulong *)(param_3 + 0x120U)) break;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (puVar18 + 4,puVar28 + 4);
              if (puVar18 != puVar28) {
                *(int *)(puVar18 + 0xb) = (int)puVar28[0xb];
                func_0x00010729c334(puVar18 + 7,puVar28[9],0);
                *(int *)(puVar18 + 0x10) = (int)puVar28[0x10];
                FUN_10a5288d4(puVar18 + 0xc,puVar28[0xe],0);
                func_0x00010a0e2360(puVar18 + 0x11,puVar28[0x11],puVar28[0x12],
                                    (long)(puVar28[0x12] - puVar28[0x11]) >> 3);
                func_0x00010a0e2360(puVar18 + 0x14,puVar28[0x14],puVar28[0x15],
                                    (long)(puVar28[0x15] - puVar28[0x14]) >> 3);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (puVar18 + 0x17,puVar28 + 0x17);
              puVar22 = puStack_70;
              uVar19 = puVar28[0x1a];
              *(char *)(puVar18 + 0x1b) = (char)puVar28[0x1b];
              puVar18[0x1a] = uVar19;
              plVar13 = plVar25;
              FUN_10a528fd4(plVar25,&plStack_68,puStack_70 + 4);
              FUN_10a22d638(plVar25,plStack_68,plVar13,puVar22);
              puVar18 = puStack_78;
              puStack_70 = puStack_78;
              if (puStack_78 != (ulong *)0x0) {
                FUN_10a529048();
              }
              puVar22 = (ulong *)puVar28[1];
              puVar29 = puVar28;
              if ((ulong *)puVar28[1] == (ulong *)0x0) {
                do {
                  puVar28 = (ulong *)puVar29[2];
                  bVar12 = (ulong *)*puVar28 != puVar29;
                  puVar29 = puVar28;
                } while (bVar12);
              }
              else {
                do {
                  puVar28 = puVar22;
                  puVar22 = (ulong *)*puVar28;
                } while ((ulong *)*puVar28 != (ulong *)0x0);
              }
            } while (puVar18 != (ulong *)0x0);
          }
          FUN_10a52909c(&plStack_80);
        }
        while (puVar28 != (ulong *)(param_3 + 0x120U)) {
          FUN_10a22d5d0(&plStack_80,plVar25,puVar28 + 4);
          plVar13 = plVar25;
          FUN_10a528fd4(plVar25,&plStack_68,plStack_80 + 4);
          FUN_10a22d638(plVar25,plStack_68,plVar13,plStack_80);
          puVar18 = (ulong *)puVar28[1];
          puVar22 = puVar28;
          if ((ulong *)puVar28[1] == (ulong *)0x0) {
            do {
              puVar28 = (ulong *)puVar22[2];
              bVar12 = (ulong *)*puVar28 != puVar22;
              puVar22 = puVar28;
            } while (bVar12);
          }
          else {
            do {
              puVar28 = puVar18;
              puVar18 = (ulong *)*puVar28;
            } while ((ulong *)*puVar28 != (ulong *)0x0);
          }
        }
      }
LAB_10a4e5c34:
      FUN_10ae03140(0,&UNK_10e4bdf3c,0x2e);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = *plVar31;
      if ((int)lVar17 == 0) {
        FUN_10a528818(&plStack_88,plVar31,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_88);
        *(int *)plVar31 = (int)puVar14;
      }
      else {
        FUN_10a528818(&plStack_80,plVar31,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
        plStack_88 = plStack_80;
      }
      if (plStack_88 != (long *)0x0) {
        (**(code **)(*plStack_88 + 8))();
      }
    }
  }
  bVar7 = *(byte *)((long)param_2 + 0x35d);
  if (*(byte *)(param_3 + 0x4e3) != bVar7) {
    if (*(byte *)(param_3 + 0x4e3) == 0) {
      if ((int)param_2[0x6b] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x6b]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 0x6b) = 0;
        bVar7 = *(byte *)((long)param_2 + 0x35d) & 1;
      }
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_2 + 0x35d) = 0;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x35d) = 1;
      }
      FUN_10ae03140(0,&UNK_10e4c8fa1,0x27);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0x6b];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x35d) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee3e0;
        plVar13[1] = (long)plVar1;
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0x6b) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x35d) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee3e0;
        plVar13[1] = (long)plVar1;
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  plVar13 = (long *)(param_3 + 0x4b8);
  bVar7 = *(byte *)(param_3 + 0x4d8);
  bVar8 = *(byte *)((long)param_2 + 0x2ec);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) {
      if (bVar7 != 0) goto LAB_10a4e5df8;
LAB_10a4e5e20:
      if ((int)param_2[0x59] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x59]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 0x59) = 0;
        bVar8 = *(byte *)((long)param_2 + 0x2ec) & 1;
      }
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_2 + 0x2ec) = 0;
      }
    }
  }
  else {
    plVar31 = plVar13;
    func_0x00010a50f4ac(plVar13,(long)param_2 + 0x2cc);
    if (((ulong)plVar31 & 1) == 0) {
      if ((bVar7 & 1) == 0) goto LAB_10a4e5e20;
LAB_10a4e5df8:
      plVar31 = (long *)((long)param_2 + 0x2cc);
      if (bVar8 == 0) {
        lVar17 = *plVar13;
        uVar34 = *(undefined8 *)(param_3 + 0x4d0);
        uVar33 = *(undefined8 *)(param_3 + 0x4c8);
        *(undefined8 *)((long)param_2 + 0x2d4) = *(undefined8 *)(param_3 + 0x4c0);
        *plVar31 = lVar17;
        *(undefined8 *)((long)param_2 + 0x2e4) = uVar34;
        *(undefined8 *)((long)param_2 + 0x2dc) = uVar33;
        *(undefined1 *)((long)param_2 + 0x2ec) = 1;
      }
      else {
        uVar33 = *(undefined8 *)(param_3 + 0x4c0);
        lVar17 = *plVar13;
        uVar34 = *(undefined8 *)(param_3 + 0x4c7);
        *(undefined8 *)((long)param_2 + 0x2e3) = *(undefined8 *)(param_3 + 0x4cf);
        *(undefined8 *)((long)param_2 + 0x2db) = uVar34;
        *(undefined8 *)((long)param_2 + 0x2d4) = uVar33;
        *plVar31 = lVar17;
      }
      FUN_10ae03140(0,&UNK_10e4c8fc9,0x23);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0x59];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x2ec) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x30;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee438;
        plVar13[1] = (long)plVar1;
        lVar17 = *plVar31;
        plVar13[3] = *(long *)((long)param_2 + 0x2d4);
        plVar13[2] = lVar17;
        uVar33 = *(undefined8 *)((long)param_2 + 0x2db);
        *(undefined8 *)((long)plVar13 + 0x27) = *(undefined8 *)((long)param_2 + 0x2e3);
        *(undefined8 *)((long)plVar13 + 0x1f) = uVar33;
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0x59) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x2ec) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x30;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee438;
        plVar13[1] = (long)plVar1;
        lVar21 = *plVar31;
        plVar13[3] = *(long *)((long)param_2 + 0x2d4);
        plVar13[2] = lVar21;
        uVar33 = *(undefined8 *)((long)param_2 + 0x2db);
        *(undefined8 *)((long)plVar13 + 0x27) = *(undefined8 *)((long)param_2 + 0x2e3);
        *(undefined8 *)((long)plVar13 + 0x1f) = uVar33;
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  cVar6 = *(char *)(param_3 + 0x4dc);
  bVar7 = *(byte *)(param_3 + 0x4dd);
  bVar8 = *(byte *)((long)param_2 + 0x365);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) goto LAB_10a4e5fa4;
  }
  else if (cVar6 != *(char *)((long)param_2 + 0x364)) {
LAB_10a4e5fa4:
    if (bVar7 == 0) {
      if ((int)param_2[0x6c] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x6c]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 0x6c) = 0;
        bVar8 = *(byte *)((long)param_2 + 0x365) & 1;
      }
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_2 + 0x365) = 0;
      }
    }
    else {
      if ((bVar8 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x365) = 1;
      }
      *(char *)((long)param_2 + 0x364) = cVar6;
      FUN_10ae03140(0,&UNK_10e4c90b0,0x29);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0x6c];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x365) & 1) == 0) goto LAB_10a4e7020;
        uVar9 = *(undefined1 *)((long)param_2 + 0x364);
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee490;
        plVar13[1] = (long)plVar1;
        *(undefined1 *)(plVar13 + 2) = uVar9;
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0x6c) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x365) & 1) == 0) goto LAB_10a4e7020;
        uVar9 = *(undefined1 *)((long)param_2 + 0x364);
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee490;
        plVar13[1] = (long)plVar1;
        *(undefined1 *)(plVar13 + 2) = uVar9;
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  bVar7 = *(byte *)(param_3 + 0x4e1);
  bVar8 = *(byte *)((long)param_2 + 0x357);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) goto LAB_10a4e610c;
  }
  else if (((*(char *)(param_3 + 0x4de) != *(char *)((long)param_2 + 0x354)) ||
           (*(char *)(param_3 + 0x4df) != *(char *)((long)param_2 + 0x355))) ||
          (*(char *)(param_3 + 0x4e0) != *(char *)((long)param_2 + 0x356))) {
LAB_10a4e610c:
    if (bVar7 == 0) {
      if ((int)param_2[0x6a] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x6a]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 0x6a) = 0;
        bVar8 = *(byte *)((long)param_2 + 0x357) & 1;
      }
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_2 + 0x357) = 0;
      }
    }
    else {
      uVar10 = *(undefined2 *)(param_3 + 0x4de);
      *(undefined1 *)((long)param_2 + 0x356) = *(undefined1 *)(param_3 + 0x4e0);
      *(undefined2 *)((long)param_2 + 0x354) = uVar10;
      if ((bVar8 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x357) = 1;
      }
      FUN_10ae03140(0,&UNK_10e4c911b,0x23);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0x6a];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x357) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee4e8;
        plVar13[1] = (long)plVar1;
        *(undefined2 *)(plVar13 + 2) = *(undefined2 *)((long)param_2 + 0x354);
        *(undefined1 *)((long)plVar13 + 0x12) = *(undefined1 *)((long)param_2 + 0x356);
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0x6a) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x357) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee4e8;
        plVar13[1] = (long)plVar1;
        *(undefined2 *)(plVar13 + 2) = *(undefined2 *)((long)param_2 + 0x354);
        *(undefined1 *)((long)plVar13 + 0x12) = *(undefined1 *)((long)param_2 + 0x356);
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  bVar7 = *(byte *)((long)param_2 + 0x3d);
  if (*(byte *)(param_3 + 0x271) != bVar7) {
    if (*(byte *)(param_3 + 0x271) == 0) {
      if ((int)param_2[7] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[7]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 7) = 0;
        bVar7 = *(byte *)((long)param_2 + 0x3d) & 1;
      }
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_2 + 0x3d) = 0;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x3d) = 1;
      }
      FUN_10ae03140(0,&UNK_10e4bd6df,0x20);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[7];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x3d) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee540;
        plVar13[1] = (long)plVar1;
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 7) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x3d) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee540;
        plVar13[1] = (long)plVar1;
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  pdVar2 = (double *)(param_3 + 0x278);
  bVar7 = *(byte *)(param_3 + 0x290);
  bVar8 = *(byte *)(param_2 + 0xc);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) goto LAB_10a4e63ac;
  }
  else if (((*pdVar2 != (double)param_2[9]) || (*(long *)(param_3 + 0x280) != param_2[10])) ||
          (*(char *)(param_3 + 0x288) != (char)param_2[0xb])) {
LAB_10a4e63ac:
    if (bVar7 == 0) {
      if ((int)param_2[8] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[8]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 8) = 0;
        bVar8 = *(byte *)(param_2 + 0xc) & 1;
      }
      if (bVar8 != 0) {
        *(undefined1 *)(param_2 + 0xc) = 0;
      }
    }
    else {
      if (bVar8 == 0) {
        lVar17 = *(long *)(param_3 + 0x280);
        dVar32 = *pdVar2;
        param_2[0xb] = *(long *)(param_3 + 0x288);
        param_2[10] = lVar17;
        param_2[9] = (long)dVar32;
        *(undefined1 *)(param_2 + 0xc) = 1;
      }
      else {
        lVar17 = *(long *)(param_3 + 0x280);
        dVar32 = *pdVar2;
        *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_3 + 0x288);
        param_2[10] = lVar17;
        param_2[9] = (long)dVar32;
      }
      FUN_10ae03140(0,&UNK_10e4c8f2d,0x26);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[8];
      if ((int)lVar17 == 0) {
        if ((*(byte *)(param_2 + 0xc) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x28;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee598;
        plVar13[1] = (long)plVar1;
        lVar17 = param_2[9];
        plVar13[3] = param_2[10];
        plVar13[2] = lVar17;
        *(char *)(plVar13 + 4) = (char)param_2[0xb];
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 8) = (int)puVar14;
      }
      else {
        if ((*(byte *)(param_2 + 0xc) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x28;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee598;
        plVar13[1] = (long)plVar1;
        lVar21 = param_2[9];
        plVar13[3] = param_2[10];
        plVar13[2] = lVar21;
        *(char *)(plVar13 + 4) = (char)param_2[0xb];
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  bVar7 = *(byte *)((long)param_2 + 0x2fd);
  if (*(byte *)(param_3 + 0x4e7) != bVar7) {
    if (*(byte *)(param_3 + 0x4e7) == 0) {
      if ((int)param_2[0x5f] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x5f]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 0x5f) = 0;
        bVar7 = *(byte *)((long)param_2 + 0x2fd) & 1;
      }
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_2 + 0x2fd) = 0;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x2fd) = 1;
      }
      FUN_10ae03140(0,&UNK_10e4c0339,0x1c);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0x5f];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x2fd) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee5f0;
        plVar13[1] = (long)plVar1;
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0x5f) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x2fd) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee5f0;
        plVar13[1] = (long)plVar1;
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  plVar13 = (long *)(param_3 + 0x410);
  plVar31 = param_2 + 0x4f;
  bVar7 = *(byte *)(param_3 + 0x450);
  bVar8 = *(byte *)(param_2 + 0x58);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) {
      if (bVar7 == 0) goto LAB_10a4e6748;
      if (bVar8 != 0) goto LAB_10a4e6650;
LAB_10a4e6730:
      FUN_10a23005c(param_2 + 0x50,plVar13);
      *(undefined1 *)(param_2 + 0x58) = 1;
LAB_10a4e6904:
      FUN_10ae03140(0,&UNK_10e4bfc14,0x2e);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = *plVar31;
      if ((int)lVar17 == 0) {
        FUN_10a529f28(&plStack_68,plVar31,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_68);
        *(int *)plVar31 = (int)puVar14;
      }
      else {
        FUN_10a529f28(&plStack_80,plVar31,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
        plStack_68 = plStack_80;
      }
      if (plStack_68 != (long *)0x0) {
        (**(code **)(*plStack_68 + 8))();
      }
    }
  }
  else {
    plVar25 = plVar13;
    FUN_10a51b468(plVar13,param_2 + 0x50);
    if (((ulong)plVar25 & 1) == 0) {
      if (*(char *)(param_3 + 0x450) == '\x01') {
        if ((*(byte *)(param_2 + 0x58) & 1) == 0) goto LAB_10a4e6730;
LAB_10a4e6650:
        *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)plVar13;
        if (param_2 + 0x50 != plVar13) {
          lVar17 = *(long *)(param_3 + 0x418);
          lVar21 = *(long *)(param_3 + 0x420);
          uVar19 = lVar21 - lVar17;
          if ((ulong)(param_2[0x53] - param_2[0x51]) < uVar19) {
            uVar26 = ((long)uVar19 >> 3) * 0x6db6db6db6db6db7;
            FUN_10a2319d4(param_2 + 0x51);
            if (0x492492492492492 < uVar26) {
              FUN_10a2301c4();
              goto LAB_10a4e7020;
            }
            lVar20 = param_2[0x53] - param_2[0x51] >> 3;
            uVar23 = lVar20 * -0x2492492492492492;
            if (uVar23 < uVar26 || uVar23 + ((long)uVar19 >> 3) * -0x6db6db6db6db6db7 == 0) {
              uVar23 = uVar26;
            }
            if (0x249249249249248 < (ulong)(lVar20 * 0x6db6db6db6db6db7)) {
              uVar23 = 0x492492492492492;
            }
            FUN_10a230178(param_2 + 0x51,uVar23);
            plVar13 = param_2 + 0x51;
            FUN_10a230220(plVar13,lVar17,lVar21,param_2[0x52]);
          }
          else {
            uVar26 = param_2[0x52] - param_2[0x51];
            if (uVar19 <= uVar26) {
              FUN_10a52a064(lVar17,lVar21);
              lVar21 = param_2[0x52];
              while (lVar21 != lVar17) {
                lVar21 = lVar21 + -0x38;
                func_0x00010a230338(lVar21);
              }
              param_2[0x52] = lVar17;
              goto LAB_10a4e68f8;
            }
            FUN_10a52a064(lVar17,lVar17 + uVar26);
            plVar13 = param_2 + 0x51;
            FUN_10a230220(plVar13,lVar17 + uVar26,lVar21,param_2[0x52]);
          }
          param_2[0x52] = (long)plVar13;
        }
LAB_10a4e68f8:
        func_0x00010a1cca60(param_2 + 0x54,param_3 + 0x430);
        goto LAB_10a4e6904;
      }
LAB_10a4e6748:
      FUN_10a529ee4(plVar31,param_1);
    }
  }
  puVar3 = (undefined4 *)(param_3 + 0x2d8);
  bVar7 = *(byte *)(param_3 + 0x2f8);
  bVar8 = *(byte *)(param_2 + 6);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 != bVar8) {
      if (bVar7 != 0) goto LAB_10a4e69b0;
LAB_10a4e69e0:
      FUN_10a52a460(param_2 + 1,param_1);
    }
  }
  else {
    puVar15 = puVar3;
    FUN_10a50d540(puVar3,param_2 + 2);
    if (((ulong)puVar15 & 1) == 0) {
      if ((bVar7 & 1) == 0) goto LAB_10a4e69e0;
LAB_10a4e69b0:
      uVar5 = *puVar3;
      *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(param_3 + 0x2dc);
      *(undefined4 *)(param_2 + 2) = uVar5;
      if (bVar8 == 0) {
        if (*(char *)(param_3 + 0x2f7) < '\0') {
          func_0x000107c3192c(param_2 + 3,*(undefined8 *)(param_3 + 0x2e0),
                              *(undefined8 *)(param_3 + 0x2e8));
        }
        else {
          lVar21 = *(long *)(param_3 + 0x2e8);
          lVar17 = *(long *)(param_3 + 0x2e0);
          param_2[5] = *(long *)(param_3 + 0x2f0);
          param_2[4] = lVar21;
          param_2[3] = lVar17;
        }
        *(undefined1 *)(param_2 + 6) = 1;
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 3);
      }
      FUN_10ae03140(0,&UNK_10e4c90fd,0x1d);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[1];
      if ((int)lVar17 == 0) {
        FUN_10a52a4c0(&plStack_80,param_2 + 1,plVar1);
        puVar14 = param_1;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 1) = (int)puVar14;
      }
      else {
        FUN_10a52a4c0(&plStack_80,param_2 + 1,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  bVar7 = *(byte *)((long)param_2 + 0x2f5);
  if (*(byte *)(param_3 + 0x4e5) != bVar7) {
    if (*(byte *)(param_3 + 0x4e5) == 0) {
      if ((int)param_2[0x5e] != 0) {
        plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x5e]);
        func_0x0001098b0050(param_1 + 3,&plStack_80);
        *(undefined4 *)(param_2 + 0x5e) = 0;
        bVar7 = *(byte *)((long)param_2 + 0x2f5) & 1;
      }
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_2 + 0x2f5) = 0;
      }
    }
    else {
      if ((bVar7 & 1) == 0) {
        *(undefined1 *)((long)param_2 + 0x2f5) = 1;
      }
      FUN_10ae03140(0,&UNK_10e4c008b,0x1d);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = param_2[0x5e];
      if ((int)lVar17 == 0) {
        if ((*(byte *)((long)param_2 + 0x2f5) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee6f8;
        plVar13[1] = (long)plVar1;
        puVar14 = param_1;
        plStack_80 = plVar13;
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)(param_2 + 0x5e) = (int)puVar14;
      }
      else {
        if ((*(byte *)((long)param_2 + 0x2f5) & 1) == 0) goto LAB_10a4e7020;
        plVar13 = (long *)0x18;
        __Znwm();
        *plVar13 = (long)&PTR_DAT_110bee6f8;
        plVar13[1] = (long)plVar1;
        plStack_80 = plVar13;
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  uVar19 = *(ulong *)(param_3 + 0x18c);
  bVar7 = *(byte *)(param_3 + 0x194);
  bVar8 = *(byte *)((long)param_2 + 0x274);
  if ((bVar8 & bVar7) == 0) {
    if (bVar7 == bVar8) goto LAB_10a4e6d80;
  }
  else {
    uVar26 = *(ulong *)((long)param_2 + 0x26c);
    if (((uVar19 & uVar26) >> 0x20 & 1) == 0) {
      if (((uVar26 ^ uVar19) >> 0x20 & 1) == 0) goto LAB_10a4e6d80;
    }
    else if ((float)uVar19 == (float)uVar26) goto LAB_10a4e6d80;
  }
  if (bVar7 == 0) {
    if ((int)param_2[0x4d] != 0) {
      plStack_80 = (long *)CONCAT44(plStack_80._4_4_,(int)param_2[0x4d]);
      func_0x0001098b0050(param_1 + 3,&plStack_80);
      *(undefined4 *)(param_2 + 0x4d) = 0;
      bVar8 = *(byte *)((long)param_2 + 0x274) & 1;
    }
    if (bVar8 != 0) {
      *(undefined1 *)((long)param_2 + 0x274) = 0;
    }
  }
  else {
    puVar28 = (ulong *)((long)param_2 + 0x26c);
    if ((bVar8 & 1) == 0) {
      *(undefined1 *)((long)param_2 + 0x274) = 1;
    }
    *puVar28 = uVar19;
    FUN_10ae03140(0,&UNK_10e4bf94d,0x22);
    ppuVar16 = &PTR_PTR_113300eb0;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
    lVar17 = param_2[0x4d];
    if ((int)lVar17 == 0) {
      if ((*(byte *)((long)param_2 + 0x274) & 1) == 0) goto LAB_10a4e7020;
      uVar19 = *puVar28;
      plVar13 = (long *)0x18;
      __Znwm();
      *plVar13 = (long)&PTR_DAT_110bee750;
      plVar13[1] = (long)plVar1;
      plVar13[2] = uVar19;
      puVar14 = param_1;
      plStack_80 = plVar13;
      func_0x0001098aff74(param_1,&plStack_80);
      *(int *)(param_2 + 0x4d) = (int)puVar14;
    }
    else {
      if ((*(byte *)((long)param_2 + 0x274) & 1) == 0) {
LAB_10a4e7020:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10a4e7024);
        (*pcVar11)();
      }
      uVar19 = *puVar28;
      plVar13 = (long *)0x18;
      __Znwm();
      *plVar13 = (long)&PTR_DAT_110bee750;
      plVar13[1] = (long)plVar1;
      plVar13[2] = uVar19;
      plStack_80 = plVar13;
      func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
    }
    if (plStack_80 != (long *)0x0) {
      (**(code **)(*plStack_80 + 8))();
    }
  }
LAB_10a4e6d80:
  lVar17 = param_3 + 0x1a0;
  FUN_10a2927e0(lVar17,param_2 + 0x47);
  if ((int)lVar17 != 0) {
    plVar13 = param_2 + 0x46;
    if (*(char *)(param_3 + 0x1c8) == '\x01') {
      FUN_10a292840(param_2 + 0x47,param_3 + 0x1a0);
      FUN_10ae03140(0,&UNK_10e4a6e3c,0x2c);
      ppuVar16 = &PTR_PTR_113300eb0;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar16,&PTR_PTR_113300eb0);
      lVar17 = *plVar13;
      if ((int)lVar17 == 0) {
        FUN_10a52ab2c(&plStack_80,plVar13,plVar1);
        func_0x0001098aff74(param_1,&plStack_80);
        *(int *)plVar13 = (int)param_1;
      }
      else {
        FUN_10a52ab2c(&plStack_80,plVar13,plVar1);
        func_0x0001098b0114(param_1,(int)lVar17,&plStack_80);
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
    else {
      func_0x00010a285a08(plVar13,param_1);
    }
  }
  return;
LAB_10a4e68b0:
  do {
    plVar24 = (long *)*plVar30;
    __ZdlPv(plVar30);
    plVar30 = plVar24;
  } while (plVar24 != (long *)0x0);
LAB_10a4e686c:
  iVar4 = (int)*plVar27;
LAB_10a4e6874:
  plVar24 = (long *)*plVar25;
  plVar25[1] = (long)iVar4;
  puVar28 = puVar18;
  FUN_10a527208(puVar18,(long)iVar4,plVar27);
  FUN_10a52751c(puVar18,plVar25,puVar28);
  plVar31 = (long *)*plVar31;
  plVar25 = plVar24;
  if ((plVar24 == (long *)0x0) || (plVar31 == (long *)0x0)) goto LAB_10a4e5260;
  goto LAB_10a4e6798;
}


