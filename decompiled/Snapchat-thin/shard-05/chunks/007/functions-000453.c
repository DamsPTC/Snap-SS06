/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10400ff38; end: 10400ff5f;  */

void FUN_10400ff38(void)

{
  FUN_10400fd44();
  return;
}



/* Entry: 10400ff60; end: 10400ff63;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10400ff60(undefined8 *param_1,undefined8 param_2,long param_3)

{
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
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
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



/* Entry: 10400ff64; end: 10400ff9b;  */

uint FUN_10400ff64(long param_1,long param_2)

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
  FUN_1040111f0();
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



/* Entry: 10400ff9c; end: 10400ffe3;  */

uint FUN_10400ff9c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_104010320(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10400ffe4; end: 104010083;  */

void FUN_10400ffe4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046b58 != -1) {
    _swift_once(0x113046b58,0x10400fcfc);
  }
  uVar5 = uRam0000000113813050;
  uVar4 = uRam0000000113813048;
  uVar3 = uRam0000000113813040;
  uVar2 = uRam0000000113813038;
  uVar1 = uRam0000000113813030;
  *param_1 = uRam0000000113813028;
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



/* Entry: 104010084; end: 1040100bf;  */

void FUN_104010084(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046b98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046b98,&UNK_10dcc2698);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1040100c0; end: 1040101d3;  */

void FUN_1040100c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_a8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040101d4; end: 104010217;  */

