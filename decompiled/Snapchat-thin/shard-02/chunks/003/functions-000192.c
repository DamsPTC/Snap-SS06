/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b214a0; end: 101b215e3;  */

void FUN_101b214a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = *(undefined8 *)(unaff_x20 + 2);
  uStack_58 = unaff_x20[4];
  uStack_50 = *(undefined8 *)(unaff_x20 + 6);
  uStack_48 = unaff_x20[8];
  uStack_38 = *(undefined8 *)(unaff_x20 + 0xc);
  uStack_40 = *(undefined8 *)(unaff_x20 + 10);
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b215e4; end: 101b21683;  */

uint FUN_101b215e4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_101b21848(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101b21684; end: 101b21723;  */

/* WARNING: Possible PIC construction at 0x000101b216d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b216e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b216d4) */
/* WARNING: Removing unreachable block (ram,0x000101b216e4) */

void FUN_101b21684(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e01038 != -1) {
    func_0x000107c61568(0x112e01038,0x101b2163c);
  }
  uVar5 = uRam0000000113803ae8;
  uVar4 = uRam0000000113803ae0;
  uVar3 = uRam0000000113803ad8;
  uVar2 = uRam0000000113803ad0;
  uVar1 = uRam0000000113803ac8;
  *param_1 = uRam0000000113803ac0;
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



/* Entry: 101b21724; end: 101b21807;  */

undefined8 FUN_101b21724(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar1 != 0) && (param_1 != param_2)) {
    pcVar3 = (char *)(param_2 + 0x28);
    plVar2 = (long *)(param_1 + 0x20);
    do {
      lVar4 = *plVar2;
      lVar5 = *(long *)(pcVar3 + -8);
      if (*pcVar3 == '\x01') {
        if (lVar5 < 3) {
          if (lVar5 == 0) {
            if (lVar4 != 0) {
              return 0;
            }
          }
          else if (lVar5 == 1) {
            if (lVar4 != 1) {
              return 0;
            }
          }
          else if (lVar4 != 2) {
            return 0;
          }
        }
        else if (lVar5 < 5) {
          if (lVar5 == 3) {
            if (lVar4 != 3) {
              return 0;
            }
          }
          else if (lVar4 != 4) {
            return 0;
          }
        }
        else if (lVar5 == 5) {
          if (lVar4 != 5) {
            return 0;
          }
        }
        else if (lVar4 != 6) {
          return 0;
        }
      }
      else if (lVar4 != lVar5) {
        return 0;
      }
      pcVar3 = pcVar3 + 0x10;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return 1;
}



/* Entry: 101b21808; end: 101b21847;  */

void FUN_101b21808(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9d1ac8;
  func_0x000107c61520(&DAT_10d9d1ac8,&UNK_110444a40);
  puRam0000000112e01028 = puVar1;
  return;
}



/* Entry: 101b21848; end: 101b218cf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101b21848(int *param_1,int *param_2)

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
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
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
  
  if (*param_1 == *param_2) {
    uVar13 = *(ulong *)(param_1 + 2);
    FUN_101b21724(uVar13,*(undefined8 *)(param_2 + 2));
    if (((((uVar13 & 1) != 0) && (param_1[4] == param_2[4])) &&
        (*(long *)(param_1 + 6) == *(long *)(param_2 + 6))) && (param_1[8] == param_2[8])) {
      pbVar10 = *(byte **)(param_1 + 10);
      pbVar25 = *(byte **)(param_1 + 0xc);
      lVar24 = *(long *)(param_2 + 10);
      uVar13 = *(ulong *)(param_2 + 0xc);
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
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
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
            uVar22 = uVar13 >> 0x30 & 0xff;
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
              if (uVar18 != 2) {
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
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
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
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar24 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar24 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
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
          )(pbVar12,pbVar15,pbVar16,pbVar17,0);
          return pbVar12;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
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
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar24 = *(long *)(pbVar14 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
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
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
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
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
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
  return (byte *)0x0;
}



/* Entry: 101b218d0; end: 101b2190f;  */

void FUN_101b218d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1c38;
  func_0x000107c61520(&UNK_10d9d1c38,&UNK_110444998);
  puRam0000000112e01030 = puVar1;
  return;
}



/* Entry: 101b21910; end: 101b21923;  */

void FUN_101b21910(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101b21924();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101b21964)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101b21924; end: 101b219a3;  */

void FUN_101b21924(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1b60;
  func_0x000107c61520(&UNK_10d9d1b60,&UNK_110444a40);
  puRam0000000112e01040 = puVar1;
  return;
}



/* Entry: 101b219a4; end: 101b219a7;  */

void FUN_101b219a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e01050 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e01058;
  func_0x00010002969c(0x112e01058,&UNK_10d9d1ae8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e01050 = puVar2;
  return;
}



/* Entry: 101b219a8; end: 101b219f7;  */

void FUN_101b219a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e01050 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e01058;
  func_0x00010002969c(0x112e01058,&UNK_10d9d1ae8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e01050 = puVar2;
  return;
}



/* Entry: 101b219f8; end: 101b219fb;  */

