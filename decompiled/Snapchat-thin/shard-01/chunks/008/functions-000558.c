/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015692a0; end: 1015692a3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015692a0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015692a4; end: 1015692db;  */

uint FUN_1015692a4(long param_1,long param_2)

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
  FUN_1015699e4();
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



/* Entry: 1015692dc; end: 101569323;  */

uint FUN_1015692dc(undefined8 *param_1)

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
  FUN_101569568(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101569324; end: 1015693c3;  */

/* WARNING: Possible PIC construction at 0x000101569370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101569380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101569374) */
/* WARNING: Removing unreachable block (ram,0x000101569384) */

void FUN_101569324(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db4808 != -1) {
    func_0x000107c61568(0x112db4808,FUN_101569000);
  }
  uVar5 = uRam00000001137ff680;
  uVar4 = uRam00000001137ff678;
  uVar3 = uRam00000001137ff670;
  uVar2 = uRam00000001137ff668;
  uVar1 = uRam00000001137ff660;
  *param_1 = uRam00000001137ff658;
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



/* Entry: 1015693c4; end: 1015693ff;  */

void FUN_1015693c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db4830;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db4830,&UNK_10d95f0e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101569400; end: 101569523;  */

void FUN_101569400(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = unaff_x20[1];
  uStack_50 = *(undefined1 *)(unaff_x20 + 2);
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101569524; end: 101569567;  */

uint FUN_101569524(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101569568(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101569568; end: 10156964b;  */

/* WARNING: Possible PIC construction at 0x0001015695a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010156962c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015695a4) */
/* WARNING: Removing unreachable block (ram,0x000101569630) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101569568(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar12 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  if (((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) == 0) {
    lVar19 = param_1[3];
    lVar22 = param_2[3];
    lVar26 = *(long *)(lVar19 + 0x10);
    if (lVar26 == *(long *)(lVar22 + 0x10)) {
      if (lVar26 != 0 && lVar19 != lVar22) {
        puVar28 = (undefined8 *)(lVar22 + 0x28);
        puVar29 = (undefined8 *)(lVar19 + 0x28);
        do {
          pbVar12 = (byte *)puVar29[-1];
          pbVar14 = (byte *)*puVar29;
          pbVar15 = (byte *)puVar28[-1];
          pbVar17 = (byte *)*puVar28;
          if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
          goto code_r0x000107c605b8;
          puVar28 = puVar28 + 2;
          puVar29 = puVar29 + 2;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      pbVar10 = (byte *)param_1[4];
      pbVar27 = (byte *)param_1[5];
      lVar26 = param_2[4];
      uVar16 = param_2[5];
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
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar26 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
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
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar16 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar20 = (int)((ulong)lVar26 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar26)) goto LAB_100e26094;
LAB_100e26154:
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
          if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
            if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
LAB_100e2608c:
            if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar21 < 1) goto LAB_100e26128;
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
LAB_100e26260:
                unaff_x21 = 0;
                FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto LAB_100e262b0;
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
                  goto LAB_100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto LAB_100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
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
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
LAB_100e262a4:
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar26,uVar16);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
LAB_100e262b0:
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
        *(code **)(puVar7 + -0x88) = FUN_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar30 = pbVar9[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar26 = *(long *)pbVar13;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar26,uVar11);
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
            lVar26 = *(long *)pbVar13;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
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
            lVar26 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar27 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
          lVar26 = *(long *)(pbVar13 + 0x20);
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
            if ((pbVar10 != pbVar15) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar26)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar26,0);
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
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 0x20);
            lVar26 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar26;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar26 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar26 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar26 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar26 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar26 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar26 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar26 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar19;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar19 == 0)) {
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
          lVar19 = *(long *)(pbVar13 + 0x20);
          lVar26 = *(long *)(pbVar13 + 0x18);
          bVar30 = pbVar13[8] | (byte)lVar26;
          bVar31 = pbVar13[9] | (byte)((ulong)lVar26 >> 8);
          bVar32 = pbVar13[10] | (byte)((ulong)lVar26 >> 0x10);
          bVar33 = pbVar13[0xb] | (byte)((ulong)lVar26 >> 0x18);
          bVar34 = pbVar13[0xc] | (byte)((ulong)lVar26 >> 0x20);
          bVar35 = pbVar13[0xd] | (byte)((ulong)lVar26 >> 0x28);
          bVar36 = pbVar13[0xe] | (byte)((ulong)lVar26 >> 0x30);
          bVar37 = pbVar13[0xf] | (byte)((ulong)lVar26 >> 0x38);
          bVar38 = pbVar13[0x10] | (byte)lVar19;
          bVar39 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar40 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar41 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar42 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar43 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar44 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar45 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 10156964c; end: 10156968b;  */

void FUN_10156964c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f038;
  func_0x000107c61520(&UNK_10d95f038,&UNK_1103dd560);
  puRam0000000112db4810 = puVar1;
  return;
}



/* Entry: 10156968c; end: 1015696af;  */

void FUN_10156968c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015696b0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015696b0; end: 1015696ef;  */

void FUN_1015696b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f010;
  func_0x000107c61520(&UNK_10d95f010,&UNK_1103dd560);
  puRam0000000112db4818 = puVar1;
  return;
}



/* Entry: 1015696f0; end: 10156971b;  */

void FUN_1015696f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10156964c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10156971c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10156971c; end: 10156975b;  */

void FUN_10156971c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d95efc8;
  func_0x000107c61520(&DAT_10d95efc8,&UNK_1103dd560);
  puRam0000000112db4820 = puVar1;
  return;
}



/* Entry: 10156975c; end: 10156975f;  */

void FUN_10156975c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f078;
  func_0x000107c61520(&UNK_10d95f078,&UNK_1103dd560);
  puRam0000000112db4828 = puVar1;
  return;
}



/* Entry: 101569760; end: 10156979f;  */

void FUN_101569760(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f078;
  func_0x000107c61520(&UNK_10d95f078,&UNK_1103dd560);
  puRam0000000112db4828 = puVar1;
  return;
}



/* Entry: 1015697a0; end: 1015697fb;  */

long FUN_1015697a0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015697fc; end: 1015698e3;  */

undefined8 * FUN_1015697fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  param_1[3] = uVar1;
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 1015698e4; end: 10156993f;  */

undefined8 * FUN_1015698e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[4];
  uVar1 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 101569940; end: 1015699e3;  */

int FUN_101569940(int *param_1,int param_2)

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



/* Entry: 1015699e4; end: 101569a63;  */

void FUN_1015699e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db4838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d95efe4;
  func_0x000107c61520(&DAT_10d95efe4,&UNK_1103dd560);
  puRam0000000112db4838 = puVar1;
  return;
}



/* Entry: 101569a64; end: 101569aa7;  */

void FUN_101569a64(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 101569aa8; end: 101569ae7;  */

void FUN_101569aa8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db4898;
  func_0x0001000285a8(0x112db4898,&UNK_10d95f130);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101569ae8; end: 101569b23;  */

void FUN_101569ae8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101569b24; end: 101569c03;  */

void FUN_101569b24(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101569c04; end: 101569c3f;  */

bool FUN_101569c04(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 101569c40; end: 101569c87;  */

void FUN_101569c40(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d95f2a0,0x43,2);
  uRam00000001137ff690 = uStack_38;
  uRam00000001137ff688 = uStack_40;
  uRam00000001137ff6a0 = uStack_28;
  uRam00000001137ff698 = uStack_30;
  uRam00000001137ff6b0 = uStack_18;
  uRam00000001137ff6a8 = uStack_20;
  return;
}



/* Entry: 101569c88; end: 101569cb3;  */

void FUN_101569c88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101569cb4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101569cf4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101569cb4; end: 101569d33;  */

void FUN_101569cb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db48a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f1d0;
  func_0x000107c61520(&UNK_10d95f1d0,&UNK_1103dd6d8);
  puRam0000000112db48a8 = puVar1;
  return;
}



/* Entry: 101569d34; end: 101569d37;  */

void FUN_101569d34(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db48b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db48c0;
  func_0x00010002969c(0x112db48c0,&UNK_10d95f158);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db48b8 = puVar2;
  return;
}



/* Entry: 101569d38; end: 101569d87;  */

void FUN_101569d38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db48b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db48c0;
  func_0x00010002969c(0x112db48c0,&UNK_10d95f158);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db48b8 = puVar2;
  return;
}



/* Entry: 101569d88; end: 101569d8b;  */

void FUN_101569d88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db48c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f210;
  func_0x000107c61520(&UNK_10d95f210,&UNK_1103dd6d8);
  puRam0000000112db48c8 = puVar1;
  return;
}



/* Entry: 101569d8c; end: 101569dcb;  */

void FUN_101569d8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db48c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f210;
  func_0x000107c61520(&UNK_10d95f210,&UNK_1103dd6d8);
  puRam0000000112db48c8 = puVar1;
  return;
}



/* Entry: 101569dcc; end: 101569e6b;  */

/* WARNING: Possible PIC construction at 0x000101569e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101569e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101569e1c) */
/* WARNING: Removing unreachable block (ram,0x000101569e2c) */

void FUN_101569dcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db48a0 != -1) {
    func_0x000107c61568(0x112db48a0,FUN_101569c40);
  }
  uVar5 = uRam00000001137ff6b0;
  uVar4 = uRam00000001137ff6a8;
  uVar3 = uRam00000001137ff6a0;
  uVar2 = uRam00000001137ff698;
  uVar1 = uRam00000001137ff690;
  *param_1 = uRam00000001137ff688;
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



/* Entry: 101569e6c; end: 101569f1b;  */

int FUN_101569e6c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101569f1c; end: 101569f4b;  */

void FUN_101569f1c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10156a17c();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101569f4c; end: 101569f53;  */

