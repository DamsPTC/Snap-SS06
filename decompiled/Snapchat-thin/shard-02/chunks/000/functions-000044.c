/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101732788; end: 101732c43;  */

uint FUN_101732788(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_128 [56];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar9 = param_1[6];
  uVar5 = param_1[5];
  uVar10 = param_1[8];
  uVar6 = param_1[7];
  uVar15 = param_1[10];
  uVar13 = param_1[9];
  uVar3 = param_1[0xb];
  uVar11 = param_2[6];
  uVar7 = param_2[5];
  uVar16 = param_2[8];
  uVar14 = param_2[7];
  uVar12 = param_2[10];
  uVar8 = param_2[9];
  uVar4 = param_2[0xb];
  uStack_f0 = uVar7;
  uStack_e8 = uVar11;
  uStack_e0 = uVar14;
  uStack_d8 = uVar16;
  uStack_d0 = uVar8;
  uStack_c8 = uVar12;
  uStack_c0 = uVar4;
  uStack_b0 = uVar5;
  uStack_a8 = uVar9;
  uStack_a0 = uVar6;
  uStack_98 = uVar10;
  uStack_90 = uVar13;
  uStack_88 = uVar15;
  uStack_80 = uVar3;
  if (uVar9 == 0) {
    if (uVar11 != 0) goto LAB_101732934;
    FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
    FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
LAB_101732a1c:
    func_0x0001017318e0(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar3);
    uVar5 = *param_1;
    if ((((uVar5 == *param_2) && (param_1[1] == param_2[1])) ||
        (func_0x000107c605b8(), (uVar5 & 1) != 0)) &&
       (((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0 &&
        (((*(byte *)((long)param_1 + 0x11) ^ *(byte *)((long)param_2 + 0x11)) & 1) == 0)))) {
      uVar5 = param_1[3];
      func_0x000100e25fcc(uVar5,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar5;
      goto LAB_101732b00;
    }
  }
  else {
    if (uVar11 == 0) {
LAB_101732934:
      FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
      FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
      func_0x0001017318e0(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar3);
      uVar5 = uVar7;
      uVar9 = uVar11;
      uVar6 = uVar14;
      uVar10 = uVar16;
      uVar13 = uVar8;
      uVar15 = uVar12;
      uVar3 = uVar4;
    }
    else {
      if (((uVar5 == uVar7) && (uVar9 == uVar11)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,uVar9,uVar7,uVar11,0), (uVar2 & 1) != 0)) {
        if ((((uVar6 == uVar14) && (uVar10 == uVar16)) ||
            (uVar2 = uVar6, func_0x000107c605b8(uVar6,uVar10,uVar14,uVar16,0), (uVar2 & 1) != 0)) &&
           (uVar13 == uVar8)) {
          FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
          FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
          uVar8 = uVar15;
          func_0x000100e25fcc(uVar15,uVar3,uVar12,uVar4);
          func_0x0001017318e0(uVar7,uVar11,uVar14,uVar16,uVar13,uVar12,uVar4);
          if ((uVar8 & 1) != 0) goto LAB_101732a1c;
          goto LAB_101732af4;
        }
        FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
        FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
      }
      else {
        FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
        FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
      }
      func_0x0001017318e0(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar4);
    }
LAB_101732af4:
    func_0x0001017318e0(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar3);
  }
  uVar1 = 0;
LAB_101732b00:
  return uVar1 & 1;
}



/* Entry: 101732c44; end: 101732d43;  */

void FUN_101732c44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982a08;
  func_0x000107c61520(&UNK_10d982a08,&UNK_1104002b8);
  puRam0000000112dc4888 = puVar1;
  return;
}



/* Entry: 101732d44; end: 101732e3b;  */

