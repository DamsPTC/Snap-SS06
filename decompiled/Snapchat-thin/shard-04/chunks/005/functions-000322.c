/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10353f0ec; end: 10353f123;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10353f0ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103543a74();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 10353f124; end: 10353f12f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10353f124(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar22 = *param_1;
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  lVar18 = *param_2;
  lVar15 = param_2[2];
  uVar13 = param_2[3];
  if ((char)param_2[1] != '\x01') {
    if (lVar22 == lVar18) goto SUB_100e25fcc;
    goto LAB_103541c8c;
  }
  if (lVar18 < 4) {
    if (lVar18 < 2) {
      if (lVar18 == 0) {
        if (lVar22 == 0) goto SUB_100e25fcc;
      }
      else if (lVar22 == 1) goto SUB_100e25fcc;
    }
    else if (lVar18 == 2) {
      if (lVar22 == 2) goto SUB_100e25fcc;
    }
    else if (lVar22 == 3) goto SUB_100e25fcc;
  }
  else if (lVar18 < 6) {
    if (lVar18 == 4) {
      if (lVar22 == 4) {
SUB_100e25fcc:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar5 = (uint)((ulong)pbVar27 >> 0x20);
        uVar19 = uVar5 >> 0x1e;
        uVar6 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar6 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar29 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto code_r0x000100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar21 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar21 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar20 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
              if (uVar19 < 2) {
                if (uVar19 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                  pbVar29 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar7)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar29 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar18 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar29 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                }
                unaff_x23 = unaff_x24 + -lVar18;
                if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar7)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar29) {
                    pbVar29 = unaff_x23;
                  }
                  pbVar29 = pbVar29 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                                  lVar15,uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto code_r0x000100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          auVar46._8_8_ = pbVar29;
          auVar46._0_8_ = plVar9;
          return auVar46;
        }
        func_0x000107c60e78();
        *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
        pbVar12 = (byte *)*plVar9;
        pbVar10 = (byte *)plVar9[1];
        pbVar25 = (byte *)plVar9[3];
        bVar30 = *(byte *)(plVar9 + 5);
        pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                          (ulong)*(byte *)(plVar9 + 2));
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar29[0x28] == 0) {
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto code_r0x000100e266f0;
            }
            goto code_r0x000100e266ec;
          }
          if (bVar30 != 1) {
            if (pbVar29[0x28] == 2) {
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              pbVar26 = *(byte **)(pbVar29 + 0x18);
              if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
              if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (pbVar26 != (byte *)0x0) {
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(pbVar26);
                  func_0x000107c61174();
                  pbVar10 = pbVar25;
                  pbVar29 = pbVar26;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(pbVar26);
                  pbVar25 = pbVar10;
                  goto joined_r0x000100e266a4;
                }
              }
            }
            goto code_r0x000100e266ec;
          }
          if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
          pbVar12 = pbVar10;
          pbVar14 = pbVar27;
          if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar16,pbVar17,0);
            auVar48._8_8_ = pbVar14;
            auVar48._0_8_ = pbVar12;
            return auVar48;
          }
        }
        else {
          pbVar28 = (byte *)plVar9[4];
          if (4 < bVar30) {
            if (bVar30 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                if (pbVar29[0x28] == 6) {
                  lVar18 = *(long *)(pbVar29 + 0x20);
                  lVar15 = *(long *)(pbVar29 + 0x18);
                  bVar30 = pbVar29[8] | (byte)lVar15;
                  bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                  bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                  bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                  bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                  bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                  bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                  bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                  bVar38 = pbVar29[0x10] | (byte)lVar18;
                  bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                  bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                  bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                  bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                  bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                  bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                  bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
                  auVar3[1] = bVar31;
                  auVar3[0] = bVar30;
                  auVar3[2] = bVar32;
                  auVar3[3] = bVar33;
                  auVar3[4] = bVar34;
                  auVar3[5] = bVar35;
                  auVar3[6] = bVar36;
                  auVar3[7] = bVar37;
                  auVar3[8] = bVar38;
                  auVar3[9] = bVar39;
                  auVar3[10] = bVar40;
                  auVar3[0xb] = bVar41;
                  auVar3[0xc] = bVar42;
                  auVar3[0xd] = bVar43;
                  auVar3[0xe] = bVar44;
                  auVar3[0xf] = bVar45;
                  auVar4[1] = bVar31;
                  auVar4[0] = bVar30;
                  auVar4[2] = bVar32;
                  auVar4[3] = bVar33;
                  auVar4[4] = bVar34;
                  auVar4[5] = bVar35;
                  auVar4[6] = bVar36;
                  auVar4[7] = bVar37;
                  auVar4[8] = bVar38;
                  auVar4[9] = bVar39;
                  auVar4[10] = bVar40;
                  auVar4[0xb] = bVar41;
                  auVar4[0xc] = bVar42;
                  auVar4[0xd] = bVar43;
                  auVar4[0xe] = bVar44;
                  auVar4[0xf] = bVar45;
                  auVar46 = NEON_ext(auVar3,auVar4,8,1);
                  if (CONCAT17(bVar37 | auVar46[7],
                               CONCAT16(bVar36 | auVar46[6],
                                        CONCAT15(bVar35 | auVar46[5],
                                                 CONCAT14(bVar34 | auVar46[4],
                                                          CONCAT13(bVar33 | auVar46[3],
                                                                   CONCAT12(bVar32 | auVar46[2],
                                                                            CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                      *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                }
                goto code_r0x000100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
              lVar18 = *(long *)(pbVar29 + 0x20);
              lVar15 = *(long *)(pbVar29 + 0x18);
              bVar30 = pbVar29[8] | (byte)lVar15;
              bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
              bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
              bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
              bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
              bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
              bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
              bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
              bVar38 = pbVar29[0x10] | (byte)lVar18;
              bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
              bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
              bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
              bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
              bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
              bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
              bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
              auVar1[1] = bVar31;
              auVar1[0] = bVar30;
              auVar1[2] = bVar32;
              auVar1[3] = bVar33;
              auVar1[4] = bVar34;
              auVar1[5] = bVar35;
              auVar1[6] = bVar36;
              auVar1[7] = bVar37;
              auVar1[8] = bVar38;
              auVar1[9] = bVar39;
              auVar1[10] = bVar40;
              auVar1[0xb] = bVar41;
              auVar1[0xc] = bVar42;
              auVar1[0xd] = bVar43;
              auVar1[0xe] = bVar44;
              auVar1[0xf] = bVar45;
              auVar2[1] = bVar31;
              auVar2[0] = bVar30;
              auVar2[2] = bVar32;
              auVar2[3] = bVar33;
              auVar2[4] = bVar34;
              auVar2[5] = bVar35;
              auVar2[6] = bVar36;
              auVar2[7] = bVar37;
              auVar2[8] = bVar38;
              auVar2[9] = bVar39;
              auVar2[10] = bVar40;
              auVar2[0xb] = bVar41;
              auVar2[0xc] = bVar42;
              auVar2[0xd] = bVar43;
              auVar2[0xe] = bVar44;
              auVar2[0xf] = bVar45;
              auVar46 = NEON_ext(auVar1,auVar2,8,1);
              pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                         CONCAT16(bVar36 | auVar46[6],
                                                  CONCAT15(bVar35 | auVar46[5],
                                                           CONCAT14(bVar34 | auVar46[4],
                                                                    CONCAT13(bVar33 | auVar46[3],
                                                                             CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
              goto joined_r0x000100e26620;
            }
            if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto SUB_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto code_r0x000100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto code_r0x000100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                uVar13 = 0;
code_r0x000100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
code_r0x000100e26708:
        uVar13 = 1;
        goto code_r0x000100e266f0;
      }
    }
    else if (lVar22 == 5) goto SUB_100e25fcc;
  }
  else if (lVar18 == 6) {
    if (lVar22 == 6) goto SUB_100e25fcc;
  }
  else if (lVar18 == 7) {
    if (lVar22 == 7) goto SUB_100e25fcc;
  }
  else if (lVar22 == 8) goto SUB_100e25fcc;
LAB_103541c8c:
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 10353f130; end: 10353f177;  */

void FUN_10353f130(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd99e0,0x7e,2);
  uRam0000000113808228 = uStack_38;
  uRam0000000113808220 = uStack_40;
  uRam0000000113808238 = uStack_28;
  uRam0000000113808230 = uStack_30;
  uRam0000000113808248 = uStack_18;
  uRam0000000113808240 = uStack_20;
  return;
}



/* Entry: 10353f178; end: 10353f217;  */

/* WARNING: Possible PIC construction at 0x00010353f1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353f1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353f1c8) */
/* WARNING: Removing unreachable block (ram,0x00010353f1d8) */

void FUN_10353f178(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77548 != -1) {
    func_0x000107c61568(0x112f77548,FUN_10353f130);
  }
  uVar5 = uRam0000000113808248;
  uVar4 = uRam0000000113808240;
  uVar3 = uRam0000000113808238;
  uVar2 = uRam0000000113808230;
  uVar1 = uRam0000000113808228;
  *param_1 = uRam0000000113808220;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10353f218; end: 10353f25f;  */

void FUN_10353f218(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd99d0,9,2);
  uRam0000000113808258 = uStack_38;
  uRam0000000113808250 = uStack_40;
  uRam0000000113808268 = uStack_28;
  uRam0000000113808260 = uStack_30;
  uRam0000000113808278 = uStack_18;
  uRam0000000113808270 = uStack_20;
  return;
}



/* Entry: 10353f260; end: 10353f297;  */

undefined1  [16] FUN_10353f260(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1555e0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 10353f298; end: 10353f2ff;  */

void FUN_10353f298(void)

{
  FUN_103540590();
  return;
}



/* Entry: 10353f300; end: 10353f337;  */

uint FUN_10353f300(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103545e9c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10353f338; end: 10353f367;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10353f338(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  long *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar18 = *param_1;
  lVar15 = param_1[2];
  uVar13 = param_1[3];
  lVar22 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[2];
  pbVar27 = (byte *)unaff_x20[3];
  if ((char)param_1[1] == '\x01') {
    if (lVar18 < 2) {
      if (lVar18 == 0) {
        if (lVar22 == 0) {
SUB_100e25fcc:
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar5 = (uint)((ulong)pbVar27 >> 0x20);
          uVar19 = uVar5 >> 0x1e;
          uVar6 = (uint)(uVar13 >> 0x20);
          uVar23 = uVar6 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar29 = pbVar27;
          if ((ulong)pbVar27 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
                (uVar13 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            plVar9 = (long *)0x1;
          }
          else if (uVar5 >> 0x1e < 2) {
            if (uVar19 == 0) {
              uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar7)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
              if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar7)();
              }
              goto code_r0x000100e2608c;
            }
            plVar9 = (long *)(ulong)(uVar21 == 0);
          }
          else {
            if (uVar19 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar7)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
              if (uVar21 == uVar24) goto code_r0x000100e26094;
            }
            else {
              iVar20 = (int)((ulong)lVar15 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar7)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
                if ((long)uVar21 < 1) goto code_r0x000100e26128;
                if (uVar19 < 2) {
                  if (uVar19 == 0) {
                    *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                    *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                    *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                    *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                    *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                    *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                    *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                    *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                    *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                    *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                    *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                    *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                    pbVar29 = (byte *)((long)register0x00000008 +
                                      (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                        (undefined1 *)((long)register0x00000008 + -0x70));
                    plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar7)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar27;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar29 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar7)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar29) {
                        pbVar29 = unaff_x23;
                      }
                      pbVar29 = pbVar29 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if (uVar19 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                    goto code_r0x000100e26260;
                  }
                  lVar18 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar29 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar7)();
                    }
                    pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                  }
                  unaff_x23 = unaff_x24 + -lVar18;
                  if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar7)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar27;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar29 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (long *)((ulong)pbVar27 & 0x3fffffffffffffff);
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29
                                    ,lVar15,uVar13);
                plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = uVar13;
                goto code_r0x000100e262b0;
              }
            }
            plVar9 = (long *)0x0;
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            auVar46._8_8_ = pbVar29;
            auVar46._0_8_ = plVar9;
            return auVar46;
          }
          func_0x000107c60e78();
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(long **)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar12 = (byte *)*plVar9;
          pbVar10 = (byte *)plVar9[1];
          pbVar25 = (byte *)plVar9[3];
          bVar30 = *(byte *)(plVar9 + 5);
          pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                            (ulong)*(byte *)(plVar9 + 2));
          pbVar14 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar29[0x28] == 0) {
                pbVar29 = *(byte **)pbVar29;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,pbVar29,uVar11);
                uVar13 = (ulong)((uint)pbVar12 & 1);
                goto code_r0x000100e266f0;
              }
              goto code_r0x000100e266ec;
            }
            if (bVar30 != 1) {
              if (pbVar29[0x28] == 2) {
                pbVar16 = *(byte **)pbVar29;
                pbVar17 = *(byte **)(pbVar29 + 8);
                pbVar26 = *(byte **)(pbVar29 + 0x18);
                if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
                if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                  if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (pbVar26 != (byte *)0x0) {
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(pbVar26);
                    func_0x000107c61174();
                    pbVar10 = pbVar25;
                    pbVar29 = pbVar26;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(pbVar26);
                    pbVar25 = pbVar10;
                    goto joined_r0x000100e266a4;
                  }
                }
              }
              goto code_r0x000100e266ec;
            }
            if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)(pbVar29 + 8);
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            pbVar12 = pbVar10;
            pbVar14 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
              )(pbVar12,pbVar14,pbVar16,pbVar17,0);
              auVar48._8_8_ = pbVar14;
              auVar48._0_8_ = pbVar12;
              return auVar48;
            }
          }
          else {
            pbVar28 = (byte *)plVar9[4];
            if (4 < bVar30) {
              if (bVar30 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                  if (pbVar29[0x28] == 6) {
                    lVar18 = *(long *)(pbVar29 + 0x20);
                    lVar15 = *(long *)(pbVar29 + 0x18);
                    bVar30 = pbVar29[8] | (byte)lVar15;
                    bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                    bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                    bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                    bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                    bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                    bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                    bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                    bVar38 = pbVar29[0x10] | (byte)lVar18;
                    bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                    bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                    bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                    bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                    bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                    bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                    bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
                    auVar3[1] = bVar31;
                    auVar3[0] = bVar30;
                    auVar3[2] = bVar32;
                    auVar3[3] = bVar33;
                    auVar3[4] = bVar34;
                    auVar3[5] = bVar35;
                    auVar3[6] = bVar36;
                    auVar3[7] = bVar37;
                    auVar3[8] = bVar38;
                    auVar3[9] = bVar39;
                    auVar3[10] = bVar40;
                    auVar3[0xb] = bVar41;
                    auVar3[0xc] = bVar42;
                    auVar3[0xd] = bVar43;
                    auVar3[0xe] = bVar44;
                    auVar3[0xf] = bVar45;
                    auVar4[1] = bVar31;
                    auVar4[0] = bVar30;
                    auVar4[2] = bVar32;
                    auVar4[3] = bVar33;
                    auVar4[4] = bVar34;
                    auVar4[5] = bVar35;
                    auVar4[6] = bVar36;
                    auVar4[7] = bVar37;
                    auVar4[8] = bVar38;
                    auVar4[9] = bVar39;
                    auVar4[10] = bVar40;
                    auVar4[0xb] = bVar41;
                    auVar4[0xc] = bVar42;
                    auVar4[0xd] = bVar43;
                    auVar4[0xe] = bVar44;
                    auVar4[0xf] = bVar45;
                    auVar46 = NEON_ext(auVar3,auVar4,8,1);
                    if (CONCAT17(bVar37 | auVar46[7],
                                 CONCAT16(bVar36 | auVar46[6],
                                          CONCAT15(bVar35 | auVar46[5],
                                                   CONCAT14(bVar34 | auVar46[4],
                                                            CONCAT13(bVar33 | auVar46[3],
                                                                     CONCAT12(bVar32 | auVar46[2],
                                                                              CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                        *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                  }
                  goto code_r0x000100e266ec;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0)) {
                  if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
                }
                else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
                lVar18 = *(long *)(pbVar29 + 0x20);
                lVar15 = *(long *)(pbVar29 + 0x18);
                bVar30 = pbVar29[8] | (byte)lVar15;
                bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                bVar38 = pbVar29[0x10] | (byte)lVar18;
                bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
                auVar1[1] = bVar31;
                auVar1[0] = bVar30;
                auVar1[2] = bVar32;
                auVar1[3] = bVar33;
                auVar1[4] = bVar34;
                auVar1[5] = bVar35;
                auVar1[6] = bVar36;
                auVar1[7] = bVar37;
                auVar1[8] = bVar38;
                auVar1[9] = bVar39;
                auVar1[10] = bVar40;
                auVar1[0xb] = bVar41;
                auVar1[0xc] = bVar42;
                auVar1[0xd] = bVar43;
                auVar1[0xe] = bVar44;
                auVar1[0xf] = bVar45;
                auVar2[1] = bVar31;
                auVar2[0] = bVar30;
                auVar2[2] = bVar32;
                auVar2[3] = bVar33;
                auVar2[4] = bVar34;
                auVar2[5] = bVar35;
                auVar2[6] = bVar36;
                auVar2[7] = bVar37;
                auVar2[8] = bVar38;
                auVar2[9] = bVar39;
                auVar2[10] = bVar40;
                auVar2[0xb] = bVar41;
                auVar2[0xc] = bVar42;
                auVar2[0xd] = bVar43;
                auVar2[0xe] = bVar44;
                auVar2[0xf] = bVar45;
                auVar46 = NEON_ext(auVar1,auVar2,8,1);
                pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                           CONCAT16(bVar36 | auVar46[6],
                                                    CONCAT15(bVar35 | auVar46[5],
                                                             CONCAT14(bVar34 | auVar46[4],
                                                                      CONCAT13(bVar33 | auVar46[3],
                                                                               CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
                goto joined_r0x000100e26620;
              }
              if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
              lVar15 = *(long *)(pbVar29 + 8);
              uVar13 = *(ulong *)(pbVar29 + 0x10);
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
              unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
              unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
              unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
              unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
              unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
              unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
              unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
              unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
              goto SUB_100e25fcc;
            }
            if (bVar30 == 3) {
              if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
              goto code_r0x000100e266ec;
              pbVar17 = *(byte **)(pbVar29 + 0x10);
              pbVar26 = *(byte **)(pbVar29 + 0x20);
              if (pbVar27 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
              }
              else {
                if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
                pbVar16 = *(byte **)(pbVar29 + 8);
                pbVar12 = pbVar10;
                pbVar14 = pbVar27;
                if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
                if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
              }
              else {
                if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
                if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
                goto code_r0x000100e26708;
                func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
                pbVar29 = pbVar28;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                  uVar13 = 0;
code_r0x000100e266f0:
                  auVar47._8_8_ = pbVar29;
                  auVar47._0_8_ = uVar13;
                  return auVar47;
                }
              }
            }
            else {
              if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
                 (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
                 pbVar17 = *(byte **)(pbVar29 + 0x18),
                 pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
              goto code_r0x000107c605b8;
            }
          }
code_r0x000100e26708:
          uVar13 = 1;
          goto code_r0x000100e266f0;
        }
      }
      else if (lVar22 == 1) goto SUB_100e25fcc;
    }
    else if (lVar18 == 2) {
      if (lVar22 == 2) goto SUB_100e25fcc;
    }
    else if (lVar18 == 3) {
      if (lVar22 == 3) goto SUB_100e25fcc;
    }
    else if (lVar22 == 4) goto SUB_100e25fcc;
  }
  else if (lVar22 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 10353f368; end: 10353f407;  */

/* WARNING: Possible PIC construction at 0x00010353f3b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353f3c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353f3b8) */
/* WARNING: Removing unreachable block (ram,0x00010353f3c8) */

void FUN_10353f368(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77550 != -1) {
    func_0x000107c61568(0x112f77550,FUN_10353f218);
  }
  uVar5 = uRam0000000113808278;
  uVar4 = uRam0000000113808270;
  uVar3 = uRam0000000113808268;
  uVar2 = uRam0000000113808260;
  uVar1 = uRam0000000113808258;
  *param_1 = uRam0000000113808250;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10353f408; end: 10353f41b;  */

void FUN_10353f408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f779a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f779a8,&UNK_10dbd97c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10353f41c; end: 10353f453;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10353f41c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103543b70();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 10353f454; end: 10353f483;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10353f454(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar22 = *param_1;
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  lVar18 = *param_2;
  lVar15 = param_2[2];
  uVar13 = param_2[3];
  if ((char)param_2[1] == '\x01') {
    if (lVar18 < 2) {
      if (lVar18 == 0) {
        if (lVar22 == 0) {
SUB_100e25fcc:
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar5 = (uint)((ulong)pbVar27 >> 0x20);
          uVar19 = uVar5 >> 0x1e;
          uVar6 = (uint)(uVar13 >> 0x20);
          uVar23 = uVar6 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar29 = pbVar27;
          if ((ulong)pbVar27 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
                (uVar13 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            plVar9 = (long *)0x1;
          }
          else if (uVar5 >> 0x1e < 2) {
            if (uVar19 == 0) {
              uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar7)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
              if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar7)();
              }
              goto code_r0x000100e2608c;
            }
            plVar9 = (long *)(ulong)(uVar21 == 0);
          }
          else {
            if (uVar19 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar7)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
              if (uVar21 == uVar24) goto code_r0x000100e26094;
            }
            else {
              iVar20 = (int)((ulong)lVar15 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar7)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
                if ((long)uVar21 < 1) goto code_r0x000100e26128;
                if (uVar19 < 2) {
                  if (uVar19 == 0) {
                    *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                    *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                    *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                    *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                    *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                    *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                    *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                    *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                    *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                    *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                    *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                    *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                    pbVar29 = (byte *)((long)register0x00000008 +
                                      (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                        (undefined1 *)((long)register0x00000008 + -0x70));
                    plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar7)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar27;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar29 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar7)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar29) {
                        pbVar29 = unaff_x23;
                      }
                      pbVar29 = pbVar29 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if (uVar19 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                    goto code_r0x000100e26260;
                  }
                  lVar18 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar29 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar7)();
                    }
                    pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                  }
                  unaff_x23 = unaff_x24 + -lVar18;
                  if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar7)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar27;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar29 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29
                                    ,lVar15,uVar13);
                plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = uVar13;
                goto code_r0x000100e262b0;
              }
            }
            plVar9 = (long *)0x0;
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            auVar46._8_8_ = pbVar29;
            auVar46._0_8_ = plVar9;
            return auVar46;
          }
          func_0x000107c60e78();
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar12 = (byte *)*plVar9;
          pbVar10 = (byte *)plVar9[1];
          pbVar25 = (byte *)plVar9[3];
          bVar30 = *(byte *)(plVar9 + 5);
          pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                            (ulong)*(byte *)(plVar9 + 2));
          pbVar14 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar29[0x28] == 0) {
                pbVar29 = *(byte **)pbVar29;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,pbVar29,uVar11);
                uVar13 = (ulong)((uint)pbVar12 & 1);
                goto code_r0x000100e266f0;
              }
              goto code_r0x000100e266ec;
            }
            if (bVar30 != 1) {
              if (pbVar29[0x28] == 2) {
                pbVar16 = *(byte **)pbVar29;
                pbVar17 = *(byte **)(pbVar29 + 8);
                pbVar26 = *(byte **)(pbVar29 + 0x18);
                if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
                if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                  if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (pbVar26 != (byte *)0x0) {
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(pbVar26);
                    func_0x000107c61174();
                    pbVar10 = pbVar25;
                    pbVar29 = pbVar26;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(pbVar26);
                    pbVar25 = pbVar10;
                    goto joined_r0x000100e266a4;
                  }
                }
              }
              goto code_r0x000100e266ec;
            }
            if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)(pbVar29 + 8);
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            pbVar12 = pbVar10;
            pbVar14 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
              )(pbVar12,pbVar14,pbVar16,pbVar17,0);
              auVar48._8_8_ = pbVar14;
              auVar48._0_8_ = pbVar12;
              return auVar48;
            }
          }
          else {
            pbVar28 = (byte *)plVar9[4];
            if (4 < bVar30) {
              if (bVar30 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                  if (pbVar29[0x28] == 6) {
                    lVar18 = *(long *)(pbVar29 + 0x20);
                    lVar15 = *(long *)(pbVar29 + 0x18);
                    bVar30 = pbVar29[8] | (byte)lVar15;
                    bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                    bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                    bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                    bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                    bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                    bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                    bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                    bVar38 = pbVar29[0x10] | (byte)lVar18;
                    bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                    bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                    bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                    bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                    bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                    bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                    bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
                    auVar3[1] = bVar31;
                    auVar3[0] = bVar30;
                    auVar3[2] = bVar32;
                    auVar3[3] = bVar33;
                    auVar3[4] = bVar34;
                    auVar3[5] = bVar35;
                    auVar3[6] = bVar36;
                    auVar3[7] = bVar37;
                    auVar3[8] = bVar38;
                    auVar3[9] = bVar39;
                    auVar3[10] = bVar40;
                    auVar3[0xb] = bVar41;
                    auVar3[0xc] = bVar42;
                    auVar3[0xd] = bVar43;
                    auVar3[0xe] = bVar44;
                    auVar3[0xf] = bVar45;
                    auVar4[1] = bVar31;
                    auVar4[0] = bVar30;
                    auVar4[2] = bVar32;
                    auVar4[3] = bVar33;
                    auVar4[4] = bVar34;
                    auVar4[5] = bVar35;
                    auVar4[6] = bVar36;
                    auVar4[7] = bVar37;
                    auVar4[8] = bVar38;
                    auVar4[9] = bVar39;
                    auVar4[10] = bVar40;
                    auVar4[0xb] = bVar41;
                    auVar4[0xc] = bVar42;
                    auVar4[0xd] = bVar43;
                    auVar4[0xe] = bVar44;
                    auVar4[0xf] = bVar45;
                    auVar46 = NEON_ext(auVar3,auVar4,8,1);
                    if (CONCAT17(bVar37 | auVar46[7],
                                 CONCAT16(bVar36 | auVar46[6],
                                          CONCAT15(bVar35 | auVar46[5],
                                                   CONCAT14(bVar34 | auVar46[4],
                                                            CONCAT13(bVar33 | auVar46[3],
                                                                     CONCAT12(bVar32 | auVar46[2],
                                                                              CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                        *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                  }
                  goto code_r0x000100e266ec;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0)) {
                  if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
                }
                else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
                lVar18 = *(long *)(pbVar29 + 0x20);
                lVar15 = *(long *)(pbVar29 + 0x18);
                bVar30 = pbVar29[8] | (byte)lVar15;
                bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                bVar38 = pbVar29[0x10] | (byte)lVar18;
                bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
                auVar1[1] = bVar31;
                auVar1[0] = bVar30;
                auVar1[2] = bVar32;
                auVar1[3] = bVar33;
                auVar1[4] = bVar34;
                auVar1[5] = bVar35;
                auVar1[6] = bVar36;
                auVar1[7] = bVar37;
                auVar1[8] = bVar38;
                auVar1[9] = bVar39;
                auVar1[10] = bVar40;
                auVar1[0xb] = bVar41;
                auVar1[0xc] = bVar42;
                auVar1[0xd] = bVar43;
                auVar1[0xe] = bVar44;
                auVar1[0xf] = bVar45;
                auVar2[1] = bVar31;
                auVar2[0] = bVar30;
                auVar2[2] = bVar32;
                auVar2[3] = bVar33;
                auVar2[4] = bVar34;
                auVar2[5] = bVar35;
                auVar2[6] = bVar36;
                auVar2[7] = bVar37;
                auVar2[8] = bVar38;
                auVar2[9] = bVar39;
                auVar2[10] = bVar40;
                auVar2[0xb] = bVar41;
                auVar2[0xc] = bVar42;
                auVar2[0xd] = bVar43;
                auVar2[0xe] = bVar44;
                auVar2[0xf] = bVar45;
                auVar46 = NEON_ext(auVar1,auVar2,8,1);
                pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                           CONCAT16(bVar36 | auVar46[6],
                                                    CONCAT15(bVar35 | auVar46[5],
                                                             CONCAT14(bVar34 | auVar46[4],
                                                                      CONCAT13(bVar33 | auVar46[3],
                                                                               CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
                goto joined_r0x000100e26620;
              }
              if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
              lVar15 = *(long *)(pbVar29 + 8);
              uVar13 = *(ulong *)(pbVar29 + 0x10);
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
              unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
              unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
              unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
              unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
              unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
              unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
              unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
              unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
              goto SUB_100e25fcc;
            }
            if (bVar30 == 3) {
              if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
              goto code_r0x000100e266ec;
              pbVar17 = *(byte **)(pbVar29 + 0x10);
              pbVar26 = *(byte **)(pbVar29 + 0x20);
              if (pbVar27 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
              }
              else {
                if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
                pbVar16 = *(byte **)(pbVar29 + 8);
                pbVar12 = pbVar10;
                pbVar14 = pbVar27;
                if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
                if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
              }
              else {
                if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
                if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
                goto code_r0x000100e26708;
                func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
                pbVar29 = pbVar28;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                  uVar13 = 0;
code_r0x000100e266f0:
                  auVar47._8_8_ = pbVar29;
                  auVar47._0_8_ = uVar13;
                  return auVar47;
                }
              }
            }
            else {
              if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
                 (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
                 pbVar17 = *(byte **)(pbVar29 + 0x18),
                 pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
              goto code_r0x000107c605b8;
            }
          }
code_r0x000100e26708:
          uVar13 = 1;
          goto code_r0x000100e266f0;
        }
      }
      else if (lVar22 == 1) goto SUB_100e25fcc;
    }
    else if (lVar18 == 2) {
      if (lVar22 == 2) goto SUB_100e25fcc;
    }
    else if (lVar18 == 3) {
      if (lVar22 == 3) goto SUB_100e25fcc;
    }
    else if (lVar22 == 4) goto SUB_100e25fcc;
  }
  else if (lVar22 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 10353f484; end: 10353f4cb;  */

void FUN_10353f484(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9980,0x4f,2);
  uRam0000000113808288 = uStack_38;
  uRam0000000113808280 = uStack_40;
  uRam0000000113808298 = uStack_28;
  uRam0000000113808290 = uStack_30;
  uRam00000001138082a8 = uStack_18;
  uRam00000001138082a0 = uStack_20;
  return;
}



/* Entry: 10353f4cc; end: 10353f56b;  */

/* WARNING: Possible PIC construction at 0x00010353f518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353f528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353f51c) */
/* WARNING: Removing unreachable block (ram,0x00010353f52c) */

void FUN_10353f4cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77568 != -1) {
    func_0x000107c61568(0x112f77568,FUN_10353f484);
  }
  uVar5 = uRam00000001138082a8;
  uVar4 = uRam00000001138082a0;
  uVar3 = uRam0000000113808298;
  uVar2 = uRam0000000113808290;
  uVar1 = uRam0000000113808288;
  *param_1 = uRam0000000113808280;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10353f56c; end: 10353f5b3;  */

void FUN_10353f56c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d90d0a8,7,2);
  uRam00000001138082b8 = uStack_38;
  uRam00000001138082b0 = uStack_40;
  uRam00000001138082c8 = uStack_28;
  uRam00000001138082c0 = uStack_30;
  uRam00000001138082d8 = uStack_18;
  uRam00000001138082d0 = uStack_20;
  return;
}



/* Entry: 10353f5b4; end: 10353f5eb;  */

undefined1  [16] FUN_10353f5b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155610;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 10353f5ec; end: 10353f653;  */

void FUN_10353f5ec(void)

{
  FUN_103540590();
  return;
}



/* Entry: 10353f654; end: 10353f68b;  */

uint FUN_10353f654(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103545e5c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10353f68c; end: 10353f6bf;  */

uint FUN_10353f68c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000103541e20(uVar1,*(undefined1 *)(unaff_x20 + 1),unaff_x20[2],unaff_x20[3],*param_1,
                      *(undefined1 *)(param_1 + 1),param_1[2],param_1[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 10353f6c0; end: 10353f75f;  */

/* WARNING: Possible PIC construction at 0x00010353f70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353f71c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353f710) */
/* WARNING: Removing unreachable block (ram,0x00010353f720) */

void FUN_10353f6c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77570 != -1) {
    func_0x000107c61568(0x112f77570,FUN_10353f56c);
  }
  uVar5 = uRam00000001138082d8;
  uVar4 = uRam00000001138082d0;
  uVar3 = uRam00000001138082c8;
  uVar2 = uRam00000001138082c0;
  uVar1 = uRam00000001138082b8;
  *param_1 = uRam00000001138082b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10353f760; end: 10353f773;  */

void FUN_10353f760(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77998;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77998,&UNK_10dbd97c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10353f774; end: 10353f7ab;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10353f774(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103543c6c();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 10353f7ac; end: 10353f827;  */

uint FUN_10353f7ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000103541e20(uVar1,*(undefined1 *)(param_1 + 1),param_1[2],param_1[3],*param_2,
                      *(undefined1 *)(param_2 + 1),param_2[2],param_2[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 10353f828; end: 10353f8c7;  */

/* WARNING: Possible PIC construction at 0x00010353f874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353f884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353f878) */
/* WARNING: Removing unreachable block (ram,0x00010353f888) */

void FUN_10353f828(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77588 != -1) {
    func_0x000107c61568(0x112f77588,0x10353f7e0);
  }
  uVar5 = uRam0000000113808308;
  uVar4 = uRam0000000113808300;
  uVar3 = uRam00000001138082f8;
  uVar2 = uRam00000001138082f0;
  uVar1 = uRam00000001138082e8;
  *param_1 = uRam00000001138082e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10353f8c8; end: 10353f90f;  */

void FUN_10353f8c8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9939,0xd,2);
  uRam0000000113808318 = uStack_38;
  uRam0000000113808310 = uStack_40;
  uRam0000000113808328 = uStack_28;
  uRam0000000113808320 = uStack_30;
  uRam0000000113808338 = uStack_18;
  uRam0000000113808330 = uStack_20;
  return;
}



/* Entry: 10353f910; end: 10353f947;  */

undefined1  [16] FUN_10353f910(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155640;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 10353f948; end: 10353f9af;  */

void FUN_10353f948(void)

{
  FUN_10353fcec();
  return;
}



/* Entry: 10353f9b0; end: 10353f9e7;  */

uint FUN_10353f9b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103545e1c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10353f9e8; end: 10353fa87;  */

/* WARNING: Possible PIC construction at 0x00010353fa34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353fa44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353fa38) */
/* WARNING: Removing unreachable block (ram,0x00010353fa48) */

void FUN_10353f9e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77590 != -1) {
    func_0x000107c61568(0x112f77590,FUN_10353f8c8);
  }
  uVar5 = uRam0000000113808338;
  uVar4 = uRam0000000113808330;
  uVar3 = uRam0000000113808328;
  uVar2 = uRam0000000113808320;
  uVar1 = uRam0000000113808318;
  *param_1 = uRam0000000113808310;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10353fa88; end: 10353fa9b;  */

void FUN_10353fa88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77988;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77988,&UNK_10dbd97b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10353fa9c; end: 10353fad3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10353fa9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103543d68();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 10353fad4; end: 10353fb1b;  */

void FUN_10353fad4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9910,0x28,2);
  uRam0000000113808348 = uStack_38;
  uRam0000000113808340 = uStack_40;
  uRam0000000113808358 = uStack_28;
  uRam0000000113808350 = uStack_30;
  uRam0000000113808368 = uStack_18;
  uRam0000000113808360 = uStack_20;
  return;
}



/* Entry: 10353fb1c; end: 10353fbbb;  */

/* WARNING: Possible PIC construction at 0x00010353fb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353fb78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353fb6c) */
/* WARNING: Removing unreachable block (ram,0x00010353fb7c) */

void FUN_10353fb1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f775b0 != -1) {
    func_0x000107c61568(0x112f775b0,FUN_10353fad4);
  }
  uVar5 = uRam0000000113808368;
  uVar4 = uRam0000000113808360;
  uVar3 = uRam0000000113808358;
  uVar2 = uRam0000000113808350;
  uVar1 = uRam0000000113808348;
  *param_1 = uRam0000000113808340;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10353fbbc; end: 10353fc03;  */

void FUN_10353fbbc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd98e0,0x2b,2);
  uRam0000000113808378 = uStack_38;
  uRam0000000113808370 = uStack_40;
  uRam0000000113808388 = uStack_28;
  uRam0000000113808380 = uStack_30;
  uRam0000000113808398 = uStack_18;
  uRam0000000113808390 = uStack_20;
  return;
}



/* Entry: 10353fc04; end: 10353fca3;  */

/* WARNING: Possible PIC construction at 0x00010353fc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353fc60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010353fc54) */
/* WARNING: Removing unreachable block (ram,0x00010353fc64) */

void FUN_10353fc04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f775b8 != -1) {
    func_0x000107c61568(0x112f775b8,FUN_10353fbbc);
  }
  uVar5 = uRam0000000113808398;
  uVar4 = uRam0000000113808390;
  uVar3 = uRam0000000113808388;
  uVar2 = uRam0000000113808380;
  uVar1 = uRam0000000113808378;
  *param_1 = uRam0000000113808370;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10353fca4; end: 10353fceb;  */

