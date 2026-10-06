/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103533f08; end: 103533fa7;  */

uint FUN_103533f08(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x000103536254(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103533fa8; end: 10353403f;  */

void FUN_103533fa8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103533ffc:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000103534018;
  pcVar3 = *(code **)(param_3 + 0x138);
  goto LAB_103533fe4;
code_r0x000103534018:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x138);
LAB_103533fe4:
    (*pcVar3)();
  }
  goto LAB_103533ffc;
}



/* Entry: 103534040; end: 1035340d7;  */

void FUN_103534040(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((((param_2 & 1) == 0) || ((**(code **)(param_6 + 0x68))(1,1,param_5,param_6), unaff_x21 == 0))
     && (((param_2 >> 8 & 1) == 0 ||
         ((**(code **)(param_6 + 0x68))(1,2,param_5,param_6), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 1035340d8; end: 103534123;  */

void FUN_1035340d8(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 103534124; end: 10353416f;  */

void FUN_103534124(void)

{
  FUN_103533fa8();
  return;
}



/* Entry: 103534170; end: 1035341a7;  */

uint FUN_103534170(long param_1,long param_2)

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
  FUN_1035396d0();
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



/* Entry: 1035341a8; end: 1035341df;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035341a8(char *param_1)

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
  
  if ((*param_1 != *unaff_x20) || (((param_1[1] ^ unaff_x20[1]) & 1U) != 0)) {
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



/* Entry: 1035341e0; end: 10353427f;  */

/* WARNING: Possible PIC construction at 0x00010353422c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010353423c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103534230) */
/* WARNING: Removing unreachable block (ram,0x000103534240) */

void FUN_1035341e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f76a90 != -1) {
    func_0x000107c61568(0x112f76a90,0x103533f60);
  }
  uVar5 = uRam0000000113808038;
  uVar4 = uRam0000000113808030;
  uVar3 = uRam0000000113808028;
  uVar2 = uRam0000000113808020;
  uVar1 = uRam0000000113808018;
  *param_1 = uRam0000000113808010;
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



/* Entry: 103534280; end: 103534293;  */

void FUN_103534280(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f76eb8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f76eb8,&UNK_10dbd7220);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103534294; end: 1035342c7;  */

void FUN_103534294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1035342c8; end: 1035343db;  */

void FUN_1035342c8(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_47 = unaff_x20[1];
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = *(undefined8 *)(unaff_x20 + 8);
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035343dc; end: 10353440f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035343dc(char *param_1,char *param_2)

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
  
  if ((*param_1 != *param_2) || (((param_1[1] ^ param_2[1]) & 1U) != 0)) {
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



/* Entry: 103534410; end: 10353479b;  */

undefined8 FUN_103534410(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uStack_68;
  
  if (param_1 == param_2) {
    uVar11 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uStack_68 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uStack_68 = ~(-1L << (uVar10 & 0x3f));
    }
    uStack_68 = uStack_68 & *(ulong *)(param_1 + 0x40);
    func_0x000107c61438(param_1,2);
    func_0x000107c61434(param_2);
    lVar5 = 0;
    do {
      while( true ) {
        if (uStack_68 == 0) {
          do {
            lVar12 = lVar5 + 1;
            if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103534620);
              (*pcVar3)();
            }
            if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
              uVar11 = 1;
              lVar8 = param_2;
              param_2 = param_1;
              goto LAB_1035345c8;
            }
            uStack_68 = ((ulong *)(param_1 + 0x40))[lVar12];
            lVar5 = lVar5 + 1;
          } while (uStack_68 == 0);
          uVar7 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uStack_68 = uStack_68 - 1 & uStack_68;
        }
        else {
          uVar7 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
          uStack_68 = uStack_68 - 1 & uStack_68;
          lVar12 = lVar5;
        }
        lVar8 = (LZCOUNT(uVar7) | lVar12 << 6) * 0x10;
        plVar1 = (long *)(*(long *)(param_1 + 0x30) + lVar8);
        lVar5 = *plVar1;
        uVar7 = plVar1[1];
        plVar1 = (long *)(*(long *)(param_1 + 0x38) + lVar8);
        lVar13 = *plVar1;
        lVar2 = plVar1[1];
        func_0x000107c61434(uVar7);
        uVar6 = uVar7;
        func_0x000100029284();
        func_0x000107c6142c(uVar7);
        lVar8 = param_1;
        if ((uVar6 & 1) == 0) {
          uVar11 = 0;
          goto LAB_1035345c8;
        }
        lVar9 = *(long *)(*(long *)(param_2 + 0x38) + lVar5 * 0x10);
        lVar5 = lVar12;
        if ((char)lVar2 == '\x01') break;
        bVar4 = lVar9 == lVar13;
LAB_1035344a4:
        if (!bVar4) goto LAB_103534610;
      }
      if (1 < lVar13) {
        if (lVar13 == 2) {
          bVar4 = lVar9 == 2;
        }
        else if (lVar13 == 3) {
          bVar4 = lVar9 == 3;
        }
        else {
          bVar4 = lVar9 == 4;
        }
        goto LAB_1035344a4;
      }
      if (lVar13 != 0) {
        bVar4 = lVar9 == 1;
        goto LAB_1035344a4;
      }
    } while (lVar9 == 0);
LAB_103534610:
    uVar11 = 0;
LAB_1035345c8:
    func_0x000107c6142c(lVar8);
    func_0x000107c6142c(param_1);
    func_0x000107c6142c(param_2);
  }
  else {
    uVar11 = 0;
  }
  return uVar11;
}



/* Entry: 10353479c; end: 10353487f;  */

uint FUN_10353479c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_160 [96];
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_d8 = puVar4[5];
        uStack_e0 = puVar4[4];
        uStack_c8 = puVar4[7];
        uStack_d0 = puVar4[6];
        uStack_b8 = puVar4[9];
        uStack_c0 = puVar4[8];
        uStack_a8 = puVar4[0xb];
        uStack_b0 = puVar4[10];
        uStack_f8 = puVar4[1];
        uStack_100 = *puVar4;
        uStack_e8 = puVar4[3];
        uStack_f0 = puVar4[2];
        uStack_78 = puVar5[5];
        uStack_80 = puVar5[4];
        uStack_68 = puVar5[7];
        uStack_70 = puVar5[6];
        uStack_58 = puVar5[9];
        uStack_60 = puVar5[8];
        uStack_48 = puVar5[0xb];
        uStack_50 = puVar5[10];
        uStack_98 = puVar5[1];
        uStack_a0 = *puVar5;
        uStack_88 = puVar5[3];
        uStack_90 = puVar5[2];
        FUN_1035399d0(&uStack_100,auStack_160);
        FUN_1035399d0(&uStack_a0,auStack_160);
        puVar1 = &uStack_100;
        func_0x000103536254(puVar1,&uStack_a0);
        uVar3 = (uint)puVar1;
        func_0x000103539a04(&uStack_a0);
        func_0x000103539a04(&uStack_100);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar4 = puVar4 + 0xc;
        puVar5 = puVar5 + 0xc;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103534880; end: 103535633;  */

ulong FUN_103534880(ulong param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x19;
  byte *unaff_x20;
  uint uVar14;
  undefined8 unaff_x21;
  int iVar15;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  char *unaff_x27;
  char *unaff_x28;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  long lStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
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
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 == *(long *)(param_2 + 0x10)) {
    if ((lVar17 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x27 = (char *)(param_1 + 0x20);
      unaff_x28 = (char *)(param_2 + 0x20);
      do {
        unaff_x25 = -0x4000000000000000;
        uVar3 = 0;
        if ((*unaff_x27 != *unaff_x28) || (((unaff_x27[1] ^ unaff_x28[1]) & 1U) != 0))
        goto LAB_103534c94;
        unaff_x22 = *(long *)(unaff_x27 + 8);
        unaff_x19 = *(ulong *)(unaff_x27 + 0x10);
        unaff_x24 = *(long *)(unaff_x28 + 8);
        unaff_x23 = *(ulong *)(unaff_x28 + 0x10);
        uVar14 = (uint)(unaff_x19 >> 0x20);
        uVar9 = uVar14 >> 0x1e;
        uVar1 = (uint)(unaff_x23 >> 0x20);
        uVar12 = uVar1 >> 0x1e;
        iVar15 = (int)unaff_x22;
        if (unaff_x19 >> 0x3e == 3) {
          uVar3 = 0;
          if ((((unaff_x22 != 0) || (unaff_x19 != 0xc000000000000000)) || (unaff_x23 >> 0x3e < 3))
             || ((uVar3 = 0, unaff_x24 != 0 || (unaff_x23 != 0xc000000000000000))))
          goto joined_r0x000103534b08;
        }
        else {
          if (uVar14 >> 0x1e < 2) {
            if (uVar9 == 0) {
              uVar3 = unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar11 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar11,iVar15)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103534cdc);
                (*pcVar2)();
              }
              uVar3 = (ulong)(iVar11 - iVar15);
            }
joined_r0x000103534b08:
            if (uVar1 >> 0x1e < 2) goto LAB_1035349a8;
LAB_103534974:
            if (uVar12 != 2) {
              if (uVar3 == 0) goto LAB_1035348e4;
              goto LAB_103534c88;
            }
            uVar13 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
            if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103534cd0);
              (*pcVar2)();
            }
          }
          else {
            if (uVar9 == 2) {
              uVar3 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103534cd8);
                (*pcVar2)();
              }
              goto joined_r0x000103534b08;
            }
            uVar3 = 0;
            if (1 < uVar12) goto LAB_103534974;
LAB_1035349a8:
            if (uVar12 == 0) {
              uVar13 = unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar11 = (int)((ulong)unaff_x24 >> 0x20);
              if (SBORROW4(iVar11,(int)unaff_x24)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103534cd4);
                (*pcVar2)();
              }
              uVar13 = (ulong)(iVar11 - (int)unaff_x24);
            }
          }
          if (uVar3 != uVar13) goto LAB_103534c88;
          if (0 < (long)uVar3) {
            param_2 = unaff_x19;
            if (uVar9 < 2) {
              if (uVar9 != 0) {
                lVar10 = (long)iVar15;
                lStack_98 = (unaff_x22 >> 0x20) - lVar10;
                if (unaff_x22 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103534ce0);
                  uStack_90 = unaff_x21;
                  (*pcVar2)();
                }
                uStack_90 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                lVar4 = unaff_x24;
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000107c5ec30();
                if (lVar4 == 0) {
                  func_0x000107c5ec38();
                  lVar10 = 0;
                  lVar8 = 0;
                }
                else {
                  lVar5 = lVar4;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar10,lVar5)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103534cec);
                    (*pcVar2)();
                  }
                  lVar4 = (lVar10 - lVar5) + lVar4;
                  func_0x000107c5ec38();
                  if (lStack_98 <= lVar5) {
                    lVar5 = lStack_98;
                  }
                  lVar10 = 0;
                  if (lVar4 != 0) {
                    lVar10 = lVar4;
                  }
                  lVar8 = 0;
                  if (lVar4 != 0) {
                    lVar8 = lVar5 + lVar4;
                  }
                }
                unaff_x21 = uStack_90;
                func_0x000100e25bdc(abStack_80,lVar10,lVar8,unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                unaff_x25 = -0x4000000000000000;
joined_r0x000103534c7c:
                unaff_x20 = (byte *)(unaff_x19 & 0x3fffffffffffffff);
                if ((abStack_80[0] & 1) != 0) goto LAB_1035348e4;
                goto LAB_103534c88;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)((ulong)unaff_x22 >> 8);
              abStack_80[2] = (byte)((ulong)unaff_x22 >> 0x10);
              abStack_80[3] = (byte)((ulong)unaff_x22 >> 0x18);
              abStack_80[4] = (byte)((ulong)unaff_x22 >> 0x20);
              abStack_80[5] = (byte)((ulong)unaff_x22 >> 0x28);
              abStack_80[6] = (byte)((ulong)unaff_x22 >> 0x30);
              abStack_80[7] = (byte)((ulong)unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)(unaff_x19 >> 8);
              abStack_80[10] = (byte)(unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)(unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)(unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)(unaff_x19 >> 0x28);
              pbVar7 = abStack_80 + (unaff_x19 >> 0x30 & 0xff);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x24,unaff_x23);
              unaff_x20 = pbVar7;
            }
            else {
              if (uVar9 == 2) {
                lVar4 = *(long *)(unaff_x22 + 0x10);
                lStack_98 = *(long *)(unaff_x22 + 0x18);
                uStack_90 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                unaff_x25 = unaff_x24;
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000107c5ec30();
                lVar10 = unaff_x25;
                if (unaff_x25 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar4,lVar10)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103534ce8);
                    (*pcVar2)();
                  }
                  unaff_x25 = (lVar4 - lVar10) + unaff_x25;
                }
                lVar8 = lStack_98 - lVar4;
                if (SBORROW8(lStack_98,lVar4)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103534ce4);
                  (*pcVar2)();
                }
                func_0x000107c5ec38();
                unaff_x21 = uStack_90;
                if (unaff_x25 == 0) {
                  lVar10 = 0;
                }
                else {
                  if (lVar8 <= lVar10) {
                    lVar10 = lVar8;
                  }
                  lVar10 = lVar10 + unaff_x25;
                }
                func_0x000100e25bdc(abStack_80,unaff_x25,lVar10,unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                goto joined_r0x000103534c7c;
              }
              abStack_80[8] = 0;
              abStack_80[9] = 0;
              abStack_80[10] = 0;
              abStack_80[0xb] = 0;
              abStack_80[0xc] = 0;
              abStack_80[0xd] = 0;
              abStack_80[0] = 0;
              abStack_80[1] = 0;
              abStack_80[2] = 0;
              abStack_80[3] = 0;
              abStack_80[4] = 0;
              abStack_80[5] = 0;
              abStack_80[6] = 0;
              abStack_80[7] = 0;
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x24,unaff_x23);
              pbVar7 = abStack_80;
            }
            func_0x000100e25bdc(&bStack_81,abStack_80,pbVar7,unaff_x24,unaff_x23);
            func_0x00010006c090(unaff_x24,unaff_x23);
            func_0x00010006c090(unaff_x22);
            if ((bStack_81 & 1) == 0) goto LAB_103534c88;
          }
        }