/* WARNING: Possible PIC construction at 0x000101732d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101732dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101732e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101732e14) */
/* WARNING: Removing unreachable block (ram,0x000101732dcc) */
/* WARNING: Removing unreachable block (ram,0x000101732d78) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101732d44(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar14;
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
  
  pbVar12 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar13 = (byte *)param_2[1];
  if ((byte *)*param_1 == (byte *)*param_2 && (byte *)param_1[1] == (byte *)param_2[1]) {
    if ((param_1[2] != param_2[2]) ||
       ((uVar14 = param_1[3], uVar14 != param_2[3] || param_1[4] != param_2[4] &&
        (func_0x000107c605b8(), (uVar14 & 1) == 0)))) {
      return (byte *)0x0;
    }
    pbVar12 = (byte *)param_1[5];
    pbVar16 = (byte *)param_1[6];
    pbVar17 = (byte *)param_2[5];
    pbVar13 = (byte *)param_2[6];
    if ((pbVar12 == pbVar17) && (pbVar16 == pbVar13)) {
      uVar14 = param_1[7];
      if (((uVar14 != param_2[7]) || (param_1[8] != param_2[8])) &&
         (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
        return (byte *)0x0;
      }
      pbVar12 = (byte *)param_1[9];
      pbVar16 = (byte *)param_1[10];
      pbVar17 = (byte *)param_2[9];
      pbVar13 = (byte *)param_2[10];
      if ((pbVar12 == pbVar17) && (pbVar16 == pbVar13)) {
        pbVar10 = (byte *)param_1[0xb];
        pbVar25 = (byte *)param_1[0xc];
        lVar24 = param_2[0xb];
        uVar14 = param_2[0xc];
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
          uVar5 = (uint)(uVar14 >> 0x20);
          uVar21 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar15 = pbVar25;
          if ((ulong)pbVar25 >> 0x3e == 3) {
            uVar20 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                (uVar14 >> 0x3e < 3)) ||
               ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))
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
              uVar22 = uVar14 >> 0x30 & 0xff;
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
                  pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                  pbVar15 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar15 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar15 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar26 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar15 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
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
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar14;
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
          pbVar16 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar15[0x28] == 0) {
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar24,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar15[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar13 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 == pbVar17) && (pbVar25 == pbVar13)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar15[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar13 = *(byte **)(pbVar15 + 8);
              lVar24 = *(long *)(pbVar15 + 0x18);
              if ((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) {
                if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
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
            break;
          }
          lVar26 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar15[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar13 = *(byte **)(pbVar15 + 8);
              if (((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) &&
                 (pbVar12 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                 pbVar13 = *(byte **)(pbVar15 + 0x18),
                 pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
                return (byte *)0x1;
              }
              break;
            }
            if (pbVar15[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar15 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)(pbVar15 + 0x20);
            if (pbVar25 == (byte *)0x0) {
              if (pbVar13 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar12 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 != pbVar17) || (pbVar25 != pbVar13)) break;
            }
            if (lVar26 != 0) {
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
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
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar24 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar24;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar26;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar15 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                lVar26 == 0)) {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar15 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar15 != 2) {
                return (byte *)0x0;
              }
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar15[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar24 = *(long *)(pbVar15 + 8);
          uVar14 = *(ulong *)(pbVar15 + 0x10);
          lVar26 = *(long *)pbVar15;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar12,pbVar16,pbVar17,pbVar13,0);
  return pbVar12;
}



/* Entry: 101732e3c; end: 101733337;  */