void FUN_10353fca4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd98c0,0x15,2);
  uRam00000001138083a8 = uStack_38;
  uRam00000001138083a0 = uStack_40;
  uRam00000001138083b8 = uStack_28;
  uRam00000001138083b0 = uStack_30;
  uRam00000001138083c8 = uStack_18;
  uRam00000001138083c0 = uStack_20;
  return;
}



/* Entry: 10353fcec; end: 10353fde3;  */

void FUN_10353fcec(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  code *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        (*param_4)();
LAB_10353fd84:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        (*param_6)();
        goto LAB_10353fd84;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10353fde4; end: 10353fedb;  */

void FUN_10353fde4(undefined1 *param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_70;
  undefined1 uStack_68;
  
  plVar2 = &lStack_70;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_68 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_70 = *unaff_x20;
    (*param_4)();
    (*pcVar3)(&lStack_70,1,param_5,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_68 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_70 = unaff_x20[2];
    (*param_6)();
    (*pcVar3)(&lStack_70,2,param_7,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  return;
}



/* Entry: 10353fedc; end: 10353ff13;  */

undefined1  [16] FUN_10353fedc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155670;
  auVar1._0_8_ = 0xd000000000000033;
  return auVar1;
}



/* Entry: 10353ff14; end: 10353ff7b;  */

void FUN_10353ff14(void)

{
  FUN_10353fcec();
  return;
}



/* Entry: 10353ff7c; end: 10353ffb3;  */

uint FUN_10353ff7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103545ddc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10353ffb4; end: 103540053;  */

/* WARNING: Possible PIC construction at 0x000103540000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103540010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103540004) */
/* WARNING: Removing unreachable block (ram,0x000103540014) */

void FUN_10353ffb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f775c0 != -1) {
    func_0x000107c61568(0x112f775c0,FUN_10353fca4);
  }
  uVar5 = uRam00000001138083c8;
  uVar4 = uRam00000001138083c0;
  uVar3 = uRam00000001138083b8;
  uVar2 = uRam00000001138083b0;
  uVar1 = uRam00000001138083a8;
  *param_1 = uRam00000001138083a0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103540054; end: 103540067;  */

void FUN_103540054(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77978;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77978,&UNK_10dbd97b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103540068; end: 10354009b;  */

void FUN_103540068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10354009c; end: 1035401cf;  */

void FUN_10354009c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined1 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035401d0; end: 103540217;  */

void FUN_1035401d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd98a0,0x1d,2);
  uRam00000001138083d8 = uStack_38;
  uRam00000001138083d0 = uStack_40;
  uRam00000001138083e8 = uStack_28;
  uRam00000001138083e0 = uStack_30;
  uRam00000001138083f8 = uStack_18;
  uRam00000001138083f0 = uStack_20;
  return;
}



