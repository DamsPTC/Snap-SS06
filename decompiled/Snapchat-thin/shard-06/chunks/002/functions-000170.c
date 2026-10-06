/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10460ddac; end: 10460ddbf;  */

undefined1  [16] FUN_10460ddac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10460ddbc;
  return auVar1;
}



/* Entry: 10460ddc0; end: 10460ddfb;  */

void FUN_10460ddc0(void)

{
  FUN_10460db54();
  return;
}



/* Entry: 10460ddfc; end: 10460de9b;  */

void FUN_10460ddfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089978 != -1) {
    _swift_once(0x113089978,FUN_10460d9f4);
  }
  uVar5 = uRam0000000113814b38;
  uVar4 = uRam0000000113814b30;
  uVar3 = uRam0000000113814b28;
  uVar2 = uRam0000000113814b20;
  uVar1 = uRam0000000113814b18;
  *param_1 = uRam0000000113814b10;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10460de9c; end: 10460ded7;  */

void FUN_10460de9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089998;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089998,&UNK_10dd1f650);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10460ded8; end: 10460df37;  */

void FUN_10460ded8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar4 = *unaff_x20;
  uVar3 = *(undefined4 *)(unaff_x20 + 1);
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001046048d8(auStack_78,uVar4,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10460df38; end: 10460df47;  */

void FUN_10460df38(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar4 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (lVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(lVar4);
  }
  if ((int)lVar6 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)lVar6);
  }
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar6 = (long)(int)lVar1;
      lVar4 = lVar1 >> 0x20;
      goto code_r0x0001045bfeb8;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto code_r0x0001045bfed0;
  }
  else {
    if (uVar5 != 2) goto code_r0x0001045bfed0;
    lVar6 = *(long *)(lVar1 + 0x10);
    lVar4 = *(long *)(lVar1 + 0x18);
code_r0x0001045bfeb8:
    if (lVar6 == lVar4) goto code_r0x0001045bfed0;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,lVar1,uVar2);
code_r0x0001045bfed0:
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



/* Entry: 10460df48; end: 10460dfa3;  */

void FUN_10460df48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar4 = *unaff_x20;
  uVar3 = *(undefined4 *)(unaff_x20 + 1);
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x0001046048d8(auStack_78,uVar4,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10460dfa4; end: 10460dfd3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10460dfa4(long *param_1,long *param_2)

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
  
  if (*param_1 != *param_2 || (int)param_1[1] != (int)param_2[1]) {
    return (byte *)0x0;
  }
  lVar24 = param_2[2];
  uVar16 = param_2[3];
  pbVar10 = (byte *)param_1[2];
  pbVar25 = (byte *)param_1[3];
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



/* Entry: 10460dfd4; end: 10460dff7;  */

void FUN_10460dfd4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460dff8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10460dff8; end: 10460e037;  */

void FUN_10460dff8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f598;
  _swift_getWitnessTable(&UNK_10dd1f598,&UNK_11078f958);
  puRam0000000113089980 = puVar1;
  return;
}



/* Entry: 10460e038; end: 10460e063;  */

void FUN_10460e038(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460e064();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015efcec();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10460e064; end: 10460e0a3;  */

void FUN_10460e064(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f5c0;
  _swift_getWitnessTable(&UNK_10dd1f5c0,&UNK_11078f958);
  puRam0000000113089988 = puVar1;
  return;
}



/* Entry: 10460e0a4; end: 10460e0a7;  */

void FUN_10460e0a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f600;
  _swift_getWitnessTable(&UNK_10dd1f600,&UNK_11078f958);
  puRam0000000113089990 = puVar1;
  return;
}



/* Entry: 10460e0a8; end: 10460e0e7;  */

void FUN_10460e0a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f600;
  _swift_getWitnessTable(&UNK_10dd1f600,&UNK_11078f958);
  puRam0000000113089990 = puVar1;
  return;
}



/* Entry: 10460e0e8; end: 10460e113;  */

long FUN_10460e0e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10460e114; end: 10460e11f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10460e114(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10460e120; end: 10460e1bf;  */

undefined8 * FUN_10460e120(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10460e1c0; end: 10460e207;  */

undefined8 * FUN_10460e1c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10460e208; end: 10460e2bb;  */

int FUN_10460e208(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10460e2bc; end: 10460e2df;  */

void FUN_10460e2bc(undefined8 param_1,undefined8 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 10460e2e0; end: 10460e4d3;  */

void FUN_10460e2e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x20;
  ulong *puVar13;
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
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  puVar13 = (ulong *)(param_1 + 0x48);
  do {
    lVar10 = lVar10 + -1;
    uVar2 = puVar13[-5];
    uVar5 = puVar13[-4];
    uVar3 = puVar13[-3];
    uVar6 = puVar13[-2];
    uVar4 = puVar13[-1];
    uVar7 = *puVar13;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      func_0x00010006c00c(uVar4,uVar7);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      func_0x00010006c00c(uVar4,uVar7);
      __sSS4hash4intoys6HasherVz_tF(&uStack_100,uVar2,uVar5);
    }
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar1 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      __ss6HasherV8_combineyySuF(2);
      __sSS4hash4intoys6HasherVz_tF(&uStack_100,uVar3,uVar6);
    }
    uVar8 = (uint)(uVar7 >> 0x20);
    uVar9 = uVar8 >> 0x1e;
    if (uVar8 >> 0x1e < 2) {
      if (uVar9 == 0) {
        if ((uVar7 & 0xff000000000000) == 0) goto LAB_10460e44c;
      }
      else {
        lVar11 = (long)(int)uVar4;
        lVar12 = (long)uVar4 >> 0x20;
LAB_10460e434:
        if (lVar11 == lVar12) goto LAB_10460e44c;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,uVar4,uVar7);
    }
    else if (uVar9 == 2) {
      lVar11 = *(long *)(uVar4 + 0x10);
      lVar12 = *(long *)(uVar4 + 0x18);
      goto LAB_10460e434;
    }
LAB_10460e44c:
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar5);
    func_0x00010006c090(uVar4,uVar7);
    if (lVar10 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    puVar13 = puVar13 + 6;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 10460e4d4; end: 10460e73b;  */

void FUN_10460e4d4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x20;
  long *plVar14;
  long lVar15;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  plVar14 = (long *)(param_1 + 0x50);
  do {
    lVar11 = lVar11 + -1;
    uVar2 = plVar14[-6];
    uVar5 = plVar14[-5];
    lVar3 = plVar14[-4];
    uVar6 = plVar14[-3];
    lVar4 = plVar14[-2];
    lVar7 = plVar14[-1];
    lVar15 = *plVar14;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      func_0x00010006c00c(lVar3,uVar6);
      func_0x000104603ab8(lVar4,lVar7,lVar15);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      _swift_bridgeObjectRetain(uVar5);
      func_0x00010006c00c(lVar3,uVar6);
      func_0x000104603ab8(lVar4,lVar7,lVar15);
      __sSS4hash4intoys6HasherVz_tF(&uStack_110,uVar2,uVar5);
    }
    if (lVar15 != 0) {
      __ss6HasherV8_combineyySuF(2);
      _swift_beginAccess(lVar15 + 0x10,auStack_128,0,0);
      uVar2 = *(ulong *)(lVar15 + 0x10);
      uVar8 = *(ulong *)(lVar15 + 0x18);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar1 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x000104603ab8(lVar4,lVar7,lVar15);
        _swift_bridgeObjectRetain(uVar8);
        __sSS4hash4intoys6HasherVz_tF(&uStack_110,uVar2,uVar8);
        func_0x00010459fd54(lVar4,lVar7,lVar15);
        _swift_bridgeObjectRelease(uVar8);
      }
    }
    uVar9 = (uint)(uVar6 >> 0x20);
    uVar10 = uVar9 >> 0x1e;
    if (uVar9 >> 0x1e < 2) {
      if (uVar10 == 0) {
        if ((uVar6 & 0xff000000000000) == 0) goto LAB_10460e6a8;
      }
      else {
        lVar12 = (long)(int)lVar3;
        lVar13 = lVar3 >> 0x20;
LAB_10460e690:
        if (lVar12 == lVar13) goto LAB_10460e6a8;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_110,lVar3,uVar6);
    }
    else if (uVar10 == 2) {
      lVar12 = *(long *)(lVar3 + 0x10);
      lVar13 = *(long *)(lVar3 + 0x18);
      goto LAB_10460e690;
    }
LAB_10460e6a8:
    _swift_bridgeObjectRelease(uVar5);
    func_0x00010006c090(lVar3,uVar6);
    func_0x00010459fd54(lVar4,lVar7,lVar15);
    if (lVar11 == 0) {
      unaff_x20[5] = uStack_e8;
      unaff_x20[4] = uStack_f0;
      unaff_x20[7] = uStack_d8;
      unaff_x20[6] = uStack_e0;
      unaff_x20[8] = uStack_d0;
      unaff_x20[1] = uStack_108;
      *unaff_x20 = uStack_110;
      unaff_x20[3] = uStack_f8;
      unaff_x20[2] = uStack_100;
      return;
    }
    plVar14 = plVar14 + 7;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
  } while( true );
}



/* Entry: 10460e73c; end: 10460e87b;  */

void FUN_10460e73c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_1e8 [120];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uStack_f8 = unaff_x20[5];
    uStack_100 = unaff_x20[4];
    uStack_e8 = unaff_x20[7];
    uStack_f0 = unaff_x20[6];
    uStack_e0 = unaff_x20[8];
    uStack_118 = unaff_x20[1];
    uStack_120 = *unaff_x20;
    uStack_108 = unaff_x20[3];
    uStack_110 = unaff_x20[2];
    puVar2 = (undefined8 *)(param_1 + 0x20);
    while( true ) {
      lVar1 = lVar1 + -1;
      uStack_88 = puVar2[9];
      uStack_90 = puVar2[8];
      uStack_78 = puVar2[0xb];
      uStack_80 = puVar2[10];
      uStack_68 = puVar2[0xd];
      uStack_70 = puVar2[0xc];
      uStack_60 = puVar2[0xe];
      uStack_c8 = puVar2[1];
      uStack_d0 = *puVar2;
      uStack_b8 = puVar2[3];
      uStack_c0 = puVar2[2];
      uStack_a8 = puVar2[5];
      uStack_b0 = puVar2[4];
      uStack_98 = puVar2[7];
      uStack_a0 = puVar2[6];
      uStack_168 = uStack_118;
      uStack_170 = uStack_120;
      uStack_130 = uStack_e0;
      uStack_148 = uStack_f8;
      uStack_150 = uStack_100;
      uStack_138 = uStack_e8;
      uStack_140 = uStack_f0;
      uStack_158 = uStack_108;
      uStack_160 = uStack_110;
      func_0x0001046043f4(&uStack_d0,auStack_1e8);
      FUN_1045b5550(&uStack_170);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      func_0x000104604430(&uStack_d0);
      if (lVar1 == 0) break;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      uStack_e8 = uStack_138;
      uStack_f0 = uStack_140;
      uStack_e0 = uStack_130;
      uStack_118 = uStack_168;
      uStack_120 = uStack_170;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      puVar2 = puVar2 + 0xf;
    }
    unaff_x20[5] = uStack_148;
    unaff_x20[4] = uStack_150;
    unaff_x20[7] = uStack_138;
    unaff_x20[6] = uStack_140;
    unaff_x20[8] = uStack_130;
    unaff_x20[1] = uStack_168;
    *unaff_x20 = uStack_170;
    unaff_x20[3] = uStack_158;
    unaff_x20[2] = uStack_160;
  }
  return;
}



/* Entry: 10460e87c; end: 10460ec97;  */

void FUN_10460e87c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 *unaff_x20;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [120];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 == 0) {
    return;
  }
  lVar21 = 0;
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    plVar16 = (long *)(param_1 + 0x20 + lVar21 * 0x78);
    uStack_e8 = plVar16[9];
    lStack_f0 = plVar16[8];
    lStack_d8 = plVar16[0xb];
    lStack_e0 = plVar16[10];
    lStack_c8 = plVar16[0xd];
    uStack_d0 = plVar16[0xc];
    lStack_c0 = plVar16[0xe];
    lStack_128 = plVar16[1];
    lVar17 = *plVar16;
    lStack_118 = plVar16[3];
    uStack_120 = plVar16[2];
    lStack_108 = plVar16[5];
    lStack_110 = plVar16[4];
    lStack_f8 = plVar16[7];
    lStack_100 = plVar16[6];
    uStack_140 = uStack_70;
    uStack_158 = uStack_88;
    uStack_160 = uStack_90;
    uStack_148 = uStack_78;
    uStack_150 = uStack_80;
    uStack_178 = uStack_a8;
    uStack_180 = uStack_b0;
    uStack_168 = uStack_98;
    uStack_170 = uStack_a0;
    lStack_130 = lVar17;
    if (*(long *)(lVar17 + 0x10) != 0) {
      __ss6HasherV8_combineyySuF(2);
      lVar19 = *(long *)(lVar17 + 0x10);
      if (lVar19 != 0) {
        uStack_1a8 = uStack_158;
        uStack_1b0 = uStack_160;
        uStack_198 = uStack_148;
        uStack_1a0 = uStack_150;
        uStack_190 = uStack_140;
        uStack_1c8 = uStack_178;
        uStack_1d0 = uStack_180;
        uStack_1b8 = uStack_168;
        uStack_1c0 = uStack_170;
        func_0x000104604214(&lStack_130,auStack_248);
        pbVar18 = (byte *)(lVar17 + 0x40);
        do {
          lVar19 = lVar19 + -1;
          lVar17 = *(long *)(pbVar18 + -0x20);
          uVar3 = *(ulong *)(pbVar18 + -0x18);
          uVar2 = *(undefined8 *)(pbVar18 + -0x10);
          lVar4 = *(long *)(pbVar18 + -8);
          bVar5 = *pbVar18;
          uStack_268 = uStack_1a8;
          uStack_270 = uStack_1b0;
          uStack_258 = uStack_198;
          uStack_260 = uStack_1a0;
          uStack_250 = uStack_190;
          uStack_288 = uStack_1c8;
          uStack_290 = uStack_1d0;
          uStack_278 = uStack_1b8;
          uStack_280 = uStack_1c0;
          if (lVar4 == 0) {
            func_0x00010006c00c(lVar17,uVar3);
          }
          else {
            __ss6HasherV8_combineyySuF(1);
            func_0x00010006c00c(lVar17,uVar3);
            _swift_bridgeObjectRetain(lVar4);
            __sSS4hash4intoys6HasherVz_tF(&uStack_290,uVar2,lVar4);
          }
          if (bVar5 != 2) {
            __ss6HasherV8_combineyySuF(2);
            __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
          }
          uVar6 = (uint)(uVar3 >> 0x20);
          uVar15 = uVar6 >> 0x1e;
          if (uVar6 >> 0x1e < 2) {
            if (uVar15 == 0) {
              if ((uVar3 & 0xff000000000000) != 0) {
LAB_10460ea48:
                __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_290,lVar17,uVar3);
              }
            }
            else if ((long)(int)lVar17 != lVar17 >> 0x20) goto LAB_10460ea48;
          }
          else if ((uVar15 == 2) && (*(long *)(lVar17 + 0x10) != *(long *)(lVar17 + 0x18)))
          goto LAB_10460ea48;
          func_0x00010006c090(lVar17,uVar3);
          _swift_bridgeObjectRelease(lVar4);
          uVar2 = uStack_250;
          uVar7 = uStack_270;
          uVar8 = uStack_268;
          uVar9 = uStack_280;
          uVar10 = uStack_278;
          uVar11 = uStack_260;
          uVar12 = uStack_258;
          uVar13 = uStack_290;
          uVar14 = uStack_288;
          lVar17 = lStack_118;
          lVar4 = lStack_110;
          if (lVar19 == 0) goto joined_r0x00010460ec08;
          pbVar18 = pbVar18 + 0x28;
          uStack_1a8 = uStack_268;
          uStack_1b0 = uStack_270;
          uStack_198 = uStack_258;
          uStack_1a0 = uStack_260;
          uStack_190 = uStack_250;
          uStack_1c8 = uStack_288;
          uStack_1d0 = uStack_290;
          uStack_1b8 = uStack_278;
          uStack_1c0 = uStack_280;
        } while( true );
      }
    }
    func_0x000104604214(&lStack_130,auStack_248);
    uVar2 = uStack_140;
    uVar7 = uStack_160;
    uVar8 = uStack_158;
    uVar9 = uStack_170;
    uVar10 = uStack_168;
    uVar11 = uStack_150;
    uVar12 = uStack_148;
    uVar13 = uStack_180;
    uVar14 = uStack_178;
    lVar17 = lStack_118;
    lVar4 = lStack_110;
joined_r0x00010460ec08:
    uStack_178 = uVar14;
    uStack_180 = uVar13;
    uStack_148 = uVar12;
    uStack_150 = uVar11;
    uStack_168 = uVar10;
    uStack_170 = uVar9;
    uStack_158 = uVar8;
    uStack_160 = uVar7;
    uStack_140 = uVar2;
    lStack_118 = lVar17;
    lStack_110 = lVar4;
    if (lVar4 != 0) {
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&uStack_180,lVar17,lVar4);
    }
    lVar17 = lStack_108;
    if ((char)lStack_100 != '\x01') {
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys6UInt64VF(lVar17);
    }
    lVar17 = lStack_f8;
    if ((char)lStack_f0 != '\x01') {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys6UInt64VF(lVar17);
    }
    uVar3 = uStack_e8;
    if ((char)lStack_e0 != '\x01') {
      __ss6HasherV8_combineyySuF(6);
      uVar1 = 0;
      if ((uVar3 & 0x7fffffffffffffff) != 0) {
        uVar1 = uVar3;
      }
      __ss6HasherV8_combineyys6UInt64VF(uVar1);
    }
    uVar3 = uStack_d0;
    lVar17 = lStack_d8;
    if (uStack_d0 >> 0x3c < 0xf) {
      __ss6HasherV8_combineyySuF(7);
      func_0x00010006c00c(lVar17,uVar3);
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180,lVar17,uVar3);
      func_0x0001000b44c0(lVar17,uVar3);
    }
    lVar19 = lStack_c0;
    lVar17 = lStack_c8;
    if (lStack_c0 != 0) {
      __ss6HasherV8_combineyySuF(8);
      __sSS4hash4intoys6HasherVz_tF(&uStack_180,lVar17,lVar19);
    }
    uVar6 = (uint)(uStack_120 >> 0x20);
    uVar15 = uVar6 >> 0x1e;
    if (uVar6 >> 0x1e < 2) {
      if (uVar15 == 0) {
        if ((uStack_120 & 0xff000000000000) == 0) goto LAB_10460ec28;
      }
      else {
        lVar17 = (long)(int)lStack_128;
        lVar19 = lStack_128 >> 0x20;
LAB_10460ec18:
        if (lVar17 == lVar19) goto LAB_10460ec28;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180);
    }
    else if (uVar15 == 2) {
      lVar17 = *(long *)(lStack_128 + 0x10);
      lVar19 = *(long *)(lStack_128 + 0x18);
      goto LAB_10460ec18;
    }