void FUN_101b219f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1ba0;
  func_0x000107c61520(&UNK_10d9d1ba0,&UNK_110444a40);
  puRam0000000112e01060 = puVar1;
  return;
}



/* Entry: 101b219fc; end: 101b21a3b;  */

void FUN_101b219fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01060 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1ba0;
  func_0x000107c61520(&UNK_10d9d1ba0,&UNK_110444a40);
  puRam0000000112e01060 = puVar1;
  return;
}



/* Entry: 101b21a3c; end: 101b21a5f;  */

void FUN_101b21a3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101b21a60();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101b21a60; end: 101b21a9f;  */

void FUN_101b21a60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1c10;
  func_0x000107c61520(&UNK_10d9d1c10,&UNK_110444998);
  puRam0000000112e01068 = puVar1;
  return;
}



/* Entry: 101b21aa0; end: 101b21ab3;  */

void FUN_101b21aa0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101b218d0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101afa1b4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101b21ab4; end: 101b21ae3;  */

void FUN_101b21ab4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101b21ae4; end: 101b21ae7;  */

void FUN_101b21ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1c78;
  func_0x000107c61520(&UNK_10d9d1c78,&UNK_110444998);
  puRam0000000112e01070 = puVar1;
  return;
}



/* Entry: 101b21ae8; end: 101b21b27;  */

void FUN_101b21ae8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d1c78;
  func_0x000107c61520(&UNK_10d9d1c78,&UNK_110444998);
  puRam0000000112e01070 = puVar1;
  return;
}



/* Entry: 101b21b28; end: 101b21b7b;  */

long FUN_101b21b28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101b21b7c; end: 101b21c63;  */

undefined4 * FUN_101b21b7c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  uVar1 = *(undefined8 *)(param_2 + 10);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  return param_1;
}



/* Entry: 101b21c64; end: 101b21cc7;  */

