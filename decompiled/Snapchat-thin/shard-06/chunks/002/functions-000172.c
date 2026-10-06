/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10461774c; end: 1046177eb;  */

void FUN_10461774c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c30 != -1) {
    _swift_once(0x113089c30,FUN_104616ecc);
  }
  uVar5 = uRam0000000113814c78;
  uVar4 = uRam0000000113814c70;
  uVar3 = uRam0000000113814c68;
  uVar2 = uRam0000000113814c60;
  uVar1 = uRam0000000113814c58;
  *param_1 = uRam0000000113814c50;
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



/* Entry: 1046177ec; end: 104617827;  */

void FUN_1046177ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089d60;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089d60,&UNK_10dd1ff08);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104617828; end: 104617a27;  */

/* WARNING: Removing unreachable block (ram,0x00010461789c) */

void FUN_104617828(void)

{
  undefined8 *unaff_x20;
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_f0,0);
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_100 = uStack_b0;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  FUN_1046171a0(&uStack_140);
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_b0 = uStack_100;
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104617a28; end: 104617a8b;  */

uint FUN_104617a28(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  func_0x000104619644(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 104617a8c; end: 104617ab3;  */

undefined * FUN_104617a8c(void)

{
  return &UNK_11078fa08;
}



/* Entry: 104617ab4; end: 104617b73;  */

void FUN_104617ab4(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1ff30,0x18,&uStack_48,&lStack_40);
  puRam0000000113814c88 = puStack_38;
  lRam0000000113814c80 = lStack_40;
  puRam0000000113814c98 = puStack_28;
  puRam0000000113814c90 = puStack_30;
  puRam0000000113814ca8 = puStack_18;
  puRam0000000113814ca0 = puStack_20;
  return;
}



/* Entry: 104617b74; end: 104617c13;  */

void FUN_104617b74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c40 != -1) {
    _swift_once(0x113089c40,FUN_104617ab4);
  }
  uVar5 = uRam0000000113814ca8;
  uVar4 = uRam0000000113814ca0;
  uVar3 = uRam0000000113814c98;
  uVar2 = uRam0000000113814c90;
  uVar1 = uRam0000000113814c88;
  *param_1 = uRam0000000113814c80;
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



/* Entry: 104617c14; end: 104617cfb;  */

/* WARNING: Removing unreachable block (ram,0x000104617cf8) */

void FUN_104617c14(undefined8 param_1,long param_2,long param_3)

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
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x0001045b66a4();
        (*pcVar3)(unaff_x20 + 0x18,&UNK_110790230,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 1) goto LAB_104617ca0;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_104617ca0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 104617cfc; end: 104617de3;  */

