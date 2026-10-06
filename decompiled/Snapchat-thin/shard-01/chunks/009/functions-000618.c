/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101665600; end: 101665637;  */

uint FUN_101665600(long param_1,long param_2)

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
  FUN_101666c84();
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



/* Entry: 101665638; end: 10166568f;  */

uint FUN_101665638(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_1016658e0(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101665690; end: 10166572f;  */

/* WARNING: Possible PIC construction at 0x0001016656dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016656ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016656e0) */
/* WARNING: Removing unreachable block (ram,0x0001016656f0) */

void FUN_101665690(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd270 != -1) {
    func_0x000107c61568(0x112dbd270,FUN_10166524c);
  }
  uVar5 = uRam00000001138027f0;
  uVar4 = uRam00000001138027e8;
  uVar3 = uRam00000001138027e0;
  uVar2 = uRam00000001138027d8;
  uVar1 = uRam00000001138027d0;
  *param_1 = uRam00000001138027c8;
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



/* Entry: 101665730; end: 10166576b;  */

void FUN_101665730(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd300;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd300,&UNK_10d9769c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10166576c; end: 101665887;  */

void FUN_10166576c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101665888; end: 1016658df;  */

uint FUN_101665888(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1016658e0(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1016658e0; end: 1016659eb;  */

/* WARNING: Possible PIC construction at 0x000101665910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101665954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101665958) */
/* WARNING: Removing unreachable block (ram,0x000101665914) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1016658e0(undefined8 *param_1,undefined8 *param_2)

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
  byte *pbVar26;
  ulong unaff_x22;
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
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar12 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar13 = (byte *)param_2[5];
    if ((pbVar12 == pbVar17) && (pbVar16 == pbVar13)) {
      lVar19 = param_1[6];
      lVar22 = param_2[6];
      if (*(char *)(param_2 + 7) == '\x01') {
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
      uVar14 = param_1[8];
      if (((uVar14 != param_2[8]) || (param_1[9] != param_2[9])) &&
         (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
        return (byte *)0x0;
      }
      pbVar10 = (byte *)param_1[10];
      pbVar26 = (byte *)param_1[0xb];
      lVar19 = param_2[10];
      uVar14 = param_2[0xb];
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
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
             ((uVar14 >> 0x3e < 3 || ((uVar21 = 0, lVar19 != 0 || (uVar14 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
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
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar14 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar20 = (int)((ulong)lVar19 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
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
            uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
            if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
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
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar15 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar26;
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
                  goto LAB_100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto LAB_100e26260;
              }
              lVar22 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar22,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar22 - (long)pbVar15);
              }
              unaff_x23 = unaff_x24 + -lVar22;
              if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
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
LAB_100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar19,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
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
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar19 = *(long *)pbVar15;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
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
            lVar19 = *(long *)pbVar15;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar19,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar16 = pbVar26;
            if ((pbVar10 == pbVar17) && (pbVar26 == pbVar13)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar13 = *(byte **)(pbVar15 + 8);
            lVar19 = *(long *)(pbVar15 + 0x18);
            if ((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar19);
                func_0x000107c61174();
                pbVar13 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar19);
                pbVar25 = pbVar13;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar19 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          break;
        }
        lVar22 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar13 = *(byte **)(pbVar15 + 8);
            if (((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) &&
               (pbVar12 = pbVar26, pbVar16 = pbVar25, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar13 = *(byte **)(pbVar15 + 0x18),
               pbVar26 == *(byte **)(pbVar15 + 0x10) && pbVar25 == *(byte **)(pbVar15 + 0x18))) {
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
          lVar19 = *(long *)(pbVar15 + 0x20);
          if (pbVar26 == (byte *)0x0) {
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
            pbVar16 = pbVar26;
            if ((pbVar10 != pbVar17) || (pbVar26 != pbVar13)) break;
          }
          if (lVar22 != 0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar15 + 0x18)) && (lVar22 == lVar19)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar15 + 0x18),lVar19,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar22 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar22 = *(long *)(pbVar15 + 0x20);
            lVar19 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar19;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar22;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar22 == 0)) {
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
          lVar22 = *(long *)(pbVar15 + 0x20);
          lVar19 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar19;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar19 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar19 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar19 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar19 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar19 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar19 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar19 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar22;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar22 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar22 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar22 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar22 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar22 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar22 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
          lVar19 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar19 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar22 = *(long *)pbVar15;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar12,pbVar16,pbVar17,pbVar13,0);
  return pbVar12;
}



/* Entry: 1016659ec; end: 101665a2b;  */

void FUN_1016659ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d976500;
  func_0x000107c61520(&DAT_10d976500,&UNK_1103efcd0);
  puRam0000000112dbd260 = puVar1;
  return;
}



/* Entry: 101665a2c; end: 101665dab;  */

uint FUN_101665a2c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 auStack_3a0 [96];
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
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
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar2 = param_1[2];
    FUN_100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[4];
      if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar2 = param_1[6];
        if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[8];
          if (((uVar2 == param_2[8]) && (param_1[9] == param_2[9])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar2 = param_1[10];
            if ((((uVar2 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
                (func_0x000107c605b8(), (uVar2 & 1) != 0)) &&
               ((((byte)param_1[0xc] ^ (byte)param_2[0xc]) & 1) == 0)) {
              uStack_d8 = param_1[0x16];
              uStack_e0 = param_1[0x15];
              uStack_c8 = param_1[0x18];
              uStack_d0 = param_1[0x17];
              uStack_b8 = param_1[0x1a];
              uStack_c0 = param_1[0x19];
              uStack_a8 = param_1[0x1c];
              uStack_b0 = param_1[0x1b];
              uStack_f8 = param_1[0x12];
              uStack_100 = param_1[0x11];
              uStack_e8 = param_1[0x14];
              uStack_f0 = param_1[0x13];
              uStack_138 = param_2[0x16];
              uStack_140 = param_2[0x15];
              uStack_128 = param_2[0x18];
              uStack_130 = param_2[0x17];
              uStack_118 = param_2[0x1a];
              uStack_120 = param_2[0x19];
              uStack_108 = param_2[0x1c];
              uStack_110 = param_2[0x1b];
              uStack_158 = param_2[0x12];
              uStack_160 = param_2[0x11];
              uStack_148 = param_2[0x14];
              uStack_150 = param_2[0x13];
              uStack_1f8 = param_1[0x16];
              uStack_200 = param_1[0x15];
              uStack_1e8 = param_1[0x18];
              uStack_1f0 = param_1[0x17];
              uStack_1d8 = param_1[0x1a];
              uStack_1e0 = param_1[0x19];
              uStack_1c8 = param_1[0x1c];
              uStack_1d0 = param_1[0x1b];
              uStack_218 = param_1[0x12];
              uStack_220 = param_1[0x11];
              uStack_208 = param_1[0x14];
              uStack_210 = param_1[0x13];
              uStack_258 = param_2[0x16];
              uStack_260 = param_2[0x15];
              uStack_248 = param_2[0x18];
              uStack_250 = param_2[0x17];
              uStack_238 = param_2[0x1a];
              uStack_240 = param_2[0x19];
              uStack_228 = param_2[0x1c];
              uStack_230 = param_2[0x1b];
              uStack_278 = param_2[0x12];
              uStack_280 = param_2[0x11];
              uStack_268 = param_2[0x14];
              uStack_270 = param_2[0x13];
              uStack_1c0 = uStack_280;
              uStack_1b8 = uStack_278;
              uStack_1b0 = uStack_270;
              uStack_1a8 = uStack_268;
              uStack_1a0 = uStack_260;
              uStack_198 = uStack_258;
              uStack_190 = uStack_250;
              uStack_188 = uStack_248;
              uStack_180 = uStack_240;
              uStack_178 = uStack_238;
              uStack_170 = uStack_230;
              uStack_168 = uStack_228;
              if (uStack_218 == 0) {
                if (uStack_278 != 0) goto LAB_101665c98;
                uStack_2b8 = param_1[0x16];
                uStack_2c0 = param_1[0x15];
                uStack_2a8 = param_1[0x18];
                uStack_2b0 = param_1[0x17];
                uStack_298 = param_1[0x1a];
                uStack_2a0 = param_1[0x19];
                uStack_288 = param_1[0x1c];
                uStack_290 = param_1[0x1b];
                uStack_2d8 = param_1[0x12];
                uStack_2e0 = param_1[0x11];
                uStack_2c8 = param_1[0x14];
                uStack_2d0 = param_1[0x13];
                FUN_1016644ac(&uStack_100,&uStack_a0);
                FUN_1016644ac(&uStack_160,&uStack_a0);
                func_0x0001016645ec(&uStack_2e0,0x112dbd238,&UNK_10d9764f0);
LAB_101665d54:
                uVar2 = param_1[0xd];
                uVar4 = param_2[0xd];
                if ((char)param_2[0xe] == '\x01') {
                  if (uVar4 == 0) {
                    if (uVar2 == 0) goto LAB_101665d9c;
                  }
                  else if (uVar4 == 1) {
                    if (uVar2 == 1) {
LAB_101665d9c:
                      uVar2 = param_1[0xf];
                      FUN_100e25fcc(uVar2,param_1[0x10],param_2[0xf],param_2[0x10]);
                      uVar1 = (uint)uVar2;
                      goto LAB_101665b24;
                    }
                  }
                  else if (uVar2 == 2) goto LAB_101665d9c;
                }
                else if (uVar2 == uVar4) goto LAB_101665d9c;
              }
              else {
                if (uStack_278 == 0) {
LAB_101665c98:
                  uStack_2e0 = uStack_220;
                  uStack_2d8 = uStack_218;
                  uStack_2d0 = uStack_210;
                  uStack_2c8 = uStack_208;
                  uStack_2c0 = uStack_200;
                  uStack_2b8 = uStack_1f8;
                  uStack_2b0 = uStack_1f0;
                  uStack_2a8 = uStack_1e8;
                  uStack_2a0 = uStack_1e0;
                  uStack_298 = uStack_1d8;
                  uStack_290 = uStack_1d0;
                  uStack_288 = uStack_1c8;
                  FUN_1016644ac(&uStack_100,&uStack_a0);
                  FUN_1016644ac(&uStack_160,&uStack_a0);
                  func_0x0001016645ec(&uStack_2e0,0x112dbd240,&UNK_10d9764f8);
                  uVar1 = 0;
                  goto LAB_101665b24;
                }
                uStack_318 = param_2[0x16];
                uStack_320 = param_2[0x15];
                uStack_308 = param_2[0x18];
                uStack_310 = param_2[0x17];
                uStack_2f8 = param_2[0x1a];
                uStack_300 = param_2[0x19];
                uStack_2e8 = param_2[0x1c];
                uStack_2f0 = param_2[0x1b];
                uStack_338 = param_2[0x12];
                uStack_340 = param_2[0x11];
                uStack_328 = param_2[0x14];
                uStack_330 = param_2[0x13];
                uStack_78 = param_1[0x16];
                uStack_80 = param_1[0x15];
                uStack_68 = param_1[0x18];
                uStack_70 = param_1[0x17];
                uStack_58 = param_1[0x1a];
                uStack_60 = param_1[0x19];
                uStack_48 = param_1[0x1c];
                uStack_50 = param_1[0x1b];
                uStack_98 = param_1[0x12];
                uStack_a0 = param_1[0x11];
                uStack_88 = param_1[0x14];
                uStack_90 = param_1[0x13];
                uStack_2e0 = uStack_340;
                uStack_2d8 = uStack_338;
                uStack_2d0 = uStack_330;
                uStack_2c8 = uStack_328;
                uStack_2c0 = uStack_320;
                uStack_2b8 = uStack_318;
                uStack_2b0 = uStack_310;
                uStack_2a8 = uStack_308;
                uStack_2a0 = uStack_300;
                uStack_298 = uStack_2f8;
                uStack_290 = uStack_2f0;
                uStack_288 = uStack_2e8;
                FUN_1016644ac(&uStack_100,auStack_3a0);
                FUN_1016644ac(&uStack_160,auStack_3a0);
                puVar3 = &uStack_a0;
                FUN_1016658e0(puVar3,&uStack_2e0);
                func_0x0001016645ec(&uStack_340,0x112dbd238,&UNK_10d9764f0);
                func_0x0001016645ec(&uStack_220,0x112dbd238,&UNK_10d9764f0);
                if (((ulong)puVar3 & 1) != 0) goto LAB_101665d54;
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_101665b24:
  return uVar1 & 1;
}



/* Entry: 101665dac; end: 101665e6b;  */

void FUN_101665dac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd268 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976790;
  func_0x000107c61520(&UNK_10d976790,&UNK_1103efdd8);
  puRam0000000112dbd268 = puVar1;
  return;
}



/* Entry: 101665e6c; end: 101665e7f;  */

void FUN_101665e6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101665e80();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101665ec0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101665e80; end: 101665f2b;  */

void FUN_101665e80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976598;
  func_0x000107c61520(&UNK_10d976598,&UNK_1103efcd0);
  puRam0000000112dbd288 = puVar1;
  return;
}



/* Entry: 101665f2c; end: 101665f2f;  */

void FUN_101665f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9765d8;
  func_0x000107c61520(&UNK_10d9765d8,&UNK_1103efcd0);
  puRam0000000112dbd2a8 = puVar1;
  return;
}



/* Entry: 101665f30; end: 101665f6f;  */

void FUN_101665f30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9765d8;
  func_0x000107c61520(&UNK_10d9765d8,&UNK_1103efcd0);
  puRam0000000112dbd2a8 = puVar1;
  return;
}



/* Entry: 101665f70; end: 101665f83;  */

void FUN_101665f70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101665f84();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101665fc4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101665f84; end: 10166602f;  */

void FUN_101665f84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976698;
  func_0x000107c61520(&UNK_10d976698,&UNK_1103efd60);
  puRam0000000112dbd2b0 = puVar1;
  return;
}



/* Entry: 101666030; end: 101666073;  */

void FUN_101666030(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101666074; end: 101666077;  */

void FUN_101666074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9766d8;
  func_0x000107c61520(&UNK_10d9766d8,&UNK_1103efd60);
  puRam0000000112dbd2d0 = puVar1;
  return;
}



/* Entry: 101666078; end: 1016660b7;  */

void FUN_101666078(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9766d8;
  func_0x000107c61520(&UNK_10d9766d8,&UNK_1103efd60);
  puRam0000000112dbd2d0 = puVar1;
  return;
}



/* Entry: 1016660b8; end: 1016660db;  */

void FUN_1016660b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016660dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016660dc; end: 10166611b;  */

void FUN_1016660dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976768;
  func_0x000107c61520(&UNK_10d976768,&UNK_1103efdd8);
  puRam0000000112dbd2d8 = puVar1;
  return;
}



/* Entry: 10166611c; end: 101666133;  */

void FUN_10166611c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101665dac();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101568d44)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101666134; end: 101666173;  */

void FUN_101666134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9767d0;
  func_0x000107c61520(&UNK_10d9767d0,&UNK_1103efdd8);
  puRam0000000112dbd2e0 = puVar1;
  return;
}



/* Entry: 101666174; end: 101666197;  */

void FUN_101666174(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101666198();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101666198; end: 1016661d7;  */

void FUN_101666198(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d976840;
  func_0x000107c61520(&UNK_10d976840,&UNK_1103efe78);
  puRam0000000112dbd2e8 = puVar1;
  return;
}



/* Entry: 1016661d8; end: 1016661eb;  */

void FUN_1016661d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101665e2c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10166621c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016661ec; end: 10166621b;  */

void FUN_1016661ec(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10166621c; end: 10166625b;  */

void FUN_10166621c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9767f8;
  func_0x000107c61520(&DAT_10d9767f8,&UNK_1103efe78);
  puRam0000000112dbd2f0 = puVar1;
  return;
}



/* Entry: 10166625c; end: 10166625f;  */

void FUN_10166625c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9768a8;
  func_0x000107c61520(&UNK_10d9768a8,&UNK_1103efe78);
  puRam0000000112dbd2f8 = puVar1;
  return;
}



/* Entry: 101666260; end: 10166629f;  */

void FUN_101666260(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9768a8;
  func_0x000107c61520(&UNK_10d9768a8,&UNK_1103efe78);
  puRam0000000112dbd2f8 = puVar1;
  return;
}



/* Entry: 1016662a0; end: 1016662c7;  */

void FUN_1016662a0(void)

{
  return;
}



/* Entry: 1016662c8; end: 10166634f;  */

/* WARNING: Possible PIC construction at 0x0001016662e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010166630c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101666310) */
/* WARNING: Removing unreachable block (ram,0x000101666344) */
/* WARNING: Removing unreachable block (ram,0x000101666318) */
/* WARNING: Removing unreachable block (ram,0x0001016662e8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1016662c8(long param_1)

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



/* Entry: 101666350; end: 1016664af;  */

undefined8 * FUN_101666350(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[2];
  uVar1 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar6,uVar1);
  param_1[2] = uVar6;
  param_1[3] = uVar1;
  uVar6 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  uVar3 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar3;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar6 = param_2[0xf];
  uVar4 = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar6,uVar4);
  param_1[0xf] = uVar6;
  param_1[0x10] = uVar4;
  lVar5 = param_2[0x12];
  if (lVar5 == 0) {
    uVar6 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar6;
    uVar6 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar6;
    uVar6 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar6;
    uVar6 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar6;
    uVar6 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar6;
    uVar6 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar6;
  }
  else {
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = lVar5;
    uVar1 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = uVar1;
    uVar2 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = uVar2;
    param_1[0x17] = param_2[0x17];
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    uVar3 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = uVar3;
    uVar6 = param_2[0x1b];
    uVar4 = param_2[0x1c];
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    func_0x00010006c00c(uVar6,uVar4);
    param_1[0x1b] = uVar6;
    param_1[0x1c] = uVar4;
  }
  return param_1;
}