LAB_1035348e4:
        unaff_x25 = -0x4000000000000000;
        unaff_x28 = unaff_x28 + 0x18;
        unaff_x27 = unaff_x27 + 0x18;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    uVar3 = 1;
  }
  else {
LAB_103534c88:
    uVar3 = 0;
  }
LAB_103534c94:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar3;
  }
  func_0x000107c60e78();
  uStack_a8 = 0x103534cf0;
  lVar10 = *(long *)(uVar3 + 0x10);
  if (lVar10 == *(long *)(param_2 + 0x10)) {
    if ((lVar10 == 0) || (uVar3 == param_2)) {
      uVar14 = 1;
    }
    else {
      puVar16 = (undefined8 *)(uVar3 + 0x60);
      puVar18 = (undefined8 *)(param_2 + 0x60);
      pcStack_100 = unaff_x28;
      pcStack_f8 = unaff_x27;
      lStack_f0 = lVar17;
      lStack_e8 = unaff_x25;
      lStack_e0 = unaff_x24;
      uStack_d8 = unaff_x23;
      lStack_d0 = unaff_x22;
      uStack_c8 = unaff_x21;
      pbStack_c0 = unaff_x20;
      uStack_b8 = unaff_x19;
      puStack_b0 = &stack0xfffffffffffffff0;
      while( true ) {
        lVar10 = lVar10 + -1;
        uStack_3e8 = puVar16[3];
        uStack_3f0 = puVar16[2];
        uStack_258 = puVar16[5];
        uStack_260 = puVar16[4];
        uStack_3d8 = puVar16[5];
        uStack_3e0 = puVar16[4];
        uStack_248 = puVar16[7];
        uStack_250 = puVar16[6];
        lStack_3c8 = puVar16[7];
        uStack_3d0 = puVar16[6];
        uStack_238 = puVar16[9];
        uStack_240 = puVar16[8];
        uStack_298 = puVar16[-3];
        uStack_2a0 = puVar16[-4];
        uStack_288 = puVar16[-1];
        uStack_290 = puVar16[-2];
        uStack_278 = puVar16[1];
        uStack_280 = *puVar16;
        uStack_268 = puVar16[3];
        uStack_270 = puVar16[2];
        uStack_3f8 = puVar16[1];
        uStack_400 = *puVar16;
        lStack_2b8 = puVar16[-7];
        uStack_2c0 = puVar16[-8];
        lStack_2a8 = puVar16[-5];
        uStack_2b0 = puVar16[-6];
        uStack_398 = puVar18[3];
        uStack_3a0 = puVar18[2];
        uStack_1c8 = puVar18[5];
        uStack_1d0 = puVar18[4];
        uStack_388 = puVar18[5];
        uStack_390 = puVar18[4];
        uStack_1b8 = puVar18[7];
        uStack_1c0 = puVar18[6];
        lStack_378 = puVar18[7];
        uStack_380 = puVar18[6];
        uStack_1a8 = puVar18[9];
        uStack_1b0 = puVar18[8];
        uStack_208 = puVar18[-3];
        uStack_210 = puVar18[-4];
        uStack_1f8 = puVar18[-1];
        uStack_200 = puVar18[-2];
        uStack_1e8 = puVar18[1];
        uStack_1f0 = *puVar18;
        uStack_1d8 = puVar18[3];
        uStack_1e0 = puVar18[2];
        uStack_3a8 = puVar18[1];
        uStack_3b0 = *puVar18;
        lStack_228 = puVar18[-7];
        uStack_230 = puVar18[-8];
        lStack_218 = puVar18[-5];
        uStack_220 = puVar18[-6];
        uStack_3b8 = puVar16[9];
        uStack_3c0 = puVar16[8];
        uStack_368 = puVar18[9];
        uStack_370 = puVar18[8];
        uStack_360 = uStack_400;
        uStack_358 = uStack_3f8;
        uStack_350 = uStack_3f0;
        uStack_348 = uStack_3e8;
        uStack_340 = uStack_3e0;
        uStack_338 = uStack_3d8;
        uStack_330 = uStack_3d0;
        lStack_328 = lStack_3c8;
        uStack_320 = uStack_3c0;
        uStack_318 = uStack_3b8;
        uStack_310 = uStack_3b0;
        uStack_308 = uStack_3a8;
        uStack_300 = uStack_3a0;
        uStack_2f8 = uStack_398;
        uStack_2f0 = uStack_390;
        uStack_2e8 = uStack_388;
        uStack_2e0 = uStack_380;
        lStack_2d8 = lStack_378;
        uStack_2d0 = uStack_370;
        uStack_2c8 = uStack_368;
        if (lStack_3c8 != 1) break;
        if (lStack_378 != 1) goto LAB_103535044;
        uStack_428 = puVar16[5];
        uStack_430 = puVar16[4];
        uStack_418 = puVar16[7];
        uStack_420 = puVar16[6];
        uStack_408 = puVar16[9];
        uStack_410 = puVar16[8];
        uStack_448 = puVar16[1];
        uStack_450 = *puVar16;
        uStack_438 = puVar16[3];
        uStack_440 = puVar16[2];
        func_0x0001034ab0cc(&uStack_2c0,&uStack_400);
        func_0x0001034ab0cc(&uStack_230,&uStack_400);
        FUN_1035361ac(&uStack_280,&uStack_400,0x112db3ea0,&UNK_10d95e3f0);
        FUN_1035361ac(&uStack_1f0,&uStack_400,0x112db3ea0,&UNK_10d95e3f0);
        FUN_103536214(&uStack_450,0x112db3ea0,&UNK_10d95e3f0);
LAB_103534f10:
        if ((((uStack_2c0 != uStack_230) || (lStack_2b8 != lStack_228)) &&
            (uVar3 = uStack_2c0, func_0x000107c605b8(), (uVar3 & 1) == 0)) ||
           (uVar3 = uStack_2b0, func_0x000101058cd4(uStack_2b0,uStack_220), (uVar3 & 1) == 0)) {
LAB_103535004:
          func_0x0001034ab108(&uStack_230);
          func_0x0001034ab108(&uStack_2c0);
          goto LAB_103535014;
        }
        if ((char)uStack_210 != '\x01') {
          if (lStack_2a8 == lStack_218) goto LAB_103534f88;
          goto LAB_103535004;
        }
        if (1 < lStack_218) {
          if (lStack_218 == 2) {
            if (lStack_2a8 == 2) goto LAB_103534f88;
          }
          else if (lStack_218 == 3) {
            if (lStack_2a8 == 3) goto LAB_103534f88;
          }
          else if (lStack_2a8 == 4) goto LAB_103534f88;
          goto LAB_103535004;
        }
        if (lStack_218 != 0) {
          if (lStack_2a8 == 1) goto LAB_103534f88;
          goto LAB_103535004;
        }
        if (lStack_2a8 != 0) goto LAB_103535004;
LAB_103534f88:
        uVar3 = uStack_298;
        FUN_103534410(uStack_298,uStack_208);
        if ((uVar3 & 1) == 0) goto LAB_103535004;
        uVar3 = uStack_290;
        func_0x000100e25fcc(uStack_290,uStack_288,uStack_200,uStack_1f8);
        uVar14 = (uint)uVar3;
        func_0x0001034ab108(&uStack_230);
        func_0x0001034ab108(&uStack_2c0);
        if (((uVar3 & 1) == 0) || (lVar10 == 0)) goto LAB_103535020;
        puVar16 = puVar16 + 0x12;
        puVar18 = puVar18 + 0x12;
      }
      if (lStack_378 != 1) {
        uStack_428 = puVar18[5];
        uStack_430 = puVar18[4];
        uStack_418 = puVar18[7];
        uStack_420 = puVar18[6];
        uStack_408 = puVar18[9];
        uStack_410 = puVar18[8];
        uStack_448 = puVar18[1];
        uStack_450 = *puVar18;
        uStack_438 = puVar18[3];
        uStack_440 = puVar18[2];
        uStack_198 = puVar16[1];
        uStack_1a0 = *puVar16;
        uStack_188 = puVar16[3];
        uStack_190 = puVar16[2];
        uStack_178 = puVar16[5];
        uStack_180 = puVar16[4];
        uStack_168 = puVar16[7];
        uStack_170 = puVar16[6];
        uStack_158 = puVar16[9];
        uStack_160 = puVar16[8];
        uStack_150 = uStack_450;
        uStack_148 = uStack_448;
        uStack_140 = uStack_440;
        uStack_138 = uStack_438;
        uStack_130 = uStack_430;
        uStack_128 = uStack_428;
        uStack_120 = uStack_420;
        uStack_118 = uStack_418;
        uStack_110 = uStack_410;
        uStack_108 = uStack_408;
        func_0x0001034ab0cc(&uStack_2c0,&uStack_400);
        func_0x0001034ab0cc(&uStack_230,&uStack_400);
        FUN_1035361ac(&uStack_280,&uStack_400,0x112db3ea0,&UNK_10d95e3f0);
        FUN_1035361ac(&uStack_1f0,&uStack_400,0x112db3ea0,&UNK_10d95e3f0);
        puVar6 = &uStack_1a0;
        FUN_103535670(puVar6,&uStack_150);
        FUN_103536214(&uStack_450,0x112db3ea0,&UNK_10d95e3f0);
        FUN_103536214(&uStack_360,0x112db3ea0,&UNK_10d95e3f0);
        if (((ulong)puVar6 & 1) != 0) goto LAB_103534f10;
        goto LAB_103535004;
      }
LAB_103535044:
      FUN_1035361ac(&uStack_280,&uStack_450,0x112db3ea0,&UNK_10d95e3f0);
      FUN_1035361ac(&uStack_1f0,&uStack_450,0x112db3ea0,&UNK_10d95e3f0);
      FUN_103536214(&uStack_400,0x112db86f0,&UNK_10d9681c8);
      uVar14 = 0;
    }
  }
  else {
LAB_103535014:
    uVar14 = 0;
  }