void FUN_104617cfc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar4 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar4 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar4 = unaff_x20[2];
  if ((int)uVar4 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __ss6HasherV8_combineyys6UInt64VF((long)(int)uVar4);
  }
  if ((*(long *)(unaff_x20[3] + 0x10) != 0) && (FUN_10460e4d4(unaff_x20[3],3), unaff_x21 != 0)) {
    return;
  }
  uVar4 = unaff_x20[4];
  uVar3 = (uint)(unaff_x20[5] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[5] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_104617dc4;
    }
    lVar6 = (long)(int)uVar4;
    lVar7 = (long)uVar4 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar4 + 0x10);
    lVar7 = *(long *)(uVar4 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_104617dc4:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 104617de4; end: 104617ec7;  */

void FUN_104617de4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar2;
  code *pcVar3;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar1 = (ulong)(uint)unaff_x20[2], (uint)unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x18))(uVar1,2,param_2,param_3), unaff_x21 == 0)))) {
    uVar2 = unaff_x20[3];
    if (*(long *)(uVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x0001045b66a4();
      (*pcVar3)(uVar2,3,&UNK_110790230,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 104617ec8; end: 104617f43;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104617ec8(ulong *param_1,ulong *param_2)

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
  if (((uVar13 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar13 & 1) != 0)) && ((int)param_1[2] == (int)param_2[2])) {
    uVar13 = param_1[3];
    FUN_1045b79ac(uVar13,param_2[3]);
    if ((uVar13 & 1) != 0) {
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
          if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
             ((uVar17 >> 0x3e < 3 || ((uVar21 = 0, uVar13 != 0 || (uVar17 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
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
                                                                               bVar28 | auVar44[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
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
                                                                         CONCAT11(bVar29 | auVar44[1
                                                  ],bVar28 | auVar44[0])))))));
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
  }
  return (byte *)0x0;
}



/* Entry: 104617f44; end: 104617fd3;  */

/* WARNING: Removing unreachable block (ram,0x000104617f94) */

void FUN_104617f44(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_104617cfc(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104617fd4; end: 104618017;  */

void FUN_104617fd4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 104618018; end: 104618047;  */

undefined1  [16] FUN_104618018(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 104618048; end: 10461807b;  */

void FUN_104618048(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 10461807c; end: 10461808f;  */

undefined1  [16] FUN_10461807c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x10461808c;
  return auVar1;
}



/* Entry: 104618090; end: 1046180b7;  */

void FUN_104618090(void)

{
  FUN_104617c14();
  return;
}



/* Entry: 1046180b8; end: 104618157;  */

void FUN_1046180b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c40 != -1) {
    _swift_once(0x113089c40,FUN_104617ab4);
  }
  uVar5 = uRam0000000113814ca8;
  uVar4 = uRam0000000113814ca0;
  uVar3 = uRam0000000113814c98;
  uVar2 = uRam0000000113814c90;
  uVar1 = uRam0000000113814c88;
  *param_1 = uRam0000000113814c80;
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



/* Entry: 104618158; end: 104618193;  */

void FUN_104618158(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089d58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089d58,&UNK_10dd1ff00);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104618194; end: 10461835f;  */

/* WARNING: Removing unreachable block (ram,0x0001046181f8) */

void FUN_104618194(void)

{
  undefined8 *unaff_x20;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(&uStack_b0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  FUN_104617cfc(&uStack_100);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104618360; end: 10461841b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104618360(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  long lVar26;
  ulong unaff_x20;
  byte *pbVar27;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar28;
  long lVar29;
  byte *unaff_x23;
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
  
  uVar14 = *param_1;
  uVar6 = param_1[2];
  uVar22 = param_1[3];
  pbVar11 = (byte *)param_1[4];
  pbVar27 = (byte *)param_1[5];
  uVar7 = param_2[2];
  uVar24 = param_2[3];
  uVar17 = param_2[4];
  uVar28 = param_2[5];
  if ((((uVar14 != *param_2) || (param_1[1] != param_2[1])) &&
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar14 & 1) == 0)) ||
     (((int)uVar6 != (int)uVar7 || (FUN_1045b79ac(uVar22,uVar24), (uVar22 & 1) == 0)))) {
    return (byte *)0x0;
  }
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
    uVar4 = (uint)((ulong)pbVar27 >> 0x20);
    uVar20 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar28 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar15 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar22 = 0;
      if (((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
         ((uVar28 >> 0x3e < 3 || ((uVar22 = 0, uVar17 != 0 || (uVar28 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar20 == 0) {
        uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
      }
      else {
        iVar21 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar8)();
        }
        uVar22 = (ulong)(iVar21 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar28 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar21 = (int)(uVar17 >> 0x20);
      if (SBORROW4(iVar21,(int)uVar17)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar8)();
      }
      if (uVar22 == (long)(iVar21 - (int)uVar17)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar20 == 2) {
        uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar8)();
        }
        goto joined_r0x000100e26170;
      }
      uVar22 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(uVar17 + 0x18) - *(long *)(uVar17 + 0x10);
        if (SBORROW8(*(long *)(uVar17 + 0x18),*(long *)(uVar17 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar8)();
        }
code_r0x000100e2608c:
        if (uVar22 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar22 < 1) goto code_r0x000100e26128;
        if (uVar20 < 2) {
          if (uVar20 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
            pbVar15 = (byte *)((long)register0x00000008 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar8)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar15 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar15);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar15) {
                pbVar15 = unaff_x23;
              }
              pbVar15 = pbVar15 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar15 = (byte *)0x0;
        }
        else {
          if (uVar20 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar15 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar15 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + (lVar26 - (long)pbVar15);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar8)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar27;
          if (pbVar11 == (byte *)0x0) {
            pbVar15 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar15) {
              pbVar15 = unaff_x23;
            }
            pbVar15 = pbVar15 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar15,uVar17,
                            uVar28);
        pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar28;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar22 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar10;
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
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar25 = *(byte **)(pbVar10 + 0x18);
    bVar30 = pbVar10[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar16 = pbVar11;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar15[0x28] == 0) {
          lVar26 = *(long *)pbVar15;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar15[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar15 + 8);
        pbVar19 = *(byte **)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar16 = pbVar27;
        if ((pbVar11 == pbVar18) && (pbVar27 == pbVar19)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar15[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar15;
        pbVar19 = *(byte **)(pbVar15 + 8);
        lVar26 = *(long *)(pbVar15 + 0x18);
        if ((pbVar13 == pbVar18) && (pbVar11 == pbVar19)) {
          if (((pbVar10[0x10] ^ pbVar15[0x10]) & 1) != 0) {
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
      )(pbVar13,pbVar16,pbVar18,pbVar19,0);
      return pbVar13;
    }
    lVar29 = *(long *)(pbVar10 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar15[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar15;
        pbVar19 = *(byte **)(pbVar15 + 8);
        if (((pbVar13 == pbVar18) && (pbVar11 == pbVar19)) &&
           (pbVar13 = pbVar27, pbVar16 = pbVar25, pbVar18 = *(byte **)(pbVar15 + 0x10),
           pbVar19 = *(byte **)(pbVar15 + 0x18),
           pbVar27 == *(byte **)(pbVar15 + 0x10) && pbVar25 == *(byte **)(pbVar15 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar15[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar19 = *(byte **)(pbVar15 + 0x10);
      lVar26 = *(long *)(pbVar15 + 0x20);
      if (pbVar27 == (byte *)0x0) {
        if (pbVar19 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar19 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar15 + 8);
        pbVar13 = pbVar11;
        pbVar16 = pbVar27;
        if ((pbVar11 != pbVar18) || (pbVar27 != pbVar19)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar26 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar15 + 0x18)) && (lVar29 == lVar26)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar29,*(byte **)(pbVar15 + 0x18),lVar26,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar26 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar29 == 0) && pbVar27 == (byte *)0x0) {
        if (pbVar15[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar15 + 0x20);
        lVar26 = *(long *)(pbVar15 + 0x18);
        bVar30 = pbVar15[8] | (byte)lVar26;
        bVar31 = pbVar15[9] | (byte)((ulong)lVar26 >> 8);
        bVar32 = pbVar15[10] | (byte)((ulong)lVar26 >> 0x10);
        bVar33 = pbVar15[0xb] | (byte)((ulong)lVar26 >> 0x18);
        bVar34 = pbVar15[0xc] | (byte)((ulong)lVar26 >> 0x20);
        bVar35 = pbVar15[0xd] | (byte)((ulong)lVar26 >> 0x28);
        bVar36 = pbVar15[0xe] | (byte)((ulong)lVar26 >> 0x30);
        bVar37 = pbVar15[0xf] | (byte)((ulong)lVar26 >> 0x38);
        bVar38 = pbVar15[0x10] | (byte)lVar29;
        bVar39 = pbVar15[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar15[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar15[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar15[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar15[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar15[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar15[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar15 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar29 == 0)) {
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
      lVar29 = *(long *)(pbVar15 + 0x20);
      lVar26 = *(long *)(pbVar15 + 0x18);
      bVar30 = pbVar15[8] | (byte)lVar26;
      bVar31 = pbVar15[9] | (byte)((ulong)lVar26 >> 8);
      bVar32 = pbVar15[10] | (byte)((ulong)lVar26 >> 0x10);
      bVar33 = pbVar15[0xb] | (byte)((ulong)lVar26 >> 0x18);
      bVar34 = pbVar15[0xc] | (byte)((ulong)lVar26 >> 0x20);
      bVar35 = pbVar15[0xd] | (byte)((ulong)lVar26 >> 0x28);
      bVar36 = pbVar15[0xe] | (byte)((ulong)lVar26 >> 0x30);
      bVar37 = pbVar15[0xf] | (byte)((ulong)lVar26 >> 0x38);
      bVar38 = pbVar15[0x10] | (byte)lVar29;
      bVar39 = pbVar15[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar15[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar15[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar15[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar15[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar15[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar15[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar15[0x28] != 5) {
      return (byte *)0x0;
    }
    uVar17 = *(ulong *)(pbVar15 + 8);
    uVar28 = *(ulong *)(pbVar15 + 0x10);
    lVar26 = *(long *)pbVar15;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar26,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
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



/* Entry: 10461841c; end: 104618443;  */

undefined * FUN_10461841c(void)

{
  return &UNK_11078fa18;
}



/* Entry: 104618444; end: 104618503;  */

void FUN_104618444(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd1ff20,0xe,&uStack_48,&lStack_40);
  puRam0000000113814cb8 = puStack_38;
  lRam0000000113814cb0 = lStack_40;
  puRam0000000113814cc8 = puStack_28;
  puRam0000000113814cc0 = puStack_30;
  puRam0000000113814cd8 = puStack_18;
  puRam0000000113814cd0 = puStack_20;
  return;
}



/* Entry: 104618504; end: 1046185a3;  */

void FUN_104618504(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c48 != -1) {
    _swift_once(0x113089c48,FUN_104618444);
  }
  uVar5 = uRam0000000113814cd8;
  uVar4 = uRam0000000113814cd0;
  uVar3 = uRam0000000113814cc8;
  uVar2 = uRam0000000113814cc0;
  uVar1 = uRam0000000113814cb8;
  *param_1 = uRam0000000113814cb0;
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



/* Entry: 1046185a4; end: 104618677;  */

/* WARNING: Removing unreachable block (ram,0x000104618674) */

void FUN_1046185a4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
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
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001039f7488();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_11078ace8,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 104618678; end: 1046187d3;  */

void FUN_104618678(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  ulong uVar7;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar7 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar7 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uVar7 = unaff_x20[6];
  uStack_60 = uVar7;
  if (uVar7 != 0) {
    __ss6HasherV8_combineyySuF(2);
    _swift_beginAccess(uVar7 + 0x10,auStack_88,0,0);
    uVar1 = *(ulong *)(uVar7 + 0x10);
    uVar2 = *(ulong *)(uVar7 + 0x18);
    uVar7 = uVar1 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar7 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      func_0x00010461b518(&uStack_70,auStack_a0,0x113089be8,&UNK_10dd1f6b0);
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      func_0x00010461b4d8(&uStack_70,0x113089be8,&UNK_10dd1f6b0);
      _swift_bridgeObjectRelease(uVar2);
    }
  }
  uVar7 = unaff_x20[2];
  uVar3 = (uint)(unaff_x20[3] >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((unaff_x20[3] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1046187ac;
    }
    lVar5 = (long)(int)uVar7;
    lVar6 = (long)uVar7 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar5 = *(long *)(uVar7 + 0x10);
    lVar6 = *(long *)(uVar7 + 0x18);
  }
  if (lVar5 == lVar6) {
    return;
  }
LAB_1046187ac:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1046187d4; end: 10461885f;  */

void FUN_1046187d4(undefined8 param_1,undefined8 param_2,long param_3)

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
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_104618860(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 104618860; end: 1046188df;  */

void FUN_104618860(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  lStack_50 = *(long *)(param_1 + 0x30);
  if (lStack_50 != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001039f7488();
    (*pcVar1)(&uStack_60,2,&UNK_11078ace8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1046188e0; end: 1046188e3;  */

uint FUN_1046188e0(ulong *param_1,ulong *param_2)

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
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar7 = param_1[5];
    uVar6 = param_1[4];
    uVar4 = param_1[6];
    uVar8 = param_2[5];
    uVar2 = param_2[4];
    uVar5 = param_2[6];
    uStack_a0 = uVar2;
    uStack_98 = uVar8;
    uStack_90 = uVar5;
    uStack_80 = uVar6;
    uStack_78 = uVar7;
    uStack_70 = uVar4;
    if (uVar4 == 0) {
      if (uVar5 != 0) goto LAB_10461905c;
      func_0x00010461b518(&uStack_80,auStack_b8,0x113089be8,&UNK_10dd1f6b0);
      func_0x00010461b518(&uStack_a0,auStack_b8,0x113089be8,&UNK_10dd1f6b0);
      func_0x00010459fd54(uVar6,uVar7,0);
LAB_104619168:
      uVar2 = param_1[2];
      func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_104619174;
    }
    if (uVar5 == 0) {
LAB_10461905c:
      func_0x00010461b518(&uStack_80,auStack_b8,0x113089be8,&UNK_10dd1f6b0);
      func_0x00010461b518(&uStack_a0,auStack_b8,0x113089be8,&UNK_10dd1f6b0);
      func_0x00010459fd54(uVar6,uVar7,uVar4);
LAB_1046190b0:
      func_0x00010459fd54(uVar2,uVar8,uVar5);
    }
    else {
      if (uVar4 == uVar5) {
        func_0x00010461b518(&uStack_80,auStack_b8,0x113089be8,&UNK_10dd1f6b0);
        func_0x00010461b518(&uStack_a0,auStack_b8,0x113089be8,&UNK_10dd1f6b0);
      }
      else {
        func_0x00010461b518(&uStack_80,auStack_b8,0x113089be8,&UNK_10dd1f6b0);
        func_0x00010461b518(&uStack_a0,auStack_b8,0x113089be8,&UNK_10dd1f6b0);
        uVar3 = uVar5;
        FUN_10453dc68();
        if ((uVar3 & 1) == 0) {
          func_0x00010459fd54(uVar2,uVar8,uVar5);
          uVar2 = uVar6;
          uVar8 = uVar7;
          uVar5 = uVar4;
          goto LAB_1046190b0;
        }
      }
      uVar3 = uVar6;
      func_0x000100e25fcc(uVar6,uVar7,uVar2,uVar8);
      func_0x00010459fd54(uVar2,uVar8,uVar5);
      func_0x00010459fd54(uVar6,uVar7,uVar4);
      if ((uVar3 & 1) != 0) goto LAB_104619168;
    }
  }
  uVar1 = 0;
LAB_104619174:
  return uVar1 & 1;
}



/* Entry: 1046188e4; end: 104618973;  */

/* WARNING: Removing unreachable block (ram,0x000104618934) */

void FUN_1046188e4(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_104618678(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104618974; end: 1046189af;  */

void FUN_104618974(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 1046189b0; end: 1046189df;  */

undefined1  [16] FUN_1046189b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1046189e0; end: 104618a13;  */

void FUN_1046189e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 104618a14; end: 104618a27;  */

undefined1  [16] FUN_104618a14(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x104618a24;
  return auVar1;
}



/* Entry: 104618a28; end: 104618a3b;  */

void FUN_104618a28(void)

{
  FUN_1046185a4();
  return;
}



/* Entry: 104618a3c; end: 104618a7b;  */

void FUN_104618a3c(void)

{
  FUN_1046187d4();
  return;
}



/* Entry: 104618a7c; end: 104618b1b;  */

void FUN_104618a7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089c48 != -1) {
    _swift_once(0x113089c48,FUN_104618444);
  }
  uVar5 = uRam0000000113814cd8;
  uVar4 = uRam0000000113814cd0;
  uVar3 = uRam0000000113814cc8;
  uVar2 = uRam0000000113814cc0;
  uVar1 = uRam0000000113814cb8;
  *param_1 = uRam0000000113814cb0;
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



/* Entry: 104618b1c; end: 104618b57;  */

void FUN_104618b1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089d50;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089d50,&UNK_10dd1fef8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104618b58; end: 104618d3b;  */

/* WARNING: Removing unreachable block (ram,0x000104618bc4) */

void FUN_104618b58(void)

{
  undefined8 *unaff_x20;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_40 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(&uStack_c0,0);
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_d0 = uStack_80;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  FUN_104618678(&uStack_110);
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_80 = uStack_d0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104618d3c; end: 104618d93;  */

uint FUN_104618d3c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000104618f98(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104618d94; end: 1046191b7;  */

/* WARNING: Removing unreachable block (ram,0x000104618f50) */

void FUN_104618d94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uStack_150;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar12 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(param_2);
  uStack_150 = 0;
  lVar13 = 0;
  while( true ) {
    while (uVar14 == 0) {
      bVar9 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x104618f98);
        (*pcVar8)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar13) goto LAB_104618f60;
      uVar14 = ((ulong *)(param_2 + 0x40))[lVar13];
    }
    uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar13 << 6;
    puVar11 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar10 * 0x10);
    uVar1 = *puVar11;
    lVar4 = puVar11[1];
    puVar11 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar10 * 0x30);
    uVar2 = *puVar11;
    uVar5 = puVar11[1];
    uVar15 = puVar11[2];
    bVar7 = *(byte *)(puVar11 + 3);
    uVar3 = puVar11[4];
    uVar6 = puVar11[5];
    _swift_bridgeObjectRetain(lVar4);
    FUN_1045670a0(uVar2,uVar5,uVar15,(ulong)bVar7);
    func_0x00010006c00c(uVar3,uVar6);
    if (lVar4 == 0) break;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_b0 = param_1[8];
    uStack_e8 = param_1[1];
    uStack_f0 = *param_1;
    uStack_d8 = param_1[3];
    uStack_e0 = param_1[2];
    uStack_a0 = uVar2;
    uStack_98 = uVar5;
    uStack_90 = uVar15;
    uStack_88 = (ulong)bVar7;
    uStack_80 = uVar3;
    uStack_78 = uVar6;
    __sSS4hash4intoys6HasherVz_tF(&uStack_f0,uVar1,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_100 = uStack_b0;
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    FUN_104609780(&uStack_140);
    uVar14 = uVar14 - 1 & uVar14;
    puVar11 = &uStack_a0;
    func_0x0001045671e0();
    uStack_b8 = uStack_108;
    uStack_c0 = uStack_110;
    uStack_b0 = uStack_100;
    uStack_d8 = uStack_128;
    uStack_e0 = uStack_130;
    uStack_c8 = uStack_118;
    uStack_d0 = uStack_120;
    uStack_e8 = uStack_138;
    uStack_f0 = uStack_140;
    __ss6HasherV9_finalizeSiyF();
    uStack_150 = (ulong)puVar11 ^ uStack_150;
  }
LAB_104618f60:
  _swift_release(param_2);
  __ss6HasherV8_combineyySuF(uStack_150);
  return;
}



/* Entry: 1046191b8; end: 10461932f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1046191b8(ulong *param_1,undefined8 *param_2)

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
  
  uVar13 = *param_1;
  FUN_104613578(uVar13,(char)param_1[1],*param_2,*(undefined1 *)(param_2 + 1));
  if ((uVar13 & 1) != 0) {
    uVar13 = param_1[2];
    uVar20 = param_2[2];
    if (*(char *)(param_2 + 3) == '\x01') {
      if ((long)uVar20 < 2) {
        if (uVar20 == 0) {
          if (uVar13 != 0) {
            return (byte *)0x0;
          }
        }
        else if (uVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else if (uVar20 == 2) {
        if (uVar13 != 2) {
          return (byte *)0x0;
        }
      }
      else if (uVar13 != 3) {
        return (byte *)0x0;
      }
    }
    else if (uVar13 != uVar20) {
      return (byte *)0x0;
    }
    if (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c)) {
      uVar13 = param_1[4];
      if (((uVar13 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar13 & 1) != 0)) {
        uVar13 = param_1[6];
        if ((((uVar13 == param_2[6]) && (param_1[7] == param_2[7])) ||
            (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar13 & 1) != 0)) &&
           (((int)param_1[8] == *(int *)(param_2 + 8) &&
            (((*(byte *)((long)param_1 + 0x44) ^ *(byte *)((long)param_2 + 0x44)) & 1) == 0)))) {
          uVar13 = param_1[9];
          FUN_1045b79ac(uVar13,param_2[9]);
          if ((uVar13 & 1) != 0) {
            uVar13 = param_1[10];
            if (((uVar13 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar13 & 1) != 0)) {
              uVar13 = param_1[0xc];
              if (((uVar13 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar13 & 1) != 0)) {
                pbVar10 = (byte *)param_1[0xe];
                pbVar25 = (byte *)param_1[0xf];
                lVar24 = param_2[0xe];
                uVar13 = param_2[0xf];
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
                       ((uVar13 >> 0x3e < 3 ||
                        ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))))
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
                                     (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10])
                  ;
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
                         (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10)
                         , pbVar17 = *(byte **)(pbVar14 + 0x18),
                         pbVar25 == *(byte **)(pbVar14 + 0x10) &&
                         pbVar23 == *(byte **)(pbVar14 + 0x18))) {
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
                    if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) &&
                         pbVar12 == (byte *)0x0) && lVar26 == 0) && pbVar25 == (byte *)0x0) {
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
                                                                                CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                          *(long *)pbVar14 == 0) {
                        return (byte *)0x1;
                      }
                      return (byte *)0x0;
                    }
                    if ((pbVar12 == (byte *)0x1) &&
                       (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) &&
                        pbVar25 == (byte *)0x0) && lVar26 == 0)) {
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
                                                                          CONCAT12(bVar29 | auVar43[
                                                  2],CONCAT11(bVar28 | auVar43[1],
                                                              bVar27 | auVar43[0])))))));
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
          }
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 104619330; end: 10461993f;  */

uint FUN_104619330(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_1045b9c00(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      func_0x00010142cfc4(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        FUN_1045b79ac(uVar2,param_2[4]);
        if ((uVar2 & 1) != 0) {
          uVar4 = param_1[0xc];
          uVar2 = param_1[0xb];
          uVar9 = param_1[0xe];
          uVar7 = param_1[0xd];
          uVar6 = param_2[0xc];
          uVar5 = param_2[0xb];
          uVar10 = param_2[0xe];
          uVar8 = param_2[0xd];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_104619490;
            func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
            func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
LAB_104619554:
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[5];
            uVar4 = param_2[5];
            if ((char)param_2[6] == '\x01') {
              if (uVar4 == 0) {
                if (uVar2 == 0) goto LAB_104619610;
              }
              else if (uVar4 == 1) {
                if (uVar2 == 1) {
LAB_104619610:
                  uVar2 = param_1[7];
                  if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (), (uVar2 & 1) != 0)) {
                    uVar2 = param_1[9];
                    func_0x000100e25fcc(uVar2,param_1[10],param_2[9],param_2[10]);
                    uVar1 = (uint)uVar2;
                    goto LAB_1046194f4;
                  }
                }
              }
              else if (uVar2 == 2) goto LAB_104619610;
            }
            else if (uVar2 == uVar4) goto LAB_104619610;
          }
          else {
            if (uVar6 == 0) {
LAB_104619490:
              func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
              func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
              FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                    (uVar3 = uVar2,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
              func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
              func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
              uVar3 = uVar7;
              func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
              FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_104619554;
            }
            else {
              func_0x00010461b518(&uStack_80,auStack_c0,0x1130877c0,&UNK_10dd19750);
              func_0x00010461b518(&uStack_a0,auStack_c0,0x1130877c0,&UNK_10dd19750);
              FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_1046194f4:
  return uVar1 & 1;
}



/* Entry: 104619940; end: 104619957;  */

void FUN_104619940(void)

{
  return;
}



/* Entry: 104619958; end: 104619a57;  */

void FUN_104619958(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd1faa0;
  _swift_getWitnessTable(&DAT_10dd1faa0,&UNK_11078ff48);
  puRam0000000113089c00 = puVar1;
  return;
}



/* Entry: 104619a58; end: 104619a6b;  */

void FUN_104619a58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104619a6c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104619aac)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104619a6c; end: 104619b17;  */

void FUN_104619a6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089c50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f750;
  _swift_getWitnessTable(&UNK_10dd1f750,&UNK_11078fe38);
  puRam0000000113089c50 = puVar1;
  return;
}



/* Entry: 104619b18; end: 104619b1b;  */

void FUN_104619b18(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f790;
  _swift_getWitnessTable(&UNK_10dd1f790,&UNK_11078fe38);
  puRam0000000113089c70 = puVar1;
  return;
}



/* Entry: 104619b1c; end: 104619b5b;  */

void FUN_104619b1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f790;
  _swift_getWitnessTable(&UNK_10dd1f790,&UNK_11078fe38);
  puRam0000000113089c70 = puVar1;
  return;
}



/* Entry: 104619b5c; end: 104619b6f;  */

void FUN_104619b5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104619b70();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104619bb0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104619b70; end: 104619c1b;  */

void FUN_104619b70(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089c78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f850;
  _swift_getWitnessTable(&UNK_10dd1f850,&UNK_110790008);
  puRam0000000113089c78 = puVar1;
  return;
}



/* Entry: 104619c1c; end: 104619c1f;  */

void FUN_104619c1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f890;
  _swift_getWitnessTable(&UNK_10dd1f890,&UNK_110790008);
  puRam0000000113089c98 = puVar1;
  return;
}



/* Entry: 104619c20; end: 104619c5f;  */

void FUN_104619c20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f890;
  _swift_getWitnessTable(&UNK_10dd1f890,&UNK_110790008);
  puRam0000000113089c98 = puVar1;
  return;
}



/* Entry: 104619c60; end: 104619c73;  */

void FUN_104619c60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104619c74();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104619cb4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104619c74; end: 104619d1f;  */

void FUN_104619c74(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f950;
  _swift_getWitnessTable(&UNK_10dd1f950,&UNK_110790098);
  puRam0000000113089ca0 = puVar1;
  return;
}



/* Entry: 104619d20; end: 104619d63;  */

void FUN_104619d20(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 104619d64; end: 104619d67;  */

void FUN_104619d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f990;
  _swift_getWitnessTable(&UNK_10dd1f990,&UNK_110790098);
  puRam0000000113089cc0 = puVar1;
  return;
}



/* Entry: 104619d68; end: 104619da7;  */

void FUN_104619d68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1f990;
  _swift_getWitnessTable(&UNK_10dd1f990,&UNK_110790098);
  puRam0000000113089cc0 = puVar1;
  return;
}



/* Entry: 104619da8; end: 104619dcb;  */

void FUN_104619da8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104619dcc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104619dcc; end: 104619e0b;  */

void FUN_104619dcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fa10;
  _swift_getWitnessTable(&UNK_10dd1fa10,&UNK_11078feb0);
  puRam0000000113089cc8 = puVar1;
  return;
}



/* Entry: 104619e0c; end: 104619e1f;  */

void FUN_104619e0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104619e20();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104619e60)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104619e20; end: 104619e9f;  */

void FUN_104619e20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fa38;
  _swift_getWitnessTable(&UNK_10dd1fa38,&UNK_11078feb0);
  puRam0000000113089cd0 = puVar1;
  return;
}



/* Entry: 104619ea0; end: 104619ea3;  */

void FUN_104619ea0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fa78;
  _swift_getWitnessTable(&UNK_10dd1fa78,&UNK_11078feb0);
  puRam0000000113089ce0 = puVar1;
  return;
}



/* Entry: 104619ea4; end: 104619ee3;  */

void FUN_104619ea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089ce0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fa78;
  _swift_getWitnessTable(&UNK_10dd1fa78,&UNK_11078feb0);
  puRam0000000113089ce0 = puVar1;
  return;
}



/* Entry: 104619ee4; end: 104619f07;  */

void FUN_104619ee4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104619f08();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104619f08; end: 104619f47;  */

void FUN_104619f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fae8;
  _swift_getWitnessTable(&UNK_10dd1fae8,&UNK_11078ff48);
  puRam0000000113089ce8 = puVar1;
  return;
}



/* Entry: 104619f48; end: 104619f5b;  */

void FUN_104619f48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104619f5c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_104619958();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104619f5c; end: 104619f9b;  */

void FUN_104619f5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fb10;
  _swift_getWitnessTable(&UNK_10dd1fb10,&UNK_11078ff48);
  puRam0000000113089cf0 = puVar1;
  return;
}



/* Entry: 104619f9c; end: 104619f9f;  */

void FUN_104619f9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fb50;
  _swift_getWitnessTable(&UNK_10dd1fb50,&UNK_11078ff48);
  puRam0000000113089cf8 = puVar1;
  return;
}



/* Entry: 104619fa0; end: 104619fdf;  */

void FUN_104619fa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fb50;
  _swift_getWitnessTable(&UNK_10dd1fb50,&UNK_11078ff48);
  puRam0000000113089cf8 = puVar1;
  return;
}



/* Entry: 104619fe0; end: 10461a003;  */

void FUN_104619fe0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461a004();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10461a004; end: 10461a043;  */

void FUN_10461a004(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fbe0;
  _swift_getWitnessTable(&UNK_10dd1fbe0,&UNK_110790110);
  puRam0000000113089d00 = puVar1;
  return;
}



/* Entry: 10461a044; end: 10461a057;  */

void FUN_10461a044(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461a058();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10461a098)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10461a058; end: 10461a0d7;  */

void FUN_10461a058(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fc08;
  _swift_getWitnessTable(&UNK_10dd1fc08,&UNK_110790110);
  puRam0000000113089d08 = puVar1;
  return;
}



/* Entry: 10461a0d8; end: 10461a0db;  */

void FUN_10461a0d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fc48;
  _swift_getWitnessTable(&UNK_10dd1fc48,&UNK_110790110);
  puRam0000000113089d18 = puVar1;
  return;
}



/* Entry: 10461a0dc; end: 10461a11b;  */

void FUN_10461a0dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fc48;
  _swift_getWitnessTable(&UNK_10dd1fc48,&UNK_110790110);
  puRam0000000113089d18 = puVar1;
  return;
}



/* Entry: 10461a11c; end: 10461a13f;  */

void FUN_10461a11c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461a140();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10461a140; end: 10461a17f;  */

void FUN_10461a140(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fcb8;
  _swift_getWitnessTable(&UNK_10dd1fcb8,&UNK_1107901a8);
  puRam0000000113089d20 = puVar1;
  return;
}



/* Entry: 10461a180; end: 10461a193;  */

void FUN_10461a180(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461a194();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104619a18)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10461a194; end: 10461a1d3;  */

void FUN_10461a194(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fce0;
  _swift_getWitnessTable(&UNK_10dd1fce0,&UNK_1107901a8);
  puRam0000000113089d28 = puVar1;
  return;
}



/* Entry: 10461a1d4; end: 10461a1d7;  */

void FUN_10461a1d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fd20;
  _swift_getWitnessTable(&UNK_10dd1fd20,&UNK_1107901a8);
  puRam0000000113089d30 = puVar1;
  return;
}



/* Entry: 10461a1d8; end: 10461a217;  */

void FUN_10461a1d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fd20;
  _swift_getWitnessTable(&UNK_10dd1fd20,&UNK_1107901a8);
  puRam0000000113089d30 = puVar1;
  return;
}



/* Entry: 10461a218; end: 10461a23b;  */

void FUN_10461a218(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461a23c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10461a23c; end: 10461a27b;  */

void FUN_10461a23c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fd90;
  _swift_getWitnessTable(&UNK_10dd1fd90,&UNK_110790230);
  puRam0000000113089d38 = puVar1;
  return;
}



/* Entry: 10461a27c; end: 10461a28f;  */

void FUN_10461a27c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461a2c0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1045b66a4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10461a290; end: 10461a2bf;  */

void FUN_10461a290(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10461a2c0; end: 10461a2ff;  */

void FUN_10461a2c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fdb8;
  _swift_getWitnessTable(&UNK_10dd1fdb8,&UNK_110790230);
  puRam0000000113089d40 = puVar1;
  return;
}



/* Entry: 10461a300; end: 10461a303;  */

void FUN_10461a300(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fdf8;
  _swift_getWitnessTable(&UNK_10dd1fdf8,&UNK_110790230);
  puRam0000000113089d48 = puVar1;
  return;
}



/* Entry: 10461a304; end: 10461a343;  */

void FUN_10461a304(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1fdf8;
  _swift_getWitnessTable(&UNK_10dd1fdf8,&UNK_110790230);
  puRam0000000113089d48 = puVar1;
  return;
}



/* Entry: 10461a344; end: 10461a357;  */

void FUN_10461a344(void)

{
  return;
}



/* Entry: 10461a358; end: 10461a3bf;  */

/* WARNING: Possible PIC construction at 0x00010461a394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010461a398) */
/* WARNING: Removing unreachable block (ram,0x00010461a3b4) */
/* WARNING: Removing unreachable block (ram,0x00010461a3a0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10461a358(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x50) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x50) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10461a3c0; end: 10461a497;  */

undefined8 * FUN_10461a3c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar7 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar7;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  uVar3 = param_2[9];
  uVar5 = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  func_0x00010006c00c(uVar3,uVar5);
  param_1[9] = uVar3;
  param_1[10] = uVar5;
  lVar6 = param_2[0xc];
  if (lVar6 == 0) {
    uVar7 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar7;
    uVar7 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar7;
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar6;
    uVar7 = param_2[0xd];
    uVar1 = param_2[0xe];
    _swift_bridgeObjectRetain();
    func_0x00010006c00c(uVar7,uVar1);
    param_1[0xd] = uVar7;
    param_1[0xe] = uVar1;
  }
  return param_1;
}



/* Entry: 10461a498; end: 10461a61f;  */

undefined8 * FUN_10461a498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar2;
  param_1[7] = param_2[7];
  uVar2 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[9];
  uVar5 = param_2[10];
  func_0x00010006c00c(uVar2,uVar5);
  uVar4 = param_1[9];
  uVar1 = param_1[10];
  param_1[9] = uVar2;
  param_1[10] = uVar5;
  func_0x00010006c090(uVar4,uVar1);
  lVar3 = param_1[0xc];
  if (lVar3 == 0) {
    if (param_2[0xc] == 0) {
      uVar4 = param_2[0xc];
      uVar2 = param_2[0xb];
      uVar5 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
      param_1[0xb] = uVar2;
    }
    else {
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      uVar2 = param_2[0xd];
      uVar4 = param_2[0xe];
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar2,uVar4);
      param_1[0xd] = uVar2;
      param_1[0xe] = uVar4;
    }
  }
  else if (param_2[0xc] == 0) {
    FUN_1045b7230(param_1 + 0xb);
    uVar4 = param_2[0xe];
    uVar2 = param_2[0xd];
    uVar5 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    param_1[0xe] = uVar4;
    param_1[0xd] = uVar2;
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar3);
    uVar2 = param_2[0xd];
    uVar5 = param_2[0xe];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[0xd];
    uVar1 = param_1[0xe];
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar5;
    func_0x00010006c090(uVar4,uVar1);
  }
  return param_1;
}



/* Entry: 10461a620; end: 10461a6fb;  */

undefined8 * FUN_10461a620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[9];
  uVar1 = param_1[10];
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if (param_1[0xc] != 0) {
    lVar3 = param_2[0xc];
    if (lVar3 != 0) {
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_1[0xd];
      uVar1 = param_1[0xe];
      uVar4 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar4;
      func_0x00010006c090(uVar2,uVar1);
      return param_1;
    }
    FUN_1045b7230(param_1 + 0xb);
  }
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  return param_1;
}



/* Entry: 10461a6fc; end: 10461a7af;  */

int FUN_10461a6fc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10461a7b0; end: 10461a7f7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10461a7b0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(ulong *)(param_1 + 0x70);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x78) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x78) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10461a7f8; end: 10461a8c7;  */

undefined8 * FUN_10461a7f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
  uVar1 = param_2[9];
  uVar3 = param_2[10];
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  uVar3 = param_2[0xb];
  uVar4 = param_2[0xc];
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  uVar4 = param_2[0xd];
  uVar5 = param_2[0xe];
  param_1[0xd] = uVar4;
  uVar6 = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  func_0x00010006c00c(uVar5,uVar6);
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  return param_1;
}



/* Entry: 10461a8c8; end: 10461a9df;  */

undefined8 * FUN_10461a8c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar4;
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar4;
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[10] = param_2[10];
  uVar4 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[0xc] = param_2[0xc];
  uVar4 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[0xe];
  uVar2 = param_2[0xf];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 10461a9e0; end: 10461aa9b;  */

undefined8 * FUN_10461a9e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x44) = *(undefined1 *)((long)param_2 + 0x44);
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0xb];
  uVar1 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0xd];
  uVar1 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[0xe];
  uVar1 = param_1[0xf];
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 10461aa9c; end: 10461ab7b;  */

int FUN_10461aa9c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


