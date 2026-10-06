/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101675598; end: 1016755cb;  */

void FUN_101675598(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1016755cc; end: 1016755df;  */

undefined1  [16] FUN_1016755cc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1016755dc;
  return auVar1;
}



/* Entry: 1016755e0; end: 101675607;  */

void FUN_1016755e0(void)

{
  FUN_101675318();
  return;
}



/* Entry: 101675608; end: 10167560b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101675608(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10167560c; end: 101675643;  */

uint FUN_10167560c(long param_1,long param_2)

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
  FUN_1016764c8();
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



/* Entry: 101675644; end: 10167569b;  */

uint FUN_101675644(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_1016758ec(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10167569c; end: 10167573b;  */

/* WARNING: Possible PIC construction at 0x0001016756e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016756f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016756ec) */
/* WARNING: Removing unreachable block (ram,0x0001016756fc) */

void FUN_10167569c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbdf98 != -1) {
    func_0x000107c61568(0x112dbdf98,FUN_1016752d0);
  }
  uVar5 = uRam0000000113802c00;
  uVar4 = uRam0000000113802bf8;
  uVar3 = uRam0000000113802bf0;
  uVar2 = uRam0000000113802be8;
  uVar1 = uRam0000000113802be0;
  *param_1 = uRam0000000113802bd8;
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



/* Entry: 10167573c; end: 101675777;  */

void FUN_10167573c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbdfd0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbdfd0,&UNK_10d978fa0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101675778; end: 101675893;  */

void FUN_101675778(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = unaff_x20[1];
  uStack_68 = *unaff_x20;
  uStack_50 = unaff_x20[3];
  uStack_58 = unaff_x20[2];
  uStack_48 = unaff_x20[4];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101675894; end: 1016758eb;  */

uint FUN_101675894(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1016758ec(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1016758ec; end: 1016759df;  */

/* WARNING: Possible PIC construction at 0x000101675944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016759c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101675948) */
/* WARNING: Removing unreachable block (ram,0x0001016759c4) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1016758ec(long *param_1,long *param_2)

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
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
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
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  lVar26 = *(long *)(lVar19 + 0x10);
  if (lVar26 == *(long *)(lVar22 + 0x10)) {
    if (lVar26 != 0 && lVar19 != lVar22) {
      puVar28 = (undefined8 *)(lVar22 + 0x28);
      puVar29 = (undefined8 *)(lVar19 + 0x28);
      do {
        pbVar12 = (byte *)puVar29[-1];
        pbVar15 = (byte *)*puVar29;
        pbVar16 = (byte *)puVar28[-1];
        pbVar17 = (byte *)*puVar28;
        if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
        goto code_r0x000107c605b8;
        puVar28 = puVar28 + 2;
        puVar29 = puVar29 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    pbVar12 = (byte *)param_1[1];
    pbVar15 = (byte *)param_1[2];
    pbVar16 = (byte *)param_2[1];
    pbVar17 = (byte *)param_2[2];
    if ((byte *)param_1[1] != (byte *)param_2[1] || (byte *)param_1[2] != (byte *)param_2[2]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar17,0);
      return pbVar12;
    }
    uVar13 = param_1[3];
    if (((uVar13 == param_2[3]) && (param_1[4] == param_2[4])) ||
       (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
      pbVar10 = (byte *)param_1[5];
      pbVar27 = (byte *)param_1[6];
      lVar26 = param_2[5];
      uVar13 = param_2[6];
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
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
             ((uVar13 >> 0x3e < 3 || ((uVar21 = 0, lVar26 != 0 || (uVar13 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
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
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar26 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar26)) goto code_r0x000100e26094;
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
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
            if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
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
                pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
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
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar27;
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
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar26,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
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
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar30 = pbVar9[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar26 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar26,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar26 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar27;
            if ((pbVar10 == pbVar16) && (pbVar27 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar26 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar26);
                func_0x000107c61174();
                pbVar12 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar26);
                pbVar25 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar26 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar30 < 5) {
          if (bVar30 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar27, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
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
          lVar26 = *(long *)(pbVar14 + 0x20);
          if (pbVar27 == (byte *)0x0) {
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
            pbVar15 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar19 == lVar26)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar14 + 0x18),lVar26,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar30 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar14 + 0x20);
            lVar26 = *(long *)(pbVar14 + 0x18);
            bVar30 = pbVar14[8] | (byte)lVar26;
            bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
            bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
            bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
            bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
            bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
            bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
            bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
            bVar38 = pbVar14[0x10] | (byte)lVar19;
            bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
                                                                      CONCAT11(bVar31 | auVar46[1],
                                                                               bVar30 | auVar46[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar19 == 0)) {
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
          lVar19 = *(long *)(pbVar14 + 0x20);
          lVar26 = *(long *)(pbVar14 + 0x18);
          bVar30 = pbVar14[8] | (byte)lVar26;
          bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
          bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
          bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
          bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
          bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
          bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
          bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
          bVar38 = pbVar14[0x10] | (byte)lVar19;
          bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
          lVar26 = CONCAT17(bVar37 | auVar46[7],
                            CONCAT16(bVar36 | auVar46[6],
                                     CONCAT15(bVar35 | auVar46[5],
                                              CONCAT14(bVar34 | auVar46[4],
                                                       CONCAT13(bVar33 | auVar46[3],
                                                                CONCAT12(bVar32 | auVar46[2],
                                                                         CONCAT11(bVar31 | auVar46[1
                                                  ],bVar30 | auVar46[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar19 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
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



/* Entry: 1016759e0; end: 101675c0f;  */

uint FUN_1016759e0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
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
  undefined1 auStack_198 [56];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
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
  
  uVar9 = param_1[5];
  uVar5 = param_1[4];
  uVar15 = param_1[7];
  uVar13 = param_1[6];
  uVar10 = param_1[9];
  uVar6 = param_1[8];
  uVar4 = param_1[10];
  uVar11 = param_2[5];
  uVar7 = param_2[4];
  uVar16 = param_2[7];
  uVar14 = param_2[6];
  uVar12 = param_2[9];
  uVar8 = param_2[8];
  uVar3 = param_2[10];
  uStack_160 = uVar7;
  uStack_158 = uVar11;
  uStack_150 = uVar14;
  uStack_148 = uVar16;
  uStack_140 = uVar8;
  uStack_138 = uVar12;
  uStack_130 = uVar3;
  uStack_120 = uVar5;
  uStack_118 = uVar9;
  uStack_110 = uVar13;
  uStack_108 = uVar15;
  uStack_100 = uVar6;
  uStack_f8 = uVar10;
  uStack_f0 = uVar4;
  if (uVar5 == 0) {
    if (uVar7 != 0) goto LAB_101675b00;
    FUN_10167548c(&uStack_120,&uStack_a8);
    FUN_10167548c(&uStack_160,&uStack_a8);
    func_0x000101674bac(0,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
LAB_101675bbc:
    uVar3 = *param_1;
    if (((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      uVar3 = param_1[2];
      func_0x000100e25fcc(uVar3,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar3;
      goto LAB_101675bec;
    }
  }
  else if (uVar7 == 0) {
LAB_101675b00:
    FUN_10167548c(&uStack_120,&uStack_a8);
    FUN_10167548c(&uStack_160,&uStack_a8);
    func_0x000101674bac(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
    func_0x000101674bac(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar3);
  }
  else {
    uStack_e0 = uVar5;
    uStack_d8 = uVar9;
    uStack_d0 = uVar13;
    uStack_c8 = uVar15;
    uStack_c0 = uVar6;
    uStack_b8 = uVar10;
    uStack_b0 = uVar4;
    uStack_a8 = uVar7;
    uStack_a0 = uVar11;
    uStack_98 = uVar14;
    uStack_90 = uVar16;
    uStack_88 = uVar8;
    uStack_80 = uVar12;
    uStack_78 = uVar3;
    FUN_10167548c(&uStack_120,auStack_198);
    FUN_10167548c(&uStack_160,auStack_198);
    puVar2 = &uStack_e0;
    FUN_1016758ec(puVar2,&uStack_a8);
    func_0x000101674bac(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar3);
    func_0x000101674bac(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_101675bbc;
  }
  uVar1 = 0;
LAB_101675bec:
  return uVar1 & 1;
}



/* Entry: 101675c10; end: 101675c8f;  */

void FUN_101675c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdf88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978dd8;
  func_0x000107c61520(&UNK_10d978dd8,&UNK_1103f1880);
  puRam0000000112dbdf88 = puVar1;
  return;
}



/* Entry: 101675c90; end: 101675cb3;  */

void FUN_101675c90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101675cb4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101675cb4; end: 101675cf3;  */

void FUN_101675cb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdfa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978db0;
  func_0x000107c61520(&UNK_10d978db0,&UNK_1103f1880);
  puRam0000000112dbdfa8 = puVar1;
  return;
}



/* Entry: 101675cf4; end: 101675d0b;  */

void FUN_101675cf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101675c10();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016740d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101675d0c; end: 101675d4b;  */

void FUN_101675d0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdfb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978e18;
  func_0x000107c61520(&UNK_10d978e18,&UNK_1103f1880);
  puRam0000000112dbdfb0 = puVar1;
  return;
}



/* Entry: 101675d4c; end: 101675d6f;  */

void FUN_101675d4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101675d70();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101675d70; end: 101675daf;  */

void FUN_101675d70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdfb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978e88;
  func_0x000107c61520(&UNK_10d978e88,&UNK_1103f1908);
  puRam0000000112dbdfb8 = puVar1;
  return;
}



/* Entry: 101675db0; end: 101675dc3;  */

void FUN_101675db0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101675c50)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101675df4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101675dc4; end: 101675df3;  */

void FUN_101675dc4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101675df4; end: 101675e33;  */

void FUN_101675df4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d978e40;
  func_0x000107c61520(&DAT_10d978e40,&UNK_1103f1908);
  puRam0000000112dbdfc0 = puVar1;
  return;
}



/* Entry: 101675e34; end: 101675e37;  */

void FUN_101675e34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978ef0;
  func_0x000107c61520(&UNK_10d978ef0,&UNK_1103f1908);
  puRam0000000112dbdfc8 = puVar1;
  return;
}



/* Entry: 101675e38; end: 101675e77;  */

void FUN_101675e38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdfc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d978ef0;
  func_0x000107c61520(&UNK_10d978ef0,&UNK_1103f1908);
  puRam0000000112dbdfc8 = puVar1;
  return;
}



/* Entry: 101675e78; end: 101675ecf;  */

/* WARNING: Possible PIC construction at 0x000101675e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101675e98) */
/* WARNING: Removing unreachable block (ram,0x000101675ec4) */
/* WARNING: Removing unreachable block (ram,0x000101675ea0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101675e78(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 101675ed0; end: 10167610f;  */

undefined8 * FUN_101675ed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar4,uVar5);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar3 = param_2[4];
  if (lVar3 == 0) {
    lVar3 = param_2[4];
    uVar5 = param_2[7];
    uVar4 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar3;
    param_1[7] = uVar5;
    param_1[6] = uVar4;
    uVar4 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[10] = param_2[10];
  }
  else {
    uVar4 = param_2[5];
    uVar5 = param_2[6];
    param_1[4] = lVar3;
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    uVar1 = param_2[8];
    param_1[6] = uVar5;
    param_1[7] = uVar4;
    param_1[8] = uVar1;
    uVar4 = param_2[9];
    uVar2 = param_2[10];
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar1);
    func_0x00010006c00c(uVar4,uVar2);
    param_1[9] = uVar4;
    param_1[10] = uVar2;
  }
  return param_1;
}



/* Entry: 101676110; end: 1016761cb;  */

undefined8 * FUN_101676110(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  func_0x000107c6142c(uVar1);
  uVar5 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar5,uVar1);
  plVar2 = param_1 + 4;
  if (*plVar2 != 0) {
    if (param_2[4] != 0) {
      param_1[4] = param_2[4];
      func_0x000107c6142c();
      uVar5 = param_2[6];
      uVar1 = param_1[6];
      param_1[5] = param_2[5];
      param_1[6] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_2[8];
      uVar1 = param_1[8];
      param_1[7] = param_2[7];
      param_1[8] = uVar5;
      func_0x000107c6142c(uVar1);
      uVar5 = param_1[9];
      uVar1 = param_1[10];
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      func_0x00010006c090(uVar5,uVar1);
      return param_1;
    }
    func_0x0001015541f4(plVar2);
  }
  lVar4 = param_2[4];
  uVar1 = param_2[7];
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  *plVar2 = lVar4;
  param_1[7] = uVar1;
  param_1[6] = uVar5;
  uVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[10] = param_2[10];
  return param_1;
}



/* Entry: 1016761cc; end: 101676277;  */

int FUN_1016761cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101676278; end: 1016762af;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101676278(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[2]);
  func_0x000107c6142c(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = (uint)((ulong)param_1[6] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[6] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1016762b0; end: 10167631f;  */

undefined8 * FUN_1016762b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  uVar4 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar3,uVar4);
  param_1[5] = uVar3;
  param_1[6] = uVar4;
  return param_1;
}



/* Entry: 101676320; end: 1016763bf;  */

undefined8 * FUN_101676320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[1] = param_2[1];
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[3] = param_2[3];
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[5];
  uVar2 = param_2[6];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[5];
  uVar3 = param_1[6];
  param_1[5] = uVar4;
  param_1[6] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 1016763c0; end: 101676423;  */

undefined8 * FUN_1016763c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101676424; end: 1016764c7;  */

int FUN_101676424(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016764c8; end: 101676547;  */

void FUN_1016764c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbdfd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d978e5c;
  func_0x000107c61520(&DAT_10d978e5c,&UNK_1103f1908);
  puRam0000000112dbdfd8 = puVar1;
  return;
}



/* Entry: 101676548; end: 10167654f;  */

long FUN_101676548(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101676550; end: 1016766b3;  */

void FUN_101676550(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_48;
  
  func_0x000100083b20(&puStack_48);
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efb44c0);
  puVar3 = puStack_48;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c615e8(puStack_48);
  func_0x000107c61170();
  func_0x0001000ad7c4();
  lVar4 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar6 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar5 = lVar4;
    func_0x000107c3ebdc();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar6);
    if ((int)lVar5 != 0) {
      uVar6 = 0;
      FUN_10167c5e8(0);
      func_0x000107c610f8();
      func_0x000101676794(puVar3,lVar2,uVar6);
      puVar7 = puVar3;
      goto LAB_101676694;
    }
  }
  puVar7 = PTR_PTR_1126a7788;
  func_0x000107c610f8();
  func_0x000107c47dec();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016766b4);
    (*pcVar1)();
  }
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(puVar3);
LAB_101676694:
  *param_1 = puVar7;
  return;
}



/* Entry: 1016766b4; end: 1016766db;  */

void FUN_1016766b4(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_48;
  
  func_0x000100083b20(&puStack_48,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efb44c0);
  puVar3 = puStack_48;
  func_0x000107c4e60c();
  func_0x000107c61180();
  func_0x000107c615e8(puStack_48);
  func_0x000107c61170();
  func_0x0001000ad7c4();
  lVar4 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar6 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar5 = lVar4;
    func_0x000107c3ebdc();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar6);
    if ((int)lVar5 != 0) {
      uVar6 = 0;
      FUN_10167c5e8(0);
      func_0x000107c610f8();
      func_0x000101676794(puVar3,lVar2,uVar6);
      puVar7 = puVar3;
      goto LAB_101676694;
    }
  }
  puVar7 = PTR_PTR_1126a7788;
  func_0x000107c610f8();
  func_0x000107c47dec();
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016766b4);
    (*pcVar1)();
  }
  func_0x000107c61170(lVar2);
  func_0x000107c615e8(puVar3);
LAB_101676694:
  *param_1 = puVar7;
  return;
}