LAB_103535020:
  return (ulong)(uVar14 & 1);
}



/* Entry: 103535634; end: 10353566f;  */

void FUN_103535634(void)

{
  return;
}



/* Entry: 103535670; end: 103535b1f;  */

long * FUN_103535670(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 < 4) {
      if (lVar4 < 2) {
        if (lVar4 == 0) {
          if (lVar3 != 0) {
            return (long *)0x0;
          }
        }
        else if (lVar3 != 1) {
          return (long *)0x0;
        }
      }
      else if (lVar4 == 2) {
        if (lVar3 != 2) {
          return (long *)0x0;
        }
      }
      else if (lVar3 != 3) {
        return (long *)0x0;
      }
    }
    else if (lVar4 < 6) {
      if (lVar4 == 4) {
        if (lVar3 != 4) {
          return (long *)0x0;
        }
      }
      else if (lVar3 != 5) {
        return (long *)0x0;
      }
    }
    else if (lVar4 == 6) {
      if (lVar3 != 6) {
        return (long *)0x0;
      }
    }
    else if (lVar3 != 7) {
      return (long *)0x0;
    }
  }
  else if (lVar3 != lVar4) {
    return (long *)0x0;
  }
  if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001035356d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dbd5b46)[param_2[2]] * 4 + 0x1035356d4))();
    return param_1;
  }
  if (param_1[2] != param_2[2]) {
    return (long *)0x0;
  }
  lVar3 = param_1[7];
  uVar5 = param_1[6];
  lVar4 = param_1[9];
  uVar8 = param_1[8];
  lVar7 = param_2[7];
  uVar6 = param_2[6];
  lVar10 = param_2[9];
  uVar9 = param_2[8];
  uStack_a0 = uVar6;
  lStack_98 = lVar7;
  uStack_90 = uVar9;
  lStack_88 = lVar10;
  uStack_80 = uVar5;
  lStack_78 = lVar3;
  uStack_70 = uVar8;
  lStack_68 = lVar4;
  if (lVar3 == 0) {
    if (lVar7 == 0) {
      FUN_1035361ac(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035361ac(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_1035358dc:
      func_0x000101597ae4(uVar5,lVar3,uVar8,lVar4);
      lVar3 = param_1[4];
      func_0x000100e25fcc(lVar3,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)lVar3;
      goto LAB_103535968;
    }
LAB_103535810:
    FUN_1035361ac(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_1035361ac(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar5,lVar3,uVar8,lVar4);
    uVar5 = uVar6;
    lVar3 = lVar7;
    uVar8 = uVar9;
    lVar4 = lVar10;
  }
  else {
    if (lVar7 == 0) goto LAB_103535810;
    if (((uVar5 == uVar6) && (lVar3 == lVar7)) ||
       (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar6,lVar7,0), (uVar2 & 1) != 0)) {
      FUN_1035361ac(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035361ac(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar8;
      func_0x000100e25fcc(uVar8,lVar4,uVar9,lVar10);
      func_0x000101597ae4(uVar6,lVar7,uVar9,lVar10);
      if ((uVar2 & 1) != 0) goto LAB_1035358dc;
    }
    else {
      FUN_1035361ac(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035361ac(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar6,lVar7,uVar9,lVar10);
    }
  }
  func_0x000101597ae4(uVar5,lVar3,uVar8,lVar4);
  uVar1 = 0;
LAB_103535968:
  return (long *)(ulong)(uVar1 & 1);
}



/* Entry: 103535b20; end: 103535b3f;  */

void FUN_103535b20(void)

{
  func_0x000107c61168(&PTR_PTR_112f76cf8);
  return;
}



/* Entry: 103535b40; end: 103536077;  */

void FUN_103535b40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 auStack_598 [24];
  undefined1 auStack_580 [24];
  undefined1 auStack_568 [24];
  undefined1 auStack_550 [152];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
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
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
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
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar17 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = puVar4;
  func_0x0001003d8468();
  puVar15 = (undefined8 *)(unaff_x20 + 0x18);
  *puVar15 = puVar5;
  puVar13 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar13 = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  puVar11 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar11 = 2;
  puVar6 = (undefined8 *)(unaff_x20 + 0x48);
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  puVar7 = (undefined8 *)(unaff_x20 + 0x58);
  *puVar7 = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  puVar8 = (undefined8 *)(unaff_x20 + 0x68);
  *puVar8 = puVar4;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *puVar9 = 0;
  FUN_1035361f4(&uStack_308);
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined1 *)(unaff_x20 + 0x170) = 1;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined1 *)(unaff_x20 + 0x180) = 1;
  func_0x000107c61428(param_1 + 0x10,auStack_320,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61428(puVar17,auStack_338,1,0);
  uVar12 = *puVar17;
  *puVar17 = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428(param_1 + 0x18,auStack_350,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar15,auStack_368,1,0);
  uVar12 = *puVar15;
  *puVar15 = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428(param_1 + 0x20,auStack_380,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(puVar13,auStack_398,1,0);
  *puVar13 = uVar10;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar3;
  func_0x000107c61428(param_1 + 0x30,auStack_3b0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(puVar11,auStack_3c8,1,0);
  uVar16 = *puVar11;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  *puVar11 = uVar10;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar14;
  FUN_103536078(uVar10,uVar1,uVar14);
  func_0x000103536094(uVar16,uVar12,uVar2);
  func_0x000107c61428(param_1 + 0x48,auStack_3e0,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined1 *)(param_1 + 0x50);
  func_0x000107c61428(puVar6,auStack_3f8,1,0);
  *puVar6 = uVar10;
  *(undefined1 *)(unaff_x20 + 0x50) = uVar3;
  func_0x000107c61428(param_1 + 0x58,auStack_410,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined1 *)(param_1 + 0x60);
  func_0x000107c61428(puVar7,auStack_428,1,0);
  *puVar7 = uVar10;
  *(undefined1 *)(unaff_x20 + 0x60) = uVar3;
  func_0x000107c61428(param_1 + 0x68,auStack_440,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar8,auStack_458,1,0);
  uVar12 = *puVar8;
  *puVar8 = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar12);
  func_0x000107c61428(param_1 + 0x70,auStack_470,0,0);
  uStack_248 = *(undefined8 *)(param_1 + 0x98);
  uStack_250 = *(undefined8 *)(param_1 + 0x90);
  uStack_238 = *(undefined8 *)(param_1 + 0xa8);
  uStack_240 = *(undefined8 *)(param_1 + 0xa0);
  uStack_228 = *(undefined8 *)(param_1 + 0xb8);
  uStack_230 = *(undefined8 *)(param_1 + 0xb0);
  uStack_218 = *(undefined8 *)(param_1 + 200);
  uStack_220 = *(undefined8 *)(param_1 + 0xc0);
  uStack_268 = *(undefined8 *)(param_1 + 0x78);
  uStack_270 = *(undefined8 *)(param_1 + 0x70);
  uStack_258 = *(undefined8 *)(param_1 + 0x88);
  uStack_260 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(puVar9,auStack_488,1,0);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_1b8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_1c0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_210 = *puVar9;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_230;
  *(undefined8 *)(unaff_x20 + 200) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_268;
  *puVar9 = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_250;
  FUN_1035361ac(&uStack_270,&uStack_110,0x112f76988,&UNK_10dbd5bb0);
  FUN_103536214(&uStack_210,0x112f76988,&UNK_10dbd5bb0);
  func_0x000107c61428(param_1 + 0xd0,auStack_4a0,0,0);
  uStack_148 = *(undefined8 *)(param_1 + 0x138);
  uStack_150 = *(undefined8 *)(param_1 + 0x130);
  uStack_138 = *(undefined8 *)(param_1 + 0x148);
  uStack_140 = *(undefined8 *)(param_1 + 0x140);
  uStack_128 = *(undefined8 *)(param_1 + 0x158);
  uStack_130 = *(undefined8 *)(param_1 + 0x150);
  uStack_120 = *(undefined8 *)(param_1 + 0x160);
  uStack_188 = *(undefined8 *)(param_1 + 0xf8);
  uStack_190 = *(undefined8 *)(param_1 + 0xf0);
  uStack_178 = *(undefined8 *)(param_1 + 0x108);
  uStack_180 = *(undefined8 *)(param_1 + 0x100);
  uStack_168 = *(undefined8 *)(param_1 + 0x118);
  uStack_170 = *(undefined8 *)(param_1 + 0x110);
  uStack_158 = *(undefined8 *)(param_1 + 0x128);
  uStack_160 = *(undefined8 *)(param_1 + 0x120);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_198 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xe0);
  func_0x000107c61428(unaff_x20 + 0xd0,auStack_4b8,1,0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1a0;
  FUN_1035361ac(&uStack_1b0,auStack_550,0x112f76998,&UNK_10dbd5bc0);
  FUN_103536214(&uStack_110,0x112f76998,&UNK_10dbd5bc0);
  func_0x000107c61428(param_1 + 0x168,auStack_550,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x168);
  uVar3 = *(undefined1 *)(param_1 + 0x170);
  func_0x000107c61428(unaff_x20 + 0x168,auStack_568,1,0);
  *(undefined8 *)(unaff_x20 + 0x168) = uVar10;
  *(undefined1 *)(unaff_x20 + 0x170) = uVar3;
  func_0x000107c61428(param_1 + 0x178,auStack_580,0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x178);
  uVar3 = *(undefined1 *)(param_1 + 0x180);
  func_0x000107c61428(unaff_x20 + 0x178,auStack_598,1,0);
  *(undefined8 *)(unaff_x20 + 0x178) = uVar10;
  *(undefined1 *)(unaff_x20 + 0x180) = uVar3;
  return;
}



/* Entry: 103536078; end: 1035360af;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103536078(char param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == '\x02') {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1035360b0; end: 103536193;  */

/* WARNING: Possible PIC construction at 0x0001035360f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103536134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103536138) */
/* WARNING: Removing unreachable block (ram,0x0001035360f4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035360b0(int *param_1,int *param_2)

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
  
  if (*param_1 == *param_2) {
    pbVar12 = *(byte **)(param_1 + 2);
    pbVar16 = *(byte **)(param_1 + 4);
    pbVar17 = *(byte **)(param_2 + 2);
    pbVar13 = *(byte **)(param_2 + 4);
    if (*(byte **)(param_1 + 2) != *(byte **)(param_2 + 2) ||
        *(byte **)(param_1 + 4) != *(byte **)(param_2 + 4)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar16,pbVar17,pbVar13,0);
      return pbVar12;
    }
    uVar14 = *(ulong *)(param_1 + 6);
    if ((uVar14 == *(ulong *)(param_2 + 6) && *(long *)(param_1 + 8) == *(long *)(param_2 + 8)) ||
       (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
      pbVar12 = *(byte **)(param_1 + 10);
      pbVar16 = *(byte **)(param_1 + 0xc);
      pbVar17 = *(byte **)(param_2 + 10);
      pbVar13 = *(byte **)(param_2 + 0xc);
      if ((pbVar12 != pbVar17) || (pbVar16 != pbVar13)) goto code_r0x000107c605b8;
      uVar14 = *(ulong *)(param_1 + 0xe);
      if ((((uVar14 == *(ulong *)(param_2 + 0xe)) &&
           (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) ||
          (func_0x000107c605b8(), (uVar14 & 1) != 0)) &&
         (*(long *)(param_1 + 0x12) == *(long *)(param_2 + 0x12))) {
        pbVar10 = *(byte **)(param_1 + 0x14);
        pbVar25 = *(byte **)(param_1 + 0x16);
        lVar24 = *(long *)(param_2 + 0x14);
        uVar14 = *(ulong *)(param_2 + 0x16);
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
            if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
               ((uVar14 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))
                ))) goto joined_r0x000100e26170;
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
            goto code_r0x000107c605b8;
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
              goto code_r0x000107c605b8;
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
              if ((pbVar10 != pbVar17) || (pbVar25 != pbVar13)) goto code_r0x000107c605b8;
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
  return (byte *)0x0;
}



/* Entry: 103536194; end: 1035361ab;  */

int FUN_103536194(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1035361ac; end: 1035361f3;  */

undefined8 FUN_1035361ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035361f4; end: 103536213;  */

void FUN_1035361f4(undefined8 *param_1)

{
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 103536214; end: 10353663b;  */

undefined8 FUN_103536214(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10353663c; end: 10353667b;  */

void FUN_10353663c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd65d0;
  func_0x000107c61520(&UNK_10dbd65d0,&UNK_110662330);
  puRam0000000112f76a08 = puVar1;
  return;
}



/* Entry: 10353667c; end: 10353697f;  */

uint FUN_10353667c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_310 [80];
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
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
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_1b8 = param_1[0xb];
  uStack_1c0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_1a8 = param_1[0xd];
  uStack_1b0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_198 = param_1[0xf];
  uStack_1a0 = param_1[0xe];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_1c8 = param_1[9];
  uStack_1d0 = param_1[8];
  uStack_208 = param_2[0xb];
  uStack_210 = param_2[10];
  uStack_108 = param_2[0xd];
  uStack_110 = param_2[0xc];
  uStack_1f8 = param_2[0xd];
  uStack_200 = param_2[0xc];
  uStack_f8 = param_2[0xf];
  uStack_100 = param_2[0xe];
  uStack_1e8 = param_2[0xf];
  uStack_1f0 = param_2[0xe];
  uStack_e8 = param_2[0x11];
  uStack_f0 = param_2[0x10];
  uStack_128 = param_2[9];
  uStack_130 = param_2[8];
  uStack_118 = param_2[0xb];
  uStack_120 = param_2[10];
  uStack_218 = param_2[9];
  uStack_220 = param_2[8];
  uStack_1d8 = param_2[0x11];
  uStack_1e0 = param_2[0x10];
  uStack_188 = param_1[0x11];
  uStack_190 = param_1[0x10];
  uStack_180 = uStack_220;
  uStack_178 = uStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  uStack_148 = uStack_1e8;
  uStack_140 = uStack_1e0;
  uStack_138 = uStack_1d8;
  if (uStack_198 == 1) {
    if (uStack_1e8 != 1) goto LAB_10353677c;
    uStack_248 = param_1[0xd];
    uStack_250 = param_1[0xc];
    uStack_238 = param_1[0xf];
    uStack_240 = param_1[0xe];
    uStack_228 = param_1[0x11];
    uStack_230 = param_1[0x10];
    uStack_268 = param_1[9];
    uStack_270 = param_1[8];
    uStack_258 = param_1[0xb];
    uStack_260 = param_1[10];
    FUN_1035361ac(&uStack_e0,&uStack_90,0x112db3ea0,&UNK_10d95e3f0);
    FUN_1035361ac(&uStack_130,&uStack_90,0x112db3ea0,&UNK_10d95e3f0);
    FUN_103536214(&uStack_270,0x112db3ea0,&UNK_10d95e3f0);
LAB_1035368a0:
    uVar3 = *param_1;
    if (((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      uVar3 = param_1[2];
      func_0x000101058cd4(uVar3,param_2[2]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[3];
        uVar4 = param_2[3];
        if ((char)param_2[4] == '\x01') {
          if ((long)uVar4 < 2) {
            if (uVar4 == 0) {
              if (uVar3 == 0) {
LAB_103536914:
                uVar3 = param_1[5];
                FUN_103534410(uVar3,param_2[5]);
                if ((uVar3 & 1) != 0) {
                  uVar3 = param_1[6];
                  func_0x000100e25fcc(uVar3,param_1[7],param_2[6],param_2[7]);
                  uVar1 = (uint)uVar3;
                  goto LAB_103536964;
                }
              }
            }
            else if (uVar3 == 1) goto LAB_103536914;
          }
          else if (uVar4 == 2) {
            if (uVar3 == 2) goto LAB_103536914;
          }
          else if (uVar4 == 3) {
            if (uVar3 == 3) goto LAB_103536914;
          }
          else if (uVar3 == 4) goto LAB_103536914;
        }
        else if (uVar3 == uVar4) goto LAB_103536914;
      }
    }
  }
  else {
    if (uStack_1e8 != 1) {
      uStack_298 = param_2[0xd];
      uStack_2a0 = param_2[0xc];
      uStack_288 = param_2[0xf];
      uStack_290 = param_2[0xe];
      uStack_278 = param_2[0x11];
      uStack_280 = param_2[0x10];
      uStack_2b8 = param_2[9];
      uStack_2c0 = param_2[8];
      uStack_2a8 = param_2[0xb];
      uStack_2b0 = param_2[10];
      uStack_88 = param_1[9];
      uStack_90 = param_1[8];
      uStack_78 = param_1[0xb];
      uStack_80 = param_1[10];
      uStack_68 = param_1[0xd];
      uStack_70 = param_1[0xc];
      uStack_58 = param_1[0xf];
      uStack_60 = param_1[0xe];
      uStack_48 = param_1[0x11];
      uStack_50 = param_1[0x10];
      uStack_270 = uStack_2c0;
      uStack_268 = uStack_2b8;
      uStack_260 = uStack_2b0;
      uStack_258 = uStack_2a8;
      uStack_250 = uStack_2a0;
      uStack_248 = uStack_298;
      uStack_240 = uStack_290;
      uStack_238 = uStack_288;
      uStack_230 = uStack_280;
      uStack_228 = uStack_278;
      FUN_1035361ac(&uStack_e0,auStack_310,0x112db3ea0,&UNK_10d95e3f0);
      FUN_1035361ac(&uStack_130,auStack_310,0x112db3ea0,&UNK_10d95e3f0);
      puVar2 = &uStack_90;
      FUN_103535670(puVar2,&uStack_270);
      FUN_103536214(&uStack_2c0,0x112db3ea0,&UNK_10d95e3f0);
      FUN_103536214(&uStack_1d0,0x112db3ea0,&UNK_10d95e3f0);
      if (((ulong)puVar2 & 1) != 0) goto LAB_1035368a0;
      goto LAB_103536960;
    }
LAB_10353677c:
    uStack_270 = uStack_1d0;
    uStack_268 = uStack_1c8;
    uStack_260 = uStack_1c0;
    uStack_258 = uStack_1b8;
    uStack_250 = uStack_1b0;
    uStack_248 = uStack_1a8;
    uStack_240 = uStack_1a0;
    uStack_238 = uStack_198;
    uStack_230 = uStack_190;
    uStack_228 = uStack_188;
    FUN_1035361ac(&uStack_e0,&uStack_90,0x112db3ea0,&UNK_10d95e3f0);
    FUN_1035361ac(&uStack_130,&uStack_90,0x112db3ea0,&UNK_10d95e3f0);
    FUN_103536214(&uStack_270,0x112db86f0,&UNK_10d9681c8);
  }
LAB_103536960:
  uVar1 = 0;
LAB_103536964:
  return uVar1 & 1;
}



/* Entry: 103536980; end: 103536bff;  */

void FUN_103536980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76a18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd66a8;
  func_0x000107c61520(&UNK_10dbd66a8,&UNK_1106623b8);
  puRam0000000112f76a18 = puVar1;
  return;
}



/* Entry: 103536c00; end: 103536c13;  */

void FUN_103536c00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103536c14();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103536c54)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103536c14; end: 103536cbf;  */

void FUN_103536c14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5c68;
  func_0x000107c61520(&UNK_10dbd5c68,&UNK_110661e38);
  puRam0000000112f76aa0 = puVar1;
  return;
}



/* Entry: 103536cc0; end: 103536cc3;  */

void FUN_103536cc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5ca8;
  func_0x000107c61520(&UNK_10dbd5ca8,&UNK_110661e38);
  puRam0000000112f76ac0 = puVar1;
  return;
}



/* Entry: 103536cc4; end: 103536d03;  */

void FUN_103536cc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5ca8;
  func_0x000107c61520(&UNK_10dbd5ca8,&UNK_110661e38);
  puRam0000000112f76ac0 = puVar1;
  return;
}



/* Entry: 103536d04; end: 103536d17;  */

void FUN_103536d04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103536d18();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103536d58)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103536d18; end: 103536dc3;  */