/* Entry: 103540218; end: 1035402b7;  */

/* WARNING: Possible PIC construction at 0x000103540264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103540274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103540268) */
/* WARNING: Removing unreachable block (ram,0x000103540278) */

void FUN_103540218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f775e0 != -1) {
    func_0x000107c61568(0x112f775e0,FUN_1035401d0);
  }
  uVar5 = uRam00000001138083f8;
  uVar4 = uRam00000001138083f0;
  uVar3 = uRam00000001138083e8;
  uVar2 = uRam00000001138083e0;
  uVar1 = uRam00000001138083d8;
  *param_1 = uRam00000001138083d0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1035402b8; end: 1035402ff;  */

void FUN_1035402b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9860,0x3c,2);
  uRam0000000113808408 = uStack_38;
  uRam0000000113808400 = uStack_40;
  uRam0000000113808418 = uStack_28;
  uRam0000000113808410 = uStack_30;
  uRam0000000113808428 = uStack_18;
  uRam0000000113808420 = uStack_20;
  return;
}



/* Entry: 103540300; end: 10354039f;  */

/* WARNING: Possible PIC construction at 0x00010354034c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010354035c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103540350) */
/* WARNING: Removing unreachable block (ram,0x000103540360) */

void FUN_103540300(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f775e8 != -1) {
    func_0x000107c61568(0x112f775e8,FUN_1035402b8);
  }
  uVar5 = uRam0000000113808428;
  uVar4 = uRam0000000113808420;
  uVar3 = uRam0000000113808418;
  uVar2 = uRam0000000113808410;
  uVar1 = uRam0000000113808408;
  *param_1 = uRam0000000113808400;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1035403a0; end: 1035403eb;  */

void FUN_1035403a0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113808438 = uStack_38;
  uRam0000000113808430 = uStack_40;
  uRam0000000113808448 = uStack_28;
  uRam0000000113808440 = uStack_30;
  uRam0000000113808458 = uStack_18;
  uRam0000000113808450 = uStack_20;
  return;
}



/* Entry: 1035403ec; end: 103540423;  */

undefined1  [16] FUN_1035403ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1556b0;
  auVar1._0_8_ = 0xd000000000000026;
  return auVar1;
}



/* Entry: 103540424; end: 10354045b;  */

uint FUN_103540424(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103545d9c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 10354045c; end: 1035404fb;  */

/* WARNING: Possible PIC construction at 0x0001035404a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035404b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035404ac) */
/* WARNING: Removing unreachable block (ram,0x0001035404bc) */

void FUN_10354045c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f775f0 != -1) {
    func_0x000107c61568(0x112f775f0,FUN_1035403a0);
  }
  uVar5 = uRam0000000113808458;
  uVar4 = uRam0000000113808450;
  uVar3 = uRam0000000113808448;
  uVar2 = uRam0000000113808440;
  uVar1 = uRam0000000113808438;
  *param_1 = uRam0000000113808430;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1035404fc; end: 10354050f;  */

void FUN_1035404fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77968;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77968,&UNK_10dbd97a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103540510; end: 103540547;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103540510(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103543f60();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103540548; end: 10354058f;  */

void FUN_103540548(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd984b,10,2);
  uRam0000000113808468 = uStack_38;
  uRam0000000113808460 = uStack_40;
  uRam0000000113808478 = uStack_28;
  uRam0000000113808470 = uStack_30;
  uRam0000000113808488 = uStack_18;
  uRam0000000113808480 = uStack_20;
  return;
}



/* Entry: 103540590; end: 10354063f;  */

void FUN_103540590(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      pcVar4 = *(code **)(param_3 + 0x180);
      (*param_4)();
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103540640; end: 1035406e3;  */

void FUN_103540640(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,code *param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  long lStack_60;
  undefined1 uStack_58;
  
  if (param_2 != 0) {
    pcVar2 = *(code **)(param_7 + 0x80);
    uVar1 = param_1;
    lStack_60 = param_2;
    uStack_58 = param_3;
    (*param_8)();
    (*pcVar2)(&lStack_60,1,param_9,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1035406e4; end: 10354071b;  */

undefined1  [16] FUN_1035406e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1556e0;
  auVar1._0_8_ = 0xd00000000000002f;
  return auVar1;
}



/* Entry: 10354071c; end: 103540783;  */

void FUN_10354071c(void)

{
  FUN_103540590();
  return;
}



/* Entry: 103540784; end: 1035407bb;  */

uint FUN_103540784(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103545d5c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1035407bc; end: 10354085b;  */

/* WARNING: Possible PIC construction at 0x000103540808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103540818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010354080c) */
/* WARNING: Removing unreachable block (ram,0x00010354081c) */

void FUN_1035407bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77600 != -1) {
    func_0x000107c61568(0x112f77600,FUN_103540548);
  }
  uVar5 = uRam0000000113808488;
  uVar4 = uRam0000000113808480;
  uVar3 = uRam0000000113808478;
  uVar2 = uRam0000000113808470;
  uVar1 = uRam0000000113808468;
  *param_1 = uRam0000000113808460;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10354085c; end: 10354086f;  */

void FUN_10354085c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77958;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77958,&UNK_10dbd97a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103540870; end: 1035408a3;  */

void FUN_103540870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1035408a4; end: 1035409b7;  */

void FUN_1035408a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = *(undefined1 *)(unaff_x20 + 1);
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035409b8; end: 1035409ff;  */

void FUN_1035409b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9810,0x3a,2);
  uRam0000000113808498 = uStack_38;
  uRam0000000113808490 = uStack_40;
  uRam00000001138084a8 = uStack_28;
  uRam00000001138084a0 = uStack_30;
  uRam00000001138084b8 = uStack_18;
  uRam00000001138084b0 = uStack_20;
  return;
}



/* Entry: 103540a00; end: 103540a9f;  */

/* WARNING: Possible PIC construction at 0x000103540a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103540a5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103540a50) */
/* WARNING: Removing unreachable block (ram,0x000103540a60) */

void FUN_103540a00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77618 != -1) {
    func_0x000107c61568(0x112f77618,FUN_1035409b8);
  }
  uVar5 = uRam00000001138084b8;
  uVar4 = uRam00000001138084b0;
  uVar3 = uRam00000001138084a8;
  uVar2 = uRam00000001138084a0;
  uVar1 = uRam0000000113808498;
  *param_1 = uRam0000000113808490;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103540aa0; end: 103540ad7;  */

void FUN_103540aa0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam00000001138084c8 = uStack_38;
  uRam00000001138084c0 = uStack_40;
  uRam00000001138084d8 = uStack_28;
  uRam00000001138084d0 = uStack_30;
  uRam00000001138084e8 = uStack_18;
  uRam00000001138084e0 = uStack_20;
  return;
}



/* Entry: 103540ad8; end: 103540b23;  */

void FUN_103540ad8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 103540b24; end: 103540b5b;  */

undefined1  [16] FUN_103540b24(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155710;
  auVar1._0_8_ = 0xd00000000000002f;
  return auVar1;
}



/* Entry: 103540b5c; end: 103540b93;  */

uint FUN_103540b5c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000103545d1c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103540b94; end: 103540c33;  */

/* WARNING: Possible PIC construction at 0x000103540be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103540bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103540be4) */
/* WARNING: Removing unreachable block (ram,0x000103540bf4) */

void FUN_103540b94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77620 != -1) {
    func_0x000107c61568(0x112f77620,FUN_103540aa0);
  }
  uVar5 = uRam00000001138084e8;
  uVar4 = uRam00000001138084e0;
  uVar3 = uRam00000001138084d8;
  uVar2 = uRam00000001138084d0;
  uVar1 = uRam00000001138084c8;
  *param_1 = uRam00000001138084c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103540c34; end: 103540c47;  */

void FUN_103540c34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77948;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77948,&UNK_10dbd9798);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103540c48; end: 103540c7b;  */

void FUN_103540c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103540c7c; end: 103540d6f;  */

void FUN_103540c7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103540d70; end: 103540db7;  */

void FUN_103540d70(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd9800,10,2);
  uRam00000001138084f8 = uStack_38;
  uRam00000001138084f0 = uStack_40;
  uRam0000000113808508 = uStack_28;
  uRam0000000113808500 = uStack_30;
  uRam0000000113808518 = uStack_18;
  uRam0000000113808510 = uStack_20;
  return;
}



/* Entry: 103540db8; end: 103540e3b;  */

void FUN_103540db8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x138))();
    }
  }
  return;
}



/* Entry: 103540e3c; end: 103540eaf;  */