/* Entry: 1016766dc; end: 10167684b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016766dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dbe000) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe008) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112dbe010) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar1 = _DAT_112dbe018;
  FUN_10167c468();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe020) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe028) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dbe030) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10167684c; end: 101676b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167684c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112dbe000;
  if (param_2 != 0) {
    uVar3 = *(ulong *)(param_2 + _DAT_112dbe000);
    if ((uVar3 == 0) || (func_0x000107c49d04(), (uVar3 & 1) == 0)) {
      *(undefined8 *)(param_2 + _DAT_112dbe020) = param_4;
      lVar2 = _DAT_112dbe008;
      lVar10 = *(long *)(param_2 + _DAT_112dbe008);
      if ((lVar10 != 0) && (dVar11 = *(double *)(lVar10 + 0x48), dVar11 == 0.0)) {
        puVar4 = PTR_PTR_1126afec0;
        func_0x000107c61168(PTR_PTR_1126afec0);
        func_0x000107c6157c(lVar10);
        func_0x000107c41018(puVar4);
        *(double *)(lVar10 + 0x48) = dVar11;
        *(undefined8 *)(lVar10 + 0x60) = 0;
        *(undefined1 *)(lVar10 + 0x68) = 1;
        *(undefined8 *)(lVar10 + 0x50) = 0;
        *(undefined1 *)(lVar10 + 0x58) = 1;
        func_0x000107c61574(lVar10);
      }
      uVar5 = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_2 + lVar1) = param_3;
      func_0x000107c61170(uVar5);
      uVar5 = *(undefined8 *)(param_2 + _DAT_112dbe030);
      lVar10 = 0;
      func_0x00010167d76c();
      func_0x000107c613fc();
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(lVar10 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(lVar10 + 0x28) = puVar4;
      *(undefined **)(lVar10 + 0x30) = puVar4;
      *(undefined **)(lVar10 + 0x38) = puVar4;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      *(undefined8 *)(lVar10 + 0x50) = 0;
      *(undefined1 *)(lVar10 + 0x58) = 1;
      *(undefined8 *)(lVar10 + 0x60) = 0;
      *(undefined1 *)(lVar10 + 0x68) = 1;
      uVar12 = 0;
      *(undefined8 *)(lVar10 + 0x78) = 0;
      *(undefined8 *)(lVar10 + 0x70) = 0;
      *(undefined8 *)(lVar10 + 0x88) = 0;
      *(undefined8 *)(lVar10 + 0x80) = 0;
      puVar6 = PTR___swiftEmptySetSingleton_11034f1d8;
      *(undefined8 *)(lVar10 + 0x90) = 0;
      *(undefined **)(lVar10 + 0x98) = puVar6;
      *(undefined8 *)(lVar10 + 0xa8) = 0;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
      *(undefined8 *)(lVar10 + 0xa0) = 0;
      *(undefined1 *)(lVar10 + 0xb8) = 0;
      *(undefined **)(lVar10 + 0xc0) = puVar4;
      *(undefined1 *)(lVar10 + 200) = 0;
      *(undefined **)(lVar10 + 0xe8) = puVar6;
      *(undefined **)(lVar10 + 0xf0) = puVar4;
      *(undefined **)(lVar10 + 0xf8) = puVar4;
      *(undefined8 *)(lVar10 + 0x100) = 0;
      *(undefined8 *)(lVar10 + 0x108) = 0;
      func_0x000107c61174();
      func_0x000107c61174();
      puVar6 = puVar4;
      FUN_10167c8dc();
      *(undefined8 *)(lVar10 + 0x118) = 0;
      *(undefined8 *)(lVar10 + 0x120) = 0;
      *(undefined **)(lVar10 + 0x110) = puVar6;
      func_0x00010167ca68();
      *(undefined **)(lVar10 + 0x128) = puVar4;
      *(undefined8 *)(lVar10 + 0x10) = param_3;
      *(undefined8 *)(lVar10 + 0x18) = param_4;
      puVar4 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c61174(param_3);
      func_0x000107c41018(puVar4);
      *(undefined8 *)(lVar10 + 0x40) = uVar12;
      *(undefined8 *)(lVar10 + 0xd0) = param_5;
      *(undefined8 *)(lVar10 + 0xe0) = param_1;
      *(byte *)(lVar10 + 0xd8) = param_7 & 1;
      *(undefined8 *)(lVar10 + 0x130) = param_6;
      *(undefined8 *)(lVar10 + 0x138) = uVar5;
      uVar5 = *(undefined8 *)(param_2 + lVar2);
      *(long *)(param_2 + lVar2) = lVar10;
      func_0x000107c6157c(lVar10);
      func_0x000107c61574(uVar5);
      lVar1 = _DAT_112dbe010;
      func_0x000107c61428(param_2 + _DAT_112dbe010,auStack_a0,0x21,0);
      func_0x000107c6157c(lVar10);
      func_0x00010167a660();
      uVar8 = *(ulong *)(param_2 + lVar1);
      uVar9 = uVar8 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar9 + 0x10);
      uVar7 = uVar8;
      if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar3) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
        FUN_10167aa34(uVar7,uVar3 + 1,1,uVar8,0x10167d93c,0x10167d76c);
        uVar9 = uVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar9 + 0x10) = uVar3 + 1;
      *(long *)(uVar9 + uVar3 * 8 + 0x20) = lVar10;
      *(ulong *)(param_2 + lVar1) = uVar7;
      func_0x000107c614a8(auStack_a0);
      func_0x000107c61574(lVar10);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101676b04; end: 101676c1b; -[AdSessionsViewingHistory viewingSessionStart:viewLocation:captureLastNSnapCount:captureLastNStoriesCount:captureSnapInLastNSeconds:captureSnapsForStoryAdView:] */

/* WARNING: Possible PIC construction at 0x000101676bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101676bf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101676b04(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_112dbe028);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  puVar2 = &UNK_1103f1dd0;
  func_0x000107c613fc(&UNK_1103f1dd0,0x41,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_1;
  puVar2[0x40] = param_8;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x10167ccd8,puVar2,uVar3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101676c1c; end: 101676e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101676c1c(long param_1,uint param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + _DAT_112dbe008);
  if (lVar10 != 0) {
    func_0x000107c6157c(lVar10);
    FUN_10167d18c(param_2 & 1,param_5,param_6);
    func_0x000107c61574(lVar10);
  }
  lVar10 = _DAT_112dbe018;
  if (((param_2 & 1) == 0) || (param_4 == 0)) goto LAB_101676e04;
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) goto LAB_101676e04;
  puVar5 = auStack_80;
  func_0x000107c61428(param_1 + _DAT_112dbe018,puVar5,0x20,0);
  lVar7 = *(long *)(param_1 + lVar10);
  lVar8 = *(long *)(lVar7 + 0x10);
  func_0x000107c61434(param_4);
  if (lVar8 == 0) {
LAB_101676d40:
    func_0x000107c614a8(auStack_80);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar7);
    lVar8 = param_7;
    func_0x00010167d9e8();
    if (((ulong)puVar5 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_101676d40;
    }
    puVar9 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar8 * 8);
    func_0x000107c61434(puVar9);
    func_0x000107c614a8(auStack_80);
    func_0x000107c6142c(lVar7);
    func_0x000107c61434(puVar9);
  }
  uVar1 = param_3;
  func_0x000100077018(param_3,param_4,puVar9);
  func_0x000107c6142c(puVar9);
  if ((uVar1 & 1) == 0) {
    puVar2 = puVar9;
    func_0x000107c61558();
    puVar4 = puVar9;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar9 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      func_0x0001000d182c(puVar9,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(ulong *)(puVar9 + uVar1 * 0x10 + 0x20) = param_3;
    *(ulong *)(puVar9 + uVar1 * 0x10 + 0x28) = param_4;
  }
  else {
    func_0x000107c6142c(param_4);
  }
  func_0x000107c61428(param_1 + lVar10,auStack_80,0x21,0);
  func_0x000107c61434(puVar9);
  uVar3 = *(undefined8 *)(param_1 + lVar10);
  func_0x000107c61558(uVar3);
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  *(undefined8 *)(param_1 + lVar10) = 0x8000000000000000;
  FUN_10167aef4(puVar9,param_7,uVar3);
  *(undefined8 *)(param_1 + lVar10) = uVar6;
  func_0x000107c614a8(auStack_80);
  func_0x000107c6142c(puVar9);
LAB_101676e04:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101676e68; end: 101676fbf; -[AdSessionsViewingHistory didStartViewSnap:adIdentifier:serveItemId:adProductType:] */

/* WARNING: Possible PIC construction at 0x000101676f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101676f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101676e68(long param_1,undefined8 param_2,undefined1 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112dbe028);
  func_0x000107c614f0(uVar4);
  puVar2 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103f1da8;
  func_0x000107c613fc(&UNK_1103f1da8,0x48,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_3;
  *(long *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = uVar1;
  *(long *)(puVar3 + 0x30) = param_5;
  *(undefined8 *)(puVar3 + 0x38) = param_2;
  *(undefined8 *)(puVar3 + 0x40) = param_6;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(uVar1);
  func_0x00010090569c(0x10167ccd4,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 101676fc0; end: 101677047;  */