undefined4 * FUN_101b21c64(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  uVar2 = *(undefined8 *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 101b21cc8; end: 101b21e0b;  */

int FUN_101b21cc8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b21e0c; end: 101b21e4b;  */

void FUN_101b21e0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9d1be4;
  func_0x000107c61520(&DAT_10d9d1be4,&UNK_110444998);
  puRam0000000112e01080 = puVar1;
  return;
}



/* Entry: 101b21e4c; end: 101b21f5b;  */

void FUN_101b21e4c(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_70 = (ulong)(param_1 - 1U);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (2 < param_1 - 1U) {
    uStack_70 = 0xffffffffffffffff;
  }
  uStack_68 = param_2;
  uStack_60 = param_3;
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_101b22c94,auStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  puVar1 = PTR_PTR_1126a89a8;
  func_0x000107c610f8(PTR_PTR_1126a89a8);
  func_0x000107c453e4();
  func_0x000107c59ae0();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c57dd0(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c545b4(puVar1);
  func_0x000107c61170(param_4);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c4bfb0();
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101b21f5c; end: 101b21fe7; -[_TtC37BillboardLoggingServiceImplementation30BillboardUserJourneyLoggerImpl logNetworkRequestEventFor:requestId:endpoint:] */

/* WARNING: Possible PIC construction at 0x000101b21fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b21fd0) */

void FUN_101b21f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_4);
  uVar1 = param_2;
  func_0x000107c5faec(param_5);
  func_0x000107c6157c(param_1);
  FUN_101b21e4c(param_3,param_4,param_2,param_5,uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b21fe8; end: 101b2219f;  */

void FUN_101b21fe8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                  )

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_90 [16];
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_80 = (ulong)(param_1 - 1U);
  if (2 < param_1 - 1U) {
    uStack_80 = 0xffffffffffffffff;
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar3);
  func_0x000100075034(&uStack_70,FUN_101b22d28,auStack_90,PTR___sSSN_11034da80);
  func_0x000107c61574(uVar3);
  puVar2 = PTR_PTR_1126a89b0;
  func_0x000107c610f8(PTR_PTR_1126a89b0);
  func_0x000107c453e4();
  func_0x000107c59ae0();
  uVar3 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uStack_68);
  func_0x000107c57dd0(puVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  FUN_101b22d40(0,0x112e01090,&PTR_PTR_1126ae868);
  func_0x000107c5fc48(param_2,uVar3);
  func_0x000107c5537c(puVar2);
  func_0x000107c61170(param_2);
  uVar3 = 0;
  FUN_101b22d40(0,0x112e01098,&PTR_PTR_1126ae860);
  func_0x000107c5fc48(param_3,uVar3);
  func_0x000107c5442c(puVar2);
  func_0x000107c61170(param_3);
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = param_4;
  }
  lVar1 = -0x2000000000000000;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  func_0x000107c61434(param_5);
  func_0x000107c5fadc(uVar3,lVar1);
  func_0x000107c6142c(lVar1);
  func_0x000107c5466c(puVar2);
  func_0x000107c61170(uVar3);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c4bfb0();
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101b221a0; end: 101b22283; -[_TtC37BillboardLoggingServiceImplementation30BillboardUserJourneyLoggerImpl logBillboardRankingEvaluationResultEventFor:ineligibleCampaigns:eligibleCampaigns:errorReason:] */

/* WARNING: Possible PIC construction at 0x000101b22260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b22264) */

void FUN_101b221a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101b22d40(0,0x112e01090,&PTR_PTR_1126ae868);
  func_0x000107c5fc54(param_4,uVar1);
  uVar1 = 0;
  FUN_101b22d40(0,0x112e01098,&PTR_PTR_1126ae860);
  func_0x000107c5fc54(param_5,uVar1);
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  func_0x000107c6157c(param_1);
  FUN_101b21fe8(param_3,param_4,param_5,param_6,uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 101b22284; end: 101b223db;  */

void FUN_101b22284(int param_1)

{
  undefined *puVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_90 [16];
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_80 = (ulong)(param_1 - 1U);
  if (2 < param_1 - 1U) {
    uStack_80 = 0xffffffffffffffff;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar2);
  func_0x000100075034(&uStack_70,FUN_101b23e28,auStack_90,PTR___sSSN_11034da80);
  func_0x000107c61574(uVar2);
  puVar1 = PTR_PTR_1126a89b8;
  func_0x000107c610f8(PTR_PTR_1126a89b8);
  func_0x000107c453e4();
  func_0x000107c59ae0();
  uVar2 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uStack_68);
  func_0x000107c57dd0(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c54428(puVar1);
  func_0x000107c55fdc(puVar1);
  func_0x000107c55fd8(puVar1);
  func_0x000107c55fd0(puVar1);
  func_0x000107c5fadc(in_x5,in_x6);
  func_0x000107c52940(puVar1);
  func_0x000107c61170(in_x5);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c4bfb0();
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 101b223dc; end: 101b22643; -[_TtC37BillboardLoggingServiceImplementation30BillboardUserJourneyLoggerImpl logBillboardLoadedEventFor:eligibleCampaign:loadSuccess:loadTimeMs:loadFailReason:assetUrl:] */

void FUN_101b223dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c5faec(param_8);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_101b22284(param_3,param_4,param_5,param_6,param_7,param_8,param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b22644; end: 101b22753;  */

undefined1  [16] FUN_101b22644(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x20;
  undefined1 auVar5 [16];
  
  uVar3 = unaff_x20;
  func_0x000107c3cfdc();
  iVar2 = (int)uVar3;
  if (iVar2 == 0xb) {
    func_0x000107c4de6c();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b22750);
      (*pcVar1)();
    }
    uVar3 = unaff_x20;
    func_0x000107c3abfc();
LAB_101b226dc:
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      uVar3 = uVar4 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar3 = param_2 >> 0x38 & 0xf;
      }
      if (uVar3 != 0) goto LAB_101b22738;
      func_0x000107c6142c(param_2);
    }
  }
  else {
    if (iVar2 == 0x1a) {
      func_0x000107c3d6b0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2274c);
        (*pcVar1)();
      }
      uVar3 = unaff_x20;
      func_0x000107c4182c();
      goto LAB_101b226dc;
    }
    if (iVar2 == 0xf) {
      func_0x000107c4de20();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b22754);
        (*pcVar1)();
      }
      uVar3 = unaff_x20;
      func_0x000107c41520();
      goto LAB_101b226dc;
    }
  }
  uVar4 = 0;
  param_2 = 0;
LAB_101b22738:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 101b22754; end: 101b227cf; -[_TtC37BillboardLoggingServiceImplementation30BillboardUserJourneyLoggerImpl logBillboardImpressionEventFor:eligibleCampaign:triggeredAction:] */