uint FUN_101732e3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_190 [96];
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != *(long *)(param_4 + 0x10)) {
    return 0;
  }
  if (lVar3 == 0 || param_1 == param_4) {
LAB_101732e80:
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
LAB_101733314:
    return uVar1 & 1;
  }
  puVar5 = (ulong *)(param_1 + 0x20);
  puVar4 = (ulong *)(param_4 + 0x20);
  do {
    lVar3 = lVar3 + -1;
    uVar8 = puVar5[5];
    uStack_110 = puVar5[4];
    uVar16 = puVar5[7];
    uVar12 = puVar5[6];
    uVar9 = puVar5[9];
    uVar6 = puVar5[8];
    uVar17 = puVar5[0xb];
    uVar13 = puVar5[10];
    uStack_128 = puVar5[1];
    uStack_130 = *puVar5;
    uStack_118 = puVar5[3];
    uStack_120 = puVar5[2];
    uVar10 = puVar4[5];
    uStack_b0 = puVar4[4];
    uVar18 = puVar4[7];
    uVar14 = puVar4[6];
    uVar11 = puVar4[9];
    uVar7 = puVar4[8];
    uVar19 = puVar4[0xb];
    uVar15 = puVar4[10];
    uStack_c8 = puVar4[1];
    uStack_d0 = *puVar4;
    uStack_b8 = puVar4[3];
    uStack_c0 = puVar4[2];
    uStack_108 = uVar8;
    uStack_100 = uVar12;
    uStack_f8 = uVar16;
    uStack_f0 = uVar6;
    uStack_e8 = uVar9;
    uStack_e0 = uVar13;
    uStack_d8 = uVar17;
    uStack_a8 = uVar10;
    uStack_a0 = uVar14;
    uStack_98 = uVar18;
    uStack_90 = uVar7;
    uStack_88 = uVar11;
    uStack_80 = uVar15;
    uStack_78 = uVar19;
    if (uVar12 != 0) {
      if (uVar14 == 0) goto LAB_10173315c;
      if (((uVar8 == uVar10) && (uVar12 == uVar14)) ||
         (uVar2 = uVar8, func_0x000107c605b8(uVar8,uVar12,uVar10,uVar14,0), (uVar2 & 1) != 0)) {
        if ((((uVar16 != uVar18) || (uVar6 != uVar7)) &&
            (uVar2 = uVar16, func_0x000107c605b8(uVar16,uVar6,uVar18,uVar7,0), (uVar2 & 1) == 0)) ||
           (uVar9 != uVar11)) {
          func_0x000101739384(&uStack_130,auStack_190);
          func_0x000101739384(&uStack_d0,auStack_190);
          goto LAB_101733268;
        }
        func_0x000101739384(&uStack_130,auStack_190);
        func_0x000101739384(&uStack_d0,auStack_190);
        FUN_101731894(uVar8,uVar12,uVar16,uVar6,uVar9,uVar13,uVar17);
        FUN_101731894(uVar10,uVar14,uVar18,uVar7,uVar9,uVar15,uVar19);
        uVar11 = uVar13;
        func_0x000100e25fcc(uVar13,uVar17,uVar15,uVar19);
        func_0x0001017318e0(uVar10,uVar14,uVar18,uVar7,uVar9,uVar15,uVar19);
        if ((uVar11 & 1) != 0) goto LAB_1017330b8;
      }
      else {
        func_0x000101739384(&uStack_130,auStack_190);
        func_0x000101739384(&uStack_d0,auStack_190);
LAB_101733268:
        FUN_101731894(uVar8,uVar12,uVar16,uVar6,uVar9,uVar13,uVar17);
        FUN_101731894(uVar10,uVar14,uVar18,uVar7,uVar11,uVar15,uVar19);
        func_0x0001017318e0(uVar10,uVar14,uVar18,uVar7,uVar11,uVar15,uVar19);
      }
      func_0x0001017318e0(uVar8,uVar12,uVar16,uVar6,uVar9,uVar13,uVar17);
      goto LAB_101733300;
    }
    if (uVar14 != 0) {
LAB_10173315c:
      FUN_101731894(uVar8,uVar12,uVar16,uVar6,uVar9,uVar13,uVar17);
      FUN_101731894(uVar10,uVar14,uVar18,uVar7,uVar11,uVar15,uVar19);
      func_0x0001017318e0(uVar8,uVar12,uVar16,uVar6,uVar9,uVar13,uVar17);
      func_0x0001017318e0(uVar10,uVar14,uVar18,uVar7,uVar11,uVar15,uVar19);
      uVar1 = 0;
      goto LAB_101733314;
    }
    func_0x000101739384(&uStack_130,auStack_190);
    func_0x000101739384(&uStack_d0,auStack_190);
    FUN_101731894(uVar8,0,uVar16,uVar6,uVar9,uVar13,uVar17);
    FUN_101731894(uVar10,0,uVar18,uVar7,uVar11,uVar15,uVar19);
LAB_1017330b8:
    func_0x0001017318e0(uVar8,uVar12,uVar16,uVar6,uVar9,uVar13,uVar17);
    if (((uStack_130 != uStack_d0) || (uStack_128 != uStack_c8)) &&
       (uVar6 = uStack_130, func_0x000107c605b8(), (uVar6 & 1) == 0)) {
LAB_101733300:
      func_0x0001017393b8(&uStack_d0);
      func_0x0001017393b8(&uStack_130);
      uVar1 = 0;
      goto LAB_101733314;
    }
    if ((char)uStack_120 != (char)uStack_c0) goto LAB_101733300;
    if (uStack_120._1_1_ != uStack_c0._1_1_) goto LAB_101733300;
    uVar6 = uStack_118;
    func_0x000100e25fcc(uStack_118,uStack_110,uStack_b8,uStack_b0);
    func_0x0001017393b8(&uStack_d0);
    func_0x0001017393b8(&uStack_130);
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
      goto LAB_101733314;
    }
    if (lVar3 == 0) goto LAB_101732e80;
    puVar5 = puVar5 + 0xc;
    puVar4 = puVar4 + 0xc;
  } while( true );
}