undefined8 FUN_101569f4c(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 101569f54; end: 101569fc7;  */

void FUN_101569f54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db4998;
  func_0x0001000285a8(0x112db4998,&UNK_10d95f2f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101569fc8; end: 101569fd3;  */

void FUN_101569fc8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 101569fd4; end: 10156a07f;  */

void FUN_101569fd4(void)

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



/* Entry: 10156a080; end: 10156a093;  */

bool FUN_10156a080(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10156a094; end: 10156a0db;  */

void FUN_10156a094(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d95f460,0xf1,2);
  uRam00000001137ff6c0 = uStack_38;
  uRam00000001137ff6b8 = uStack_40;
  uRam00000001137ff6d0 = uStack_28;
  uRam00000001137ff6c8 = uStack_30;
  uRam00000001137ff6e0 = uStack_18;
  uRam00000001137ff6d8 = uStack_20;
  return;
}



/* Entry: 10156a0dc; end: 10156a17b;  */

/* WARNING: Possible PIC construction at 0x00010156a128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010156a138: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010156a12c) */
/* WARNING: Removing unreachable block (ram,0x00010156a13c) */

void FUN_10156a0dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db49a0 != -1) {
    func_0x000107c61568(0x112db49a0,FUN_10156a094);
  }
  uVar5 = uRam00000001137ff6e0;
  uVar4 = uRam00000001137ff6d8;
  uVar3 = uRam00000001137ff6d0;
  uVar2 = uRam00000001137ff6c8;
  uVar1 = uRam00000001137ff6c0;
  *param_1 = uRam00000001137ff6b8;
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



/* Entry: 10156a17c; end: 10156a187;  */

void FUN_10156a17c(void)

{
  return;
}



/* Entry: 10156a188; end: 10156a1b3;  */

void FUN_10156a188(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10156a1b4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010156a1f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10156a1b4; end: 10156a233;  */

void FUN_10156a1b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db49a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f390;
  func_0x000107c61520(&UNK_10d95f390,&UNK_1103dd868);
  puRam0000000112db49a8 = puVar1;
  return;
}



/* Entry: 10156a234; end: 10156a237;  */

void FUN_10156a234(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db49b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db49c0;
  func_0x00010002969c(0x112db49c0,&UNK_10d95f318);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db49b8 = puVar2;
  return;
}



/* Entry: 10156a238; end: 10156a287;  */

void FUN_10156a238(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db49b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db49c0;
  func_0x00010002969c(0x112db49c0,&UNK_10d95f318);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db49b8 = puVar2;
  return;
}



/* Entry: 10156a288; end: 10156a28b;  */

void FUN_10156a288(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db49c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f3d0;
  func_0x000107c61520(&UNK_10d95f3d0,&UNK_1103dd868);
  puRam0000000112db49c8 = puVar1;
  return;
}



/* Entry: 10156a28c; end: 10156a2cb;  */

void FUN_10156a28c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db49c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d95f3d0;
  func_0x000107c61520(&UNK_10d95f3d0,&UNK_1103dd868);
  puRam0000000112db49c8 = puVar1;
  return;
}



/* Entry: 10156a2cc; end: 10156a39b;  */

int FUN_10156a2cc(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10156a39c; end: 10156a3db;  */

void FUN_10156a39c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db4a28;
  func_0x0001000285a8(0x112db4a28,&UNK_10d95f580);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10156a3dc; end: 10156a403;  */

void FUN_10156a3dc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10156a404; end: 10156a4af;  */

void FUN_10156a404(void)

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



/* Entry: 10156a4b0; end: 10156a4c3;  */

bool FUN_10156a4b0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10156a4c4; end: 10156a513;  */

undefined1  [16] FUN_10156a4c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x10),
                      *(undefined8 *)(param_3 + 0x18));
  return auVar1;
}



/* Entry: 10156a514; end: 10156a533;  */

void FUN_10156a514(void)

{
  func_0x000107c61168(&PTR_PTR_112db4b18);
  return;
}



/* Entry: 10156a534; end: 10156a60b;  */

undefined1  [16] FUN_10156a534(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x20,auStack_38,0,0);
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(param_3 + 0x20);
  return auVar1;
}



/* Entry: 10156a60c; end: 10156a69b;  */

long FUN_10156a60c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar3 = param_3 + 0x60;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar1 = *(long *)(param_3 + 0x60);
  uVar2 = *(undefined8 *)(param_3 + 0x68);
  lVar4 = *(long *)(param_3 + 0x70);
  lVar5 = lVar1;
  if (lVar4 == 0) {
    FUN_101609cc8();
    lVar5 = lVar3;
  }
  FUN_10156c73c(lVar1,uVar2,lVar4);
  return lVar5;
}



/* Entry: 10156a69c; end: 10156a88b;  */

void FUN_10156a69c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
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
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined8 uStack_307;
  undefined1 auStack_288 [24];
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
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
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
  
  func_0x000107c61428(param_4 + 0x78,auStack_288,0,0);
  func_0x000107c610b4(&uStack_190,param_4 + 0x78,0x150);
  iVar1 = (int)&uStack_190;
  FUN_10156c768();
  if (iVar1 == 1) {
    FUN_10153becc(&uStack_3d8);
    uStack_1c8 = uStack_330;
    uStack_1d0 = uStack_338;
    uStack_1b8 = uStack_320;
    uStack_1c0 = uStack_328;
    uStack_1a8 = uStack_310;
    uStack_1b0 = uStack_318;
    uStack_19f = uStack_307;
    uStack_1a7 = uStack_30f;
    uStack_1a0 = uStack_308;
    uStack_208 = uStack_370;
    uStack_210 = uStack_378;
    uStack_1f8 = uStack_360;
    uStack_200 = uStack_368;
    uStack_1e8 = uStack_350;
    uStack_1f0 = uStack_358;
    uStack_1d8 = uStack_340;
    uStack_1e0 = uStack_348;
    uStack_248 = uStack_3b0;
    uStack_250 = uStack_3b8;
    uStack_238 = uStack_3a0;
    uStack_240 = uStack_3a8;
    uStack_228 = uStack_390;
    uStack_230 = uStack_398;
    uStack_218 = uStack_380;
    uStack_220 = uStack_388;
    uStack_3e8 = 0xf000000000000000;
    uStack_3f0 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0xc000000000000000;
    uStack_400 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_268 = uStack_3d0;
    uStack_270 = uStack_3d8;
    uStack_258 = uStack_3c0;
    uStack_260 = uStack_3c8;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_50 = 0;
    uStack_48 = 0xf000000000000000;
  }
  else {
    uStack_3f8 = uStack_a8;
    uStack_400 = uStack_b0;
    uStack_3e8 = uStack_98;
    uStack_3f0 = uStack_a0;
    uStack_418 = uStack_78;
    uStack_420 = uStack_80;
    uStack_408 = uStack_88;
    uStack_410 = uStack_90;
    uStack_438 = uStack_58;
    uStack_440 = uStack_60;
    uStack_428 = uStack_68;
    uStack_430 = uStack_70;
    uStack_1c8 = uStack_e8;
    uStack_1d0 = uStack_f0;
    uStack_1b8 = uStack_d8;
    uStack_1c0 = uStack_e0;
    uStack_1a8 = uStack_c8;
    uStack_1b0 = uStack_d0;
    uStack_19f = uStack_bf;
    uStack_1a7 = uStack_c7;
    uStack_1a0 = uStack_c0;
    uStack_208 = uStack_128;
    uStack_210 = uStack_130;
    uStack_1f8 = uStack_118;
    uStack_200 = uStack_120;
    uStack_1e8 = uStack_108;
    uStack_1f0 = uStack_110;
    uStack_1d8 = uStack_f8;
    uStack_1e0 = uStack_100;
    uStack_248 = uStack_168;
    uStack_250 = uStack_170;
    uStack_238 = uStack_158;
    uStack_240 = uStack_160;
    uStack_228 = uStack_148;
    uStack_230 = uStack_150;
    uStack_218 = uStack_138;
    uStack_220 = uStack_140;
    uStack_268 = uStack_188;
    uStack_270 = uStack_190;
    uStack_258 = uStack_178;
    uStack_260 = uStack_180;
  }
  FUN_101570e20(&uStack_190,&uStack_3d8,0x112db4a30,&UNK_10d95f588);
  param_1[0x15] = uStack_1c8;
  param_1[0x14] = uStack_1d0;
  param_1[0x17] = uStack_1b8;
  param_1[0x16] = uStack_1c0;
  param_1[0x19] = CONCAT71(uStack_1a7,uStack_1a8);
  param_1[0x18] = uStack_1b0;
  *(undefined8 *)((long)param_1 + 0xd1) = uStack_19f;
  *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_1a0,uStack_1a7);
  param_1[0xd] = uStack_208;
  param_1[0xc] = uStack_210;
  param_1[0xf] = uStack_1f8;
  param_1[0xe] = uStack_200;
  param_1[0x11] = uStack_1e8;
  param_1[0x10] = uStack_1f0;
  param_1[0x13] = uStack_1d8;
  param_1[0x12] = uStack_1e0;
  param_1[5] = uStack_248;
  param_1[4] = uStack_250;
  param_1[7] = uStack_238;
  param_1[6] = uStack_240;
  param_1[9] = uStack_228;
  param_1[8] = uStack_230;
  param_1[0xb] = uStack_218;
  param_1[10] = uStack_220;
  param_1[1] = uStack_268;
  *param_1 = uStack_270;
  param_1[3] = uStack_258;
  param_1[2] = uStack_260;
  param_1[0x1d] = uStack_3f8;
  param_1[0x1c] = uStack_400;
  param_1[0x1f] = uStack_3e8;
  param_1[0x1e] = uStack_3f0;
  param_1[0x21] = uStack_408;
  param_1[0x20] = uStack_410;
  param_1[0x23] = uStack_418;
  param_1[0x22] = uStack_420;
  param_1[0x25] = uStack_428;
  param_1[0x24] = uStack_430;
  param_1[0x27] = uStack_438;
  param_1[0x26] = uStack_440;
  param_1[0x28] = uStack_50;
  param_1[0x29] = uStack_48;
  return;
}



/* Entry: 10156a88c; end: 10156a8c7;  */

undefined1 FUN_10156a88c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x1c8,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x1c8);
}



/* Entry: 10156a8c8; end: 10156a98b;  */