LAB_10460ec28:
    lVar21 = lVar21 + 1;
    func_0x000104604248(&lStack_130);
    if (lVar21 == lVar20) {
      unaff_x20[5] = uStack_158;
      unaff_x20[4] = uStack_160;
      unaff_x20[7] = uStack_148;
      unaff_x20[6] = uStack_150;
      unaff_x20[8] = uStack_140;
      unaff_x20[1] = uStack_178;
      *unaff_x20 = uStack_180;
      unaff_x20[3] = uStack_168;
      unaff_x20[2] = uStack_170;
      return;
    }
    uStack_88 = uStack_158;
    uStack_90 = uStack_160;
    uStack_78 = uStack_148;
    uStack_80 = uStack_150;
    uStack_70 = uStack_140;
    uStack_a8 = uStack_178;
    uStack_b0 = uStack_180;
    uStack_98 = uStack_168;
    uStack_a0 = uStack_170;
  } while( true );
}



/* Entry: 10460ec98; end: 10460ee57;  */

void FUN_10460ec98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  byte *pbVar9;
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
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  pbVar9 = (byte *)(param_1 + 0x40);
  do {
    lVar8 = lVar8 + -1;
    lVar1 = *(long *)(pbVar9 + -0x20);
    uVar3 = *(ulong *)(pbVar9 + -0x18);
    uVar2 = *(undefined8 *)(pbVar9 + -0x10);
    lVar4 = *(long *)(pbVar9 + -8);
    bVar5 = *pbVar9;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (lVar4 == 0) {
      func_0x00010006c00c(lVar1,uVar3);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      func_0x00010006c00c(lVar1,uVar3);
      _swift_bridgeObjectRetain(lVar4);
      __sSS4hash4intoys6HasherVz_tF(&uStack_100,uVar2,lVar4);
    }
    if (bVar5 != 2) {
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
    }
    uVar6 = (uint)(uVar3 >> 0x20);
    uVar7 = uVar6 >> 0x1e;
    if (uVar6 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((uVar3 & 0xff000000000000) != 0) {
LAB_10460edcc:
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,lVar1,uVar3);
        }
      }
      else if ((long)(int)lVar1 != lVar1 >> 0x20) goto LAB_10460edcc;
    }
    else if ((uVar7 == 2) && (*(long *)(lVar1 + 0x10) != *(long *)(lVar1 + 0x18)))
    goto LAB_10460edcc;
    func_0x00010006c090(lVar1,uVar3);
    _swift_bridgeObjectRelease(lVar4);
    if (lVar8 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    pbVar9 = pbVar9 + 0x28;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 10460ee58; end: 10460ef93;  */

void FUN_10460ee58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_228 [152];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined1 uStack_60;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uStack_118 = unaff_x20[5];
    uStack_120 = unaff_x20[4];
    uStack_108 = unaff_x20[7];
    uStack_110 = unaff_x20[6];
    uStack_100 = unaff_x20[8];
    uStack_138 = unaff_x20[1];
    uStack_140 = *unaff_x20;
    uStack_128 = unaff_x20[3];
    uStack_130 = unaff_x20[2];
    puVar2 = (undefined8 *)(param_1 + 0x20);
    while( true ) {
      lVar1 = lVar1 + -1;
      uStack_88 = puVar2[0xd];
      uStack_90 = puVar2[0xc];
      uStack_78 = puVar2[0xf];
      uStack_80 = puVar2[0xe];
      uStack_68 = puVar2[0x11];
      uStack_70 = puVar2[0x10];
      uStack_60 = *(undefined1 *)(puVar2 + 0x12);
      uStack_c8 = puVar2[5];
      uStack_d0 = puVar2[4];
      uStack_b8 = puVar2[7];
      uStack_c0 = puVar2[6];
      uStack_a8 = puVar2[9];
      uStack_b0 = puVar2[8];
      uStack_98 = puVar2[0xb];
      uStack_a0 = puVar2[10];
      uStack_e8 = puVar2[1];
      uStack_f0 = *puVar2;
      uStack_d8 = puVar2[3];
      uStack_e0 = puVar2[2];
      uStack_168 = uStack_118;
      uStack_170 = uStack_120;
      uStack_158 = uStack_108;
      uStack_160 = uStack_110;
      uStack_150 = uStack_100;
      uStack_188 = uStack_138;
      uStack_190 = uStack_140;
      uStack_178 = uStack_128;
      uStack_180 = uStack_130;
      func_0x0001046042d4(&uStack_f0,auStack_228);
      FUN_1045db780(&uStack_190);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      func_0x000104604308(&uStack_f0);
      if (lVar1 == 0) break;
      uStack_118 = uStack_168;
      uStack_120 = uStack_170;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      uStack_100 = uStack_150;
      uStack_138 = uStack_188;
      uStack_140 = uStack_190;
      uStack_128 = uStack_178;
      uStack_130 = uStack_180;
      puVar2 = puVar2 + 0x13;
    }
    unaff_x20[5] = uStack_168;
    unaff_x20[4] = uStack_170;
    unaff_x20[7] = uStack_158;
    unaff_x20[6] = uStack_160;
    unaff_x20[8] = uStack_150;
    unaff_x20[1] = uStack_188;
    *unaff_x20 = uStack_190;
    unaff_x20[3] = uStack_178;
    unaff_x20[2] = uStack_180;
  }
  return;
}



/* Entry: 10460ef94; end: 10460f15b;  */

void FUN_10460ef94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  long *plVar9;
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
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  plVar9 = (long *)(param_1 + 0x40);
  do {
    lVar8 = lVar8 + -1;
    lVar1 = plVar9[-4];
    uVar3 = plVar9[-3];
    bVar5 = *(byte *)(plVar9 + -2);
    lVar2 = plVar9[-1];
    lVar4 = *plVar9;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (lVar4 == 0) {
      func_0x00010006c00c(lVar1,uVar3);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      func_0x00010006c00c(lVar1,uVar3);
      _swift_bridgeObjectRetain(lVar4);
      __sSS4hash4intoys6HasherVz_tF(&uStack_100,lVar2,lVar4);
    }
    if (bVar5 != 0xc) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd201f8 + (ulong)bVar5 * 8));
    }
    uVar6 = (uint)(uVar3 >> 0x20);
    uVar7 = uVar6 >> 0x1e;
    if (uVar6 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((uVar3 & 0xff000000000000) != 0) {
LAB_10460f0d0:
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,lVar1,uVar3);
        }
      }
      else if ((long)(int)lVar1 != lVar1 >> 0x20) goto LAB_10460f0d0;
    }
    else if ((uVar7 == 2) && (*(long *)(lVar1 + 0x10) != *(long *)(lVar1 + 0x18)))
    goto LAB_10460f0d0;
    func_0x00010006c090(lVar1,uVar3);
    _swift_bridgeObjectRelease(lVar4);
    if (lVar8 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    plVar9 = plVar9 + 5;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 10460f15c; end: 10460f6fb;  */

void FUN_10460f15c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  uint7 uVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar21;
  undefined1 auStack_288 [72];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  char cStack_d0;
  uint7 uStack_cf;
  byte bStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  plVar21 = (long *)(param_1 + 0x20);
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar15 = lVar15 + -1;
    lStack_e8 = plVar21[9];
    lStack_f0 = plVar21[8];
    uStack_e0 = plVar21[10];
    lStack_108 = plVar21[5];
    lVar18 = plVar21[4];
    uStack_f8 = plVar21[7];
    lStack_100 = plVar21[6];
    uStack_d8 = (undefined1)plVar21[0xb];
    uStack_cf = (uint7)*(undefined8 *)((long)plVar21 + 0x61);
    bStack_c8 = (byte)((ulong)*(undefined8 *)((long)plVar21 + 0x61) >> 0x38);
    uStack_d7 = (undefined7)*(undefined8 *)((long)plVar21 + 0x59);
    cStack_d0 = (char)((ulong)*(undefined8 *)((long)plVar21 + 0x59) >> 0x38);
    lStack_128 = plVar21[1];
    lStack_130 = *plVar21;
    lVar16 = plVar21[3];
    uStack_120 = plVar21[2];
    uStack_140 = uStack_80;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    lStack_118 = lVar16;
    lStack_110 = lVar18;
    if (lVar18 == 0) {
      func_0x000104604334(&lStack_130,&uStack_1f0);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      func_0x000104604334(&lStack_130,&uStack_1f0);
      __sSS4hash4intoys6HasherVz_tF(&uStack_180,lVar16,lVar18);
    }
    if ((*(long *)(lStack_130 + 0x10) == 0) || (FUN_10460f6fc(lStack_130,2), unaff_x21 == 0)) {
      bVar13 = bStack_c8;
      uVar12 = uStack_cf;
      cVar11 = cStack_d0;
      uVar9 = uStack_e0;
      lVar7 = lStack_e8;
      lVar20 = lStack_f0;
      uVar5 = uStack_f8;
      lVar18 = lStack_100;
      lVar16 = lStack_108;
      if (lStack_108 != 0) {
        lVar2 = CONCAT71(uStack_d7,uStack_d8);
        uVar3 = CONCAT71(uStack_cf,cStack_d0);
        __ss6HasherV8_combineyySuF(3);
        uStack_1c8 = uStack_158;
        uStack_1d0 = uStack_160;
        uStack_1b8 = uStack_148;
        uStack_1c0 = uStack_150;
        uStack_1b0 = uStack_140;
        uStack_1e8 = uStack_178;
        uStack_1f0 = uStack_180;
        uStack_1d8 = uStack_168;
        uStack_1e0 = uStack_170;
        if (bVar13 != 2) {
          __ss6HasherV8_combineyySuF(0x21);
          __ss6HasherV8_combineyys5UInt8VF(bVar13 & 1);
        }
        uVar10 = uStack_e0;
        lVar8 = lStack_e8;
        lVar19 = lStack_f0;
        uVar6 = uStack_f8;
        lVar17 = lStack_100;
        if (lVar2 == 0) {
          uVar3 = CONCAT71(uStack_d7,uStack_d8);
          uVar4 = CONCAT71(uStack_cf,cStack_d0);
          _swift_bridgeObjectRetain(lStack_108);
          func_0x00010006c00c(lVar17,uVar6);
          _swift_bridgeObjectRetain(lVar19);
          func_0x0001045f8978(lVar8,uVar10,uVar3,uVar4);
        }
        else {
          __ss6HasherV8_combineyySuF(0x22);
          uStack_218 = uStack_1c8;
          uStack_220 = uStack_1d0;
          uStack_208 = uStack_1b8;
          uStack_210 = uStack_1c0;
          uStack_200 = uStack_1b0;
          uStack_238 = uStack_1e8;
          uStack_240 = uStack_1f0;
          uStack_228 = uStack_1d8;
          uStack_230 = uStack_1e0;
          if (cVar11 != '\x04') {
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(cVar11);
          }
          if (((ulong)uVar12 & 0xff) != 3) {
            __ss6HasherV8_combineyySuF(2);
            __ss6HasherV8_combineyySuF((ulong)uVar12 & 0xff);
          }
          if (((ulong)uVar12 & 0xff00) != 0x300) {
            __ss6HasherV8_combineyySuF(3);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 8) & 0xff);
          }
          if (((ulong)uVar12 & 0xff0000) != 0x30000) {
            __ss6HasherV8_combineyySuF(4);
            __ss6HasherV8_combineyySuF
                      (*(undefined8 *)(&UNK_10dd20258 + (((ulong)uVar12 & 0xff0000) >> 0x10) * 8));
          }
          if (((ulong)uVar12 & 0xff000000) != 0x3000000) {
            __ss6HasherV8_combineyySuF(5);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x18) & 0xff);
          }
          if (((ulong)uVar12 & 0xff00000000) != 0x300000000) {
            __ss6HasherV8_combineyySuF(6);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x20) & 0xff);
          }
          if (((ulong)uVar12 & 0xff0000000000) != 0x30000000000) {
            __ss6HasherV8_combineyySuF(7);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x28) & 0xff);
          }
          if ((ulong)(uVar12 >> 0x30) != 5) {
            __ss6HasherV8_combineyySuF(8);
            __ss6HasherV8_combineyySuF((ulong)(uVar12 >> 0x30));
          }
          func_0x00010461b518(&lStack_108,auStack_288,0x113087010,&UNK_10dd19c50);
          func_0x0001045f8978(lVar7,uVar9,lVar2,uVar3);
          FUN_1045ae514(&uStack_240,1000,0x2711,lVar2);
          if (unaff_x21 == 0) {
            uVar1 = (uint)(uVar9 >> 0x20);
            uVar14 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar14 == 0) {
                if ((uVar9 & 0xff000000000000) == 0) goto LAB_10460f4a8;
              }
              else {
                lVar17 = (long)(int)lVar7;
                lVar19 = lVar7 >> 0x20;
LAB_10460f67c:
                if (lVar17 == lVar19) goto LAB_10460f4a8;
              }
              __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_240,lVar7,uVar9);
            }
            else if (uVar14 == 2) {
              lVar17 = *(long *)(lVar7 + 0x10);
              lVar19 = *(long *)(lVar7 + 0x18);
              goto LAB_10460f67c;
            }
          }
          else {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
LAB_10460f4a8:
          func_0x00010458a4f4(lVar7,uVar9,lVar2,uVar3);
          uStack_1c8 = uStack_218;
          uStack_1d0 = uStack_220;
          uStack_1b8 = uStack_208;
          uStack_1c0 = uStack_210;
          uStack_1b0 = uStack_200;
          uStack_1e8 = uStack_238;
          uStack_1f0 = uStack_240;
          uStack_1d8 = uStack_228;
          uStack_1e0 = uStack_230;
        }
        if (((*(long *)(lVar16 + 0x10) == 0) || (FUN_10460e87c(lVar16,999), unaff_x21 == 0)) &&
           (FUN_1045ae514(&uStack_1f0,1000,0x20000000,lVar20), unaff_x21 == 0)) {
          uVar1 = (uint)(uVar5 >> 0x20);
          uVar14 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar14 == 0) {
              if ((uVar5 & 0xff000000000000) == 0) goto LAB_10460f56c;
            }
            else {
              lVar16 = (long)(int)lVar18;
              lVar20 = lVar18 >> 0x20;
LAB_10460f6a4:
              if (lVar16 == lVar20) goto LAB_10460f56c;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1f0,lVar18);
          }
          else if (uVar14 == 2) {
            lVar16 = *(long *)(lVar18 + 0x10);
            lVar20 = *(long *)(lVar18 + 0x18);
            goto LAB_10460f6a4;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_10460f56c:
        func_0x00010461b4d8(&lStack_108,0x113087010,&UNK_10dd19c50);
        uStack_158 = uStack_1c8;
        uStack_160 = uStack_1d0;
        uStack_148 = uStack_1b8;
        uStack_150 = uStack_1c0;
        uStack_140 = uStack_1b0;
        uStack_178 = uStack_1e8;
        uStack_180 = uStack_1f0;
        uStack_168 = uStack_1d8;
        uStack_170 = uStack_1e0;
      }
      uVar1 = (uint)(uStack_120 >> 0x20);
      uVar14 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar14 == 0) {
          if ((uStack_120 & 0xff000000000000) == 0) goto LAB_10460f5e4;
        }
        else {
          lVar16 = (long)(int)lStack_128;
          lVar18 = lStack_128 >> 0x20;
LAB_10460f5d4:
          if (lVar16 == lVar18) goto LAB_10460f5e4;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_180);
      }
      else if (uVar14 == 2) {
        lVar16 = *(long *)(lStack_128 + 0x10);
        lVar18 = *(long *)(lStack_128 + 0x18);
        goto LAB_10460f5d4;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
LAB_10460f5e4:
    func_0x000104604368(&lStack_130);
    if (lVar15 == 0) {
      unaff_x20[5] = uStack_158;
      unaff_x20[4] = uStack_160;
      unaff_x20[7] = uStack_148;
      unaff_x20[6] = uStack_150;
      unaff_x20[8] = uStack_140;
      unaff_x20[1] = uStack_178;
      *unaff_x20 = uStack_180;
      unaff_x20[3] = uStack_168;
      unaff_x20[2] = uStack_170;
      return;
    }
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_80 = uStack_140;
    uStack_b8 = uStack_178;
    uStack_c0 = uStack_180;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    plVar21 = plVar21 + 0xe;
  } while( true );
}



/* Entry: 10460f6fc; end: 10460fd67;  */