void FUN_101676fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101677048(param_2,param_3,param_4,param_5);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101677048; end: 10167729b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101677048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a0 = param_2;
  func_0x000107c5f7fc();
  lStack_a8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar10 = _DAT_112dbe018;
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  ppuVar4 = &puStack_90;
  func_0x000107c61428(unaff_x20 + _DAT_112dbe018,ppuVar4,0x20,0);
  lVar10 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar10 + 0x10) != 0) {
    func_0x000107c61434(lVar10);
    func_0x00010167d9e8();
    if (((ulong)ppuVar4 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + param_1 * 8);
      func_0x000107c61434(lVar6);
      func_0x000107c614a8(&puStack_90);
      func_0x000107c6142c(lVar10);
      uVar11 = *(undefined8 *)(lVar6 + 0x10);
      func_0x000107c6142c(lVar6);
      goto LAB_101677170;
    }
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c614a8(&puStack_90);
  uVar11 = 0;
LAB_101677170:
  puVar3 = &UNK_1103f1e48;
  func_0x000107c613fc(&UNK_1103f1e48,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = uVar11;
  uStack_70 = 0x10167cbf8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103f1e60;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(param_4);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar11 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar5 = uVar11;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar8,&puStack_98,uVar11,uVar5,lVar1,param_4);
  func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lStack_a8 + 8))(puVar8,lVar1);
  (**(code **)(lVar7 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 10167729c; end: 1016773cf; -[AdSessionsViewingHistory adViewedCountForProductType:completionQueue:completionBlock:] */

/* WARNING: Possible PIC construction at 0x000101677398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016773a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010167739c) */
/* WARNING: Removing unreachable block (ram,0x0001016773ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167729c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103f1d58;
  func_0x000107c613fc(&UNK_1103f1d58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112dbe028);
  func_0x000107c614f0(uVar4);
  puVar2 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1103f1d80;
  func_0x000107c613fc(&UNK_1103f1d80,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = 0x10167ccbc;
  *(undefined **)(puVar3 + 0x30) = puVar1;
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x10167ccd0,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1016773d0; end: 101677ff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016773d0(undefined8 param_1,double param_2,double param_3,undefined8 param_4,long param_5,
                  uint param_6,undefined8 param_7,undefined8 param_8,ulong param_9,ulong param_10,
                  ulong param_11,ulong param_12,byte param_13,undefined4 param_14,double param_15,
                  undefined8 param_16,long param_17,undefined8 param_18,undefined8 param_19,
                  undefined8 param_20,undefined8 param_21,undefined8 param_22,undefined8 param_23,
                  undefined8 param_24,byte param_25)

{
  uint uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long extraout_x8;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 auStack_2f0 [8];
  byte abStack_2b0 [8];
  undefined8 uStack_2a8;
  byte abStack_2a0 [16];
  undefined1 auStack_290 [8];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  double dStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  ulong uStack_210;
  uint uStack_204;
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined8 auStack_1e8 [3];
  undefined1 auStack_1d0 [24];
  long lStack_1b8;
  ulong uStack_1b0;
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
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined8 uStack_117;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  double dStack_b0;
  
  lVar7 = 0;
  uStack_210 = param_12;
  uStack_204 = param_6;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar14 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_5 + 0x10,auStack_1d0,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 == 0) {
    return;
  }
  lStack_240 = *(long *)(param_5 + _DAT_112dbe008);
  uStack_220 = param_7;
  if (lStack_240 == 0) {
    func_0x000107c61170();
    return;
  }
  uStack_258 = param_9;
  uStack_250 = param_10;
  uStack_248 = param_8;
  uStack_228 = param_11;
  func_0x000107c6157c(lStack_240);
  func_0x000107c61170(param_5);
  puVar8 = PTR_PTR_1126afec0;
  func_0x000107c61168();
  dVar20 = param_2;
  puStack_218 = puVar8;
  func_0x000107c51b38();
  lStack_1b8 = 0;
  uStack_1b0 = 0xe000000000000000;
  uStack_230 = param_16;
  uVar10 = 0x296c6c756e28;
  if (param_17 != 0) {
    uVar10 = param_16;
  }
  lVar2 = -0x1a00000000000000;
  if (param_17 != 0) {
    lVar2 = param_17;
  }
  dVar23 = dVar20;
  func_0x000107c61434(param_17);
  func_0x000107c5fb78(uVar10,lVar2);
  func_0x000107c6142c(lVar2);
  uStack_238 = param_18;
  uStack_108 = param_18;
  puVar8 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar8);
  uVar11 = uStack_1b0;
  lVar2 = lStack_1b8;
  func_0x000107c5eea0(auStack_290 + lVar14);
  func_0x000107c5ee8c();
  puVar8 = puStack_218;
  (**(code **)(lVar18 + 8))(auStack_290 + lVar14,lVar7);
  uVar10 = param_1;
  func_0x000107c51b38(puVar8);
  lVar7 = lStack_240;
  dStack_b0 = dVar23 * 1000.0;
  if ((uStack_204 & 1) == 0) {
    func_0x000107c61428(lStack_240 + 0x20,&lStack_1b8,0x21,0);
    uVar16 = *(ulong *)(lVar7 + 0x20);
    uVar12 = uVar16;
    func_0x000107c61558();
    *(ulong *)(lVar7 + 0x20) = uVar16;
    uVar17 = uVar16;
    if ((uVar12 & 1) == 0) {
      uVar17 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
      *(ulong *)(lVar7 + 0x20) = uVar17;
    }
    uVar12 = *(ulong *)(uVar17 + 0x10);
    uVar16 = uVar17;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar12) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      func_0x0001014dd0d8(uVar16,uVar12 + 1,1,uVar17);
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + 1;
    *(undefined8 *)(uVar16 + uVar12 * 8 + 0x20) = uVar10;
    *(ulong *)(lVar7 + 0x20) = uVar16;
    func_0x000107c614a8(&lStack_1b8);
    func_0x000107c61428(lVar7 + 0x28,&lStack_1b8,0x21,0);
    uVar16 = *(ulong *)(lVar7 + 0x28);
    uVar12 = uVar16;
    func_0x000107c61558();
    *(ulong *)(lVar7 + 0x28) = uVar16;
    uVar17 = uVar16;
    if ((uVar12 & 1) == 0) {
      uVar17 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
      *(ulong *)(lVar7 + 0x28) = uVar17;
    }
    uVar12 = *(ulong *)(uVar17 + 0x10);
    uVar16 = uVar17;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar12) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      func_0x0001014dd0d8(uVar16,uVar12 + 1,1,uVar17);
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + 1;
    *(double *)(uVar16 + uVar12 * 8 + 0x20) = dVar20;
    *(ulong *)(lVar7 + 0x28) = uVar16;
    func_0x000107c614a8(&lStack_1b8);
    func_0x000107c61428(lVar7 + 0x110,&lStack_1b8,0x20,0);
    lVar18 = *(long *)(lVar7 + 0x110);
    if (*(long *)(lVar18 + 0x10) != 0) {
      func_0x000107c61434(lVar18);
      lVar9 = lVar2;
      uVar12 = uVar11;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
        lVar13 = *(long *)(lVar18 + 0x38) + lVar9 * 0x60;
        fVar25 = *(float *)(lVar13 + 0x38);
        fVar22 = *(float *)(lVar13 + 0x3c);
        fVar24 = *(float *)(lVar13 + 0x40);
        fVar26 = *(float *)(lVar13 + 0x44);
        uVar12 = *(ulong *)(lVar13 + 0x48);
        lVar9 = *(long *)(lVar13 + 0x50);
        dVar23 = *(double *)(lVar13 + 0x58);
        dStack_260 = dVar20;
        func_0x000107c614a8(&lStack_1b8);
        func_0x000107c6142c(lVar18);
        if ((uStack_228 & 1) == 0) {
          fVar19 = 0.0;
        }
        else {
          bVar6 = SCARRY8(uVar12,1);
          uVar12 = uVar12 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101677ff4);
            (*pcVar5)();
          }
          fVar19 = 1.0;
        }
        uStack_d8 = lVar9 + (uStack_210 & 1);
        if (SCARRY8(lVar9,uStack_210 & 1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101677fec);
          (*pcVar5)();
        }
        uStack_108 = uStack_230;
        lStack_100 = param_17;
        uStack_f8 = uStack_238;
        uStack_f0 = CONCAT44((float)(param_2 + (double)fVar22),fVar25 + 1.0);
        uStack_e8 = CONCAT44((float)(param_3 + (double)fVar26),fVar24 + fVar19);
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e0 = uVar12;
        dStack_b0 = dVar23;
        func_0x000107c61428(lVar7 + 0x110,&lStack_1b8,0x21,0);
        func_0x000107c61434(param_17);
        uVar10 = *(undefined8 *)(lVar7 + 0x110);
        func_0x000107c61558(uVar10);
        auStack_1e8[0] = *(undefined8 *)(lVar7 + 0x110);
        *(undefined8 *)(lVar7 + 0x110) = 0x8000000000000000;
        goto LAB_101677b7c;
      }
      func_0x000107c6142c(lVar18);
    }
    func_0x000107c614a8(&lStack_1b8);
    uStack_d8 = uStack_210 & 1;
    uStack_108 = uStack_230;
    lStack_100 = param_17;
    uStack_e0 = uStack_228 & 1;
    uVar4 = 0x3f800000;
    if ((uStack_228 & 1) == 0) {
      uVar4 = 0;
    }
    uStack_f8 = uStack_238;
    uStack_f0 = CONCAT44((float)param_2,0x3f800000);
    uStack_e8 = CONCAT44((float)param_3,uVar4);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x000107c61428(lVar7 + 0x110,&lStack_1b8,0x21,0);
    func_0x000107c61434(param_17);
    uVar10 = *(undefined8 *)(lVar7 + 0x110);
    func_0x000107c61558(uVar10);
    auStack_1e8[0] = *(undefined8 *)(lVar7 + 0x110);
    *(undefined8 *)(lVar7 + 0x110) = 0x8000000000000000;
  }
  else {
    func_0x000107c51b38(puVar8);
    lVar7 = lStack_240;
    func_0x000107c61428(lStack_240 + 0x30,&lStack_1b8,0x21,0);
    uVar16 = *(ulong *)(lVar7 + 0x30);
    uVar12 = uVar16;
    func_0x000107c61558();
    *(ulong *)(lVar7 + 0x30) = uVar16;
    uVar17 = uVar16;
    if ((uVar12 & 1) == 0) {
      uVar17 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
      *(ulong *)(lVar7 + 0x30) = uVar17;
    }
    uVar21 = uStack_248;
    uVar12 = *(ulong *)(uVar17 + 0x10);
    uVar16 = uVar17;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar12) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      func_0x0001014dd0d8(uVar16,uVar12 + 1,1,uVar17);
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + 1;
    *(undefined8 *)(uVar16 + uVar12 * 8 + 0x20) = uVar10;
    *(ulong *)(lVar7 + 0x30) = uVar16;
    func_0x000107c614a8(&lStack_1b8);
    func_0x000107c61428(lVar7 + 0x38,&lStack_1b8,0x21,0);
    uVar16 = *(ulong *)(lVar7 + 0x38);
    uVar12 = uVar16;
    func_0x000107c61558();
    *(ulong *)(lVar7 + 0x38) = uVar16;
    uVar17 = uVar16;
    if ((uVar12 & 1) == 0) {
      uVar17 = 0;
      func_0x0001014dd0d8(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
      *(ulong *)(lVar7 + 0x38) = uVar17;
    }
    uVar12 = *(ulong *)(uVar17 + 0x10);
    uVar16 = uVar17;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar12) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      func_0x0001014dd0d8(uVar16,uVar12 + 1,1,uVar17);
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + 1;
    *(double *)(uVar16 + uVar12 * 8 + 0x20) = dVar20;
    *(ulong *)(lVar7 + 0x38) = uVar16;
    func_0x000107c614a8(&lStack_1b8);
    uVar3 = *(undefined1 *)(lVar7 + 200);
    func_0x000107c61428(lVar7 + 0xc0,&lStack_1b8,0x21,0);
    uVar16 = *(ulong *)(lVar7 + 0xc0);
    func_0x000107c61434(uVar21);
    uVar12 = uVar16;
    func_0x000107c61558();
    *(ulong *)(lVar7 + 0xc0) = uVar16;
    uVar17 = uVar16;
    if ((uVar12 & 1) == 0) {
      uVar17 = 0;
      func_0x00010167a800(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
      *(ulong *)(lVar7 + 0xc0) = uVar17;
    }
    uVar12 = *(ulong *)(uVar17 + 0x10);
    uVar16 = uVar17;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar12) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      func_0x00010167a800(uVar16,uVar12 + 1,1,uVar17);
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + 1;
    lVar18 = uVar16 + uVar12 * 0x28;
    *(undefined8 *)(lVar18 + 0x20) = uStack_220;
    *(undefined8 *)(lVar18 + 0x28) = uVar21;
    *(undefined8 *)(lVar18 + 0x30) = param_4;
    *(undefined8 *)(lVar18 + 0x38) = uVar10;
    *(undefined1 *)(lVar18 + 0x40) = uVar3;
    *(ulong *)(lVar7 + 0xc0) = uVar16;
    func_0x000107c614a8(&lStack_1b8);
    *(undefined1 *)(lVar7 + 200) = 0;
    func_0x000107c61428(lVar7 + 0x110,&lStack_1b8,0x20,0);
    lVar18 = *(long *)(lVar7 + 0x110);
    if (*(long *)(lVar18 + 0x10) != 0) {
      func_0x000107c61434(lVar18);
      lVar9 = lVar2;
      uVar12 = uVar11;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
        lVar13 = *(long *)(lVar18 + 0x38) + lVar9 * 0x60;
        fVar24 = *(float *)(lVar13 + 0x38);
        fVar22 = *(float *)(lVar13 + 0x3c);
        fVar25 = *(float *)(lVar13 + 0x40);
        fVar26 = *(float *)(lVar13 + 0x44);
        uVar12 = *(ulong *)(lVar13 + 0x48);
        lVar9 = *(long *)(lVar13 + 0x50);
        dVar23 = *(double *)(lVar13 + 0x58);
        dStack_260 = dVar20;
        func_0x000107c614a8(&lStack_1b8);
        func_0x000107c6142c(lVar18);
        if ((uStack_228 & 1) == 0) {
          fVar19 = 0.0;
        }
        else {
          bVar6 = SCARRY8(uVar12,1);
          uVar12 = uVar12 + 1;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101677ff0);
            (*pcVar5)();
          }
          fVar19 = 1.0;
        }
        uStack_b8 = lVar9 + (uStack_210 & 1);
        if (SCARRY8(lVar9,uStack_210 & 1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101677fe8);
          (*pcVar5)();
        }
        uStack_108 = uStack_230;
        lStack_100 = param_17;
        uStack_f8 = uStack_238;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_d0 = CONCAT44((float)(param_2 + (double)fVar22),fVar24 + 1.0);
        uStack_c8 = CONCAT44((float)(param_3 + (double)fVar26),fVar25 + fVar19);
        uStack_c0 = uVar12;
        dStack_b0 = dVar23;
        func_0x000107c61428(lVar7 + 0x110,&lStack_1b8,0x21,0);
        func_0x000107c61434(param_17);
        uVar10 = *(undefined8 *)(lVar7 + 0x110);
        func_0x000107c61558(uVar10);
        auStack_1e8[0] = *(undefined8 *)(lVar7 + 0x110);
        *(undefined8 *)(lVar7 + 0x110) = 0x8000000000000000;
LAB_101677b7c:
        FUN_10167b024(&uStack_108,lVar2,uVar11,uVar10);
        func_0x000107c6142c(uVar11);
        *(undefined8 *)(lVar7 + 0x110) = auStack_1e8[0];
        func_0x000107c614a8(&lStack_1b8);
        dVar20 = dStack_260;
        goto LAB_101677ba0;
      }
      func_0x000107c6142c(lVar18);
    }
    func_0x000107c614a8(&lStack_1b8);
    uStack_c0 = uStack_228 & 1;
    uStack_108 = uStack_230;
    lStack_100 = param_17;
    uVar4 = 0x3f800000;
    if ((uStack_228 & 1) == 0) {
      uVar4 = 0;
    }
    uStack_b8 = uStack_210 & 1;
    uStack_f8 = uStack_238;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = CONCAT44((float)param_2,0x3f800000);
    uStack_c8 = CONCAT44((float)param_3,uVar4);
    func_0x000107c61428(lVar7 + 0x110,&lStack_1b8,0x21,0);
    func_0x000107c61434(param_17);
    uVar10 = *(undefined8 *)(lVar7 + 0x110);
    func_0x000107c61558(uVar10);
    auStack_1e8[0] = *(undefined8 *)(lVar7 + 0x110);
    *(undefined8 *)(lVar7 + 0x110) = 0x8000000000000000;
  }
  FUN_10167b024(&uStack_108,lVar2,uVar11,uVar10);
  func_0x000107c6142c(uVar11);
  *(undefined8 *)(lVar7 + 0x110) = auStack_1e8[0];
  func_0x000107c614a8(&lStack_1b8);
LAB_101677ba0:
  puVar8 = puStack_218;
  uVar12 = uStack_250;
  uVar11 = uStack_258;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(undefined1 *)(lVar7 + 0x68) = 1;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined1 *)(lVar7 + 0x58) = 1;
  if (0 < *(long *)(lVar7 + 0xd0)) {
    lStack_240 = param_17;
    uVar17 = uStack_258 & 0xffffffffffff;
    if ((uStack_250 & 0x2000000000000000) != 0) {
      uVar17 = uStack_250 >> 0x38 & 0xf;
    }
    if (uVar17 != 0) {
      uStack_268 = param_23;
      uStack_270 = param_22;
      uStack_278 = param_21;
      uStack_280 = param_20;
      uStack_288 = param_19;
      dStack_260 = param_15;
      func_0x000107c61428(lVar7 + 0xe8,auStack_1e8,0,0);
      uVar10 = *(undefined8 *)(lVar7 + 0xe8);
      func_0x000107c61434(uVar10);
      uVar17 = uVar11;
      func_0x0001000f66f0(uVar11,uVar12,uVar10);
      func_0x000107c6142c(uVar10);
      if ((uVar17 & 1) == 0) {
        func_0x000107c61428(lVar7 + 0xe8,&lStack_1b8,0x21,0);
        func_0x000107c61434(uVar12);
        func_0x000100403b00(auStack_200,uVar11,uVar12);
        func_0x000107c614a8(&lStack_1b8);
        func_0x000107c6142c(uStack_1f8);
      }
      func_0x000107c51b38(param_1,puVar8);
      func_0x000107c51b38(param_3,puVar8);
      uVar21 = *(undefined8 *)(lVar7 + 0x100);
      abStack_2a0[lVar14] = param_25 & 1;
      *(undefined8 *)((long)&uStack_2a8 + lVar14) = param_24;
      abStack_2b0[lVar14 + 1] = param_13 & 1;
      abStack_2b0[lVar14] = (byte)uStack_210 & 1;
      uVar10 = uStack_248;
      *(undefined8 *)((long)auStack_2f0 + lVar14 + 0x38) = uStack_248;
      *(undefined8 *)((long)auStack_2f0 + lVar14 + 0x30) = uStack_220;
      uVar1 = uStack_204 & 1;
      uVar15 = (uint)uStack_228;
      *(undefined8 *)((long)auStack_2f0 + lVar14 + 0x28) = uStack_268;
      *(undefined8 *)((long)auStack_2f0 + lVar14 + 0x20) = uStack_270;
      *(undefined8 *)((long)auStack_2f0 + lVar14 + 0x18) = uStack_278;
      *(undefined8 *)((long)auStack_2f0 + lVar14 + 0x10) = uStack_280;
      *(undefined8 *)((long)auStack_2f0 + lVar14 + 8) = uStack_288;
      *(undefined8 *)((long)auStack_2f0 + lVar14) = uStack_238;
      lVar14 = lStack_240;
      func_0x0001041fbe80(&lStack_1b8,param_1,dVar20,param_3,uVar21,uVar11,uVar12,uVar1,dStack_260,
                          ((uint)uVar17 ^ 0xffffffff) & 1,uVar15 & 1,uStack_230,lStack_240);
      func_0x000107c61428(lVar7 + 0xf0,auStack_200,0x21,0);
      uVar17 = *(ulong *)(lVar7 + 0xf0);
      func_0x000107c61434(lVar14);
      func_0x000107c61434(uVar10);
      func_0x000107c61434(uVar12);
      uVar11 = uVar17;
      func_0x000107c61558();
      *(ulong *)(lVar7 + 0xf0) = uVar17;
      uVar12 = uVar17;
      if ((uVar11 & 1) == 0) {
        uVar12 = 0;
        FUN_10167a6e0(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
        *(ulong *)(lVar7 + 0xf0) = uVar12;
      }
      uVar11 = *(ulong *)(uVar12 + 0x10);
      uVar17 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar11) {
        uVar17 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_10167a6e0(uVar17,uVar11 + 1,1,uVar12);
      }
      *(ulong *)(uVar17 + 0x10) = uVar11 + 1;
      lVar14 = uVar17 + uVar11 * 0xb0;
      *(undefined8 *)(lVar14 + 0x38) = uStack_1a0;
      *(undefined8 *)(lVar14 + 0x30) = uStack_1a8;
      *(undefined8 *)(lVar14 + 0x48) = uStack_190;
      *(undefined8 *)(lVar14 + 0x40) = uStack_198;
      *(ulong *)(lVar14 + 0x28) = uStack_1b0;
      *(long *)(lVar14 + 0x20) = lStack_1b8;
      *(undefined8 *)(lVar14 + 0x78) = uStack_160;
      *(undefined8 *)(lVar14 + 0x70) = uStack_168;
      *(undefined8 *)(lVar14 + 0x88) = uStack_150;
      *(undefined8 *)(lVar14 + 0x80) = uStack_158;
      *(undefined8 *)(lVar14 + 0x58) = uStack_180;
      *(undefined8 *)(lVar14 + 0x50) = uStack_188;
      *(undefined8 *)(lVar14 + 0x68) = uStack_170;
      *(undefined8 *)(lVar14 + 0x60) = uStack_178;
      *(undefined8 *)(lVar14 + 0xc1) = uStack_117;
      *(ulong *)(lVar14 + 0xb9) = CONCAT17(uStack_118,uStack_11f);
      *(undefined8 *)(lVar14 + 0xa8) = uStack_130;
      *(undefined8 *)(lVar14 + 0xa0) = uStack_138;
      *(ulong *)(lVar14 + 0xb8) = CONCAT71(uStack_11f,uStack_120);
      *(undefined8 *)(lVar14 + 0xb0) = uStack_128;
      *(undefined8 *)(lVar14 + 0x98) = uStack_140;
      *(undefined8 *)(lVar14 + 0x90) = uStack_148;
      *(ulong *)(lVar7 + 0xf0) = uVar17;
      func_0x000107c614a8(auStack_200);
    }
  }
  func_0x000107c61574(lVar7);
  return;
}



/* Entry: 101677ff4; end: 101678217; -[AdSessionsViewingHistory snapViewed:topSnapViewTimeInSec:bottomSnapViewTimeInSec:loadingSpinnerTimeInSec:isAd:exitMethod:snapId:wasSwiped:isHammerTap:wasLiked:mediaType:inventoryType:inventorySubtype:adType:preferredAttachmentType:actualAttachmentType:adAttachmentTriggerType:tapAttachmentSource:storyType:storyReplied:] */

/* WARNING: Possible PIC construction at 0x0001016781e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016781e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101677ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined1 param_12,
                  undefined8 param_13,long param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined1 param_22)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c5faec();
  uVar3 = param_6;
  func_0x000107c5faec();
  if (param_14 == 0) {
    param_14 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec();
  }
  uVar5 = *(undefined8 *)(param_5 + _DAT_112dbe028);
  func_0x000107c614f0();
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_5);
  puVar2 = &UNK_1103f1d30;
  func_0x000107c613fc(&UNK_1103f1d30,0xb9,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  puVar2[0x38] = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  *(undefined8 *)(puVar2 + 0x48) = param_6;
  *(undefined8 *)(puVar2 + 0x50) = param_9;
  *(undefined8 *)(puVar2 + 0x58) = uVar3;
  puVar2[0x60] = param_10;
  puVar2[0x61] = param_11;
  puVar2[0x62] = param_12;
  *(undefined8 *)(puVar2 + 0x68) = param_13;
  *(long *)(puVar2 + 0x70) = param_14;
  *(undefined8 *)(puVar2 + 0x78) = uVar4;
  *(undefined8 *)(puVar2 + 0x80) = param_15;
  *(undefined8 *)(puVar2 + 0x88) = param_16;
  *(undefined8 *)(puVar2 + 0x90) = param_17;
  *(undefined8 *)(puVar2 + 0x98) = param_18;
  *(undefined8 *)(puVar2 + 0xa0) = param_19;
  *(undefined8 *)(puVar2 + 0xa8) = param_20;
  *(undefined8 *)(puVar2 + 0xb0) = param_21;
  puVar2[0xb8] = param_22;
  func_0x000107c61434(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_6);
  func_0x000107c61434(uVar3);
  func_0x00010090569c(0x10167cccc,puVar2,uVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
  return;
}



/* Entry: 101678218; end: 1016783b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101678218(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + _DAT_112dbe008);
    if (lVar4 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c6157c(lVar4);
      func_0x000107c61170(param_2);
      uVar6 = *(undefined8 *)(lVar4 + 0x108);
      func_0x000107c61428(lVar4 + 0xf8,auStack_a0,0x21,0);
      uVar5 = *(ulong *)(lVar4 + 0xf8);
      func_0x000107c61434(param_4);
      func_0x000107c61434(param_7);
      uVar1 = uVar5;
      func_0x000107c61558();
      *(ulong *)(lVar4 + 0xf8) = uVar5;
      uVar2 = uVar5;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
        func_0x00010167a918(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
        *(ulong *)(lVar4 + 0xf8) = uVar2;
      }
      uVar1 = *(ulong *)(uVar2 + 0x10);
      uVar5 = uVar2;
      if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
        func_0x00010167a918(uVar5,uVar1 + 1,1,uVar2);
      }
      *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
      lVar3 = uVar5 + uVar1 * 0x50;
      *(undefined8 *)(lVar3 + 0x20) = param_3;
      *(undefined8 *)(lVar3 + 0x28) = param_4;
      *(undefined8 *)(lVar3 + 0x30) = param_5;
      *(undefined8 *)(lVar3 + 0x38) = param_1;
      *(undefined8 *)(lVar3 + 0x40) = param_6;
      *(undefined8 *)(lVar3 + 0x48) = param_7;
      *(undefined8 *)(lVar3 + 0x50) = uVar6;
      *(byte *)(lVar3 + 0x58) = param_8 & 1;
      *(undefined8 *)(lVar3 + 0x60) = param_9;
      *(undefined8 *)(lVar3 + 0x68) = param_10;
      *(ulong *)(lVar4 + 0xf8) = uVar5;
      func_0x000107c614a8(auStack_a0);
      func_0x000107c61574(lVar4);
    }
  }
  return;
}



/* Entry: 1016783b8; end: 10167850b; -[AdSessionsViewingHistory storyViewed:storyViewTimeInMs:storyType:exitMethod:isAd:contentTopsnapViewCount:adTopsnapViewCount:] */

/* WARNING: Possible PIC construction at 0x0001016784e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016784e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016783b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5faec();
  uVar3 = param_3;
  func_0x000107c5faec();
  uVar4 = *(undefined8 *)(param_2 + _DAT_112dbe028);
  func_0x000107c614f0(uVar4);
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  puVar2 = &UNK_1103f1d08;
  func_0x000107c613fc(&UNK_1103f1d08,0x60,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = uVar3;
  puVar2[0x48] = param_7;
  *(undefined8 *)(puVar2 + 0x50) = param_8;
  *(undefined8 *)(puVar2 + 0x58) = param_9;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_3);
  func_0x000107c61434(uVar3);
  func_0x00010090569c(0x10167ccc8,puVar2,uVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10167850c; end: 1016785c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167850c(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112dbe008);
    if (lVar2 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c6157c(lVar2);
      func_0x000107c61170(param_1);
      if ((param_2 & 1) == 0) {
        if (SCARRY8(*(long *)(lVar2 + 0x78),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016785c8);
          (*pcVar1)();
        }
        *(long *)(lVar2 + 0x78) = *(long *)(lVar2 + 0x78) + 1;
      }
      else {
        if (SCARRY8(*(long *)(lVar2 + 0x70),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016785c4);
          (*pcVar1)();
        }
        *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x70) + 1;
        *(undefined1 *)(lVar2 + 200) = 1;
      }
      func_0x000107c61574(lVar2);
    }
  }
  return;
}



/* Entry: 1016785c8; end: 101678693; -[AdSessionsViewingHistory attachmentOpened:] */

/* WARNING: Possible PIC construction at 0x000101678670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101678674) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016785c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112dbe028);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1103f1ce0;
  func_0x000107c613fc(&UNK_1103f1ce0,0x19,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x10167ccc4,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101678694; end: 101678757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101678694(double param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112dbe008);
    if (lVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c6157c(lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c51b38();
      if ((param_3 & 1) == 0) {
        *(double *)(lVar1 + 0x80) = param_1 + *(double *)(lVar1 + 0x80);
      }
      else {
        *(double *)(lVar1 + 0x88) = param_1 + *(double *)(lVar1 + 0x88);
      }
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 101678758; end: 101678833; -[AdSessionsViewingHistory attachmentViewed:isAd:] */

/* WARNING: Possible PIC construction at 0x00010167880c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101678810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101678758(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_112dbe028);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  puVar2 = &UNK_1103f1cb8;
  func_0x000107c613fc(&UNK_1103f1cb8,0x21,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar2[0x20] = param_4;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x10167cce4,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101678834; end: 1016788c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101678834(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112dbe008);
    if (lVar1 != 0) {
      func_0x000107c6157c(lVar1);
      func_0x000107c61170(param_1);
      param_1 = *(long *)(lVar1 + 0xa0);
      *(undefined8 *)(lVar1 + 0xa0) = param_2;
      func_0x000107c61174(param_2);
      func_0x000107c61574(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1016788c8; end: 1016789a3; -[AdSessionsViewingHistory availableStoriesCount:] */

/* WARNING: Possible PIC construction at 0x000101678980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101678984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016788c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_112dbe028);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1103f1c90;
  func_0x000107c613fc(&UNK_1103f1c90,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(0x10167ccc0,puVar2,uVar3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016789a4; end: 101678a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016789a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112dbe008);
    if (lVar1 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c6157c(lVar1);
      func_0x000107c61170(param_1);
      FUN_10167cce8(param_2,param_3);
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 101678a3c; end: 101678a4f; -[AdSessionsViewingHistory currentGroupChanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101678a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_1103f1c68;
  func_0x000107c5faec();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112dbe028);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c613fc(&UNK_1103f1c68,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(0x10167cce0,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101678a50; end: 101678bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101678a50(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = param_3;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000056;
  func_0x000100029b28(0xd000000000000056,0x800000010efb4500);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dbe028);
  func_0x000107c614f0(uVar2);
  puVar4 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1103f1b78;
  func_0x000107c613fc(&UNK_1103f1b78,0x60,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined8 **)(puVar5 + 0x20) = param_3;
  *(undefined8 *)(puVar5 + 0x28) = param_4;
  puVar5[0x30] = param_5;
  *(undefined8 *)(puVar5 + 0x38) = param_1;
  *(undefined8 *)(puVar5 + 0x40) = param_2;
  *(undefined8 *)(puVar5 + 0x48) = param_6;
  *(undefined8 *)(puVar5 + 0x50) = param_7;
  *(undefined8 *)(puVar5 + 0x58) = param_8;
  func_0x000107c6157c(puVar4);
  func_0x000107c61174(param_6);
  func_0x000107c6157c(param_8);
  func_0x00010090569c(0x10167c598,puVar5,uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101678bb4; end: 101679943;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000101679548 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_101678bb4(undefined8 param_1,long param_2,ulong param_3,ulong param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  long lVar19;
  double *pdVar20;
  ulong uVar21;
  ulong uVar22;
  unkbyte9 *pVar23;
  long lVar24;
  double *pdVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  undefined **ppuVar34;
  undefined1 in_b0;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 in_register_00005001;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 in_register_00005002;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 in_register_00005003;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 in_register_00005004;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 in_register_00005005;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 in_register_00005006;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 in_register_00005007;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  undefined8 auStack_730 [2];
  undefined1 auStack_720 [8];
  long alStack_718 [7];
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  undefined8 *puStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  long lStack_690;
  undefined8 uStack_688;
  undefined8 *puStack_680;
  long lStack_670;
  ulong uStack_668;
  ulong uStack_660;
  uint uStack_654;
  ulong uStack_650;
  long lStack_648;
  undefined8 uStack_640;
  long lStack_638;
  uint uStack_62c;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  ulong uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_5e0;
  undefined8 uStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  ulong uStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  long lStack_5a8;
  ulong uStack_5a0;
  undefined1 auStack_598 [24];
  undefined *puStack_580;
  undefined8 uStack_578;
  undefined *puStack_570;
  undefined *puStack_568;
  undefined8 uStack_560;
  undefined *puStack_558;
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined *puStack_340;
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [48];
  undefined1 auStack_2a8 [336];
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  double dStack_128;
  undefined1 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  
  lVar9 = 0;
  uStack_6c8 = param_8;
  uStack_6a0 = param_6;
  uStack_688 = param_7;
  func_0x000107c5f7fc();
  lStack_698 = *(long *)(lVar9 + -8);
  lStack_690 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_698 + 0x40));
  lVar9 = (long)&uStack_6e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)0x0;
  lStack_6a8 = lVar9;
  func_0x000107c5f824();
  lStack_6b8 = puVar10[-1];
  puStack_6b0 = puVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_6b8 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_6c0 = lVar9;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar11 = *puVar10;
  func_0x000107c61174(uVar11);
  func_0x000100069b5c(param_1);
  func_0x000107c61170(uVar11);
  func_0x000107c61428(param_2 + 0x10,auStack_2d8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61428(puVar10,auStack_2f0,0,0);
    uVar11 = *puVar10;
    func_0x000107c61174(uVar11);
    uVar12 = 0xd00000000000004b;
    func_0x000100029b28(0xd00000000000004b,0x800000010efb45c0);
    uStack_6d0 = uVar12;
    func_0x000107c61170(uVar11);
    func_0x000107c61428(puVar10,auStack_308,0,0);
    uVar12 = *puVar10;
    puStack_680 = puVar10;
    func_0x000107c61174(uVar12);
    uVar11 = 0xd000000000000058;
    func_0x0001000a9a18(0xd000000000000058,0x800000010efb4610);
    func_0x000107c61170(uVar12);
    lVar19 = _DAT_112dbe010;
    func_0x000107c61428(param_2 + _DAT_112dbe010,auStack_320,0,0);
    lStack_648 = lVar19;
    uVar18 = *(ulong *)(param_2 + lVar19);
    uStack_6d8 = uVar11;
    if (uVar18 >> 0x3e == 0) {
      uVar32 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar32 = uVar18 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar18) {
        uVar32 = uVar18;
      }
      func_0x000107c60480();
      if ((long)uVar32 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10167993c);
        (*pcVar7)();
      }
    }
    puVar10 = puStack_680;
    if (uVar32 <= param_3) {
      param_3 = uVar32;
    }
    if (param_3 == 0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      func_0x000107c61428(puStack_680,auStack_358,0,0);
      uVar12 = *puVar10;
      func_0x000107c61174(uVar12);
      uVar11 = 0xd00000000000005f;
      func_0x0001000a9a18(0xd00000000000005f,0x800000010efb4670);
      uStack_6e0 = uVar11;
      func_0x000107c61170(uVar12);
      param_3 = uVar32 - param_3;
      uStack_650 = uVar32 - 1;
      uVar11 = 0;
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lStack_670 = param_2;
      uStack_668 = uVar32;
      uStack_660 = param_4;
      uStack_654 = param_5;
      do {
        lVar19 = lStack_648;
        func_0x000107c61428(param_2 + lStack_648,&puStack_580,0x20,0);
        uVar18 = *(ulong *)(param_2 + lVar19);
        if ((uVar18 & 0xc000000000000001) == 0) {
          if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1016798f8);
            (*pcVar7)();
          }
          if (*(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10) <= param_3) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101679900);
            (*pcVar7)();
          }
          uVar18 = *(ulong *)(uVar18 + param_3 * 8 + 0x20);
          func_0x000107c6157c(uVar18);
        }
        else {
          uVar18 = param_3;
          func_0x00010167a328();
        }
        func_0x000107c614a8(&puStack_580);
        func_0x000107c61428(uVar18 + 0x30,auStack_370,0,0);
        lVar19 = *(long *)(uVar18 + 0x30);
        uVar32 = *(ulong *)(lVar19 + 0x10);
        if (uVar32 == 0) {
          dVar85 = 0.0;
        }
        else {
          if (uVar32 < 4) {
            uVar22 = 0;
            dVar85 = 0.0;
          }
          else {
            uVar22 = uVar32 & 0x7ffffffffffffffc;
            pVar23 = (unkbyte9 *)(lVar19 + 0x30);
            dVar85 = 0.0;
            uVar21 = uVar22;
            do {
              uVar12 = *(undefined8 *)((long)pVar23 + -8);
              uVar28 = *(undefined8 *)((long)pVar23 + 8);
              auVar1[9] = (char)((ulong)uVar12 >> 8);
              auVar1._0_9_ = pVar23[-1];
              auVar1[10] = (char)((ulong)uVar12 >> 0x10);
              auVar1[0xb] = (char)((ulong)uVar12 >> 0x18);
              auVar1[0xc] = (char)((ulong)uVar12 >> 0x20);
              auVar1[0xd] = (char)((ulong)uVar12 >> 0x28);
              auVar1[0xe] = (char)((ulong)uVar12 >> 0x30);
              auVar1[0xf] = (char)((ulong)uVar12 >> 0x38);
              fVar2 = (float)(double)pVar23[-1];
              fVar3 = (float)auVar1._8_8_;
              auVar4[9] = (char)((ulong)uVar28 >> 8);
              auVar4._0_9_ = *pVar23;
              auVar4[10] = (char)((ulong)uVar28 >> 0x10);
              auVar4[0xb] = (char)((ulong)uVar28 >> 0x18);
              auVar4[0xc] = (char)((ulong)uVar28 >> 0x20);
              auVar4[0xd] = (char)((ulong)uVar28 >> 0x28);
              auVar4[0xe] = (char)((ulong)uVar28 >> 0x30);
              auVar4[0xf] = (char)((ulong)uVar28 >> 0x38);
              fVar5 = (float)(double)*pVar23;
              fVar6 = (float)auVar4._8_8_;
              dVar85 = dVar85 + (double)fVar2 +
                       (double)(float)(CONCAT17((char)((uint)fVar3 >> 0x18),
                                                CONCAT16((char)((uint)fVar3 >> 0x10),
                                                         CONCAT15((char)((uint)fVar3 >> 8),
                                                                  CONCAT14(SUB41(fVar3,0),fVar2))))
                                      >> 0x20) + (double)fVar5;
              in_b0 = SUB81(dVar85,0);
              in_register_00005001 = (undefined1)((ulong)dVar85 >> 8);
              in_register_00005002 = (undefined1)((ulong)dVar85 >> 0x10);
              in_register_00005003 = (undefined1)((ulong)dVar85 >> 0x18);
              in_register_00005004 = (undefined1)((ulong)dVar85 >> 0x20);
              in_register_00005005 = (undefined1)((ulong)dVar85 >> 0x28);
              in_register_00005006 = (undefined1)((ulong)dVar85 >> 0x30);
              in_register_00005007 = (undefined1)((ulong)dVar85 >> 0x38);
              dVar85 = dVar85 + (double)(float)(CONCAT17((char)((uint)fVar6 >> 0x18),
                                                         CONCAT16((char)((uint)fVar6 >> 0x10),
                                                                  CONCAT15((char)((uint)fVar6 >> 8),
                                                                           CONCAT14(SUB41(fVar6,0),
                                                                                    fVar5)))) >>
                                               0x20);
              pVar23 = pVar23 + 2;
              uVar21 = uVar21 - 4;
            } while (uVar21 != 0);
            if (uVar32 == uVar22) goto LAB_101678f34;
          }
          lVar24 = uVar32 - uVar22;
          pdVar20 = (double *)(lVar19 + uVar22 * 8 + 0x20);
          do {
            dVar83 = (double)(float)*pdVar20;
            in_b0 = SUB81(dVar83,0);
            in_register_00005001 = (undefined1)((ulong)dVar83 >> 8);
            in_register_00005002 = (undefined1)((ulong)dVar83 >> 0x10);
            in_register_00005003 = (undefined1)((ulong)dVar83 >> 0x18);
            in_register_00005004 = (undefined1)((ulong)dVar83 >> 0x20);
            in_register_00005005 = (undefined1)((ulong)dVar83 >> 0x28);
            in_register_00005006 = (undefined1)((ulong)dVar83 >> 0x30);
            in_register_00005007 = (undefined1)((ulong)dVar83 >> 0x38);
            dVar85 = dVar85 + dVar83;
            lVar24 = lVar24 + -1;
            pdVar20 = pdVar20 + 1;
          } while (lVar24 != 0);
        }
LAB_101678f34:
        if (*(char *)(uVar18 + 0x58) != '\x01') {
          dVar83 = *(double *)(uVar18 + 0x50);
          func_0x000107c61168(PTR_PTR_1126afec0);
          func_0x000107c41018();
          dVar85 = dVar85 + ((double)CONCAT17(in_register_00005007,
                                              CONCAT16(in_register_00005006,
                                                       CONCAT15(in_register_00005005,
                                                                CONCAT14(in_register_00005004,
                                                                         CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                             ) - dVar83);
          uVar32 = uVar32 + 1;
        }
        func_0x000107c61428(uVar18 + 0x20,auStack_388,0,0);
        lVar24 = *(long *)(*(long *)(uVar18 + 0x20) + 0x10);
        lVar19 = uVar32 + lVar24;
        if (SCARRY8(uVar32,lVar24)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1016798fc);
          (*pcVar7)();
        }
        if ((*(char *)(uVar18 + 0x68) != '\x01') &&
           (bVar8 = SCARRY8(lVar19,1), lVar19 = lVar19 + 1, bVar8)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10167990c);
          (*pcVar7)();
        }
        if (*(double *)(uVar18 + 0x48) <= 0.0) {
          func_0x000107c61168(PTR_PTR_1126afec0);
          func_0x000107c41018();
        }
        uVar12 = *(undefined8 *)(uVar18 + 0x40);
        func_0x000107c61428(uVar18 + 0xc0,auStack_3a0,0,0);
        puVar13 = *(undefined **)(uVar18 + 0xc0);
        uVar22 = *(ulong *)(puVar13 + 0x10);
        uVar21 = param_4;
        if (uVar22 <= param_4) {
          uVar21 = uVar22;
        }
        lStack_5a8 = lVar19;
        uStack_5a0 = uVar32;
        if (uVar21 == 0) {
          puStack_5b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else if (param_4 < uVar22) {
          puVar16 = puVar13;
          func_0x000107c61434();
          func_0x00010167bfb4();
          func_0x000107c6142c(puVar13);
          puStack_5b0 = puVar16;
        }
        else {
          puStack_5b0 = puVar13;
          func_0x000107c61434();
        }
        func_0x000107c61428(uVar18 + 0x28,auStack_3b8,0,0);
        dVar83 = 0.0;
        uVar35 = 0xcd;
        uVar37 = 0xcc;
        uVar39 = 0xcc;
        uVar41 = 0xcc;
        uVar43 = 0xcc;
        uVar45 = 0xcc;
        uVar47 = 0xec;
        uVar49 = 0x3f;
        if ((param_5 & 1) == 0) {
          lVar19 = 0;
          uStack_120 = 1;
          dVar86 = 0.0;
          dVar84 = 0.0;
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          uVar58 = 0;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          uVar68 = 0;
          uVar70 = 0;
          uVar72 = 0;
          uVar74 = 0;
          uVar76 = 0;
          uVar78 = 0;
          uVar80 = 0;
          uVar82 = 0;
          uVar67 = 0;
          uVar69 = 0;
          uVar71 = 0;
          uVar73 = 0;
          uVar75 = 0;
          uVar77 = 0;
          uVar79 = 0;
          uVar81 = 0;
        }
        else {
          lVar24 = *(long *)(uVar18 + 0x28);
          if (*(long *)(lVar24 + 0x10) == 0) {
            dVar84 = 0.0;
            dVar86 = 0.0;
          }
          else {
            dVar84 = *(double *)(lVar24 + 0x20);
            lVar19 = *(long *)(lVar24 + 0x10) + -1;
            dVar86 = dVar84;
            if (lVar19 != 0) {
              pdVar20 = (double *)(lVar24 + 0x28);
              uVar51 = SUB81(dVar84,0);
              uVar53 = (undefined1)((ulong)dVar84 >> 8);
              uVar55 = (undefined1)((ulong)dVar84 >> 0x10);
              uVar57 = (undefined1)((ulong)dVar84 >> 0x18);
              uVar59 = (undefined1)((ulong)dVar84 >> 0x20);
              uVar61 = (undefined1)((ulong)dVar84 >> 0x28);
              uVar63 = (undefined1)((ulong)dVar84 >> 0x30);
              uVar65 = (undefined1)((ulong)dVar84 >> 0x38);
              pdVar25 = pdVar20;
              lVar30 = lVar19;
              uVar52 = uVar51;
              uVar54 = uVar53;
              uVar56 = uVar55;
              uVar58 = uVar57;
              uVar60 = uVar59;
              uVar62 = uVar61;
              uVar64 = uVar63;
              uVar66 = uVar65;
              do {
                dVar87 = *pdVar25;
                bVar8 = false;
                if (!NAN(dVar87) &&
                    !NAN((double)CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar62,CONCAT14(uVar60,
                                                  CONCAT13(uVar58,CONCAT12(uVar56,CONCAT11(uVar54,
                                                  uVar52))))))))) {
                  bVar8 = dVar87 < (double)CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar62,CONCAT14(
                                                  uVar60,CONCAT13(uVar58,CONCAT12(uVar56,CONCAT11(
                                                  uVar54,uVar52)))))));
                }
                uVar68 = SUB81(dVar87,0);
                uVar70 = (char)((ulong)dVar87 >> 8);
                uVar72 = (char)((ulong)dVar87 >> 0x10);
                uVar74 = (char)((ulong)dVar87 >> 0x18);
                uVar76 = (char)((ulong)dVar87 >> 0x20);
                uVar78 = (char)((ulong)dVar87 >> 0x28);
                uVar80 = (char)((ulong)dVar87 >> 0x30);
                uVar82 = (char)((ulong)dVar87 >> 0x38);
                if (!bVar8) {
                  uVar68 = uVar52;
                  uVar70 = uVar54;
                  uVar72 = uVar56;
                  uVar74 = uVar58;
                  uVar76 = uVar60;
                  uVar78 = uVar62;
                  uVar80 = uVar64;
                  uVar82 = uVar66;
                  dVar87 = dVar86;
                }
                dVar86 = dVar87;
                lVar30 = lVar30 + -1;
                pdVar25 = pdVar25 + 1;
                uVar52 = uVar68;
                uVar54 = uVar70;
                uVar56 = uVar72;
                uVar58 = uVar74;
                uVar60 = uVar76;
                uVar62 = uVar78;
                uVar64 = uVar80;
                uVar66 = uVar82;
              } while (lVar30 != 0);
              do {
                dVar87 = *pdVar20;
                bVar8 = false;
                if (!NAN((double)CONCAT17(uVar65,CONCAT16(uVar63,CONCAT15(uVar61,CONCAT14(uVar59,
                                                  CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,
                                                  uVar51)))))))) && !NAN(dVar87)) {
                  bVar8 = (double)CONCAT17(uVar65,CONCAT16(uVar63,CONCAT15(uVar61,CONCAT14(uVar59,
                                                  CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,
                                                  uVar51))))))) < dVar87;
                }
                uVar52 = SUB81(dVar87,0);
                uVar54 = (char)((ulong)dVar87 >> 8);
                uVar56 = (char)((ulong)dVar87 >> 0x10);
                uVar58 = (char)((ulong)dVar87 >> 0x18);
                uVar60 = (char)((ulong)dVar87 >> 0x20);
                uVar62 = (char)((ulong)dVar87 >> 0x28);
                uVar64 = (char)((ulong)dVar87 >> 0x30);
                uVar66 = (char)((ulong)dVar87 >> 0x38);
                if (!bVar8) {
                  uVar52 = uVar51;
                  uVar54 = uVar53;
                  uVar56 = uVar55;
                  uVar58 = uVar57;
                  uVar60 = uVar59;
                  uVar62 = uVar61;
                  uVar64 = uVar63;
                  uVar66 = uVar65;
                  dVar87 = dVar84;
                }
                dVar84 = dVar87;
                lVar19 = lVar19 + -1;
                pdVar20 = pdVar20 + 1;
                uVar51 = uVar52;
                uVar53 = uVar54;
                uVar55 = uVar56;
                uVar57 = uVar58;
                uVar59 = uVar60;
                uVar61 = uVar62;
                uVar63 = uVar64;
                uVar65 = uVar66;
              } while (lVar19 != 0);
            }
          }
          func_0x000107c61434(lVar24);
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0xd0;
          uVar58 = 0x3f;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          FUN_10167e56c();
          uStack_5c8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))
                                               ));
          lStack_5d0 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                               ));
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0xe0;
          uVar58 = 0x3f;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          FUN_10167e56c(lVar24);
          uStack_5d8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))
                                               ));
          lStack_5e0 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                               ));
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0xe8;
          uVar58 = 0x3f;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          FUN_10167e56c(lVar24);
          uStack_5f8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))
                                               ));
          uStack_600 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                               ));
          uVar59 = (undefined1)uVar11;
          uVar60 = (undefined1)((ulong)uVar11 >> 8);
          uVar61 = (undefined1)((ulong)uVar11 >> 0x10);
          uVar62 = (undefined1)((ulong)uVar11 >> 0x18);
          uVar63 = (undefined1)((ulong)uVar11 >> 0x20);
          uVar64 = (undefined1)((ulong)uVar11 >> 0x28);
          uVar65 = (undefined1)((ulong)uVar11 >> 0x30);
          uVar66 = (undefined1)((ulong)uVar11 >> 0x38);
          uVar51 = uVar35;
          uVar52 = uVar37;
          uVar53 = uVar39;
          uVar54 = uVar41;
          uVar55 = uVar43;
          uVar56 = uVar45;
          uVar57 = uVar47;
          uVar58 = uVar49;
          FUN_10167e56c(lVar24);
          uStack_5e8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))
                                               ));
          uStack_5f0 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                               ));
          lVar19 = lVar24;
          FUN_10167e644();
          func_0x000107c6142c(lVar24);
          uVar51 = (undefined1)lStack_5d0;
          uVar52 = (undefined1)((ulong)lStack_5d0 >> 8);
          uVar53 = (undefined1)((ulong)lStack_5d0 >> 0x10);
          uVar54 = (undefined1)((ulong)lStack_5d0 >> 0x18);
          uVar55 = (undefined1)((ulong)lStack_5d0 >> 0x20);
          uVar56 = (undefined1)((ulong)lStack_5d0 >> 0x28);
          uVar57 = (undefined1)((ulong)lStack_5d0 >> 0x30);
          uVar58 = (undefined1)((ulong)lStack_5d0 >> 0x38);
          uStack_120 = 0;
          uVar59 = (undefined1)lStack_5e0;
          uVar60 = (undefined1)((ulong)lStack_5e0 >> 8);
          uVar61 = (undefined1)((ulong)lStack_5e0 >> 0x10);
          uVar62 = (undefined1)((ulong)lStack_5e0 >> 0x18);
          uVar63 = (undefined1)((ulong)lStack_5e0 >> 0x20);
          uVar64 = (undefined1)((ulong)lStack_5e0 >> 0x28);
          uVar65 = (undefined1)((ulong)lStack_5e0 >> 0x30);
          uVar66 = (undefined1)((ulong)lStack_5e0 >> 0x38);
          uVar68 = (undefined1)uStack_600;
          uVar70 = (undefined1)((ulong)uStack_600 >> 8);
          uVar72 = (undefined1)((ulong)uStack_600 >> 0x10);
          uVar74 = (undefined1)((ulong)uStack_600 >> 0x18);
          uVar76 = (undefined1)((ulong)uStack_600 >> 0x20);
          uVar78 = (undefined1)((ulong)uStack_600 >> 0x28);
          uVar80 = (undefined1)((ulong)uStack_600 >> 0x30);
          uVar82 = (undefined1)((ulong)uStack_600 >> 0x38);
          uVar67 = (undefined1)uStack_5f0;
          uVar69 = (undefined1)((ulong)uStack_5f0 >> 8);
          uVar71 = (undefined1)((ulong)uStack_5f0 >> 0x10);
          uVar73 = (undefined1)((ulong)uStack_5f0 >> 0x18);
          uVar75 = (undefined1)((ulong)uStack_5f0 >> 0x20);
          uVar77 = (undefined1)((ulong)uStack_5f0 >> 0x28);
          uVar79 = (undefined1)((ulong)uStack_5f0 >> 0x30);
          uVar81 = (undefined1)((ulong)uStack_5f0 >> 0x38);
        }
        uStack_148 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(uVar62
                                                  ,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))));
        uStack_150 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(uVar54
                                                  ,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))));
        uStack_138 = CONCAT17(uVar81,CONCAT16(uVar79,CONCAT15(uVar77,CONCAT14(uVar75,CONCAT13(uVar73
                                                  ,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)))))));
        uStack_140 = CONCAT17(uVar82,CONCAT16(uVar80,CONCAT15(uVar78,CONCAT14(uVar76,CONCAT13(uVar74
                                                  ,CONCAT12(uVar72,CONCAT11(uVar70,uVar68)))))));
        lStack_158 = lVar19;
        dStack_130 = dVar86;
        dStack_128 = dVar84;
        func_0x000107c61428(uVar18 + 0x38,auStack_3d0,0,0);
        if ((param_5 & 1) == 0) {
          lVar19 = 0;
          uStack_e0 = 1;
          dVar86 = 0.0;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          uVar68 = 0;
          uVar70 = 0;
          uVar72 = 0;
          uVar74 = 0;
          uVar76 = 0;
          uVar78 = 0;
          uVar80 = 0;
          uVar82 = 0;
          uVar35 = 0;
          uVar37 = 0;
          uVar39 = 0;
          uVar41 = 0;
          uVar43 = 0;
          uVar45 = 0;
          uVar47 = 0;
          uVar49 = 0;
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          uVar58 = 0;
        }
        else {
          lVar24 = *(long *)(uVar18 + 0x38);
          if (*(long *)(lVar24 + 0x10) == 0) {
            dVar83 = 0.0;
            dVar86 = 0.0;
          }
          else {
            dVar83 = *(double *)(lVar24 + 0x20);
            lVar19 = *(long *)(lVar24 + 0x10) + -1;
            dVar86 = dVar83;
            if (lVar19 != 0) {
              pdVar20 = (double *)(lVar24 + 0x28);
              uVar51 = SUB81(dVar83,0);
              uVar53 = (undefined1)((ulong)dVar83 >> 8);
              uVar55 = (undefined1)((ulong)dVar83 >> 0x10);
              uVar57 = (undefined1)((ulong)dVar83 >> 0x18);
              uVar59 = (undefined1)((ulong)dVar83 >> 0x20);
              uVar61 = (undefined1)((ulong)dVar83 >> 0x28);
              uVar63 = (undefined1)((ulong)dVar83 >> 0x30);
              uVar65 = (undefined1)((ulong)dVar83 >> 0x38);
              pdVar25 = pdVar20;
              lVar30 = lVar19;
              uVar52 = uVar51;
              uVar54 = uVar53;
              uVar56 = uVar55;
              uVar58 = uVar57;
              uVar60 = uVar59;
              uVar62 = uVar61;
              uVar64 = uVar63;
              uVar66 = uVar65;
              dVar84 = dVar83;
              do {
                dVar86 = *pdVar25;
                bVar8 = false;
                if (!NAN(dVar86) &&
                    !NAN((double)CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar62,CONCAT14(uVar60,
                                                  CONCAT13(uVar58,CONCAT12(uVar56,CONCAT11(uVar54,
                                                  uVar52))))))))) {
                  bVar8 = dVar86 < (double)CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar62,CONCAT14(
                                                  uVar60,CONCAT13(uVar58,CONCAT12(uVar56,CONCAT11(
                                                  uVar54,uVar52)))))));
                }
                uVar68 = SUB81(dVar86,0);
                uVar70 = (char)((ulong)dVar86 >> 8);
                uVar72 = (char)((ulong)dVar86 >> 0x10);
                uVar74 = (char)((ulong)dVar86 >> 0x18);
                uVar76 = (char)((ulong)dVar86 >> 0x20);
                uVar78 = (char)((ulong)dVar86 >> 0x28);
                uVar80 = (char)((ulong)dVar86 >> 0x30);
                uVar82 = (char)((ulong)dVar86 >> 0x38);
                if (!bVar8) {
                  uVar68 = uVar52;
                  uVar70 = uVar54;
                  uVar72 = uVar56;
                  uVar74 = uVar58;
                  uVar76 = uVar60;
                  uVar78 = uVar62;
                  uVar80 = uVar64;
                  uVar82 = uVar66;
                  dVar86 = dVar84;
                }
                dVar84 = dVar86;
                lVar30 = lVar30 + -1;
                pdVar25 = pdVar25 + 1;
                uVar52 = uVar68;
                uVar54 = uVar70;
                uVar56 = uVar72;
                uVar58 = uVar74;
                uVar60 = uVar76;
                uVar62 = uVar78;
                uVar64 = uVar80;
                uVar66 = uVar82;
                dVar87 = dVar83;
              } while (lVar30 != 0);
              do {
                dVar86 = *pdVar20;
                bVar8 = false;
                if (!NAN((double)CONCAT17(uVar65,CONCAT16(uVar63,CONCAT15(uVar61,CONCAT14(uVar59,
                                                  CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,
                                                  uVar51)))))))) && !NAN(dVar86)) {
                  bVar8 = (double)CONCAT17(uVar65,CONCAT16(uVar63,CONCAT15(uVar61,CONCAT14(uVar59,
                                                  CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,
                                                  uVar51))))))) < dVar86;
                }
                uVar52 = SUB81(dVar86,0);
                uVar54 = (char)((ulong)dVar86 >> 8);
                uVar56 = (char)((ulong)dVar86 >> 0x10);
                uVar58 = (char)((ulong)dVar86 >> 0x18);
                uVar60 = (char)((ulong)dVar86 >> 0x20);
                uVar62 = (char)((ulong)dVar86 >> 0x28);
                uVar64 = (char)((ulong)dVar86 >> 0x30);
                uVar66 = (char)((ulong)dVar86 >> 0x38);
                if (!bVar8) {
                  uVar52 = uVar51;
                  uVar54 = uVar53;
                  uVar56 = uVar55;
                  uVar58 = uVar57;
                  uVar60 = uVar59;
                  uVar62 = uVar61;
                  uVar64 = uVar63;
                  uVar66 = uVar65;
                  dVar86 = dVar87;
                }
                lVar19 = lVar19 + -1;
                pdVar20 = pdVar20 + 1;
                uVar51 = uVar52;
                uVar53 = uVar54;
                uVar55 = uVar56;
                uVar57 = uVar58;
                uVar59 = uVar60;
                uVar61 = uVar62;
                uVar63 = uVar64;
                uVar65 = uVar66;
                dVar83 = dVar84;
                dVar87 = dVar86;
              } while (lVar19 != 0);
            }
          }
          func_0x000107c61434(lVar24);
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0xd0;
          uVar58 = 0x3f;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          FUN_10167e56c();
          uStack_5c8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))
                                               ));
          lStack_5d0 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                               ));
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0xe0;
          uVar58 = 0x3f;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          FUN_10167e56c(lVar24);
          uStack_5d8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))
                                               ));
          lStack_5e0 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                               ));
          uVar51 = 0;
          uVar52 = 0;
          uVar53 = 0;
          uVar54 = 0;
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0xe8;
          uVar58 = 0x3f;
          uVar59 = 0;
          uVar60 = 0;
          uVar61 = 0;
          uVar62 = 0;
          uVar63 = 0;
          uVar64 = 0;
          uVar65 = 0;
          uVar66 = 0;
          FUN_10167e56c(lVar24);
          uStack_5f8 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(
                                                  uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))
                                               ));
          uStack_600 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                               ));
          uVar51 = (undefined1)uVar11;
          uVar52 = (undefined1)((ulong)uVar11 >> 8);
          uVar53 = (undefined1)((ulong)uVar11 >> 0x10);
          uVar54 = (undefined1)((ulong)uVar11 >> 0x18);
          uVar55 = (undefined1)((ulong)uVar11 >> 0x20);
          uVar56 = (undefined1)((ulong)uVar11 >> 0x28);
          uVar57 = (undefined1)((ulong)uVar11 >> 0x30);
          uVar58 = (undefined1)((ulong)uVar11 >> 0x38);
          FUN_10167e56c(lVar24);
          uStack_5e8 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(
                                                  uVar54,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))
                                               ));
          uStack_5f0 = CONCAT17(uVar49,CONCAT16(uVar47,CONCAT15(uVar45,CONCAT14(uVar43,CONCAT13(
                                                  uVar41,CONCAT12(uVar39,CONCAT11(uVar37,uVar35)))))
                                               ));
          lVar19 = lVar24;
          FUN_10167e644();
          func_0x000107c6142c(lVar24);
          uVar35 = (undefined1)lStack_5d0;
          uVar37 = (undefined1)((ulong)lStack_5d0 >> 8);
          uVar39 = (undefined1)((ulong)lStack_5d0 >> 0x10);
          uVar41 = (undefined1)((ulong)lStack_5d0 >> 0x18);
          uVar43 = (undefined1)((ulong)lStack_5d0 >> 0x20);
          uVar45 = (undefined1)((ulong)lStack_5d0 >> 0x28);
          uVar47 = (undefined1)((ulong)lStack_5d0 >> 0x30);
          uVar49 = (undefined1)((ulong)lStack_5d0 >> 0x38);
          uStack_e0 = 0;
          uVar51 = (undefined1)lStack_5e0;
          uVar52 = (undefined1)((ulong)lStack_5e0 >> 8);
          uVar53 = (undefined1)((ulong)lStack_5e0 >> 0x10);
          uVar54 = (undefined1)((ulong)lStack_5e0 >> 0x18);
          uVar55 = (undefined1)((ulong)lStack_5e0 >> 0x20);
          uVar56 = (undefined1)((ulong)lStack_5e0 >> 0x28);
          uVar57 = (undefined1)((ulong)lStack_5e0 >> 0x30);
          uVar58 = (undefined1)((ulong)lStack_5e0 >> 0x38);
          uVar59 = (undefined1)uStack_600;
          uVar60 = (undefined1)((ulong)uStack_600 >> 8);
          uVar61 = (undefined1)((ulong)uStack_600 >> 0x10);
          uVar62 = (undefined1)((ulong)uStack_600 >> 0x18);
          uVar63 = (undefined1)((ulong)uStack_600 >> 0x20);
          uVar64 = (undefined1)((ulong)uStack_600 >> 0x28);
          uVar65 = (undefined1)((ulong)uStack_600 >> 0x30);
          uVar66 = (undefined1)((ulong)uStack_600 >> 0x38);
          uVar68 = (undefined1)uStack_5f0;
          uVar70 = (undefined1)((ulong)uStack_5f0 >> 8);
          uVar72 = (undefined1)((ulong)uStack_5f0 >> 0x10);
          uVar74 = (undefined1)((ulong)uStack_5f0 >> 0x18);
          uVar76 = (undefined1)((ulong)uStack_5f0 >> 0x20);
          uVar78 = (undefined1)((ulong)uStack_5f0 >> 0x28);
          uVar80 = (undefined1)((ulong)uStack_5f0 >> 0x30);
          uVar82 = (undefined1)((ulong)uStack_5f0 >> 0x38);
        }
        uStack_108 = CONCAT17(uVar58,CONCAT16(uVar57,CONCAT15(uVar56,CONCAT14(uVar55,CONCAT13(uVar54
                                                  ,CONCAT12(uVar53,CONCAT11(uVar52,uVar51)))))));
        uStack_110 = CONCAT17(uVar49,CONCAT16(uVar47,CONCAT15(uVar45,CONCAT14(uVar43,CONCAT13(uVar41
                                                  ,CONCAT12(uVar39,CONCAT11(uVar37,uVar35)))))));
        uStack_f8 = CONCAT17(uVar82,CONCAT16(uVar80,CONCAT15(uVar78,CONCAT14(uVar76,CONCAT13(uVar74,
                                                  CONCAT12(uVar72,CONCAT11(uVar70,uVar68)))))));
        uStack_100 = CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13(uVar62
                                                  ,CONCAT12(uVar61,CONCAT11(uVar60,uVar59)))))));
        lVar24 = *(long *)(uVar18 + 0xd0);
        lStack_118 = lVar19;
        dStack_f0 = dVar83;
        dStack_e8 = dVar86;
        func_0x000107c61428(uVar18 + 0xf0,auStack_3e8,0,0);
        lVar30 = *(long *)(uVar18 + 0xf0);
        lVar19 = *(long *)(lVar30 + 0x10);
        if (lVar19 == 0) {
          lVar31 = 0;
        }
        else {
          lVar31 = lVar30;
          if (lVar24 <= lVar19) {
            if (SBORROW8(lVar19,lVar24)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101679910);
              (*pcVar7)();
            }
            if (lVar19 < lVar19 - lVar24) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101679918);
              (*pcVar7)();
            }
            if (lVar19 - lVar24 < 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101679920);
              (*pcVar7)();
            }
            if (lVar19 != lVar24) {
              func_0x000107c61434();
              func_0x00010167bec8();
              func_0x000107c6142c(lVar30);
              goto LAB_1016792bc;
            }
          }
          func_0x000107c61434(lVar30);
        }
LAB_1016792bc:
        lVar24 = *(long *)(uVar18 + 0x130);
        func_0x000107c61428(uVar18 + 0xf8,auStack_400,0,0);
        lVar30 = *(long *)(uVar18 + 0xf8);
        lVar19 = *(long *)(lVar30 + 0x10);
        puStack_5b8 = puVar17;
        if (lVar19 == 0) {
          lVar33 = 0;
        }
        else {
          lVar33 = lVar30;
          if (lVar24 <= lVar19) {
            if (SBORROW8(lVar19,lVar24)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101679914);
              (*pcVar7)();
            }
            if (lVar19 < lVar19 - lVar24) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10167991c);
              (*pcVar7)();
            }
            if (lVar19 - lVar24 < 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101679924);
              (*pcVar7)();
            }
            if (lVar19 != lVar24) {
              func_0x000107c61434();
              func_0x00010167c098();
              func_0x000107c6142c(lVar30);
              goto LAB_101679310;
            }
          }
          func_0x000107c61434(lVar30);
        }
LAB_101679310:
        uVar28 = *(undefined8 *)(*(long *)(uVar18 + 0x20) + 0x10);
        uVar29 = *(undefined8 *)(*(long *)(uVar18 + 0x30) + 0x10);
        if (param_3 != uStack_650) {
          uVar26 = *(undefined8 *)(uVar18 + 0x118);
          uVar27 = *(undefined8 *)(uVar18 + 0x120);
        }
        else {
          *(undefined8 *)(uVar18 + 0x118) = uVar28;
          *(undefined8 *)(uVar18 + 0x120) = uVar29;
          uVar26 = uVar28;
          uVar27 = uVar29;
          uVar28 = 0;
          uVar29 = 0;
        }
        lVar19 = *(long *)(uVar18 + 0x70);
        lVar24 = *(long *)(uVar18 + 0x78);
        lStack_5d0 = lVar33;
        uStack_5c0 = param_3;
        if (SCARRY8(lVar24,lVar19)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101679904);
          (*pcVar7)();
        }
        dVar83 = *(double *)(uVar18 + 0x80);
        dVar86 = *(double *)(uVar18 + 0x88);
        uStack_5f0 = *(undefined8 *)(uVar18 + 0x18);
        uStack_600 = *(undefined8 *)(uVar18 + 0x90);
        uStack_618 = uVar27;
        uStack_610 = uVar26;
        uStack_608 = (ulong)(param_3 == uStack_650);
        lStack_5e0 = lVar31;
        func_0x000107c61428(uVar18 + 0x98,auStack_418,0,0);
        uVar26 = *(undefined8 *)(uVar18 + 0xa0);
        uStack_620 = *(undefined8 *)(*(long *)(uVar18 + 0x98) + 0x10);
        uStack_628 = *(undefined8 *)(uVar18 + 0xa8);
        uVar27 = *(undefined8 *)(uVar18 + 0xb0);
        uStack_62c = (uint)*(byte *)(uVar18 + 0xb8);
        func_0x000107c61428(uVar18 + 0x110,auStack_430,0,0);
        lVar30 = *(long *)(uVar18 + 0x110);
        ppuVar34 = *(undefined ***)(lVar30 + 0x10);
        if (ppuVar34 == (undefined **)0x0) {
          func_0x000107c61434(uVar27);
          func_0x000107c61174(uVar26);
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
          lVar30 = lVar19;
        }
        else {
          puVar17 = (undefined *)0x112dbe060;
          lStack_638 = lVar19;
          func_0x0001000285a8(0x112dbe060,&UNK_10d9790c0);
          func_0x000107c613fc();
          uStack_640 = uVar27;
          func_0x000107c61434(uVar27);
          func_0x000107c61434(lVar30);
          func_0x000107c61174(uVar26);
          puVar13 = puVar17;
          func_0x000107c610a4();
          *(undefined ***)(puVar17 + 0x10) = ppuVar34;
          *(long *)(puVar17 + 0x18) = ((long)(puVar13 + -0x20) / 0x60) * 2;
          ppuVar14 = &puStack_580;
          FUN_10167c2d4(ppuVar14,puVar17 + 0x20,ppuVar34,lVar30);
          func_0x00010167c864(puStack_580,uStack_578,puStack_570,puStack_568,uStack_560);
          lVar30 = lStack_638;
          uVar27 = uStack_640;
          if (ppuVar14 != ppuVar34) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101679908);
            (*pcVar7)();
          }
        }
        uStack_d8 = uStack_610;
        uStack_d0 = uStack_618;
        uStack_c0 = uStack_608;
        uStack_b0 = (undefined1)uStack_608;
        uStack_af = 0;
        uStack_c8 = uVar28;
        uStack_b8 = uVar29;
        *(undefined8 **)(lVar9 + -0x10) = &uStack_d8;
        *(undefined **)(lVar9 + -8) = puVar17;
        *(long *)(lVar9 + -0x18) = lStack_5d0;
        lVar31 = lStack_5e0;
        *(long **)(lVar9 + -0x28) = &lStack_118;
        *(long *)(lVar9 + -0x20) = lVar31;
        *(long **)(lVar9 + -0x30) = &lStack_158;
        *(undefined **)(lVar9 + -0x38) = puStack_5b0;
        *(char *)(lVar9 + -0x40) = (char)uStack_62c;
        *(undefined8 *)(lVar9 + -0x48) = uVar27;
        *(undefined8 *)(lVar9 + -0x50) = uStack_628;
        uVar35 = (char)uVar12;
        uVar37 = (char)((ulong)uVar12 >> 8);
        uVar39 = (char)((ulong)uVar12 >> 0x10);
        uVar41 = (char)((ulong)uVar12 >> 0x18);
        uVar43 = (char)((ulong)uVar12 >> 0x20);
        uVar45 = (char)((ulong)uVar12 >> 0x28);
        uVar47 = (char)((ulong)uVar12 >> 0x30);
        uVar49 = (char)((ulong)uVar12 >> 0x38);
        func_0x00010420bec0(auStack_2a8,
                            CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,CONCAT13
                                                  (uVar42,CONCAT12(uVar40,CONCAT11(uVar38,uVar36))))
                                                  ))),
                            CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,CONCAT13
                                                  (uVar62,CONCAT12(uVar61,CONCAT11(uVar60,uVar59))))
                                                  ))),dVar83 + dVar86,dVar85,dVar86,lStack_5a8,
                            lVar24 + lVar19,uStack_5a0,lVar30,uStack_5f0,uStack_600,uStack_620,
                            uVar26);
        uVar50 = uVar49;
        uVar48 = uVar47;
        uVar46 = uVar45;
        uVar44 = uVar43;
        uVar42 = uVar41;
        uVar40 = uVar39;
        uVar38 = uVar37;
        uVar36 = uVar35;
        in_b0 = uVar36;
        in_register_00005001 = uVar38;
        in_register_00005002 = uVar40;
        in_register_00005003 = uVar42;
        in_register_00005004 = uVar44;
        in_register_00005005 = uVar46;
        in_register_00005006 = uVar48;
        in_register_00005007 = uVar50;
        func_0x000107c61574(uVar18);
        func_0x00010427a344(0);
        func_0x000107c610f8();
        FUN_10167c86c(auStack_2a8,&puStack_580);
        puVar15 = auStack_2a8;
        func_0x000104278750();
        puVar13 = puStack_5b8;
        puVar17 = puStack_5b8;
        func_0x000107c61550();
        param_3 = uStack_5c0;
        param_5 = uStack_654;
        param_4 = uStack_660;
        uVar18 = uStack_668;
        param_2 = lStack_670;
        if ((((int)puVar17 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar13 >> 0x3e == 0) {
            puVar17 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar17 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar13) {
              puVar17 = puVar13;
            }
            func_0x000107c60480(puVar17);
          }
          puVar16 = (undefined *)0x0;
          FUN_10167aa34(0,puVar17 + 1,1,puVar13,0x10167d958,&SUB_10427a344);
          puVar13 = puVar16;
        }
        uVar21 = (ulong)puVar13 & 0xffffffffffffff8;
        uVar32 = *(ulong *)(uVar21 + 0x10);
        puVar17 = puVar13;
        if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar32) {
          puVar17 = (undefined *)(ulong)(1 < *(ulong *)(uVar21 + 0x18));
          FUN_10167aa34(puVar17,uVar32 + 1,1,puVar13,0x10167d958,&SUB_10427a344);
          uVar21 = (ulong)puVar17 & 0xffffffffffffff8;
        }
        param_3 = param_3 + 1;
        *(ulong *)(uVar21 + 0x10) = uVar32 + 1;
        *(undefined1 **)(uVar21 + uVar32 * 8 + 0x20) = puVar15;
        func_0x00010167c8a8(auStack_2a8);
        puVar10 = puStack_680;
      } while (param_3 != uVar18);
      func_0x000107c61428(puStack_680,auStack_598,0,0);
      uVar11 = *puVar10;
      func_0x000107c61174(uVar11);
      func_0x0001000aa0a8(uStack_6e0);
      func_0x000107c61170(uVar11);
    }
    uVar11 = uStack_688;
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61428(puVar10,auStack_338,0,0);
    uVar12 = *puVar10;
    func_0x000107c61174(uVar12);
    func_0x0001000aa0a8(uStack_6d8);
    func_0x000107c61170(uVar12);
    puVar13 = &UNK_1103f1df8;
    func_0x000107c613fc(&UNK_1103f1df8,0x30,7);
    uVar12 = uStack_6c8;
    *(undefined8 *)(puVar13 + 0x10) = uStack_6d0;
    *(undefined8 *)(puVar13 + 0x18) = uVar11;
    *(undefined8 *)(puVar13 + 0x20) = uStack_6c8;
    *(undefined **)(puVar13 + 0x28) = puVar17;
    uStack_560 = 0x10167c858;
    puStack_580 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_578 = 0x42000000;
    puStack_570 = &UNK_1000b0c7c;
    puStack_568 = &UNK_1103f1e10;
    ppuVar34 = &puStack_580;
    puStack_558 = puVar13;
    func_0x000107c60bc4(ppuVar34);
    func_0x000107c61434(puVar17);
    func_0x000107c6157c(uVar12);
    lVar9 = lStack_6c0;
    func_0x000107c5f808(lStack_6c0);
    puStack_340 = puVar16;
    func_0x0001001c7eec();
    uVar11 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar28 = uVar11;
    func_0x0001001c7f30();
    lVar24 = lStack_690;
    lVar19 = lStack_6a8;
    func_0x000107c60264(lStack_6a8,&puStack_340,uVar11,uVar28,lStack_690,uVar12);
    func_0x000107c5ffe8(0,lVar9,lVar19,ppuVar34);
    func_0x000107c60bd0(ppuVar34);
    func_0x000107c6142c(puVar17);
    func_0x000107c61170(param_2);
    (**(code **)(lStack_698 + 8))(lVar19,lVar24);
    (**(code **)(lStack_6b8 + 8))(lVar9,puStack_6b0);
    func_0x000107c61574(puStack_558);
  }
  return;
}



/* Entry: 101679944; end: 101679a17; -[AdSessionsViewingHistory latestViewingSessionRecordsWithSessionCount:viewedAdContextCount:enableHammerTapLogging:contentHammerTapDuration:adsHammerTapDuration:completionQueue:completionBlock:] */

void FUN_101679944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103f1c40;
  func_0x000107c613fc(&UNK_1103f1c40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_3);
  FUN_101678a50(param_1,param_2,param_5,param_6,param_7,param_8,0x10167c618,puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101679a18; end: 101679a67;  */

void FUN_101679a18(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x00010427a344(0);
    func_0x000107c5fc48(param_1,uVar1);
  }
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101679a68; end: 101679b03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101679a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112dbe020) = 0;
    lVar1 = *(long *)(param_1 + _DAT_112dbe008);
    if (lVar1 != 0) {
      func_0x000107c6157c(lVar1);
      FUN_10167d334(param_2,param_3);
      func_0x000107c61574(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101679b04; end: 101679b17; -[AdSessionsViewingHistory stopCurrentViewingSessionWithExitMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101679b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = &UNK_1103f1c18;
  func_0x000107c5faec();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112dbe028);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c613fc(&UNK_1103f1c18,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(0x10167ccdc,puVar2,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101679b18; end: 101679c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101679b18(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dbe028);
  func_0x000107c614f0(uVar2);
  puVar1 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined **)(param_4 + 0x10) = puVar1;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(param_5,param_4,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101679c08; end: 101679e07;  */

void FUN_101679c08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a0 = param_1;
  func_0x000107c5f7fc();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1103f1b50;
  func_0x000107c613fc(&UNK_1103f1b50,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103f1ba0;
  func_0x000107c613fc(&UNK_1103f1ba0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  uStack_70 = 0x10167c5c0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103f1bb8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_3);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar9,&puStack_98,uVar6,uVar7,lVar1,param_3);
  func_0x000107c5ffe8(0,lVar10,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lVar11 + 8))(lVar9,lVar1);
  (**(code **)(lVar8 + 8))(lVar10,lVar2);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 101679e08; end: 101679e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101679e08(long param_1,code *param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)(*(undefined8 *)(param_1 + _DAT_112dbe020));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101679e7c; end: 101679f0b; -[AdSessionsViewingHistory currentViewLocationWithCompletionQueue:completionBlock:] */

void FUN_101679e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103f1bf0;
  func_0x000107c613fc(&UNK_1103f1bf0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101679c08(param_3,FUN_10167c608,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101679f0c; end: 10167a0cf;  */

undefined * FUN_101679f0c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
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
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10167a0d0);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x000104273684(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x00010167a4c4(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x000104273684(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 10167a0d0; end: 10167a0db; -[AdSessionsViewingHistory getLastNSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167a0d0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c5faec();
  lVar1 = *(long *)(param_1 + _DAT_112dbe008);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c6157c(lVar1);
    FUN_10167cd94(param_3,param_2);
    func_0x000107c61574(lVar1);
    if (param_3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar1 = param_3;
      FUN_101679f0c(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(param_3);
      param_3 = lVar1;
      func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
      param_2 = lVar1;
    }
  }
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10167a0dc; end: 10167a0e7; -[AdSessionsViewingHistory getSnapsInLastNSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167a0dc(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c5faec();
  lVar1 = *(long *)(param_1 + _DAT_112dbe008);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c6157c(lVar1);
    (*(code *)0x10167cf90)(param_3,param_2);
    func_0x000107c61574(lVar1);
    if (param_3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar1 = param_3;
      FUN_101679f0c(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(param_3);
      param_3 = lVar1;
      func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
      param_2 = lVar1;
    }
  }
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10167a0e8; end: 10167a24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167a0e8(long param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  
  func_0x000107c5faec();
  lVar1 = *(long *)(param_1 + _DAT_112dbe008);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c6157c(lVar1);
    (*param_4)(param_3,param_2);
    func_0x000107c61574(lVar1);
    if (param_3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      lVar1 = param_3;
      FUN_101679f0c(param_3);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(param_3);
      param_3 = lVar1;
      func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
      param_2 = lVar1;
    }
  }
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10167a250; end: 10167a2af; -[AdSessionsViewingHistory init] */

void FUN_10167a250(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdViewingHistorySwift.AdSessionsViewingHistory",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10167a27c);
  (*pcVar1)();
}



/* Entry: 10167a2b0; end: 10167a6df; -[AdSessionsViewingHistory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010167a2cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010167a2d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167a2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dbe000));
  return;
}



/* Entry: 10167a6e0; end: 10167aa33;  */

undefined * FUN_10167a6e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10167a800);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112dbe070;
    func_0x0001000285a8(0x112dbe070,&UNK_10d9790d0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0xb0) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1107517e0);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0xb0 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 10167aa34; end: 10167ab73;  */

ulong FUN_10167aa34(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167ab74);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x00010167ac08(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167ab70);
      (*pcVar1)();
    }
    FUN_10167ac88(0,uVar2,uVar3 + 0x20,param_4,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10167ab74; end: 10167ac87;  */

undefined * FUN_10167ab74(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x112dbe070;
    func_0x0001000285a8(0x112dbe070,&UNK_10d9790d0);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0xb0) * 2;
  }
  return puVar1;
}



/* Entry: 10167ac88; end: 10167aef3;  */

long FUN_10167ac88(long param_1,long param_2,long param_3,ulong param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10167ad8c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10167ad90);
        (*pcVar3)();
      }
      uVar4 = 0;
      (*param_5)(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      (*param_5)(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10167ad88);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10167aef4; end: 10167b023;  */

void FUN_10167aef4(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010167d9e8();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10167afb8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x00010167b8ec(lVar5);
    uVar2 = param_2;
    func_0x00010167d9e8();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_1107a1dc0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167af84);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10167b318();
    lVar5 = *unaff_x20;
    goto joined_r0x00010167afcc;
  }
  lVar5 = *unaff_x20;
joined_r0x00010167afcc:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10167b024);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 10167b024; end: 10167b18f;  */

ulong FUN_10167b024(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar9 = *unaff_x20;
  uVar4 = param_2;
  uVar3 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10167b0fc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x00010167bb70(lVar6,param_4 & 1);
    uVar4 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10167b0c4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x00010167b474();
    lVar6 = *unaff_x20;
    goto joined_r0x00010167b110;
  }
  lVar6 = *unaff_x20;
joined_r0x00010167b110:
  if ((uVar3 & 1) != 0) {
    uVar4 = *(long *)(lVar6 + 0x38) + uVar4 * 0x60;
    (*(code *)&DAT_1041fbb48)(uVar4,param_1);
    return uVar4;
  }
  lVar5 = lVar6 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar4 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar8 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar4 * 0x60);
  uVar10 = *param_1;
  uVar12 = param_1[3];
  uVar11 = param_1[2];
  puVar8[1] = param_1[1];
  *puVar8 = uVar10;
  puVar8[3] = uVar12;
  puVar8[2] = uVar11;
  uVar11 = param_1[5];
  uVar10 = param_1[4];
  uVar13 = param_1[7];
  uVar12 = param_1[6];
  uVar14 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  puVar8[9] = param_1[9];
  puVar8[8] = uVar14;
  puVar8[0xb] = uVar16;
  puVar8[10] = uVar15;
  puVar8[5] = uVar11;
  puVar8[4] = uVar10;
  puVar8[7] = uVar13;
  puVar8[6] = uVar12;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10167b190);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 10167b190; end: 10167b317;  */

void FUN_10167b190(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112dbe090,&UNK_10d979100);
  lVar13 = *unaff_x20;
  lVar8 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar13 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar13 + 0x40);
    if (uVar9 == 0) goto LAB_10167b270;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        lVar12 = (LZCOUNT(uVar11) | lVar14 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar5 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar12);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar12);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar12);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        func_0x000107c61434();
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar4);
        if (uVar9 != 0) break;