void FUN_103540e3c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if (((param_2 & 1) == 0) || ((**(code **)(param_6 + 0x68))(1,1,param_5,param_6), unaff_x21 == 0))
  {
    func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 103540eb0; end: 103540efb;  */

void FUN_103540eb0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 103540efc; end: 103540f33;  */

void FUN_103540efc(void)

{
  FUN_103540db8();
  return;
}



/* Entry: 103540f34; end: 103540f6b;  */

uint FUN_103540f34(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_103545cdc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103540f6c; end: 103540f93;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103540f6c(char *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  char *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 != *unaff_x20) {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(unaff_x20 + 8);
  pbVar25 = *(byte **)(unaff_x20 + 0x10);
  lVar24 = *(long *)(param_1 + 8);
  uVar16 = *(ulong *)(param_1 + 0x10);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(char **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (char *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(char **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(char **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103540f94; end: 103541033;  */

/* WARNING: Possible PIC construction at 0x000103540fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103540ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103540fe4) */
/* WARNING: Removing unreachable block (ram,0x000103540ff4) */

void FUN_103540f94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f77630 != -1) {
    func_0x000107c61568(0x112f77630,FUN_103540d70);
  }
  uVar5 = uRam0000000113808518;
  uVar4 = uRam0000000113808510;
  uVar3 = uRam0000000113808508;
  uVar2 = uRam0000000113808500;
  uVar1 = uRam00000001138084f8;
  *param_1 = uRam00000001138084f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103541034; end: 103541047;  */

void FUN_103541034(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f77938;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f77938,&UNK_10dbd9790);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103541048; end: 10354107b;  */

void FUN_103541048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10354107c; end: 10354117f;  */

void FUN_10354107c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = *(undefined8 *)(unaff_x20 + 8);
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103541180; end: 1035411a3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103541180(char *param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 != *param_2) {
    return (byte *)0x0;
  }
  lVar24 = *(long *)(param_2 + 8);
  uVar16 = *(ulong *)(param_2 + 0x10);
  pbVar10 = *(byte **)(param_1 + 8);
  pbVar25 = *(byte **)(param_1 + 0x10);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 1035411a4; end: 1035414e7;  */

uint FUN_1035411a4(long param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined8 uStack_33f;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined8 uStack_29f;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  char cStack_248;
  undefined7 uStack_247;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  char cStack_1f8;
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
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == *(long *)(param_2 + 0x10)) {
    if ((lVar4 != 0) && (param_1 != param_2)) {
      puVar6 = (undefined8 *)(param_1 + 0x20);
      puVar7 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar4 = lVar4 + -1;
        uStack_1a8 = puVar6[9];
        uStack_1b0 = puVar6[8];
        uStack_198 = puVar6[0xb];
        lStack_1a0 = puVar6[10];
        uStack_1e8 = puVar6[1];
        uStack_1f0 = *puVar6;
        uStack_1d8 = puVar6[3];
        uStack_1e0 = puVar6[2];
        uStack_1c8 = puVar6[5];
        uStack_1d0 = puVar6[4];
        uStack_1b8 = puVar6[7];
        uStack_1c0 = puVar6[6];
        uStack_328 = puVar6[1];
        uStack_330 = *puVar6;
        uStack_318 = puVar6[3];
        uStack_320 = puVar6[2];
        uStack_178 = puVar7[1];
        uStack_180 = *puVar7;
        uStack_168 = puVar7[3];
        uStack_170 = puVar7[2];
        uStack_138 = puVar7[9];
        uStack_140 = puVar7[8];
        uStack_128 = puVar7[0xb];
        lStack_130 = puVar7[10];
        uStack_158 = puVar7[5];
        uStack_160 = puVar7[4];
        uStack_148 = puVar7[7];
        uStack_150 = puVar7[6];
        uStack_2d8 = puVar7[1];
        uStack_2e0 = *puVar7;
        uStack_2c8 = puVar7[3];
        uStack_2d0 = puVar7[2];
        uStack_308 = puVar6[5];
        uStack_310 = puVar6[4];
        uStack_300 = puVar6[6];
        uStack_258 = (undefined1)puVar6[7];
        uStack_24f = (undefined7)*(undefined8 *)((long)puVar6 + 0x41);
        cStack_248 = (char)((ulong)*(undefined8 *)((long)puVar6 + 0x41) >> 0x38);
        uStack_257 = (undefined7)*(undefined8 *)((long)puVar6 + 0x39);
        uStack_250 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x39) >> 0x38);
        uStack_190 = puVar6[0xc];
        uStack_120 = puVar7[0xc];
        uStack_2b8 = puVar7[5];
        uStack_2c0 = puVar7[4];
        uStack_2b0 = puVar7[6];
        uStack_208 = (undefined1)puVar7[7];
        uStack_29f = *(undefined8 *)((long)puVar7 + 0x41);
        uStack_1ff = (undefined7)uStack_29f;
        cStack_1f8 = (char)((ulong)uStack_29f >> 0x38);
        uStack_207 = (undefined7)*(undefined8 *)((long)puVar7 + 0x39);
        uStack_200 = (undefined1)((ulong)*(undefined8 *)((long)puVar7 + 0x39) >> 0x38);
        bVar1 = ((CONCAT71(uStack_1ff,uStack_200) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        uStack_290 = uStack_330;
        uStack_288 = uStack_328;
        uStack_280 = uStack_320;
        uStack_278 = uStack_318;
        uStack_270 = uStack_310;
        uStack_268 = uStack_308;
        uStack_260 = uStack_300;
        uStack_240 = uStack_2e0;
        uStack_238 = uStack_2d8;
        uStack_230 = uStack_2d0;
        uStack_228 = uStack_2c8;
        uStack_220 = uStack_2c0;
        uStack_218 = uStack_2b8;
        uStack_210 = uStack_2b0;
        if ((((CONCAT71(uStack_24f,uStack_250) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
           (cStack_248 != -1)) {
          if (bVar1 && cStack_1f8 == -1) {
LAB_10354143c:
            uStack_2a8 = uStack_208;
            uStack_2f8 = CONCAT71(uStack_257,uStack_258);
            uStack_2e8 = CONCAT71(uStack_247,cStack_248);
            uStack_2f0 = CONCAT71(uStack_24f,uStack_250);
            uStack_2a7 = uStack_207;
            uStack_2a0 = uStack_200;
            FUN_10353a310(&uStack_1f0,&uStack_380,0x112f76ff0,&UNK_10dbd7bd0);
            FUN_10353a310(&uStack_180,&uStack_380,0x112f76ff0,&UNK_10dbd7bd0);
            FUN_103546078(&uStack_330,0x112f77a18,&UNK_10dbd9bf0);
          }
          else {
            uStack_358 = puVar7[5];
            uStack_360 = puVar7[4];
            uStack_350 = puVar7[6];
            uStack_348 = (undefined1)puVar7[7];
            uStack_33f = *(undefined8 *)((long)puVar7 + 0x41);
            uStack_347 = (undefined7)*(undefined8 *)((long)puVar7 + 0x39);
            uStack_340 = (undefined1)((ulong)*(undefined8 *)((long)puVar7 + 0x39) >> 0x38);
            uStack_378 = puVar7[1];
            uStack_380 = *puVar7;
            uStack_368 = puVar7[3];
            uStack_370 = puVar7[2];
            uStack_108 = puVar6[1];
            uStack_110 = *puVar6;
            uStack_f8 = puVar6[3];
            uStack_100 = puVar6[2];
            uStack_e8 = puVar6[5];
            uStack_f0 = puVar6[4];
            uStack_e0 = puVar6[6];
            uStack_cf = *(undefined8 *)((long)puVar6 + 0x41);
            uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x39) >> 0x38);
            uStack_d8 = (undefined1)puVar6[7];
            uStack_d7 = (undefined7)((ulong)puVar6[7] >> 8);
            uStack_c0 = uStack_380;
            uStack_b8 = uStack_378;
            uStack_b0 = uStack_370;
            uStack_a8 = uStack_368;
            uStack_a0 = uStack_360;
            uStack_98 = uStack_358;
            uStack_90 = uStack_350;
            uStack_88 = uStack_348;
            uStack_87 = uStack_347;
            uStack_80 = uStack_340;
            uStack_7f = uStack_33f;
            func_0x00010354610c(&uStack_1f0,&uStack_330);
            func_0x00010354610c(&uStack_180,&uStack_330);
            FUN_10353a310(&uStack_1f0,&uStack_330,0x112f76ff0,&UNK_10dbd7bd0);
            FUN_10353a310(&uStack_180,&uStack_330,0x112f76ff0,&UNK_10dbd7bd0);
            puVar2 = &uStack_110;
            FUN_103541768(puVar2,&uStack_c0);
            FUN_103546078(&uStack_380,0x112f76ff0,&UNK_10dbd7bd0);
            FUN_103546078(&uStack_290,0x112f76ff0,&UNK_10dbd7bd0);
            if (((ulong)puVar2 & 1) != 0) goto LAB_1035413d0;
LAB_103541428:
            func_0x000103546140(&uStack_180);
            func_0x000103546140(&uStack_1f0);
          }
          goto LAB_1035414c0;
        }
        if (!bVar1 || cStack_1f8 != -1) goto LAB_10354143c;
        uStack_358 = puVar6[5];
        uStack_360 = puVar6[4];
        uStack_350 = puVar6[6];
        uStack_348 = (undefined1)puVar6[7];
        uStack_33f = *(undefined8 *)((long)puVar6 + 0x41);
        uStack_347 = (undefined7)*(undefined8 *)((long)puVar6 + 0x39);
        uStack_340 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x39) >> 0x38);
        uStack_378 = puVar6[1];
        uStack_380 = *puVar6;
        uStack_368 = puVar6[3];
        uStack_370 = puVar6[2];
        func_0x00010354610c(&uStack_1f0,&uStack_330);
        func_0x00010354610c(&uStack_180,&uStack_330);
        FUN_10353a310(&uStack_1f0,&uStack_330,0x112f76ff0,&UNK_10dbd7bd0);
        FUN_10353a310(&uStack_180,&uStack_330,0x112f76ff0,&UNK_10dbd7bd0);
        FUN_103546078(&uStack_380,0x112f76ff0,&UNK_10dbd7bd0);
LAB_1035413d0:
        if (lStack_1a0 != lStack_130) goto LAB_103541428;
        uVar3 = uStack_198;
        func_0x000100e25fcc(uStack_198,uStack_190,uStack_128,uStack_120);
        uVar5 = (uint)uVar3;
        func_0x000103546140(&uStack_180);
        func_0x000103546140(&uStack_1f0);
        if (((uVar3 & 1) == 0) || (lVar4 == 0)) goto LAB_1035414c4;
        puVar6 = puVar6 + 0xd;
        puVar7 = puVar7 + 0xd;
      } while( true );
    }
    uVar5 = 1;
  }
  else {
LAB_1035414c0:
    uVar5 = 0;
  }
LAB_1035414c4:
  return uVar5 & 1;
}



/* Entry: 1035414e8; end: 10354164f;  */

/* WARNING: Possible PIC construction at 0x00010354158c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103541590) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035414e8(byte *param_1,byte *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (((*param_1 ^ *param_2) & 1) == 0) {
    if (param_2[0x10] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010354153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dbd7b99)[*(long *)(param_2 + 8)] * 4 + 0x103541540))();
      return param_1;
    }
    if ((*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) &&
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) {
      pbVar12 = *(byte **)(param_1 + 0x18);
      pbVar15 = *(byte **)(param_1 + 0x20);
      pbVar16 = *(byte **)(param_2 + 0x18);
      pbVar13 = *(byte **)(param_2 + 0x20);
      if ((pbVar12 != pbVar16) || (pbVar15 != pbVar13)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar12,pbVar15,pbVar16,pbVar13,0);
        return pbVar12;
      }
      if (*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28)) {
        uVar18 = *(ulong *)(param_1 + 0x30);
        func_0x00010142cfc4(uVar18,*(undefined8 *)(param_2 + 0x30));
        if ((uVar18 & 1) != 0) {
          pbVar10 = *(byte **)(param_1 + 0x38);
          pbVar25 = *(byte **)(param_1 + 0x40);
          lVar24 = *(long *)(param_2 + 0x38);
          uVar18 = *(ulong *)(param_2 + 0x40);
          puVar7 = (undefined1 *)register0x00000008;
          do {
            *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
            *(byte **)(puVar7 + -0x48) = unaff_x25;
            *(byte **)(puVar7 + -0x40) = unaff_x24;
            *(byte **)(puVar7 + -0x38) = unaff_x23;
            *(ulong *)(puVar7 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
            *(ulong *)(puVar7 + -0x20) = unaff_x20;
            *(byte **)(puVar7 + -0x18) = unaff_x19;
            *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
            *(undefined8 *)(puVar7 + -8) = unaff_x30;
            *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar4 = (uint)((ulong)pbVar25 >> 0x20);
            uVar17 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar18 >> 0x20);
            uVar21 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar14 = pbVar25;
            if ((ulong)pbVar25 >> 0x3e == 3) {
              uVar20 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                  (uVar18 >> 0x3e < 3)) ||
                 ((uVar20 = 0, lVar24 != 0 || (uVar18 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar17 == 0) {
                uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
              }
              else {
                iVar19 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar20 = (ulong)(iVar19 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar21 == 0) {
                uVar22 = uVar18 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar19 = (int)((ulong)lVar24 >> 0x20);
              if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar17 == 2) {
                uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar20 = 0;
              if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar21 == 2) {
                uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
                if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar20 < 1) goto code_r0x000100e26128;
                if (uVar17 < 2) {
                  if (uVar17 == 0) {
                    puVar7[-0x70] = (char)pbVar10;
                    puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                    puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                    puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                    puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                    puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                    puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                    puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                    puVar7[-0x68] = (char)pbVar25;
                    puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                    pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                    pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar14 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar14) {
                        pbVar14 = unaff_x23;
                      }
                      pbVar14 = pbVar14 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar14 = (byte *)0x0;
                }
                else {
                  if (uVar17 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar14 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar26 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar14 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
                  }
                  unaff_x23 = unaff_x24 + -lVar26;
                  if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar14 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar14) {
                      pbVar14 = unaff_x23;
                    }
                    pbVar14 = pbVar14 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar18);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar18;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar20 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)(puVar7 + -0xc0) = unaff_x24;
            *(byte **)(puVar7 + -0xb8) = unaff_x23;
            *(ulong *)(puVar7 + -0xb0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
            *(ulong *)(puVar7 + -0xa0) = unaff_x20;
            *(byte **)(puVar7 + -0x98) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
            *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
            pbVar12 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar23 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar15 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar14[0x28] == 0) {
                  lVar24 = *(long *)pbVar14;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar24,uVar11);
                  return (byte *)(ulong)((uint)pbVar12 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar14[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)(pbVar14 + 8);
                pbVar13 = *(byte **)(pbVar14 + 0x10);
                lVar24 = *(long *)pbVar14;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar24,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar15 = pbVar25;
                if ((pbVar10 == pbVar16) && (pbVar25 == pbVar13)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar14[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar13 = *(byte **)(pbVar14 + 8);
                lVar24 = *(long *)(pbVar14 + 0x18);
                if ((pbVar12 == pbVar16) && (pbVar10 == pbVar13)) {
                  if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (lVar24 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar24);
                    func_0x000107c61174();
                    pbVar13 = pbVar23;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar23);
                    func_0x000107c61170(lVar24);
                    pbVar23 = pbVar13;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar24 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar26 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar14[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar13 = *(byte **)(pbVar14 + 8);
                if (((pbVar12 == pbVar16) && (pbVar10 == pbVar13)) &&
                   (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
                   pbVar13 = *(byte **)(pbVar14 + 0x18),
                   pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar14[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar14 + 0x10);
              lVar24 = *(long *)(pbVar14 + 0x20);
              if (pbVar25 == (byte *)0x0) {
                if (pbVar13 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar13 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)(pbVar14 + 8);
                pbVar12 = pbVar10;
                pbVar15 = pbVar25;
                if ((pbVar10 != pbVar16) || (pbVar25 != pbVar13)) goto code_r0x000107c605b8;
              }
              if (lVar26 != 0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar23 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  lVar26 == 0) && pbVar25 == (byte *)0x0) {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar26 = *(long *)(pbVar14 + 0x20);
                lVar24 = *(long *)(pbVar14 + 0x18);
                bVar27 = pbVar14[8] | (byte)lVar24;
                bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
                bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
                bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
                bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
                bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
                bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
                bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
                bVar35 = pbVar14[0x10] | (byte)lVar26;
                bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
                bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
                bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
                bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
                bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
                bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
                bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
                auVar43[1] = bVar28;
                auVar43[0] = bVar27;
                auVar43[2] = bVar29;
                auVar43[3] = bVar30;
                auVar43[4] = bVar31;
                auVar43[5] = bVar32;
                auVar43[6] = bVar33;
                auVar43[7] = bVar34;
                auVar43[8] = bVar35;
                auVar43[9] = bVar36;
                auVar43[10] = bVar37;
                auVar43[0xb] = bVar38;
                auVar43[0xc] = bVar39;
                auVar43[0xd] = bVar40;
                auVar43[0xe] = bVar41;
                auVar43[0xf] = bVar42;
                auVar3[1] = bVar28;
                auVar3[0] = bVar27;
                auVar3[2] = bVar29;
                auVar3[3] = bVar30;
                auVar3[4] = bVar31;
                auVar3[5] = bVar32;
                auVar3[6] = bVar33;
                auVar3[7] = bVar34;
                auVar3[8] = bVar35;
                auVar3[9] = bVar36;
                auVar3[10] = bVar37;
                auVar3[0xb] = bVar38;
                auVar3[0xc] = bVar39;
                auVar3[0xd] = bVar40;
                auVar3[0xe] = bVar41;
                auVar3[0xf] = bVar42;
                auVar43 = NEON_ext(auVar43,auVar3,8,1);
                if (CONCAT17(bVar34 | auVar43[7],
                             CONCAT16(bVar33 | auVar43[6],
                                      CONCAT15(bVar32 | auVar43[5],
                                               CONCAT14(bVar31 | auVar43[4],
                                                        CONCAT13(bVar30 | auVar43[3],
                                                                 CONCAT12(bVar29 | auVar43[2],
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar14 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                  lVar26 == 0)) {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar14 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar14 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar26 = *(long *)(pbVar14 + 0x20);
              lVar24 = *(long *)(pbVar14 + 0x18);
              bVar27 = pbVar14[8] | (byte)lVar24;
              bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar14[0x10] | (byte)lVar26;
              bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
              auVar1[1] = bVar28;
              auVar1[0] = bVar27;
              auVar1[2] = bVar29;
              auVar1[3] = bVar30;
              auVar1[4] = bVar31;
              auVar1[5] = bVar32;
              auVar1[6] = bVar33;
              auVar1[7] = bVar34;
              auVar1[8] = bVar35;
              auVar1[9] = bVar36;
              auVar1[10] = bVar37;
              auVar1[0xb] = bVar38;
              auVar1[0xc] = bVar39;
              auVar1[0xd] = bVar40;
              auVar1[0xe] = bVar41;
              auVar1[0xf] = bVar42;
              auVar2[1] = bVar28;
              auVar2[0] = bVar27;
              auVar2[2] = bVar29;
              auVar2[3] = bVar30;
              auVar2[4] = bVar31;
              auVar2[5] = bVar32;
              auVar2[6] = bVar33;
              auVar2[7] = bVar34;
              auVar2[8] = bVar35;
              auVar2[9] = bVar36;
              auVar2[10] = bVar37;
              auVar2[0xb] = bVar38;
              auVar2[0xc] = bVar39;
              auVar2[0xd] = bVar40;
              auVar2[0xe] = bVar41;
              auVar2[0xf] = bVar42;
              auVar43 = NEON_ext(auVar1,auVar2,8,1);
              lVar24 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar14[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar14 + 8);
            uVar18 = *(ulong *)(pbVar14 + 0x10);
            lVar26 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
            unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
            unaff_x20 = *(ulong *)(puVar7 + -0xa0);
            unaff_x19 = *(byte **)(puVar7 + -0x98);
            unaff_x22 = *(ulong *)(puVar7 + -0xb0);
            unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
            unaff_x24 = *(byte **)(puVar7 + -0xc0);
            unaff_x23 = *(byte **)(puVar7 + -0xb8);
            puVar7 = puVar7 + -0x80;
          } while( true );
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103541650; end: 103541767;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103541748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010354174c) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103541650(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  if (*param_1 == *param_2) {
    lVar19 = *(long *)(param_1 + 2);
    lVar22 = *(long *)(param_2 + 2);
    if (*(char *)(param_2 + 4) == '\x01') {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 1) {
        if (lVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != lVar22) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(param_1 + 6);
    lVar23 = *(long *)(param_2 + 6);
    lVar19 = *(long *)(lVar22 + 0x10);
    if (lVar19 == *(long *)(lVar23 + 0x10)) {
      if (lVar19 != 0 && lVar22 != lVar23) {
        puVar28 = (undefined8 *)(lVar23 + 0x28);
        puVar29 = (undefined8 *)(lVar22 + 0x28);
        do {
          pbVar12 = (byte *)puVar29[-1];
          pbVar14 = (byte *)*puVar29;
          pbVar15 = (byte *)puVar28[-1];
          pbVar17 = (byte *)*puVar28;
          if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
          goto code_r0x000107c605b8;
          puVar28 = puVar28 + 2;
          puVar29 = puVar29 + 2;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
        pbVar10 = *(byte **)(param_1 + 10);
        pbVar27 = *(byte **)(param_1 + 0xc);
        lVar19 = *(long *)(param_2 + 10);
        uVar16 = *(ulong *)(param_2 + 0xc);
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar27 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar24 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar27;
          if ((ulong)pbVar27 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar24 == 0) {
              uVar25 = uVar16 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar24 == 2) {
              uVar25 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar21 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
              if (uVar18 < 2) {
                if (uVar18 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar27;
                  puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar13 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar22;
                if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar26 = *(byte **)(pbVar9 + 0x18);
          bVar30 = pbVar9[0x28];
          pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar30 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar17 = *(byte **)(pbVar13 + 0x10);
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 == pbVar15) && (pbVar27 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              lVar19 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar26 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar26;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar26);
                  func_0x000107c61170(lVar19);
                  pbVar26 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar30 < 5) {
            if (bVar30 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar27, pbVar14 = pbVar26, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar27 == *(byte **)(pbVar13 + 0x10) && pbVar26 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar19 = *(long *)(pbVar13 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar17 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar15) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
                )(pbVar12,pbVar14,pbVar15,pbVar17,0);
                return pbVar12;
              }
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar26 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar26,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar26 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar30 != 5) {
            if ((((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar27 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar30 = pbVar13[8] | (byte)lVar19;
              bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar38 = pbVar13[0x10] | (byte)lVar22;
              bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar46[1] = bVar31;
              auVar46[0] = bVar30;
              auVar46[2] = bVar32;
              auVar46[3] = bVar33;
              auVar46[4] = bVar34;
              auVar46[5] = bVar35;
              auVar46[6] = bVar36;
              auVar46[7] = bVar37;
              auVar46[8] = bVar38;
              auVar46[9] = bVar39;
              auVar46[10] = bVar40;
              auVar46[0xb] = bVar41;
              auVar46[0xc] = bVar42;
              auVar46[0xd] = bVar43;
              auVar46[0xe] = bVar44;
              auVar46[0xf] = bVar45;
              auVar3[1] = bVar31;
              auVar3[0] = bVar30;
              auVar3[2] = bVar32;
              auVar3[3] = bVar33;
              auVar3[4] = bVar34;
              auVar3[5] = bVar35;
              auVar3[6] = bVar36;
              auVar3[7] = bVar37;
              auVar3[8] = bVar38;
              auVar3[9] = bVar39;
              auVar3[10] = bVar40;
              auVar3[0xb] = bVar41;
              auVar3[0xc] = bVar42;
              auVar3[0xd] = bVar43;
              auVar3[0xe] = bVar44;
              auVar3[0xf] = bVar45;
              auVar46 = NEON_ext(auVar46,auVar3,8,1);
              if (CONCAT17(bVar37 | auVar46[7],
                           CONCAT16(bVar36 | auVar46[6],
                                    CONCAT15(bVar35 | auVar46[5],
                                             CONCAT14(bVar34 | auVar46[4],
                                                      CONCAT13(bVar33 | auVar46[3],
                                                               CONCAT12(bVar32 | auVar46[2],
                                                                        CONCAT11(bVar31 | auVar46[1]
                                                                                 ,bVar30 | auVar46[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar26 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar19;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar22;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar31;
            auVar1[0] = bVar30;
            auVar1[2] = bVar32;
            auVar1[3] = bVar33;
            auVar1[4] = bVar34;
            auVar1[5] = bVar35;
            auVar1[6] = bVar36;
            auVar1[7] = bVar37;
            auVar1[8] = bVar38;
            auVar1[9] = bVar39;
            auVar1[10] = bVar40;
            auVar1[0xb] = bVar41;
            auVar1[0xc] = bVar42;
            auVar1[0xd] = bVar43;
            auVar1[0xe] = bVar44;
            auVar1[0xf] = bVar45;
            auVar2[1] = bVar31;
            auVar2[0] = bVar30;
            auVar2[2] = bVar32;
            auVar2[3] = bVar33;
            auVar2[4] = bVar34;
            auVar2[5] = bVar35;
            auVar2[6] = bVar36;
            auVar2[7] = bVar37;
            auVar2[8] = bVar38;
            auVar2[9] = bVar39;
            auVar2[10] = bVar40;
            auVar2[0xb] = bVar41;
            auVar2[0xc] = bVar42;
            auVar2[0xd] = bVar43;
            auVar2[0xe] = bVar44;
            auVar2[0xf] = bVar45;
            auVar46 = NEON_ext(auVar1,auVar2,8,1);
            lVar19 = CONCAT17(bVar37 | auVar46[7],
                              CONCAT16(bVar36 | auVar46[6],
                                       CONCAT15(bVar35 | auVar46[5],
                                                CONCAT14(bVar34 | auVar46[4],
                                                         CONCAT13(bVar33 | auVar46[3],
                                                                  CONCAT12(bVar32 | auVar46[2],
                                                                           CONCAT11(bVar31 | auVar46
                                                  [1],bVar30 | auVar46[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103541768; end: 103541c27;  */

/* WARNING: Possible PIC construction at 0x000103541afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103541bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103541bb8) */
/* WARNING: Removing unreachable block (ram,0x000103541bbc) */
/* WARNING: Removing unreachable block (ram,0x000103541b00) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103541768(long param_1,undefined8 *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 in_ZR;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte **ppbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  long lVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  byte bVar29;
  undefined1 in_b0;
  byte bVar30;
  undefined1 in_register_00005001;
  byte bVar31;
  undefined1 in_register_00005002;
  byte bVar32;
  undefined1 in_register_00005003;
  byte bVar33;
  undefined1 in_register_00005004;
  byte bVar34;
  undefined1 in_register_00005005;
  byte bVar35;
  undefined1 in_register_00005006;
  byte bVar36;
  undefined1 in_register_00005007;
  byte bVar37;
  undefined1 in_register_00005008;
  byte bVar38;
  undefined1 in_register_00005009;
  byte bVar39;
  undefined1 in_register_0000500a;
  byte bVar40;
  undefined1 in_register_0000500b;
  byte bVar41;
  undefined1 in_register_0000500c;
  byte bVar42;
  undefined1 in_register_0000500d;
  byte bVar43;
  undefined1 in_register_0000500e;
  byte bVar44;
  undefined1 in_register_0000500f;
  undefined1 auVar45 [16];
  long in_register_00005028;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  byte *pbStack_70;
  long lStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  byte *pbStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  ulong uStack_18;
  
  puVar28 = &stack0xfffffffffffffff0;
  pbVar11 = (byte *)*param_2;
  pbVar22 = (byte *)param_2[1];
  pbStack_70 = (byte *)param_2[2];
  pbVar9 = (byte *)param_2[3];
  pbVar21 = (byte *)param_2[4];
  pbVar20 = (byte *)param_2[5];
  pbVar23 = (byte *)param_2[6];
  uVar24 = (ulong)((uint)((ulong)param_2[8] >> 0x3c) & 3 | (uint)*(byte *)(param_2 + 9) << 2) & 0xff
  ;
  uVar14 = (ulong)(byte)(&UNK_10dbd7ba3)[uVar24];
  lVar26 = uVar14 * 4 + 0x1035417b8;
  pbStack_60 = pbStack_70;
  pbVar25 = pbStack_70;
  switch(uVar24) {
  case 1:
    uStack_20 = param_2[7];
    uStack_18 = param_2[8] & 0xcfffffffffffffff;
    if (((uint)(*(ulong *)(param_3 + 0x10) >> 0x3c) & 3 | (*(byte *)(param_3 + 0x12) & 0x3f) << 2)
        == 1) {
      pbStack_60 = (byte *)(*(ulong *)(param_3 + 0x10) & 0xcfffffffffffffff);
      lStack_98 = *(long *)(param_3 + 2);
      lStack_a0 = *(long *)param_3;
      lStack_90 = *(long *)(param_3 + 4);
      lStack_88 = *(long *)(param_3 + 6);
      lVar26 = *(long *)(param_3 + 10);
      in_register_00005008 = (undefined1)lVar26;
      in_register_00005009 = (undefined1)((ulong)lVar26 >> 8);
      in_register_0000500a = (undefined1)((ulong)lVar26 >> 0x10);
      in_register_0000500b = (undefined1)((ulong)lVar26 >> 0x18);
      in_register_0000500c = (undefined1)((ulong)lVar26 >> 0x20);
      in_register_0000500d = (undefined1)((ulong)lVar26 >> 0x28);
      in_register_0000500e = (undefined1)((ulong)lVar26 >> 0x30);
      in_register_0000500f = (undefined1)((ulong)lVar26 >> 0x38);
      lVar26 = *(long *)(param_3 + 8);
      in_b0 = (undefined1)lVar26;
      in_register_00005001 = (undefined1)((ulong)lVar26 >> 8);
      in_register_00005002 = (undefined1)((ulong)lVar26 >> 0x10);
      in_register_00005003 = (undefined1)((ulong)lVar26 >> 0x18);
      in_register_00005004 = (undefined1)((ulong)lVar26 >> 0x20);
      in_register_00005005 = (undefined1)((ulong)lVar26 >> 0x28);
      in_register_00005006 = (undefined1)((ulong)lVar26 >> 0x30);
      in_register_00005007 = (undefined1)((ulong)lVar26 >> 0x38);
      param_1 = *(long *)(param_3 + 0xc);
      in_register_00005028 = *(long *)(param_3 + 0xe);
      pbStack_58 = pbVar11;
      pbStack_50 = pbVar22;
      pbStack_48 = pbStack_70;
      pbStack_40 = pbVar9;
      pbStack_38 = pbVar21;
      pbStack_30 = pbVar20;
      pbStack_28 = pbVar23;
      goto code_r0x0001035419b8;
    }
    goto code_r0x000103541c14;
  case 2:
    if (((uint)((ulong)*(long *)(param_3 + 0x10) >> 0x3c) & 3 |
        (*(byte *)(param_3 + 0x12) & 0x3f) << 2) != 2) goto code_r0x000103541c14;
    pbVar20 = *(byte **)param_3;
    lVar26 = *(long *)(param_3 + 4);
    uVar14 = *(ulong *)(param_3 + 6);
    if (*(char *)(param_3 + 2) != '\x01') goto code_r0x000103541af0;
    if ((long)pbVar20 < 4) goto code_r0x000103541b24;
  case 0x8a:
  case 0xb2:
  case 0xea:
    if ((long)pbVar20 < 6) {
      if (pbVar20 == (byte *)0x4) {
code_r0x000103541be8:
        if (pbVar11 == (byte *)0x4) {
code_r0x000103541af8:
          unaff_x30 = 0x103541b00;
          plVar6 = &lStack_a0;
          pbVar11 = pbStack_70;
          pbVar20 = pbVar9;
code_r0x000100e25fcc:
          do {
            *(undefined8 *)((long)plVar6 + -0x50) = unaff_x26;
            *(byte **)((long)plVar6 + -0x48) = unaff_x25;
            *(byte **)((long)plVar6 + -0x40) = unaff_x24;
            *(byte **)((long)plVar6 + -0x38) = unaff_x23;
            *(ulong *)((long)plVar6 + -0x30) = unaff_x22;
            *(undefined8 *)((long)plVar6 + -0x28) = unaff_x21;
            *(ulong *)((long)plVar6 + -0x20) = unaff_x20;
            *(byte **)((long)plVar6 + -0x18) = unaff_x19;
            *(undefined1 **)((long)plVar6 + -0x10) = puVar28;
            *(undefined8 *)((long)plVar6 + -8) = unaff_x30;
            *(undefined8 *)((long)plVar6 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar8 = (uint)((ulong)pbVar20 >> 0x20);
            uVar16 = uVar8 >> 0x1e;
            uVar4 = (uint)(uVar14 >> 0x20);
            uVar18 = uVar4 >> 0x1e;
            iVar7 = (int)pbVar11;
            pbVar22 = pbVar20;
            if ((ulong)pbVar20 >> 0x3e == 3) {
              uVar24 = 0;
              if ((((pbVar11 != (byte *)0x0) || (pbVar20 != (byte *)0xc000000000000000)) ||
                  (uVar14 >> 0x3e < 3)) ||
                 ((uVar24 = 0, lVar26 != 0 || (uVar14 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar8 >> 0x1e < 2) {
              if (uVar16 == 0) {
                uVar24 = (ulong)pbVar20 >> 0x30 & 0xff;
              }
              else {
                iVar17 = (int)((ulong)pbVar11 >> 0x20);
                if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar5)();
                }
                uVar24 = (ulong)(iVar17 - iVar7);
              }
joined_r0x000100e26170:
              if (1 < uVar4 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar18 == 0) {
                uVar19 = uVar14 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar17 = (int)((ulong)lVar26 >> 0x20);
              if (SBORROW4(iVar17,(int)lVar26)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar5)();
              }
              if (uVar24 == (long)(iVar17 - (int)lVar26)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar16 == 2) {
                uVar24 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
                if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar5)();
                }
                goto joined_r0x000100e26170;
              }
              uVar24 = 0;
              if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar18 == 2) {
                uVar19 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
                if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar5)();
                }
code_r0x000100e2608c:
                if (uVar24 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar24 < 1) goto code_r0x000100e26128;
                if (uVar16 < 2) {
                  if (uVar16 == 0) {
                    *(char *)((long)plVar6 + -0x70) = (char)pbVar11;
                    *(char *)((long)plVar6 + -0x6f) = (char)((ulong)pbVar11 >> 8);
                    *(char *)((long)plVar6 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
                    *(char *)((long)plVar6 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
                    *(char *)((long)plVar6 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
                    *(char *)((long)plVar6 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
                    *(char *)((long)plVar6 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
                    *(char *)((long)plVar6 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
                    *(char *)((long)plVar6 + -0x68) = (char)pbVar20;
                    *(char *)((long)plVar6 + -0x67) = (char)((ulong)pbVar20 >> 8);
                    *(char *)((long)plVar6 + -0x66) = (char)((ulong)pbVar20 >> 0x10);
                    *(char *)((long)plVar6 + -0x65) = (char)((ulong)pbVar20 >> 0x18);
                    *(char *)((long)plVar6 + -100) = (char)((ulong)pbVar20 >> 0x20);
                    *(char *)((long)plVar6 + -99) = (char)((ulong)pbVar20 >> 0x28);
                    pbVar22 = (byte *)((long)plVar6 + (((ulong)pbVar20 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc((undefined1 *)((long)plVar6 + -0x71),
                                        (undefined1 *)((long)plVar6 + -0x70));
                    pbVar9 = (byte *)(ulong)*(byte *)((long)plVar6 + -0x71);
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar7;
                  unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar5)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar20;
                  if (pbVar11 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar11 = (byte *)0x0;
                  }
                  else {
                    pbVar22 = pbVar11;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar22)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar5)();
                    }
                    pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar22);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar11;
                    if (pbVar11 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar22) {
                        pbVar22 = unaff_x23;
                      }
                      pbVar22 = pbVar22 + (long)pbVar11;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar22 = (byte *)0x0;
                }
                else {
                  if (uVar16 != 2) {
                    *(undefined8 *)((long)plVar6 + -0x6a) = 0;
                    *(undefined8 *)((long)plVar6 + -0x70) = 0;
                    pbVar22 = (byte *)((long)plVar6 + -0x70);
                    goto code_r0x000100e26260;
                  }
                  lVar27 = *(long *)(pbVar11 + 0x10);
                  unaff_x24 = *(byte **)(pbVar11 + 0x18);
                  func_0x000107c5ec30();
                  pbVar22 = pbVar11;
                  if (pbVar11 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar27,(long)pbVar22)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar5)();
                    }
                    pbVar11 = pbVar11 + (lVar27 - (long)pbVar22);
                  }
                  unaff_x23 = unaff_x24 + -lVar27;
                  if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar5)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar11;
                  unaff_x25 = pbVar20;
                  if (pbVar11 == (byte *)0x0) {
                    pbVar22 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar22) {
                      pbVar22 = unaff_x23;
                    }
                    pbVar22 = pbVar22 + (long)pbVar11;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar20 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)plVar6 + -0x70),pbVar11,pbVar22,lVar26,
                                    uVar14);
                pbVar9 = (byte *)(ulong)*(byte *)((long)plVar6 + -0x70);
                unaff_x22 = uVar14;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar24 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar6 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)((long)plVar6 + -0xc0) = unaff_x24;
            *(byte **)((long)plVar6 + -0xb8) = unaff_x23;
            *(ulong *)((long)plVar6 + -0xb0) = unaff_x22;
            *(undefined8 *)((long)plVar6 + -0xa8) = unaff_x21;
            *(ulong *)((long)plVar6 + -0xa0) = unaff_x20;
            *(byte **)((long)plVar6 + -0x98) = unaff_x19;
            *(undefined1 **)((long)plVar6 + -0x90) = (undefined1 *)((long)plVar6 + -0x10);
            *(undefined **)((long)plVar6 + -0x88) = &UNK_100e26304;
            pbVar21 = *(byte **)pbVar9;
            pbVar11 = *(byte **)(pbVar9 + 8);
            pbVar25 = *(byte **)(pbVar9 + 0x18);
            bVar29 = pbVar9[0x28];
            pbVar20 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar23 = pbVar11;
            if (bVar29 < 3) {
              if (bVar29 == 0) {
                if (pbVar22[0x28] == 0) {
                  lVar26 = *(long *)pbVar22;
                  uVar10 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar21,lVar26,uVar10);
                  return (byte *)(ulong)((uint)pbVar21 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar29 == 1) {
                if (pbVar22[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)(pbVar22 + 8);
                pbVar15 = *(byte **)(pbVar22 + 0x10);
                lVar26 = *(long *)pbVar22;
                uVar10 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar21,lVar26,uVar10);
                if (((ulong)pbVar21 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar21 = pbVar11;
                pbVar23 = pbVar20;
                if ((pbVar11 == pbVar13) && (pbVar20 == pbVar15)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar22[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)pbVar22;
                pbVar15 = *(byte **)(pbVar22 + 8);
                lVar26 = *(long *)(pbVar22 + 0x18);
                if ((pbVar21 == pbVar13) && (pbVar11 == pbVar15)) {
                  if (((pbVar9[0x10] ^ pbVar22[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (lVar26 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar26);
                  func_0x000107c61174();
                  pbVar11 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar26);
                  pbVar25 = pbVar11;
joined_r0x000100e266a4:
                  if (((ulong)pbVar25 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  return (byte *)0x1;
                }
              }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
              )(pbVar21,pbVar23,pbVar13,pbVar15,0);
              return pbVar21;
            }
            lVar27 = *(long *)(pbVar9 + 0x20);
            if (bVar29 < 5) {
              if (bVar29 != 3) {
                if (pbVar22[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)pbVar22;
                pbVar15 = *(byte **)(pbVar22 + 8);
                if (((pbVar21 == pbVar13) && (pbVar11 == pbVar15)) &&
                   (pbVar21 = pbVar20, pbVar23 = pbVar25, pbVar13 = *(byte **)(pbVar22 + 0x10),
                   pbVar15 = *(byte **)(pbVar22 + 0x18),
                   pbVar20 == *(byte **)(pbVar22 + 0x10) && pbVar25 == *(byte **)(pbVar22 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar22[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar22 != ((uint)pbVar21 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar22 + 0x10);
              lVar26 = *(long *)(pbVar22 + 0x20);
              if (pbVar20 == (byte *)0x0) {
                if (pbVar15 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar15 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)(pbVar22 + 8);
                pbVar21 = pbVar11;
                pbVar23 = pbVar20;
                if ((pbVar11 != pbVar13) || (pbVar20 != pbVar15)) goto code_r0x000107c605b8;
              }
              if (lVar27 != 0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar25 == *(byte **)(pbVar22 + 0x18)) && (lVar27 == lVar26)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar25,lVar27,*(byte **)(pbVar22 + 0x18),lVar26,0);
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar26 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if (bVar29 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar21 == (byte *)0x0) &&
                  lVar27 == 0) && pbVar20 == (byte *)0x0) {
                if (pbVar22[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar27 = *(long *)(pbVar22 + 0x20);
                lVar26 = *(long *)(pbVar22 + 0x18);
                bVar29 = pbVar22[8] | (byte)lVar26;
                bVar30 = pbVar22[9] | (byte)((ulong)lVar26 >> 8);
                bVar31 = pbVar22[10] | (byte)((ulong)lVar26 >> 0x10);
                bVar32 = pbVar22[0xb] | (byte)((ulong)lVar26 >> 0x18);
                bVar33 = pbVar22[0xc] | (byte)((ulong)lVar26 >> 0x20);
                bVar34 = pbVar22[0xd] | (byte)((ulong)lVar26 >> 0x28);
                bVar35 = pbVar22[0xe] | (byte)((ulong)lVar26 >> 0x30);
                bVar36 = pbVar22[0xf] | (byte)((ulong)lVar26 >> 0x38);
                bVar37 = pbVar22[0x10] | (byte)lVar27;
                bVar38 = pbVar22[0x11] | (byte)((ulong)lVar27 >> 8);
                bVar39 = pbVar22[0x12] | (byte)((ulong)lVar27 >> 0x10);
                bVar40 = pbVar22[0x13] | (byte)((ulong)lVar27 >> 0x18);
                bVar41 = pbVar22[0x14] | (byte)((ulong)lVar27 >> 0x20);
                bVar42 = pbVar22[0x15] | (byte)((ulong)lVar27 >> 0x28);
                bVar43 = pbVar22[0x16] | (byte)((ulong)lVar27 >> 0x30);
                bVar44 = pbVar22[0x17] | (byte)((ulong)lVar27 >> 0x38);
                auVar45[1] = bVar30;
                auVar45[0] = bVar29;
                auVar45[2] = bVar31;
                auVar45[3] = bVar32;
                auVar45[4] = bVar33;
                auVar45[5] = bVar34;
                auVar45[6] = bVar35;
                auVar45[7] = bVar36;
                auVar45[8] = bVar37;
                auVar45[9] = bVar38;
                auVar45[10] = bVar39;
                auVar45[0xb] = bVar40;
                auVar45[0xc] = bVar41;
                auVar45[0xd] = bVar42;
                auVar45[0xe] = bVar43;
                auVar45[0xf] = bVar44;
                auVar3[1] = bVar30;
                auVar3[0] = bVar29;
                auVar3[2] = bVar31;
                auVar3[3] = bVar32;
                auVar3[4] = bVar33;
                auVar3[5] = bVar34;
                auVar3[6] = bVar35;
                auVar3[7] = bVar36;
                auVar3[8] = bVar37;
                auVar3[9] = bVar38;
                auVar3[10] = bVar39;
                auVar3[0xb] = bVar40;
                auVar3[0xc] = bVar41;
                auVar3[0xd] = bVar42;
                auVar3[0xe] = bVar43;
                auVar3[0xf] = bVar44;
                auVar45 = NEON_ext(auVar45,auVar3,8,1);
                if (CONCAT17(bVar36 | auVar45[7],
                             CONCAT16(bVar35 | auVar45[6],
                                      CONCAT15(bVar34 | auVar45[5],
                                               CONCAT14(bVar33 | auVar45[4],
                                                        CONCAT13(bVar32 | auVar45[3],
                                                                 CONCAT12(bVar31 | auVar45[2],
                                                                          CONCAT11(bVar30 | auVar45[
                                                  1],bVar29 | auVar45[0]))))))) == 0 &&
                    *(long *)pbVar22 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar21 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar20 == (byte *)0x0) &&
                  lVar27 == 0)) {
                if (pbVar22[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar22 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar22[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar22 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar27 = *(long *)(pbVar22 + 0x20);
              lVar26 = *(long *)(pbVar22 + 0x18);
              bVar29 = pbVar22[8] | (byte)lVar26;
              bVar30 = pbVar22[9] | (byte)((ulong)lVar26 >> 8);
              bVar31 = pbVar22[10] | (byte)((ulong)lVar26 >> 0x10);
              bVar32 = pbVar22[0xb] | (byte)((ulong)lVar26 >> 0x18);
              bVar33 = pbVar22[0xc] | (byte)((ulong)lVar26 >> 0x20);
              bVar34 = pbVar22[0xd] | (byte)((ulong)lVar26 >> 0x28);
              bVar35 = pbVar22[0xe] | (byte)((ulong)lVar26 >> 0x30);
              bVar36 = pbVar22[0xf] | (byte)((ulong)lVar26 >> 0x38);
              bVar37 = pbVar22[0x10] | (byte)lVar27;
              bVar38 = pbVar22[0x11] | (byte)((ulong)lVar27 >> 8);
              bVar39 = pbVar22[0x12] | (byte)((ulong)lVar27 >> 0x10);
              bVar40 = pbVar22[0x13] | (byte)((ulong)lVar27 >> 0x18);
              bVar41 = pbVar22[0x14] | (byte)((ulong)lVar27 >> 0x20);
              bVar42 = pbVar22[0x15] | (byte)((ulong)lVar27 >> 0x28);
              bVar43 = pbVar22[0x16] | (byte)((ulong)lVar27 >> 0x30);
              bVar44 = pbVar22[0x17] | (byte)((ulong)lVar27 >> 0x38);
              auVar1[1] = bVar30;
              auVar1[0] = bVar29;
              auVar1[2] = bVar31;
              auVar1[3] = bVar32;
              auVar1[4] = bVar33;
              auVar1[5] = bVar34;
              auVar1[6] = bVar35;
              auVar1[7] = bVar36;
              auVar1[8] = bVar37;
              auVar1[9] = bVar38;
              auVar1[10] = bVar39;
              auVar1[0xb] = bVar40;
              auVar1[0xc] = bVar41;
              auVar1[0xd] = bVar42;
              auVar1[0xe] = bVar43;
              auVar1[0xf] = bVar44;
              auVar2[1] = bVar30;
              auVar2[0] = bVar29;
              auVar2[2] = bVar31;
              auVar2[3] = bVar32;
              auVar2[4] = bVar33;
              auVar2[5] = bVar34;
              auVar2[6] = bVar35;
              auVar2[7] = bVar36;
              auVar2[8] = bVar37;
              auVar2[9] = bVar38;
              auVar2[10] = bVar39;
              auVar2[0xb] = bVar40;
              auVar2[0xc] = bVar41;
              auVar2[0xd] = bVar42;
              auVar2[0xe] = bVar43;
              auVar2[0xf] = bVar44;
              auVar45 = NEON_ext(auVar1,auVar2,8,1);
              lVar26 = CONCAT17(bVar36 | auVar45[7],
                                CONCAT16(bVar35 | auVar45[6],
                                         CONCAT15(bVar34 | auVar45[5],
                                                  CONCAT14(bVar33 | auVar45[4],
                                                           CONCAT13(bVar32 | auVar45[3],
                                                                    CONCAT12(bVar31 | auVar45[2],
                                                                             CONCAT11(bVar30 | 
                                                  auVar45[1],bVar29 | auVar45[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar22[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar22 + 8);
            uVar14 = *(ulong *)(pbVar22 + 0x10);
            lVar27 = *(long *)pbVar22;
            uVar10 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar21,lVar27,uVar10);
            if (((ulong)pbVar21 & 1) == 0) {
              return (byte *)0x0;
            }
            puVar28 = *(undefined1 **)((long)plVar6 + -0x90);
            unaff_x30 = *(undefined8 *)((long)plVar6 + -0x88);
            unaff_x20 = *(ulong *)((long)plVar6 + -0xa0);
            unaff_x19 = *(byte **)((long)plVar6 + -0x98);
            unaff_x22 = *(ulong *)((long)plVar6 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)plVar6 + -0xa8);
            unaff_x24 = *(byte **)((long)plVar6 + -0xc0);
            unaff_x23 = *(byte **)((long)plVar6 + -0xb8);
            plVar6 = (long *)((long)plVar6 + -0x80);
          } while( true );
        }
      }
      else if (pbVar11 == (byte *)0x5) goto code_r0x000103541af8;
    }
    else if (pbVar20 == (byte *)0x6) {
      if (pbVar11 == (byte *)0x6) goto code_r0x000103541af8;
    }
    else if (pbVar20 == (byte *)0x7) {
      if (pbVar11 == (byte *)0x7) goto code_r0x000103541af8;
    }
    else if (pbVar11 == (byte *)0x8) goto code_r0x000103541af8;
    goto code_r0x000103541c14;
  case 3:
    if (((uint)((ulong)*(long *)(param_3 + 0x10) >> 0x3c) & 3 |
        (*(byte *)(param_3 + 0x12) & 0x3f) << 2) != 3) goto code_r0x000103541c14;
    pbVar20 = *(byte **)param_3;
    lVar26 = *(long *)(param_3 + 4);
    uVar14 = *(ulong *)(param_3 + 6);
    if (*(char *)(param_3 + 2) != '\x01') goto code_r0x000103541af0;
    if ((long)pbVar20 < 2) goto code_r0x000103541b2c;
    if (pbVar20 == (byte *)0x2) goto code_r0x000103541bc8;
    if (pbVar20 == (byte *)0x3) goto code_r0x000103541bd4;
    goto code_r0x000103541be8;
  case 4:
  case 0x8d:
    in_ZR = ((uint)((ulong)*(long *)(param_3 + 0x10) >> 0x3c) & 3 |
            (*(byte *)(param_3 + 0x12) & 0x3f) << 2) == 4;
  case 0xd6:
    if ((bool)in_ZR) {
      pbVar20 = *(byte **)param_3;
      lVar26 = *(long *)(param_3 + 4);
      uVar14 = *(ulong *)(param_3 + 6);
      if (*(char *)(param_3 + 2) != '\x01') {
code_r0x000103541af0:
        if (pbVar11 == pbVar20) goto code_r0x000103541af8;
        goto code_r0x000103541c14;
      }
      if (pbVar20 == (byte *)0x0) {
code_r0x000103541b30:
        if (pbVar11 == (byte *)0x0) goto code_r0x000103541af8;
        goto code_r0x000103541c14;
      }
joined_r0x000103541ae8:
      if (pbVar20 == (byte *)0x1) {
code_r0x000103541b38:
        in_ZR = pbVar11 == (byte *)0x1;
code_r0x000103541b3c:
        if ((bool)in_ZR) goto code_r0x000103541af8;
        goto code_r0x000103541c14;
      }
code_r0x000103541bc8:
      if (pbVar11 != (byte *)0x2) goto code_r0x000103541c14;
      goto code_r0x000103541af8;
    }
    goto code_r0x000103541c14;
  case 5:
    if (((uint)((ulong)*(long *)(param_3 + 0x10) >> 0x3c) & 3 |
        (*(byte *)(param_3 + 0x12) & 0x3f) << 2) != 5) goto code_r0x000103541c14;
    pbVar23 = *(byte **)param_3;
    pbVar22 = *(byte **)(param_3 + 4);
    param_2 = (undefined8 *)(ulong)*(byte *)(param_3 + 6);
    lVar26 = *(long *)(param_3 + 8);
    uVar14 = *(ulong *)(param_3 + 10);
    in_ZR = *(char *)(param_3 + 2) == '\x01';
  case 0xcd:
    if ((bool)in_ZR) {
code_r0x000103541a08:
      if (pbVar23 == (byte *)0x0) {
        if (pbVar11 == (byte *)0x0) {
code_r0x000103541b48:
          goto code_r0x000103541b5c;
        }
      }
      else {
code_r0x000103541a0c:
        in_ZR = pbVar23 == (byte *)0x1;
code_r0x000103541a10:
        if ((bool)in_ZR) {
          in_ZR = pbVar11 == (byte *)0x1;
code_r0x000103541a18:
          if ((bool)in_ZR) {
code_r0x000103541b5c:
            if (param_2 == (undefined8 *)0x1) {
joined_r0x000103541b8c:
              if (pbVar22 == (byte *)0x0) {
                if (pbStack_70 == (byte *)0x0) {
code_r0x000103541b94:
                  goto code_r0x000103541bac;
                }
              }
              else if (pbVar22 == (byte *)0x1) {
                if (pbStack_70 == (byte *)0x1) {
code_r0x000103541bac:
                  unaff_x30 = 0x103541bb8;
                  plVar6 = &lStack_a0;
                  pbVar11 = pbVar21;
                  goto code_r0x000100e25fcc;
                }
              }
              else if (pbStack_70 == (byte *)0x2) goto code_r0x000103541bac;
            }
            else {
code_r0x000103541b98:
              if (pbStack_70 == pbVar22) goto code_r0x000103541bac;
            }
          }
        }
        else if (pbVar11 == (byte *)0x2) goto code_r0x000103541b5c;
      }
    }
    else if (pbVar11 == pbVar23) goto code_r0x000103541b5c;
    goto code_r0x000103541c14;
  case 6:
    param_2 = (undefined8 *)(ulong)*(byte *)(param_3 + 0x12);
    pbVar22 = (byte *)(*(ulong *)(param_3 + 0x10) >> 0x3c);
  case 0xf9:
    pbVar22 = (byte *)(ulong)((uint)pbVar22 & 3 | (int)param_2 << 2);
code_r0x000103541a30:
    if (((uint)pbVar22 & 0xff) == 6) {
      pbVar23 = *(byte **)param_3;
      pbVar22 = *(byte **)(param_3 + 4);
      param_2 = (undefined8 *)(ulong)*(byte *)(param_3 + 6);
code_r0x000103541a48:
      lVar26 = *(long *)(param_3 + 8);
      uVar14 = *(ulong *)(param_3 + 10);
code_r0x000103541a4c:
      if (*(char *)(param_3 + 2) != '\x01') {
        if (pbVar11 == pbVar23) goto code_r0x000103541b84;
        goto code_r0x000103541c14;
      }
code_r0x000103541a58:
      if (pbVar23 == (byte *)0x0) {
        if (pbVar11 == (byte *)0x0) goto code_r0x000103541b84;
        goto code_r0x000103541c14;
      }
code_r0x000103541a5c:
      in_ZR = pbVar23 == (byte *)0x1;
code_r0x000103541a60:
      if (!(bool)in_ZR) {
        if (pbVar11 == (byte *)0x2) goto code_r0x000103541b84;
        goto code_r0x000103541c14;
      }
      in_ZR = pbVar11 == (byte *)0x1;
code_r0x000103541a68:
      if (!(bool)in_ZR) {
code_r0x000103541a6c:
        goto code_r0x000103541c14;
      }
code_r0x000103541b84:
      if (param_2 != (undefined8 *)0x1) goto code_r0x000103541b98;
code_r0x000103541b8c:
      goto joined_r0x000103541b8c;
    }
    goto code_r0x000103541c14;
  case 7:
    if (((uint)((ulong)*(long *)(param_3 + 0x10) >> 0x3c) & 3 |
        (*(byte *)(param_3 + 0x12) & 0x3f) << 2) != 7) goto code_r0x000103541c14;
    goto code_r0x00010354195c;
  case 8:
    pbVar21 = (byte *)(ulong)*(byte *)(param_3 + 0x12);
    pbVar20 = (byte *)(*(ulong *)(param_3 + 0x10) >> 0x3c);
  case 0xad:
    pbVar20 = (byte *)(ulong)((uint)pbVar20 & 3 | (int)pbVar21 << 2);
code_r0x000103541ac0:
    if (((uint)pbVar20 & 0xff) == 8) {
code_r0x000103541acc:
      pbVar20 = *(byte **)param_3;
code_r0x000103541ad0:
      lVar26 = *(long *)(param_3 + 4);
      uVar14 = *(ulong *)(param_3 + 6);
      param_3 = (float *)(ulong)*(byte *)(param_3 + 2);
code_r0x000103541ad8:
      if (param_3 != (float *)0x1) goto code_r0x000103541af0;
      if (pbVar20 != (byte *)0x0) goto joined_r0x000103541ae8;
      goto code_r0x000103541b30;
    }
    goto code_r0x000103541c14;
  case 9:
    pbStack_70 = *(byte **)(param_3 + 0x10);
    pbVar20 = (byte *)(ulong)*(byte *)(param_3 + 0x12);
  case 0x9e:
  case 0xe2:
    pbStack_70 = (byte *)(ulong)((uint)((ulong)pbStack_70 >> 0x3c) & 3 | (int)pbVar20 << 2);
code_r0x000103541888:
    if (((uint)pbStack_70 & 0xff) == 9) {
code_r0x00010354195c:
      lVar26 = *(long *)param_3;
      uVar14 = *(ulong *)(param_3 + 2);
      pbVar9 = pbVar22;
      puVar28 = unaff_x29;
code_r0x000103541968:
      pbVar20 = pbVar9;
      plVar6 = (long *)register0x00000008;
      goto code_r0x000100e25fcc;
    }
    goto code_r0x000103541c14;
  case 10:
  case 0x8e:
    pbVar20 = *(byte **)(param_3 + 0x10);
    pbVar21 = (byte *)(ulong)*(byte *)(param_3 + 0x12);
  case 0x4d:
    if (((uint)((ulong)pbVar20 >> 0x3c) & 3 | ((uint)pbVar21 & 0x3f) << 2) == 10) {
code_r0x000103541a8c:
      pbVar20 = (byte *)(ulong)(uint)*param_3;
code_r0x000103541a90:
      if ((((uint)pbVar11 ^ (uint)pbVar20) & 1) != 0) goto code_r0x000103541c14;
      goto code_r0x000103541a98;
    }
    goto code_r0x000103541c14;
  case 0xb:
    pbStack_58 = pbVar11;
    pbStack_50 = pbVar22;
  case 0x29:
  case 0x39:
  case 0x41:
  case 0x49:
  case 0x51:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0x79:
  case 0x81:
    pbVar25 = *(byte **)(param_3 + 0x10);
    pbStack_48 = pbStack_70;
    pbStack_40 = pbVar9;
    pbStack_38 = pbVar21;
    pbStack_30 = pbVar20;
    pbStack_28 = pbVar23;
code_r0x0001035417f8:
    if (((uint)((ulong)pbVar25 >> 0x3c) & 3 | (*(byte *)(param_3 + 0x12) & 0x3f) << 2) == 0xb) {
      pbStack_70 = *(byte **)(param_3 + 0xc);
      lVar26 = *(long *)(param_3 + 2);
      in_register_00005008 = (undefined1)lVar26;
      in_register_00005009 = (undefined1)((ulong)lVar26 >> 8);
      in_register_0000500a = (undefined1)((ulong)lVar26 >> 0x10);
      in_register_0000500b = (undefined1)((ulong)lVar26 >> 0x18);
      in_register_0000500c = (undefined1)((ulong)lVar26 >> 0x20);
      in_register_0000500d = (undefined1)((ulong)lVar26 >> 0x28);
      in_register_0000500e = (undefined1)((ulong)lVar26 >> 0x30);
      in_register_0000500f = (undefined1)((ulong)lVar26 >> 0x38);
      lVar26 = *(long *)param_3;
      in_b0 = (undefined1)lVar26;
      in_register_00005001 = (undefined1)((ulong)lVar26 >> 8);
      in_register_00005002 = (undefined1)((ulong)lVar26 >> 0x10);
      in_register_00005003 = (undefined1)((ulong)lVar26 >> 0x18);
      in_register_00005004 = (undefined1)((ulong)lVar26 >> 0x20);
      in_register_00005005 = (undefined1)((ulong)lVar26 >> 0x28);
      in_register_00005006 = (undefined1)((ulong)lVar26 >> 0x30);
      in_register_00005007 = (undefined1)((ulong)lVar26 >> 0x38);
      param_1 = *(long *)(param_3 + 4);
      in_register_00005028 = *(long *)(param_3 + 6);
code_r0x000103541818:
      lStack_98 = CONCAT17(in_register_0000500f,
                           CONCAT16(in_register_0000500e,
                                    CONCAT15(in_register_0000500d,
                                             CONCAT14(in_register_0000500c,
                                                      CONCAT13(in_register_0000500b,
                                                               CONCAT12(in_register_0000500a,
                                                                        CONCAT11(
                                                  in_register_00005009,in_register_00005008)))))));
      lStack_a0 = CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
      lStack_78 = *(long *)(param_3 + 10);
      lStack_80 = *(long *)(param_3 + 8);
      ppbVar12 = &pbStack_58;
      lStack_90 = param_1;
      lStack_88 = in_register_00005028;
      FUN_103541650(ppbVar12,&lStack_a0);
      uVar8 = (uint)ppbVar12;
      goto code_r0x000103541c18;
    }
    goto code_r0x000103541c14;
  case 0xc:
  case 0x16:
  case 0xbb:
  case 0xbd:
  case 0xf3:
  case 0xf5:
    goto code_r0x0001035417c4;
  case 0xd:
    goto code_r0x0001035417f8;
  case 0x11:
  case 0x12:
  case 0x95:
    goto code_r0x0001035417d0;
  case 0x13:
  case 0x15:
  case 0xd5:
  case 0xfe:
    goto code_r0x000103541818;
  case 0x17:
  case 0xa9:
    goto code_r0x0001035417dc;
  case 0x25:
    goto code_r0x000103541a18;
  case 0x26:
  case 0x2e:
  case 0x36:
  case 0x3e:
  case 0x46:
  case 0x4e:
  case 0x56:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x76:
  case 0x7e:
  case 0xa6:
  case 0xc6:
  case 0xce:
    goto code_r0x000103541a68;
  case 0x27:
  case 0x2f:
  case 0x37:
  case 0x3f:
  case 0x47:
  case 0x4f:
  case 0x57:
  case 0x5f:
  case 0x67:
  case 0x6f:
  case 0x77:
  case 0x7f:
  case 0xa7:
  case 199:
  case 0xcf:
code_r0x000103541b24:
    if ((long)pbVar20 < 2) {
code_r0x000103541b2c:
      if (pbVar20 != (byte *)0x0) goto code_r0x000103541b38;
      goto code_r0x000103541b30;
    }
    if (pbVar20 == (byte *)0x2) goto code_r0x000103541bc8;
code_r0x000103541bd4:
    if (pbVar11 != (byte *)0x3) goto code_r0x000103541c14;
    goto code_r0x000103541af8;
  case 0x2d:
  case 0x35:
    goto code_r0x000103541a30;
  case 0x31:
    goto code_r0x0001035417d4;
  case 0x3d:
    goto code_r0x000103541a48;
  case 0x45:
    goto code_r0x000103541a60;
  case 0x55:
    goto code_r0x000103541a90;
  case 0x5d:
  case 0xe1:
    goto code_r0x000103541aa8;
  case 0x65:
    goto code_r0x000103541ac0;
  case 0x6d:
    goto code_r0x000103541ad8;
  case 0x75:
    goto code_r0x000103541af0;
  case 0x7d:
    goto code_r0x000103541b08;
  case 0x85:
    goto code_r0x000103541b3c;
  case 0x86:
  case 0xae:
  case 0xc2:
  case 0xca:
  case 0xd2:
  case 0xe6:
  case 0xfa:
    goto code_r0x000103541ad0;
  case 0x87:
  case 0x8f:
  case 0xaf:
  case 0xc3:
  case 0xcb:
  case 0xd3:
  case 0xe7:
  case 0xfb:
    goto code_r0x000103541a58;
  case 0x88:
  case 0x90:
  case 0x93:
  case 0xb0:
  case 0xc4:
  case 0xcc:
  case 0xd4:
  case 0xe8:
  case 0xfc:
    goto code_r0x0001035417c0;
  case 0x89:
    goto code_r0x000103541a08;
  case 0x8b:
  case 0xb3:
  case 0xeb:
    goto code_r0x000103541a9c;
  case 0x97:
  case 0xdb:
    goto code_r0x0001035417bc;
  case 0x99:
    goto code_r0x000103541b48;
  case 0x9a:
    goto code_r0x000103541a6c;
  case 0x9b:
  case 0xd7:
    goto code_r0x000103541a10;
  case 0x9c:
  case 0xd8:
    goto code_r0x000103541b8c;
  case 0x9d:
code_r0x0001035419b8:
    lStack_78 = CONCAT17(in_register_0000500f,
                         CONCAT16(in_register_0000500e,
                                  CONCAT15(in_register_0000500d,
                                           CONCAT14(in_register_0000500c,
                                                    CONCAT13(in_register_0000500b,
                                                             CONCAT12(in_register_0000500a,
                                                                      CONCAT11(in_register_00005009,
                                                                               in_register_00005008)
                                                                     ))))));
    lStack_80 = CONCAT17(in_register_00005007,
                         CONCAT16(in_register_00005006,
                                  CONCAT15(in_register_00005005,
                                           CONCAT14(in_register_00005004,
                                                    CONCAT13(in_register_00005003,
                                                             CONCAT12(in_register_00005002,
                                                                      CONCAT11(in_register_00005001,
                                                                               in_b0)))))));
    ppbVar12 = &pbStack_58;
    pbStack_70 = (byte *)param_1;
    lStack_68 = in_register_00005028;
    FUN_1035414e8(ppbVar12,&lStack_a0);
    uVar8 = (uint)ppbVar12;
    goto code_r0x000103541c18;
  case 0x9f:
  case 0xe3:
    goto code_r0x000103541a0c;
  case 0xa0:
  case 0xe4:
    goto code_r0x0001035417cc;
  case 0xa5:
    goto code_r0x000103541aa0;
  case 0xb1:
    goto code_r0x000103541968;
  case 0xc1:
  case 0xc9:
  case 0xd1:
    goto code_r0x000103541a8c;
  case 0xc5:
    goto code_r0x000103541a4c;
  case 0xe5:
    goto code_r0x000103541a5c;
  case 0xe9:
    goto code_r0x000103541888;
  case 0xfd:
    goto code_r0x000103541b94;
  case 0xff:
    goto code_r0x000103541acc;
  }
  pbVar20 = *(byte **)(param_3 + 0x10);
code_r0x0001035417bc:
  pbVar21 = (byte *)(ulong)*(byte *)(param_3 + 0x12);
code_r0x0001035417c0:
  pbVar20 = (byte *)((ulong)pbVar20 >> 0x3c);
code_r0x0001035417c4:
  in_ZR = ((ulong)pbVar20 & 3) == 0 && ((ulong)pbVar21 & 0x3f) == 0;
code_r0x0001035417cc:
  if ((bool)in_ZR) {
code_r0x0001035417d0:
    in_b0 = SUB81(pbVar11,0);
    in_register_00005001 = (undefined1)((ulong)pbVar11 >> 8);
    in_register_00005002 = (undefined1)((ulong)pbVar11 >> 0x10);
    in_register_00005003 = (undefined1)((ulong)pbVar11 >> 0x18);
code_r0x0001035417d4:
    in_ZR = false;
    if (!NAN((float)CONCAT13(in_register_00005003,
                             CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))))
        && !NAN(*param_3)) {
      in_ZR = (float)CONCAT13(in_register_00005003,
                              CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)))
              == *param_3;
    }
code_r0x0001035417dc:
    if ((bool)in_ZR) {
code_r0x000103541a98:
      lVar26 = *(long *)(param_3 + 2);
      uVar14 = *(ulong *)(param_3 + 4);
code_r0x000103541a9c:
      pbVar11 = pbVar22;
code_r0x000103541aa0:
      func_0x000100e25fcc(pbVar11,pbStack_70,lVar26,uVar14);
code_r0x000103541aa8:
      if (((ulong)pbVar11 & 1) != 0) {
        pbVar11 = (byte *)0x1;
code_r0x000103541b08:
        uVar8 = (uint)pbVar11;
        goto code_r0x000103541c18;
      }
    }
  }
code_r0x000103541c14:
  uVar8 = 0;
code_r0x000103541c18:
  return (byte *)(ulong)(uVar8 & 1);
}



/* Entry: 103541c28; end: 103541e9b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103541c28(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
                    char param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if (param_6 != '\x01') {
    if (param_1 != param_5) {
      return (byte *)0x0;
    }
    goto SUB_100e25fcc;
  }
  if (param_5 < 4) {
    if (param_5 < 2) {
      if (param_5 == 0) {
        if (param_1 == 0) goto SUB_100e25fcc;
      }
      else if (param_1 == 1) goto SUB_100e25fcc;
    }
    else if (param_5 == 2) {
      if (param_1 == 2) goto SUB_100e25fcc;
    }
    else if (param_1 == 3) goto SUB_100e25fcc;
  }
  else if (param_5 < 6) {
    if (param_5 == 4) {
      if (param_1 == 4) {
SUB_100e25fcc:
        do {
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)param_4 >> 0x20);
          uVar15 = uVar4 >> 0x1e;
          uVar5 = (uint)(param_8 >> 0x20);
          uVar18 = uVar5 >> 0x1e;
          iVar7 = (int)param_3;
          pbVar11 = param_4;
          if ((ulong)param_4 >> 0x3e == 3) {
            uVar17 = 0;
            if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                (param_8 >> 0x3e < 3)) ||
               ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar8 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = (ulong)param_4 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)((ulong)param_3 >> 0x20);
              if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar16 - iVar7);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar18 == 0) {
              uVar19 = param_8 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar16 = (int)((ulong)param_7 >> 0x20);
            if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar8 = (byte *)0x0;
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
              if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar18 == 2) {
              uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
              if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar17 < 1) goto code_r0x000100e26128;
              if (uVar15 < 2) {
                if (uVar15 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                  pbVar11 = (byte *)((long)register0x00000008 +
                                    (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar7;
                unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = param_4;
                if (param_3 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  param_3 = (byte *)0x0;
                }
                else {
                  pbVar11 = param_3;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  if (param_3 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar11 = (byte *)0x0;
              }
              else {
                if (uVar15 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar21 = *(long *)(param_3 + 0x10);
                unaff_x24 = *(byte **)(param_3 + 0x18);
                func_0x000107c5ec30();
                pbVar11 = param_3;
                if (param_3 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + (lVar21 - (long)pbVar11);
                }
                unaff_x23 = unaff_x24 + -lVar21;
                if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = param_3;
                unaff_x25 = param_4;
                if (param_3 == (byte *)0x0) {
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_3;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,
                                  param_7,param_8);
              pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = param_8;
            }
            else {
              pbVar8 = (byte *)(ulong)(uVar17 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar8;
          }
          func_0x000107c60e78();
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar10 = *(byte **)pbVar8;
          param_3 = *(byte **)(pbVar8 + 8);
          pbVar20 = *(byte **)(pbVar8 + 0x18);
          bVar23 = pbVar8[0x28];
          param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
          pbVar12 = param_3;
          if (bVar23 < 3) {
            if (bVar23 == 0) {
              if (pbVar11[0x28] == 0) {
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar10,lVar21,uVar9);
                return (byte *)(ulong)((uint)pbVar10 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar23 == 1) {
              if (pbVar11[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar14 = *(byte **)(pbVar11 + 0x10);
              lVar21 = *(long *)pbVar11;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar21,uVar9);
              if (((ulong)pbVar10 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar11[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              lVar21 = *(long *)(pbVar11 + 0x18);
              if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar21);
                func_0x000107c61174();
                pbVar11 = pbVar20;
                func_0x000107c60118();
                func_0x000107c61170(pbVar20);
                func_0x000107c61170(lVar21);
                pbVar20 = pbVar11;
joined_r0x000100e266a4:
                if (((ulong)pbVar20 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar10,pbVar12,pbVar13,pbVar14,0);
            return pbVar10;
          }
          lVar22 = *(long *)(pbVar8 + 0x20);
          if (bVar23 < 5) {
            if (bVar23 != 3) {
              if (pbVar11[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                 (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                 pbVar14 = *(byte **)(pbVar11 + 0x18),
                 param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar11[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar11 + 0x10);
            lVar21 = *(long *)(pbVar11 + 0x20);
            if (param_4 == (byte *)0x0) {
              if (pbVar14 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar14 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar21 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar21 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar23 != 5) {
            if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                lVar22 == 0) && param_4 == (byte *)0x0) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar11 + 0x20);
              lVar21 = *(long *)(pbVar11 + 0x18);
              bVar23 = pbVar11[8] | (byte)lVar21;
              bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
              bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar31 = pbVar11[0x10] | (byte)lVar22;
              bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar39[1] = bVar24;
              auVar39[0] = bVar23;
              auVar39[2] = bVar25;
              auVar39[3] = bVar26;
              auVar39[4] = bVar27;
              auVar39[5] = bVar28;
              auVar39[6] = bVar29;
              auVar39[7] = bVar30;
              auVar39[8] = bVar31;
              auVar39[9] = bVar32;
              auVar39[10] = bVar33;
              auVar39[0xb] = bVar34;
              auVar39[0xc] = bVar35;
              auVar39[0xd] = bVar36;
              auVar39[0xe] = bVar37;
              auVar39[0xf] = bVar38;
              auVar3[1] = bVar24;
              auVar3[0] = bVar23;
              auVar3[2] = bVar25;
              auVar3[3] = bVar26;
              auVar3[4] = bVar27;
              auVar3[5] = bVar28;
              auVar3[6] = bVar29;
              auVar3[7] = bVar30;
              auVar3[8] = bVar31;
              auVar3[9] = bVar32;
              auVar3[10] = bVar33;
              auVar3[0xb] = bVar34;
              auVar3[0xc] = bVar35;
              auVar3[0xd] = bVar36;
              auVar3[0xe] = bVar37;
              auVar3[0xf] = bVar38;
              auVar39 = NEON_ext(auVar39,auVar3,8,1);
              if (CONCAT17(bVar30 | auVar39[7],
                           CONCAT16(bVar29 | auVar39[6],
                                    CONCAT15(bVar28 | auVar39[5],
                                             CONCAT14(bVar27 | auVar39[4],
                                                      CONCAT13(bVar26 | auVar39[3],
                                                               CONCAT12(bVar25 | auVar39[2],
                                                                        CONCAT11(bVar24 | auVar39[1]
                                                                                 ,bVar23 | auVar39[0
                                                  ]))))))) == 0 && *(long *)pbVar11 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar10 == (byte *)0x1) &&
               (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar11 + 0x20);
            lVar21 = *(long *)(pbVar11 + 0x18);
            bVar23 = pbVar11[8] | (byte)lVar21;
            bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
            bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
            bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
            bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
            bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
            bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
            bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
            bVar31 = pbVar11[0x10] | (byte)lVar22;
            bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar24;
            auVar1[0] = bVar23;
            auVar1[2] = bVar25;
            auVar1[3] = bVar26;
            auVar1[4] = bVar27;
            auVar1[5] = bVar28;
            auVar1[6] = bVar29;
            auVar1[7] = bVar30;
            auVar1[8] = bVar31;
            auVar1[9] = bVar32;
            auVar1[10] = bVar33;
            auVar1[0xb] = bVar34;
            auVar1[0xc] = bVar35;
            auVar1[0xd] = bVar36;
            auVar1[0xe] = bVar37;
            auVar1[0xf] = bVar38;
            auVar2[1] = bVar24;
            auVar2[0] = bVar23;
            auVar2[2] = bVar25;
            auVar2[3] = bVar26;
            auVar2[4] = bVar27;
            auVar2[5] = bVar28;
            auVar2[6] = bVar29;
            auVar2[7] = bVar30;
            auVar2[8] = bVar31;
            auVar2[9] = bVar32;
            auVar2[10] = bVar33;
            auVar2[0xb] = bVar34;
            auVar2[0xc] = bVar35;
            auVar2[0xd] = bVar36;
            auVar2[0xe] = bVar37;
            auVar2[0xf] = bVar38;
            auVar39 = NEON_ext(auVar1,auVar2,8,1);
            lVar21 = CONCAT17(bVar30 | auVar39[7],
                              CONCAT16(bVar29 | auVar39[6],
                                       CONCAT15(bVar28 | auVar39[5],
                                                CONCAT14(bVar27 | auVar39[4],
                                                         CONCAT13(bVar26 | auVar39[3],
                                                                  CONCAT12(bVar25 | auVar39[2],
                                                                           CONCAT11(bVar24 | auVar39
                                                  [1],bVar23 | auVar39[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar11[0x28] != 5) {
            return (byte *)0x0;
          }
          param_7 = *(long *)(pbVar11 + 8);
          param_8 = *(ulong *)(pbVar11 + 0x10);
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          if (((ulong)pbVar10 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
          unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
          unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
          unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
          unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
          unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
          unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
        } while( true );
      }
    }
    else if (param_1 == 5) goto SUB_100e25fcc;
  }
  else if (param_5 == 6) {
    if (param_1 == 6) goto SUB_100e25fcc;
  }
  else if (param_5 == 7) {
    if (param_1 == 7) goto SUB_100e25fcc;
  }
  else if (param_1 == 8) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 103541e9c; end: 103541f1b;  */

void FUN_103541e9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f774b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd7c28;
  func_0x000107c61520(&DAT_10dbd7c28,&UNK_110663608);
  puRam0000000112f774b0 = puVar1;
  return;
}



/* Entry: 103541f1c; end: 1035421bb;  */

uint FUN_103541f1c(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_310 [80];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  char cStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined8 uStack_1df;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  char cStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  char cStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uVar4;
  
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_b0 = param_1[6];
  uStack_a8 = (undefined1)param_1[7];
  uStack_9f = *(undefined8 *)((long)param_1 + 0x41);
  uStack_a7 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_a0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_1c8 = param_1[1];
  uStack_1d0 = *param_1;
  uStack_208 = param_2[3];
  uStack_210 = param_2[2];
  uStack_108 = param_2[5];
  uStack_110 = param_2[4];
  uStack_1f8 = param_2[5];
  uStack_200 = param_2[4];
  uStack_100 = param_2[6];
  uStack_f8 = (undefined1)param_2[7];
  uStack_ef = *(undefined8 *)((long)param_2 + 0x41);
  uStack_f7 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  uStack_128 = param_2[1];
  uStack_130 = *param_2;
  uStack_118 = param_2[3];
  uStack_120 = param_2[2];
  uStack_218 = param_2[1];
  uStack_220 = *param_2;
  uStack_1a0 = param_1[6];
  uStack_198 = (undefined1)param_1[7];
  uStack_18f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
  cStack_188 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
  uStack_197 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
  uStack_190 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
  uStack_1f0 = param_2[6];
  uStack_148 = (undefined1)param_2[7];
  uStack_1df = *(undefined8 *)((long)param_2 + 0x41);
  uStack_13f = (undefined7)uStack_1df;
  cStack_138 = (char)((ulong)uStack_1df >> 0x38);
  uStack_147 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
  uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  bVar1 = ((CONCAT71(uStack_13f,uStack_140) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  uStack_180 = uStack_220;
  uStack_178 = uStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  if ((((CONCAT71(uStack_18f,uStack_190) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (cStack_188 == -1)) {
    if (bVar1 || cStack_138 != -1) {
LAB_103542050:
      uStack_1e8 = uStack_148;
      uStack_238 = uStack_198;
      uStack_237 = uStack_197;
      cStack_228 = cStack_188;
      uStack_230 = uStack_190;
      uStack_22f = uStack_18f;
      uStack_270 = uStack_1d0;
      uStack_268 = uStack_1c8;
      uStack_260 = uStack_1c0;
      uStack_258 = uStack_1b8;
      uStack_250 = uStack_1b0;
      uStack_248 = uStack_1a8;
      uStack_240 = uStack_1a0;
      uStack_1e7 = uStack_147;
      uStack_1e0 = uStack_140;
      FUN_10353a310(&uStack_e0,&uStack_90,0x112f76ff0,&UNK_10dbd7bd0);
      FUN_10353a310(&uStack_130,&uStack_90,0x112f76ff0,&UNK_10dbd7bd0);
      FUN_103546078(&uStack_270,0x112f77a18,&UNK_10dbd9bf0);
    }
    else {
      uStack_248 = param_1[5];
      uStack_250 = param_1[4];
      uStack_240 = param_1[6];
      uStack_238 = (undefined1)param_1[7];
      uStack_22f = (undefined7)*(undefined8 *)((long)param_1 + 0x41);
      cStack_228 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x41) >> 0x38);
      uStack_237 = (undefined7)*(undefined8 *)((long)param_1 + 0x39);
      uStack_230 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
      uStack_268 = param_1[1];
      uStack_270 = *param_1;
      uStack_258 = param_1[3];
      uStack_260 = param_1[2];
      FUN_10353a310(&uStack_e0,&uStack_90,0x112f76ff0,&UNK_10dbd7bd0);
      FUN_10353a310(&uStack_130,&uStack_90,0x112f76ff0,&UNK_10dbd7bd0);
      FUN_103546078(&uStack_270,0x112f76ff0,&UNK_10dbd7bd0);
LAB_10354217c:
      if (param_1[10] == param_2[10]) {
        uVar4 = param_1[0xb];
        func_0x000100e25fcc(uVar4,param_1[0xc],param_2[0xb],param_2[0xc]);
        uVar2 = (uint)uVar4;
        goto LAB_1035421a0;
      }
    }
  }
  else {
    if (!bVar1 && cStack_138 == -1) goto LAB_103542050;
    uStack_298 = param_2[5];
    uStack_2a0 = param_2[4];
    uStack_290 = param_2[6];
    uStack_288 = (undefined1)param_2[7];
    uStack_27f = *(undefined8 *)((long)param_2 + 0x41);
    uStack_287 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
    uStack_280 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
    uStack_2b8 = param_2[1];
    uStack_2c0 = *param_2;
    uStack_2a8 = param_2[3];
    uStack_2b0 = param_2[2];
    uStack_22f = (undefined7)uStack_27f;
    cStack_228 = (char)((ulong)uStack_27f >> 0x38);
    uStack_88 = param_1[1];
    uStack_90 = *param_1;
    uStack_78 = param_1[3];
    uStack_80 = param_1[2];
    uStack_68 = param_1[5];
    uStack_70 = param_1[4];
    uStack_60 = param_1[6];
    uStack_4f = *(undefined8 *)((long)param_1 + 0x41);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x39) >> 0x38);
    uStack_58 = (undefined1)param_1[7];
    uStack_57 = (undefined7)((ulong)param_1[7] >> 8);
    uStack_270 = uStack_2c0;
    uStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    uStack_238 = uStack_288;
    uStack_237 = uStack_287;
    uStack_230 = uStack_280;
    FUN_10353a310(&uStack_e0,auStack_310,0x112f76ff0,&UNK_10dbd7bd0);
    FUN_10353a310(&uStack_130,auStack_310,0x112f76ff0,&UNK_10dbd7bd0);
    puVar3 = &uStack_90;
    FUN_103541768(puVar3,&uStack_270);
    FUN_103546078(&uStack_2c0,0x112f76ff0,&UNK_10dbd7bd0);
    FUN_103546078(&uStack_1d0,0x112f76ff0,&UNK_10dbd7bd0);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10354217c;
  }
  uVar2 = 0;
LAB_1035421a0:
  return uVar2 & 1;
}



/* Entry: 1035421bc; end: 10354241f;  */

uint FUN_1035421bc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && (param_1[2] == param_2[2])) {
    uVar2 = param_1[3];
    uVar4 = param_2[3];
    if ((char)param_2[4] == '\x01') {
      if (uVar4 == 0) {
        if (uVar2 == 0) goto LAB_103542260;
      }
      else if (uVar4 == 1) {
        if (uVar2 == 1) {
LAB_103542260:
          uVar2 = param_1[5];
          func_0x00010142cfc4(uVar2,param_2[5]);
          if (((uVar2 & 1) != 0) && ((((byte)param_1[6] ^ (byte)param_2[6]) & 1) == 0)) {
            uVar2 = param_1[7];
            FUN_1035411a4(uVar2,param_2[7]);
            if ((uVar2 & 1) != 0) {
              uVar7 = param_1[0xb];
              uVar5 = param_1[10];
              uVar2 = param_1[0xc];
              uVar8 = param_2[0xb];
              uVar6 = param_2[10];
              uVar4 = param_2[0xc];
              uStack_a0 = uVar6;
              uStack_98 = uVar8;
              uStack_90 = uVar4;
              uStack_80 = uVar5;
              uStack_78 = uVar7;
              uStack_70 = uVar2;
              if (uVar2 == 0) {
                if (uVar4 == 0) {
                  FUN_10353a310(&uStack_80,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
                  FUN_10353a310(&uStack_a0,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
                  func_0x00010349f458(uVar5,uVar7,0);
LAB_103542410:
                  uVar2 = param_1[8];
                  func_0x000100e25fcc(uVar2,param_1[9],param_2[8],param_2[9]);
                  uVar1 = (uint)uVar2;
                  goto LAB_103542340;
                }
              }
              else if (uVar4 != 0) {
                FUN_10353a310(&uStack_80,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
                FUN_10353a310(&uStack_a0,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
                uVar3 = uVar5;
                FUN_1035d8f6c(uVar5,uVar7,uVar2,uVar6,uVar8,uVar4);
                func_0x00010349f458(uVar6,uVar8,uVar4);
                func_0x00010349f458(uVar5,uVar7,uVar2);
                if ((uVar3 & 1) != 0) goto LAB_103542410;
                goto LAB_10354233c;
              }
              FUN_10353a310(&uStack_80,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
              FUN_10353a310(&uStack_a0,auStack_b8,0x112f759a0,&UNK_10dbd33f0);
              func_0x00010349f458(uVar5,uVar7,uVar2);
              func_0x00010349f458(uVar6,uVar8,uVar4);
              uVar1 = 0;
              goto LAB_103542340;
            }
          }
        }
      }
      else if (uVar2 == 2) goto LAB_103542260;
    }
    else if (uVar2 == uVar4) goto LAB_103542260;
  }
LAB_10354233c:
  uVar1 = 0;
LAB_103542340:
  return uVar1 & 1;
}



/* Entry: 103542420; end: 103542a1f;  */

void FUN_103542420(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f774c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd87c0;
  func_0x000107c61520(&UNK_10dbd87c0,&UNK_110663558);
  puRam0000000112f774c0 = puVar1;
  return;
}



/* Entry: 103542a20; end: 103542a33;  */

void FUN_103542a20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103542a34();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103542a74)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103542a34; end: 103542adf;  */

void FUN_103542a34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd7cc0;
  func_0x000107c61520(&UNK_10dbd7cc0,&UNK_110663608);
  puRam0000000112f77640 = puVar1;
  return;
}



/* Entry: 103542ae0; end: 103542ae3;  */

void FUN_103542ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f77660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd7d00;
  func_0x000107c61520(&UNK_10dbd7d00,&UNK_110663608);
  puRam0000000112f77660 = puVar1;
  return;
}