/* Entry: 1016664b0; end: 101666783;  */

undefined8 * FUN_1016664b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar1,uVar3);
  uVar6 = param_1[2];
  uVar4 = param_1[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x00010006c090(uVar6,uVar4);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar1 = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  uVar3 = param_2[0x10];
  func_0x00010006c00c(uVar1,uVar3);
  uVar6 = param_1[0xf];
  uVar4 = param_1[0x10];
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar3;
  func_0x00010006c090(uVar6,uVar4);
  lVar2 = param_1[0x12];
  if (lVar2 == 0) {
    if (param_2[0x12] == 0) {
      uVar6 = param_2[0x12];
      uVar1 = param_2[0x11];
      uVar3 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar3;
      param_1[0x12] = uVar6;
      param_1[0x11] = uVar1;
      uVar6 = param_2[0x16];
      uVar1 = param_2[0x15];
      uVar4 = param_2[0x18];
      uVar3 = param_2[0x17];
      uVar7 = param_2[0x1a];
      uVar5 = param_2[0x19];
      uVar8 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar8;
      param_1[0x1a] = uVar7;
      param_1[0x19] = uVar5;
      param_1[0x18] = uVar4;
      param_1[0x17] = uVar3;
      param_1[0x16] = uVar6;
      param_1[0x15] = uVar1;
    }
    else {
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      uVar3 = param_2[0x14];
      param_1[0x14] = uVar3;
      param_1[0x15] = param_2[0x15];
      uVar4 = param_2[0x16];
      param_1[0x16] = uVar4;
      uVar1 = param_2[0x17];
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
      param_1[0x17] = uVar1;
      param_1[0x19] = param_2[0x19];
      uVar5 = param_2[0x1a];
      param_1[0x1a] = uVar5;
      uVar1 = param_2[0x1b];
      uVar6 = param_2[0x1c];
      func_0x000107c61434();
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x00010006c00c(uVar1,uVar6);
      param_1[0x1b] = uVar1;
      param_1[0x1c] = uVar6;
    }
  }
  else if (param_2[0x12] == 0) {
    FUN_101541578(param_1 + 0x11);
    uVar6 = param_2[0x14];
    uVar1 = param_2[0x13];
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    param_1[0x14] = uVar6;
    param_1[0x13] = uVar1;
    uVar6 = param_2[0x18];
    uVar1 = param_2[0x17];
    uVar4 = param_2[0x1a];
    uVar3 = param_2[0x19];
    uVar7 = param_2[0x1c];
    uVar5 = param_2[0x1b];
    uVar8 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar8;
    param_1[0x1c] = uVar7;
    param_1[0x1b] = uVar5;
    param_1[0x1a] = uVar4;
    param_1[0x19] = uVar3;
    param_1[0x18] = uVar6;
    param_1[0x17] = uVar1;
  }
  else {
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
    param_1[0x13] = param_2[0x13];
    uVar1 = param_1[0x14];
    param_1[0x14] = param_2[0x14];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
    param_1[0x15] = param_2[0x15];
    uVar1 = param_1[0x16];
    param_1[0x16] = param_2[0x16];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
    uVar1 = param_2[0x17];
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
    param_1[0x17] = uVar1;
    param_1[0x19] = param_2[0x19];
    uVar1 = param_1[0x1a];
    param_1[0x1a] = param_2[0x1a];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
    uVar1 = param_2[0x1b];
    uVar3 = param_2[0x1c];
    func_0x00010006c00c(uVar1,uVar3);
    uVar6 = param_1[0x1b];
    uVar4 = param_1[0x1c];
    param_1[0x1b] = uVar1;
    param_1[0x1c] = uVar3;
    func_0x00010006c090(uVar6,uVar4);
  }
  return param_1;
}