/* Entry: 101733338; end: 101733437;  */

void FUN_101733338(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc48c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982c90;
  func_0x000107c61520(&UNK_10d982c90,&UNK_110400458);
  puRam0000000112dc48c0 = puVar1;
  return;
}



/* Entry: 101733438; end: 1017334b3;  */

/* WARNING: Possible PIC construction at 0x000101733468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010173346c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101733438(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
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
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
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
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
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
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
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



/* Entry: 1017334b4; end: 101733873;  */

void FUN_1017334b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982ff0;
  func_0x000107c61520(&UNK_10d982ff0,&UNK_110400668);
  puRam0000000112dc4900 = puVar1;
  return;
}



/* Entry: 101733874; end: 1017339a3;  */

/* WARNING: Possible PIC construction at 0x0001017338a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017338e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101733930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101733978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010173397c) */
/* WARNING: Removing unreachable block (ram,0x000101733934) */
/* WARNING: Removing unreachable block (ram,0x0001017338ec) */
/* WARNING: Removing unreachable block (ram,0x0001017338a8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101733874(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar14;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      uVar14 = param_1[6];
      if (((uVar14 != param_2[6]) || (param_1[7] != param_2[7])) &&
         (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
        return (byte *)0x0;
      }
      pbVar13 = (byte *)param_1[8];
      pbVar16 = (byte *)param_1[9];
      pbVar17 = (byte *)param_2[8];
      pbVar12 = (byte *)param_2[9];
      if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
        uVar14 = param_1[10];
        if (((uVar14 != param_2[10]) || (param_1[0xb] != param_2[0xb])) &&
           (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
          return (byte *)0x0;
        }
        pbVar13 = (byte *)param_1[0xc];
        pbVar16 = (byte *)param_1[0xd];
        pbVar17 = (byte *)param_2[0xc];
        pbVar12 = (byte *)param_2[0xd];
        if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
          pbVar10 = (byte *)param_1[0xe];
          pbVar25 = (byte *)param_1[0xf];
          lVar24 = param_2[0xe];
          uVar14 = param_2[0xf];
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
            uVar5 = (uint)(uVar14 >> 0x20);
            uVar21 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar15 = pbVar25;
            if ((ulong)pbVar25 >> 0x3e == 3) {
              uVar20 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                  (uVar14 >> 0x3e < 3)) ||
                 ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))
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
                uVar22 = uVar14 >> 0x30 & 0xff;
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
                    pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                    pbVar15 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar15) {
                        pbVar15 = unaff_x23;
                      }
                      pbVar15 = pbVar15 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar26 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar15 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
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
                    pbVar15 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
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
            pbVar13 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar23 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar16 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar24 = *(long *)pbVar15;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar13,lVar24,uVar11);
                  return (byte *)(ulong)((uint)pbVar13 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar15[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar12 = *(byte **)(pbVar15 + 0x10);
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar24,uVar11);
                if (((ulong)pbVar13 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar13 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                lVar24 = *(long *)(pbVar15 + 0x18);
                if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (lVar24 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar24);
                    func_0x000107c61174();
                    pbVar12 = pbVar23;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar23);
                    func_0x000107c61170(lVar24);
                    pbVar23 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar24 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              break;
            }
            lVar26 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                   (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar12 = *(byte **)(pbVar15 + 0x18),
                   pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                break;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)(pbVar15 + 0x20);
              if (pbVar25 == (byte *)0x0) {
                if (pbVar12 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar12 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar13 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
              }
              if (lVar26 != 0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar23 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                  lVar26 == 0) && pbVar25 == (byte *)0x0) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar26 = *(long *)(pbVar15 + 0x20);
                lVar24 = *(long *)(pbVar15 + 0x18);
                bVar27 = pbVar15[8] | (byte)lVar24;
                bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
                bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
                bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
                bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
                bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
                bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
                bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
                bVar35 = pbVar15[0x10] | (byte)lVar26;
                bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
                bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
                bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
                bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
                bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
                bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
                bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar13 == (byte *)0x1) &&
                 (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                  lVar26 == 0)) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar24 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar24;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar26;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar26 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar26,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 1017339a4; end: 101733d23;  */