void FUN_101b22754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  func_0x000101b22480(param_3,param_4,param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101b227d0; end: 101b229bb;  */

void FUN_101b227d0(int param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long in_x4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [16];
  ulong uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar5 = (ulong)(param_1 - 1U);
  if (2 < param_1 - 1U) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_80 = uVar5;
  func_0x000107c6157c(uVar6);
  func_0x000100075034(&uStack_70,0x101b23e50,auStack_90,PTR___sSSN_11034da80);
  func_0x000107c61574(uVar6);
  lVar1 = lStack_68;
  uVar6 = uStack_70;
  func_0x000107c61174(in_x4);
  FUN_101b23aa8(in_x4);
  puVar2 = PTR_PTR_1126a89c8;
  func_0x000107c610f8(PTR_PTR_1126a89c8);
  func_0x000107c453e4();
  func_0x000107c59ae0();
  lVar4 = lVar1;
  func_0x000107c5fadc(uVar6);
  func_0x000107c6142c(lVar1);
  func_0x000107c57dd0(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c52194(puVar2);
  func_0x000107c52140(puVar2);
  puVar3 = puVar2;
  func_0x000107c5403c(puVar2);
  if ((in_x4 != 0) && (FUN_101b22644(), lVar4 != 0)) {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    func_0x000107c54040(puVar2);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c54428(puVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_80 = uVar5;
  func_0x000107c6157c(uVar7);
  uVar6 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100075034(&uStack_70,0x101b23e64,auStack_90,uVar6);
  func_0x000107c61574(uVar7);
  if (lStack_68 != 0) {
    uVar6 = uStack_70;
    func_0x000107c5fadc(uStack_70,lStack_68);
    func_0x000107c6142c(lStack_68);
    func_0x000107c54c6c(puVar2);
    func_0x000107c61170(uVar6);
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c4bfb0();
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101b229bc; end: 101b22a4f; -[_TtC37BillboardLoggingServiceImplementation30BillboardUserJourneyLoggerImpl logBillboardActionEventFor:eligibleCampaign:interactionType:tappedElement:triggeredAction:] */

void FUN_101b229bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c6157c(param_1);
  FUN_101b227d0(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101b22a50; end: 101b22abf;  */

void FUN_101b22a50(undefined8 param_1,undefined8 param_2,int param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uStack_40 = (ulong)(param_3 - 1U);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (2 < param_3 - 1U) {
    uStack_40 = 0xffffffffffffffff;
  }
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(0x101b23b4c,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101b22ac0; end: 101b22ba3;  */

void FUN_101b22ac0(long param_1,ulong param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 == 0) {
    FUN_101b233a0();
    if ((param_2 & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x000107c61558();
      lVar4 = *(long *)(param_1 + 8);
      if (iVar1 == 0) {
        FUN_101b23518();
      }
      func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar4 + 0x38) + param_4 * 0x10 + 8));
      func_0x000101b23914(param_4,lVar4);
      *(long *)(param_1 + 8) = lVar4;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c61558(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000107c61434(param_3);
    FUN_101b2325c(param_2,param_3,param_4,uVar2);
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  return;
}



/* Entry: 101b22ba4; end: 101b22c0f; -[_TtC37BillboardLoggingServiceImplementation30BillboardUserJourneyLoggerImpl setFriendsFeedEvaluationContext:for:] */

void FUN_101b22ba4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(param_1);
  FUN_101b22a50(param_3,param_2,param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b22c10; end: 101b22c93;  */

void FUN_101b22c10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  func_0x000107c61434(param_4);
  FUN_101b2325c(param_3,param_4,param_2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101b22c94; end: 101b22caf;  */

void FUN_101b22c94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b22c10(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101b22cb0; end: 101b22d27;  */

void FUN_101b22cb0(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (uint)param_3;
  lVar4 = *param_2;
  if ((*(long *)(lVar4 + 0x10) != 0) && (FUN_101b233a0(), (uVar3 & 1) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + param_3 * 0x10);
    uVar2 = puVar1[1];
    *param_1 = *puVar1;
    param_1[1] = uVar2;
    func_0x000107c61434();
    return;
  }
  *param_1 = 0xd000000000000012;
  param_1[1] = 0x800000010effc490;
  return;
}



/* Entry: 101b22d28; end: 101b22d3f;  */

void FUN_101b22d28(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b22cb0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101b22d40; end: 101b22d7f;  */

void FUN_101b22d40(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101b22d80; end: 101b22def;  */

void FUN_101b22d80(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = (uint)param_3;
  lVar4 = *(long *)(param_2 + 8);
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    FUN_101b233a0();
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x38) + param_3 * 0x10);
      uVar5 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434();
    }
  }
  *param_1 = uVar5;
  param_1[1] = uVar2;
  return;
}



/* Entry: 101b22df0; end: 101b22e1b;  */

void FUN_101b22df0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b22e1c; end: 101b230c3;  */

void FUN_101b22e1c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = 0;
  func_0x0001000285a8(0x112e01160);
  lVar3 = 7;
  func_0x000107c60498();
  uVar4 = 0xf;
  func_0x000101b233f8();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b23090);
    (*pcVar2)();
  }
  lVar1 = lVar3 + 0x40;
  uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar4 & 0x3f);
  *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar4 * 4) = 0xf;
  *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 8) = 0;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b23094);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  uVar4 = 0xb;
  func_0x000101b233f8();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b23098);
    (*pcVar2)();
  }
  uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar4 & 0x3f);
  *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar4 * 4) = 0xb;
  *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 8) = 1;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b2309c);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  uVar4 = 0x1a;
  func_0x000101b233f8();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230a0);
    (*pcVar2)();
  }
  uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar4 & 0x3f);
  *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar4 * 4) = 0x1a;
  *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 8) = 0;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230a4);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  uVar4 = 1;
  func_0x000101b233f8();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230a8);
    (*pcVar2)();
  }
  uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar4 & 0x3f);
  *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar4 * 4) = 1;
  *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 8) = 2;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    uVar4 = 5;
    func_0x000101b233f8();
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230b0);
      (*pcVar2)();
    }
    uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar4 & 0x3f);
    *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar4 * 4) = 5;
    *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 8) = 3;
    if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230b4);
      (*pcVar2)();
    }
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    uVar4 = 8;
    func_0x000101b233f8();
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230b8);
      (*pcVar2)();
    }
    uVar5 = uVar4 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar5) = *(ulong *)(lVar1 + uVar5) | 1L << (uVar4 & 0x3f);
    *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar4 * 4) = 8;
    *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 8) = 3;
    if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      uVar4 = 7;
      func_0x000101b233f8();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230c0);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) | 1L << (uVar4 & 0x3f);
      *(undefined4 *)(*(long *)(lVar3 + 0x30) + uVar4 * 4) = 7;
      *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar4 * 8) = 4;
      if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
        *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
        lRam0000000112e01158 = lVar3;
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230c4);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230bc);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b230ac);
  (*pcVar2)();
}