uint FUN_1040101d4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_104010320(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104010218; end: 10401031f;  */

undefined8 FUN_104010218(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar8 = param_1[5];
  if ((uVar8 >> 0x3d & 1) == 0) {
    if ((*(byte *)((long)param_2 + 0x2f) >> 5 & 1) != 0) {
      return 0;
    }
    if (uVar3 != *param_2) {
      return 0;
    }
    if ((int)param_1[1] != (int)param_2[1]) {
      return 0;
    }
    func_0x000100e25fcc(uVar4,uVar5,param_2[2],param_2[3]);
  }
  else {
    uVar9 = param_2[5];
    if ((uVar9 >> 0x3d & 1) == 0) {
      return 0;
    }
    uVar6 = param_1[4];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    uVar7 = param_2[4];
    if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar3 & 1) == 0)) {
      return 0;
    }
    if (((uVar4 != uVar1) || (uVar5 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar5,uVar1,uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
    func_0x000100e25fcc(uVar6,uVar8 & 0xdfffffffffffffff,uVar7,uVar9 & 0xdfffffffffffffff);
    uVar4 = uVar6;
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 104010320; end: 10401039b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104010320(ulong *param_1,ulong *param_2)

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
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  undefined1 auVar44 [16];
  
  uVar13 = *param_1;
  if (((uVar13 != *param_2 || param_1[1] != param_2[1]) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) == 0)) ||
     ((uVar13 = param_1[2], uVar13 != param_2[2] || param_1[3] != param_2[3] &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) == 0)))) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar26 = (byte *)param_1[5];
  uVar13 = param_2[4];
  uVar17 = param_2[5];
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
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar13 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
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
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)(uVar13 >> 0x20);
      if (SBORROW4(iVar20,(int)uVar13)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)uVar13)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
        if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
          unaff_x24 = pbVar26;
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
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
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
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,uVar13,uVar17);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
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
    pbVar24 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar25,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar25,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar10 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
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
      )(pbVar12,pbVar15,pbVar16,pbVar18,0);
      return pbVar12;
    }
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar18)) &&
           (pbVar12 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
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
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar26;
        if ((pbVar10 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar3[1] = bVar29;
        auVar3[0] = bVar28;
        auVar3[2] = bVar30;
        auVar3[3] = bVar31;
        auVar3[4] = bVar32;
        auVar3[5] = bVar33;
        auVar3[6] = bVar34;
        auVar3[7] = bVar35;
        auVar3[8] = bVar36;
        auVar3[9] = bVar37;
        auVar3[10] = bVar38;
        auVar3[0xb] = bVar39;
        auVar3[0xc] = bVar40;
        auVar3[0xd] = bVar41;
        auVar3[0xe] = bVar42;
        auVar3[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar3,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
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
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar1[1] = bVar29;
      auVar1[0] = bVar28;
      auVar1[2] = bVar30;
      auVar1[3] = bVar31;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36;
      auVar1[9] = bVar37;
      auVar1[10] = bVar38;
      auVar1[0xb] = bVar39;
      auVar1[0xc] = bVar40;
      auVar1[0xd] = bVar41;
      auVar1[0xe] = bVar42;
      auVar1[0xf] = bVar43;
      auVar2[1] = bVar29;
      auVar2[0] = bVar28;
      auVar2[2] = bVar30;
      auVar2[3] = bVar31;
      auVar2[4] = bVar32;
      auVar2[5] = bVar33;
      auVar2[6] = bVar34;
      auVar2[7] = bVar35;
      auVar2[8] = bVar36;
      auVar2[9] = bVar37;
      auVar2[10] = bVar38;
      auVar2[0xb] = bVar39;
      auVar2[0xc] = bVar40;
      auVar2[0xd] = bVar41;
      auVar2[0xe] = bVar42;
      auVar2[0xf] = bVar43;
      auVar44 = NEON_ext(auVar1,auVar2,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    uVar13 = *(ulong *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar25 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar25,uVar11);
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



/* Entry: 10401039c; end: 1040106fb;  */

uint FUN_10401039c(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_160 [48];
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  if ((((*param_1 != *param_2) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) ||
     (((param_1[3] != param_2[3] || (param_1[4] != param_2[4])) ||
      ((param_1[5] != param_2[5] || (param_1[6] != param_2[6])))))) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 10);
  uVar3 = *(ulong *)(param_1 + 8);
  lVar13 = *(long *)(param_1 + 0xe);
  uVar11 = *(ulong *)(param_1 + 0xc);
  uVar8 = *(ulong *)(param_1 + 0x12);
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar9 = *(long *)(param_2 + 10);
  uVar5 = *(ulong *)(param_2 + 8);
  lVar14 = *(long *)(param_2 + 0xe);
  uVar12 = *(ulong *)(param_2 + 0xc);
  uVar10 = *(ulong *)(param_2 + 0x12);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uStack_d0 = uVar5;
  lStack_c8 = lVar9;
  uStack_c0 = uVar12;
  lStack_b8 = lVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar3;
  lStack_98 = lVar7;
  uStack_90 = uVar11;
  lStack_88 = lVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar10 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_10400efdc(&uStack_a0,&uStack_130);
      FUN_10400efdc(&uStack_d0,&uStack_130);
LAB_10401049c:
      FUN_10400f080(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
LAB_1040104b4:
      uVar6 = *(undefined8 *)(param_1 + 0x14);
      func_0x000100e25fcc(uVar6,*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(param_2 + 0x14),
                          *(undefined8 *)(param_2 + 0x16));
      uVar1 = (uint)uVar6;
      goto LAB_104010600;
    }
LAB_1040104d8:
    uStack_130 = uVar3;
    lStack_128 = lVar7;
    uStack_120 = uVar11;
    lStack_118 = lVar13;
    uStack_110 = uVar4;
    uStack_108 = uVar8;
    uStack_100 = uVar5;
    lStack_f8 = lVar9;
    uStack_f0 = uVar12;
    lStack_e8 = lVar14;
    uStack_e0 = uVar6;
    uStack_d8 = uVar10;
    FUN_10400efdc(&uStack_a0,auStack_160);
    FUN_10400efdc(&uStack_d0,auStack_160);
    FUN_104011270(&uStack_130);
  }
  else {
    if ((uVar10 & 0x3000000000000000) == 0x3000000000000000) goto LAB_1040104d8;
    if ((uVar8 >> 0x3d & 1) == 0) {
      if (((uVar10 >> 0x3d & 1) != 0) || (uVar3 != uVar5)) {
LAB_1040105b0:
        FUN_10400efdc(&uStack_a0,&uStack_130);
        FUN_10400efdc(&uStack_d0,&uStack_130);
LAB_1040105c8:
        FUN_10400f080(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
        goto LAB_1040105e4;
      }
      if ((int)lVar7 != (int)lVar9) {
        FUN_10400efdc(&uStack_a0,&uStack_130);
        FUN_10400efdc(&uStack_d0,&uStack_130);
        uVar5 = uVar3;
        goto LAB_1040105c8;
      }
      FUN_10400efdc(&uStack_a0,&uStack_130);
      FUN_10400efdc(&uStack_d0,&uStack_130);
      uVar5 = uVar11;
      func_0x000100e25fcc(uVar11,lVar13,uVar12,lVar14);
      FUN_10400f080(uVar3,lVar9,uVar12,lVar14,uVar6,uVar10);
      FUN_10400f080(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
      if ((uVar5 & 1) != 0) goto LAB_1040104b4;
    }
    else {
      if (((uVar10 >> 0x3d & 1) == 0) ||
         ((((uVar3 != uVar5 || (lVar7 != lVar9)) &&
           (uVar2 = uVar3,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar3,lVar7,uVar5,lVar9,0), (uVar2 & 1) == 0)) ||
          (((uVar11 != uVar12 || (lVar13 != lVar14)) &&
           (uVar2 = uVar11,
           __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                     (uVar11,lVar13,uVar12,lVar14,0), (uVar2 & 1) == 0)))))) goto LAB_1040105b0;
      FUN_10400efdc(&uStack_a0,&uStack_130);
      FUN_10400efdc(&uStack_d0,&uStack_130);
      uVar2 = uVar4;
      func_0x000100e25fcc(uVar4,uVar8 & 0xdfffffffffffffff,uVar6,uVar10 & 0xdfffffffffffffff);
      FUN_10400f080(uVar5,lVar9,uVar12,lVar14,uVar6,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_10401049c;
LAB_1040105e4:
      FUN_10400f080(uVar3,lVar7,uVar11,lVar13,uVar4,uVar8);
    }
  }
  uVar1 = 0;
LAB_104010600:
  return uVar1 & 1;
}



/* Entry: 1040106fc; end: 10401077b;  */

void FUN_1040106fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2500;
  _swift_getWitnessTable(&UNK_10dcc2500,&UNK_110734ef0);
  puRam0000000113046b50 = puVar1;
  return;
}



/* Entry: 10401077c; end: 10401079f;  */

void FUN_10401077c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1040107a0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1040107a0; end: 1040107df;  */

void FUN_1040107a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc24d8;
  _swift_getWitnessTable(&UNK_10dcc24d8,&UNK_110734ef0);
  puRam0000000113046b68 = puVar1;
  return;
}



/* Entry: 1040107e0; end: 1040107f3;  */

void FUN_1040107e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1040106fc();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1040107f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040107f4; end: 104010833;  */

void FUN_1040107f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc2490;
  _swift_getWitnessTable(&DAT_10dcc2490,&UNK_110734ef0);
  puRam0000000113046b70 = puVar1;
  return;
}



/* Entry: 104010834; end: 104010837;  */

void FUN_104010834(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2540;
  _swift_getWitnessTable(&UNK_10dcc2540,&UNK_110734ef0);
  puRam0000000113046b78 = puVar1;
  return;
}



/* Entry: 104010838; end: 104010877;  */

void FUN_104010838(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2540;
  _swift_getWitnessTable(&UNK_10dcc2540,&UNK_110734ef0);
  puRam0000000113046b78 = puVar1;
  return;
}



/* Entry: 104010878; end: 10401089b;  */

void FUN_104010878(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10401089c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10401089c; end: 1040108db;  */

void FUN_10401089c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc25b0;
  _swift_getWitnessTable(&UNK_10dcc25b0,&UNK_110735020);
  puRam0000000113046b80 = puVar1;
  return;
}



/* Entry: 1040108dc; end: 1040108ef;  */

void FUN_1040108dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10401073c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_104010920();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040108f0; end: 10401091f;  */

void FUN_1040108f0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104010920; end: 10401095f;  */

void FUN_104010920(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc2568;
  _swift_getWitnessTable(&DAT_10dcc2568,&UNK_110735020);
  puRam0000000113046b88 = puVar1;
  return;
}



/* Entry: 104010960; end: 104010963;  */

void FUN_104010960(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2618;
  _swift_getWitnessTable(&UNK_10dcc2618,&UNK_110735020);
  puRam0000000113046b90 = puVar1;
  return;
}



/* Entry: 104010964; end: 1040109a3;  */

void FUN_104010964(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc2618;
  _swift_getWitnessTable(&UNK_10dcc2618,&UNK_110735020);
  puRam0000000113046b90 = puVar1;
  return;
}



/* Entry: 1040109a4; end: 1040109e3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1040109a4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    FUN_10400f094(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40));
  }
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x58) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x58) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1040109e4; end: 104010c07;  */

undefined8 * FUN_1040109e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar2 = param_2[9];
  if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar4 = param_2[4];
    uVar6 = param_2[7];
    uVar5 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar6;
    param_1[6] = uVar5;
    uVar4 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
  }
  else {
    uVar4 = param_2[4];
    uVar6 = param_2[5];
    uVar5 = param_2[6];
    uVar1 = param_2[7];
    uVar3 = param_2[8];
    FUN_10400f02c(uVar4,uVar6,uVar5,uVar1,uVar3,uVar2);
    param_1[4] = uVar4;
    param_1[5] = uVar6;
    param_1[6] = uVar5;
    param_1[7] = uVar1;
    param_1[8] = uVar3;
    param_1[9] = uVar2;
  }
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  func_0x00010006c00c(uVar4,uVar5);
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  return param_1;
}



/* Entry: 104010c08; end: 104010cdf;  */

undefined8 * FUN_104010c08(undefined8 *param_1)

{
  FUN_10400f094(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return param_1;
}



/* Entry: 104010ce0; end: 104010dbf;  */

int FUN_104010ce0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x16) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104010dc0; end: 104010ea7;  */

undefined8 * FUN_104010dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  FUN_10400f02c(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}



/* Entry: 104010ea8; end: 104010eef;  */

undefined8 * FUN_104010ea8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  FUN_10400f094(uVar5,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 104010ef0; end: 104010fe7;  */

int FUN_104010ef0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104010fe8; end: 104011017;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104010fe8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 104011018; end: 1040110f7;  */

undefined8 * FUN_104011018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 1040110f8; end: 10401114b;  */

undefined8 * FUN_1040110f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10401114c; end: 1040111ef;  */

int FUN_10401114c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040111f0; end: 10401126f;  */

void FUN_1040111f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc2584;
  _swift_getWitnessTable(&DAT_10dcc2584,&UNK_110735020);
  puRam0000000113046ba0 = puVar1;
  return;
}



/* Entry: 104011270; end: 1040112b7;  */

undefined8 FUN_104011270(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x113046bb8;
  func_0x0001000285a8(0x113046bb8,&UNK_10dcc26b8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1040112b8; end: 1040112d3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1040112b8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1040112d4; end: 10401131f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1040112d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 104011320; end: 10401133b;  */

long FUN_104011320(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10401133c; end: 10401136b;  */

void FUN_10401133c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10401159c();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10401136c; end: 104011373;  */

undefined8 FUN_10401136c(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 104011374; end: 1040113e7;  */

void FUN_104011374(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113046c48;
  func_0x0001000285a8(0x113046c48,&UNK_10dcc2710);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 1040113e8; end: 1040113f3;  */

void FUN_1040113e8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1040113f4; end: 10401149f;  */

void FUN_1040113f4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040114a0; end: 1040114b3;  */

bool FUN_1040114a0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1040114b4; end: 1040114fb;  */

void FUN_1040114b4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc2880,0x4a,2);
  uRam0000000113813060 = uStack_38;
  uRam0000000113813058 = uStack_40;
  uRam0000000113813070 = uStack_28;
  uRam0000000113813068 = uStack_30;
  uRam0000000113813080 = uStack_18;
  uRam0000000113813078 = uStack_20;
  return;
}



/* Entry: 1040114fc; end: 10401159b;  */

void FUN_1040114fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046c50 != -1) {
    _swift_once(0x113046c50,FUN_1040114b4);
  }
  uVar5 = uRam0000000113813080;
  uVar4 = uRam0000000113813078;
  uVar3 = uRam0000000113813070;
  uVar2 = uRam0000000113813068;
  uVar1 = uRam0000000113813060;
  *param_1 = uRam0000000113813058;
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



/* Entry: 10401159c; end: 1040115a7;  */

void FUN_10401159c(void)

{
  return;
}



/* Entry: 1040115a8; end: 1040115d3;  */

void FUN_1040115a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1040115d4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000104011614();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040115d4; end: 104011653;  */

void FUN_1040115d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc27b0;
  _swift_getWitnessTable(&UNK_10dcc27b0,&UNK_110735198);
  puRam0000000113046c58 = puVar1;
  return;
}



/* Entry: 104011654; end: 104011657;  */

void FUN_104011654(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113046c68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113046c70;
  func_0x00010002969c(0x113046c70,&UNK_10dcc2738);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113046c68 = puVar2;
  return;
}



/* Entry: 104011658; end: 1040116a7;  */

void FUN_104011658(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113046c68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113046c70;
  func_0x00010002969c(0x113046c70,&UNK_10dcc2738);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113046c68 = puVar2;
  return;
}



/* Entry: 1040116a8; end: 1040116ab;  */

void FUN_1040116a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc27f0;
  _swift_getWitnessTable(&UNK_10dcc27f0,&UNK_110735198);
  puRam0000000113046c78 = puVar1;
  return;
}



/* Entry: 1040116ac; end: 1040116eb;  */

void FUN_1040116ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113046c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc27f0;
  _swift_getWitnessTable(&UNK_10dcc27f0,&UNK_110735198);
  puRam0000000113046c78 = puVar1;
  return;
}