/* Entry: 101666784; end: 1016668d7;  */

undefined8 * FUN_101666784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  func_0x000107c6142c(uVar1);
  uVar4 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar4,uVar1);
  uVar4 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  func_0x000107c6142c(uVar1);
  uVar4 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  func_0x000107c6142c(uVar1);
  uVar4 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  func_0x000107c6142c(uVar1);
  uVar4 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar4;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  uVar4 = param_1[0xf];
  uVar1 = param_1[0x10];
  uVar3 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar3;
  func_0x00010006c090(uVar4,uVar1);
  if (param_1[0x12] != 0) {
    lVar2 = param_2[0x12];
    if (lVar2 != 0) {
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = lVar2;
      func_0x000107c6142c();
      uVar4 = param_2[0x14];
      uVar1 = param_1[0x14];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = uVar4;
      func_0x000107c6142c(uVar1);
      uVar4 = param_2[0x16];
      uVar1 = param_1[0x16];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = uVar4;
      func_0x000107c6142c(uVar1);
      param_1[0x17] = param_2[0x17];
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
      uVar4 = param_2[0x1a];
      uVar1 = param_1[0x1a];
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = uVar4;
      func_0x000107c6142c(uVar1);
      uVar4 = param_1[0x1b];
      uVar1 = param_1[0x1c];
      uVar3 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar3;
      func_0x00010006c090(uVar4,uVar1);
      return param_1;
    }
    FUN_101541578(param_1 + 0x11);
  }
  uVar4 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar4;
  uVar4 = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar4;
  uVar4 = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x19] = uVar4;
  uVar4 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar4;
  uVar4 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar4;
  uVar4 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar4;
  return param_1;
}