/* Entry: 101b230c4; end: 101b2321b;  */

void FUN_101b230c4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b2321c; end: 101b2325b;  */

bool FUN_101b2321c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101b2325c; end: 101b2339f;  */

void FUN_101b2325c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  FUN_101b233a0();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b2332c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_101b23680(lVar7);
    uVar3 = param_3;
    FUN_101b233a0();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      func_0x000101b23d10(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b232f4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_101b23518();
    lVar7 = *unaff_x20;
    goto joined_r0x000101b23340;
  }
  lVar7 = *unaff_x20;
joined_r0x000101b23340:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101b233a0);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Entry: 101b233a0; end: 101b2344f;  */

void FUN_101b233a0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101b23450; end: 101b23517;  */

void FUN_101b23450(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101b23518; end: 101b2367f;  */

void FUN_101b23518(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001000285a8(0x112e01148,&UNK_10d9d1e50);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_101b235f4;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 0x10);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 8) =
             *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 0x10);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        func_0x000107c61434();
        if (uVar8 != 0) break;
LAB_101b235f4:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b23680);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_101b23658;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_101b23658:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101b23680; end: 101b23aa7;  */

void FUN_101b23680(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  lVar14 = *unaff_x20;
  lVar1 = *(long *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e01148;
  func_0x0001000285a8(0x112e01148,&UNK_10d9d1e50);
  lVar7 = lVar14;
  func_0x000107c60490(lVar14,lVar1,param_2,uVar6);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_101b238e0:
    func_0x000107c61574(lVar14);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar14 + 0x40);
  uVar11 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar9 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b23910);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
            if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar14 + 0x10) = 0;
          }
          goto LAB_101b238e0;
        }
        uVar15 = puVar16[lVar18];
        lVar9 = lVar9 + 1;
      } while (uVar15 == 0);
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar18 << 6;
    uVar17 = *(ulong *)(*(long *)(lVar14 + 0x30) + uVar8 * 8);
    puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar8 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    uVar12 = uVar17;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar12 >> 6;
    uVar8 = -1L << (uVar12 & 0x3f) & (*(ulong *)(lVar1 + uVar10 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar4 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar12 = uVar10 + 1;
        if ((uVar12 == uVar8) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b23914);
          (*pcVar5)();
        }
        uVar10 = 0;
        if (uVar12 != uVar8) {
          uVar10 = uVar12;
        }
        bVar4 = (bool)(uVar12 == uVar8 | bVar4);
        uVar12 = *(ulong *)(lVar1 + uVar10 * 8);
      } while (uVar12 == 0xffffffffffffffff);
      uVar12 = ~uVar12;
      uVar8 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = 1L << (uVar8 & 0x3f) | *(ulong *)(lVar1 + uVar10);
    *(ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 8) = uVar17;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar9 = lVar18;
  } while( true );
}



/* Entry: 101b23aa8; end: 101b23b33;  */

undefined8 FUN_101b23aa8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0xffffffffffffffff;
  }
  else {
    if (lRam0000000112e01150 != -1) {
      param_2 = 0;
      func_0x000107c61568(0x112e01150);
    }
    lVar1 = lRam0000000112e01158;
    lVar2 = param_1;
    func_0x000107c3cfdc();
    if ((*(long *)(lVar1 + 0x10) == 0) || (func_0x000101b233f8(), (param_2 & 1) == 0)) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + lVar2 * 8);
    }
    func_0x000107c61170(param_1);
  }
  return uVar3;
}



/* Entry: 101b23b34; end: 101b23b87;  */