void FUN_10460f6fc(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  char cVar8;
  ulong uVar9;
  ushort uVar10;
  uint6 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar19;
  undefined8 uVar20;
  undefined1 auStack_2c8 [72];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
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
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  ushort uStack_d0;
  uint6 uStack_ce;
  byte bStack_c8;
  byte bStack_c7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  plVar19 = (long *)(param_1 + 0x20);
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar13 = lVar13 + -1;
    lStack_e8 = plVar19[0xd];
    uStack_f0 = plVar19[0xc];
    uStack_e0 = plVar19[0xe];
    lStack_108 = plVar19[9];
    lStack_110 = plVar19[8];
    lStack_f8 = plVar19[0xb];
    uStack_100 = plVar19[10];
    uStack_d8 = (undefined2)plVar19[0xf];
    uVar20 = *(undefined8 *)((long)plVar19 + 0x82);
    uStack_ce = (uint6)uVar20;
    bStack_c8 = (byte)((ulong)uVar20 >> 0x30);
    bStack_c7 = (byte)((ulong)uVar20 >> 0x38);
    uStack_d6 = (undefined6)*(undefined8 *)((long)plVar19 + 0x7a);
    uStack_d0 = (ushort)((ulong)*(undefined8 *)((long)plVar19 + 0x7a) >> 0x30);
    lStack_128 = plVar19[5];
    lStack_130 = plVar19[4];
    lStack_118 = plVar19[7];
    lStack_120 = plVar19[6];
    uStack_148 = plVar19[1];
    lStack_150 = *plVar19;
    lVar16 = plVar19[3];
    lVar14 = plVar19[2];
    uStack_178 = uStack_98;
    uStack_180 = uStack_a0;
    uStack_168 = uStack_88;
    uStack_170 = uStack_90;
    uStack_160 = uStack_80;
    uStack_198 = uStack_b8;
    uStack_1a0 = uStack_c0;
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    lStack_140 = lVar14;
    lStack_138 = lVar16;
    if (lVar16 == 0) {
      FUN_104604054(&lStack_150,&uStack_230);
      lVar14 = lStack_130;
      lVar16 = lStack_128;
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      FUN_104604054(&lStack_150,&uStack_230);
      __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar14,lVar16);
      lVar14 = lStack_130;
      lVar16 = lStack_128;
    }
    lStack_130 = lVar14;
    lStack_128 = lVar16;
    if (lVar16 != 0) {
      __ss6HasherV8_combineyySuF(2);
      __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar14,lVar16);
    }
    lVar16 = lStack_118;
    lVar14 = lStack_120;
    if (lStack_118 != 0) {
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&uStack_1a0,lVar14,lVar16);
    }
    uVar11 = uStack_ce;
    uVar10 = uStack_d0;
    uVar6 = uStack_e0;
    lVar4 = lStack_e8;
    lVar18 = lStack_f8;
    uVar5 = uStack_100;
    lVar16 = lStack_108;
    lVar14 = lStack_110;
    if (lStack_110 != 0) {
      bVar7 = (byte)uStack_f0;
      cVar8 = uStack_f0._1_1_;
      lVar2 = CONCAT62(uStack_d6,uStack_d8);
      uVar20 = CONCAT62(uStack_ce,uStack_d0);
      __ss6HasherV8_combineyySuF(4);
      uStack_208 = uStack_178;
      uStack_210 = uStack_180;
      uStack_1f8 = uStack_168;
      uStack_200 = uStack_170;
      uStack_1f0 = uStack_160;
      uStack_228 = uStack_198;
      uStack_230 = uStack_1a0;
      uStack_218 = uStack_188;
      uStack_220 = uStack_190;
      if (bVar7 == 2) {
        if (cVar8 != '\x03') goto LAB_10460fac4;
LAB_10460f894:
        if (lVar2 == 0) goto LAB_10460fae0;
LAB_10460f898:
        __ss6HasherV8_combineyySuF(0x23);
        uStack_258 = uStack_208;
        uStack_260 = uStack_210;
        uStack_248 = uStack_1f8;
        uStack_250 = uStack_200;
        uStack_240 = uStack_1f0;
        uStack_278 = uStack_228;
        uStack_280 = uStack_230;
        uStack_268 = uStack_218;
        uStack_270 = uStack_220;
        if ((uVar10 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar10 & 0xff);
        }
        if ((uVar10 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar10 >> 8);
        }
        if (((ulong)uVar11 & 0xff) != 3) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF((ulong)uVar11 & 0xff);
        }
        if (((ulong)uVar11 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF
                    (*(undefined8 *)(&UNK_10dd20258 + (((ulong)uVar11 & 0xff00) >> 8) * 8));
        }
        if (((ulong)uVar11 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF((ulong)(uVar11 >> 0x10) & 0xff);
        }
        if (((ulong)uVar11 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF((ulong)(uVar11 >> 0x18) & 0xff);
        }
        if (((ulong)uVar11 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF((ulong)(uVar11 >> 0x20) & 0xff);
        }
        if ((ulong)(uVar11 >> 0x28) != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF((ulong)(uVar11 >> 0x28));
        }
        func_0x00010461b518(&lStack_110,auStack_2c8,0x113087008,&UNK_10dd18920);
        func_0x0001045f8978(lVar4,uVar6,lVar2,uVar20);
        FUN_1045ae514(&uStack_280,1000,0x2711,lVar2);
        if (unaff_x21 == 0) {
          uVar1 = (uint)(uVar6 >> 0x20);
          uVar12 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar12 == 0) {
              if ((uVar6 & 0xff000000000000) == 0) goto LAB_10460fa58;
            }
            else {
              lVar15 = (long)(int)lVar4;
              lVar17 = lVar4 >> 0x20;
LAB_10460fcdc:
              if (lVar15 == lVar17) goto LAB_10460fa58;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_280,lVar4,uVar6);
          }
          else if (uVar12 == 2) {
            lVar15 = *(long *)(lVar4 + 0x10);
            lVar17 = *(long *)(lVar4 + 0x18);
            goto LAB_10460fcdc;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_10460fa58:
        func_0x00010458a4f4(lVar4,uVar6,lVar2,uVar20);
        uStack_208 = uStack_258;
        uStack_210 = uStack_260;
        uStack_1f8 = uStack_248;
        uStack_200 = uStack_250;
        uStack_1f0 = uStack_240;
        uStack_228 = uStack_278;
        uStack_230 = uStack_280;
        uStack_218 = uStack_268;
        uStack_220 = uStack_270;
      }
      else {
        __ss6HasherV8_combineyySuF(0x21);
        __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
        if (cVar8 == '\x03') goto LAB_10460f894;
LAB_10460fac4:
        __ss6HasherV8_combineyySuF(0x22);
        __ss6HasherV8_combineyySuF(cVar8);
        if (lVar2 != 0) goto LAB_10460f898;
LAB_10460fae0:
        uVar9 = uStack_e0;
        lVar15 = lStack_e8;
        lVar2 = lStack_f8;
        uVar6 = uStack_100;
        lVar4 = lStack_108;
        uVar20 = CONCAT62(uStack_d6,uStack_d8);
        uVar3 = CONCAT62(uStack_ce,uStack_d0);
        _swift_bridgeObjectRetain(lStack_110);
        func_0x00010006c00c(lVar4,uVar6);
        _swift_bridgeObjectRetain(lVar2);
        func_0x0001045f8978(lVar15,uVar9,uVar20,uVar3);
      }
      if (((*(long *)(lVar14 + 0x10) == 0) || (FUN_10460e87c(lVar14,999), unaff_x21 == 0)) &&
         (FUN_1045ae514(&uStack_230,1000,0x20000000,lVar18), unaff_x21 == 0)) {
        uVar1 = (uint)(uVar5 >> 0x20);
        uVar12 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar12 == 0) {
            if ((uVar5 & 0xff000000000000) == 0) goto LAB_10460fb7c;
          }
          else {
            lVar14 = (long)(int)lVar16;
            lVar18 = lVar16 >> 0x20;
LAB_10460fd10:
            if (lVar14 == lVar18) goto LAB_10460fb7c;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_230,lVar16);
        }
        else if (uVar12 == 2) {
          lVar14 = *(long *)(lVar16 + 0x10);
          lVar18 = *(long *)(lVar16 + 0x18);
          goto LAB_10460fd10;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_10460fb7c:
      func_0x00010461b4d8(&lStack_110,0x113087008,&UNK_10dd18920);
      uStack_178 = uStack_208;
      uStack_180 = uStack_210;
      uStack_168 = uStack_1f8;
      uStack_170 = uStack_200;
      uStack_160 = uStack_1f0;
      uStack_198 = uStack_228;
      uStack_1a0 = uStack_230;
      uStack_188 = uStack_218;
      uStack_190 = uStack_220;
    }
    bVar7 = bStack_c8;
    if (bStack_c8 != 2) {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
    }
    bVar7 = bStack_c7;
    if (bStack_c7 != 2) {
      __ss6HasherV8_combineyySuF(6);
      __ss6HasherV8_combineyys5UInt8VF(bVar7 & 1);
    }
    uVar1 = (uint)(uStack_148 >> 0x20);
    uVar12 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uStack_148 & 0xff000000000000) == 0) goto LAB_10460fc3c;
      }
      else {
        lVar14 = (long)(int)lStack_150;
        lVar16 = lStack_150 >> 0x20;
LAB_10460fc2c:
        if (lVar14 == lVar16) goto LAB_10460fc3c;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1a0);
    }
    else if (uVar12 == 2) {
      lVar14 = *(long *)(lStack_150 + 0x10);
      lVar16 = *(long *)(lStack_150 + 0x18);
      goto LAB_10460fc2c;
    }
LAB_10460fc3c:
    func_0x000104604088(&lStack_150);
    if (lVar13 == 0) {
      unaff_x20[5] = uStack_178;
      unaff_x20[4] = uStack_180;
      unaff_x20[7] = uStack_168;
      unaff_x20[6] = uStack_170;
      unaff_x20[8] = uStack_160;
      unaff_x20[1] = uStack_198;
      *unaff_x20 = uStack_1a0;
      unaff_x20[3] = uStack_188;
      unaff_x20[2] = uStack_190;
      return;
    }
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_88 = uStack_168;
    uStack_90 = uStack_170;
    uStack_80 = uStack_160;
    uStack_b8 = uStack_198;
    uStack_c0 = uStack_1a0;
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    plVar19 = plVar19 + 0x12;
  } while( true );
}



/* Entry: 10460fd68; end: 10460fd83;  */

void FUN_10460fd68(undefined8 param_1,undefined8 param_2)

{
  FUN_1046105ac(param_1,param_2,FUN_1045dd890);
  return;
}



/* Entry: 10460fd84; end: 10461058f;  */

void FUN_10460fd84(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lStack_320;
  long lStack_318;
  ulong uStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  long lStack_2a0;
  long lStack_298;
  ulong uStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  ulong uStack_270;
  long lStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined8 uStack_22f;
  long lStack_220;
  long lStack_218;
  ulong uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  undefined1 auStack_1d8 [24];
  long lStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  byte bStack_148;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  lStack_98 = unaff_x20[5];
  lStack_a0 = unaff_x20[4];
  lStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  plVar19 = (long *)(param_1 + 0x30);
  lStack_b8 = unaff_x20[1];
  lStack_c0 = *unaff_x20;
  lStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    lVar9 = lVar9 + -1;
    lVar1 = plVar19[-2];
    uVar2 = plVar19[-1];
    lVar18 = *plVar19;
    lStack_e8 = lStack_98;
    lStack_f0 = lStack_a0;
    lStack_d8 = lStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    lStack_108 = lStack_b8;
    lStack_110 = lStack_c0;
    lStack_f8 = lStack_a8;
    uStack_100 = uStack_b0;
    _swift_beginAccess(lVar18 + 0x10,auStack_128,0,0);
    lVar16 = *(long *)(lVar18 + 0x18);
    if (lVar16 == 0) {
      func_0x00010006c00c(lVar1,uVar2);
      _swift_retain(lVar18);
    }
    else {
      uVar17 = *(undefined8 *)(lVar18 + 0x10);
      __ss6HasherV8_combineyySuF(1);
      func_0x00010006c00c(lVar1,uVar2);
      _swift_retain(lVar18);
      _swift_bridgeObjectRetain(lVar16);
      __sSS4hash4intoys6HasherVz_tF(&lStack_110,uVar17,lVar16);
      _swift_bridgeObjectRelease(lVar16);
    }
    _swift_beginAccess(lVar18 + 0x20,auStack_140,0,0);
    if (*(char *)(lVar18 + 0x24) != '\x01') {
      iVar7 = *(int *)(lVar18 + 0x20);
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar7);
    }
    _swift_beginAccess(lVar18 + 0x28,auStack_1d8,0,0);
    lVar16 = *(long *)(lVar18 + 0x30);
    lVar20 = *(long *)(lVar18 + 0x28);
    lVar26 = *(long *)(lVar18 + 0x40);
    uVar23 = *(ulong *)(lVar18 + 0x38);
    lVar11 = *(long *)(lVar18 + 0x50);
    lStack_1a0 = *(long *)(lVar18 + 0x48);
    lVar13 = *(long *)(lVar18 + 0x60);
    uVar24 = *(ulong *)(lVar18 + 0x58);
    uStack_178 = *(undefined8 *)(lVar18 + 0x70);
    uVar21 = *(ulong *)(lVar18 + 0x68);
    uVar27 = *(ulong *)(lVar18 + 0x80);
    lVar25 = *(long *)(lVar18 + 0x78);
    uVar22 = *(ulong *)(lVar18 + 0x88);
    uStack_158 = (undefined1)*(undefined8 *)(lVar18 + 0x90);
    uStack_14f = (undefined7)*(undefined8 *)(lVar18 + 0x99);
    bStack_148 = (byte)((ulong)*(undefined8 *)(lVar18 + 0x99) >> 0x38);
    bVar6 = bStack_148;
    uStack_157 = (undefined7)*(undefined8 *)(lVar18 + 0x91);
    uStack_150 = (undefined1)((ulong)*(undefined8 *)(lVar18 + 0x91) >> 0x38);
    bVar4 = (byte)lStack_1a0;
    bVar5 = (byte)uStack_178;
    uVar17 = CONCAT71(uStack_157,uStack_158);
    lVar14 = CONCAT71(uStack_14f,uStack_150);
    uVar10 = (ulong)bStack_148;
    iVar7 = (int)&lStack_1c0;
    lStack_1c0 = lVar20;
    lStack_1b8 = lVar16;
    uStack_1b0 = uVar23;
    lStack_1a8 = lVar26;
    lStack_198 = lVar11;
    uStack_190 = uVar24;
    lStack_188 = lVar13;
    uStack_180 = uVar21;
    lStack_170 = lVar25;
    uStack_168 = uVar27;
    uStack_160 = uVar22;
    FUN_1045f8e00();
    if (iVar7 != 1) {
      __ss6HasherV8_combineyySuF(3);
      lStack_1f8 = lStack_e8;
      lStack_200 = lStack_f0;
      lStack_1e8 = lStack_d8;
      uStack_1f0 = uStack_e0;
      uStack_1e0 = uStack_d0;
      lStack_218 = lStack_108;
      lStack_220 = lStack_110;
      lStack_208 = lStack_f8;
      uStack_210 = uStack_100;
      if (bVar4 != 2) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyys5UInt8VF(bVar4 & 1);
      }
      if (lVar13 == 0) {
        uStack_258 = uStack_178;
        uStack_260 = uStack_180;
        uStack_248 = uStack_168;
        lStack_250 = lStack_170;
        uStack_238 = uStack_158;
        uStack_240 = uStack_160;
        uStack_22f = CONCAT17(bStack_148,uStack_14f);
        uStack_237 = uStack_157;
        uStack_230 = uStack_150;
        lStack_298 = lStack_1b8;
        lStack_2a0 = lStack_1c0;
        lStack_288 = lStack_1a8;
        uStack_290 = uStack_1b0;
        lStack_278 = lStack_198;
        lStack_280 = lStack_1a0;
        lStack_268 = lStack_188;
        uStack_270 = uStack_190;
        FUN_1045f8e18(&lStack_2a0,&lStack_320);
      }
      else {
        __ss6HasherV8_combineyySuF(2);
        lStack_2f8 = lStack_1f8;
        lStack_300 = lStack_200;
        lStack_2e8 = lStack_1e8;
        uStack_2f0 = uStack_1f0;
        uStack_2e0 = uStack_1e0;
        lStack_318 = lStack_218;
        lStack_320 = lStack_220;
        lStack_308 = lStack_208;
        uStack_310 = uStack_210;
        if ((uVar21 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar21 & 0xff);
        }
        if ((uVar21 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar21 >> 8 & 0xff);
        }
        if ((uVar21 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x10 & 0xff);
        }
        if ((uVar21 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd20258 + (uVar21 >> 0x18 & 0xff) * 8));
        }
        if ((uVar21 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x20 & 0xff);
        }
        if ((uVar21 & 0xff0000000000) != 0x30000000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x28 & 0xff);
        }
        if ((uVar21 & 0xff000000000000) != 0x3000000000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x30 & 0xff);
        }
        if (uVar21 >> 0x38 != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF(uVar21 >> 0x38);
        }
        func_0x00010461b518(&lStack_1c0,&lStack_2a0,0x113087018,&UNK_10dd18930);
        func_0x0001045f8978(lVar11,uVar24,lVar13,uVar21);
        FUN_1045ae514(&lStack_320,1000,0x2711,lVar13);
        if (unaff_x21 == 0) {
          uVar3 = (uint)(uVar24 >> 0x20);
          uVar8 = uVar3 >> 0x1e;
          if (uVar3 >> 0x1e < 2) {
            if (uVar8 == 0) {
              if ((uVar24 & 0xff000000000000) == 0) goto LAB_104610174;
            }
            else {
              lVar12 = (long)(int)lVar11;
              lVar15 = lVar11 >> 0x20;
LAB_104610518:
              if (lVar12 == lVar15) goto LAB_104610174;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&lStack_320,lVar11,uVar24);
          }
          else if (uVar8 == 2) {
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar15 = *(long *)(lVar11 + 0x18);
            goto LAB_104610518;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_104610174:
        func_0x00010458a4f4(lVar11,uVar24,lVar13,uVar21);
        lStack_1f8 = lStack_2f8;
        lStack_200 = lStack_300;
        lStack_1e8 = lStack_2e8;
        uStack_1f0 = uStack_2f0;
        uStack_1e0 = uStack_2e0;
        lStack_218 = lStack_318;
        lStack_220 = lStack_320;
        lStack_208 = lStack_308;
        uStack_210 = uStack_310;
      }
      if (bVar5 != 2) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyys5UInt8VF(bVar5 & 1);
      }
      if (lVar14 != 1) {
        __ss6HasherV8_combineyySuF(4);
        lStack_278 = lStack_1f8;
        lStack_280 = lStack_200;
        lStack_268 = lStack_1e8;
        uStack_270 = uStack_1f0;
        uStack_260 = uStack_1e0;
        lStack_298 = lStack_218;
        lStack_2a0 = lStack_220;
        lStack_288 = lStack_208;
        uStack_290 = uStack_210;
        if ((uVar22 & 0xff) != 0xc) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd201f8 + (uVar22 & 0xff) * 8));
        }
        if ((uVar22 & 0xff00) != 0xc00) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd201f8 + (uVar22 >> 8 & 0xff) * 8));
        }
        if (lVar14 == 0) {
          func_0x00010006c00c(lVar25,uVar27);
        }
        else {
          __ss6HasherV8_combineyySuF(3);
          func_0x00010006c00c(lVar25,uVar27);
          _swift_bridgeObjectRetain(lVar14);
          __sSS4hash4intoys6HasherVz_tF(&lStack_2a0,uVar17,lVar14);
        }
        if (bVar6 != 0xc) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd201f8 + uVar10 * 8));
        }
        uVar3 = (uint)(uVar27 >> 0x20);
        uVar8 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar8 == 0) {
            if ((uVar27 & 0xff000000000000) == 0) goto LAB_104610398;
          }
          else {
            lVar11 = (long)(int)lVar25;
            lVar13 = lVar25 >> 0x20;
LAB_104610380:
            if (lVar11 == lVar13) goto LAB_104610398;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&lStack_2a0,lVar25,uVar27);
        }
        else if (uVar8 == 2) {
          lVar11 = *(long *)(lVar25 + 0x10);
          lVar13 = *(long *)(lVar25 + 0x18);
          goto LAB_104610380;
        }