/* Entry: 1016668d8; end: 1016669a7;  */

int FUN_1016668d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x3a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016669a8; end: 1016669e7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1016669a8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x48));
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



/* Entry: 1016669e8; end: 101666a77;  */

undefined8 * FUN_1016669e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar1 = param_2[10];
  uVar5 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar1,uVar5);
  param_1[10] = uVar1;
  param_1[0xb] = uVar5;
  return param_1;
}



/* Entry: 101666a78; end: 101666b4f;  */

undefined8 * FUN_101666a78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar4;
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[10];
  uVar2 = param_2[0xb];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[10];
  uVar3 = param_1[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 101666b50; end: 101666bd3;  */

undefined8 * FUN_101666b50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101666bd4; end: 101666c83;  */

int FUN_101666bd4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101666c84; end: 101666d03;  */

void FUN_101666c84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbd308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d976814;
  func_0x000107c61520(&DAT_10d976814,&UNK_1103efe78);
  puRam0000000112dbd308 = puVar1;
  return;
}



/* Entry: 101666d04; end: 101666d73;  */

void FUN_101666d04(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101666d74; end: 101666e17;  */

void FUN_101666d74(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10166c8d0();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101666e18; end: 101666e2f;  */

void FUN_101666e18(ulong *param_1,ulong param_2)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_2 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101666e30; end: 101666e6f;  */

void FUN_101666e30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbd408;
  func_0x0001000285a8(0x112dbd408,&UNK_10d976b70);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101666e70; end: 101666e8b;  */

void FUN_101666e70(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101666e8c; end: 101666f0f;  */

void FUN_101666e8c(void)

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



/* Entry: 101666f10; end: 101666f6f;  */

void FUN_101666f10(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0xe000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0xe000000000000000;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x12] = 0xc000000000000000;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  return;
}



/* Entry: 101666f70; end: 10166700f;  */

uint FUN_101666f70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10166ce20(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101667010; end: 1016670af;  */

/* WARNING: Possible PIC construction at 0x00010166705c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010166706c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101667060) */
/* WARNING: Removing unreachable block (ram,0x000101667070) */

void FUN_101667010(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd430 != -1) {
    func_0x000107c61568(0x112dbd430,0x101666fc8);
  }
  uVar5 = uRam0000000113802820;
  uVar4 = uRam0000000113802818;
  uVar3 = uRam0000000113802810;
  uVar2 = uRam0000000113802808;
  uVar1 = uRam0000000113802800;
  *param_1 = uRam00000001138027f8;
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



/* Entry: 1016670b0; end: 1016670f7;  */

void FUN_1016670b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d977910,0x2b,2);
  uRam0000000113802830 = uStack_38;
  uRam0000000113802828 = uStack_40;
  uRam0000000113802840 = uStack_28;
  uRam0000000113802838 = uStack_30;
  uRam0000000113802850 = uStack_18;
  uRam0000000113802848 = uStack_20;
  return;
}



/* Entry: 1016670f8; end: 101667197;  */

/* WARNING: Possible PIC construction at 0x000101667144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101667154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101667148) */
/* WARNING: Removing unreachable block (ram,0x000101667158) */

void FUN_1016670f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd438 != -1) {
    func_0x000107c61568(0x112dbd438,FUN_1016670b0);
  }
  uVar5 = uRam0000000113802850;
  uVar4 = uRam0000000113802848;
  uVar3 = uRam0000000113802840;
  uVar2 = uRam0000000113802838;
  uVar1 = uRam0000000113802830;
  *param_1 = uRam0000000113802828;
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