void FUN_101b23b34(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101b22d80(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101b23b88; end: 101b23be3;  */

/* WARNING: Possible PIC construction at 0x000101b23b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b23ba0) */

void FUN_101b23b88(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101b23be4; end: 101b23c3f;  */

undefined8 * FUN_101b23be4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101b23c40; end: 101b23c7b;  */

undefined8 * FUN_101b23c40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101b23c7c; end: 101b23d4b;  */

int FUN_101b23c7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b23d4c; end: 101b23d8f;  */

void FUN_101b23d4c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101b23d90; end: 101b23de7;  */

void FUN_101b23d90(void)

{
  FUN_101b23de8(0x112e01180,0x101b23d10,&UNK_10d9d1f04);
  return;
}



/* Entry: 101b23de8; end: 101b23e27;  */

void FUN_101b23de8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101b23e28; end: 101b23e77;  */

void FUN_101b23e28(void)

{
  FUN_101b22d28();
  return;
}



/* Entry: 101b23e78; end: 101b23e7f;  */

undefined8 * FUN_101b23e78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 101b23e80; end: 101b23f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b23e80(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_40;
  func_0x000100083b20(&puStack_40);
  uVar1 = *(undefined8 *)(puStack_40 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(puStack_40);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  func_0x000101b23b68();
  func_0x000107c613fc();
  puStack_40 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x0001000285a8(0x112e01088,&UNK_10d9d1dd0);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined ***)(lVar3 + 0x18) = ppuVar4;
  *param_1 = lVar3;
  return;
}



/* Entry: 101b23f50; end: 101b23f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b23f50(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_40;
  func_0x000100083b20(&puStack_40);
  uVar1 = *(undefined8 *)(puStack_40 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(puStack_40);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  lVar3 = 0;
  func_0x000101b23b68();
  func_0x000107c613fc();
  puStack_40 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x0001000285a8(0x112e01088,&UNK_10d9d1dd0);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined ***)(lVar3 + 0x18) = ppuVar4;
  *param_1 = lVar3;
  return;
}



/* Entry: 101b23f68; end: 101b23fb3;  */

undefined8 FUN_101b23f68(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101b23fb4(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101b23fb4; end: 101b2407f;  */

void FUN_101b23fb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = &UNK_110444db0;
  func_0x000107c613fc(&UNK_110444db0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  uVar2 = 7;
  func_0x0001009548b0(7,1,0,1,0,0,&UNK_10d9d2060,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 101b24080; end: 101b24097;  */

void FUN_101b24080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b24098,0,0);
  return;
}



/* Entry: 101b24098; end: 101b2419f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b24098(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar2 = *(long *)(unaff_x22 + 0x10);
    lVar3 = *(long *)(lVar2 + _DAT_1130360e0);
    lVar1 = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        lVar1 = lVar2;
        func_0x000107c43048();
        func_0x000107c615e8(lVar2);
        if ((int)lVar1 != 0) {
          func_0x000100083b20(unaff_x22 + 0x10);
          lVar2 = *(long *)(unaff_x22 + 0x10);
          lVar1 = lVar2;
          func_0x000107c4e624();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          lVar2 = lVar1;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar1);
          if (lVar2 != 0) {
            func_0x000107c50350(lVar2,param_2,0xc);
            func_0x000107c615e8(lVar2);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101b2419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b241a0; end: 101b241ef;  */

void FUN_101b241a0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b2436c;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b24098,0,0);
  return;
}



/* Entry: 101b241f0; end: 101b242b3;  */

void FUN_101b241f0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b242b4; end: 101b242df;  */

undefined ** FUN_101b242b4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 101b242e0; end: 101b2432f;  */

void FUN_101b242e0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b24330;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b24098,0,0);
  return;
}



/* Entry: 101b24330; end: 101b2436b;  */

void FUN_101b24330(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b24368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b2436c; end: 101b2436f;  */

void FUN_101b2436c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b24368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b24370; end: 101b2440b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b24370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e01278;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e01280) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e01288) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e01290) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2440c; end: 101b244d7; -[SponsoredLensEncryptedUserDataUpdater initWithLensScheduleServiceProvider:userPreferences:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2440c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e01278;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112e01280) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e01288) = param_4;
  *(undefined8 *)(param_1 + _DAT_112e01290) = param_5;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b244d8; end: 101b248b7;  */