void FUN_1017339a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc49d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983a10;
  func_0x000107c61520(&UNK_10d983a10,&UNK_110400de8);
  puRam0000000112dc49d8 = puVar1;
  return;
}



/* Entry: 101733d24; end: 101733d37;  */

void FUN_101733d24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101733d38();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101733d78)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101733d38; end: 101733db7;  */

void FUN_101733d38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982720;
  func_0x000107c61520(&UNK_10d982720,&UNK_110400138);
  puRam0000000112dc4a98 = puVar1;
  return;
}



/* Entry: 101733db8; end: 101733dbb;  */

void FUN_101733db8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc4aa8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dc4ab0;
  func_0x00010002969c(0x112dc4ab0,&UNK_10d9826a8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dc4aa8 = puVar2;
  return;
}



/* Entry: 101733dbc; end: 101733e0b;  */

void FUN_101733dbc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dc4aa8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dc4ab0;
  func_0x00010002969c(0x112dc4ab0,&UNK_10d9826a8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dc4aa8 = puVar2;
  return;
}



/* Entry: 101733e0c; end: 101733e0f;  */

void FUN_101733e0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982760;
  func_0x000107c61520(&UNK_10d982760,&UNK_110400138);
  puRam0000000112dc4ab8 = puVar1;
  return;
}



/* Entry: 101733e10; end: 101733e4f;  */

void FUN_101733e10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ab8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982760;
  func_0x000107c61520(&UNK_10d982760,&UNK_110400138);
  puRam0000000112dc4ab8 = puVar1;
  return;
}



/* Entry: 101733e50; end: 101733e73;  */

void FUN_101733e50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101733e74();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101733e74; end: 101733eb3;  */

void FUN_101733e74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982830;
  func_0x000107c61520(&UNK_10d982830,&UNK_1104001b0);
  puRam0000000112dc4ac0 = puVar1;
  return;
}



/* Entry: 101733eb4; end: 101733ec7;  */

void FUN_101733eb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101731b60)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101733ec8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101733ec8; end: 101733f07;  */

void FUN_101733ec8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9827e8;
  func_0x000107c61520(&DAT_10d9827e8,&UNK_1104001b0);
  puRam0000000112dc4ac8 = puVar1;
  return;
}



/* Entry: 101733f08; end: 101733f0b;  */

void FUN_101733f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982898;
  func_0x000107c61520(&UNK_10d982898,&UNK_1104001b0);
  puRam0000000112dc4ad0 = puVar1;
  return;
}



/* Entry: 101733f0c; end: 101733f4b;  */

void FUN_101733f0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982898;
  func_0x000107c61520(&UNK_10d982898,&UNK_1104001b0);
  puRam0000000112dc4ad0 = puVar1;
  return;
}



/* Entry: 101733f4c; end: 101733f6f;  */

void FUN_101733f4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101733f70();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101733f70; end: 101733faf;  */

void FUN_101733f70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982908;
  func_0x000107c61520(&UNK_10d982908,&UNK_110400230);
  puRam0000000112dc4ad8 = puVar1;
  return;
}



/* Entry: 101733fb0; end: 101733fc7;  */

void FUN_101733fb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101732160();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101731b20();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101733fc8; end: 101734007;  */

void FUN_101733fc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982970;
  func_0x000107c61520(&UNK_10d982970,&UNK_110400230);
  puRam0000000112dc4ae0 = puVar1;
  return;
}



/* Entry: 101734008; end: 10173402b;  */

void FUN_101734008(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10173402c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10173402c; end: 10173406b;  */

void FUN_10173402c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9829e0;
  func_0x000107c61520(&UNK_10d9829e0,&UNK_1104002b8);
  puRam0000000112dc4ae8 = puVar1;
  return;
}