/* Entry: 101667198; end: 1016671df;  */

void FUN_101667198(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d977840,199,2);
  uRam0000000113802860 = uStack_38;
  uRam0000000113802858 = uStack_40;
  uRam0000000113802870 = uStack_28;
  uRam0000000113802868 = uStack_30;
  uRam0000000113802880 = uStack_18;
  uRam0000000113802878 = uStack_20;
  return;
}



/* Entry: 1016671e0; end: 101667397;  */

/* WARNING: Removing unreachable block (ram,0x000101667388) */

void FUN_1016671e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar5 = *(code **)(param_3 + 0x168);
        break;
      case 2:
        pcVar5 = *(code **)(param_3 + 0x1a0);
        func_0x00010166cffc();
        lVar2 = unaff_x20 + 0x10;
        goto code_r0x000101667324;
      case 3:
        pcVar5 = *(code **)(param_3 + 0x1a0);
        func_0x00010166cffc();
        lVar2 = unaff_x20 + 0x18;
code_r0x000101667324:
        puVar3 = &UNK_1103f08c8;
        goto code_r0x000101667374;
      case 4:
        pcVar5 = *(code **)(param_3 + 0x1a0);
        func_0x00010166d03c();
        lVar2 = unaff_x20 + 0x20;
        puVar3 = &UNK_1103f0840;
        goto code_r0x000101667374;
      case 5:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 6:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 7:
        pcVar5 = *(code **)(param_3 + 0x180);
        func_0x00010166d07c();
        lVar2 = unaff_x20 + 0x48;
        puVar3 = &UNK_1103f0500;
        goto code_r0x000101667374;
      case 8:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 9:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 10:
        pcVar5 = *(code **)(param_3 + 0x180);
        func_0x00010166d0bc();
        lVar2 = unaff_x20 + 0x78;
        puVar3 = &UNK_1103f0590;
        goto code_r0x000101667374;
      case 0xb:
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_10166deb8();
        lVar2 = unaff_x20 + 0x98;
        puVar3 = &UNK_1103f06b0;
code_r0x000101667374:
        (*pcVar5)(lVar2,puVar3,uVar1,param_2,param_3);
      default:
        goto LAB_101667268;
      }
      (*pcVar5)();
LAB_101667268:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101667398; end: 101667673;  */