LAB_104610398:
        FUN_10458a570(lVar25,uVar27,uVar22,uVar17,lVar14,uVar10);
        lStack_1f8 = lStack_278;
        lStack_200 = lStack_280;
        lStack_1e8 = lStack_268;
        uStack_1f0 = uStack_270;
        uStack_1e0 = uStack_260;
        lStack_218 = lStack_298;
        lStack_220 = lStack_2a0;
        lStack_208 = lStack_288;
        uStack_210 = uStack_290;
      }
      if (((*(long *)(lVar20 + 0x10) == 0) || (FUN_10460e87c(lVar20,999), unaff_x21 == 0)) &&
         (FUN_1045ae514(&lStack_220,1000,0x20000000,lVar26), unaff_x21 == 0)) {
        uVar3 = (uint)(uVar23 >> 0x20);
        uVar8 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar8 == 0) {
            if ((uVar23 & 0xff000000000000) == 0) goto LAB_10461040c;
          }
          else {
            lVar14 = (long)(int)lVar16;
            lVar16 = lVar16 >> 0x20;
LAB_10461053c:
            if (lVar14 == lVar16) goto LAB_10461040c;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&lStack_220);
        }
        else if (uVar8 == 2) {
          lVar14 = *(long *)(lVar16 + 0x10);
          lVar16 = *(long *)(lVar16 + 0x18);
          goto LAB_10461053c;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_10461040c:
      func_0x00010461b4d8(&lStack_1c0,0x113087018,&UNK_10dd18930);
      lStack_e8 = lStack_1f8;
      lStack_f0 = lStack_200;
      lStack_d8 = lStack_1e8;
      uStack_e0 = uStack_1f0;
      uStack_d0 = uStack_1e0;
      lStack_108 = lStack_218;
      lStack_110 = lStack_220;
      lStack_f8 = lStack_208;
      uStack_100 = uStack_210;
    }
    uVar3 = (uint)(uVar2 >> 0x20);
    uVar8 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      if (uVar8 == 0) {
        if ((uVar2 & 0xff000000000000) == 0) goto LAB_104610488;
      }
      else {
        lVar16 = (long)(int)lVar1;
        lVar14 = lVar1 >> 0x20;
LAB_104610470:
        if (lVar16 == lVar14) goto LAB_104610488;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&lStack_110,lVar1,uVar2);
    }
    else if (uVar8 == 2) {
      lVar16 = *(long *)(lVar1 + 0x10);
      lVar14 = *(long *)(lVar1 + 0x18);
      goto LAB_104610470;
    }
LAB_104610488:
    func_0x00010006c090(lVar1,uVar2);
    _swift_release(lVar18);
    if (lVar9 == 0) {
      unaff_x20[5] = lStack_e8;
      unaff_x20[4] = lStack_f0;
      unaff_x20[7] = lStack_d8;
      unaff_x20[6] = uStack_e0;
      unaff_x20[8] = uStack_d0;
      unaff_x20[1] = lStack_108;
      *unaff_x20 = lStack_110;
      unaff_x20[3] = lStack_f8;
      unaff_x20[2] = uStack_100;
      return;
    }
    plVar19 = plVar19 + 3;
    lStack_98 = lStack_e8;
    lStack_a0 = lStack_f0;
    lStack_88 = lStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    lStack_b8 = lStack_108;
    lStack_c0 = lStack_110;
    lStack_a8 = lStack_f8;
    uStack_b0 = uStack_100;
  } while( true );
}



/* Entry: 104610590; end: 1046105ab;  */

void FUN_104610590(undefined8 param_1,undefined8 param_2)

{
  FUN_1046105ac(param_1,param_2,FUN_1045d7890);
  return;
}



/* Entry: 1046105ac; end: 10461071b;  */

void FUN_1046105ac(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined8 *puVar9;
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
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_60 = unaff_x20[8];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  puVar9 = (undefined8 *)(param_1 + 0x30);
  do {
    lVar5 = lVar5 + -1;
    lVar1 = puVar9[-2];
    uVar2 = puVar9[-1];
    uVar8 = *puVar9;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_b8 = uStack_68;
    uStack_c0 = uStack_70;
    uStack_b0 = uStack_60;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    func_0x00010006c00c(lVar1,uVar2);
    _swift_retain(uVar8);
    (*param_3)();
    if (unaff_x21 == 0) {
      uVar3 = (uint)(uVar2 >> 0x20);
      uVar4 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar4 == 0) {
          if ((uVar2 & 0xff000000000000) == 0) goto LAB_104610658;
        }
        else {
          lVar6 = (long)(int)lVar1;
          lVar7 = lVar1 >> 0x20;
LAB_1046106c8:
          if (lVar6 == lVar7) goto LAB_104610658;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_f0,lVar1,uVar2);
      }
      else if (uVar4 == 2) {
        lVar6 = *(long *)(lVar1 + 0x10);
        lVar7 = *(long *)(lVar1 + 0x18);
        goto LAB_1046106c8;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
      unaff_x21 = 0;
    }
LAB_104610658:
    func_0x00010006c090(lVar1,uVar2);
    _swift_release(uVar8);
    if (lVar5 == 0) {
      unaff_x20[5] = uStack_c8;
      unaff_x20[4] = uStack_d0;
      unaff_x20[7] = uStack_b8;
      unaff_x20[6] = uStack_c0;
      unaff_x20[8] = uStack_b0;
      unaff_x20[1] = uStack_e8;
      *unaff_x20 = uStack_f0;
      unaff_x20[3] = uStack_d8;
      unaff_x20[2] = uStack_e0;
      return;
    }
    puVar9 = puVar9 + 3;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
    uStack_70 = uStack_c0;
    uStack_60 = uStack_b0;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
  } while( true );
}



/* Entry: 10461071c; end: 1046108bf;  */

void FUN_10461071c(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
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
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  pcVar9 = (char *)(param_1 + 0x3c);
  do {
    lVar6 = lVar6 + -1;
    lVar7 = *(long *)(pcVar9 + -0x1c);
    uVar8 = *(ulong *)(pcVar9 + -0x14);
    iVar2 = *(int *)(pcVar9 + -0xc);
    iVar3 = *(int *)(pcVar9 + -4);
    cVar1 = *pcVar9;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    if (pcVar9[-8] != '\x01') {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar2);
    }
    if (cVar1 != '\x01') {
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF((long)iVar3);
    }
    uVar4 = (uint)(uVar8 >> 0x20);
    uVar5 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar5 == 0) {
        if ((uVar8 & 0xff000000000000) != 0) {
LAB_104610830:
          func_0x00010006c00c(lVar7,uVar8);
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,lVar7,uVar8);
          func_0x00010006c090(lVar7,uVar8);
        }
      }
      else if ((long)(int)lVar7 != lVar7 >> 0x20) goto LAB_104610830;
    }
    else if ((uVar5 == 2) && (*(long *)(lVar7 + 0x10) != *(long *)(lVar7 + 0x18)))
    goto LAB_104610830;
    if (lVar6 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    pcVar9 = pcVar9 + 0x20;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 1046108c0; end: 104610dff;  */

void FUN_1046108c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar18;
  long lVar19;
  undefined1 auStack_250 [64];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  plVar18 = (long *)(param_1 + 0x20);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    lVar13 = lVar13 + -1;
    lStack_e8 = plVar18[5];
    lStack_f0 = plVar18[4];
    lStack_d8 = plVar18[7];
    uStack_e0 = plVar18[6];
    uStack_c8 = plVar18[9];
    lStack_d0 = plVar18[8];
    uStack_b8 = plVar18[0xb];
    lStack_c0 = plVar18[10];
    uStack_108 = plVar18[1];
    lStack_110 = *plVar18;
    lVar19 = plVar18[3];
    lVar15 = plVar18[2];
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_128 = uStack_78;
    uStack_130 = uStack_80;
    uStack_120 = uStack_70;
    uStack_158 = uStack_a8;
    uStack_160 = uStack_b0;
    uStack_148 = uStack_98;
    uStack_150 = uStack_a0;
    lStack_100 = lVar15;
    lStack_f8 = lVar19;
    if (lVar19 == 0) {
      FUN_1046041b4(&lStack_110,&uStack_1c0);
      lVar15 = lStack_f0;
      lVar19 = lStack_e8;
      uVar2 = uStack_e0;
      lVar17 = lStack_d8;
      lVar3 = lStack_d0;
      uVar4 = uStack_c8;
      lVar5 = lStack_c0;
      uVar6 = uStack_b8;
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      FUN_1046041b4(&lStack_110,&uStack_1c0);
      __sSS4hash4intoys6HasherVz_tF(&uStack_160,lVar15,lVar19);
      lVar15 = lStack_f0;
      lVar19 = lStack_e8;
      uVar2 = uStack_e0;
      lVar17 = lStack_d8;
      lVar3 = lStack_d0;
      uVar4 = uStack_c8;
      lVar5 = lStack_c0;
      uVar6 = uStack_b8;
    }
    lStack_f0 = lVar15;
    lStack_e8 = lVar19;
    uStack_e0 = uVar2;
    lStack_d8 = lVar17;
    lStack_d0 = lVar3;
    uStack_c8 = uVar4;
    lStack_c0 = lVar5;
    uStack_b8 = uVar6;
    if (lVar15 != 0) {
      __ss6HasherV8_combineyySuF(2);
      uVar11 = uStack_b8;
      lVar10 = lStack_c0;
      uVar9 = uStack_c8;
      lVar8 = lStack_d0;
      lVar16 = lStack_d8;
      uVar7 = uStack_e0;
      lVar14 = lStack_e8;
      uStack_198 = uStack_138;
      uStack_1a0 = uStack_140;
      uStack_188 = uStack_128;
      uStack_190 = uStack_130;
      uStack_180 = uStack_120;
      uStack_1b8 = uStack_158;
      uStack_1c0 = uStack_160;
      uStack_1a8 = uStack_148;
      uStack_1b0 = uStack_150;
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lStack_f0);
        func_0x00010006c00c(lVar14,uVar7);
        _swift_bridgeObjectRetain(lVar16);
        func_0x0001045f8978(lVar8,uVar9,lVar10,uVar11);
      }
      else {
        __ss6HasherV8_combineyySuF(1);
        uStack_1e8 = uStack_198;
        uStack_1f0 = uStack_1a0;
        uStack_1d8 = uStack_188;
        uStack_1e0 = uStack_190;
        uStack_1d0 = uStack_180;
        uStack_208 = uStack_1b8;
        uStack_210 = uStack_1c0;
        uStack_1f8 = uStack_1a8;
        uStack_200 = uStack_1b0;
        if ((uVar6 & 0xff) != 4) {
          __ss6HasherV8_combineyySuF(1);
          __ss6HasherV8_combineyySuF(uVar6 & 0xff);
        }
        if ((uVar6 & 0xff00) != 0x300) {
          __ss6HasherV8_combineyySuF(2);
          __ss6HasherV8_combineyySuF(uVar6 >> 8 & 0xff);
        }
        if ((uVar6 & 0xff0000) != 0x30000) {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x10 & 0xff);
        }
        if ((uVar6 & 0xff000000) != 0x3000000) {
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd20258 + (uVar6 >> 0x18 & 0xff) * 8));
        }
        if ((uVar6 & 0xff00000000) != 0x300000000) {
          __ss6HasherV8_combineyySuF(5);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x20 & 0xff);
        }
        if ((uVar6 & 0xff0000000000) != 0x30000000000) {
          __ss6HasherV8_combineyySuF(6);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x28 & 0xff);
        }
        if ((uVar6 & 0xff000000000000) != 0x3000000000000) {
          __ss6HasherV8_combineyySuF(7);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x30 & 0xff);
        }
        if (uVar6 >> 0x38 != 5) {
          __ss6HasherV8_combineyySuF(8);
          __ss6HasherV8_combineyySuF(uVar6 >> 0x38);
        }
        func_0x00010461b518(&lStack_f0,auStack_250,0x113087028,&UNK_10dd18940);
        func_0x0001045f8978(lVar3,uVar4,lVar5,uVar6);
        FUN_1045ae514(&uStack_210,1000,0x2711,lVar5);
        if (unaff_x21 == 0) {
          uVar1 = (uint)(uVar4 >> 0x20);
          uVar12 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar12 == 0) {
              if ((uVar4 & 0xff000000000000) == 0) goto LAB_104610ba4;
            }
            else {
              lVar14 = (long)(int)lVar3;
              lVar16 = lVar3 >> 0x20;
LAB_104610d80:
              if (lVar14 == lVar16) goto LAB_104610ba4;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_210,lVar3,uVar4);
          }
          else if (uVar12 == 2) {
            lVar14 = *(long *)(lVar3 + 0x10);
            lVar16 = *(long *)(lVar3 + 0x18);
            goto LAB_104610d80;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
LAB_104610ba4:
        func_0x00010458a4f4(lVar3,uVar4,lVar5,uVar6);
        uStack_198 = uStack_1e8;
        uStack_1a0 = uStack_1f0;
        uStack_188 = uStack_1d8;
        uStack_190 = uStack_1e0;
        uStack_180 = uStack_1d0;
        uStack_1b8 = uStack_208;
        uStack_1c0 = uStack_210;
        uStack_1a8 = uStack_1f8;
        uStack_1b0 = uStack_200;
      }
      if (((*(long *)(lVar15 + 0x10) == 0) || (FUN_10460e87c(lVar15,999), unaff_x21 == 0)) &&
         (FUN_1045ae514(&uStack_1c0,1000,0x20000000,lVar17), unaff_x21 == 0)) {
        uVar1 = (uint)(uVar2 >> 0x20);
        uVar12 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar12 == 0) {
            if ((uVar2 & 0xff000000000000) == 0) goto LAB_104610c64;
          }
          else {
            lVar15 = (long)(int)lVar19;
            lVar17 = lVar19 >> 0x20;
LAB_104610da8:
            if (lVar15 == lVar17) goto LAB_104610c64;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1c0,lVar19);
        }
        else if (uVar12 == 2) {
          lVar15 = *(long *)(lVar19 + 0x10);
          lVar17 = *(long *)(lVar19 + 0x18);
          goto LAB_104610da8;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_104610c64:
      func_0x00010461b4d8(&lStack_f0,0x113087028,&UNK_10dd18940);
      uStack_138 = uStack_198;
      uStack_140 = uStack_1a0;
      uStack_128 = uStack_188;
      uStack_130 = uStack_190;
      uStack_120 = uStack_180;
      uStack_158 = uStack_1b8;
      uStack_160 = uStack_1c0;
      uStack_148 = uStack_1a8;
      uStack_150 = uStack_1b0;
    }
    uVar1 = (uint)(uStack_108 >> 0x20);
    uVar12 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uStack_108 & 0xff000000000000) != 0) {
LAB_104610ce0:
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_160);
        }
      }
      else if ((long)(int)lStack_110 != lStack_110 >> 0x20) goto LAB_104610ce0;
    }
    else if ((uVar12 == 2) && (*(long *)(lStack_110 + 0x10) != *(long *)(lStack_110 + 0x18)))
    goto LAB_104610ce0;
    func_0x0001046041e8(&lStack_110);
    if (lVar13 == 0) {
      unaff_x20[5] = uStack_138;
      unaff_x20[4] = uStack_140;
      unaff_x20[7] = uStack_128;
      unaff_x20[6] = uStack_130;
      unaff_x20[8] = uStack_120;
      unaff_x20[1] = uStack_158;
      *unaff_x20 = uStack_160;
      unaff_x20[3] = uStack_148;
      unaff_x20[2] = uStack_150;
      return;
    }
    uStack_88 = uStack_138;
    uStack_90 = uStack_140;
    uStack_78 = uStack_128;
    uStack_80 = uStack_130;
    uStack_70 = uStack_120;
    uStack_a8 = uStack_158;
    uStack_b0 = uStack_160;
    uStack_98 = uStack_148;
    uStack_a0 = uStack_150;
    plVar18 = plVar18 + 0xc;
  } while( true );
}



/* Entry: 104610e00; end: 1046113af;  */

void FUN_104610e00(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  uint7 uVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar18;
  undefined1 auStack_270 [32];
  long lStack_250;
  ulong uStack_248;
  long lStack_240;
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
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  char cStack_c0;
  uint7 uStack_bf;
  char cStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  plVar18 = (long *)(param_1 + 0x20);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    lVar14 = lVar14 + -1;
    lStack_d8 = plVar18[9];
    lStack_e0 = plVar18[8];
    uStack_d0 = plVar18[10];
    uStack_c8 = (undefined1)plVar18[0xb];
    uStack_bf = (uint7)*(undefined8 *)((long)plVar18 + 0x61);
    cStack_b8 = (char)((ulong)*(undefined8 *)((long)plVar18 + 0x61) >> 0x38);
    uStack_c7 = (undefined7)*(undefined8 *)((long)plVar18 + 0x59);
    cStack_c0 = (char)((ulong)*(undefined8 *)((long)plVar18 + 0x59) >> 0x38);
    uStack_118 = plVar18[1];
    lStack_120 = *plVar18;
    uStack_108 = plVar18[3];
    lVar17 = plVar18[2];
    lStack_f8 = plVar18[5];
    lStack_100 = plVar18[4];
    uStack_e8 = plVar18[7];
    lStack_f0 = plVar18[6];
    uStack_130 = uStack_70;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_110._4_1_ = (char)((ulong)lVar17 >> 0x20);
    bVar12 = uStack_110._4_1_ != '\x01';
    uStack_110 = lVar17;
    if (bVar12) {
      uStack_110._0_4_ = (int)lVar17;
      lVar17 = (long)(int)uStack_110;
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyys6UInt64VF(lVar17);
    }
    if (uStack_108._4_1_ != '\x01') {
      lVar17 = (long)(int)uStack_108;
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF(lVar17);
    }
    cVar11 = cStack_b8;
    uVar10 = uStack_bf;
    cVar9 = cStack_c0;
    uVar8 = uStack_d0;
    lVar7 = lStack_d8;
    lVar6 = lStack_e0;
    uVar5 = uStack_e8;
    lVar4 = lStack_f0;
    lVar15 = lStack_f8;
    lVar17 = lStack_100;
    if (lStack_100 == 0) {
      func_0x000104604274(&lStack_120,&uStack_1e0);
    }
    else {
      lVar2 = CONCAT71(uStack_c7,uStack_c8);
      uVar3 = CONCAT71(uStack_bf,cStack_c0);
      __ss6HasherV8_combineyySuF(3);
      uStack_208 = uStack_148;
      uStack_210 = uStack_150;
      uStack_1f8 = uStack_138;
      uStack_200 = uStack_140;
      uStack_1f0 = uStack_130;
      uStack_228 = uStack_168;
      uStack_230 = uStack_170;
      uStack_218 = uStack_158;
      uStack_220 = uStack_160;
      if (*(long *)(lVar15 + 0x10) == 0) {
        func_0x000104604274(&lStack_120,&uStack_1e0);
        func_0x00010461b518(&lStack_100,&uStack_1e0,0x113087060,&UNK_10dd201f0);
LAB_104610fd4:
        if (cVar11 != '\x02') {
          __ss6HasherV8_combineyySuF(3);
          __ss6HasherV8_combineyySuF(cVar11);
        }
        if (lVar2 != 0) {
          __ss6HasherV8_combineyySuF(0x32);
          uStack_1b8 = uStack_208;
          uStack_1c0 = uStack_210;
          uStack_1a8 = uStack_1f8;
          uStack_1b0 = uStack_200;
          uStack_1a0 = uStack_1f0;
          uStack_1d8 = uStack_228;
          uStack_1e0 = uStack_230;
          uStack_1c8 = uStack_218;
          uStack_1d0 = uStack_220;
          if (cVar9 != '\x04') {
            __ss6HasherV8_combineyySuF(1);
            __ss6HasherV8_combineyySuF(cVar9);
          }
          if (((ulong)uVar10 & 0xff) != 3) {
            __ss6HasherV8_combineyySuF(2);
            __ss6HasherV8_combineyySuF((ulong)uVar10 & 0xff);
          }
          if (((ulong)uVar10 & 0xff00) != 0x300) {
            __ss6HasherV8_combineyySuF(3);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 8) & 0xff);
          }
          if (((ulong)uVar10 & 0xff0000) != 0x30000) {
            __ss6HasherV8_combineyySuF(4);
            __ss6HasherV8_combineyySuF
                      (*(undefined8 *)(&UNK_10dd20258 + (((ulong)uVar10 & 0xff0000) >> 0x10) * 8));
          }
          if (((ulong)uVar10 & 0xff000000) != 0x3000000) {
            __ss6HasherV8_combineyySuF(5);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 0x18) & 0xff);
          }
          if (((ulong)uVar10 & 0xff00000000) != 0x300000000) {
            __ss6HasherV8_combineyySuF(6);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 0x20) & 0xff);
          }
          if (((ulong)uVar10 & 0xff0000000000) != 0x30000000000) {
            __ss6HasherV8_combineyySuF(7);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 0x28) & 0xff);
          }
          if ((ulong)(uVar10 >> 0x30) != 5) {
            __ss6HasherV8_combineyySuF(8);
            __ss6HasherV8_combineyySuF((ulong)(uVar10 >> 0x30));
          }
          lStack_250 = lVar7;
          uStack_248 = uVar8;
          lStack_240 = lVar2;
          uStack_238 = uVar3;
          func_0x0001045f89a4(&lStack_250,auStack_270);
          FUN_1045ae514(&uStack_1e0,1000,0x2711,lVar2);
          if (unaff_x21 == 0) {
            uVar1 = (uint)(uVar8 >> 0x20);
            uVar13 = uVar1 >> 0x1e;
            if (uVar1 >> 0x1e < 2) {
              if (uVar13 == 0) {
                if ((uVar8 & 0xff000000000000) == 0) goto LAB_10461119c;
              }
              else {
                lVar15 = (long)(int)lVar7;
                lVar16 = lVar7 >> 0x20;
LAB_104611330:
                if (lVar15 == lVar16) goto LAB_10461119c;
              }
              __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1e0,lVar7,uVar8);
            }
            else if (uVar13 == 2) {
              lVar15 = *(long *)(lVar7 + 0x10);
              lVar16 = *(long *)(lVar7 + 0x18);
              goto LAB_104611330;
            }
          }
          else {
            _swift_errorRelease(unaff_x21);
            unaff_x21 = 0;
          }