void FUN_10156a8c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428(param_4 + 0x1d0,auStack_a0,0,0);
  uVar1 = *(undefined8 *)(param_4 + 0x1d0);
  lVar3 = *(long *)(param_4 + 0x1d8);
  uVar2 = *(undefined8 *)(param_4 + 0x1e0);
  uVar4 = *(undefined8 *)(param_4 + 0x1e8);
  uVar5 = *(undefined8 *)(param_4 + 0x1f0);
  lVar6 = lVar3;
  uVar7 = uVar4;
  uVar8 = uVar2;
  uVar9 = uVar1;
  uStack_a8 = uVar5;
  if (lVar3 == 0) {
    func_0x00010162db74(&uStack_88);
    uStack_a8 = uStack_68;
    lVar6 = lStack_80;
    uVar7 = uStack_70;
    uVar8 = uStack_78;
    uVar9 = uStack_88;
  }
  FUN_10156c7b8(uVar1,lVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar9;
  param_1[1] = lVar6;
  param_1[2] = uVar8;
  param_1[3] = uVar7;
  param_1[4] = uStack_a8;
  return;
}



/* Entry: 10156a98c; end: 10156aa07;  */

undefined8 FUN_10156a98c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x1f8,auStack_48,0,0);
  uVar1 = 0;
  if (*(long *)(param_3 + 0x200) != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x1f8);
  }
  FUN_10156c850();
  return uVar1;
}



/* Entry: 10156aa08; end: 10156aabf;  */

undefined1 FUN_10156aa08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x218,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x218);
}



/* Entry: 10156aac0; end: 10156ab9b;  */

void FUN_10156aac0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428(param_4 + 0x240,auStack_b8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x248);
  uStack_a0 = *(undefined8 *)(param_4 + 0x240);
  lStack_88 = *(long *)(param_4 + 600);
  uStack_90 = *(undefined8 *)(param_4 + 0x250);
  uStack_78 = *(undefined8 *)(param_4 + 0x268);
  uStack_80 = *(undefined8 *)(param_4 + 0x260);
  uStack_68 = *(undefined8 *)(param_4 + 0x278);
  uStack_70 = *(undefined8 *)(param_4 + 0x270);
  if (lStack_88 == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0xc000000000000000;
    lVar1 = -0x2000000000000000;
    uVar6 = 1;
    uVar8 = 0xe000000000000000;
  }
  else {
    lVar1 = lStack_88;
    uVar2 = uStack_a0;
    uVar3 = uStack_90;
    uVar4 = uStack_80;
    uVar5 = uStack_70;
    uVar7 = uStack_68;
    uVar8 = uStack_78;
    uVar6 = (undefined1)uStack_98;
  }
  FUN_101570e20(&uStack_a0,auStack_f8,0x112db4a40,&UNK_10d95f598);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar6;
  param_1[2] = uVar3;
  param_1[3] = lVar1;
  param_1[4] = uVar4;
  param_1[5] = uVar8;
  param_1[6] = uVar5;
  param_1[7] = uVar7;
  return;
}



/* Entry: 10156ab9c; end: 10156aca3;  */

bool FUN_10156ab9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_150 [64];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
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
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)(param_3 + 0x240);
  func_0x000107c61428(puVar1,auStack_88,0,0);
  uStack_68 = *(undefined8 *)(param_3 + 0x248);
  uStack_70 = *(undefined8 *)(param_3 + 0x240);
  lVar4 = *(long *)(param_3 + 600);
  uStack_60 = *(undefined8 *)(param_3 + 0x250);
  uStack_48 = *(undefined8 *)(param_3 + 0x268);
  uStack_50 = *(undefined8 *)(param_3 + 0x260);
  uStack_38 = *(undefined8 *)(param_3 + 0x278);
  uStack_40 = *(undefined8 *)(param_3 + 0x270);
  lStack_58 = lVar4;
  if (lVar4 == 0) {
    uStack_108 = *(undefined8 *)(param_3 + 0x248);
    uStack_110 = *puVar1;
    uStack_100 = *(undefined8 *)(param_3 + 0x250);
    lStack_f8 = 0;
    uStack_e8 = *(undefined8 *)(param_3 + 0x268);
    uStack_f0 = *(undefined8 *)(param_3 + 0x260);
    uStack_d8 = *(undefined8 *)(param_3 + 0x278);
    uStack_e0 = *(undefined8 *)(param_3 + 0x270);
    uVar2 = 0x112db4a40;
    puVar3 = &UNK_10d95f598;
    FUN_101570e20(&uStack_70,auStack_150,0x112db4a40,&UNK_10d95f598);
  }
  else {
    uStack_108 = *(undefined8 *)(param_3 + 0x248);
    uStack_110 = *puVar1;
    uStack_100 = *(undefined8 *)(param_3 + 0x250);
    uStack_e8 = *(undefined8 *)(param_3 + 0x268);
    uStack_f0 = *(undefined8 *)(param_3 + 0x260);
    uStack_d8 = *(undefined8 *)(param_3 + 0x278);
    uStack_e0 = *(undefined8 *)(param_3 + 0x270);
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_f8 = lVar4;
    FUN_101570e20(&uStack_70,auStack_150,0x112db4a40,&UNK_10d95f598);
    uVar2 = 0x112db4a48;
    puVar3 = &UNK_10d95f5a0;
  }
  func_0x000101570e68(&uStack_110,uVar2,puVar3);
  return lVar4 != 0;
}



/* Entry: 10156aca4; end: 10156ad73;  */

undefined1  [16] FUN_10156aca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x280,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x280);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x288));
  return auVar1;
}



/* Entry: 10156ad74; end: 10156aec3;  */

void FUN_10156ad74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [120];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
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
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x2a8),auStack_118,0,0);
  uStack_b8 = *(undefined8 *)(param_4 + 0x2f0);
  uStack_c0 = *(undefined8 *)(param_4 + 0x2e8);
  uStack_a8 = *(undefined8 *)(param_4 + 0x300);
  uStack_b0 = *(undefined8 *)(param_4 + 0x2f8);
  uStack_98 = *(undefined8 *)(param_4 + 0x310);
  uStack_a0 = *(undefined8 *)(param_4 + 0x308);
  uStack_90 = *(undefined8 *)(param_4 + 0x318);
  uStack_f8 = *(undefined8 *)(param_4 + 0x2b0);
  uStack_100 = *(undefined8 *)(param_4 + 0x2a8);
  uStack_e8 = *(undefined8 *)(param_4 + 0x2c0);
  uStack_f0 = *(undefined8 *)(param_4 + 0x2b8);
  uStack_d8 = *(undefined8 *)(param_4 + 0x2d0);
  uStack_e0 = *(ulong *)(param_4 + 0x2c8);
  uStack_c8 = *(undefined8 *)(param_4 + 0x2e0);
  uStack_d0 = *(undefined8 *)(param_4 + 0x2d8);
  uVar1 = uStack_98;
  uVar2 = uStack_c0;
  uVar3 = uStack_90;
  uVar4 = uStack_c8;
  uVar5 = uStack_e0;
  uVar6 = uStack_b8;
  uVar7 = uStack_b0;
  uVar8 = uStack_a8;
  uVar9 = uStack_a0;
  uVar10 = uStack_100;
  uVar11 = uStack_f8;
  uVar12 = uStack_f0;
  uStack_1a8 = uStack_d0;
  uStack_1a0 = uStack_d8;
  uStack_198 = uStack_e8;
  if (0xe < uStack_e0 >> 0x3c) {
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1a8 = 0;
    uVar1 = 0;
    uVar2 = 0xf000000000000000;
    uVar3 = 0xf000000000000000;
    uVar4 = 0;
    uVar5 = 0xc000000000000000;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
  }
  FUN_101570e20(&uStack_100,auStack_190,0x112db4a50,&UNK_10dbcfbd0);
  *param_1 = uVar10;
  param_1[1] = uVar11;
  param_1[2] = uVar12;
  param_1[3] = uStack_198;
  param_1[4] = uVar5;
  param_1[5] = uStack_1a0;
  param_1[6] = uStack_1a8;
  param_1[7] = uVar4;
  param_1[8] = uVar2;
  param_1[9] = uVar6;
  param_1[10] = uVar7;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar3;
  return;
}



/* Entry: 10156aec4; end: 10156b03b;  */

bool FUN_10156aec4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auStack_248 [120];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
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
  
  puVar1 = (undefined8 *)(param_3 + 0x2a8);
  func_0x000107c61428(puVar1,auStack_d8,0,0);
  uStack_78 = *(undefined8 *)(param_3 + 0x2f0);
  uStack_80 = *(undefined8 *)(param_3 + 0x2e8);
  uStack_68 = *(undefined8 *)(param_3 + 0x300);
  uStack_70 = *(undefined8 *)(param_3 + 0x2f8);
  uStack_58 = *(undefined8 *)(param_3 + 0x310);
  uStack_60 = *(undefined8 *)(param_3 + 0x308);
  uStack_50 = *(undefined8 *)(param_3 + 0x318);
  uStack_b8 = *(undefined8 *)(param_3 + 0x2b0);
  uStack_c0 = *puVar1;
  uStack_a8 = *(undefined8 *)(param_3 + 0x2c0);
  uStack_b0 = *(undefined8 *)(param_3 + 0x2b8);
  uStack_98 = *(undefined8 *)(param_3 + 0x2d0);
  uStack_1b0 = *(ulong *)(param_3 + 0x2c8);
  uStack_88 = *(undefined8 *)(param_3 + 0x2e0);
  uStack_90 = *(undefined8 *)(param_3 + 0x2d8);
  uVar4 = uStack_1b0 >> 0x3c;
  uStack_a0 = uStack_1b0;
  if (uVar4 < 0xf) {
    uStack_1c8 = *(undefined8 *)(param_3 + 0x2b0);
    uStack_1d0 = *puVar1;
    uStack_1b8 = *(undefined8 *)(param_3 + 0x2c0);
    uStack_1c0 = *(undefined8 *)(param_3 + 0x2b8);
    uStack_1a0 = *(undefined8 *)(param_3 + 0x2d8);
    uStack_1a8 = *(undefined8 *)(param_3 + 0x2d0);
    uStack_190 = *(undefined8 *)(param_3 + 0x2e8);
    uStack_198 = *(undefined8 *)(param_3 + 0x2e0);
    uStack_180 = *(undefined8 *)(param_3 + 0x2f8);
    uStack_188 = *(undefined8 *)(param_3 + 0x2f0);
    uStack_170 = *(undefined8 *)(param_3 + 0x308);
    uStack_178 = *(undefined8 *)(param_3 + 0x300);
    uStack_160 = *(undefined8 *)(param_3 + 0x318);
    uStack_168 = *(undefined8 *)(param_3 + 0x310);
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_138 = 0xf000000000000000;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    FUN_101570e20(&uStack_c0,auStack_248,0x112db4a50,&UNK_10dbcfbd0);
    uVar2 = 0x112db4a58;
    puVar3 = &UNK_10d95f5b0;
  }
  else {
    uStack_1c8 = *(undefined8 *)(param_3 + 0x2b0);
    uStack_1d0 = *puVar1;
    uStack_1b8 = *(undefined8 *)(param_3 + 0x2c0);
    uStack_1c0 = *(undefined8 *)(param_3 + 0x2b8);
    uStack_1a0 = *(undefined8 *)(param_3 + 0x2d8);
    uStack_1a8 = *(undefined8 *)(param_3 + 0x2d0);
    uStack_190 = *(undefined8 *)(param_3 + 0x2e8);
    uStack_198 = *(undefined8 *)(param_3 + 0x2e0);
    uStack_180 = *(undefined8 *)(param_3 + 0x2f8);
    uStack_188 = *(undefined8 *)(param_3 + 0x2f0);
    uStack_170 = *(undefined8 *)(param_3 + 0x308);
    uStack_178 = *(undefined8 *)(param_3 + 0x300);
    uStack_160 = *(undefined8 *)(param_3 + 0x318);
    uStack_168 = *(undefined8 *)(param_3 + 0x310);
    uVar2 = 0x112db4a50;
    puVar3 = &UNK_10dbcfbd0;
    FUN_101570e20(&uStack_c0,auStack_248,0x112db4a50,&UNK_10dbcfbd0);
  }
  func_0x000101570e68(&uStack_1d0,uVar2,puVar3);
  return uVar4 < 0xf;
}