void FUN_101667398(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  code *pcVar9;
  long lStack_60;
  undefined1 uStack_58;
  
  lVar4 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar8 = (long)(int)lVar4;
      lVar7 = lVar4 >> 0x20;
      goto LAB_1016673fc;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_10166741c;
  }
  else {
    if (uVar6 != 2) goto LAB_10166741c;
    lVar8 = *(long *)(lVar4 + 0x10);
    lVar7 = *(long *)(lVar4 + 0x18);
LAB_1016673fc:
    if (lVar8 == lVar7) goto LAB_10166741c;
  }
  (**(code **)(param_3 + 0x78))(lVar4,uVar1,1,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10166741c:
  lVar8 = unaff_x20[2];
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_3 + 0x118);
    func_0x00010166cffc();
    (*pcVar9)(lVar8,2,&UNK_1103f08c8,lVar4,param_2,param_3);
    lVar4 = lVar8;
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar8 = unaff_x20[3];
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_3 + 0x118);
    func_0x00010166cffc();
    (*pcVar9)(lVar8,3,&UNK_1103f08c8,lVar4,param_2,param_3);
    lVar4 = lVar8;
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar8 = unaff_x20[4];
  if (*(long *)(lVar8 + 0x10) != 0) {
    pcVar9 = *(code **)(param_3 + 0x118);
    func_0x00010166d03c();
    (*pcVar9)(lVar8,4,&UNK_1103f0840,lVar4,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar5 = unaff_x20[6];
  uVar1 = unaff_x20[5] & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar1 = uVar5 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[5],uVar5,5,param_2,param_3), unaff_x21 == 0)) {
    uVar5 = unaff_x20[7];
    uVar2 = unaff_x20[8];
    uVar1 = uVar5 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar5,uVar2,6,param_2,param_3), unaff_x21 == 0)) {
      if (unaff_x20[9] != 0) {
        uStack_58 = (undefined1)unaff_x20[10];
        pcVar9 = *(code **)(param_3 + 0x80);
        lStack_60 = unaff_x20[9];
        func_0x00010166d07c();
        (*pcVar9)(&lStack_60,7,&UNK_1103f0500,uVar5,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      uVar5 = unaff_x20[0xc];
      uVar1 = unaff_x20[0xb] & 0xffffffffffff;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar1 = uVar5 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[0xb],uVar5,8,param_2,param_3), unaff_x21 == 0)) {
        uVar5 = unaff_x20[0xd];
        uVar2 = unaff_x20[0xe];
        uVar1 = uVar5 & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(uVar5,uVar2,9,param_2,param_3), unaff_x21 == 0)) {
          if (unaff_x20[0xf] != 0) {
            uStack_58 = (undefined1)unaff_x20[0x10];
            pcVar9 = *(code **)(param_3 + 0x80);
            lStack_60 = unaff_x20[0xf];
            func_0x00010166d0bc();
            (*pcVar9)(&lStack_60,10,&UNK_1103f0590,uVar5,param_2,param_3);
            if (unaff_x21 != 0) {
              return;
            }
          }
          FUN_101667674();
          if (unaff_x21 == 0) {
            func_0x000100076224(param_1,unaff_x20[0x11],unaff_x20[0x12],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 101667674; end: 10166770b;  */

void FUN_101667674(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_80 = *(long *)(param_1 + 0xa0);
  if (lStack_80 != 0) {
    uStack_88 = *(undefined8 *)(param_1 + 0x98);
    uStack_70 = *(undefined8 *)(param_1 + 0xb0);
    uStack_78 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xc0);
    uStack_68 = *(undefined8 *)(param_1 + 0xb8);
    uStack_50 = *(undefined8 *)(param_1 + 0xd0);
    uStack_58 = *(undefined8 *)(param_1 + 200);
    uStack_48 = *(undefined8 *)(param_1 + 0xd8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10166deb8();
    (*pcVar1)(&uStack_88,0xb,&UNK_1103f06b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10166770c; end: 101667793;  */

uint FUN_10166770c(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 auStack_2e8 [72];
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  long lStack_170;
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
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  uVar2 = *param_1;
  FUN_100e25fcc(uVar2,param_1[1],*param_2,param_2[1]);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1[2];
    FUN_10166b118(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_10166b118(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        func_0x00010166c0ec(uVar2,param_2[4]);
        if ((uVar2 & 1) != 0) {
          uVar2 = param_1[5];
          if (((uVar2 == param_2[5]) && (param_1[6] == param_2[6])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar2 = param_1[7];
            if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
               (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
              uVar2 = param_1[9];
              uVar4 = param_2[9];
              if (*(char *)(param_2 + 10) == '\x01') {
                if ((long)uVar4 < 3) {
                  if (uVar4 == 0) {
                    if (uVar2 == 0) goto LAB_10166d570;
                  }
                  else if (uVar4 == 1) {
                    if (uVar2 == 1) {
LAB_10166d570:
                      uVar2 = param_1[0xb];
                      if (((uVar2 == param_2[0xb]) && (param_1[0xc] == param_2[0xc])) ||
                         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                        uVar2 = param_1[0xd];
                        if (((uVar2 == param_2[0xd]) && (param_1[0xe] == param_2[0xe])) ||
                           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                          uVar2 = param_1[0xf];
                          uVar4 = param_2[0xf];
                          if (*(char *)(param_2 + 0x10) == '\x01') {
                            if (uVar4 == 0) {
                              if (uVar2 == 0) goto LAB_10166d648;
                            }
                            else if (uVar4 == 1) {
                              if (uVar2 == 1) {
LAB_10166d648:
                                uStack_c8 = param_1[0x16];
                                uStack_d0 = param_1[0x15];
                                uStack_b8 = param_1[0x18];
                                uStack_c0 = param_1[0x17];
                                uStack_a8 = param_1[0x1a];
                                uStack_b0 = param_1[0x19];
                                uStack_a0 = param_1[0x1b];
                                uStack_d8 = param_1[0x14];
                                uStack_e0 = param_1[0x13];
                                uStack_118 = param_2[0x16];
                                uStack_120 = param_2[0x15];
                                uStack_108 = param_2[0x18];
                                uStack_110 = param_2[0x17];
                                uStack_f8 = param_2[0x1a];
                                uStack_100 = param_2[0x19];
                                uStack_f0 = param_2[0x1b];
                                uStack_128 = param_2[0x14];
                                uStack_130 = param_2[0x13];
                                uStack_1a8 = param_1[0x16];
                                uStack_1b0 = param_1[0x15];
                                uStack_198 = param_1[0x18];
                                uStack_1a0 = param_1[0x17];
                                uStack_188 = param_1[0x1a];
                                uStack_190 = param_1[0x19];
                                uStack_180 = param_1[0x1b];
                                uStack_1b8 = param_1[0x14];
                                uStack_1c0 = param_1[0x13];
                                uStack_1f0 = param_2[0x16];
                                uStack_1f8 = param_2[0x15];
                                uStack_1e0 = param_2[0x18];
                                uStack_1e8 = param_2[0x17];
                                uStack_1d0 = param_2[0x1a];
                                uStack_1d8 = param_2[0x19];
                                uStack_1c8 = param_2[0x1b];
                                lStack_200 = param_2[0x14];
                                uStack_208 = param_2[0x13];
                                uStack_178 = uStack_208;
                                lStack_170 = lStack_200;
                                uStack_168 = uStack_1f8;
                                uStack_160 = uStack_1f0;
                                uStack_158 = uStack_1e8;
                                uStack_150 = uStack_1e0;
                                uStack_148 = uStack_1d8;
                                uStack_140 = uStack_1d0;
                                uStack_138 = uStack_1c8;
                                if (uStack_1b8 == 0) {
                                  if (lStack_200 == 0) {
                                    uStack_238 = param_1[0x16];
                                    uStack_240 = param_1[0x15];
                                    uStack_228 = param_1[0x18];
                                    uStack_230 = param_1[0x17];
                                    uStack_218 = param_1[0x1a];
                                    uStack_220 = param_1[0x19];
                                    uStack_210 = param_1[0x1b];
                                    uStack_248 = param_1[0x14];
                                    uStack_250 = param_1[0x13];
                                    func_0x00010166cb60(&uStack_e0,&uStack_90,0x112dbd410,
                                                        &UNK_10d976b78);
                                    func_0x00010166cb60(&uStack_130,&uStack_90,0x112dbd410,
                                                        &UNK_10d976b78);
                                    FUN_1016704dc(&uStack_250,0x112dbd410,&UNK_10d976b78);
LAB_10166d8a8:
                                    uVar2 = param_1[0x11];
                                    FUN_100e25fcc(uVar2,param_1[0x12],param_2[0x11],param_2[0x12]);
                                    uVar1 = (uint)uVar2;
                                    goto LAB_10166d824;
                                  }
                                }
                                else if (lStack_200 != 0) {
                                  uStack_288 = param_2[0x16];
                                  uStack_290 = param_2[0x15];
                                  uStack_278 = param_2[0x18];
                                  uStack_280 = param_2[0x17];
                                  uStack_268 = param_2[0x1a];
                                  uStack_270 = param_2[0x19];
                                  uStack_260 = param_2[0x1b];
                                  uStack_298 = param_2[0x14];
                                  uStack_2a0 = param_2[0x13];
                                  uStack_88 = param_1[0x14];
                                  uStack_90 = param_1[0x13];
                                  uStack_78 = param_1[0x16];
                                  uStack_80 = param_1[0x15];
                                  uStack_68 = param_1[0x18];
                                  uStack_70 = param_1[0x17];
                                  uStack_58 = param_1[0x1a];
                                  uStack_60 = param_1[0x19];
                                  uStack_50 = param_1[0x1b];
                                  uStack_250 = uStack_2a0;
                                  uStack_248 = uStack_298;
                                  uStack_240 = uStack_290;
                                  uStack_238 = uStack_288;
                                  uStack_230 = uStack_280;
                                  uStack_228 = uStack_278;
                                  uStack_220 = uStack_270;
                                  uStack_218 = uStack_268;
                                  uStack_210 = uStack_260;
                                  func_0x00010166cb60(&uStack_e0,auStack_2e8,0x112dbd410,
                                                      &UNK_10d976b78);
                                  func_0x00010166cb60(&uStack_130,auStack_2e8,0x112dbd410,
                                                      &UNK_10d976b78);
                                  puVar3 = &uStack_90;
                                  FUN_10166c908(puVar3,&uStack_250);
                                  FUN_1016704dc(&uStack_2a0,0x112dbd410,&UNK_10d976b78);
                                  FUN_1016704dc(&uStack_1c0,0x112dbd410,&UNK_10d976b78);
                                  if (((ulong)puVar3 & 1) != 0) goto LAB_10166d8a8;
                                  goto LAB_10166d820;
                                }
                                uStack_250 = uStack_1c0;
                                uStack_248 = uStack_1b8;
                                uStack_240 = uStack_1b0;
                                uStack_238 = uStack_1a8;
                                uStack_230 = uStack_1a0;
                                uStack_228 = uStack_198;
                                uStack_220 = uStack_190;
                                uStack_218 = uStack_188;
                                uStack_210 = uStack_180;
                                func_0x00010166cb60(&uStack_e0,&uStack_90,0x112dbd410,&UNK_10d976b78
                                                   );
                                func_0x00010166cb60(&uStack_130,&uStack_90,0x112dbd410,
                                                    &UNK_10d976b78);
                                FUN_1016704dc(&uStack_250,0x112dbd418,&UNK_10d976b80);
                              }
                            }
                            else if (uVar2 == 2) goto LAB_10166d648;
                          }
                          else if (uVar2 == uVar4) goto LAB_10166d648;
                        }
                      }
                    }
                  }
                  else if (uVar2 == 2) goto LAB_10166d570;
                }
                else if (uVar4 == 3) {
                  if (uVar2 == 3) goto LAB_10166d570;
                }
                else if (uVar4 == 4) {
                  if (uVar2 == 4) goto LAB_10166d570;
                }
                else if (uVar2 == 5) goto LAB_10166d570;
              }
              else if (uVar2 == uVar4) goto LAB_10166d570;
            }
          }
        }
      }
    }
  }
LAB_10166d820:
  uVar1 = 0;
LAB_10166d824:
  return uVar1 & 1;
}



/* Entry: 101667794; end: 1016677c3;  */

undefined1  [16] FUN_101667794(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x88);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return auVar1;
}



/* Entry: 1016677c4; end: 1016677f7;  */

void FUN_1016677c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90));
  *(undefined8 *)(unaff_x20 + 0x88) = param_1;
  *(undefined8 *)(unaff_x20 + 0x90) = param_2;
  return;
}



/* Entry: 1016677f8; end: 10166780b;  */

undefined1  [16] FUN_1016677f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x88;
  auVar1._0_8_ = 0x101667808;
  return auVar1;
}



/* Entry: 10166780c; end: 10166781f;  */

void FUN_10166780c(void)

{
  FUN_1016671e0();
  return;
}



/* Entry: 101667820; end: 10166787f;  */

void FUN_101667820(void)

{
  FUN_101667398();
  return;
}



/* Entry: 101667880; end: 101667883;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101667880(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101667884; end: 1016678bb;  */

uint FUN_101667884(long param_1,long param_2)

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
  func_0x00010167049c();
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



/* Entry: 1016678bc; end: 10166795b;  */

uint FUN_1016678bc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0x15];
  uStack_60 = param_1[0x14];
  uStack_48 = param_1[0x17];
  uStack_50 = param_1[0x16];
  uStack_38 = param_1[0x19];
  uStack_40 = param_1[0x18];
  uStack_28 = param_1[0x1b];
  uStack_30 = param_1[0x1a];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_68 = param_1[0x13];
  uStack_70 = param_1[0x12];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_138 = unaff_x20[0x15];
  uStack_140 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x17];
  uStack_130 = unaff_x20[0x16];
  uStack_118 = unaff_x20[0x19];
  uStack_120 = unaff_x20[0x18];
  uStack_108 = unaff_x20[0x1b];
  uStack_110 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0xd];
  uStack_180 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xf];
  uStack_170 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0x11];
  uStack_160 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x13];
  uStack_150 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[5];
  uStack_1c0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[7];
  uStack_1b0 = unaff_x20[6];
  uStack_198 = unaff_x20[9];
  uStack_1a0 = unaff_x20[8];
  uStack_188 = unaff_x20[0xb];
  uStack_190 = unaff_x20[10];
  uStack_1d8 = unaff_x20[1];
  uStack_1e0 = *unaff_x20;
  uStack_1c8 = unaff_x20[3];
  uStack_1d0 = unaff_x20[2];
  func_0x00010166d488(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 10166795c; end: 1016679fb;  */

/* WARNING: Possible PIC construction at 0x0001016679a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016679b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016679ac) */
/* WARNING: Removing unreachable block (ram,0x0001016679bc) */

void FUN_10166795c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd440 != -1) {
    func_0x000107c61568(0x112dbd440,FUN_101667198);
  }
  uVar5 = uRam0000000113802880;
  uVar4 = uRam0000000113802878;
  uVar3 = uRam0000000113802870;
  uVar2 = uRam0000000113802868;
  uVar1 = uRam0000000113802860;
  *param_1 = uRam0000000113802858;
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