LAB_10461119c:
          func_0x00010458a4f4(lVar7,uVar8,lVar2,uVar3);
          uStack_208 = uStack_1b8;
          uStack_210 = uStack_1c0;
          uStack_1f8 = uStack_1a8;
          uStack_200 = uStack_1b0;
          uStack_1f0 = uStack_1a0;
          uStack_228 = uStack_1d8;
          uStack_230 = uStack_1e0;
          uStack_218 = uStack_1c8;
          uStack_220 = uStack_1d0;
        }
        if (((*(long *)(lVar17 + 0x10) == 0) || (FUN_10460e87c(lVar17,999), unaff_x21 == 0)) &&
           (FUN_1045ae514(&uStack_230,1000,0x20000000,lVar6), unaff_x21 == 0)) {
          uVar1 = (uint)(uVar5 >> 0x20);
          uVar13 = uVar1 >> 0x1e;
          if (uVar1 >> 0x1e < 2) {
            if (uVar13 == 0) {
              if ((uVar5 & 0xff000000000000) == 0) goto LAB_10461121c;
            }
            else {
              lVar17 = (long)(int)lVar4;
              lVar15 = lVar4 >> 0x20;
LAB_104611358:
              if (lVar17 == lVar15) goto LAB_10461121c;
            }
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_230,lVar4);
          }
          else if (uVar13 == 2) {
            lVar17 = *(long *)(lVar4 + 0x10);
            lVar15 = *(long *)(lVar4 + 0x18);
            goto LAB_104611358;
          }
        }
        else {
          _swift_errorRelease(unaff_x21);
          unaff_x21 = 0;
        }
      }
      else {
        func_0x000104604274(&lStack_120,&uStack_1e0);
        func_0x00010461b518(&lStack_100,&uStack_1e0,0x113087060,&UNK_10dd201f0);
        FUN_1046113b0(lVar15,2);
        if (unaff_x21 == 0) goto LAB_104610fd4;
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_10461121c:
      func_0x00010461b4d8(&lStack_100,0x113087060,&UNK_10dd201f0);
      uStack_148 = uStack_208;
      uStack_150 = uStack_210;
      uStack_138 = uStack_1f8;
      uStack_140 = uStack_200;
      uStack_130 = uStack_1f0;
      uStack_168 = uStack_228;
      uStack_170 = uStack_230;
      uStack_158 = uStack_218;
      uStack_160 = uStack_220;
    }
    uVar1 = (uint)(uStack_118 >> 0x20);
    uVar13 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar13 == 0) {
        if ((uStack_118 & 0xff000000000000) == 0) goto LAB_104611298;
      }
      else {
        lVar17 = (long)(int)lStack_120;
        lVar15 = lStack_120 >> 0x20;
LAB_104611288:
        if (lVar17 == lVar15) goto LAB_104611298;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_170);
    }
    else if (uVar13 == 2) {
      lVar17 = *(long *)(lStack_120 + 0x10);
      lVar15 = *(long *)(lStack_120 + 0x18);
      goto LAB_104611288;
    }
LAB_104611298:
    func_0x0001046042a8(&lStack_120);
    if (lVar14 == 0) {
      unaff_x20[5] = uStack_148;
      unaff_x20[4] = uStack_150;
      unaff_x20[7] = uStack_138;
      unaff_x20[6] = uStack_140;
      unaff_x20[8] = uStack_130;
      unaff_x20[1] = uStack_168;
      *unaff_x20 = uStack_170;
      unaff_x20[3] = uStack_158;
      unaff_x20[2] = uStack_160;
      return;
    }
    uStack_88 = uStack_148;
    uStack_90 = uStack_150;
    uStack_78 = uStack_138;
    uStack_80 = uStack_140;
    uStack_70 = uStack_130;
    uStack_a8 = uStack_168;
    uStack_b0 = uStack_170;
    uStack_98 = uStack_158;
    uStack_a0 = uStack_160;
    plVar18 = plVar18 + 0xe;
  } while( true );
}



/* Entry: 1046113b0; end: 1046115cb;  */

void FUN_1046113b0(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  byte bStack_a8;
  byte bStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  uStack_60 = unaff_x20[8];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  plVar8 = (long *)(param_1 + 0x20);
  do {
    lVar5 = lVar5 + -1;
    uStack_d8 = plVar8[1];
    lStack_e0 = *plVar8;
    lStack_c8 = plVar8[3];
    lVar7 = plVar8[2];
    lStack_c0 = plVar8[4];
    uStack_b8 = (undefined2)plVar8[5];
    uVar9 = *(undefined8 *)((long)plVar8 + 0x32);
    uStack_ae = (undefined6)uVar9;
    bStack_a8 = (byte)((ulong)uVar9 >> 0x30);
    bStack_a7 = (byte)((ulong)uVar9 >> 0x38);
    uStack_b6 = (undefined6)*(undefined8 *)((long)plVar8 + 0x2a);
    uStack_b0 = (undefined2)((ulong)*(undefined8 *)((long)plVar8 + 0x2a) >> 0x30);
    uStack_108 = uStack_78;
    uStack_110 = uStack_80;
    uStack_f8 = uStack_68;
    uStack_100 = uStack_70;
    uStack_f0 = uStack_60;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_d0._4_1_ = (char)((ulong)lVar7 >> 0x20);
    bVar3 = uStack_d0._4_1_ != '\x01';
    uStack_d0 = lVar7;
    if (bVar3) {
      uStack_d0._0_4_ = (int)lVar7;
      lVar7 = (long)(int)uStack_d0;
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyys6UInt64VF(lVar7);
    }
    lVar6 = lStack_c0;
    lVar7 = lStack_c8;
    if (lStack_c0 == 0) {
      func_0x000104604394(&lStack_e0,auStack_170);
      lVar7 = CONCAT62(uStack_ae,uStack_b0);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      func_0x000104604394(&lStack_e0,auStack_170);
      __sSS4hash4intoys6HasherVz_tF(&uStack_130,lVar7,lVar6);
      lVar7 = CONCAT62(uStack_ae,uStack_b0);
    }
    if (lVar7 != 0) {
      uVar9 = CONCAT62(uStack_b6,uStack_b8);
      __ss6HasherV8_combineyySuF(3);
      __sSS4hash4intoys6HasherVz_tF(&uStack_130,uVar9,lVar7);
    }
    bVar2 = bStack_a8;
    if (bStack_a8 != 2) {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    }
    bVar2 = bStack_a7;
    if (bStack_a7 != 2) {
      __ss6HasherV8_combineyySuF(6);
      __ss6HasherV8_combineyys5UInt8VF(bVar2 & 1);
    }
    uVar1 = (uint)(uStack_d8 >> 0x20);
    uVar4 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar4 == 0) {
        if ((uStack_d8 & 0xff000000000000) == 0) goto LAB_104611564;
      }
      else {
        lVar7 = (long)(int)lStack_e0;
        lVar6 = lStack_e0 >> 0x20;
LAB_104611554:
        if (lVar7 == lVar6) goto LAB_104611564;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_130);
    }
    else if (uVar4 == 2) {
      lVar7 = *(long *)(lStack_e0 + 0x10);
      lVar6 = *(long *)(lStack_e0 + 0x18);
      goto LAB_104611554;
    }
LAB_104611564:
    func_0x0001046043c8(&lStack_e0);
    if (lVar5 == 0) {
      unaff_x20[5] = uStack_108;
      unaff_x20[4] = uStack_110;
      unaff_x20[7] = uStack_f8;
      unaff_x20[6] = uStack_100;
      unaff_x20[8] = uStack_f0;
      unaff_x20[1] = uStack_128;
      *unaff_x20 = uStack_130;
      unaff_x20[3] = uStack_118;
      unaff_x20[2] = uStack_120;
      return;
    }
    uStack_78 = uStack_108;
    uStack_80 = uStack_110;
    uStack_68 = uStack_f8;
    uStack_70 = uStack_100;
    uStack_60 = uStack_f0;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    plVar8 = plVar8 + 8;
  } while( true );
}



/* Entry: 1046115cc; end: 104611c17;  */

void FUN_1046115cc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_1d0 [32];
  long lStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
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
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    return;
  }
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  plVar9 = (long *)(param_1 + 0x30);
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  do {
    lVar7 = lVar7 + -1;
    lVar1 = plVar9[-2];
    uVar2 = plVar9[-1];
    lVar12 = *plVar9;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_c8 = uStack_78;
    uStack_d0 = uStack_80;
    uStack_c0 = uStack_70;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    _swift_beginAccess(lVar12 + 0x10,auStack_118,0,0);
    bVar4 = *(byte *)(lVar12 + 0x10);
    if ((ulong)bVar4 != 0xc) {
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd201f8 + (ulong)bVar4 * 8));
    }
    _swift_beginAccess(lVar12 + 0x18,auStack_130,0,0);
    lVar13 = *(long *)(lVar12 + 0x28);
    if (lVar13 == 0) {
      func_0x00010006c00c(lVar1,uVar2);
      _swift_retain(lVar12);
    }
    else {
      lVar10 = *(long *)(lVar12 + 0x18);
      uVar3 = *(ulong *)(lVar12 + 0x20);
      uVar14 = *(ulong *)(lVar12 + 0x30);
      __ss6HasherV8_combineyySuF(4);
      uStack_168 = uStack_d8;
      uStack_170 = uStack_e0;
      uStack_158 = uStack_c8;
      uStack_160 = uStack_d0;
      uStack_150 = uStack_c0;
      uStack_188 = uStack_f8;
      uStack_190 = uStack_100;
      uStack_178 = uStack_e8;
      uStack_180 = uStack_f0;
      if ((uVar14 & 0xff) != 4) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(uVar14 & 0xff);
      }
      if ((uVar14 & 0xff00) != 0x300) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(uVar14 >> 8 & 0xff);
      }
      if ((uVar14 & 0xff0000) != 0x30000) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x10 & 0xff);
      }
      if ((uVar14 & 0xff000000) != 0x3000000) {
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd20258 + (uVar14 >> 0x18 & 0xff) * 8));
      }
      if ((uVar14 & 0xff00000000) != 0x300000000) {
        __ss6HasherV8_combineyySuF(5);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x20 & 0xff);
      }
      if ((uVar14 & 0xff0000000000) != 0x30000000000) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x28 & 0xff);
      }
      if ((uVar14 & 0xff000000000000) != 0x3000000000000) {
        __ss6HasherV8_combineyySuF(7);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x30 & 0xff);
      }
      if (uVar14 >> 0x38 != 5) {
        __ss6HasherV8_combineyySuF(8);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x38);
      }
      func_0x00010006c00c(lVar1,uVar2);
      _swift_retain(lVar12);
      func_0x0001045f8978(lVar10,uVar3,lVar13,uVar14);
      FUN_1045ae514(&uStack_190,1000,0x2711,lVar13);
      if (unaff_x21 == 0) {
        uVar5 = (uint)(uVar3 >> 0x20);
        uVar6 = uVar5 >> 0x1e;
        if (uVar5 >> 0x1e < 2) {
          if (uVar6 == 0) {
            if ((uVar3 & 0xff000000000000) == 0) goto LAB_104611870;
          }
          else {
            lVar8 = (long)(int)lVar10;
            lVar11 = lVar10 >> 0x20;
LAB_104611b98:
            if (lVar8 == lVar11) goto LAB_104611870;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_190,lVar10,uVar3);
        }
        else if (uVar6 == 2) {
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)(lVar10 + 0x18);
          goto LAB_104611b98;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_104611870:
      func_0x00010458a4f4(lVar10,uVar3,lVar13,uVar14);
      uStack_d8 = uStack_168;
      uStack_e0 = uStack_170;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      uStack_c0 = uStack_150;
      uStack_f8 = uStack_188;
      uStack_100 = uStack_190;
      uStack_e8 = uStack_178;
      uStack_f0 = uStack_180;
    }
    _swift_beginAccess(lVar12 + 0x38,auStack_148,0,0);
    lVar13 = *(long *)(lVar12 + 0x48);
    if (lVar13 != 0) {
      lVar10 = *(long *)(lVar12 + 0x38);
      uVar3 = *(ulong *)(lVar12 + 0x40);
      uVar14 = *(ulong *)(lVar12 + 0x50);
      __ss6HasherV8_combineyySuF(5);
      uStack_168 = uStack_d8;
      uStack_170 = uStack_e0;
      uStack_158 = uStack_c8;
      uStack_160 = uStack_d0;
      uStack_150 = uStack_c0;
      uStack_188 = uStack_f8;
      uStack_190 = uStack_100;
      uStack_178 = uStack_e8;
      uStack_180 = uStack_f0;
      if ((uVar14 & 0xff) != 4) {
        __ss6HasherV8_combineyySuF(1);
        __ss6HasherV8_combineyySuF(uVar14 & 0xff);
      }
      if ((uVar14 & 0xff00) != 0x300) {
        __ss6HasherV8_combineyySuF(2);
        __ss6HasherV8_combineyySuF(uVar14 >> 8 & 0xff);
      }
      if ((uVar14 & 0xff0000) != 0x30000) {
        __ss6HasherV8_combineyySuF(3);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x10 & 0xff);
      }
      if ((uVar14 & 0xff000000) != 0x3000000) {
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF(*(undefined8 *)(&UNK_10dd20258 + (uVar14 >> 0x18 & 0xff) * 8));
      }
      if ((uVar14 & 0xff00000000) != 0x300000000) {
        __ss6HasherV8_combineyySuF(5);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x20 & 0xff);
      }
      if ((uVar14 & 0xff0000000000) != 0x30000000000) {
        __ss6HasherV8_combineyySuF(6);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x28 & 0xff);
      }
      if ((uVar14 & 0xff000000000000) != 0x3000000000000) {
        __ss6HasherV8_combineyySuF(7);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x30 & 0xff);
      }
      if (uVar14 >> 0x38 != 5) {
        __ss6HasherV8_combineyySuF(8);
        __ss6HasherV8_combineyySuF(uVar14 >> 0x38);
      }
      lStack_1b0 = lVar10;
      uStack_1a8 = uVar3;
      lStack_1a0 = lVar13;
      uStack_198 = uVar14;
      func_0x0001045f89a4(&lStack_1b0,auStack_1d0);
      FUN_1045ae514(&uStack_190,1000,0x2711,lVar13);
      if (unaff_x21 == 0) {
        uVar5 = (uint)(uVar3 >> 0x20);
        uVar6 = uVar5 >> 0x1e;
        if (uVar5 >> 0x1e < 2) {
          if (uVar6 == 0) {
            if ((uVar3 & 0xff000000000000) == 0) goto LAB_104611a7c;
          }
          else {
            lVar8 = (long)(int)lVar10;
            lVar11 = lVar10 >> 0x20;
LAB_104611bbc:
            if (lVar8 == lVar11) goto LAB_104611a7c;
          }
          __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_190,lVar10,uVar3);
        }
        else if (uVar6 == 2) {
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)(lVar10 + 0x18);
          goto LAB_104611bbc;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
LAB_104611a7c:
      func_0x00010458a4f4(lVar10,uVar3,lVar13,uVar14);
      uStack_d8 = uStack_168;
      uStack_e0 = uStack_170;
      uStack_c8 = uStack_158;
      uStack_d0 = uStack_160;
      uStack_c0 = uStack_150;
      uStack_f8 = uStack_188;
      uStack_100 = uStack_190;
      uStack_e8 = uStack_178;
      uStack_f0 = uStack_180;
    }
    uVar5 = (uint)(uVar2 >> 0x20);
    uVar6 = uVar5 >> 0x1e;
    if (uVar5 >> 0x1e < 2) {
      if (uVar6 == 0) {
        if ((uVar2 & 0xff000000000000) == 0) goto LAB_104611af8;
      }
      else {
        lVar13 = (long)(int)lVar1;
        lVar10 = lVar1 >> 0x20;
LAB_104611ae0:
        if (lVar13 == lVar10) goto LAB_104611af8;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_100,lVar1,uVar2);
    }
    else if (uVar6 == 2) {
      lVar13 = *(long *)(lVar1 + 0x10);
      lVar10 = *(long *)(lVar1 + 0x18);
      goto LAB_104611ae0;
    }