LAB_10167b270:
        do {
          lVar12 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10167b318);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_10167b2ec;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar12;
      }
    } while( true );
  }
LAB_10167b2ec:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 10167b318; end: 10167b62b;  */

void FUN_10167b318(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112dbe088,&UNK_10d9790f0);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_10167b3f4;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_10167b3f4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10167b474);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10167b44c;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10167b44c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10167b62c; end: 10167bec7;  */

void FUN_10167b62c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar8 = 0x112dbe090;
  func_0x0001000285a8(0x112dbe090,&UNK_10d979100);
  lVar9 = lVar20;
  func_0x000107c60490(lVar20,lVar1,param_2,uVar8);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_10167b8b8:
    func_0x000107c61574(lVar20);
    *unaff_x20 = lVar9;
    return;
  }
  puVar18 = (ulong *)(lVar20 + 0x40);
  uVar14 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar19 = uVar19 & *puVar18;
  lVar1 = lVar9 + 0x40;
  lVar12 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar17 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10167b8e8);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar19 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
            if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar19 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar20 + 0x10) = 0;
          }
          goto LAB_10167b8b8;
        }
        uVar19 = puVar18[lVar17];
        lVar12 = lVar12 + 1;
      } while (uVar19 == 0);
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar17 = lVar12;
    }
    lVar12 = (LZCOUNT(uVar11) | lVar17 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar20 + 0x30) + lVar12);
    uVar8 = *puVar2;
    uVar4 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar20 + 0x38) + lVar12);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    puVar10 = auStack_a8;
    func_0x000107c5fb58(puVar10,uVar8,uVar4);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar11 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10167b8ec);
          (*pcVar7)();
        }
        uVar13 = 0;
        if (uVar15 != uVar11) {
          uVar13 = uVar15;
        }
        bVar6 = (bool)(uVar15 == uVar11 | bVar6);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x10);
    *puVar2 = uVar8;
    puVar2[1] = uVar4;
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar11 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar5;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar17;
  } while( true );
}