/* Entry: 10173406c; end: 10173407f;  */

void FUN_10173406c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101732c44();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101734080();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734080; end: 1017340bf;  */

void FUN_101734080(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d982998;
  func_0x000107c61520(&DAT_10d982998,&UNK_1104002b8);
  puRam0000000112dc4af0 = puVar1;
  return;
}



/* Entry: 1017340c0; end: 1017340c3;  */

void FUN_1017340c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4af8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982a48;
  func_0x000107c61520(&UNK_10d982a48,&UNK_1104002b8);
  puRam0000000112dc4af8 = puVar1;
  return;
}



/* Entry: 1017340c4; end: 101734103;  */

void FUN_1017340c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4af8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982a48;
  func_0x000107c61520(&UNK_10d982a48,&UNK_1104002b8);
  puRam0000000112dc4af8 = puVar1;
  return;
}



/* Entry: 101734104; end: 101734127;  */

void FUN_101734104(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734128();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734128; end: 101734167;  */

void FUN_101734128(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982ab8;
  func_0x000107c61520(&UNK_10d982ab8,&UNK_110400338);
  puRam0000000112dc4b00 = puVar1;
  return;
}



/* Entry: 101734168; end: 10173417f;  */

void FUN_101734168(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101732c84)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1017321a0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734180; end: 1017341bf;  */

void FUN_101734180(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982b20;
  func_0x000107c61520(&UNK_10d982b20,&UNK_110400338);
  puRam0000000112dc4b08 = puVar1;
  return;
}



/* Entry: 1017341c0; end: 1017341e3;  */

void FUN_1017341c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1017341e4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1017341e4; end: 101734223;  */

void FUN_1017341e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982b90;
  func_0x000107c61520(&UNK_10d982b90,&UNK_1104003d8);
  puRam0000000112dc4b10 = puVar1;
  return;
}



/* Entry: 101734224; end: 101734237;  */

void FUN_101734224(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101732cc4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101734238();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734238; end: 101734277;  */

void FUN_101734238(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d982b48;
  func_0x000107c61520(&DAT_10d982b48,&UNK_1104003d8);
  puRam0000000112dc4b18 = puVar1;
  return;
}



/* Entry: 101734278; end: 10173427b;  */

void FUN_101734278(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982bf8;
  func_0x000107c61520(&UNK_10d982bf8,&UNK_1104003d8);
  puRam0000000112dc4b20 = puVar1;
  return;
}



/* Entry: 10173427c; end: 1017342bb;  */

void FUN_10173427c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982bf8;
  func_0x000107c61520(&UNK_10d982bf8,&UNK_1104003d8);
  puRam0000000112dc4b20 = puVar1;
  return;
}



/* Entry: 1017342bc; end: 1017342df;  */

void FUN_1017342bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1017342e0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1017342e0; end: 10173431f;  */

void FUN_1017342e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982c68;
  func_0x000107c61520(&UNK_10d982c68,&UNK_110400458);
  puRam0000000112dc4b28 = puVar1;
  return;
}



/* Entry: 101734320; end: 101734333;  */

void FUN_101734320(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101733338();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101734334();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734334; end: 101734373;  */

void FUN_101734334(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d982c20;
  func_0x000107c61520(&DAT_10d982c20,&UNK_110400458);
  puRam0000000112dc4b30 = puVar1;
  return;
}



/* Entry: 101734374; end: 101734377;  */

void FUN_101734374(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982cd0;
  func_0x000107c61520(&UNK_10d982cd0,&UNK_110400458);
  puRam0000000112dc4b38 = puVar1;
  return;
}



/* Entry: 101734378; end: 1017343b7;  */

void FUN_101734378(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982cd0;
  func_0x000107c61520(&UNK_10d982cd0,&UNK_110400458);
  puRam0000000112dc4b38 = puVar1;
  return;
}



/* Entry: 1017343b8; end: 1017343db;  */

void FUN_1017343b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1017343dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1017343dc; end: 10173441b;  */

void FUN_1017343dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982d40;
  func_0x000107c61520(&UNK_10d982d40,&UNK_1104004d8);
  puRam0000000112dc4b40 = puVar1;
  return;
}



/* Entry: 10173441c; end: 101734433;  */