/* Entry: 1016679fc; end: 101667a37;  */

void FUN_1016679fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd650;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd650,&UNK_10d977708);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101667a38; end: 101667b93;  */

void FUN_101667a38(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_158 [72];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_38 = unaff_x20[0x1b];
  uStack_40 = unaff_x20[0x1a];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  func_0x000107c6068c(auStack_158,0);
  func_0x000107c5fa50(auStack_158,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101667b94; end: 101667c33;  */

uint FUN_101667b94(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_108 = param_1[0x1b];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_28 = param_2[0x1b];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  func_0x00010166d488(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 101667c34; end: 101667c7b;  */

void FUN_101667c34(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d977820,0x1d,2);
  uRam0000000113802890 = uStack_38;
  uRam0000000113802888 = uStack_40;
  uRam00000001138028a0 = uStack_28;
  uRam0000000113802898 = uStack_30;
  uRam00000001138028b0 = uStack_18;
  uRam00000001138028a8 = uStack_20;
  return;
}



/* Entry: 101667c7c; end: 101667d63;  */

/* WARNING: Removing unreachable block (ram,0x000101667d60) */

void FUN_101667c7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        FUN_10166dfb4();
        (*pcVar3)(unaff_x20 + 0x30,&UNK_1103f0738,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 1) goto LAB_101667d08;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_101667d08:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101667d64; end: 101667e1f;  */

void FUN_101667d64(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (FUN_101667e20(), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 101667e20; end: 101667e9f;  */

void FUN_101667e20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x30);
  if (lStack_58 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10166dfb4();
    (*pcVar1)(&lStack_58,3,&UNK_1103f0738,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101667ea0; end: 101667ee7;  */

void FUN_101667ea0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 101667ee8; end: 101667f17;  */

undefined1  [16] FUN_101667ee8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 101667f18; end: 101667f4b;  */

void FUN_101667f18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 101667f4c; end: 101667f5f;  */

undefined1  [16] FUN_101667f4c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x101667f5c;
  return auVar1;
}



/* Entry: 101667f60; end: 101667f73;  */

void FUN_101667f60(void)

{
  FUN_101667c7c();
  return;
}



/* Entry: 101667f74; end: 101667fb3;  */

void FUN_101667f74(void)

{
  FUN_101667d64();
  return;
}



/* Entry: 101667fb4; end: 101667fb7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101667fb4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101667fb8; end: 101667fef;  */

uint FUN_101667fb8(long param_1,long param_2)

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
  func_0x00010167045c();
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



/* Entry: 101667ff0; end: 101668047;  */

uint FUN_101667ff0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_10166c908(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101668048; end: 1016680e7;  */

/* WARNING: Possible PIC construction at 0x000101668094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016680a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101668098) */
/* WARNING: Removing unreachable block (ram,0x0001016680a8) */

void FUN_101668048(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbd470 != -1) {
    func_0x000107c61568(0x112dbd470,FUN_101667c34);
  }
  uVar5 = uRam00000001138028b0;
  uVar4 = uRam00000001138028a8;
  uVar3 = uRam00000001138028a0;
  uVar2 = uRam0000000113802898;
  uVar1 = uRam0000000113802890;
  *param_1 = uRam0000000113802888;
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



/* Entry: 1016680e8; end: 101668123;  */

void FUN_1016680e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd640;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd640,&UNK_10d977700);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101668124; end: 101668237;  */

void FUN_101668124(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101668238; end: 1016682d7;  */

uint FUN_101668238(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10166c908(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1016682d8; end: 10166838b;  */

/* WARNING: Removing unreachable block (ram,0x000101668388) */

void FUN_1016682d8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x00010166d938();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10166838c; end: 101668427;  */

void FUN_10166838c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x00010166d938();
    (*pcVar2)(param_2,1,&UNK_1103f07b8,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 101668428; end: 101668467;  */

void FUN_101668428(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 101668468; end: 101668497;  */

undefined1  [16] FUN_101668468(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101668498; end: 1016684cb;  */

void FUN_101668498(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1016684cc; end: 1016684df;  */

undefined1  [16] FUN_1016684cc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1016684dc;
  return auVar1;
}



/* Entry: 1016684e0; end: 101668517;  */

void FUN_1016684e0(void)

{
  FUN_1016682d8();
  return;
}



/* Entry: 101668518; end: 10166851b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101668518(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10166851c; end: 101668553;  */

uint FUN_10166851c(long param_1,long param_2)

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
  func_0x00010167041c();
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



/* Entry: 101668554; end: 10166865b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101668554(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar23;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar22 = param_1[1];
  uVar25 = param_1[2];
  uVar18 = *unaff_x20;
  pbVar9 = (byte *)unaff_x20[1];
  pbVar23 = (byte *)unaff_x20[2];
  func_0x00010166c2fc(uVar18,*param_1);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar25 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar25 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar25 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar17 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar25 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar18 != uVar20) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar18 < 1) goto LAB_100e26128;
        if (uVar16 < 2) {
          if (uVar16 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto LAB_100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,uVar25)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar25;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar15 = *(byte **)(pbVar12 + 0x10);
        lVar22 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar22 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar13,pbVar14,pbVar15,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) &&
           (pbVar11 = pbVar23, pbVar13 = pbVar21, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar23 == *(byte **)(pbVar12 + 0x10) && pbVar21 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar15 = *(byte **)(pbVar12 + 0x10);
      lVar22 = *(long *)(pbVar12 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar12 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar24;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar12 + 0x20);
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar24;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar12 + 8);
    uVar25 = *(ulong *)(pbVar12 + 0x10);
    lVar24 = *(long *)pbVar12;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 10166865c; end: 101668697;  */

void FUN_10166865c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbd630;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbd630,&UNK_10d9776f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101668698; end: 1016687ff;  */

void FUN_101668698(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101668800; end: 101668847;  */

void FUN_101668800(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d977805,0xb,2);
  uRam00000001138028f0 = uStack_38;
  uRam00000001138028e8 = uStack_40;
  uRam0000000113802900 = uStack_28;
  uRam00000001138028f8 = uStack_30;
  uRam0000000113802910 = uStack_18;
  uRam0000000113802908 = uStack_20;
  return;
}