LAB_104611af8:
    func_0x00010006c090(lVar1,uVar2);
    _swift_release(lVar12);
    if (lVar7 == 0) {
      unaff_x20[5] = uStack_d8;
      unaff_x20[4] = uStack_e0;
      unaff_x20[7] = uStack_c8;
      unaff_x20[6] = uStack_d0;
      unaff_x20[8] = uStack_c0;
      unaff_x20[1] = uStack_f8;
      *unaff_x20 = uStack_100;
      unaff_x20[3] = uStack_e8;
      unaff_x20[2] = uStack_f0;
      return;
    }
    plVar9 = plVar9 + 3;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_70 = uStack_c0;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
  } while( true );
}



/* Entry: 104611c18; end: 104611e5f;  */

void FUN_104611c18(long param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_188 [56];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  int iStack_d8;
  char cStack_d4;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  int iStack_d0;
  char cStack_cc;
  char cStack_cb;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  lVar10 = 0;
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    plVar4 = (long *)(param_1 + 0x20 + lVar10 * 0x38);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x2e);
    iStack_d0 = (int)((ulong)uVar5 >> 0x10);
    cStack_cc = (char)((ulong)uVar5 >> 0x30);
    cStack_cb = (char)((ulong)uVar5 >> 0x38);
    lStack_e8 = plVar4[3];
    uStack_f0 = plVar4[2];
    lVar7 = plVar4[5];
    lStack_e0 = plVar4[4];
    iStack_d8 = (int)lVar7;
    cStack_d4 = (char)((ulong)lVar7 >> 0x20);
    uStack_d3 = (undefined1)((ulong)lVar7 >> 0x28);
    uStack_d2 = (undefined2)((ulong)lVar7 >> 0x30);
    lStack_f8 = plVar4[1];
    lVar6 = *plVar4;
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_88;
    uStack_120 = uStack_90;
    uStack_110 = uStack_80;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    uStack_138 = uStack_a8;
    uStack_140 = uStack_b0;
    lVar7 = *(long *)(lVar6 + 0x10);
    lStack_100 = lVar6;
    if (lVar7 != 0) {
      __ss6HasherV8_combineyySuF(1);
      __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar6 + 0x10));
      puVar8 = (undefined4 *)(lVar6 + 0x20);
      do {
        __ss6HasherV8_combineyys6UInt32VF(*puVar8);
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
    }
    lVar6 = lStack_e0;
    lVar7 = lStack_e8;
    if (lStack_e0 == 0) {
      FUN_104603b94(&lStack_100,auStack_188);
    }
    else {
      __ss6HasherV8_combineyySuF(2);
      FUN_104603b94(&lStack_100,auStack_188);
      __sSS4hash4intoys6HasherVz_tF(&uStack_150,lVar7,lVar6);
    }
    if (cStack_d4 != '\x01') {
      lVar7 = (long)iStack_d8;
      __ss6HasherV8_combineyySuF(3);
      __ss6HasherV8_combineyys6UInt64VF(lVar7);
    }
    if (cStack_cc != '\x01') {
      lVar7 = (long)iStack_d0;
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys6UInt64VF(lVar7);
    }
    cVar2 = cStack_cb;
    if (cStack_cb != '\x03') {
      __ss6HasherV8_combineyySuF(5);
      __ss6HasherV8_combineyySuF(cVar2);
    }
    uVar1 = (uint)(uStack_f0 >> 0x20);
    uVar3 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar3 == 0) {
        if ((uStack_f0 & 0xff000000000000) == 0) goto LAB_104611df0;
      }
      else {
        lVar7 = (long)(int)lStack_f8;
        lVar6 = lStack_f8 >> 0x20;
LAB_104611de0:
        if (lVar7 == lVar6) goto LAB_104611df0;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_150);
    }
    else if (uVar3 == 2) {
      lVar7 = *(long *)(lStack_f8 + 0x10);
      lVar6 = *(long *)(lStack_f8 + 0x18);
      goto LAB_104611de0;
    }
LAB_104611df0:
    lVar10 = lVar10 + 1;
    func_0x000104603bc8(&lStack_100);
    if (lVar10 == lVar9) {
      unaff_x20[5] = uStack_128;
      unaff_x20[4] = uStack_130;
      unaff_x20[7] = uStack_118;
      unaff_x20[6] = uStack_120;
      unaff_x20[8] = uStack_110;
      unaff_x20[1] = uStack_148;
      *unaff_x20 = uStack_150;
      unaff_x20[3] = uStack_138;
      unaff_x20[2] = uStack_140;
      return;
    }
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    uStack_88 = uStack_118;
    uStack_90 = uStack_120;
    uStack_80 = uStack_110;
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    uStack_a8 = uStack_138;
    uStack_b0 = uStack_140;
  } while( true );
}



/* Entry: 104611e60; end: 104613007;  */