/* Entry: 10167bec8; end: 10167c17b;  */

undefined * FUN_10167bec8(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10167bfb4);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      puVar3 = (undefined *)0x112dbe070;
      func_0x0001000285a8(0x112dbe070,&UNK_10d9790d0);
      func_0x000107c613fc();
      puVar4 = puVar3;
      func_0x000107c610a4();
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0xb0) * 2;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10167bfb0);
      (*pcVar2)();
    }
    func_0x000107c6140c(puVar3 + 0x20,param_2 + param_3 * 0xb0,lVar1,&UNK_1107517e0);
  }
  return puVar3;
}



/* Entry: 10167c17c; end: 10167c2d3;  */

long FUN_10167c17c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_1b0 [176];
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
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar3 = *(long *)(param_4 + 0x10);
  lVar4 = lVar3;
  if (param_2 == (undefined8 *)0x0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10167c2d4);
      (*pcVar1)();
    }
    if (lVar3 == 0) {
      lVar4 = 0;
      param_3 = lVar3;
    }
    else {
      lVar4 = 0;
      puVar5 = (undefined8 *)(param_4 + lVar3 * 0xb0 + -0x90);
      do {
        if (*(long *)(param_4 + 0x10) < lVar3 + lVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10167c2c4);
          (*pcVar1)();
        }
        uVar9 = puVar5[0xf];
        uVar8 = puVar5[0xe];
        uStack_78 = puVar5[0x11];
        uStack_80 = puVar5[0x10];
        uVar13 = puVar5[0x11];
        uVar12 = puVar5[0x10];
        uStack_70 = puVar5[0x12];
        uStack_68 = (undefined1)puVar5[0x13];
        uStack_5f = *(undefined8 *)((long)puVar5 + 0xa1);
        uStack_67 = (undefined7)*(undefined8 *)((long)puVar5 + 0x99);
        uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)puVar5 + 0x99) >> 0x38);
        uVar11 = puVar5[7];
        uVar10 = puVar5[6];
        uStack_b8 = puVar5[9];
        uStack_c0 = puVar5[8];
        uVar17 = puVar5[9];
        uVar16 = puVar5[8];
        uStack_a8 = puVar5[0xb];
        uStack_b0 = puVar5[10];
        uVar15 = puVar5[0xb];
        uVar14 = puVar5[10];
        uStack_98 = puVar5[0xd];
        uStack_a0 = puVar5[0xc];
        uVar21 = puVar5[0xd];
        uVar20 = puVar5[0xc];
        uStack_88 = puVar5[0xf];
        uStack_90 = puVar5[0xe];
        uStack_f8 = puVar5[1];
        uStack_100 = *puVar5;
        uStack_e8 = puVar5[3];
        uStack_f0 = puVar5[2];
        uStack_d8 = puVar5[5];
        uStack_e0 = puVar5[4];
        uStack_c8 = puVar5[7];
        uStack_d0 = puVar5[6];
        uVar23 = puVar5[1];
        uVar22 = *puVar5;
        uVar19 = puVar5[3];
        uVar18 = puVar5[2];
        uVar25 = puVar5[5];
        uVar24 = puVar5[4];
        uVar7 = puVar5[0x13];
        uVar6 = puVar5[0x12];
        uVar2 = puVar5[0x14];
        *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)(puVar5 + 0x15);
        param_2[0x14] = uVar2;
        param_2[0x11] = uVar13;
        param_2[0x10] = uVar12;
        param_2[0x13] = uVar7;
        param_2[0x12] = uVar6;
        param_2[0xd] = uVar21;
        param_2[0xc] = uVar20;
        param_2[0xf] = uVar9;
        param_2[0xe] = uVar8;
        param_2[9] = uVar17;
        param_2[8] = uVar16;
        param_2[0xb] = uVar15;
        param_2[10] = uVar14;
        param_2[5] = uVar25;
        param_2[4] = uVar24;
        param_2[7] = uVar11;
        param_2[6] = uVar10;
        param_2[1] = uVar23;
        *param_2 = uVar22;
        param_2[3] = uVar19;
        param_2[2] = uVar18;
        if (param_3 + lVar4 == 1) {
          func_0x00010167cc20(&uStack_100,auStack_1b0);
          lVar4 = lVar3 + lVar4 + -1;
          goto LAB_10167c29c;
        }
        func_0x00010167cc20(&uStack_100,auStack_1b0);
        lVar4 = lVar4 + -1;
        puVar5 = puVar5 + -0x16;
        param_2 = param_2 + 0x16;
      } while (lVar3 + lVar4 != 0);
      lVar4 = 0;
      param_3 = lVar3;
    }
  }