/* Entry: 10156b03c; end: 10156b167;  */

void FUN_10156b03c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [112];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
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
  
  func_0x000107c61428(param_4 + 800,auStack_f8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x368);
  uStack_a0 = *(undefined8 *)(param_4 + 0x360);
  uStack_88 = *(undefined8 *)(param_4 + 0x378);
  uStack_90 = *(undefined8 *)(param_4 + 0x370);
  uStack_78 = *(undefined8 *)(param_4 + 0x388);
  uStack_80 = *(undefined8 *)(param_4 + 0x380);
  uStack_d8 = *(undefined8 *)(param_4 + 0x328);
  uStack_e0 = *(undefined8 *)(param_4 + 800);
  uStack_c8 = *(undefined8 *)(param_4 + 0x338);
  lStack_d0 = *(long *)(param_4 + 0x330);
  uStack_b8 = *(undefined8 *)(param_4 + 0x348);
  uStack_c0 = *(undefined8 *)(param_4 + 0x340);
  uStack_a8 = *(undefined8 *)(param_4 + 0x358);
  uStack_b0 = *(undefined8 *)(param_4 + 0x350);
  lVar1 = lStack_d0;
  uVar2 = uStack_98;
  uVar3 = uStack_90;
  uVar4 = uStack_88;
  uVar5 = uStack_80;
  uVar6 = uStack_78;
  uVar7 = uStack_a8;
  uVar8 = uStack_a0;
  uVar9 = uStack_d8;
  uStack_190 = uStack_b0;
  uStack_188 = uStack_b8;
  uStack_180 = uStack_c0;
  uStack_178 = uStack_c8;
  uStack_170 = uStack_e0;
  if (lStack_d0 == 1) {
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_190 = 0;
    lVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0xc000000000000000;
  }
  FUN_101570e20(&uStack_e0,auStack_168,0x112db4a60,&UNK_10d95f5b8);
  *param_1 = uStack_170;
  param_1[1] = uVar9;
  param_1[2] = lVar1;
  param_1[3] = uStack_178;
  param_1[4] = uStack_180;
  param_1[5] = uStack_188;
  param_1[6] = uStack_190;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  param_1[0xd] = uVar6;
  return;
}



/* Entry: 10156b168; end: 10156b2db;  */

bool FUN_10156b168(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_210 [112];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
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
  
  func_0x000107c61428(param_3 + 800,auStack_b8,0,0);
  uStack_58 = *(undefined8 *)(param_3 + 0x368);
  uStack_60 = *(undefined8 *)(param_3 + 0x360);
  uStack_48 = *(undefined8 *)(param_3 + 0x378);
  uStack_50 = *(undefined8 *)(param_3 + 0x370);
  uStack_38 = *(undefined8 *)(param_3 + 0x388);
  uStack_40 = *(undefined8 *)(param_3 + 0x380);
  uStack_98 = *(undefined8 *)(param_3 + 0x328);
  uStack_a0 = *(undefined8 *)(param_3 + 800);
  uStack_88 = *(undefined8 *)(param_3 + 0x338);
  lVar3 = *(long *)(param_3 + 0x330);
  uStack_78 = *(undefined8 *)(param_3 + 0x348);
  uStack_80 = *(undefined8 *)(param_3 + 0x340);
  uStack_68 = *(undefined8 *)(param_3 + 0x358);
  uStack_70 = *(undefined8 *)(param_3 + 0x350);
  lStack_90 = lVar3;
  if (lVar3 == 1) {
    uStack_198 = *(undefined8 *)(param_3 + 0x328);
    uStack_1a0 = *(undefined8 *)(param_3 + 800);
    uStack_160 = *(undefined8 *)(param_3 + 0x360);
    uStack_168 = *(undefined8 *)(param_3 + 0x358);
    uStack_150 = *(undefined8 *)(param_3 + 0x370);
    uStack_158 = *(undefined8 *)(param_3 + 0x368);
    uStack_140 = *(undefined8 *)(param_3 + 0x380);
    uStack_148 = *(undefined8 *)(param_3 + 0x378);
    uStack_180 = *(undefined8 *)(param_3 + 0x340);
    uStack_188 = *(undefined8 *)(param_3 + 0x338);
    uStack_170 = *(undefined8 *)(param_3 + 0x350);
    uStack_178 = *(undefined8 *)(param_3 + 0x348);
    uStack_138 = *(undefined8 *)(param_3 + 0x388);
    lStack_190 = 1;
    uVar1 = 0x112db4a60;
    puVar2 = &UNK_10d95f5b8;
    FUN_101570e20(&uStack_a0,auStack_210,0x112db4a60,&UNK_10d95f5b8);
  }
  else {
    uStack_198 = *(undefined8 *)(param_3 + 0x328);
    uStack_1a0 = *(undefined8 *)(param_3 + 800);
    uStack_160 = *(undefined8 *)(param_3 + 0x360);
    uStack_168 = *(undefined8 *)(param_3 + 0x358);
    uStack_150 = *(undefined8 *)(param_3 + 0x370);
    uStack_158 = *(undefined8 *)(param_3 + 0x368);
    uStack_140 = *(undefined8 *)(param_3 + 0x380);
    uStack_148 = *(undefined8 *)(param_3 + 0x378);
    uStack_180 = *(undefined8 *)(param_3 + 0x340);
    uStack_188 = *(undefined8 *)(param_3 + 0x338);
    uStack_170 = *(undefined8 *)(param_3 + 0x350);
    uStack_178 = *(undefined8 *)(param_3 + 0x348);
    uStack_138 = *(undefined8 *)(param_3 + 0x388);
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 1;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    lStack_190 = lVar3;
    FUN_101570e20(&uStack_a0,auStack_210,0x112db4a60,&UNK_10d95f5b8);
    uVar1 = 0x112db4a68;
    puVar2 = &UNK_10d95f5c0;
  }
  func_0x000101570e68(&uStack_1a0,uVar1,puVar2);
  return lVar3 != 1;
}



/* Entry: 10156b2dc; end: 10156b357;  */

undefined8 FUN_10156b2dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x390,auStack_48,0,0);
  uVar1 = 0;
  if (*(ulong *)(param_3 + 0x3a0) >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0x398);
  }
  FUN_101570e04();
  return uVar1;
}



/* Entry: 10156b358; end: 10156b437;  */

undefined1  [16] FUN_10156b358(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x3a8,auStack_38,0,0);
  auVar1 = *(undefined1 (*) [16])(param_3 + 0x3a8);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x3b0));
  return auVar1;
}



/* Entry: 10156b438; end: 10156b567;  */

void FUN_10156b438(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [120];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
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
  
  func_0x000107c61428((undefined8 *)(param_4 + 0x3d8),auStack_f8,0,0);
  uStack_98 = *(undefined8 *)(param_4 + 0x420);
  uStack_a0 = *(undefined8 *)(param_4 + 0x418);
  uStack_88 = *(undefined8 *)(param_4 + 0x430);
  uStack_90 = *(undefined8 *)(param_4 + 0x428);
  uStack_78 = *(undefined8 *)(param_4 + 0x440);
  uStack_80 = *(undefined8 *)(param_4 + 0x438);
  uStack_70 = *(undefined8 *)(param_4 + 0x448);
  uStack_d8 = *(undefined8 *)(param_4 + 0x3e0);
  uStack_e0 = *(undefined8 *)(param_4 + 0x3d8);
  uStack_c8 = *(undefined8 *)(param_4 + 0x3f0);
  uStack_d0 = *(undefined8 *)(param_4 + 1000);
  uStack_b8 = *(undefined8 *)(param_4 + 0x400);
  lStack_c0 = *(long *)(param_4 + 0x3f8);
  uStack_a8 = *(undefined8 *)(param_4 + 0x410);
  uStack_b0 = *(undefined8 *)(param_4 + 0x408);
  lVar1 = lStack_c0;
  uVar2 = uStack_78;
  uVar3 = uStack_70;
  uVar4 = uStack_a8;
  uVar5 = uStack_a0;
  uVar6 = uStack_98;
  uVar7 = uStack_90;
  uVar8 = uStack_88;
  uVar9 = uStack_80;
  uStack_1a0 = uStack_d0;
  uStack_198 = uStack_c8;
  uStack_190 = uStack_e0;
  uStack_188 = uStack_d8;
  uStack_180 = uStack_b0;
  uStack_178 = uStack_b8;
  if (lStack_c0 == 1) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0xc000000000000000;
    uStack_190 = 0;
    lVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  FUN_101570e20(&uStack_e0,auStack_170,0x112db3b88,&UNK_10d95e000);
  param_1[1] = uStack_188;
  *param_1 = uStack_190;
  param_1[3] = uStack_198;
  param_1[2] = uStack_1a0;
  param_1[4] = lVar1;
  param_1[5] = uStack_178;
  param_1[6] = uStack_180;
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[10] = uVar7;
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  return;
}