void FUN_103536d18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5d68;
  func_0x000107c61520(&UNK_10dbd5d68,&UNK_110661ec8);
  puRam0000000112f76ac8 = puVar1;
  return;
}



/* Entry: 103536dc4; end: 103536dc7;  */

void FUN_103536dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5da8;
  func_0x000107c61520(&UNK_10dbd5da8,&UNK_110661ec8);
  puRam0000000112f76ae8 = puVar1;
  return;
}



/* Entry: 103536dc8; end: 103536e07;  */

void FUN_103536dc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76ae8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5da8;
  func_0x000107c61520(&UNK_10dbd5da8,&UNK_110661ec8);
  puRam0000000112f76ae8 = puVar1;
  return;
}



/* Entry: 103536e08; end: 103536e1b;  */

void FUN_103536e08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103536e1c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103536e5c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103536e1c; end: 103536ec7;  */

void FUN_103536e1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76af0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5e68;
  func_0x000107c61520(&UNK_10dbd5e68,&UNK_110661f58);
  puRam0000000112f76af0 = puVar1;
  return;
}



/* Entry: 103536ec8; end: 103536ecb;  */

void FUN_103536ec8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5ea8;
  func_0x000107c61520(&UNK_10dbd5ea8,&UNK_110661f58);
  puRam0000000112f76b10 = puVar1;
  return;
}