void FUN_104611e60(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  code *pcVar19;
  bool bVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  undefined8 *unaff_x20;
  ulong uVar41;
  ulong uVar42;
  long unaff_x21;
  uint uVar43;
  long lVar44;
  long lVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  uint uVar50;
  ulong uVar51;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar45 = *(long *)(param_1 + 0x10);
  if (lVar45 != 0) {
    lVar44 = 0;
    do {
      puVar26 = (ulong *)(param_1 + 0x20 + lVar44 * 0x30);
      uVar1 = *puVar26;
      uVar6 = puVar26[1];
      uVar48 = puVar26[2];
      bVar15 = (byte)puVar26[3];
      uVar2 = puVar26[4];
      uVar7 = puVar26[5];
      uStack_b8 = unaff_x20[5];
      uStack_c0 = unaff_x20[4];
      uStack_a8 = unaff_x20[7];
      uStack_b0 = unaff_x20[6];
      uStack_a0 = unaff_x20[8];
      uStack_d8 = unaff_x20[1];
      uStack_e0 = *unaff_x20;
      uStack_c8 = unaff_x20[3];
      uStack_d0 = unaff_x20[2];
      uVar43 = (uint)bVar15;
      if ((((uVar48 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (uVar43 == 0xff)) {
        FUN_1045670a0(uVar1,uVar6,uVar48,0xff);
        func_0x00010006c00c(uVar2,uVar7);
      }
      else {
        uVar25 = (uint)(uVar48 >> 0x20);
        uVar17 = uVar25 >> 0x1c & 0xfffffc03 | (uVar43 & 0x3f) << 2;
        if (uVar17 < 3) {
          if (uVar17 == 0) {
            FUN_1045670a0(uVar1,uVar6,uVar48,bVar15);
            func_0x00010006c00c(uVar2,uVar7);
            FUN_104567140(uVar1,uVar6,uVar48,bVar15);
            __ss6HasherV8_combineyySuF(1);
            uVar51 = 0;
            if ((uVar6 & 0xff) != 1) {
              uVar51 = uVar1;
            }
            __ss6HasherV8_combineyySuF(uVar51);
          }
          else if (uVar17 == 1) {
            FUN_1045670a0(uVar1,uVar6,uVar48,bVar15);
            func_0x00010006c00c(uVar2,uVar7);
            FUN_104567140(uVar1,uVar6,uVar48,bVar15);
            __ss6HasherV8_combineyySuF(2);
            uVar51 = 0;
            if ((uVar1 & 0x7fffffffffffffff) != 0) {
              uVar51 = uVar1;
            }
            __ss6HasherV8_combineyys6UInt64VF(uVar51);
          }
          else {
            __ss6HasherV8_combineyySuF(3);
            FUN_1045670a0(uVar1,uVar6,uVar48,bVar15);
            func_0x00010006c00c(uVar2,uVar7);
            __sSS4hash4intoys6HasherVz_tF(&uStack_e0,uVar1,uVar6);
          }
        }
        else if (uVar17 == 3) {
          FUN_1045670a0(uVar1,uVar6,uVar48,bVar15);
          func_0x00010006c00c(uVar2,uVar7);
          FUN_104567140(uVar1,uVar6,uVar48,bVar15);
          __ss6HasherV8_combineyySuF(4);
          __ss6HasherV8_combineyys5UInt8VF((uint)uVar1 & 1);
        }
        else {
          if (uVar17 == 4) {
            __ss6HasherV8_combineyySuF(5);
            uStack_108 = uStack_b8;
            uStack_110 = uStack_c0;
            uStack_f8 = uStack_a8;
            uStack_100 = uStack_b0;
            uStack_f0 = uStack_a0;
            uStack_128 = uStack_d8;
            uStack_130 = uStack_e0;
            uStack_118 = uStack_c8;
            uStack_120 = uStack_d0;
            if (*(long *)(uVar1 + 0x10) == 0) {
              FUN_1045670a0(uVar1,uVar6,uVar48,bVar15);
              func_0x00010006c00c(uVar2,uVar7);
              FUN_1045670a0(uVar1,uVar6,uVar48,bVar15);
            }
            else {
              __ss6HasherV8_combineyySuF(1);
              uVar41 = 1L << ((ulong)*(byte *)(uVar1 + 0x20) & 0x3f);
              uVar51 = 0xffffffffffffffff;
              if ((*(byte *)(uVar1 + 0x20) & 0x3f) < 6) {
                uVar51 = ~(-1L << (uVar41 & 0x3f));
              }
              uVar51 = uVar51 & *(ulong *)(uVar1 + 0x40);
              FUN_1045670a0(uVar1,uVar6,uVar48,uVar43);
              func_0x00010006c00c(uVar2,uVar7);
              FUN_1045670a0(uVar1,uVar6,uVar48,uVar43);
              _swift_bridgeObjectRetain(uVar1);
              uVar39 = 0;
              lVar31 = 0;
              while( true ) {
                while (uVar51 == 0) {
                  bVar20 = SCARRY8(lVar31,1);
                  lVar31 = lVar31 + 1;
                  if (bVar20) {
                    /* WARNING: Does not return */
                    pcVar19 = (code *)SoftwareBreakpoint(1,0x104613000);
                    (*pcVar19)();
                  }
                  if ((long)(uVar41 + 0x3f >> 6) <= lVar31) goto LAB_104612f04;
                  uVar51 = ((ulong *)(uVar1 + 0x40))[lVar31];
                }
                uVar27 = (uVar51 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar51 & 0x5555555555555555) << 1;
                uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
                uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
                uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
                uVar27 = LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) | lVar31 << 6;
                puVar30 = (undefined8 *)(*(long *)(uVar1 + 0x30) + uVar27 * 0x10);
                uVar3 = *puVar30;
                lVar38 = puVar30[1];
                puVar26 = (ulong *)(*(long *)(uVar1 + 0x38) + uVar27 * 0x30);
                uVar27 = *puVar26;
                uVar8 = puVar26[1];
                uVar49 = puVar26[2];
                uVar46 = puVar26[3];
                uVar21 = puVar26[4];
                uVar9 = puVar26[5];
                _swift_bridgeObjectRetain(lVar38);
                uVar43 = (uint)(byte)uVar46;
                FUN_1045670a0(uVar27,uVar8,uVar49,(byte)uVar46);
                func_0x00010006c00c(uVar21,uVar9);
                if (lVar38 == 0) break;
                uStack_158 = uStack_108;
                uStack_160 = uStack_110;
                uStack_148 = uStack_f8;
                uStack_150 = uStack_100;
                uStack_140 = uStack_f0;
                uStack_178 = uStack_128;
                uStack_180 = uStack_130;
                uStack_168 = uStack_118;
                uStack_170 = uStack_120;
                __sSS4hash4intoys6HasherVz_tF(&uStack_180,uVar3,lVar38);
                _swift_bridgeObjectRelease(lVar38);
                uStack_1a8 = uStack_158;
                uStack_1b0 = uStack_160;
                uStack_198 = uStack_148;
                uStack_1a0 = uStack_150;
                uStack_190 = uStack_140;
                uStack_1c8 = uStack_178;
                uStack_1d0 = uStack_180;
                uStack_1b8 = uStack_168;
                uStack_1c0 = uStack_170;
                if ((((uVar49 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (uVar43 != 0xff))
                {
                  uVar17 = (uint)(uVar49 >> 0x20);
                  uVar50 = uVar17 >> 0x1c & 0xfffffc03 | (uVar43 & 0x3f) << 2;
                  if (uVar50 < 3) {
                    if (uVar50 == 0) {
                      FUN_104567140(uVar27,uVar8,uVar49,uVar43);
                      __ss6HasherV8_combineyySuF(1);
                      uVar46 = 0;
                      if ((uVar8 & 0xff) != 1) {
                        uVar46 = uVar27;
                      }
                      __ss6HasherV8_combineyySuF(uVar46);
                    }
                    else if (uVar50 == 1) {
                      FUN_104567140(uVar27,uVar8,uVar49,uVar43);
                      __ss6HasherV8_combineyySuF(2);
                      uVar46 = 0;
                      if ((uVar27 & 0x7fffffffffffffff) != 0) {
                        uVar46 = uVar27;
                      }
                      __ss6HasherV8_combineyys6UInt64VF(uVar46);
                    }
                    else {
                      __ss6HasherV8_combineyySuF(3);
                      __sSS4hash4intoys6HasherVz_tF(&uStack_1d0,uVar27,uVar8);
                    }
                  }
                  else if (uVar50 == 3) {
                    FUN_104567140(uVar27,uVar8,uVar49,uVar43);
                    __ss6HasherV8_combineyySuF(4);
                    __ss6HasherV8_combineyys5UInt8VF((uint)uVar27 & 1);
                  }
                  else {
                    if (uVar50 == 4) {
                      __ss6HasherV8_combineyySuF(5);
                      uStack_1f8 = uStack_1a8;
                      uStack_200 = uStack_1b0;
                      uStack_1e8 = uStack_198;
                      uStack_1f0 = uStack_1a0;
                      uStack_1e0 = uStack_190;
                      uStack_218 = uStack_1c8;
                      uStack_220 = uStack_1d0;
                      uStack_208 = uStack_1b8;
                      uStack_210 = uStack_1c0;
                      if (*(long *)(uVar27 + 0x10) == 0) {
                        FUN_1045670c4(uVar27,uVar8,uVar49,uVar43);
                      }
                      else {
                        __ss6HasherV8_combineyySuF(1);
                        uVar32 = 1L << ((ulong)*(byte *)(uVar27 + 0x20) & 0x3f);
                        uVar46 = 0xffffffffffffffff;
                        if ((*(byte *)(uVar27 + 0x20) & 0x3f) < 6) {
                          uVar46 = ~(-1L << (uVar32 & 0x3f));
                        }
                        uVar46 = uVar46 & *(ulong *)(uVar27 + 0x40);
                        FUN_1045670a0(uVar27,uVar8,uVar49,uVar43);
                        _swift_bridgeObjectRetain(uVar27);
                        uVar40 = 0;
                        lVar38 = 0;
                        while( true ) {
                          while (uVar46 == 0) {
                            bVar20 = SCARRY8(lVar38,1);
                            lVar38 = lVar38 + 1;
                            if (bVar20) {
                    /* WARNING: Does not return */
                              pcVar19 = (code *)SoftwareBreakpoint(1,0x104613004);
                              (*pcVar19)();
                            }
                            if ((long)(uVar32 + 0x3f >> 6) <= lVar38) goto LAB_104612cd8;
                            uVar46 = ((ulong *)(uVar27 + 0x40))[lVar38];
                          }
                          uVar28 = (uVar46 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                   (uVar46 & 0x5555555555555555) << 1;
                          uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 |
                                   (uVar28 & 0x3333333333333333) << 2;
                          uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                   (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
                          uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 |
                                   (uVar28 & 0xff00ff00ff00ff) << 8;
                          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 |
                                   (uVar28 & 0xffff0000ffff) << 0x10;
                          uVar28 = LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) | lVar38 << 6;
                          puVar30 = (undefined8 *)(*(long *)(uVar27 + 0x30) + uVar28 * 0x10);
                          uVar3 = *puVar30;
                          lVar37 = puVar30[1];
                          puVar26 = (ulong *)(*(long *)(uVar27 + 0x38) + uVar28 * 0x30);
                          uVar28 = *puVar26;
                          uVar10 = puVar26[1];
                          uVar33 = puVar26[2];
                          uVar47 = puVar26[3];
                          uVar22 = puVar26[4];
                          uVar11 = puVar26[5];
                          _swift_bridgeObjectRetain(lVar37);
                          uVar50 = (uint)(byte)uVar47;
                          FUN_1045670a0(uVar28,uVar10,uVar33,(byte)uVar47);
                          func_0x00010006c00c(uVar22,uVar11);
                          if (lVar37 == 0) break;
                          uStack_248 = uStack_1f8;
                          uStack_250 = uStack_200;
                          uStack_238 = uStack_1e8;
                          uStack_240 = uStack_1f0;
                          uStack_230 = uStack_1e0;
                          uStack_268 = uStack_218;
                          uStack_270 = uStack_220;
                          uStack_258 = uStack_208;
                          uStack_260 = uStack_210;
                          __sSS4hash4intoys6HasherVz_tF(&uStack_270,uVar3,lVar37);
                          _swift_bridgeObjectRelease(lVar37);
                          uStack_298 = uStack_248;
                          uStack_2a0 = uStack_250;
                          uStack_288 = uStack_238;
                          uStack_290 = uStack_240;
                          uStack_280 = uStack_230;
                          uStack_2b8 = uStack_268;
                          uStack_2c0 = uStack_270;
                          uStack_2a8 = uStack_258;
                          uStack_2b0 = uStack_260;
                          if ((((uVar33 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
                             (uVar50 != 0xff)) {
                            uVar18 = (uint)(uVar33 >> 0x20);
                            uVar24 = uVar18 >> 0x1c & 0xfffffc03 | (uVar50 & 0x3f) << 2;
                            if (uVar24 < 3) {
                              if (uVar24 == 0) {
                                FUN_104567140(uVar28,uVar10,uVar33,uVar50);
                                __ss6HasherV8_combineyySuF(1);
                                uVar47 = 0;
                                if ((uVar10 & 0xff) != 1) {
                                  uVar47 = uVar28;
                                }
                                __ss6HasherV8_combineyySuF(uVar47);
                              }
                              else if (uVar24 == 1) {
                                FUN_104567140(uVar28,uVar10,uVar33,uVar50);
                                __ss6HasherV8_combineyySuF(2);
                                uVar47 = 0;
                                if ((uVar28 & 0x7fffffffffffffff) != 0) {
                                  uVar47 = uVar28;
                                }
                                __ss6HasherV8_combineyys6UInt64VF(uVar47);
                              }
                              else {
                                __ss6HasherV8_combineyySuF(3);
                                __sSS4hash4intoys6HasherVz_tF(&uStack_2c0,uVar28,uVar10);
                              }
                            }
                            else if (uVar24 == 3) {
                              FUN_104567140(uVar28,uVar10,uVar33,uVar50);
                              __ss6HasherV8_combineyySuF(4);
                              __ss6HasherV8_combineyys5UInt8VF((uint)uVar28 & 1);
                            }
                            else {
                              lVar37 = (long)uVar10 >> 0x20;
                              if (uVar24 == 4) {
                                __ss6HasherV8_combineyySuF(5);
                                uStack_2e8 = uStack_298;
                                uStack_2f0 = uStack_2a0;
                                uStack_2d8 = uStack_288;
                                uStack_2e0 = uStack_290;
                                uStack_2d0 = uStack_280;
                                uStack_308 = uStack_2b8;
                                uStack_310 = uStack_2c0;
                                uStack_2f8 = uStack_2a8;
                                uStack_300 = uStack_2b0;
                                if (*(long *)(uVar28 + 0x10) == 0) {
                                  FUN_1045670c4(uVar28,uVar10,uVar33,uVar50);
                                }
                                else {
                                  __ss6HasherV8_combineyySuF(1);
                                  uVar42 = 1L << ((ulong)*(byte *)(uVar28 + 0x20) & 0x3f);
                                  uVar47 = 0xffffffffffffffff;
                                  if ((*(byte *)(uVar28 + 0x20) & 0x3f) < 6) {
                                    uVar47 = ~(-1L << (uVar42 & 0x3f));
                                  }
                                  uVar47 = uVar47 & *(ulong *)(uVar28 + 0x40);
                                  FUN_1045670a0(uVar28,uVar10,uVar33,uVar50);
                                  uVar23 = uVar28;
                                  _swift_bridgeObjectRetain();
                                  uVar34 = 0;
                                  lVar36 = 0;
                                  while( true ) {
                                    while (uVar47 == 0) {
                                      bVar20 = SCARRY8(lVar36,1);
                                      lVar36 = lVar36 + 1;
                                      if (bVar20) {
                    /* WARNING: Does not return */
                                        pcVar19 = (code *)SoftwareBreakpoint(1,0x104613008);
                                        (*pcVar19)();
                                      }
                                      if ((long)(uVar42 + 0x3f >> 6) <= lVar36) goto LAB_104612bf4;
                                      uVar47 = ((ulong *)(uVar28 + 0x40))[lVar36];
                                    }
                                    uVar29 = (uVar47 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                                             (uVar47 & 0x5555555555555555) << 1;
                                    uVar29 = (uVar29 & 0xcccccccccccccccc) >> 2 |
                                             (uVar29 & 0x3333333333333333) << 2;
                                    uVar29 = (uVar29 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                             (uVar29 & 0xf0f0f0f0f0f0f0f) << 4;
                                    uVar29 = (uVar29 & 0xff00ff00ff00ff00) >> 8 |
                                             (uVar29 & 0xff00ff00ff00ff) << 8;
                                    uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 |
                                             (uVar29 & 0xffff0000ffff) << 0x10;
                                    uVar29 = LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) | lVar36 << 6;
                                    puVar30 = (undefined8 *)
                                              (*(long *)(uVar23 + 0x30) + uVar29 * 0x10);
                                    uVar3 = *puVar30;
                                    lVar12 = puVar30[1];
                                    puVar30 = (undefined8 *)
                                              (*(long *)(uVar23 + 0x38) + uVar29 * 0x30);
                                    uVar4 = *puVar30;
                                    uVar13 = puVar30[1];
                                    uVar35 = puVar30[2];
                                    bVar16 = *(byte *)(puVar30 + 3);
                                    uVar5 = puVar30[4];
                                    uVar14 = puVar30[5];
                                    _swift_bridgeObjectRetain();
                                    FUN_1045670a0(uVar4,uVar13,uVar35,(ulong)bVar16);
                                    func_0x00010006c00c(uVar5,uVar14);
                                    if (lVar12 == 0) break;
                                    uStack_338 = uStack_2e8;
                                    uStack_340 = uStack_2f0;
                                    uStack_328 = uStack_2d8;
                                    uStack_330 = uStack_2e0;
                                    uStack_320 = uStack_2d0;
                                    uStack_358 = uStack_308;
                                    uStack_360 = uStack_310;
                                    uStack_348 = uStack_2f8;
                                    uStack_350 = uStack_300;
                                    uStack_98 = uVar4;
                                    uStack_90 = uVar13;
                                    uStack_88 = uVar35;
                                    uStack_80 = (ulong)bVar16;
                                    uStack_78 = uVar5;
                                    uStack_70 = uVar14;
                                    __sSS4hash4intoys6HasherVz_tF(&uStack_360,uVar3,lVar12);
                                    _swift_bridgeObjectRelease(lVar12);
                                    uStack_388 = uStack_338;
                                    uStack_390 = uStack_340;
                                    uStack_378 = uStack_328;
                                    uStack_380 = uStack_330;
                                    uStack_370 = uStack_320;
                                    uStack_3a8 = uStack_358;
                                    uStack_3b0 = uStack_360;
                                    uStack_398 = uStack_348;
                                    uStack_3a0 = uStack_350;
                                    FUN_104609780(&uStack_3b0);
                                    if (unaff_x21 != 0) {
                                      _swift_errorRelease(unaff_x21);
                                      unaff_x21 = 0;
                                    }
                                    uVar47 = uVar47 - 1 & uVar47;
                                    puVar30 = &uStack_98;
                                    func_0x0001045671e0();
                                    uStack_338 = uStack_388;
                                    uStack_340 = uStack_390;
                                    uStack_328 = uStack_378;
                                    uStack_330 = uStack_380;
                                    uStack_320 = uStack_370;
                                    uStack_358 = uStack_3a8;
                                    uStack_360 = uStack_3b0;
                                    uStack_348 = uStack_398;
                                    uStack_350 = uStack_3a0;
                                    __ss6HasherV9_finalizeSiyF();
                                    uVar34 = (ulong)puVar30 ^ uVar34;
                                    uVar23 = uVar28;
                                  }
LAB_104612bf4:
                                  _swift_release();
                                  __ss6HasherV8_combineyySuF(uVar34);
                                }
                                uVar47 = uVar33;
                                if (uVar18 >> 0x1e < 2) {
                                  if (uVar18 >> 0x1e != 0) {
                                    lVar36 = (long)(int)uVar10;
                                    goto LAB_104612c4c;
                                  }
                                  if ((uVar33 & 0xff000000000000) == 0) goto LAB_104612c64;
                                }
                                else {
                                  if (uVar18 >> 0x1e != 2) goto LAB_104612c64;
                                  lVar36 = *(long *)(uVar10 + 0x10);
                                  lVar37 = *(long *)(uVar10 + 0x18);
LAB_104612c4c:
                                  if (lVar36 == lVar37) goto LAB_104612c64;
                                }
LAB_104612c60:
                                __s10Foundation4DataV4hash4intoys6HasherVz_tF
                                          (&uStack_310,uVar10,uVar47);
                              }
                              else {
                                __ss6HasherV8_combineyySuF(6);
                                uStack_2e8 = uStack_298;
                                uStack_2f0 = uStack_2a0;
                                uStack_2d8 = uStack_288;
                                uStack_2e0 = uStack_290;
                                uStack_2d0 = uStack_280;
                                uStack_308 = uStack_2b8;
                                uStack_310 = uStack_2c0;
                                uStack_2f8 = uStack_2a8;
                                uStack_300 = uStack_2b0;
                                lVar36 = *(long *)(uVar28 + 0x10);
                                FUN_1045670c4(uVar28,uVar10,uVar33,uVar50);
                                if ((lVar36 == 0) || (FUN_104611e60(uVar28,1), unaff_x21 == 0)) {
                                  if (uVar18 >> 0x1e < 2) {
                                    if (uVar18 >> 0x1e == 0) {
                                      if ((uVar33 & 0xff000000000000) == 0) goto LAB_104612c64;
                                    }
                                    else {
                                      lVar36 = (long)(int)uVar10;
LAB_104612bd4:
                                      if (lVar36 == lVar37) goto LAB_104612c64;
                                    }
                                    uVar47 = uVar33 & 0xcfffffffffffffff;
                                    goto LAB_104612c60;
                                  }
                                  if (uVar18 >> 0x1e == 2) {
                                    lVar36 = *(long *)(uVar10 + 0x10);
                                    lVar37 = *(long *)(uVar10 + 0x18);
                                    goto LAB_104612bd4;
                                  }
                                }
                                else {
                                  _swift_errorRelease(unaff_x21);
                                  unaff_x21 = 0;
                                }
                              }
LAB_104612c64:
                              FUN_104567140(uVar28,uVar10,uVar33,uVar50);
                              uStack_298 = uStack_2e8;
                              uStack_2a0 = uStack_2f0;
                              uStack_288 = uStack_2d8;
                              uStack_290 = uStack_2e0;
                              uStack_280 = uStack_2d0;
                              uStack_2b8 = uStack_308;
                              uStack_2c0 = uStack_310;
                              uStack_2a8 = uStack_2f8;
                              uStack_2b0 = uStack_300;
                            }
                          }
                          uVar18 = (uint)(uVar11 >> 0x20);
                          uVar24 = uVar18 >> 0x1e;
                          if (uVar18 >> 0x1e < 2) {
                            if (uVar24 == 0) {
                              if ((uVar11 & 0xff000000000000) == 0) goto LAB_104612658;
                            }
                            else {
                              lVar37 = (long)(int)uVar22;
                              lVar36 = (long)uVar22 >> 0x20;
LAB_104612cc8:
                              if (lVar37 == lVar36) goto LAB_104612658;
                            }
                            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_2c0,uVar22,uVar11)
                            ;
                          }
                          else if (uVar24 == 2) {
                            lVar37 = *(long *)(uVar22 + 0x10);
                            lVar36 = *(long *)(uVar22 + 0x18);
                            goto LAB_104612cc8;
                          }
LAB_104612658:
                          uVar46 = uVar46 - 1 & uVar46;
                          FUN_104567140(uVar28,uVar10,uVar33,uVar50);
                          func_0x00010006c090(uVar22,uVar11);
                          uStack_248 = uStack_298;
                          uStack_250 = uStack_2a0;
                          uStack_238 = uStack_288;
                          uStack_240 = uStack_290;
                          uStack_230 = uStack_280;
                          uStack_268 = uStack_2b8;
                          uStack_270 = uStack_2c0;
                          uStack_258 = uStack_2a8;
                          uStack_260 = uStack_2b0;
                          __ss6HasherV9_finalizeSiyF();
                          uVar40 = uVar22 ^ uVar40;
                        }
LAB_104612cd8:
                        _swift_release(uVar27);
                        __ss6HasherV8_combineyySuF(uVar40);
                      }
                      uVar46 = uVar49;
                      if (uVar17 >> 0x1e < 2) {
                        if (uVar17 >> 0x1e == 0) {
                          if ((uVar49 & 0xff000000000000) != 0) {
LAB_104612ddc:
                            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_220,uVar8,uVar46);
                          }
                        }
                        else if ((long)(int)uVar8 != (long)uVar8 >> 0x20) goto LAB_104612ddc;
                      }
                      else if ((uVar17 >> 0x1e == 2) &&
                              (*(long *)(uVar8 + 0x10) != *(long *)(uVar8 + 0x18)))
                      goto LAB_104612ddc;
                    }
                    else {
                      __ss6HasherV8_combineyySuF(6);
                      uStack_1f8 = uStack_1a8;
                      uStack_200 = uStack_1b0;
                      uStack_1e8 = uStack_198;
                      uStack_1f0 = uStack_1a0;
                      uStack_1e0 = uStack_190;
                      uStack_218 = uStack_1c8;
                      uStack_220 = uStack_1d0;
                      uStack_208 = uStack_1b8;
                      uStack_210 = uStack_1c0;
                      lVar38 = *(long *)(uVar27 + 0x10);
                      FUN_1045670c4(uVar27,uVar8,uVar49,uVar43);
                      if ((lVar38 == 0) || (FUN_104611e60(uVar27,1), unaff_x21 == 0)) {
                        if (uVar17 >> 0x1e < 2) {
                          if (uVar17 >> 0x1e == 0) {
                            if ((uVar49 & 0xff000000000000) != 0) {
LAB_104612dd0:
                              uVar46 = uVar49 & 0xcfffffffffffffff;
                              goto LAB_104612ddc;
                            }
                          }
                          else if ((long)(int)uVar8 != (long)uVar8 >> 0x20) goto LAB_104612dd0;
                        }
                        else if ((uVar17 >> 0x1e == 2) &&
                                (*(long *)(uVar8 + 0x10) != *(long *)(uVar8 + 0x18)))
                        goto LAB_104612dd0;
                      }
                      else {
                        _swift_errorRelease(unaff_x21);
                        unaff_x21 = 0;
                      }
                    }
                    FUN_104567140(uVar27,uVar8,uVar49,uVar43);
                    uStack_1a8 = uStack_1f8;
                    uStack_1b0 = uStack_200;
                    uStack_198 = uStack_1e8;
                    uStack_1a0 = uStack_1f0;
                    uStack_190 = uStack_1e0;
                    uStack_1c8 = uStack_218;
                    uStack_1d0 = uStack_220;
                    uStack_1b8 = uStack_208;
                    uStack_1c0 = uStack_210;
                  }
                }
                uVar17 = (uint)(uVar9 >> 0x20);
                uVar50 = uVar17 >> 0x1e;
                if (uVar17 >> 0x1e < 2) {
                  if (uVar50 == 0) {
                    if ((uVar9 & 0xff000000000000) == 0) goto LAB_104612280;
                  }
                  else {
                    lVar38 = (long)(int)uVar21;
                    lVar37 = (long)uVar21 >> 0x20;
LAB_104612e34:
                    if (lVar38 == lVar37) goto LAB_104612280;
                  }
                  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_1d0,uVar21,uVar9);
                }
                else if (uVar50 == 2) {
                  lVar38 = *(long *)(uVar21 + 0x10);
                  lVar37 = *(long *)(uVar21 + 0x18);
                  goto LAB_104612e34;
                }
LAB_104612280:
                uVar51 = uVar51 - 1 & uVar51;
                FUN_104567140(uVar27,uVar8,uVar49,uVar43);
                func_0x00010006c090(uVar21,uVar9);
                uStack_158 = uStack_1a8;
                uStack_160 = uStack_1b0;
                uStack_148 = uStack_198;
                uStack_150 = uStack_1a0;
                uStack_140 = uStack_190;
                uStack_178 = uStack_1c8;
                uStack_180 = uStack_1d0;
                uStack_168 = uStack_1b8;
                uStack_170 = uStack_1c0;
                __ss6HasherV9_finalizeSiyF();
                uVar39 = uVar21 ^ uVar39;
              }
LAB_104612f04:
              _swift_release(uVar1);
              __ss6HasherV8_combineyySuF(uVar39);
            }
            uVar51 = uVar48;
            if (uVar25 >> 0x1e < 2) {
              if (uVar25 >> 0x1e == 0) {
                if ((uVar48 & 0xff000000000000) != 0) {
LAB_104612f74:
                  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_130,uVar6,uVar51);
                }
              }
              else if ((long)(int)uVar6 != (long)uVar6 >> 0x20) goto LAB_104612f74;
            }
            else if ((uVar25 >> 0x1e == 2) && (*(long *)(uVar6 + 0x10) != *(long *)(uVar6 + 0x18)))
            goto LAB_104612f74;
          }
          else {
            __ss6HasherV8_combineyySuF(6);
            uStack_108 = uStack_b8;
            uStack_110 = uStack_c0;
            uStack_f8 = uStack_a8;
            uStack_100 = uStack_b0;
            uStack_f0 = uStack_a0;
            uStack_128 = uStack_d8;
            uStack_130 = uStack_e0;
            uStack_118 = uStack_c8;
            uStack_120 = uStack_d0;
            lVar31 = *(long *)(uVar1 + 0x10);
            FUN_1045670a0(uVar1,uVar6,uVar48,uVar43);
            func_0x00010006c00c(uVar2,uVar7);
            FUN_1045670a0(uVar1,uVar6,uVar48,uVar43);
            if ((lVar31 == 0) || (FUN_104611e60(uVar1,1), unaff_x21 == 0)) {
              if (uVar25 >> 0x1e < 2) {
                if (uVar25 >> 0x1e == 0) {
                  if ((uVar48 & 0xff000000000000) != 0) {
LAB_104612ee4:
                    uVar51 = uVar48 & 0xcfffffffffffffff;
                    goto LAB_104612f74;
                  }
                }
                else if ((long)(int)uVar6 != (long)uVar6 >> 0x20) goto LAB_104612ee4;
              }
              else if ((uVar25 >> 0x1e == 2) && (*(long *)(uVar6 + 0x10) != *(long *)(uVar6 + 0x18))
                      ) goto LAB_104612ee4;
            }
            else {
              _swift_errorRelease(unaff_x21);
              unaff_x21 = 0;
            }
          }
          FUN_104567140(uVar1,uVar6,uVar48,bVar15);
          uStack_b8 = uStack_108;
          uStack_c0 = uStack_110;
          uStack_a8 = uStack_f8;
          uStack_b0 = uStack_100;
          uStack_a0 = uStack_f0;
          uStack_d8 = uStack_128;
          uStack_e0 = uStack_130;
          uStack_c8 = uStack_118;
          uStack_d0 = uStack_120;
        }
      }
      uVar43 = (uint)(uVar7 >> 0x20);
      uVar25 = uVar43 >> 0x1e;
      if (uVar43 >> 0x1e < 2) {
        if (uVar25 == 0) {
          if ((uVar7 & 0xff000000000000) == 0) goto LAB_104611ecc;
        }
        else {
          lVar31 = (long)(int)uVar2;
          lVar38 = (long)uVar2 >> 0x20;
LAB_104612fcc:
          if (lVar31 == lVar38) goto LAB_104611ecc;
        }
        __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_e0,uVar2,uVar7);
      }
      else if (uVar25 == 2) {
        lVar31 = *(long *)(uVar2 + 0x10);
        lVar38 = *(long *)(uVar2 + 0x18);
        goto LAB_104612fcc;
      }
LAB_104611ecc:
      lVar44 = lVar44 + 1;
      FUN_104567140(uVar1,uVar6,uVar48,bVar15);
      func_0x00010006c090(uVar2,uVar7);
      unaff_x20[5] = uStack_b8;
      unaff_x20[4] = uStack_c0;
      unaff_x20[7] = uStack_a8;
      unaff_x20[6] = uStack_b0;
      unaff_x20[8] = uStack_a0;
      unaff_x20[1] = uStack_d8;
      *unaff_x20 = uStack_e0;
      unaff_x20[3] = uStack_c8;
      unaff_x20[2] = uStack_d0;
    } while (lVar44 != lVar45);
  }
  return;
}



/* Entry: 104613008; end: 104613127;  */

void FUN_104613008(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  undefined1 auStack_1e0 [128];
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
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uStack_e8 = unaff_x20[5];
    uStack_f0 = unaff_x20[4];
    uStack_d8 = unaff_x20[7];
    uStack_e0 = unaff_x20[6];
    uStack_d0 = unaff_x20[8];
    uStack_108 = unaff_x20[1];
    uStack_110 = *unaff_x20;
    uStack_f8 = unaff_x20[3];
    uStack_100 = unaff_x20[2];
    puVar2 = (undefined8 *)(param_1 + 0x20);
    while( true ) {
      lVar1 = lVar1 + -1;
      uStack_78 = puVar2[9];
      uStack_80 = puVar2[8];
      uStack_68 = puVar2[0xb];
      uStack_70 = puVar2[10];
      uStack_58 = puVar2[0xd];
      uStack_60 = puVar2[0xc];
      uStack_48 = puVar2[0xf];
      uStack_50 = puVar2[0xe];
      uStack_b8 = puVar2[1];
      uStack_c0 = *puVar2;
      uStack_a8 = puVar2[3];
      uStack_b0 = puVar2[2];
      uStack_98 = puVar2[5];
      uStack_a0 = puVar2[4];
      uStack_88 = puVar2[7];
      uStack_90 = puVar2[6];
      uStack_120 = uStack_d0;
      uStack_138 = uStack_e8;
      uStack_140 = uStack_f0;
      uStack_128 = uStack_d8;
      uStack_130 = uStack_e0;
      uStack_158 = uStack_108;
      uStack_160 = uStack_110;
      uStack_148 = uStack_f8;
      uStack_150 = uStack_100;
      func_0x000104603ae4(&uStack_c0,auStack_1e0);
      FUN_10461617c(&uStack_160);
      if (unaff_x21 != 0) {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      func_0x000104603b20(&uStack_c0);
      if (lVar1 == 0) break;
      uStack_e8 = uStack_138;
      uStack_f0 = uStack_140;
      uStack_d8 = uStack_128;
      uStack_e0 = uStack_130;
      uStack_d0 = uStack_120;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      uStack_f8 = uStack_148;
      uStack_100 = uStack_150;
      puVar2 = puVar2 + 0x10;
    }
    unaff_x20[5] = uStack_138;
    unaff_x20[4] = uStack_140;
    unaff_x20[7] = uStack_128;
    unaff_x20[6] = uStack_130;
    unaff_x20[8] = uStack_120;
    unaff_x20[1] = uStack_158;
    *unaff_x20 = uStack_160;
    unaff_x20[3] = uStack_148;
    unaff_x20[2] = uStack_150;
  }
  return;
}



/* Entry: 104613128; end: 104613577;  */

void FUN_104613128(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x20;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 auStack_178 [24];
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __ss6HasherV8_combineyySuF(param_2);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  lVar17 = 0;
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_80 = unaff_x20[8];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  do {
    puVar14 = (ulong *)(param_1 + 0x20 + lVar17 * 0x30);
    uVar2 = *puVar14;
    uVar5 = puVar14[1];
    uVar11 = puVar14[2];
    uVar3 = puVar14[3];
    uVar6 = puVar14[4];
    uVar19 = puVar14[5];
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar5 & 0x2000000000000000) != 0) {
      uVar1 = uVar5 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar3);
      func_0x00010006c00c(uVar6,uVar19);
    }
    else {
      __ss6HasherV8_combineyySuF(1);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar3);
      func_0x00010006c00c(uVar6,uVar19);
      __sSS4hash4intoys6HasherVz_tF(&uStack_110,uVar2,uVar5);
    }
    if ((int)uVar11 != 0) {
      __ss6HasherV8_combineyySuF(2);
      __ss6HasherV8_combineyys6UInt64VF((long)(int)uVar11);
    }
    lVar16 = *(long *)(uVar3 + 0x10);
    if (lVar16 != 0) {
      __ss6HasherV8_combineyySuF(3);
      plVar20 = (long *)(uVar3 + 0x50);
      do {
        uVar2 = plVar20[-6];
        uVar11 = plVar20[-5];
        lVar15 = plVar20[-4];
        uVar7 = plVar20[-3];
        lVar4 = plVar20[-2];
        lVar8 = plVar20[-1];
        lVar18 = *plVar20;
        uStack_138 = uStack_e8;
        uStack_140 = uStack_f0;
        uStack_128 = uStack_d8;
        uStack_130 = uStack_e0;
        uStack_120 = uStack_d0;
        uVar1 = uVar2 & 0xffffffffffff;
        if ((uVar11 & 0x2000000000000000) != 0) {
          uVar1 = uVar11 >> 0x38 & 0xf;
        }
        uStack_158 = uStack_108;
        uStack_160 = uStack_110;
        uStack_148 = uStack_f8;
        uStack_150 = uStack_100;
        if (uVar1 == 0) {
          _swift_bridgeObjectRetain(uVar11);
          func_0x00010006c00c(lVar15,uVar7);
          func_0x000104603ab8(lVar4,lVar8,lVar18);
        }
        else {
          __ss6HasherV8_combineyySuF(1);
          _swift_bridgeObjectRetain(uVar11);
          func_0x00010006c00c(lVar15,uVar7);
          func_0x000104603ab8(lVar4,lVar8,lVar18);
          __sSS4hash4intoys6HasherVz_tF(&uStack_160,uVar2,uVar11);
        }
        if (lVar18 != 0) {
          __ss6HasherV8_combineyySuF(2);
          _swift_beginAccess(lVar18 + 0x10,auStack_178,0,0);
          uVar2 = *(ulong *)(lVar18 + 0x10);
          uVar9 = *(ulong *)(lVar18 + 0x18);
          uVar1 = uVar2 & 0xffffffffffff;
          if ((uVar9 & 0x2000000000000000) != 0) {
            uVar1 = uVar9 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            func_0x000104603ab8(lVar4,lVar8,lVar18);
            _swift_bridgeObjectRetain(uVar9);
            __sSS4hash4intoys6HasherVz_tF(&uStack_160,uVar2,uVar9);
            func_0x00010459fd54(lVar4,lVar8,lVar18);
            _swift_bridgeObjectRelease(uVar9);
          }
        }
        uVar10 = (uint)(uVar7 >> 0x20);
        uVar12 = uVar10 >> 0x1e;
        if (uVar10 >> 0x1e < 2) {
          if (uVar12 == 0) {
            if ((uVar7 & 0xff000000000000) != 0) goto LAB_104613294;
          }
          else if ((long)(int)lVar15 != lVar15 >> 0x20) {
LAB_104613294:
            __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_160,lVar15,uVar7);
          }
        }
        else if ((uVar12 == 2) && (*(long *)(lVar15 + 0x10) != *(long *)(lVar15 + 0x18)))
        goto LAB_104613294;
        plVar20 = plVar20 + 7;
        _swift_bridgeObjectRelease(uVar11);
        func_0x00010006c090(lVar15,uVar7);
        func_0x00010459fd54(lVar4,lVar8,lVar18);
        uStack_e8 = uStack_138;
        uStack_f0 = uStack_140;
        uStack_d8 = uStack_128;
        uStack_e0 = uStack_130;
        uStack_d0 = uStack_120;
        uStack_108 = uStack_158;
        uStack_110 = uStack_160;
        uStack_f8 = uStack_148;
        uStack_100 = uStack_150;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    uVar10 = (uint)(uVar19 >> 0x20);
    uVar12 = uVar10 >> 0x1e;
    if (uVar10 >> 0x1e < 2) {
      if (uVar12 == 0) {
        if ((uVar19 & 0xff000000000000) == 0) goto LAB_1046134f4;
      }
      else {
        lVar16 = (long)(int)uVar6;
        lVar15 = (long)uVar6 >> 0x20;
LAB_1046134dc:
        if (lVar16 == lVar15) goto LAB_1046134f4;
      }
      __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_110,uVar6,uVar19);
    }
    else if (uVar12 == 2) {
      lVar16 = *(long *)(uVar6 + 0x10);
      lVar15 = *(long *)(uVar6 + 0x18);
      goto LAB_1046134dc;
    }
LAB_1046134f4:
    lVar17 = lVar17 + 1;
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar5);
    func_0x00010006c090(uVar6,uVar19);
    if (lVar17 == lVar13) {
      unaff_x20[5] = uStack_e8;
      unaff_x20[4] = uStack_f0;
      unaff_x20[7] = uStack_d8;
      unaff_x20[6] = uStack_e0;
      unaff_x20[8] = uStack_d0;
      unaff_x20[1] = uStack_108;
      *unaff_x20 = uStack_110;
      unaff_x20[3] = uStack_f8;
      unaff_x20[2] = uStack_100;
      return;
    }
    uStack_98 = uStack_e8;
    uStack_a0 = uStack_f0;
    uStack_88 = uStack_d8;
    uStack_90 = uStack_e0;
    uStack_80 = uStack_d0;
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_a8 = uStack_f8;
    uStack_b0 = uStack_100;
  } while( true );
}