/* WARNING: Removing unreachable block (ram,0x000101b248b0) */
/* WARNING: Removing unreachable block (ram,0x000101b248b4) */
/* WARNING: Removing unreachable block (ram,0x000101b248ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b244d8(undefined8 param_1,undefined **param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  ulong uVar14;
  long unaff_x20;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_90;
  undefined **appuStack_88 [4];
  undefined **ppuStack_68;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e01280);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  ppuVar15 = &PTR____CFConstantStringClassReference_110f310d8;
  ppuVar4 = ppuVar15;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f310d8);
  func_0x000107c5faec();
  ppuVar12 = param_2;
  func_0x000107c61170(ppuVar4);
  ppuVar16 = &PTR____CFConstantStringClassReference_110f78638;
  ppuVar4 = ppuVar16;
  ppuStack_90 = ppuVar15;
  appuStack_88[0] = param_2;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f78638);
  func_0x000107c5faec();
  ppuVar15 = ppuVar12;
  func_0x000107c61170(ppuVar4);
  ppuVar17 = &PTR____CFConstantStringClassReference_110f78658;
  ppuVar4 = ppuVar17;
  appuStack_88[1] = ppuVar16;
  appuStack_88[2] = ppuVar12;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f78658);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar4);
  uVar18 = 0;
  appuStack_88[3] = ppuVar17;
  ppuStack_68 = ppuVar15;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar1 = uVar18;
    if (uVar18 < 4) {
      uVar1 = 3;
    }
    pppuVar13 = appuStack_88 + uVar18 * 2;
    do {
      if (uVar18 == 3) {
        func_0x000107c61408(&ppuStack_90,3,PTR___sSSN_11034da80);
        uVar8 = 0;
        FUN_101b24df8(0,0x112d53088,&PTR_PTR_1126b6868);
        puVar9 = puVar7;
        func_0x000107c5fc48(puVar7,uVar8);
        func_0x000107c6142c(puVar7);
        lVar10 = lVar3;
        func_0x000107c51ff0();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar9);
        if (lVar10 == 0) {
          return;
        }
        lVar3 = lVar10;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar11 = lVar3;
          func_0x000107c4cd78();
          func_0x000107c61180();
          func_0x000107c615e8(lVar3);
          lVar3 = lVar11;
          func_0x000107c4da88(lVar11);
          func_0x000107c61180();
          func_0x000107c61170(lVar11);
          lVar11 = lVar3;
          func_0x000107c421ac(lVar3);
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          puVar7 = &UNK_110444f10;
          func_0x000107c613fc(&UNK_110444f10,0x18,7);
          func_0x000107c61614(puVar7 + 0x10,unaff_x20);
          pcStack_c0 = FUN_101b249b8;
          puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d8 = 0x42000000;
          pcStack_d0 = FUN_101b248b8;
          puStack_c8 = &UNK_110444f28;
          ppuVar4 = &puStack_e0;
          puStack_b8 = puVar7;
          func_0x000107c60bc4(ppuVar4);
          func_0x000107c61574(puStack_b8);
          lVar3 = lVar11;
          func_0x000107c5c320(lVar11);
          func_0x000107c61180();
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c61170(lVar11);
          func_0x000107c3e924(lVar3);
          func_0x000107c61170(lVar3);
        }
        func_0x000107c61170(lVar10);
        return;
      }
      uVar18 = uVar18 + 1;
      if (uVar1 + 1 == uVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b248ac);
        (*pcVar2)();
      }
      ppuVar4 = pppuVar13[-1];
      ppuVar12 = *pppuVar13;
      puVar9 = PTR_PTR_1126b6868;
      func_0x000107c610f8();
      func_0x000107c61434(ppuVar12);
      func_0x000107c5fadc(ppuVar4,ppuVar12);
      func_0x000107c6142c(ppuVar12);
      func_0x000107c47914();
      func_0x000107c61170(ppuVar4);
      pppuVar13 = pppuVar13 + 2;
    } while (puVar9 == (undefined *)0x0);
    puVar6 = puVar7;
    func_0x000107c61550();
    if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
       (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar5 = puVar7;
        }
        func_0x000107c60480(puVar5);
      }
      puVar6 = (undefined *)0x0;
      func_0x00010109d890(0,puVar5 + 1,1,puVar7);
    }
    uVar14 = (ulong)puVar6 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar14 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x00010109d890(puVar7,uVar1 + 1,1,puVar6);
      uVar14 = (ulong)puVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar14 + uVar1 * 8 + 0x20) = puVar9;
  } while( true );
}



/* Entry: 101b248b8; end: 101b24903;  */

void FUN_101b248b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101b24904; end: 101b2492b; -[SponsoredLensEncryptedUserDataUpdater startObserving] */

void FUN_101b24904(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b244d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2492c; end: 101b2495f;  */

void FUN_101b2492c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b24960; end: 101b249b7; -[SponsoredLensEncryptedUserDataUpdater .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b2497c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b24980) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b24960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e01280));
  return;
}



/* Entry: 101b249b8; end: 101b24c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b249b8(undefined *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  uint uVar10;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar7,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  puVar4 = param_1;
  func_0x000107c427b0();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
LAB_101b24acc:
    puVar4 = param_1;
    func_0x000107c3d150();
    func_0x000107c61180();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar4 != (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
      FUN_101b24df8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
      puVar5 = puVar4;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar4);
    }
    puVar4 = puVar5;
    FUN_101b24ca8();
    puVar8 = puVar7;
    func_0x000107c6142c(puVar5);
    if (puVar7 == (undefined1 *)0x0) {
      func_0x000107c4ec2c();
      func_0x000107c61180();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (param_1 != (undefined *)0x0) {
        puVar8 = (undefined1 *)0x0;
        FUN_101b24df8(0,0x112d4d630,&PTR_PTR_1126ae6a8);
        puVar5 = param_1;
        func_0x000107c5fc54();
        func_0x000107c61170(param_1);
      }
      puVar4 = puVar5;
      FUN_101b24ca8();
      func_0x000107c6142c(puVar5);
      puVar7 = puVar8;
      goto joined_r0x000101b24ba8;
    }
  }
  else {
    puVar5 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    uVar2 = (uint)((ulong)puVar7 >> 0x20);
    uVar10 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        if (((ulong)puVar7 & 0xff000000000000) == 0) {
LAB_101b24ac0:
          func_0x00010006c090(puVar5);
          goto LAB_101b24acc;
        }
      }
      else if ((long)(int)puVar5 == (long)puVar5 >> 0x20) goto LAB_101b24ac0;
    }
    else if ((uVar10 != 2) || (*(long *)(puVar5 + 0x10) == *(long *)(puVar5 + 0x18)))
    goto LAB_101b24ac0;
    puVar4 = puVar5;
    puVar8 = puVar7;
    func_0x000107c5ee20();
    puVar6 = puVar4;
    func_0x000107c3e688();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar6 == (undefined *)0x0) {
      func_0x00010006c090(puVar5,puVar7);
      goto LAB_101b24c4c;
    }
    puVar4 = puVar6;
    func_0x000107c5faec();
    func_0x00010006c090(puVar5,puVar7);
    func_0x000107c61170(puVar6);
    puVar7 = puVar8;
joined_r0x000101b24ba8:
    if (puVar7 == (undefined1 *)0x0) goto LAB_101b24c4c;
  }
  uVar1 = (ulong)puVar4 & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c6142c(puVar7);
  }
  else {
    lVar9 = *(long *)(lVar3 + _DAT_112e01288);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 == 0) {
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(puVar7);
      return;
    }
    func_0x000107c5fadc(puVar4,puVar7);
    func_0x000107c54564(lVar9);
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(puVar7);
    func_0x000107c61170(puVar4);
    lVar3 = lVar9;
  }
LAB_101b24c4c:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101b24c6c; end: 101b24c87;  */