/* Entry: 103536ecc; end: 103536f0b;  */

void FUN_103536ecc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5ea8;
  func_0x000107c61520(&UNK_10dbd5ea8,&UNK_110661f58);
  puRam0000000112f76b10 = puVar1;
  return;
}



/* Entry: 103536f0c; end: 103536f1f;  */

void FUN_103536f0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103536f20();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103536f60)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103536f20; end: 103536fcb;  */

void FUN_103536f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5f68;
  func_0x000107c61520(&UNK_10dbd5f68,&UNK_110661fe8);
  puRam0000000112f76b18 = puVar1;
  return;
}



/* Entry: 103536fcc; end: 103536fcf;  */

void FUN_103536fcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5fa8;
  func_0x000107c61520(&UNK_10dbd5fa8,&UNK_110661fe8);
  puRam0000000112f76b38 = puVar1;
  return;
}



/* Entry: 103536fd0; end: 10353700f;  */

void FUN_103536fd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5fa8;
  func_0x000107c61520(&UNK_10dbd5fa8,&UNK_110661fe8);
  puRam0000000112f76b38 = puVar1;
  return;
}



/* Entry: 103537010; end: 103537023;  */

void FUN_103537010(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537024();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103537064)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537024; end: 1035370cf;  */

void FUN_103537024(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6068;
  func_0x000107c61520(&UNK_10dbd6068,&UNK_110662078);
  puRam0000000112f76b40 = puVar1;
  return;
}