/* Entry: 104613578; end: 104613583;  */

bool FUN_104613578(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 104613584; end: 1046136e7;  */

void FUN_104613584(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  uVar8 = param_1[2];
  bVar3 = *(byte *)(param_1 + 3);
  if (((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (bVar3 == 0xff)) ||
     (uVar4 = (uint)(uVar8 >> 0x20), (uVar4 >> 0x1c & 0xfffffc03 | (bVar3 & 0x3f) << 2) != 4)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1046136e8);
    (*pcVar5)();
  }
  __ss6HasherV8_combineyySuF(5);
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_60 = param_2[8];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  if (*(long *)(lVar1 + 0x10) == 0) {
    FUN_1045670c4(lVar1,lVar2,uVar8,bVar3);
  }
  else {
    __ss6HasherV8_combineyySuF(1);
    FUN_1045670c4(lVar1,lVar2,uVar8,bVar3);
    FUN_104618d94(&uStack_a0,lVar1);
  }
  if (uVar4 >> 0x1e < 2) {
    if (uVar4 >> 0x1e != 0) {
      lVar6 = (long)(int)lVar2;
      lVar7 = lVar2 >> 0x20;
      goto LAB_104613680;
    }
    if ((uVar8 & 0xff000000000000) == 0) goto LAB_104613698;
  }
  else {
    if (uVar4 >> 0x1e != 2) goto LAB_104613698;
    lVar6 = *(long *)(lVar2 + 0x10);
    lVar7 = *(long *)(lVar2 + 0x18);
LAB_104613680:
    if (lVar6 == lVar7) goto LAB_104613698;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_a0,lVar2,uVar8);
LAB_104613698:
  FUN_104567140(lVar1,lVar2,uVar8,bVar3);
  param_2[5] = uStack_78;
  param_2[4] = uStack_80;
  param_2[7] = uStack_68;
  param_2[6] = uStack_70;
  param_2[8] = uStack_60;
  param_2[1] = uStack_98;
  *param_2 = uStack_a0;
  param_2[3] = uStack_88;
  param_2[2] = uStack_90;
  return;
}



/* Entry: 1046136e8; end: 104613703;  */

undefined1  [16] FUN_1046136e8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104613704; end: 1046137a7;  */

void FUN_104613704(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113089a00;
  func_0x0001000285a8(0x113089a00,&UNK_10dd1f690);
  _swift_initStaticObject();
  uRam0000000113814b40 = uVar1;
  return;
}



/* Entry: 1046137a8; end: 1046137bf;  */

void FUN_1046137a8(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 1046137c0; end: 1046137ff;  */

void FUN_1046137c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113089a00;
  func_0x0001000285a8(0x113089a00,&UNK_10dd1f690);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104613800; end: 10461381b;  */

void FUN_104613800(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10461381c; end: 104613847;  */

undefined1  [16] FUN_10461381c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 104613848; end: 10461387b;  */

void FUN_104613848(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10461387c; end: 104613897;  */

undefined8 FUN_10461387c(void)

{
  return 0x10461388c;
}



/* Entry: 104613898; end: 1046138bf;  */

void FUN_104613898(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1046138c0; end: 1046138db;  */

undefined1  [16] FUN_1046138c0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1046138d0;
  return auVar1;
}



/* Entry: 1046138dc; end: 104613903;  */

void FUN_1046138dc(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 104613904; end: 10461391f;  */

undefined1  [16] FUN_104613904(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x104613914;
  return auVar1;
}



/* Entry: 104613920; end: 104613947;  */

void FUN_104613920(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 104613948; end: 10461395b;  */

undefined1  [16] FUN_104613948(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x104613958;
  return auVar1;
}



/* Entry: 10461395c; end: 1046139b3;  */

undefined8 FUN_10461395c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  FUN_1045b3bdc();
  return uVar1;
}



/* Entry: 1046139b4; end: 1046139ff;  */

void FUN_1046139b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_1045b3c60(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_4;
  return;
}



/* Entry: 104613a00; end: 104613a8b;  */

undefined1  [16] FUN_104613a00(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  puVar6 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0x1e42);
  }
  *param_1 = puVar6;
  puVar6[4] = unaff_x20;
  bVar5 = *(long *)(unaff_x20 + 0x60) != 0;
  uVar1 = 0;
  if (bVar5) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  }
  lVar2 = -0x2000000000000000;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x60);
  }
  uVar3 = 0;
  if (bVar5) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  uVar4 = 0xc000000000000000;
  if (bVar5) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  }
  *puVar6 = uVar1;
  puVar6[1] = lVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  FUN_1045b3bdc();
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = FUN_104613a8c;
  return auVar7;
}



/* Entry: 104613a8c; end: 104613b4b;  */

void FUN_104613a8c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar4 = param_1[4];
  uVar9 = *param_1;
  uVar5 = param_1[1];
  uVar8 = param_1[2];
  uVar2 = *(undefined8 *)(lVar4 + 0x58);
  uVar6 = *(undefined8 *)(lVar4 + 0x60);
  uVar3 = *(undefined8 *)(lVar4 + 0x68);
  uVar7 = *(undefined8 *)(lVar4 + 0x70);
  if ((param_2 & 1) == 0) {
    FUN_1045b3c60(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x58) = uVar9;
    *(undefined8 *)(lVar4 + 0x60) = uVar5;
    *(undefined8 *)(lVar4 + 0x68) = uVar8;
    *(undefined8 *)(lVar4 + 0x70) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    func_0x00010006c00c(uVar8,uVar1);
    FUN_1045b3c60(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x58) = uVar9;
    *(undefined8 *)(lVar4 + 0x60) = uVar5;
    *(undefined8 *)(lVar4 + 0x68) = uVar8;
    *(undefined8 *)(lVar4 + 0x70) = uVar1;
    uVar1 = param_1[2];
    uVar9 = param_1[3];
    _swift_bridgeObjectRelease(param_1[1]);
    func_0x00010006c090(uVar1,uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104613b4c; end: 104613bef;  */

bool FUN_104613b4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_50 = uVar1;
  lStack_48 = lVar4;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    func_0x00010461b518(&uStack_50,auStack_70,0x1130877c0,&UNK_10dd19750);
  }
  else {
    func_0x00010461b518(&uStack_50,auStack_70,0x1130877c0,&UNK_10dd19750);
    FUN_1045b3c60(uVar1,lVar4,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_1045b3c60(uVar1,0,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 104613bf0; end: 104613c17;  */

void FUN_104613bf0(void)

{
  long unaff_x20;
  
  FUN_1045b3c60(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  return;
}



/* Entry: 104613c18; end: 104613c43;  */

undefined1  [16] FUN_104613c18(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x28);
  return auVar1;
}



/* Entry: 104613c44; end: 104613c6f;  */

undefined1  [16] FUN_104613c44(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 104613c70; end: 104613ca3;  */

void FUN_104613c70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 104613ca4; end: 104613cb7;  */

undefined1  [16] FUN_104613ca4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x104613cb4;
  return auVar1;
}



/* Entry: 104613cb8; end: 104613ce7;  */

undefined1  [16] FUN_104613cb8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 104613ce8; end: 104613d1b;  */

void FUN_104613ce8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 104613d1c; end: 104613deb;  */

undefined1  [16] FUN_104613d1c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x104613d2c;
  return auVar1;
}



/* Entry: 104613dec; end: 104613e17;  */

undefined1  [16] FUN_104613dec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 104613e18; end: 104613e4b;  */

void FUN_104613e18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 104613e4c; end: 104613e5f;  */

undefined1  [16] FUN_104613e4c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x104613e5c;
  return auVar1;
}



/* Entry: 104613e60; end: 104613e8b;  */

undefined1  [16] FUN_104613e60(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 104613e8c; end: 104613ebf;  */

void FUN_104613e8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 104613ec0; end: 104613f23;  */

undefined1  [16] FUN_104613ec0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x104613ed0;
  return auVar1;
}



/* Entry: 104613f24; end: 104613f4b;  */

void FUN_104613f24(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  return;
}



/* Entry: 104613f4c; end: 104613f5f;  */

undefined1  [16] FUN_104613f4c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x104613f5c;
  return auVar1;
}



/* Entry: 104613f60; end: 104613f8b;  */

undefined1  [16] FUN_104613f60(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 104613f8c; end: 104613fbf;  */

void FUN_104613f8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 104613fc0; end: 104613fd3;  */

undefined1  [16] FUN_104613fc0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x104613fd0;
  return auVar1;
}



/* Entry: 104613fd4; end: 104613fff;  */

undefined1  [16] FUN_104613fd4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 104614000; end: 104614033;  */

void FUN_104614000(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 104614034; end: 104614047;  */

undefined1  [16] FUN_104614034(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x104614044;
  return auVar1;
}



/* Entry: 104614048; end: 104614077;  */

undefined1  [16] FUN_104614048(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x70);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78));
  return auVar1;
}



/* Entry: 104614078; end: 1046140ab;  */

void FUN_104614078(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  return;
}



/* Entry: 1046140ac; end: 1046140d3;  */

undefined1  [16] FUN_1046140ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x70;
  auVar1._0_8_ = 0x1046140bc;
  return auVar1;
}



/* Entry: 1046140d4; end: 104614177;  */

void FUN_1046140d4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113089b68;
  func_0x0001000285a8(0x113089b68,&UNK_10dd1f6a0);
  _swift_initStaticObject();
  uRam0000000113814b48 = uVar1;
  return;
}



/* Entry: 104614178; end: 10461418f;  */

void FUN_104614178(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x10461994c)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 104614190; end: 1046141cf;  */

void FUN_104614190(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113089b68;
  func_0x0001000285a8(0x113089b68,&UNK_10dd1f6a0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1046141d0; end: 1046141db;  */

void FUN_1046141d0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10461994c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1046141dc; end: 104614253;  */

void FUN_1046141dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x00010461430c(uVar1,*(undefined1 *)(unaff_x20 + 1));
  *param_1 = uVar1;
  return;
}



/* Entry: 104614254; end: 10461425f;  */

void FUN_104614254(void)

{
  undefined8 *unaff_x20;
  
  __ss6HasherV8_combineyySuF(*unaff_x20,*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Entry: 104614260; end: 1046142a7;  */

void FUN_104614260(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_10460e2bc(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046142a8; end: 1046142fb;  */

bool FUN_1046142a8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x00010461430c(lVar2,(char)param_1[1]);
  func_0x00010461430c(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 1046142fc; end: 10461430f;  */

undefined1  [16] FUN_1046142fc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104614310; end: 1046143b3;  */

void FUN_104614310(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113089be0;
  func_0x0001000285a8(0x113089be0,&UNK_10dd1f6a8);
  _swift_initStaticObject();
  uRam0000000113814b50 = uVar1;
  return;
}



/* Entry: 1046143b4; end: 1046143bf;  */

void FUN_1046143b4(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_104619940();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1046143c0; end: 10461442f;  */

void FUN_1046143c0(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}