LAB_10167c29c:
  *param_1 = param_4;
  param_1[1] = lVar4;
  return param_3;
}



/* Entry: 10167c2d4; end: 10167c467;  */

long FUN_10167c2d4(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_130 [96];
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
  
  puVar6 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar6;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10167c468);
      (*pcVar2)();
    }
    lVar4 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar7 >> 6;
    lVar11 = lVar4;
    while( true ) {
      while (uVar8 == 0) {
        bVar3 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10167c464);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar11) {
          uVar8 = 0;
          if ((long)uVar10 <= lVar4 + 1) {
            uVar10 = lVar4 + 1;
          }
          lVar11 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_10167c41c;
        }
        uVar8 = puVar6[lVar11];
      }
      uVar1 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      puVar5 = (undefined8 *)
               (*(long *)(param_4 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x60 +
               lVar11 * 0x1800);
      uStack_c8 = puVar5[1];
      uStack_d0 = *puVar5;
      uStack_b8 = puVar5[3];
      uStack_c0 = puVar5[2];
      lVar9 = lVar9 + 1;
      uVar8 = uVar8 - 1 & uVar8;
      uStack_88 = puVar5[9];
      uStack_90 = puVar5[8];
      uStack_78 = puVar5[0xb];
      uStack_80 = puVar5[10];
      uStack_a8 = puVar5[5];
      uStack_b0 = puVar5[4];
      uStack_98 = puVar5[7];
      uStack_a0 = puVar5[6];
      uVar13 = puVar5[1];
      uVar12 = *puVar5;
      uVar15 = puVar5[3];
      uVar14 = puVar5[2];
      uVar17 = puVar5[5];
      uVar16 = puVar5[4];
      uVar19 = puVar5[7];
      uVar18 = puVar5[6];
      uVar20 = puVar5[8];
      uVar22 = puVar5[0xb];
      uVar21 = puVar5[10];
      param_2[9] = puVar5[9];
      param_2[8] = uVar20;
      param_2[0xb] = uVar22;
      param_2[10] = uVar21;
      param_2[5] = uVar17;
      param_2[4] = uVar16;
      param_2[7] = uVar19;
      param_2[6] = uVar18;
      param_2[1] = uVar13;
      *param_2 = uVar12;
      param_2[3] = uVar15;
      param_2[2] = uVar14;
      if (lVar9 == param_3) break;
      FUN_10167cb80(&uStack_d0,auStack_130);
      lVar4 = lVar11;
      param_2 = param_2 + 0xc;
    }
    FUN_10167cb80(&uStack_d0,auStack_130);
  }