/* Entry: 10156b568; end: 10156b6e3;  */

bool FUN_10156b568(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_248 [120];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
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
  
  puVar1 = (undefined8 *)(param_3 + 0x3d8);
  func_0x000107c61428(puVar1,auStack_d8,0,0);
  uStack_78 = *(undefined8 *)(param_3 + 0x420);
  uStack_80 = *(undefined8 *)(param_3 + 0x418);
  uStack_68 = *(undefined8 *)(param_3 + 0x430);
  uStack_70 = *(undefined8 *)(param_3 + 0x428);
  uStack_58 = *(undefined8 *)(param_3 + 0x440);
  uStack_60 = *(undefined8 *)(param_3 + 0x438);
  uStack_50 = *(undefined8 *)(param_3 + 0x448);
  uStack_b8 = *(undefined8 *)(param_3 + 0x3e0);
  uStack_c0 = *puVar1;
  uStack_a8 = *(undefined8 *)(param_3 + 0x3f0);
  uStack_b0 = *(undefined8 *)(param_3 + 1000);
  uStack_98 = *(undefined8 *)(param_3 + 0x400);
  lVar4 = *(long *)(param_3 + 0x3f8);
  uStack_88 = *(undefined8 *)(param_3 + 0x410);
  uStack_90 = *(undefined8 *)(param_3 + 0x408);
  lStack_a0 = lVar4;
  if (lVar4 == 1) {
    uStack_1c8 = *(undefined8 *)(param_3 + 0x3e0);
    uStack_1d0 = *puVar1;
    uStack_1b8 = *(undefined8 *)(param_3 + 0x3f0);
    uStack_1c0 = *(undefined8 *)(param_3 + 1000);
    uStack_1a0 = *(undefined8 *)(param_3 + 0x408);
    uStack_1a8 = *(undefined8 *)(param_3 + 0x400);
    uStack_190 = *(undefined8 *)(param_3 + 0x418);
    uStack_198 = *(undefined8 *)(param_3 + 0x410);
    uStack_180 = *(undefined8 *)(param_3 + 0x428);
    uStack_188 = *(undefined8 *)(param_3 + 0x420);
    uStack_170 = *(undefined8 *)(param_3 + 0x438);
    uStack_178 = *(undefined8 *)(param_3 + 0x430);
    uStack_160 = *(undefined8 *)(param_3 + 0x448);
    uStack_168 = *(undefined8 *)(param_3 + 0x440);
    lStack_1b0 = 1;
    uVar2 = 0x112db3b88;
    puVar3 = &UNK_10d95e000;
    FUN_101570e20(&uStack_c0,auStack_248,0x112db3b88,&UNK_10d95e000);
  }
  else {
    uStack_1c8 = *(undefined8 *)(param_3 + 0x3e0);
    uStack_1d0 = *puVar1;
    uStack_1b8 = *(undefined8 *)(param_3 + 0x3f0);
    uStack_1c0 = *(undefined8 *)(param_3 + 1000);
    uStack_1a0 = *(undefined8 *)(param_3 + 0x408);
    uStack_1a8 = *(undefined8 *)(param_3 + 0x400);
    uStack_190 = *(undefined8 *)(param_3 + 0x418);
    uStack_198 = *(undefined8 *)(param_3 + 0x410);
    uStack_180 = *(undefined8 *)(param_3 + 0x428);
    uStack_188 = *(undefined8 *)(param_3 + 0x420);
    uStack_170 = *(undefined8 *)(param_3 + 0x438);
    uStack_178 = *(undefined8 *)(param_3 + 0x430);
    uStack_160 = *(undefined8 *)(param_3 + 0x448);
    uStack_168 = *(undefined8 *)(param_3 + 0x440);
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_138 = 1;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_1b0 = lVar4;
    FUN_101570e20(&uStack_c0,auStack_248,0x112db3b88,&UNK_10d95e000);
    uVar2 = 0x112db4a70;
    puVar3 = &UNK_10d95f5d0;
  }
  func_0x000101570e68(&uStack_1d0,uVar2,puVar3);
  return lVar4 != 1;
}



/* Entry: 10156b6e4; end: 10156b7af;  */

undefined1 FUN_10156b6e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x450,auStack_38,0,0);
  return *(undefined1 *)(param_3 + 0x450);
}



/* Entry: 10156b7b0; end: 10156b7f7;  */

void FUN_10156b7b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d95fb70,0x3a,2);
  uRam00000001137ff6f0 = uStack_38;
  uRam00000001137ff6e8 = uStack_40;
  uRam00000001137ff700 = uStack_28;
  uRam00000001137ff6f8 = uStack_30;
  uRam00000001137ff710 = uStack_18;
  uRam00000001137ff708 = uStack_20;
  return;
}



/* Entry: 10156b7f8; end: 10156b897;  */

/* WARNING: Possible PIC construction at 0x00010156b844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010156b854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010156b848) */
/* WARNING: Removing unreachable block (ram,0x00010156b858) */

void FUN_10156b7f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db4a88 != -1) {
    func_0x000107c61568(0x112db4a88,FUN_10156b7b0);
  }
  uVar5 = uRam00000001137ff710;
  uVar4 = uRam00000001137ff708;
  uVar3 = uRam00000001137ff700;
  uVar2 = uRam00000001137ff6f8;
  uVar1 = uRam00000001137ff6f0;
  *param_1 = uRam00000001137ff6e8;
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



/* Entry: 10156b898; end: 10156b8df;  */

void FUN_10156b898(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d95f940,0x22a,2);
  uRam00000001137ff720 = uStack_38;
  uRam00000001137ff718 = uStack_40;
  uRam00000001137ff730 = uStack_28;
  uRam00000001137ff728 = uStack_30;
  uRam00000001137ff740 = uStack_18;
  uRam00000001137ff738 = uStack_20;
  return;
}



/* Entry: 10156b8e0; end: 10156b91b;  */

void FUN_10156b8e0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10156a514();
  func_0x000107c613fc();
  FUN_10156b91c();
  uRam0000000112db4a80 = uVar1;
  return;
}



/* Entry: 10156b91c; end: 10156ba77;  */

void FUN_10156b91c(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_180 [336];
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined1 *)(unaff_x20 + 0x58) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x00010156c77c(auStack_180);
  func_0x000107c610b4(unaff_x20 + 0x78,auStack_180,0x150);
  *(undefined1 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x211) = 0;
  *(undefined8 *)(unaff_x20 + 0x209) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined **)(unaff_x20 + 0x228) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined1 *)(unaff_x20 + 0x238) = 1;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0xe000000000000000;
  *(undefined **)(unaff_x20 + 0x290) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined1 *)(unaff_x20 + 0x2a0) = 1;
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0;
  *(undefined8 *)(unaff_x20 + 0x310) = 0;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 1;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined1 *)(unaff_x20 + 0x3d0) = 1;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 1;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined1 *)(unaff_x20 + 0x450) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined1 *)(unaff_x20 + 0x460) = 1;
  *(undefined8 *)(unaff_x20 + 0x468) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x490) = 0xe000000000000000;
  return;
}



/* Entry: 10156ba78; end: 10156c73b;  */