void FUN_10173441c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101733378)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101732d04)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734434; end: 101734473;  */

void FUN_101734434(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982da8;
  func_0x000107c61520(&UNK_10d982da8,&UNK_1104004d8);
  puRam0000000112dc4b48 = puVar1;
  return;
}



/* Entry: 101734474; end: 101734497;  */

void FUN_101734474(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734498();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734498; end: 1017344d7;  */

void FUN_101734498(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982e18;
  func_0x000107c61520(&UNK_10d982e18,&UNK_110400568);
  puRam0000000112dc4b50 = puVar1;
  return;
}



/* Entry: 1017344d8; end: 1017344ef;  */

void FUN_1017344d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1017333b8)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10171e3cc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1017344f0; end: 10173452f;  */

void FUN_1017344f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982e80;
  func_0x000107c61520(&UNK_10d982e80,&UNK_110400568);
  puRam0000000112dc4b58 = puVar1;
  return;
}



/* Entry: 101734530; end: 101734553;  */

void FUN_101734530(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734554();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734554; end: 101734593;  */

void FUN_101734554(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982ef0;
  func_0x000107c61520(&UNK_10d982ef0,&UNK_1104005e8);
  puRam0000000112dc4b60 = puVar1;
  return;
}



/* Entry: 101734594; end: 1017345ab;  */

void FUN_101734594(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1017333f8)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10171e40c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1017345ac; end: 1017345eb;  */

void FUN_1017345ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982f58;
  func_0x000107c61520(&UNK_10d982f58,&UNK_1104005e8);
  puRam0000000112dc4b68 = puVar1;
  return;
}



/* Entry: 1017345ec; end: 10173460f;  */

void FUN_1017345ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734610();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734610; end: 10173464f;  */

void FUN_101734610(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982fc8;
  func_0x000107c61520(&UNK_10d982fc8,&UNK_110400668);
  puRam0000000112dc4b70 = puVar1;
  return;
}



/* Entry: 101734650; end: 101734667;  */

void FUN_101734650(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1017334b4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10171e0dc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734668; end: 1017346a7;  */

void FUN_101734668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983030;
  func_0x000107c61520(&UNK_10d983030,&UNK_110400668);
  puRam0000000112dc4b78 = puVar1;
  return;
}



/* Entry: 1017346a8; end: 1017346cb;  */

void FUN_1017346a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1017346cc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1017346cc; end: 10173470b;  */

void FUN_1017346cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9830a0;
  func_0x000107c61520(&UNK_10d9830a0,&UNK_1104006f0);
  puRam0000000112dc4b80 = puVar1;
  return;
}



/* Entry: 10173470c; end: 101734723;  */

void FUN_10173470c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101733534)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10171e11c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734724; end: 101734763;  */

void FUN_101734724(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983108;
  func_0x000107c61520(&UNK_10d983108,&UNK_1104006f0);
  puRam0000000112dc4b88 = puVar1;
  return;
}



/* Entry: 101734764; end: 101734787;  */

void FUN_101734764(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734788();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734788; end: 1017347c7;  */

void FUN_101734788(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983178;
  func_0x000107c61520(&UNK_10d983178,&UNK_110400778);
  puRam0000000112dc4b90 = puVar1;
  return;
}



/* Entry: 1017347c8; end: 1017347df;  */

void FUN_1017347c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101733574)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10171f92c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1017347e0; end: 10173481f;  */

void FUN_1017347e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9831e0;
  func_0x000107c61520(&UNK_10d9831e0,&UNK_110400778);
  puRam0000000112dc4b98 = puVar1;
  return;
}



/* Entry: 101734820; end: 101734843;  */

void FUN_101734820(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734844();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734844; end: 101734883;  */

void FUN_101734844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983250;
  func_0x000107c61520(&UNK_10d983250,&UNK_110400800);
  puRam0000000112dc4ba0 = puVar1;
  return;
}



/* Entry: 101734884; end: 10173489b;  */

void FUN_101734884(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1017335b4)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10171f96c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10173489c; end: 1017348db;  */

void FUN_10173489c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9832b8;
  func_0x000107c61520(&UNK_10d9832b8,&UNK_110400800);
  puRam0000000112dc4ba8 = puVar1;
  return;
}



/* Entry: 1017348dc; end: 1017348ff;  */