LAB_10167c41c:
  *param_1 = param_4;
  param_1[1] = (long)puVar6;
  param_1[2] = ~uVar7;
  param_1[3] = lVar11;
  param_1[4] = uVar8;
  return param_3;
}



/* Entry: 10167c468; end: 10167c553;  */

undefined * FUN_10167c468(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112dbe088);
    puVar4 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      func_0x000107c61434(uVar2);
      uVar5 = uVar1;
      func_0x00010167d9e8();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10167c550);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10167c554);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar4);
  }
  return puVar4;
}



/* Entry: 10167c554; end: 10167c5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167c554(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar2 = *(byte *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112dbe000;
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(lVar5 + _DAT_112dbe000);
    if ((uVar6 == 0) || (func_0x000107c49d04(), (uVar6 & 1) == 0)) {
      *(undefined8 *)(lVar5 + _DAT_112dbe020) = uVar15;
      lVar4 = _DAT_112dbe008;
      lVar16 = *(long *)(lVar5 + _DAT_112dbe008);
      if ((lVar16 != 0) && (dVar17 = *(double *)(lVar16 + 0x48), dVar17 == 0.0)) {
        puVar7 = PTR_PTR_1126afec0;
        func_0x000107c61168(PTR_PTR_1126afec0);
        func_0x000107c6157c(lVar16);
        func_0x000107c41018(puVar7);
        *(double *)(lVar16 + 0x48) = dVar17;
        *(undefined8 *)(lVar16 + 0x60) = 0;
        *(undefined1 *)(lVar16 + 0x68) = 1;
        *(undefined8 *)(lVar16 + 0x50) = 0;
        *(undefined1 *)(lVar16 + 0x58) = 1;
        func_0x000107c61574(lVar16);
      }
      uVar8 = *(undefined8 *)(lVar5 + lVar3);
      *(undefined8 *)(lVar5 + lVar3) = uVar9;
      func_0x000107c61170(uVar8);
      uVar8 = *(undefined8 *)(lVar5 + _DAT_112dbe030);
      lVar16 = 0;
      func_0x00010167d76c();
      func_0x000107c613fc();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(lVar16 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(lVar16 + 0x28) = puVar7;
      *(undefined **)(lVar16 + 0x30) = puVar7;
      *(undefined **)(lVar16 + 0x38) = puVar7;
      *(undefined8 *)(lVar16 + 0x48) = 0;
      *(undefined8 *)(lVar16 + 0x50) = 0;
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(undefined8 *)(lVar16 + 0x60) = 0;
      *(undefined1 *)(lVar16 + 0x68) = 1;
      uVar18 = 0;
      *(undefined8 *)(lVar16 + 0x78) = 0;
      *(undefined8 *)(lVar16 + 0x70) = 0;
      *(undefined8 *)(lVar16 + 0x88) = 0;
      *(undefined8 *)(lVar16 + 0x80) = 0;
      puVar10 = PTR___swiftEmptySetSingleton_11034f1d8;
      *(undefined8 *)(lVar16 + 0x90) = 0;
      *(undefined **)(lVar16 + 0x98) = puVar10;
      *(undefined8 *)(lVar16 + 0xa8) = 0;
      *(undefined8 *)(lVar16 + 0xb0) = 0;
      *(undefined8 *)(lVar16 + 0xa0) = 0;
      *(undefined1 *)(lVar16 + 0xb8) = 0;
      *(undefined **)(lVar16 + 0xc0) = puVar7;
      *(undefined1 *)(lVar16 + 200) = 0;
      *(undefined **)(lVar16 + 0xe8) = puVar10;
      *(undefined **)(lVar16 + 0xf0) = puVar7;
      *(undefined **)(lVar16 + 0xf8) = puVar7;
      *(undefined8 *)(lVar16 + 0x100) = 0;
      *(undefined8 *)(lVar16 + 0x108) = 0;
      func_0x000107c61174();
      func_0x000107c61174();
      puVar10 = puVar7;
      FUN_10167c8dc();
      *(undefined8 *)(lVar16 + 0x118) = 0;
      *(undefined8 *)(lVar16 + 0x120) = 0;
      *(undefined **)(lVar16 + 0x110) = puVar10;
      func_0x00010167ca68();
      *(undefined **)(lVar16 + 0x128) = puVar7;
      *(undefined8 *)(lVar16 + 0x10) = uVar9;
      *(undefined8 *)(lVar16 + 0x18) = uVar15;
      puVar7 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c61174(uVar9);
      func_0x000107c41018(puVar7);
      *(undefined8 *)(lVar16 + 0x40) = uVar18;
      *(undefined8 *)(lVar16 + 0xd0) = uVar1;
      *(undefined8 *)(lVar16 + 0xe0) = uVar19;
      *(byte *)(lVar16 + 0xd8) = bVar2 & 1;
      *(undefined8 *)(lVar16 + 0x130) = uVar13;
      *(undefined8 *)(lVar16 + 0x138) = uVar8;
      uVar15 = *(undefined8 *)(lVar5 + lVar4);
      *(long *)(lVar5 + lVar4) = lVar16;
      func_0x000107c6157c(lVar16);
      func_0x000107c61574(uVar15);
      lVar3 = _DAT_112dbe010;
      func_0x000107c61428(lVar5 + _DAT_112dbe010,auStack_a0,0x21,0);
      func_0x000107c6157c(lVar16);
      func_0x00010167a660();
      uVar12 = *(ulong *)(lVar5 + lVar3);
      uVar14 = uVar12 & 0xffffffffffffff8;
      uVar6 = *(ulong *)(uVar14 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
        FUN_10167aa34(uVar11,uVar6 + 1,1,uVar12,0x10167d93c,0x10167d76c);
        uVar14 = uVar11 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar14 + 0x10) = uVar6 + 1;
      *(long *)(uVar14 + uVar6 * 8 + 0x20) = lVar16;
      *(ulong *)(lVar5 + lVar3) = uVar11;
      func_0x000107c614a8(auStack_a0);
      func_0x000107c61574(lVar16);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 10167c5e8; end: 10167c607;  */