void FUN_101b24c6c(long param_1,long param_2)

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



/* Entry: 101b24c88; end: 101b24ca7;  */

void FUN_101b24c88(void)

{
  func_0x000107c61168(&PTR_PTR_1127f74f8);
  return;
}



/* Entry: 101b24ca8; end: 101b24df7;  */

undefined1  [16] FUN_101b24ca8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    lVar9 = 4;
    do {
      uVar6 = lVar9 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b24db4);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + lVar9 * 8);
        func_0x000107c61174();
        uVar7 = param_2;
      }
      else {
        uVar3 = uVar6;
        uVar7 = param_1;
        func_0x000100ff3f88();
      }
      uVar1 = lVar9 - 3;
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b24db0);
        (*pcVar2)();
      }
      uVar6 = uVar3;
      func_0x000107c5d2d8();
      func_0x000107c61180();
      param_2 = uVar7;
      if (uVar6 == 0) {
LAB_101b24cec:
        func_0x000107c61170(uVar3);
      }
      else {
        uVar4 = uVar6;
        func_0x000107c427b0();
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        param_2 = uVar7;
        if (uVar4 == 0) goto LAB_101b24cec;
        uVar8 = uVar4;
        func_0x000107c5faec();
        param_2 = uVar7;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        uVar6 = uVar8 & 0xffffffffffff;
        if ((uVar7 & 0x2000000000000000) != 0) {
          uVar6 = uVar7 >> 0x38 & 0xf;
        }
        if (uVar6 != 0) goto LAB_101b24dd4;
        func_0x000107c6142c(uVar7);
      }
      lVar9 = lVar9 + 1;
    } while (uVar1 != uVar5);
  }
  uVar8 = 0;
  uVar7 = 0;
LAB_101b24dd4:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Entry: 101b24df8; end: 101b24e37;  */

void FUN_101b24df8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101b24e38; end: 101b24e83;  */

undefined8 FUN_101b24e38(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001002f19c4(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101b24e84; end: 101b24ebb;  */

void FUN_101b24e84(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  func_0x000103b973ec();
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 101b24ebc; end: 101b24f03;  */

void FUN_101b24ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b24f04; end: 101b24fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b24f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e013a0) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e013a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e013b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e013b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e013c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e013c8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e013d0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b24fbc; end: 101b25037;  */

void FUN_101b24fbc(void)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126aec70;
  func_0x000107c61168();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c560c0();
    func_0x000107c61170(puVar2);
    func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b25038);
  (*pcVar1)();
}



/* Entry: 101b25038; end: 101b250c7; -[_TtC21AuthenticationFeature25ActiveUserSessionWorkflow dealloc] */

void FUN_101b25038(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar3 = PTR_PTR_1126aec70;
  func_0x000107c61168();
  func_0x000107c61174();
  func_0x000107c5a9f0();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c560c0();
    func_0x000107c61170(puVar3);
    uStack_40 = param_1;
    uStack_38 = uVar2;
    func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b250c8);
  (*pcVar1)();
}



/* Entry: 101b250c8; end: 101b2514f; -[_TtC21AuthenticationFeature25ActiveUserSessionWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b250e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b25124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b250e8) */
/* WARNING: Removing unreachable block (ram,0x000101b25128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b250c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e013c0));
  return;
}



/* Entry: 101b25150; end: 101b2516f;  */

undefined1  [16] FUN_101b25150(void)

{
  return ZEXT816(0x110445190);
}



/* Entry: 101b25170; end: 101b2519b; -[_TtC21AuthenticationFeature25ActiveUserSessionWorkflow init] */

void FUN_101b25170(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AuthenticationFeature.ActiveUserSessionWorkflow",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2519c);
  (*pcVar1)();
}



/* Entry: 101b2519c; end: 101b251ef;  */

long FUN_101b2519c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c3e85c(param_2);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 101b251f0; end: 101b25213;  */

void FUN_101b251f0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b25214; end: 101b2524b;  */

undefined1  [16] FUN_101b25214(void)

{
  return ZEXT816(0);
}



/* Entry: 101b2524c; end: 101b252bf;  */

void FUN_101b2524c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126a89d0;
  func_0x000107c610f8();
  func_0x000107c46914();
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}