void FUN_10156ba78(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 auStack_e80 [24];
  undefined1 auStack_e68 [24];
  undefined1 auStack_e50 [24];
  undefined1 auStack_e38 [24];
  undefined1 auStack_e20 [24];
  undefined1 auStack_e08 [24];
  undefined1 auStack_df0 [24];
  undefined1 auStack_dd8 [24];
  undefined1 auStack_dc0 [24];
  undefined1 auStack_da8 [120];
  undefined1 auStack_d30 [24];
  undefined1 auStack_d18 [24];
  undefined1 auStack_d00 [24];
  undefined1 auStack_ce8 [24];
  undefined1 auStack_cd0 [24];
  undefined1 auStack_cb8 [24];
  undefined1 auStack_ca0 [24];
  undefined1 auStack_c88 [24];
  undefined1 auStack_c70 [24];
  undefined1 auStack_c58 [24];
  undefined1 auStack_c40 [24];
  undefined1 auStack_c28 [24];
  undefined1 auStack_c10 [24];
  undefined1 auStack_bf8 [24];
  undefined1 auStack_be0 [24];
  undefined1 auStack_bc8 [24];
  undefined1 auStack_bb0 [24];
  undefined1 auStack_b98 [24];
  undefined1 auStack_b80 [24];
  undefined1 auStack_b68 [24];
  undefined1 auStack_b50 [24];
  undefined1 auStack_b38 [24];
  undefined1 auStack_b20 [24];
  undefined1 auStack_b08 [24];
  undefined1 auStack_af0 [24];
  undefined1 auStack_ad8 [24];
  undefined1 auStack_ac0 [24];
  undefined1 auStack_aa8 [24];
  undefined1 auStack_a90 [24];
  undefined1 auStack_a78 [24];
  undefined1 auStack_a60 [24];
  undefined1 auStack_a48 [24];
  undefined1 auStack_a30 [24];
  undefined1 auStack_a18 [24];
  undefined1 auStack_a00 [24];
  undefined1 auStack_9e8 [24];
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined1 auStack_880 [24];
  undefined1 auStack_868 [24];
  undefined1 auStack_850 [24];
  undefined1 auStack_838 [24];
  undefined1 auStack_820 [24];
  undefined1 auStack_808 [24];
  undefined1 auStack_7f0 [24];
  undefined1 auStack_7d8 [24];
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [24];
  undefined1 auStack_790 [24];
  undefined1 auStack_778 [24];
  undefined1 auStack_760 [24];
  undefined1 auStack_748 [24];
  undefined1 auStack_730 [336];
  undefined1 auStack_5e0 [336];
  undefined1 auStack_490 [336];
  undefined8 uStack_340;
  undefined8 uStack_338;
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
  
  puVar11 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0xc000000000000000;
  *puVar11 = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0x20);
  *puVar12 = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  puVar19 = (undefined8 *)(unaff_x20 + 0x30);
  *puVar19 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xe000000000000000;
  puVar5 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0xe000000000000000;
  puVar6 = (undefined8 *)(unaff_x20 + 0x50);
  *puVar6 = 0;
  *(undefined1 *)(unaff_x20 + 0x58) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0x60);
  *puVar7 = 0;
  func_0x00010156c77c(auStack_730);
  func_0x000107c610b4(unaff_x20 + 0x78,auStack_730,0x150);
  *(undefined1 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x200) = 0;
  *(undefined8 *)(unaff_x20 + 0x211) = 0;
  *(undefined8 *)(unaff_x20 + 0x209) = 0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x228) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined1 *)(unaff_x20 + 0x238) = 1;
  *(undefined8 *)(unaff_x20 + 0x248) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0;
  *(undefined8 *)(unaff_x20 + 600) = 0;
  *(undefined8 *)(unaff_x20 + 0x250) = 0;
  *(undefined8 *)(unaff_x20 + 0x268) = 0;
  *(undefined8 *)(unaff_x20 + 0x260) = 0;
  *(undefined8 *)(unaff_x20 + 0x278) = 0;
  *(undefined8 *)(unaff_x20 + 0x270) = 0;
  *(undefined8 *)(unaff_x20 + 0x280) = 0;
  *(undefined8 *)(unaff_x20 + 0x288) = 0xe000000000000000;
  *(undefined **)(unaff_x20 + 0x290) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x298) = 0;
  *(undefined1 *)(unaff_x20 + 0x2a0) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + 0x2a8);
  *(undefined8 *)(unaff_x20 + 0x2b0) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x2d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x308) = 0;
  *(undefined8 *)(unaff_x20 + 0x300) = 0;
  *(undefined8 *)(unaff_x20 + 0x318) = 0;
  *(undefined8 *)(unaff_x20 + 0x310) = 0;
  *(undefined8 *)(unaff_x20 + 0x328) = 0;
  *(undefined8 *)(unaff_x20 + 800) = 0;
  *(undefined8 *)(unaff_x20 + 0x330) = 1;
  *(undefined8 *)(unaff_x20 + 0x340) = 0;
  *(undefined8 *)(unaff_x20 + 0x338) = 0;
  *(undefined8 *)(unaff_x20 + 0x350) = 0;
  *(undefined8 *)(unaff_x20 + 0x348) = 0;
  *(undefined8 *)(unaff_x20 + 0x360) = 0;
  *(undefined8 *)(unaff_x20 + 0x358) = 0;
  *(undefined8 *)(unaff_x20 + 0x370) = 0;
  *(undefined8 *)(unaff_x20 + 0x368) = 0;
  *(undefined8 *)(unaff_x20 + 0x380) = 0;
  *(undefined8 *)(unaff_x20 + 0x378) = 0;
  *(undefined8 *)(unaff_x20 + 0x390) = 0;
  *(undefined8 *)(unaff_x20 + 0x388) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined1 *)(unaff_x20 + 0x3d0) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + 0x3d8);
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *puVar2 = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 1;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined1 *)(unaff_x20 + 0x450) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined1 *)(unaff_x20 + 0x460) = 1;
  *(undefined8 *)(unaff_x20 + 0x468) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x490) = 0xe000000000000000;
  func_0x000107c61428(param_1 + 0x10,auStack_748,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar11,auStack_760,1,0);
  uVar14 = *puVar11;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
  *puVar11 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
  func_0x00010006c00c(uVar9,uVar10);
  func_0x00010006c090(uVar14,uVar17);
  func_0x000107c61428(param_1 + 0x20,auStack_778,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  func_0x000107c61428(puVar12,auStack_790,1,0);
  *puVar12 = uVar9;
  *(undefined1 *)(unaff_x20 + 0x28) = uVar3;
  func_0x000107c61428(param_1 + 0x30,auStack_7a8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar19,auStack_7c0,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar19 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar14);
  func_0x000107c61428(param_1 + 0x40,auStack_7d8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61428(puVar5,auStack_7f0,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  *puVar5 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar10;
  func_0x000107c61434(uVar10);
  func_0x000107c6142c(uVar14);
  func_0x000107c61428(param_1 + 0x50,auStack_808,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined1 *)(param_1 + 0x58);
  func_0x000107c61428(puVar6,auStack_820,1,0);
  *puVar6 = uVar9;
  *(undefined1 *)(unaff_x20 + 0x58) = uVar3;
  func_0x000107c61428(param_1 + 0x60,auStack_838,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar14 = *(undefined8 *)(param_1 + 0x68);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61428(puVar7,auStack_850,1,0);
  uVar15 = *puVar7;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x70);
  *puVar7 = uVar9;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar13;
  FUN_10156c73c(uVar9,uVar14,uVar13);
  FUN_101571648(uVar15,uVar10,uVar17);
  func_0x000107c61428(param_1 + 0x78,auStack_868,0,0);
  func_0x000107c610b4(auStack_5e0,param_1 + 0x78,0x150);
  func_0x000107c61428(unaff_x20 + 0x78,auStack_880,1,0);
  func_0x000107c610b4(auStack_490,unaff_x20 + 0x78,0x150);
  func_0x000107c610b4(unaff_x20 + 0x78,auStack_5e0,0x150);
  FUN_101570e20(auStack_5e0,&uStack_9d0,0x112db4a30,&UNK_10d95f588);
  func_0x000101570e68(auStack_490,0x112db4a30,&UNK_10d95f588);
  func_0x000107c61428(param_1 + 0x1c8,auStack_9e8,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x1c8);
  func_0x000107c61428(unaff_x20 + 0x1c8,auStack_a00,1,0);
  *(undefined1 *)(unaff_x20 + 0x1c8) = uVar3;
  func_0x000107c61428(param_1 + 0x1d0,auStack_a18,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x1d0);
  uVar13 = *(undefined8 *)(param_1 + 0x1d8);
  uVar10 = *(undefined8 *)(param_1 + 0x1e0);
  uVar15 = *(undefined8 *)(param_1 + 0x1e8);
  uVar16 = *(undefined8 *)(param_1 + 0x1f0);
  func_0x000107c61428(unaff_x20 + 0x1d0,auStack_a30,1,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x1d0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x1f0);
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uVar15;
  *(undefined8 *)(unaff_x20 + 0x1f0) = uVar16;
  FUN_10156c7b8(uVar9,uVar13,uVar10,uVar15,uVar16);
  func_0x00010156c804(uVar14,uVar18,uVar17,uVar20,uVar8);
  func_0x000107c61428(param_1 + 0x1f8,auStack_a48,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x1f8);
  uVar14 = *(undefined8 *)(param_1 + 0x200);
  uVar13 = *(undefined8 *)(param_1 + 0x208);
  uVar15 = *(undefined8 *)(param_1 + 0x210);
  func_0x000107c61428(unaff_x20 + 0x1f8,auStack_a60,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x1f8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x200);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x208);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined8 *)(unaff_x20 + 0x1f8) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x200) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x208) = uVar13;
  *(undefined8 *)(unaff_x20 + 0x210) = uVar15;
  FUN_10156c850(uVar9,uVar14,uVar13,uVar15);
  func_0x00010156c888(uVar10,uVar17,uVar18,uVar20);
  func_0x000107c61428(param_1 + 0x218,auStack_a78,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x218);
  func_0x000107c61428(unaff_x20 + 0x218,auStack_a90,1,0);
  *(undefined1 *)(unaff_x20 + 0x218) = uVar3;
  func_0x000107c61428(param_1 + 0x220,auStack_aa8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x220);
  func_0x000107c61428(unaff_x20 + 0x220,auStack_ac0,1,0);
  *(undefined8 *)(unaff_x20 + 0x220) = uVar9;
  func_0x000107c61428(param_1 + 0x228,auStack_ad8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x228);
  func_0x000107c61428(unaff_x20 + 0x228,auStack_af0,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x228);
  *(undefined8 *)(unaff_x20 + 0x228) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar10);
  func_0x000107c61428(param_1 + 0x230,auStack_b08,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x230);
  uVar3 = *(undefined1 *)(param_1 + 0x238);
  func_0x000107c61428(unaff_x20 + 0x230,auStack_b20,1,0);
  *(undefined8 *)(unaff_x20 + 0x230) = uVar9;
  *(undefined1 *)(unaff_x20 + 0x238) = uVar3;
  func_0x000107c61428(param_1 + 0x240,auStack_b38,0,0);
  uStack_338 = *(undefined8 *)(param_1 + 0x248);
  uStack_340 = *(undefined8 *)(param_1 + 0x240);
  uStack_328 = *(undefined8 *)(param_1 + 600);
  uStack_330 = *(undefined8 *)(param_1 + 0x250);
  uStack_318 = *(undefined8 *)(param_1 + 0x268);
  uStack_320 = *(undefined8 *)(param_1 + 0x260);
  uStack_308 = *(undefined8 *)(param_1 + 0x278);
  uStack_310 = *(undefined8 *)(param_1 + 0x270);
  func_0x000107c61428(unaff_x20 + 0x240,auStack_b50,1,0);
  uStack_2f8 = *(undefined8 *)(unaff_x20 + 0x248);
  uStack_300 = *(undefined8 *)(unaff_x20 + 0x240);
  uStack_2e8 = *(undefined8 *)(unaff_x20 + 600);
  uStack_2f0 = *(undefined8 *)(unaff_x20 + 0x250);
  uStack_2d8 = *(undefined8 *)(unaff_x20 + 0x268);
  uStack_2e0 = *(undefined8 *)(unaff_x20 + 0x260);
  uStack_2c8 = *(undefined8 *)(unaff_x20 + 0x278);
  uStack_2d0 = *(undefined8 *)(unaff_x20 + 0x270);
  *(undefined8 *)(unaff_x20 + 0x248) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x240) = uStack_340;
  *(undefined8 *)(unaff_x20 + 600) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x250) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x268) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x260) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x278) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x270) = uStack_310;
  FUN_101570e20(&uStack_340,&uStack_9d0,0x112db4a40,&UNK_10d95f598);
  func_0x000101570e68(&uStack_300,0x112db4a40,&UNK_10d95f598);
  func_0x000107c61428(param_1 + 0x280,auStack_b68,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x280);
  uVar9 = *(undefined8 *)(param_1 + 0x288);
  func_0x000107c61428(unaff_x20 + 0x280,auStack_b80,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x288);
  *(undefined8 *)(unaff_x20 + 0x280) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x288) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar10);
  func_0x000107c61428(param_1 + 0x290,auStack_b98,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x290);
  func_0x000107c61428(unaff_x20 + 0x290,auStack_bb0,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x290);
  *(undefined8 *)(unaff_x20 + 0x290) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar10);
  func_0x000107c61428(param_1 + 0x298,auStack_bc8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x298);
  uVar3 = *(undefined1 *)(param_1 + 0x2a0);
  func_0x000107c61428(unaff_x20 + 0x298,auStack_be0,1,0);
  *(undefined8 *)(unaff_x20 + 0x298) = uVar9;
  *(undefined1 *)(unaff_x20 + 0x2a0) = uVar3;
  func_0x000107c61428((undefined8 *)(param_1 + 0x2a8),auStack_bf8,0,0);
  uStack_278 = *(undefined8 *)(param_1 + 0x2f0);
  uStack_280 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_268 = *(undefined8 *)(param_1 + 0x300);
  uStack_270 = *(undefined8 *)(param_1 + 0x2f8);
  uStack_258 = *(undefined8 *)(param_1 + 0x310);
  uStack_260 = *(undefined8 *)(param_1 + 0x308);
  uStack_250 = *(undefined8 *)(param_1 + 0x318);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x2b0);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x2a8);
  uStack_2a8 = *(undefined8 *)(param_1 + 0x2c0);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x2b8);
  uStack_298 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x2c8);
  uStack_288 = *(undefined8 *)(param_1 + 0x2e0);
  uStack_290 = *(undefined8 *)(param_1 + 0x2d8);
  func_0x000107c61428(puVar1,auStack_c10,1,0);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x2f0);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x2e8);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x300);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x2f8);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x310);
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x308);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x318);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x2b0);
  uStack_240 = *puVar1;
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x2c0);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x2b8);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x2d0);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x2c8);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x2e0);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x2d8);
  *(undefined8 *)(unaff_x20 + 0x2d0) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0x2c8) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0x2e0) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0x2d8) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x2b0) = uStack_2b8;
  *puVar1 = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x2c0) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0x2b8) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x318) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x300) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x2f8) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x310) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x308) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x2f0) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x2e8) = uStack_280;
  FUN_101570e20(&uStack_2c0,&uStack_9d0,0x112db4a50,&UNK_10dbcfbd0);
  func_0x000101570e68(&uStack_240,0x112db4a50,&UNK_10dbcfbd0);
  func_0x000107c61428(param_1 + 800,auStack_c28,0,0);
  uStack_178 = *(undefined8 *)(param_1 + 0x368);
  uStack_180 = *(undefined8 *)(param_1 + 0x360);
  uStack_168 = *(undefined8 *)(param_1 + 0x378);
  uStack_170 = *(undefined8 *)(param_1 + 0x370);
  uStack_158 = *(undefined8 *)(param_1 + 0x388);
  uStack_160 = *(undefined8 *)(param_1 + 0x380);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x328);
  uStack_1c0 = *(undefined8 *)(param_1 + 800);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x338);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x330);
  uStack_198 = *(undefined8 *)(param_1 + 0x348);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x340);
  uStack_188 = *(undefined8 *)(param_1 + 0x358);
  uStack_190 = *(undefined8 *)(param_1 + 0x350);
  func_0x000107c61428(unaff_x20 + 800,auStack_c40,1,0);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x368);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x360);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x378);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x370);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x388);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x380);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x328);
  uStack_150 = *(undefined8 *)(unaff_x20 + 800);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x338);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x330);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x348);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x340);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x358);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x350);
  *(undefined8 *)(unaff_x20 + 0x328) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 800) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x338) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0x330) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0x368) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x360) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x378) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x370) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x348) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x340) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x358) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x350) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x388) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0x380) = uStack_160;
  FUN_101570e20(&uStack_1c0,&uStack_9d0,0x112db4a60,&UNK_10d95f5b8);
  func_0x000101570e68(&uStack_150,0x112db4a60,&UNK_10d95f5b8);
  func_0x000107c61428(param_1 + 0x390,auStack_c58,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x390);
  uVar10 = *(undefined8 *)(param_1 + 0x398);
  uVar14 = *(undefined8 *)(param_1 + 0x3a0);
  func_0x000107c61428(unaff_x20 + 0x390,auStack_c70,1,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x390);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x398);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3a0);
  *(undefined8 *)(unaff_x20 + 0x390) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x398) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uVar14;
  FUN_101570e04(uVar9,uVar10,uVar14);
  FUN_101553ccc(uVar17,uVar13,uVar15);
  func_0x000107c61428(param_1 + 0x3a8,auStack_c88,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3a8);
  uVar9 = *(undefined8 *)(param_1 + 0x3b0);
  func_0x000107c61428(unaff_x20 + 0x3a8,auStack_ca0,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x3b0);
  *(undefined8 *)(unaff_x20 + 0x3a8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3b0) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar10);
  func_0x000107c61428(param_1 + 0x3b8,auStack_cb8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3b8);
  uVar9 = *(undefined8 *)(param_1 + 0x3c0);
  func_0x000107c61428(unaff_x20 + 0x3b8,auStack_cd0,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x3c0);
  *(undefined8 *)(unaff_x20 + 0x3b8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3c0) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar10);
  func_0x000107c61428(param_1 + 0x3c8,auStack_ce8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x3c8);
  uVar3 = *(undefined1 *)(param_1 + 0x3d0);
  func_0x000107c61428(unaff_x20 + 0x3c8,auStack_d00,1,0);
  *(undefined8 *)(unaff_x20 + 0x3c8) = uVar9;
  *(undefined1 *)(unaff_x20 + 0x3d0) = uVar3;
  func_0x000107c61428((undefined8 *)(param_1 + 0x3d8),auStack_d18,0,0);
  uStack_98 = *(undefined8 *)(param_1 + 0x420);
  uStack_a0 = *(undefined8 *)(param_1 + 0x418);
  uStack_88 = *(undefined8 *)(param_1 + 0x430);
  uStack_90 = *(undefined8 *)(param_1 + 0x428);
  uStack_78 = *(undefined8 *)(param_1 + 0x440);
  uStack_80 = *(undefined8 *)(param_1 + 0x438);
  uStack_70 = *(undefined8 *)(param_1 + 0x448);
  uStack_d8 = *(undefined8 *)(param_1 + 0x3e0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x3d8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x3f0);
  uStack_d0 = *(undefined8 *)(param_1 + 1000);
  uStack_b8 = *(undefined8 *)(param_1 + 0x400);
  uStack_c0 = *(undefined8 *)(param_1 + 0x3f8);
  uStack_a8 = *(undefined8 *)(param_1 + 0x410);
  uStack_b0 = *(undefined8 *)(param_1 + 0x408);
  func_0x000107c61428(puVar2,auStack_d30,1,0);
  uStack_988 = *(undefined8 *)(unaff_x20 + 0x420);
  uStack_990 = *(undefined8 *)(unaff_x20 + 0x418);
  uStack_978 = *(undefined8 *)(unaff_x20 + 0x430);
  uStack_980 = *(undefined8 *)(unaff_x20 + 0x428);
  uStack_968 = *(undefined8 *)(unaff_x20 + 0x440);
  uStack_970 = *(undefined8 *)(unaff_x20 + 0x438);
  uStack_960 = *(undefined8 *)(unaff_x20 + 0x448);
  uStack_9c8 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uStack_9d0 = *puVar2;
  uStack_9b8 = *(undefined8 *)(unaff_x20 + 0x3f0);
  uStack_9c0 = *(undefined8 *)(unaff_x20 + 1000);
  uStack_9a8 = *(undefined8 *)(unaff_x20 + 0x400);
  uStack_9b0 = *(undefined8 *)(unaff_x20 + 0x3f8);
  uStack_998 = *(undefined8 *)(unaff_x20 + 0x410);
  uStack_9a0 = *(undefined8 *)(unaff_x20 + 0x408);
  *(undefined8 *)(unaff_x20 + 0x400) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x3f8) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x410) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x408) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = uStack_d8;
  *puVar2 = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 1000) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x448) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x430) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x428) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x440) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x438) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x420) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x418) = uStack_a0;
  FUN_101570e20(&uStack_e0,auStack_da8,0x112db3b88,&UNK_10d95e000);
  func_0x000101570e68(&uStack_9d0,0x112db3b88,&UNK_10d95e000);
  func_0x000107c61428(param_1 + 0x450,auStack_da8,0,0);
  uVar3 = *(undefined1 *)(param_1 + 0x450);
  func_0x000107c61428(unaff_x20 + 0x450,auStack_dc0,1,0);
  *(undefined1 *)(unaff_x20 + 0x450) = uVar3;
  func_0x000107c61428(param_1 + 0x458,auStack_dd8,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x458);
  uVar3 = *(undefined1 *)(param_1 + 0x460);
  func_0x000107c61428(unaff_x20 + 0x458,auStack_df0,1,0);
  *(undefined8 *)(unaff_x20 + 0x458) = uVar9;
  *(undefined1 *)(unaff_x20 + 0x460) = uVar3;
  func_0x000107c61428(param_1 + 0x468,auStack_e08,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x468);
  uVar9 = *(undefined8 *)(param_1 + 0x470);
  func_0x000107c61428(unaff_x20 + 0x468,auStack_e20,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x470);
  *(undefined8 *)(unaff_x20 + 0x468) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x470) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar10);
  func_0x000107c61428(param_1 + 0x478,auStack_e38,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x478);
  uVar9 = *(undefined8 *)(param_1 + 0x480);
  func_0x000107c61428(unaff_x20 + 0x478,auStack_e50,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x480);
  *(undefined8 *)(unaff_x20 + 0x478) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x480) = uVar9;
  func_0x000107c61434(uVar9);
  func_0x000107c6142c(uVar10);
  func_0x000107c61428(param_1 + 0x488,auStack_e68,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x488);
  uVar10 = *(undefined8 *)(param_1 + 0x490);
  func_0x000107c61434(uVar10);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x488,auStack_e80,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x490);
  *(undefined8 *)(unaff_x20 + 0x488) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x490) = uVar10;
  func_0x000107c6142c(uVar9);
  return;
}