/* Entry: 1040116ec; end: 10401178b;  */

int FUN_1040116ec(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10401178c; end: 1040117d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401178c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113046c80) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040117d8; end: 104011837; -[ComplianceRestrictedAppExperienceServices init] */

void FUN_1040117d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ComplianceRestrictedAppExperienceService.ComplianceRestrictedAppExperienceServices",
             0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104011804);
  (*pcVar1)();
}



/* Entry: 104011838; end: 104011847; -[ComplianceRestrictedAppExperienceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113046c80));
  return;
}



/* Entry: 104011848; end: 104011857; -[_TtC14TinselServices14TinselServices tinselConfigProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113046cb8));
  return;
}



/* Entry: 104011858; end: 1040118bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011858(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113046cb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113046cb8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040118bc; end: 1040118ef;  */

void FUN_1040118bc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040118f0; end: 104011927; -[_TtC14TinselServices14TinselServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040118f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113046cb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113046cb8));
  return;
}



/* Entry: 104011928; end: 104011b37;  */

void FUN_104011928(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 104011b38; end: 104011b63;  */

void FUN_104011b38(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_104014430();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 104011b64; end: 104011baf; -[SCTinselMedia mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011b64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113046ce8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113046ce8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104011bb0; end: 104011bbf; -[SCTinselMedia source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104011bb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113046cf0);
}



/* Entry: 104011bc0; end: 104011bcf; -[SCTinselMedia mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104011bc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113046cf8);
}



/* Entry: 104011bd0; end: 104011bdf; -[SCTinselMedia mediaReference] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113046d00));
  return;
}



/* Entry: 104011be0; end: 104011bef; -[SCTinselMedia mediaMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113046d08));
  return;
}



/* Entry: 104011bf0; end: 104011d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113046ce8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113046cf0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113046cf8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113046d00) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113046d08) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104011d48; end: 104011e0f; -[SCTinselMedia initWithMediaId:source:mediaType:mediaReference:mediaMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_113046ce8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113046cf0) = param_4;
  *(undefined8 *)(param_1 + _DAT_113046cf8) = param_5;
  *(undefined8 *)(param_1 + _DAT_113046d00) = param_6;
  *(undefined8 *)(param_1 + _DAT_113046d08) = param_7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 104011e10; end: 104011f13;  */

/* WARNING: Removing unreachable block (ram,0x000104011ebc) */

undefined1  [16] FUN_104011e10(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined1 auVar5 [16];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [72];
  
  lVar1 = 0;
  __s10Foundation11JSONEncoderC16OutputFormattingVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar2 = 0;
  __s10Foundation11JSONEncoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  __s10Foundation11JSONEncoderC16OutputFormattingV10sortedKeysAEvgZ
            (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation11JSONEncoderC16outputFormattingAC06OutputD0VvsTj
            (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_retain();
  FUN_104014440(auStack_78);
  FUN_1040146a0();
  puVar4 = &UNK_110735520;
  puVar3 = auStack_78;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(puVar3,&UNK_110735520,unaff_x20);
  FUN_1040146e0(auStack_78);
  _swift_release(uVar2);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 104011f14; end: 104011f1f; -[SCTinselMedia serialize] */

void FUN_104011f14(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104011e10();
  _objc_release(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104011f20; end: 1040121af;  */

/* WARNING: Removing unreachable block (ram,0x000104011fcc) */
/* WARNING: Removing unreachable block (ram,0x000104012038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104011f20(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  
  puVar5 = auStack_90;
  puVar4 = auStack_90;
  uVar10 = unaff_x20[2];
  if (6 < uVar10) {
    return;
  }
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    uVar6 = 0;
  }
  else {
    uVar6 = unaff_x20[3];
    if (uVar6 != 2) {
      uVar6 = (ulong)(uVar6 == 1);
    }
  }
  uVar7 = unaff_x20[6];
  if (uVar7 >> 0x3c < 0xf) {
    uVar8 = unaff_x20[5];
    FUN_104015d7c(0,0x112d7e120,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x00010006c00c(uVar8,uVar7);
    __sSo17NSKeyedUnarchiverC10FoundationE31unarchiveTopLevelObjectWithDatayypSgAC0I0VKFZ
              (auStack_80,uVar8,uVar7);
    func_0x0001000b44c0(uVar8,uVar7);
    if (lStack_68 == 0) {
      puVar5 = (undefined8 *)auStack_80;
      func_0x00010006e7f4();
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      FUN_104015d7c(0,0x112d512f8,&PTR_PTR_1126b25d8);
      _swift_dynamicCast(auStack_90,auStack_80,PTR___sypN_11034f1a8 + 8,uVar8,6);
      uVar8 = auStack_90[0];
      if ((int)puVar5 == 0) {
        uVar8 = 0;
      }
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
    uVar8 = 0;
  }
  uVar7 = unaff_x20[8];
  if (uVar7 >> 0x3c < 0xf) {
    uVar9 = unaff_x20[7];
    FUN_104015d7c(0,0x112d7e120,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
    func_0x00010006c00c(uVar9,uVar7);
    __sSo17NSKeyedUnarchiverC10FoundationE31unarchiveTopLevelObjectWithDatayypSgAC0I0VKFZ
              (auStack_80,uVar9,uVar7);
    func_0x0001000b44c0(uVar9,uVar7);
    if (lStack_68 != 0) {
      uVar9 = 0;
      FUN_104015d7c(0,0x112e2f0c8,&PTR_PTR_1126b25c8);
      _swift_dynamicCast(auStack_90,auStack_80,PTR___sypN_11034f1a8 + 8,uVar9,6);
      if ((int)puVar4 == 0) {
        auStack_90[0] = 0;
      }
      goto LAB_104012050;
    }
    puVar5 = (undefined8 *)auStack_80;
    func_0x00010006e7f4();
  }
  puVar4 = puVar5;
  auStack_90[0] = 0;
LAB_104012050:
  uVar9 = *unaff_x20;
  uVar1 = unaff_x20[1];
  FUN_10401523c();
  puVar3 = (undefined1 *)puVar4;
  _objc_allocWithZone();
  puVar2 = PTR_s_init_1125d9248;
  *(undefined8 *)(puVar3 + _DAT_113046ce8) = uVar9;
  *(undefined8 *)((long)(puVar3 + _DAT_113046ce8) + 8) = uVar1;
  *(ulong *)(puVar3 + _DAT_113046cf0) = uVar10;
  *(ulong *)(puVar3 + _DAT_113046cf8) = uVar6;
  *(undefined8 *)(puVar3 + _DAT_113046d00) = uVar8;
  *(undefined8 *)(puVar3 + _DAT_113046d08) = auStack_90[0];
  puStack_60 = puVar3;
  puStack_58 = (undefined1 *)puVar4;
  _swift_bridgeObjectRetain(uVar1);
  _objc_msgSendSuper2(&puStack_60,puVar2);
  return;
}



/* Entry: 1040121b0; end: 1040122c7; +[SCTinselMedia deserializeFrom:] */

/* WARNING: Removing unreachable block (ram,0x000104012240) */

void FUN_1040121b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  
  uVar1 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  _objc_release(uVar1);
  uVar2 = 0;
  __s10Foundation11JSONDecoderCMa();
  _swift_allocObject();
  __s10Foundation11JSONDecoderCACycfc();
  uVar1 = uVar2;
  FUN_10401470c();
  puVar3 = &UNK_110735520;
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
            (&uStack_d8,&UNK_110735520,param_3,param_2,&UNK_110735520,uVar1);
  uStack_68 = uStack_b0;
  uStack_70 = uStack_b8;
  uStack_58 = uStack_a0;
  uStack_60 = uStack_a8;
  uStack_50 = uStack_98;
  uStack_88 = uStack_d0;
  uStack_90 = uStack_d8;
  uStack_78 = uStack_c0;
  uStack_80 = uStack_c8;
  FUN_104011f20();
  func_0x00010006c090(param_3,param_2);
  FUN_1040146e0(&uStack_90);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1040122c8; end: 1040122f3; -[SCTinselMedia init] */

void FUN_1040122c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Tinsel.TinselMedia",0x12,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040122f4);
  (*pcVar1)();
}



/* Entry: 1040122f4; end: 10401233f; -[SCTinselMedia .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040122f4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113046ce8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113046d00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113046d08));
  return;
}



/* Entry: 104012340; end: 1040123e3;  */

undefined1  [16] FUN_104012340(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  uVar5 = 0xd000000000000011;
  pcVar6 = "mediaReferenceData";
  if (bVar3 == 3) {
    uVar5 = 0xd000000000000012;
    pcVar6 = "ernalContentMetadata";
  }
  uVar2 = 0xe900000000000065;
  uVar4 = 0x707954616964656d;
  if (bVar3 != 2) {
    uVar2 = (ulong)pcVar6 | 0x8000000000000000;
    uVar4 = uVar5;
  }
  uVar5 = 0x6449616964656d;
  if (bVar3 != 0) {
    uVar5 = 0x656372756f73;
  }
  uVar1 = 0xe700000000000000;
  if (bVar3 != 0) {
    uVar1 = 0xe600000000000000;
  }
  if (bVar3 < 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 1040123e4; end: 104012407;  */

void FUN_1040123e4(undefined1 *param_1,undefined1 param_2)

{
  FUN_104014764();
  *param_1 = param_2;
  return;
}



/* Entry: 104012408; end: 10401241f;  */

undefined1  [16] FUN_104012408(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104012420; end: 10401246f;  */

void FUN_104012420(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104015a14();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104012470; end: 10401268f;  */

/* WARNING: Removing unreachable block (ram,0x000104012610) */

void FUN_104012470(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [23];
  undefined1 uStack_81;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0x113046e50;
  func_0x0001000285a8(0x113046e50,&UNK_10dcc2c48);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_a0 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104015a14();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar5,&UNK_1107356d8,&UNK_1107356d8,param_1,uVar1,uVar2);
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(*unaff_x20,unaff_x20[1],&uStack_80,lVar3);
  if (unaff_x21 == 0) {
    uStack_80._0_1_ = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySi_xtKF(unaff_x20[2],&uStack_80,lVar3);
    uStack_80 = CONCAT71(uStack_80._1_7_,2);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (unaff_x20[3],*(undefined1 *)(unaff_x20 + 4),&uStack_80,lVar3);
    uStack_58 = unaff_x20[6];
    uStack_60 = unaff_x20[5];
    uStack_78 = unaff_x20[6];
    uStack_80 = unaff_x20[5];
    uStack_81 = 3;
    puVar4 = &uStack_60;
    func_0x00010105aabc(puVar4,auStack_98);
    func_0x000101480d6c();
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&uStack_80,&uStack_81,lVar3,PTR___s10Foundation4DataVN_110350ae0,puVar4);
    func_0x0001000b44c0(uStack_80,uStack_78);
    uStack_68 = unaff_x20[8];
    uStack_70 = unaff_x20[7];
    uStack_78 = unaff_x20[8];
    uStack_80 = unaff_x20[7];
    uStack_81 = 4;
    func_0x00010105aabc(&uStack_70,auStack_98);
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyyqd__Sg_xtKSERd__lF
              (&uStack_80,&uStack_81,lVar3,PTR___s10Foundation4DataVN_110350ae0,puVar4);
    func_0x0001000b44c0(uStack_80,uStack_78);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  return;
}



/* Entry: 104012690; end: 1040126df;  */

void FUN_104012690(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_104014920(&uStack_68);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = uStack_48;
    param_1[7] = uStack_30;
    param_1[6] = uStack_38;
    param_1[8] = uStack_28;
    param_1[1] = uStack_60;
    *param_1 = uStack_68;
    param_1[3] = uStack_50;
    param_1[2] = uStack_58;
  }
  return;
}



/* Entry: 1040126e0; end: 10401271f;  */

void FUN_1040126e0(void)

{
  FUN_104012470();
  return;
}



/* Entry: 104012720; end: 104012807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113046d20);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar2 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(param_2);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}



/* Entry: 104012808; end: 104012833; -[SCTinselDestination init] */

void FUN_104012808(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Tinsel.TinselDestination",0x18,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104012834);
  (*pcVar1)();
}



/* Entry: 104012834; end: 104012837;  */

void FUN_104012834(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104012838; end: 104012853; -[SCTinselDestination .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012838(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113046d20);
  if (*(char *)(puVar1 + 3) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(*puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar1[1],puVar1[1],puVar1[2]);
  return;
}



/* Entry: 104012854; end: 1040128d7;  */

void FUN_104012854(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040128d8; end: 1040128f3;  */

void FUN_1040128d8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1040128f4; end: 104012a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040128f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113046d28);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113046d30);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113046d38);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113046d40) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104012a4c; end: 104012b63; -[SCTinselMediaReference initWithContentObject:key:iv:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain();
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar5 = param_2;
  _objc_release(uVar3);
  uVar3 = param_4;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar6 = uVar5;
  _objc_release(param_4);
  uVar4 = param_5;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  _objc_release(param_5);
  puVar1 = (undefined8 *)(param_1 + _DAT_113046d28);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113046d30);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(param_1 + _DAT_113046d38);
  *puVar1 = uVar4;
  puVar1[1] = uVar6;
  *(undefined8 *)(param_1 + _DAT_113046d40) = param_6;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104012b64; end: 104012b6f; -[SCTinselMediaReference contentObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012b64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113046d28);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113046d28))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104012b70; end: 104012b7b; -[SCTinselMediaReference key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012b70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113046d30);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113046d30))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104012b7c; end: 104012b87; -[SCTinselMediaReference iv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012b7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113046d38);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113046d38))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104012b88; end: 104012b97; -[SCTinselMediaReference type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104012b88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113046d40);
}



/* Entry: 104012b98; end: 104012bc3; -[SCTinselMediaReference init] */

void FUN_104012b98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Tinsel.TinselMediaReference",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104012bc4);
  (*pcVar1)();
}



/* Entry: 104012bc4; end: 104012c17; -[SCTinselMediaReference .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000104012be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104012be8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104012bc4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_113046d28);
  uVar1 = ((ulong *)(param_1 + _DAT_113046d28))[1];
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}