/* Entry: 1035370d0; end: 1035370d3;  */

void FUN_1035370d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd60a8;
  func_0x000107c61520(&UNK_10dbd60a8,&UNK_110662078);
  puRam0000000112f76b60 = puVar1;
  return;
}



/* Entry: 1035370d4; end: 103537113;  */

void FUN_1035370d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd60a8;
  func_0x000107c61520(&UNK_10dbd60a8,&UNK_110662078);
  puRam0000000112f76b60 = puVar1;
  return;
}



/* Entry: 103537114; end: 103537127;  */

void FUN_103537114(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537128();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103537168)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537128; end: 1035371d3;  */

void FUN_103537128(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6168;
  func_0x000107c61520(&UNK_10dbd6168,&UNK_110662108);
  puRam0000000112f76b68 = puVar1;
  return;
}



/* Entry: 1035371d4; end: 1035371d7;  */

void FUN_1035371d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd61a8;
  func_0x000107c61520(&UNK_10dbd61a8,&UNK_110662108);
  puRam0000000112f76b88 = puVar1;
  return;
}



/* Entry: 1035371d8; end: 103537217;  */

void FUN_1035371d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd61a8;
  func_0x000107c61520(&UNK_10dbd61a8,&UNK_110662108);
  puRam0000000112f76b88 = puVar1;
  return;
}