void FUN_10167c5e8(void)

{
  func_0x000107c61168(&PTR_PTR_1127e3748);
  return;
}



/* Entry: 10167c608; end: 10167c61f;  */

void FUN_10167c608(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010167c614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10167c620; end: 10167c657;  */

void FUN_10167c620(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10167c658; end: 10167c7ab;  */

void FUN_10167c658(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10167c7ac; end: 10167c7bb;  */

void FUN_10167c7ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    FUN_101677048(uVar2,uVar1,uVar3,uVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10167c7bc; end: 10167c7ef;  */

void FUN_10167c7bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10167c7f0; end: 10167c807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167c7f0(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  bVar3 = *(byte *)(unaff_x20 + 0x18);
  uVar1 = *(ulong *)(unaff_x20 + 0x20);
  uVar2 = *(ulong *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar8 + 0x10,auStack_68,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar8 + _DAT_112dbe008);
  if (lVar15 != 0) {
    func_0x000107c6157c(lVar15);
    FUN_10167d18c(bVar3 & 1,uVar6,uVar11);
    func_0x000107c61574(lVar15);
  }
  lVar15 = _DAT_112dbe018;
  if (((bVar3 & 1) == 0) || (uVar2 == 0)) goto LAB_101676e04;
  uVar4 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar4 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) goto LAB_101676e04;
  puVar9 = auStack_80;
  func_0x000107c61428(lVar8 + _DAT_112dbe018,puVar9,0x20,0);
  lVar12 = *(long *)(lVar8 + lVar15);
  lVar13 = *(long *)(lVar12 + 0x10);
  func_0x000107c61434(uVar2);
  if (lVar13 == 0) {
LAB_101676d40:
    func_0x000107c614a8(auStack_80);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar12);
    lVar13 = lVar10;
    func_0x00010167d9e8();
    if (((ulong)puVar9 & 1) == 0) {
      func_0x000107c6142c(lVar12);
      goto LAB_101676d40;
    }
    puVar14 = *(undefined **)(*(long *)(lVar12 + 0x38) + lVar13 * 8);
    func_0x000107c61434(puVar14);
    func_0x000107c614a8(auStack_80);
    func_0x000107c6142c(lVar12);
    func_0x000107c61434(puVar14);
  }
  uVar4 = uVar1;
  func_0x000100077018(uVar1,uVar2,puVar14);
  func_0x000107c6142c(puVar14);
  if ((uVar4 & 1) == 0) {
    puVar5 = puVar14;
    func_0x000107c61558();
    puVar7 = puVar14;
    if (((ulong)puVar5 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
    }
    uVar4 = *(ulong *)(puVar7 + 0x10);
    puVar14 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      func_0x0001000d182c(puVar14,uVar4 + 1,1,puVar7);
    }
    *(ulong *)(puVar14 + 0x10) = uVar4 + 1;
    *(ulong *)(puVar14 + uVar4 * 0x10 + 0x20) = uVar1;
    *(ulong *)(puVar14 + uVar4 * 0x10 + 0x28) = uVar2;
  }
  else {
    func_0x000107c6142c(uVar2);
  }
  func_0x000107c61428(lVar8 + lVar15,auStack_80,0x21,0);
  func_0x000107c61434(puVar14);
  uVar6 = *(undefined8 *)(lVar8 + lVar15);
  func_0x000107c61558(uVar6);
  uVar11 = *(undefined8 *)(lVar8 + lVar15);
  *(undefined8 *)(lVar8 + lVar15) = 0x8000000000000000;
  FUN_10167aef4(puVar14,lVar10,uVar6);
  *(undefined8 *)(lVar8 + lVar15) = uVar11;
  func_0x000107c614a8(auStack_80);
  func_0x000107c6142c(puVar14);
LAB_101676e04:
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 10167c808; end: 10167c83f;  */

void FUN_10167c808(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10167c840; end: 10167c86b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10167c840(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x38);
  bVar2 = *(byte *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112dbe000;
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(lVar5 + _DAT_112dbe000);
    if ((uVar6 == 0) || (func_0x000107c49d04(), (uVar6 & 1) == 0)) {
      *(undefined8 *)(lVar5 + _DAT_112dbe020) = uVar15;
      lVar4 = _DAT_112dbe008;
      lVar16 = *(long *)(lVar5 + _DAT_112dbe008);
      if ((lVar16 != 0) && (dVar17 = *(double *)(lVar16 + 0x48), dVar17 == 0.0)) {
        puVar7 = PTR_PTR_1126afec0;
        func_0x000107c61168(PTR_PTR_1126afec0);
        func_0x000107c6157c(lVar16);
        func_0x000107c41018(puVar7);
        *(double *)(lVar16 + 0x48) = dVar17;
        *(undefined8 *)(lVar16 + 0x60) = 0;
        *(undefined1 *)(lVar16 + 0x68) = 1;
        *(undefined8 *)(lVar16 + 0x50) = 0;
        *(undefined1 *)(lVar16 + 0x58) = 1;
        func_0x000107c61574(lVar16);
      }
      uVar8 = *(undefined8 *)(lVar5 + lVar3);
      *(undefined8 *)(lVar5 + lVar3) = uVar9;
      func_0x000107c61170(uVar8);
      uVar8 = *(undefined8 *)(lVar5 + _DAT_112dbe030);
      lVar16 = 0;
      func_0x00010167d76c();
      func_0x000107c613fc();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(lVar16 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined **)(lVar16 + 0x28) = puVar7;
      *(undefined **)(lVar16 + 0x30) = puVar7;
      *(undefined **)(lVar16 + 0x38) = puVar7;
      *(undefined8 *)(lVar16 + 0x48) = 0;
      *(undefined8 *)(lVar16 + 0x50) = 0;
      *(undefined1 *)(lVar16 + 0x58) = 1;
      *(undefined8 *)(lVar16 + 0x60) = 0;
      *(undefined1 *)(lVar16 + 0x68) = 1;
      uVar18 = 0;
      *(undefined8 *)(lVar16 + 0x78) = 0;
      *(undefined8 *)(lVar16 + 0x70) = 0;
      *(undefined8 *)(lVar16 + 0x88) = 0;
      *(undefined8 *)(lVar16 + 0x80) = 0;
      puVar10 = PTR___swiftEmptySetSingleton_11034f1d8;
      *(undefined8 *)(lVar16 + 0x90) = 0;
      *(undefined **)(lVar16 + 0x98) = puVar10;
      *(undefined8 *)(lVar16 + 0xa8) = 0;
      *(undefined8 *)(lVar16 + 0xb0) = 0;
      *(undefined8 *)(lVar16 + 0xa0) = 0;
      *(undefined1 *)(lVar16 + 0xb8) = 0;
      *(undefined **)(lVar16 + 0xc0) = puVar7;
      *(undefined1 *)(lVar16 + 200) = 0;
      *(undefined **)(lVar16 + 0xe8) = puVar10;
      *(undefined **)(lVar16 + 0xf0) = puVar7;
      *(undefined **)(lVar16 + 0xf8) = puVar7;
      *(undefined8 *)(lVar16 + 0x100) = 0;
      *(undefined8 *)(lVar16 + 0x108) = 0;
      func_0x000107c61174();
      func_0x000107c61174();
      puVar10 = puVar7;
      FUN_10167c8dc();
      *(undefined8 *)(lVar16 + 0x118) = 0;
      *(undefined8 *)(lVar16 + 0x120) = 0;
      *(undefined **)(lVar16 + 0x110) = puVar10;
      func_0x00010167ca68();
      *(undefined **)(lVar16 + 0x128) = puVar7;
      *(undefined8 *)(lVar16 + 0x10) = uVar9;
      *(undefined8 *)(lVar16 + 0x18) = uVar15;
      puVar7 = PTR_PTR_1126afec0;
      func_0x000107c61168(PTR_PTR_1126afec0);
      func_0x000107c61174(uVar9);
      func_0x000107c41018(puVar7);
      *(undefined8 *)(lVar16 + 0x40) = uVar18;
      *(undefined8 *)(lVar16 + 0xd0) = uVar1;
      *(undefined8 *)(lVar16 + 0xe0) = uVar19;
      *(byte *)(lVar16 + 0xd8) = bVar2 & 1;
      *(undefined8 *)(lVar16 + 0x130) = uVar13;
      *(undefined8 *)(lVar16 + 0x138) = uVar8;
      uVar15 = *(undefined8 *)(lVar5 + lVar4);
      *(long *)(lVar5 + lVar4) = lVar16;
      func_0x000107c6157c(lVar16);
      func_0x000107c61574(uVar15);
      lVar3 = _DAT_112dbe010;
      func_0x000107c61428(lVar5 + _DAT_112dbe010,auStack_a0,0x21,0);
      func_0x000107c6157c(lVar16);
      func_0x00010167a660();
      uVar12 = *(ulong *)(lVar5 + lVar3);
      uVar14 = uVar12 & 0xffffffffffffff8;
      uVar6 = *(ulong *)(uVar14 + 0x10);
      uVar11 = uVar12;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar6) {
        uVar11 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
        FUN_10167aa34(uVar11,uVar6 + 1,1,uVar12,0x10167d93c,0x10167d76c);
        uVar14 = uVar11 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar14 + 0x10) = uVar6 + 1;
      *(long *)(uVar14 + uVar6 * 8 + 0x20) = lVar16;
      *(ulong *)(lVar5 + lVar3) = uVar11;
      func_0x000107c614a8(auStack_a0);
      func_0x000107c61574(lVar16);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 10167c86c; end: 10167c8db;  */

undefined8 FUN_10167c86c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10420bff4)(param_2,param_1);
  return param_2;
}



/* Entry: 10167c8dc; end: 10167cb7f;  */

undefined * FUN_10167c8dc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_140 [112];
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
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112dbe080,&UNK_10d9790e0);
  puVar2 = puVar7;
  func_0x000107c60498();
  func_0x000107c6157c();
  uStack_88 = *(ulong *)(param_1 + 0x68);
  uStack_90 = *(ulong *)(param_1 + 0x60);
  uStack_78 = *(ulong *)(param_1 + 0x78);
  uStack_80 = *(ulong *)(param_1 + 0x70);
  uStack_68 = *(ulong *)(param_1 + 0x88);
  uStack_70 = *(ulong *)(param_1 + 0x80);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uStack_b8 = *(ulong *)(param_1 + 0x38);
  uStack_c0 = *(ulong *)(param_1 + 0x30);
  uStack_a8 = *(ulong *)(param_1 + 0x48);
  uStack_b0 = *(ulong *)(param_1 + 0x40);
  uStack_98 = *(ulong *)(param_1 + 0x58);
  uStack_a0 = *(ulong *)(param_1 + 0x50);
  uStack_d0 = uVar8;
  uStack_c8 = uVar9;
  func_0x00010167cc5c(&uStack_d0,auStack_140);
  uVar3 = uVar8;
  uVar5 = uVar9;
  func_0x000100029284();
  if ((uVar5 & 1) == 0) {
    puVar4 = (ulong *)(param_1 + 0x90);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 0x10);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x60);
      puVar6[1] = uStack_b8;
      *puVar6 = uStack_c0;
      puVar6[3] = uStack_a8;
      puVar6[2] = uStack_b0;
      puVar6[9] = uStack_78;
      puVar6[8] = uStack_80;
      puVar6[0xb] = uStack_68;
      puVar6[10] = uStack_70;
      puVar6[5] = uStack_98;
      puVar6[4] = uStack_a0;
      puVar6[7] = uStack_88;
      puVar6[6] = uStack_90;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10167ca68);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        return puVar2;
      }
      uStack_88 = puVar4[9];
      uStack_90 = puVar4[8];
      uStack_78 = puVar4[0xb];
      uStack_80 = puVar4[10];
      uStack_68 = puVar4[0xd];
      uStack_70 = puVar4[0xc];
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      uStack_b8 = puVar4[3];
      uStack_c0 = puVar4[2];
      uStack_a8 = puVar4[5];
      uStack_b0 = puVar4[4];
      uStack_98 = puVar4[7];
      uStack_a0 = puVar4[6];
      uStack_d0 = uVar8;
      uStack_c8 = uVar9;
      func_0x00010167cc5c(&uStack_d0,auStack_140);
      uVar3 = uVar8;
      uVar5 = uVar9;
      func_0x000100029284();
      puVar4 = puVar4 + 0xe;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10167ca2c);
  (*pcVar1)();
}



/* Entry: 10167cb80; end: 10167ccab;  */

undefined8 FUN_10167cb80(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1041fba30)(param_2,param_1);
  return param_2;
}



/* Entry: 10167ccac; end: 10167cce7;  */

void FUN_10167ccac(long param_1,long param_2)

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