/* Entry: 10156c73c; end: 10156c767;  */

void FUN_10156c73c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10156c768; end: 10156c7b7;  */

byte FUN_10156c768(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xd8) ^ 0xff;
  if (*(byte *)(param_1 + 0xd8) < 0xe) {
    bVar1 = 0;
  }
  return bVar1;
}



/* Entry: 10156c7b8; end: 10156c84f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10156c7b8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_3);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 10156c850; end: 10156c8bf;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10156c850(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 10156c8c0; end: 10156ca97;  */

void FUN_10156c8c0(void)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  FUN_101571648(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  func_0x000101570e68(unaff_x20 + 0x78,0x112db4a30,&UNK_10d95f588);
  func_0x00010156c804(*(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                      *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                      *(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x00010156c888(*(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x228));
  FUN_101571358(*(undefined8 *)(unaff_x20 + 0x240),*(undefined8 *)(unaff_x20 + 0x248),
                *(undefined8 *)(unaff_x20 + 0x250),*(undefined8 *)(unaff_x20 + 600),
                *(undefined8 *)(unaff_x20 + 0x260),*(undefined8 *)(unaff_x20 + 0x268),
                *(undefined8 *)(unaff_x20 + 0x270),*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x290));
  FUN_1015713a4(*(undefined8 *)(unaff_x20 + 0x2a8),*(undefined8 *)(unaff_x20 + 0x2b0),
                *(undefined8 *)(unaff_x20 + 0x2b8),*(undefined8 *)(unaff_x20 + 0x2c0),
                *(undefined8 *)(unaff_x20 + 0x2c8),*(undefined8 *)(unaff_x20 + 0x2d0),
                *(undefined8 *)(unaff_x20 + 0x2d8),*(undefined8 *)(unaff_x20 + 0x2e0),
                *(undefined8 *)(unaff_x20 + 0x2e8),*(undefined8 *)(unaff_x20 + 0x2f0),
                *(undefined8 *)(unaff_x20 + 0x2f8),*(undefined8 *)(unaff_x20 + 0x300),
                *(undefined8 *)(unaff_x20 + 0x308),*(undefined8 *)(unaff_x20 + 0x310),
                *(undefined8 *)(unaff_x20 + 0x318));
  FUN_101571478(*(undefined8 *)(unaff_x20 + 800),*(undefined8 *)(unaff_x20 + 0x328),
                *(undefined8 *)(unaff_x20 + 0x330),*(undefined8 *)(unaff_x20 + 0x338),
                *(undefined8 *)(unaff_x20 + 0x340),*(undefined8 *)(unaff_x20 + 0x348),
                *(undefined8 *)(unaff_x20 + 0x350),*(undefined8 *)(unaff_x20 + 0x358),
                *(undefined8 *)(unaff_x20 + 0x360),*(undefined8 *)(unaff_x20 + 0x368),
                *(undefined8 *)(unaff_x20 + 0x370),*(undefined8 *)(unaff_x20 + 0x378),
                *(undefined8 *)(unaff_x20 + 0x380),*(undefined8 *)(unaff_x20 + 0x388));
  FUN_101553ccc(*(undefined8 *)(unaff_x20 + 0x390),*(undefined8 *)(unaff_x20 + 0x398),
                *(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x3c0));
  FUN_101571588(*(undefined8 *)(unaff_x20 + 0x3d8),*(undefined8 *)(unaff_x20 + 0x3e0),
                *(undefined8 *)(unaff_x20 + 1000),*(undefined8 *)(unaff_x20 + 0x3f0),
                *(undefined8 *)(unaff_x20 + 0x3f8),*(undefined8 *)(unaff_x20 + 0x400),
                *(undefined8 *)(unaff_x20 + 0x408),*(undefined8 *)(unaff_x20 + 0x410),
                *(undefined8 *)(unaff_x20 + 0x418),*(undefined8 *)(unaff_x20 + 0x420),
                *(undefined8 *)(unaff_x20 + 0x428),*(undefined8 *)(unaff_x20 + 0x430),
                *(undefined8 *)(unaff_x20 + 0x438),*(undefined8 *)(unaff_x20 + 0x440),
                *(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x490));
  return;
}



/* Entry: 10156ca98; end: 10156cb27;  */

void FUN_10156ca98(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_10156a514(0);
    func_0x000107c613fc();
    FUN_10156ba78(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_10156cb28();
  return;
}



/* Entry: 10156cb28; end: 10156cf97;  */

/* WARNING: Removing unreachable block (ram,0x00010156cca4) */
/* WARNING: Removing unreachable block (ram,0x00010156ce78) */
/* WARNING: Removing unreachable block (ram,0x00010156ccdc) */
/* WARNING: Removing unreachable block (ram,0x00010156ce5c) */
/* WARNING: Removing unreachable block (ram,0x00010156cc48) */
/* WARNING: Removing unreachable block (ram,0x00010156ce94) */
/* WARNING: Removing unreachable block (ram,0x00010156ce00) */
/* WARNING: Removing unreachable block (ram,0x00010156cd1c) */
/* WARNING: Removing unreachable block (ram,0x00010156cf30) */
/* WARNING: Removing unreachable block (ram,0x00010156cf14) */
/* WARNING: Removing unreachable block (ram,0x00010156cde4) */
/* WARNING: Removing unreachable block (ram,0x00010156cc64) */
/* WARNING: Removing unreachable block (ram,0x00010156ccc0) */
/* WARNING: Removing unreachable block (ram,0x00010156ced4) */
/* WARNING: Removing unreachable block (ram,0x00010156ce1c) */
/* WARNING: Removing unreachable block (ram,0x00010156cdc8) */
/* WARNING: Removing unreachable block (ram,0x00010156cf94) */

void FUN_10156cb28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        func_0x000107c61428(param_1 + 0x10,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0x10;
        goto code_r0x00010156cbb0;
      case 2:
        FUN_10156cf98(param_2,param_1,param_3,param_4);
        break;
      case 3:
        func_0x000107c61428(param_1 + 0x30,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x30;
        goto code_r0x00010156cbb0;
      case 4:
        func_0x000107c61428(param_1 + 0x40,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x40;
        goto code_r0x00010156cbb0;
      case 5:
        FUN_10156d02c(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_10156d0c0(param_2,param_1,param_3,param_4);
        break;
      case 7:
        FUN_10156d154(param_2,param_1,param_3,param_4);
        break;
      case 8:
        func_0x000107c61428(param_1 + 0x1c8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x1c8;
        goto code_r0x00010156cbb0;
      case 9:
        FUN_10156d1e8(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_10156d27c(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        func_0x000107c61428(param_1 + 0x218,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x218;
        goto code_r0x00010156cbb0;
      case 0xc:
        func_0x000107c61428(param_1 + 0x220,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x60);
        lVar2 = param_1 + 0x220;
        goto code_r0x00010156cbb0;
      case 0xd:
        FUN_10156d310(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_10156d3a4(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_10156d438(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        func_0x000107c61428(param_1 + 0x280,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x280;
        goto code_r0x00010156cbb0;
      case 0x11:
        FUN_10156d4cc(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_10156d560(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_10156d5f4(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_10156d688(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_10156d71c(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        func_0x000107c61428(param_1 + 0x3a8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x3a8;
        goto code_r0x00010156cbb0;
      case 0x17:
        func_0x000107c61428(param_1 + 0x3b8,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x3b8;
        goto code_r0x00010156cbb0;
      case 0x18:
        FUN_10156d7b0(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_10156d844(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        func_0x000107c61428(param_1 + 0x450,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0x450;
        goto code_r0x00010156cbb0;
      case 0x1b:
        FUN_10156d8d8(param_2,param_1,param_3,param_4);
        break;
      case 0x1c:
        func_0x000107c61428(param_1 + 0x468,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x468;
        goto code_r0x00010156cbb0;
      case 0x1d:
        func_0x000107c61428(param_1 + 0x478,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x478;
        goto code_r0x00010156cbb0;
      case 0x1e:
        func_0x000107c61428(param_1 + 0x488,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x150);
        lVar2 = param_1 + 0x488;
code_r0x00010156cbb0:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10156cf98; end: 10156d02b;  */

void FUN_10156cf98(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000101568cc4();
  (*pcVar2)(param_2 + 0x20,&UNK_110664c98,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d02c; end: 10156d0bf;  */

void FUN_10156d02c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x50;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  FUN_10157177c();
  (*pcVar2)(param_2 + 0x50,&UNK_1103dda88,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d0c0; end: 10156d153;  */

void FUN_10156d0c0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x60;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101571abc();
  (*pcVar2)(param_2 + 0x60,&UNK_1103e8a70,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d154; end: 10156d1e7;  */

void FUN_10156d154(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_10153befc();
  (*pcVar2)(param_2 + 0x78,&UNK_1103e3f30,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d1e8; end: 10156d27b;  */

void FUN_10156d1e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1d0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101571a7c();
  (*pcVar2)(param_2 + 0x1d0,&UNK_1103eafe8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d27c; end: 10156d30f;  */

void FUN_10156d27c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1f8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000101571a3c();
  (*pcVar2)(param_2 + 0x1f8,&UNK_1103e6f98,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d310; end: 10156d3a3;  */

void FUN_10156d310(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x228;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001015717bc();
  (*pcVar2)(param_2 + 0x228,&UNK_1103e3cf0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d3a4; end: 10156d437;  */

void FUN_10156d3a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x230;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015718fc();
  (*pcVar2)(param_2 + 0x230,&UNK_11066ad20,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d438; end: 10156d4cb;  */

void FUN_10156d438(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x240;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015719fc();
  (*pcVar2)(param_2 + 0x240,&UNK_1103e6b28,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d4cc; end: 10156d55f;  */

void FUN_10156d4cc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x290;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001015717fc();
  (*pcVar2)(param_2 + 0x290,&UNK_1103e7250,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d560; end: 10156d5f3;  */

void FUN_10156d560(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x298;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015718bc();
  (*pcVar2)(param_2 + 0x298,&UNK_1103e3998,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 10156d5f4; end: 10156d687;  */

void FUN_10156d5f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x2a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015719bc();
  (*pcVar2)(param_2 + 0x2a8,&UNK_11065e910,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