/* Entry: 103537218; end: 10353722b;  */

void FUN_103537218(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10353722c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10353726c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10353722c; end: 1035372d7;  */

void FUN_10353722c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6268;
  func_0x000107c61520(&UNK_10dbd6268,&UNK_110662198);
  puRam0000000112f76b90 = puVar1;
  return;
}



/* Entry: 1035372d8; end: 1035372db;  */

void FUN_1035372d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd62a8;
  func_0x000107c61520(&UNK_10dbd62a8,&UNK_110662198);
  puRam0000000112f76bb0 = puVar1;
  return;
}



/* Entry: 1035372dc; end: 10353731b;  */

void FUN_1035372dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd62a8;
  func_0x000107c61520(&UNK_10dbd62a8,&UNK_110662198);
  puRam0000000112f76bb0 = puVar1;
  return;
}



/* Entry: 10353731c; end: 10353732f;  */

void FUN_10353731c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537330();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103537370)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537330; end: 1035373db;  */

void FUN_103537330(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6368;
  func_0x000107c61520(&UNK_10dbd6368,&UNK_110662228);
  puRam0000000112f76bb8 = puVar1;
  return;
}



/* Entry: 1035373dc; end: 1035373df;  */

void FUN_1035373dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76bd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd63a8;
  func_0x000107c61520(&UNK_10dbd63a8,&UNK_110662228);
  puRam0000000112f76bd8 = puVar1;
  return;
}



/* Entry: 1035373e0; end: 10353741f;  */

void FUN_1035373e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76bd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd63a8;
  func_0x000107c61520(&UNK_10dbd63a8,&UNK_110662228);
  puRam0000000112f76bd8 = puVar1;
  return;
}