void FUN_1017348dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734900();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734900; end: 10173493f;  */

void FUN_101734900(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983328;
  func_0x000107c61520(&UNK_10d983328,&UNK_110400880);
  puRam0000000112dc4bb0 = puVar1;
  return;
}



/* Entry: 101734940; end: 101734957;  */

void FUN_101734940(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101733634)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10171e6d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734958; end: 101734997;  */

void FUN_101734958(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983390;
  func_0x000107c61520(&UNK_10d983390,&UNK_110400880);
  puRam0000000112dc4bb8 = puVar1;
  return;
}



/* Entry: 101734998; end: 1017349bb;  */

void FUN_101734998(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1017349bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1017349bc; end: 1017349fb;  */

void FUN_1017349bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4bc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983400;
  func_0x000107c61520(&UNK_10d983400,&UNK_110400900);
  puRam0000000112dc4bc0 = puVar1;
  return;
}



/* Entry: 1017349fc; end: 101734a13;  */

void FUN_1017349fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101733674)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1017335f4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734a14; end: 101734a53;  */

void FUN_101734a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4bc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983468;
  func_0x000107c61520(&UNK_10d983468,&UNK_110400900);
  puRam0000000112dc4bc8 = puVar1;
  return;
}



/* Entry: 101734a54; end: 101734a77;  */

void FUN_101734a54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734a78();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734a78; end: 101734ab7;  */

void FUN_101734a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4bd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9834d8;
  func_0x000107c61520(&UNK_10d9834d8,&UNK_110400998);
  puRam0000000112dc4bd0 = puVar1;
  return;
}



/* Entry: 101734ab8; end: 101734acf;  */

void FUN_101734ab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1017336f4)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10171e710)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734ad0; end: 101734b0f;  */

void FUN_101734ad0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4bd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983540;
  func_0x000107c61520(&UNK_10d983540,&UNK_110400998);
  puRam0000000112dc4bd8 = puVar1;
  return;
}



/* Entry: 101734b10; end: 101734b33;  */

void FUN_101734b10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734b34();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734b34; end: 101734b73;  */

void FUN_101734b34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9835b0;
  func_0x000107c61520(&UNK_10d9835b0,&UNK_110400a18);
  puRam0000000112dc4be0 = puVar1;
  return;
}



/* Entry: 101734b74; end: 101734b8b;  */

void FUN_101734b74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101733734)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1017336b4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734b8c; end: 101734bcb;  */

void FUN_101734b8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983618;
  func_0x000107c61520(&UNK_10d983618,&UNK_110400a18);
  puRam0000000112dc4be8 = puVar1;
  return;
}



/* Entry: 101734bcc; end: 101734bef;  */

void FUN_101734bcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734bf0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734bf0; end: 101734c2f;  */

void FUN_101734bf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983688;
  func_0x000107c61520(&UNK_10d983688,&UNK_110400b28);
  puRam0000000112dc4bf0 = puVar1;
  return;
}



/* Entry: 101734c30; end: 101734c43;  */

void FUN_101734c30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101733774)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101734c44();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101734c44; end: 101734c83;  */

void FUN_101734c44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d983640;
  func_0x000107c61520(&DAT_10d983640,&UNK_110400b28);
  puRam0000000112dc4bf8 = puVar1;
  return;
}



/* Entry: 101734c84; end: 101734c87;  */

void FUN_101734c84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9836f0;
  func_0x000107c61520(&UNK_10d9836f0,&UNK_110400b28);
  puRam0000000112dc4c00 = puVar1;
  return;
}



/* Entry: 101734c88; end: 101734cc7;  */

void FUN_101734c88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9836f0;
  func_0x000107c61520(&UNK_10d9836f0,&UNK_110400b28);
  puRam0000000112dc4c00 = puVar1;
  return;
}



/* Entry: 101734cc8; end: 101734ceb;  */

void FUN_101734cc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101734cec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101734cec; end: 101734d2b;  */

void FUN_101734cec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d983760;
  func_0x000107c61520(&UNK_10d983760,&UNK_110400bc0);
  puRam0000000112dc4c08 = puVar1;
  return;
}



/* Entry: 101734d2c; end: 101734d3f;  */

void FUN_101734d2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1017337b4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101734d40();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