/* Entry: 103537420; end: 103537433;  */

void FUN_103537420(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537434();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103537474)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537434; end: 1035374df;  */

void FUN_103537434(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6468;
  func_0x000107c61520(&UNK_10dbd6468,&UNK_1106622b8);
  puRam0000000112f76be0 = puVar1;
  return;
}



/* Entry: 1035374e0; end: 103537523;  */

void FUN_1035374e0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103537524; end: 103537527;  */

void FUN_103537524(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd64a8;
  func_0x000107c61520(&UNK_10dbd64a8,&UNK_1106622b8);
  puRam0000000112f76c00 = puVar1;
  return;
}



/* Entry: 103537528; end: 103537567;  */

void FUN_103537528(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd64a8;
  func_0x000107c61520(&UNK_10dbd64a8,&UNK_1106622b8);
  puRam0000000112f76c00 = puVar1;
  return;
}



/* Entry: 103537568; end: 10353758b;  */

void FUN_103537568(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10353758c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10353758c; end: 1035375cb;  */

void FUN_10353758c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd65a8;
  func_0x000107c61520(&UNK_10dbd65a8,&UNK_110662330);
  puRam0000000112f76c08 = puVar1;
  return;
}



/* Entry: 1035375cc; end: 1035375e3;  */

void FUN_1035375cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10353663c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&SUB_1015ecf38)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035375e4; end: 103537623;  */

void FUN_1035375e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6610;
  func_0x000107c61520(&UNK_10dbd6610,&UNK_110662330);
  puRam0000000112f76c10 = puVar1;
  return;
}



/* Entry: 103537624; end: 103537647;  */

void FUN_103537624(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537648();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103537648; end: 103537687;  */

void FUN_103537648(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6680;
  func_0x000107c61520(&UNK_10dbd6680,&UNK_1106623b8);
  puRam0000000112f76c18 = puVar1;
  return;
}



/* Entry: 103537688; end: 10353769b;  */

void FUN_103537688(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103536980();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10353769c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10353769c; end: 1035376db;  */

void FUN_10353769c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd6638;
  func_0x000107c61520(&DAT_10dbd6638,&UNK_1106623b8);
  puRam0000000112f76c20 = puVar1;
  return;
}



/* Entry: 1035376dc; end: 1035376df;  */

void FUN_1035376dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd66e8;
  func_0x000107c61520(&UNK_10dbd66e8,&UNK_1106623b8);
  puRam0000000112f76c28 = puVar1;
  return;
}



/* Entry: 1035376e0; end: 10353771f;  */

void FUN_1035376e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd66e8;
  func_0x000107c61520(&UNK_10dbd66e8,&UNK_1106623b8);
  puRam0000000112f76c28 = puVar1;
  return;
}



/* Entry: 103537720; end: 103537743;  */

void FUN_103537720(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537744();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103537744; end: 103537783;  */

void FUN_103537744(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6758;
  func_0x000107c61520(&UNK_10dbd6758,&UNK_110662448);
  puRam0000000112f76c30 = puVar1;
  return;
}



/* Entry: 103537784; end: 103537797;  */

void FUN_103537784(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035369c0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103537798();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537798; end: 1035377d7;  */

void FUN_103537798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd6710;
  func_0x000107c61520(&DAT_10dbd6710,&UNK_110662448);
  puRam0000000112f76c38 = puVar1;
  return;
}



/* Entry: 1035377d8; end: 1035377db;  */

void FUN_1035377d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd67c0;
  func_0x000107c61520(&UNK_10dbd67c0,&UNK_110662448);
  puRam0000000112f76c40 = puVar1;
  return;
}



/* Entry: 1035377dc; end: 10353781b;  */

void FUN_1035377dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd67c0;
  func_0x000107c61520(&UNK_10dbd67c0,&UNK_110662448);
  puRam0000000112f76c40 = puVar1;
  return;
}



/* Entry: 10353781c; end: 10353783f;  */

void FUN_10353781c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537840();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103537840; end: 10353787f;  */

void FUN_103537840(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6830;
  func_0x000107c61520(&UNK_10dbd6830,&UNK_1106624d0);
  puRam0000000112f76c48 = puVar1;
  return;
}



/* Entry: 103537880; end: 103537897;  */

void FUN_103537880(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103536a00)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103526240)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537898; end: 1035378d7;  */

void FUN_103537898(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6898;
  func_0x000107c61520(&UNK_10dbd6898,&UNK_1106624d0);
  puRam0000000112f76c50 = puVar1;
  return;
}



/* Entry: 1035378d8; end: 1035378fb;  */

void FUN_1035378d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035378fc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035378fc; end: 10353793b;  */

void FUN_1035378fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6908;
  func_0x000107c61520(&UNK_10dbd6908,&UNK_110662550);
  puRam0000000112f76c58 = puVar1;
  return;
}



/* Entry: 10353793c; end: 10353794f;  */

void FUN_10353793c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103536a40)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103537950();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537950; end: 10353798f;  */

void FUN_103537950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd68c0;
  func_0x000107c61520(&DAT_10dbd68c0,&UNK_110662550);
  puRam0000000112f76c60 = puVar1;
  return;
}



/* Entry: 103537990; end: 103537993;  */

void FUN_103537990(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6970;
  func_0x000107c61520(&UNK_10dbd6970,&UNK_110662550);
  puRam0000000112f76c68 = puVar1;
  return;
}



/* Entry: 103537994; end: 1035379d3;  */

void FUN_103537994(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6970;
  func_0x000107c61520(&UNK_10dbd6970,&UNK_110662550);
  puRam0000000112f76c68 = puVar1;
  return;
}



/* Entry: 1035379d4; end: 1035379f7;  */

void FUN_1035379d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035379f8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035379f8; end: 103537a37;  */

void FUN_1035379f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd69e0;
  func_0x000107c61520(&UNK_10dbd69e0,&UNK_1106625d0);
  puRam0000000112f76c70 = puVar1;
  return;
}



/* Entry: 103537a38; end: 103537a4f;  */

void FUN_103537a38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103536a80)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1034ab058();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537a50; end: 103537a8f;  */

void FUN_103537a50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6a48;
  func_0x000107c61520(&UNK_10dbd6a48,&UNK_1106625d0);
  puRam0000000112f76c78 = puVar1;
  return;
}



/* Entry: 103537a90; end: 103537ab3;  */

void FUN_103537a90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103537ab4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103537ab4; end: 103537af3;  */

void FUN_103537ab4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6ab8;
  func_0x000107c61520(&UNK_10dbd6ab8,&UNK_110662668);
  puRam0000000112f76c80 = puVar1;
  return;
}



/* Entry: 103537af4; end: 103537b07;  */

void FUN_103537af4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103536b40)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103537b08();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103537b08; end: 103537b47;  */

void FUN_103537b08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd6a70;
  func_0x000107c61520(&DAT_10dbd6a70,&UNK_110662668);
  puRam0000000112f76c88 = puVar1;
  return;
}



/* Entry: 103537b48; end: 103537b4b;  */

void FUN_103537b48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd6b20;
  func_0x000107c61520(&UNK_10dbd6b20,&UNK_110662668);
  puRam0000000112f76c90 = puVar1;
  return;
}


