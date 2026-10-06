/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f8e468; end: 102f8e47b;  */

void FUN_102f8e468(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c4b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c4b0,&UNK_10db6fb08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f8e47c; end: 102f8e5f7;  */

void FUN_102f8e47c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102f8e5f8; end: 102f8e63f;  */

void FUN_102f8e5f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10db6fd00,0x17,2);
  uRam00000001138068b0 = uStack_38;
  uRam00000001138068a8 = uStack_40;
  uRam00000001138068c0 = uStack_28;
  uRam00000001138068b8 = uStack_30;
  uRam00000001138068d0 = uStack_18;
  uRam00000001138068c8 = uStack_20;
  return;
}



/* Entry: 102f8e640; end: 102f8e6f3;  */

/* WARNING: Removing unreachable block (ram,0x000102f8e6f0) */

void FUN_102f8e640(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000102f97628();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 102f8e6f4; end: 102f8e797;  */

void FUN_102f8e6f4(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

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
    func_0x000102f97628();
    (*pcVar2)(&lStack_60,1,&UNK_1105f2df0,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 102f8e798; end: 102f8e7eb;  */

void FUN_102f8e798(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 102f8e7ec; end: 102f8e827;  */

void FUN_102f8e7ec(void)

{
  FUN_102f8e640();
  return;
}



/* Entry: 102f8e828; end: 102f8e85f;  */

uint FUN_102f8e828(long param_1,long param_2)

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
  FUN_102fa40c0();
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



/* Entry: 102f8e860; end: 102f8e87f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_102f8e860(long *param_1)

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
  long lVar20;
  int iVar21;
  ulong uVar22;
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
  lVar20 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[2];
  pbVar27 = (byte *)unaff_x20[3];
  if ((char)param_1[1] == '\x01') {
    if (lVar18 == 0) {
      if (lVar20 == 0) goto SUB_100e25fcc;
    }
    else if (lVar18 == 1) {
      if (lVar20 == 1) {
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
          uVar22 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar22 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar21 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar21,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar22 = (ulong)(iVar21 - iVar8);
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
          plVar9 = (long *)(ulong)(uVar22 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar22 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar22 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar22 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar21 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar22 < 1) goto code_r0x000100e26128;
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
    else if (lVar20 == 2) goto SUB_100e25fcc;
  }
  else if (lVar20 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 102f8e880; end: 102f8e91f;  */

/* WARNING: Possible PIC construction at 0x000102f8e8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f8e8dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f8e8d0) */
/* WARNING: Removing unreachable block (ram,0x000102f8e8e0) */

void FUN_102f8e880(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f2bb68 != -1) {
    func_0x000107c61568(0x112f2bb68,FUN_102f8e5f8);
  }
  uVar5 = uRam00000001138068d0;
  uVar4 = uRam00000001138068c8;
  uVar3 = uRam00000001138068c0;
  uVar2 = uRam00000001138068b8;
  uVar1 = uRam00000001138068b0;
  *param_1 = uRam00000001138068a8;
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



/* Entry: 102f8e920; end: 102f8e933;  */

void FUN_102f8e920(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f2c4a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f2c4a0,&UNK_10db6fb00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 102f8e934; end: 102f8e967;  */

void FUN_102f8e934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 102f8e968; end: 102f8ea7b;  */

void FUN_102f8e968(undefined8 param_1,undefined8 param_2)

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



/* Entry: 102f8ea7c; end: 102f8ea9b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_102f8ea7c(long *param_1,long *param_2)

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
  long lVar20;
  int iVar21;
  ulong uVar22;
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
  
  lVar20 = *param_1;
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  lVar18 = *param_2;
  lVar15 = param_2[2];
  uVar13 = param_2[3];
  if ((char)param_2[1] == '\x01') {
    if (lVar18 == 0) {
      if (lVar20 == 0) goto SUB_100e25fcc;
    }
    else if (lVar18 == 1) {
      if (lVar20 == 1) {
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
          uVar22 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar22 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar21 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar21,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar22 = (ulong)(iVar21 - iVar8);
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
          plVar9 = (long *)(ulong)(uVar22 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar22 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar22 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar22 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar21 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar22 < 1) goto code_r0x000100e26128;
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
    else if (lVar20 == 2) goto SUB_100e25fcc;
  }
  else if (lVar20 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 102f8ea9c; end: 102f90acb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102f8ea9c(ulong *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  code *pcVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  byte *pbVar19;
  long lVar20;
  int iVar21;
  ulong *puVar22;
  ulong *puVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  ulong *unaff_x19;
  ulong *puVar30;
  ulong *unaff_x20;
  ulong *unaff_x21;
  long lVar31;
  ulong *unaff_x22;
  ulong *puVar32;
  ulong *unaff_x23;
  undefined8 unaff_x24;
  ulong *puVar33;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong *puVar34;
  ulong *puVar35;
  ulong *unaff_x27;
  ulong *puVar36;
  ulong *unaff_x28;
  byte bStack_4b1;
  byte abStack_4b0 [24];
  long lStack_498;
  ulong uStack_490;
  ulong *puStack_488;
  ulong *puStack_480;
  ulong *puStack_478;
  ulong *puStack_470;
  ulong *puStack_468;
  ulong *puStack_460;
  ulong *puStack_458;
  ulong *puStack_450;
  ulong *puStack_448;
  undefined1 *****pppppuStack_440;
  undefined8 uStack_438;
  ulong *puStack_428;
  ulong *puStack_420;
  ulong *puStack_418;
  ulong *puStack_410;
  byte bStack_401;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined1 uStack_3f7;
  undefined1 uStack_3f6;
  undefined1 uStack_3f5;
  undefined1 uStack_3f4;
  undefined1 uStack_3f3;
  long lStack_3e8;
  ulong uStack_3e0;
  ulong *puStack_3d8;
  ulong *puStack_3d0;
  ulong *puStack_3c8;
  ulong *puStack_3c0;
  ulong *puStack_3b8;
  ulong *puStack_3b0;
  ulong *puStack_3a8;
  ulong *puStack_3a0;
  ulong *puStack_398;
  undefined1 ****ppppuStack_390;
  undefined8 uStack_388;
  ulong *puStack_378;
  ulong *puStack_370;
  ulong *puStack_368;
  ulong *puStack_360;
  byte bStack_351;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined1 uStack_347;
  undefined1 uStack_346;
  undefined1 uStack_345;
  undefined1 uStack_344;
  undefined1 uStack_343;
  long lStack_338;
  ulong uStack_330;
  ulong *puStack_328;
  ulong *puStack_320;
  ulong *puStack_318;
  ulong *puStack_310;
  ulong *puStack_308;
  ulong *puStack_300;
  ulong *puStack_2f8;
  ulong *puStack_2f0;
  ulong *puStack_2e8;
  undefined1 ***pppuStack_2e0;
  undefined8 uStack_2d8;
  ulong *puStack_2d0;
  ulong *puStack_2c8;
  ulong *puStack_2c0;
  ulong *puStack_2b8;
  ulong *puStack_2b0;
  byte bStack_2a1;
  byte abStack_2a0 [24];
  long lStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  ulong *puStack_270;
  ulong *puStack_268;
  ulong *puStack_260;
  ulong *puStack_258;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong *puStack_240;
  ulong *puStack_238;
  undefined1 **ppuStack_230;
  undefined8 uStack_228;
  ulong *puStack_218;
  ulong *puStack_210;
  ulong *puStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  byte bStack_1e1;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  undefined1 uStack_1d6;
  undefined1 uStack_1d5;
  undefined1 uStack_1d4;
  undefined1 uStack_1d3;
  long lStack_1c8;
  ulong *puStack_1c0;
  ulong *puStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  ulong *puStack_198;
  ulong *puStack_190;
  ulong *puStack_188;
  ulong *puStack_180;
  ulong *puStack_178;
  undefined1 *puStack_170;
  undefined8 uStack_168;
  ulong *puStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  byte abStack_140 [64];
  ulong uStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar22 = (ulong *)param_1[2];
  if (puVar22 == (ulong *)param_2[2]) {
    if ((puVar22 != (ulong *)0x0) && (param_1 != param_2)) {
      unaff_x21 = (ulong *)0x0;
      unaff_x25 = param_1 + 4;
      unaff_x26 = param_2 + 4;
      unaff_x27 = puVar22;
      do {
        unaff_x27 = (ulong *)((long)unaff_x27 + -1);
        unaff_x24 = 0xc000000000000000;
        param_2 = (ulong *)unaff_x25[1];
        uVar26 = *unaff_x25;
        uStack_e8 = unaff_x25[3];
        uStack_f0 = unaff_x25[2];
        unaff_x23 = &uStack_100;
        puStack_d8 = (ulong *)unaff_x25[5];
        uStack_e0 = unaff_x25[4];
        puStack_c8 = (ulong *)unaff_x25[7];
        uStack_d0 = unaff_x25[6];
        puStack_b8 = (ulong *)unaff_x26[1];
        uStack_c0 = *unaff_x26;
        uStack_a8 = unaff_x26[3];
        uStack_b0 = unaff_x26[2];
        puStack_98 = (ulong *)unaff_x26[5];
        uStack_a0 = unaff_x26[4];
        puStack_88 = (ulong *)unaff_x26[7];
        puStack_90 = (ulong *)unaff_x26[6];
        uStack_100 = uVar26;
        puStack_f8 = param_2;
        if (((((uVar26 != uStack_c0) || (param_2 != puStack_b8)) &&
             (func_0x000107c605b8(), (uVar26 & 1) == 0)) ||
            ((uStack_f0 != uStack_b0 || (uStack_e8 != uStack_a8)))) ||
           (((param_2 = puStack_d8, uStack_e0 != uStack_a0 || (puStack_d8 != puStack_98)) &&
            (uVar26 = uStack_e0, func_0x000107c605b8(), (uVar26 & 1) == 0)))) goto LAB_102f8eefc;
        unaff_x19 = puStack_88;
        unaff_x22 = puStack_90;
        unaff_x28 = puStack_c8;
        uVar10 = (uint)((ulong)puStack_c8 >> 0x20);
        uVar24 = uVar10 >> 0x1e;
        uVar11 = (uint)((ulong)puStack_88 >> 0x20);
        uVar28 = uVar11 >> 0x1e;
        iVar21 = (int)uStack_d0;
        if ((ulong)puStack_c8 >> 0x3e == 3) {
          uVar26 = 0;
          if (((uStack_d0 != 0) || (puStack_c8 != (ulong *)0xc000000000000000)) ||
             (((ulong)puStack_88 >> 0x3e < 3 ||
              ((uVar26 = 0, puStack_90 != (ulong *)0x0 ||
               (puStack_88 != (ulong *)0xc000000000000000)))))) goto joined_r0x000102f8ed80;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar24 == 0) {
              uVar26 = (ulong)puStack_c8 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)(uStack_d0 >> 0x20);
              if (SBORROW4(iVar25,iVar21)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ef48);
                (*pcVar13)();
              }
              uVar26 = (ulong)(iVar25 - iVar21);
            }
joined_r0x000102f8ed80:
            if (uVar11 >> 0x1e < 2) goto LAB_102f8ec1c;
LAB_102f8ebe8:
            if (uVar28 != 2) {
              if (uVar26 == 0) goto joined_r0x000102f8eef0;
              goto LAB_102f8eefc;
            }
            uVar29 = puStack_90[3] - puStack_90[2];
            if (SBORROW8(puStack_90[3],puStack_90[2])) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ef3c);
              (*pcVar13)();
            }
          }
          else {
            if (uVar24 == 2) {
              uVar26 = *(long *)(uStack_d0 + 0x18) - *(long *)(uStack_d0 + 0x10);
              if (SBORROW8(*(long *)(uStack_d0 + 0x18),*(long *)(uStack_d0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ef44);
                (*pcVar13)();
              }
              goto joined_r0x000102f8ed80;
            }
            uVar26 = 0;
            if (1 < uVar28) goto LAB_102f8ebe8;
LAB_102f8ec1c:
            if (uVar28 == 0) {
              uVar29 = (ulong)puStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)puStack_90 >> 0x20);
              if (SBORROW4(iVar25,(int)puStack_90)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ef40);
                (*pcVar13)();
              }
              uVar29 = (ulong)(iVar25 - (int)puStack_90);
            }
          }
          if (uVar26 != uVar29) goto LAB_102f8eefc;
          if (0 < (long)uVar26) {
            if (uVar24 < 2) {
              if (uVar24 == 0) {
                uStack_158._0_1_ = (undefined1)uStack_d0;
                uStack_158._1_1_ = (undefined1)(uStack_d0 >> 8);
                uStack_158._2_1_ = (undefined1)(uStack_d0 >> 0x10);
                uStack_158._3_1_ = (undefined1)(uStack_d0 >> 0x18);
                uStack_158._4_1_ = (undefined1)(uStack_d0 >> 0x20);
                uStack_158._5_1_ = (undefined1)(uStack_d0 >> 0x28);
                uStack_158._6_1_ = (undefined1)(uStack_d0 >> 0x30);
                uStack_158._7_1_ = (undefined1)(uStack_d0 >> 0x38);
                uStack_150 = SUB81(puStack_c8,0);
                uStack_14f = (undefined1)((ulong)puStack_c8 >> 8);
                uStack_14e = (undefined1)((ulong)puStack_c8 >> 0x10);
                uStack_14d = (undefined1)((ulong)puStack_c8 >> 0x18);
                uStack_14c = (undefined1)((ulong)puStack_c8 >> 0x20);
                uStack_14b = (undefined1)((ulong)puStack_c8 >> 0x28);
                param_2 = (ulong *)((long)&uStack_158 + ((ulong)puStack_c8 >> 0x30 & 0xff));
                FUN_102fa5080(&uStack_100,abStack_140);
                FUN_102fa5080(&uStack_c0,abStack_140);
                unaff_x20 = param_2;
                goto LAB_102f8ee38;
              }
              lVar31 = (long)iVar21;
              puVar22 = (ulong *)(((long)uStack_d0 >> 0x20) - lVar31);
              if ((long)uStack_d0 >> 0x20 < lVar31) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ef4c);
                puStack_160 = unaff_x21;
                (*pcVar13)();
              }
              puStack_160 = unaff_x21;
              FUN_102fa5080(&uStack_100,abStack_140);
              puVar33 = &uStack_c0;
              FUN_102fa5080(puVar33,abStack_140);
              func_0x000107c5ec30();
              if (puVar33 == (ulong *)0x0) {
                func_0x000107c5ec38();
                lVar31 = 0;
LAB_102f8ee7c:
                param_2 = (ulong *)0x0;
              }
              else {
                param_2 = puVar33;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar31,(long)param_2)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ef58);
                  (*pcVar13)();
                }
                lVar31 = (lVar31 - (long)param_2) + (long)puVar33;
                func_0x000107c5ec38();
                if (lVar31 == 0) goto LAB_102f8ee7c;
                if ((long)puVar22 <= (long)param_2) {
                  param_2 = puVar22;
                }
                param_2 = (ulong *)((long)param_2 + lVar31);
              }
              unaff_x21 = puStack_160;
              unaff_x23 = &uStack_100;
              func_0x000100e25bdc(abStack_140,lVar31,param_2,unaff_x22,unaff_x19);
              func_0x000102fa50b4(&uStack_c0);
              func_0x000102fa50b4(&uStack_100);
            }
            else {
              if (uVar24 != 2) {
                uStack_150 = 0;
                uStack_14f = 0;
                uStack_14e = 0;
                uStack_14d = 0;
                uStack_14c = 0;
                uStack_14b = 0;
                uStack_158._0_1_ = 0;
                uStack_158._1_1_ = 0;
                uStack_158._2_1_ = 0;
                uStack_158._3_1_ = 0;
                uStack_158._4_1_ = 0;
                uStack_158._5_1_ = 0;
                uStack_158._6_1_ = 0;
                uStack_158._7_1_ = 0;
                FUN_102fa5080(&uStack_100,abStack_140);
                FUN_102fa5080(&uStack_c0,abStack_140);
                param_2 = &uStack_158;
LAB_102f8ee38:
                func_0x000100e25bdc(abStack_140,&uStack_158,param_2,unaff_x22,unaff_x19);
                func_0x000102fa50b4(&uStack_c0);
                func_0x000102fa50b4(&uStack_100);
                if ((abStack_140[0] & 1) != 0) goto joined_r0x000102f8eef0;
                goto LAB_102f8eefc;
              }
              lVar31 = *(long *)(uStack_d0 + 0x10);
              lVar20 = *(long *)(uStack_d0 + 0x18);
              puStack_160 = unaff_x21;
              FUN_102fa5080(&uStack_100,abStack_140);
              unaff_x23 = &uStack_c0;
              FUN_102fa5080(unaff_x23,abStack_140);
              func_0x000107c5ec30();
              param_2 = unaff_x23;
              if (unaff_x23 != (ulong *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar31,(long)param_2)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ef54);
                  (*pcVar13)();
                }
                unaff_x23 = (ulong *)((lVar31 - (long)param_2) + (long)unaff_x23);
              }
              puVar22 = (ulong *)(lVar20 - lVar31);
              if (SBORROW8(lVar20,lVar31)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ef50);
                (*pcVar13)();
              }
              func_0x000107c5ec38();
              unaff_x21 = puStack_160;
              if (unaff_x23 == (ulong *)0x0) {
                param_2 = (ulong *)0x0;
              }
              else {
                if ((long)puVar22 <= (long)param_2) {
                  param_2 = puVar22;
                }
                param_2 = (ulong *)((long)param_2 + (long)unaff_x23);
              }
              func_0x000100e25bdc(abStack_140,unaff_x23,param_2,unaff_x22,unaff_x19);
              func_0x000102fa50b4(&uStack_c0);
              func_0x000102fa50b4(&uStack_100);
            }
            unaff_x20 = (ulong *)((ulong)unaff_x28 & 0x3fffffffffffffff);
            unaff_x24 = 0xc000000000000000;
            if ((abStack_140[0] & 1) == 0) goto LAB_102f8eefc;
          }
        }
joined_r0x000102f8eef0:
        unaff_x23 = &uStack_100;
        unaff_x24 = 0xc000000000000000;
        if (unaff_x27 == (ulong *)0x0) break;
        unaff_x25 = unaff_x25 + 8;
        unaff_x26 = unaff_x26 + 8;
      } while( true );
    }
    puVar22 = (ulong *)0x1;
  }
  else {
LAB_102f8eefc:
    puVar22 = (ulong *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  uStack_168 = 0x102f8ef5c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar33 = (ulong *)puVar22[2];
  puVar34 = unaff_x21;
  puVar36 = unaff_x27;
  puStack_1c0 = unaff_x28;
  puStack_1b8 = unaff_x27;
  puStack_1b0 = unaff_x26;
  puStack_1a8 = unaff_x25;
  uStack_1a0 = unaff_x24;
  puStack_198 = unaff_x23;
  puStack_190 = unaff_x22;
  puStack_188 = unaff_x21;
  puStack_180 = unaff_x20;
  puStack_178 = unaff_x19;
  puStack_170 = &stack0xfffffffffffffff0;
  if (puVar33 == (ulong *)param_2[2]) {
    if ((puVar33 != (ulong *)0x0) && (puVar22 != param_2)) {
      puStack_210 = (ulong *)0x0;
      puVar36 = param_2 + 9;
      puVar22 = puVar22 + 5;
      do {
        uVar26 = puVar22[-1];
        puVar14 = (ulong *)*puVar22;
        puVar16 = (ulong *)puVar22[1];
        unaff_x26 = (ulong *)puVar22[2];
        unaff_x22 = (ulong *)puVar22[3];
        unaff_x19 = (ulong *)puVar22[4];
        puVar15 = (ulong *)puVar36[-4];
        unaff_x23 = (ulong *)puVar36[-3];
        puStack_1f0 = (ulong *)puVar36[-2];
        unaff_x25 = (ulong *)*puVar36;
        unaff_x20 = puVar16;
        if ((((uVar26 != puVar36[-5]) ||
             (unaff_x21 = (ulong *)puVar36[-1], unaff_x28 = puVar22, puVar14 != puVar15)) &&
            (param_2 = puVar14, puStack_208 = puVar22, puStack_1f8 = (ulong *)puVar36[-1],
            func_0x000107c605b8(), puVar34 = puStack_1f8, unaff_x21 = puStack_1f8,
            unaff_x28 = puStack_208, (uVar26 & 1) == 0)) ||
           (((puVar34 = unaff_x21, puStack_200 = puVar15, puVar16 != unaff_x23 ||
             (unaff_x26 != puStack_1f0)) &&
            (param_2 = unaff_x26, func_0x000107c605b8(puVar16,unaff_x26,unaff_x23,puStack_1f0,0),
            unaff_x20 = puVar14, ((ulong)puVar16 & 1) == 0)))) goto LAB_102f8f4c8;
        uVar10 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar24 = uVar10 >> 0x1e;
        uVar11 = (uint)((ulong)unaff_x25 >> 0x20);
        uVar28 = uVar11 >> 0x1e;
        iVar21 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar26 = 0;
          if (((unaff_x22 != (ulong *)0x0) || (unaff_x19 != (ulong *)0xc000000000000000)) ||
             (((ulong)unaff_x25 >> 0x3e < 3 ||
              ((uVar26 = 0, unaff_x21 != (ulong *)0x0 || (unaff_x25 != (ulong *)0xc000000000000000))
              )))) goto joined_r0x000102f8f2f0;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar24 == 0) {
              uVar26 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar25,iVar21)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f51c);
                (*pcVar13)();
              }
              uVar26 = (ulong)(iVar25 - iVar21);
            }
joined_r0x000102f8f2f0:
            if (uVar11 >> 0x1e < 2) goto LAB_102f8f120;
LAB_102f8f0ec:
            if (uVar28 != 2) {
              if (uVar26 == 0) goto LAB_102f8efbc;
              goto LAB_102f8f4c8;
            }
            uVar29 = unaff_x21[3] - unaff_x21[2];
            if (SBORROW8(unaff_x21[3],unaff_x21[2])) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f510);
              (*pcVar13)();
            }
          }
          else {
            if (uVar24 == 2) {
              uVar26 = unaff_x22[3] - unaff_x22[2];
              if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f518);
                (*pcVar13)();
              }
              goto joined_r0x000102f8f2f0;
            }
            uVar26 = 0;
            if (1 < uVar28) goto LAB_102f8f0ec;
LAB_102f8f120:
            if (uVar28 == 0) {
              uVar29 = (ulong)unaff_x25 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)unaff_x21 >> 0x20);
              if (SBORROW4(iVar25,(int)unaff_x21)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f514);
                (*pcVar13)();
              }
              uVar29 = (ulong)(iVar25 - (int)unaff_x21);
            }
          }
          if (uVar26 != uVar29) goto LAB_102f8f4c8;
          if (0 < (long)uVar26) {
            param_2 = unaff_x19;
            puStack_218 = puVar14;
            puStack_1f8 = unaff_x21;
            if (uVar24 < 2) {
              if (uVar24 != 0) {
                lVar31 = (long)iVar21;
                puStack_208 = (ulong *)(((long)unaff_x22 >> 0x20) - lVar31);
                if ((long)unaff_x22 >> 0x20 < lVar31) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f520);
                  (*pcVar13)();
                }
                func_0x000107c61434(puVar14);
                func_0x000107c61434(unaff_x26);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(puStack_200);
                func_0x000107c61434(puStack_1f0);
                puVar14 = puStack_1f8;
                func_0x00010006c00c(puStack_1f8,unaff_x25);
                func_0x000107c5ec30();
                if (puVar14 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  puVar22 = (ulong *)0x0;
                  lVar31 = 0;
                  puVar14 = unaff_x23;
                }
                else {
                  puVar34 = puVar14;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar31,(long)puVar34)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f52c);
                    (*pcVar13)();
                  }
                  puVar16 = (ulong *)((lVar31 - (long)puVar34) + (long)puVar14);
                  func_0x000107c5ec38();
                  if ((long)puStack_208 <= (long)puVar34) {
                    puVar34 = puStack_208;
                  }
                  puVar22 = (ulong *)0x0;
                  if (puVar16 != (ulong *)0x0) {
                    puVar22 = puVar16;
                  }
                  lVar31 = 0;
                  if (puVar16 != (ulong *)0x0) {
                    lVar31 = (long)puVar34 + (long)puVar16;
                  }
                }
LAB_102f8f470:
                unaff_x20 = puStack_1f8;
                unaff_x21 = puStack_210;
                func_0x000100e25bdc(&uStack_1e0,puVar22,lVar31,puStack_1f8,unaff_x25);
                puStack_210 = unaff_x21;
                func_0x000107c6142c(puStack_1f0);
                func_0x000107c6142c(puStack_200);
                func_0x00010006c090(unaff_x20,unaff_x25);
                func_0x000107c6142c(unaff_x26);
                func_0x000107c6142c(puStack_218);
                func_0x00010006c090(unaff_x22);
                puVar34 = unaff_x21;
                unaff_x23 = puVar14;
                if (((byte)uStack_1e0 & 1) != 0) goto LAB_102f8efbc;
                goto LAB_102f8f4c8;
              }
              uStack_1e0._0_1_ = (byte)unaff_x22;
              uStack_1e0._1_1_ = (undefined1)((ulong)unaff_x22 >> 8);
              uStack_1e0._2_1_ = (undefined1)((ulong)unaff_x22 >> 0x10);
              uStack_1e0._3_1_ = (undefined1)((ulong)unaff_x22 >> 0x18);
              uStack_1e0._4_1_ = (undefined1)((ulong)unaff_x22 >> 0x20);
              uStack_1e0._5_1_ = (undefined1)((ulong)unaff_x22 >> 0x28);
              uStack_1e0._6_1_ = (undefined1)((ulong)unaff_x22 >> 0x30);
              uStack_1e0._7_1_ = (undefined1)((ulong)unaff_x22 >> 0x38);
              uStack_1d8 = SUB81(unaff_x19,0);
              uStack_1d7 = (undefined1)((ulong)unaff_x19 >> 8);
              uStack_1d6 = (undefined1)((ulong)unaff_x19 >> 0x10);
              uStack_1d5 = (undefined1)((ulong)unaff_x19 >> 0x18);
              uStack_1d4 = (undefined1)((ulong)unaff_x19 >> 0x20);
              uStack_1d3 = (undefined1)((ulong)unaff_x19 >> 0x28);
              puStack_208 = (ulong *)((long)&uStack_1e0 + ((ulong)unaff_x19 >> 0x30 & 0xff));
              func_0x000107c61434(puVar14);
              func_0x000107c61434(unaff_x26);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              puVar22 = puStack_200;
              func_0x000107c61434(puStack_200);
              unaff_x20 = puStack_1f0;
              func_0x000107c61434(puStack_1f0);
              func_0x00010006c00c(unaff_x21,unaff_x25);
              puVar34 = puStack_210;
              func_0x000100e25bdc(&bStack_1e1,&uStack_1e0,puStack_208,unaff_x21,unaff_x25);
              puStack_210 = puVar34;
              func_0x000107c6142c(unaff_x20);
              unaff_x23 = puVar22;
            }
            else {
              if (uVar24 == 2) {
                uVar26 = unaff_x22[2];
                puStack_208 = (ulong *)unaff_x22[3];
                func_0x000107c61434(puVar14);
                func_0x000107c61434(unaff_x26);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(puStack_200);
                func_0x000107c61434(puStack_1f0);
                func_0x00010006c00c(unaff_x21,unaff_x25);
                func_0x000107c5ec30();
                puVar34 = unaff_x21;
                puVar22 = unaff_x21;
                if (unaff_x21 != (ulong *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(uVar26,(long)puVar34)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f528);
                    (*pcVar13)();
                  }
                  puVar22 = (ulong *)((uVar26 - (long)puVar34) + (long)unaff_x21);
                }
                puVar16 = (ulong *)((long)puStack_208 - uVar26);
                if (SBORROW8((long)puStack_208,uVar26)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f524);
                  (*pcVar13)();
                }
                func_0x000107c5ec38();
                puVar14 = puVar22;
                if (puVar22 == (ulong *)0x0) {
                  lVar31 = 0;
                }
                else {
                  if ((long)puVar16 <= (long)puVar34) {
                    puVar34 = puVar16;
                  }
                  lVar31 = (long)puVar34 + (long)puVar22;
                }
                goto LAB_102f8f470;
              }
              uStack_1d8 = 0;
              uStack_1d7 = 0;
              uStack_1d6 = 0;
              uStack_1d5 = 0;
              uStack_1d4 = 0;
              uStack_1d3 = 0;
              uStack_1e0._0_1_ = 0;
              uStack_1e0._1_1_ = 0;
              uStack_1e0._2_1_ = 0;
              uStack_1e0._3_1_ = 0;
              uStack_1e0._4_1_ = 0;
              uStack_1e0._5_1_ = 0;
              uStack_1e0._6_1_ = 0;
              uStack_1e0._7_1_ = 0;
              func_0x000107c61434(puVar14);
              func_0x000107c61434(unaff_x26);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              puVar22 = puStack_200;
              func_0x000107c61434(puStack_200);
              unaff_x23 = puStack_1f0;
              func_0x000107c61434(puStack_1f0);
              func_0x00010006c00c(unaff_x21,unaff_x25);
              puVar34 = puStack_210;
              func_0x000100e25bdc(&bStack_1e1,&uStack_1e0,&uStack_1e0,unaff_x21,unaff_x25);
              puStack_210 = puVar34;
              func_0x000107c6142c(unaff_x23);
              unaff_x20 = puVar22;
            }
            func_0x000107c6142c(puVar22);
            func_0x00010006c090(puStack_1f8,unaff_x25);
            func_0x000107c6142c(unaff_x26);
            func_0x000107c6142c(puStack_218);
            func_0x00010006c090(unaff_x22);
            unaff_x21 = puVar34;
            if ((bStack_1e1 & 1) == 0) goto LAB_102f8f4c8;
          }
        }
LAB_102f8efbc:
        unaff_x27 = puVar36 + 6;
        unaff_x28 = unaff_x28 + 6;
        puVar33 = (ulong *)((long)puVar33 + -1);
        puVar36 = unaff_x27;
        puVar22 = unaff_x28;
      } while (puVar33 != (ulong *)0x0);
    }
    puVar22 = (ulong *)0x1;
  }
  else {
LAB_102f8f4c8:
    puVar22 = (ulong *)0x0;
    unaff_x21 = puVar34;
    unaff_x27 = puVar36;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  func_0x000107c60e78();
  uStack_228 = 0x102f8f530;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar26 = puVar22[2];
  puVar34 = unaff_x26;
  puVar36 = unaff_x27;
  puStack_280 = unaff_x28;
  puStack_278 = unaff_x27;
  puStack_270 = unaff_x26;
  puStack_268 = unaff_x25;
  puStack_260 = puVar33;
  puStack_258 = unaff_x23;
  puStack_250 = unaff_x22;
  puStack_248 = unaff_x21;
  puStack_240 = unaff_x20;
  puStack_238 = unaff_x19;
  ppuStack_230 = &puStack_170;
  if (uVar26 == param_2[2]) {
    if ((uVar26 != 0) && (puVar22 != param_2)) {
      puVar16 = (ulong *)0x0;
      puVar34 = puVar22 + 6;
      puVar36 = param_2 + 6;
      do {
        unaff_x21 = puVar16;
        unaff_x23 = (ulong *)puVar34[-2];
        unaff_x22 = (ulong *)puVar34[-1];
        unaff_x19 = (ulong *)*puVar34;
        unaff_x20 = (ulong *)puVar36[-2];
        unaff_x25 = (ulong *)puVar36[-1];
        puVar33 = (ulong *)*puVar36;
        func_0x00010006c00c(unaff_x23,unaff_x22);
        func_0x000107c6157c(unaff_x19);
        puStack_2b0 = unaff_x20;
        func_0x00010006c00c(unaff_x20,unaff_x25);
        puVar22 = puVar33;
        func_0x000107c6157c();
        param_2 = unaff_x22;
        if (unaff_x19 != puVar33) {
          func_0x000107c6157c(unaff_x19);
          func_0x000107c6157c(puVar33);
          unaff_x20 = unaff_x19;
          FUN_102f806b8(unaff_x19,puVar33);
          func_0x000107c61574(puVar33);
          puVar22 = unaff_x19;
          func_0x000107c61574();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_102f8f640;
LAB_102f8f988:
          func_0x00010006c090(puStack_2b0,unaff_x25);
          func_0x000107c61574(puVar33);
          func_0x00010006c090(unaff_x23);
          func_0x000107c61574(unaff_x19);
          goto LAB_102f8f9b0;
        }
LAB_102f8f640:
        puVar16 = puStack_2b0;
        uVar10 = (uint)((ulong)unaff_x22 >> 0x20);
        uVar24 = uVar10 >> 0x1e;
        uVar11 = (uint)((ulong)unaff_x25 >> 0x20);
        uVar28 = uVar11 >> 0x1e;
        iVar21 = (int)unaff_x23;
        if ((ulong)unaff_x22 >> 0x3e == 3) {
          uVar29 = 0;
          if ((((unaff_x23 != (ulong *)0x0) || (unaff_x22 != (ulong *)0xc000000000000000)) ||
              ((ulong)unaff_x25 >> 0x3e < 3)) ||
             ((uVar29 = 0, puStack_2b0 != (ulong *)0x0 || (unaff_x25 != (ulong *)0xc000000000000000)
              ))) goto joined_r0x000102f8f6b8;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(puVar33);
          puVar22 = (ulong *)0x0;
          param_2 = (ulong *)0xc000000000000000;
LAB_102f8f5ac:
          func_0x00010006c090(puVar22);
          func_0x000107c61574(unaff_x19);
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar24 == 0) {
              uVar29 = (ulong)unaff_x22 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)unaff_x23 >> 0x20);
              if (SBORROW4(iVar25,iVar21)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f9f8);
                (*pcVar13)();
              }
              uVar29 = (ulong)(iVar25 - iVar21);
            }
joined_r0x000102f8f6b8:
            if (uVar11 >> 0x1e < 2) goto LAB_102f8f6f4;
LAB_102f8f6bc:
            if (uVar28 == 2) {
              uVar27 = puStack_2b0[3] - puStack_2b0[2];
              if (SBORROW8(puStack_2b0[3],puStack_2b0[2])) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f9f0);
                (*pcVar13)();
              }
              goto LAB_102f8f714;
            }
            if (uVar29 != 0) goto LAB_102f8f988;
LAB_102f8f590:
            func_0x00010006c090(puStack_2b0,unaff_x25);
            func_0x000107c61574(puVar33);
            puVar22 = unaff_x23;
            goto LAB_102f8f5ac;
          }
          if (uVar24 == 2) {
            uVar29 = unaff_x23[3] - unaff_x23[2];
            if (SBORROW8(unaff_x23[3],unaff_x23[2])) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f9fc);
              (*pcVar13)();
            }
            goto joined_r0x000102f8f6b8;
          }
          uVar29 = 0;
          if (1 < uVar28) goto LAB_102f8f6bc;
LAB_102f8f6f4:
          if (uVar28 == 0) {
            uVar27 = (ulong)unaff_x25 >> 0x30 & 0xff;
          }
          else {
            iVar25 = (int)((ulong)puStack_2b0 >> 0x20);
            if (SBORROW4(iVar25,(int)puStack_2b0)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8f9f4);
              (*pcVar13)();
            }
            uVar27 = (ulong)(iVar25 - (int)puStack_2b0);
          }
LAB_102f8f714:
          if (uVar29 != uVar27) goto LAB_102f8f988;
          if ((long)uVar29 < 1) goto LAB_102f8f590;
          if (uVar24 < 2) {
            if (uVar24 != 0) {
              lVar31 = (long)iVar21;
              puStack_2c0 = (ulong *)(((long)unaff_x23 >> 0x20) - lVar31);
              if ((long)unaff_x23 >> 0x20 < lVar31) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8fa00);
                puStack_2b8 = unaff_x21;
                (*pcVar13)();
              }
              puStack_2b8 = unaff_x21;
              func_0x000107c5ec30();
              if (puVar22 == (ulong *)0x0) {
                func_0x000107c5ec38();
                lVar31 = 0;
                lVar20 = 0;
              }
              else {
                puStack_2c8 = puVar22;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar31,(long)puVar22)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8fa0c);
                  (*pcVar13)();
                }
                lVar1 = (lVar31 - (long)puVar22) + (long)puStack_2c8;
                func_0x000107c5ec38();
                if ((long)puStack_2c0 <= (long)puVar22) {
                  puVar22 = puStack_2c0;
                }
                lVar31 = 0;
                if (lVar1 != 0) {
                  lVar31 = lVar1;
                }
                lVar20 = 0;
                if (lVar1 != 0) {
                  lVar20 = (long)puVar22 + lVar1;
                }
              }
              goto LAB_102f8f93c;
            }
            abStack_2a0[0] = (byte)unaff_x23;
            abStack_2a0[1] = (byte)((ulong)unaff_x23 >> 8);
            abStack_2a0[2] = (byte)((ulong)unaff_x23 >> 0x10);
            abStack_2a0[3] = (byte)((ulong)unaff_x23 >> 0x18);
            abStack_2a0[4] = (byte)((ulong)unaff_x23 >> 0x20);
            abStack_2a0[5] = (byte)((ulong)unaff_x23 >> 0x28);
            abStack_2a0[6] = (byte)((ulong)unaff_x23 >> 0x30);
            abStack_2a0[7] = (byte)((ulong)unaff_x23 >> 0x38);
            abStack_2a0[8] = (byte)unaff_x22;
            abStack_2a0[9] = (byte)((ulong)unaff_x22 >> 8);
            abStack_2a0[10] = (byte)((ulong)unaff_x22 >> 0x10);
            abStack_2a0[0xb] = (byte)((ulong)unaff_x22 >> 0x18);
            abStack_2a0[0xc] = (byte)((ulong)unaff_x22 >> 0x20);
            abStack_2a0[0xd] = (byte)((ulong)unaff_x22 >> 0x28);
            pbVar19 = abStack_2a0 + ((ulong)unaff_x22 >> 0x30 & 0xff);
LAB_102f8f89c:
            func_0x000100e25bdc(&bStack_2a1,abStack_2a0,pbVar19,puStack_2b0,unaff_x25);
            func_0x00010006c090(puVar16,unaff_x25);
            func_0x000107c61574(puVar33);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            unaff_x20 = puVar16;
            bVar12 = bStack_2a1;
          }
          else {
            if (uVar24 != 2) {
              abStack_2a0[8] = 0;
              abStack_2a0[9] = 0;
              abStack_2a0[10] = 0;
              abStack_2a0[0xb] = 0;
              abStack_2a0[0xc] = 0;
              abStack_2a0[0xd] = 0;
              abStack_2a0[0] = 0;
              abStack_2a0[1] = 0;
              abStack_2a0[2] = 0;
              abStack_2a0[3] = 0;
              abStack_2a0[4] = 0;
              abStack_2a0[5] = 0;
              abStack_2a0[6] = 0;
              abStack_2a0[7] = 0;
              pbVar19 = abStack_2a0;
              goto LAB_102f8f89c;
            }
            puStack_2c0 = (ulong *)unaff_x23[2];
            puStack_2c8 = (ulong *)unaff_x23[3];
            puStack_2b8 = unaff_x21;
            func_0x000107c5ec30();
            puStack_2d0 = unaff_x23;
            if (puVar22 == (ulong *)0x0) {
              lVar31 = 0;
            }
            else {
              puVar16 = puVar22;
              func_0x000107c5ec3c();
              if (SBORROW8((long)puStack_2c0,(long)puVar16)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8fa08);
                (*pcVar13)();
              }
              lVar31 = ((long)puStack_2c0 - (long)puVar16) + (long)puVar22;
              puVar22 = puVar16;
            }
            puVar16 = (ulong *)((long)puStack_2c8 - (long)puStack_2c0);
            if (SBORROW8((long)puStack_2c8,(long)puStack_2c0)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8fa04);
              (*pcVar13)();
            }
            func_0x000107c5ec38();
            unaff_x23 = puStack_2d0;
            if (lVar31 == 0) {
              lVar20 = 0;
            }
            else {
              if ((long)puVar16 <= (long)puVar22) {
                puVar22 = puVar16;
              }
              lVar20 = (long)puVar22 + lVar31;
            }
LAB_102f8f93c:
            unaff_x20 = puStack_2b0;
            unaff_x21 = puStack_2b8;
            func_0x000100e25bdc(abStack_2a0,lVar31,lVar20,puStack_2b0,unaff_x25);
            func_0x00010006c090(unaff_x20,unaff_x25);
            func_0x000107c61574(puVar33);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            bVar12 = abStack_2a0[0];
          }
          if ((bVar12 & 1) == 0) goto LAB_102f8f9b0;
        }
        unaff_x27 = puVar36 + 3;
        unaff_x26 = puVar34 + 3;
        uVar26 = uVar26 - 1;
        puVar16 = unaff_x21;
        puVar34 = unaff_x26;
        puVar36 = unaff_x27;
      } while (uVar26 != 0);
    }
    puVar22 = (ulong *)0x1;
    puVar34 = unaff_x26;
    puVar36 = unaff_x27;
  }
  else {
LAB_102f8f9b0:
    puVar22 = (ulong *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  func_0x000107c60e78();
  uStack_2d8 = 0x102f8fa10;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = puVar22[2];
  puVar16 = unaff_x25;
  uStack_330 = uVar26;
  puStack_328 = puVar36;
  puStack_320 = puVar34;
  puStack_318 = unaff_x25;
  puStack_310 = puVar33;
  puStack_308 = unaff_x23;
  puStack_300 = unaff_x22;
  puStack_2f8 = unaff_x21;
  puStack_2f0 = unaff_x20;
  puStack_2e8 = unaff_x19;
  pppuStack_2e0 = &ppuStack_230;
  if (uVar29 == param_2[2]) {
    if ((uVar29 != 0) && (puVar22 != param_2)) {
      puStack_370 = (ulong *)0x0;
      puVar14 = param_2 + 9;
      puVar34 = puVar22 + 5;
      do {
        uVar26 = puVar34[-1];
        puVar22 = (ulong *)*puVar34;
        puVar23 = (ulong *)puVar34[1];
        unaff_x22 = (ulong *)puVar34[3];
        unaff_x19 = (ulong *)puVar34[4];
        puVar15 = (ulong *)puVar14[-4];
        unaff_x21 = (ulong *)puVar14[-3];
        uVar27 = puVar14[-2];
        puVar36 = (ulong *)(ulong)(byte)uVar27;
        unaff_x25 = (ulong *)puVar14[-1];
        puVar33 = (ulong *)*puVar14;
        puVar16 = unaff_x25;
        if (((uVar26 != puVar14[-5]) || (unaff_x23 = puVar14, puVar22 != puVar15)) &&
           (param_2 = puVar22, puStack_368 = puVar34, puStack_360 = puVar14, func_0x000107c605b8(),
           unaff_x20 = puVar15, unaff_x23 = puStack_360, puVar34 = puStack_368, (uVar26 & 1) == 0))
        goto LAB_102f8ff20;
        if ((byte)uVar27 == 1) {
          if (unaff_x21 == (ulong *)0x0) {
            if (puVar23 != (ulong *)0x0) goto LAB_102f8ff20;
          }
          else if (unaff_x21 == (ulong *)0x1) {
            if (puVar23 != (ulong *)0x1) goto LAB_102f8ff20;
          }
          else if (puVar23 != (ulong *)0x2) goto LAB_102f8ff20;
        }
        else if (puVar23 != unaff_x21) goto LAB_102f8ff20;
        uVar10 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar24 = uVar10 >> 0x1e;
        uVar11 = (uint)((ulong)puVar33 >> 0x20);
        uVar28 = uVar11 >> 0x1e;
        iVar21 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar26 = 0;
          if (((unaff_x22 != (ulong *)0x0) || (unaff_x19 != (ulong *)0xc000000000000000)) ||
             (((ulong)puVar33 >> 0x3e < 3 ||
              ((uVar26 = 0, unaff_x25 != (ulong *)0x0 || (puVar33 != (ulong *)0xc000000000000000))))
             )) goto joined_r0x000102f8fd8c;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar24 == 0) {
              uVar26 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar25,iVar21)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ff74);
                (*pcVar13)();
              }
              uVar26 = (ulong)(iVar25 - iVar21);
            }
joined_r0x000102f8fd8c:
            if (uVar11 >> 0x1e < 2) goto LAB_102f8fbd0;
LAB_102f8fb9c:
            if (uVar28 != 2) {
              if (uVar26 == 0) goto LAB_102f8fa70;
              goto LAB_102f8ff20;
            }
            uVar27 = unaff_x25[3] - unaff_x25[2];
            if (SBORROW8(unaff_x25[3],unaff_x25[2])) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ff68);
              (*pcVar13)();
            }
          }
          else {
            if (uVar24 == 2) {
              uVar26 = unaff_x22[3] - unaff_x22[2];
              if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ff70);
                (*pcVar13)();
              }
              goto joined_r0x000102f8fd8c;
            }
            uVar26 = 0;
            if (1 < uVar28) goto LAB_102f8fb9c;
LAB_102f8fbd0:
            if (uVar28 == 0) {
              uVar27 = (ulong)puVar33 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)unaff_x25 >> 0x20);
              if (SBORROW4(iVar25,(int)unaff_x25)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ff6c);
                (*pcVar13)();
              }
              uVar27 = (ulong)(iVar25 - (int)unaff_x25);
            }
          }
          if (uVar26 != uVar27) goto LAB_102f8ff20;
          if (0 < (long)uVar26) {
            param_2 = unaff_x19;
            if (uVar24 < 2) {
              if (uVar24 != 0) {
                lVar31 = (long)iVar21;
                puStack_368 = (ulong *)(((long)unaff_x22 >> 0x20) - lVar31);
                if ((long)unaff_x22 >> 0x20 < lVar31) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ff78);
                  puStack_378 = puVar22;
                  puStack_360 = puVar15;
                  (*pcVar13)();
                }
                puStack_378 = puVar22;
                puStack_360 = puVar15;
                func_0x000107c61434(puVar22);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(puStack_360);
                puVar15 = unaff_x25;
                func_0x00010006c00c(unaff_x25,puVar33);
                func_0x000107c5ec30();
                if (puVar15 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  puVar22 = (ulong *)0x0;
                  lVar31 = 0;
                  puVar15 = puVar36;
                }
                else {
                  puVar36 = puVar15;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar31,(long)puVar36)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ff84);
                    (*pcVar13)();
                  }
                  puVar14 = (ulong *)((lVar31 - (long)puVar36) + (long)puVar15);
                  func_0x000107c5ec38();
                  if ((long)puStack_368 <= (long)puVar36) {
                    puVar36 = puStack_368;
                  }
                  puVar22 = (ulong *)0x0;
                  if (puVar14 != (ulong *)0x0) {
                    puVar22 = puVar14;
                  }
                  lVar31 = 0;
                  if (puVar14 != (ulong *)0x0) {
                    lVar31 = (long)puVar36 + (long)puVar14;
                  }
                }
LAB_102f8fedc:
                unaff_x21 = puStack_370;
                unaff_x20 = (ulong *)((ulong)unaff_x19 & 0x3fffffffffffffff);
                func_0x000100e25bdc(&uStack_350,puVar22,lVar31,unaff_x25,puVar33);
                puStack_370 = unaff_x21;
                func_0x000107c6142c(puStack_360);
                func_0x00010006c090(unaff_x25,puVar33);
                func_0x000107c6142c(puStack_378);
                func_0x00010006c090(unaff_x22);
                puVar36 = puVar15;
                if (((byte)uStack_350 & 1) != 0) goto LAB_102f8fa70;
                goto LAB_102f8ff20;
              }
              uStack_350._0_1_ = (byte)unaff_x22;
              uStack_350._1_1_ = (undefined1)((ulong)unaff_x22 >> 8);
              uStack_350._2_1_ = (undefined1)((ulong)unaff_x22 >> 0x10);
              uStack_350._3_1_ = (undefined1)((ulong)unaff_x22 >> 0x18);
              uStack_350._4_1_ = (undefined1)((ulong)unaff_x22 >> 0x20);
              uStack_350._5_1_ = (undefined1)((ulong)unaff_x22 >> 0x28);
              uStack_350._6_1_ = (undefined1)((ulong)unaff_x22 >> 0x30);
              uStack_350._7_1_ = (undefined1)((ulong)unaff_x22 >> 0x38);
              uStack_348 = SUB81(unaff_x19,0);
              uStack_347 = (undefined1)((ulong)unaff_x19 >> 8);
              uStack_346 = (undefined1)((ulong)unaff_x19 >> 0x10);
              uStack_345 = (undefined1)((ulong)unaff_x19 >> 0x18);
              uStack_344 = (undefined1)((ulong)unaff_x19 >> 0x20);
              uStack_343 = (undefined1)((ulong)unaff_x19 >> 0x28);
              unaff_x20 = (ulong *)((long)&uStack_350 + ((ulong)unaff_x19 >> 0x30 & 0xff));
              puStack_378 = puVar22;
              func_0x000107c61434(puVar22);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(puVar15);
              func_0x00010006c00c(unaff_x25,puVar33);
              unaff_x21 = puStack_370;
              func_0x000100e25bdc(&bStack_351,&uStack_350,unaff_x20,unaff_x25,puVar33);
              puStack_370 = unaff_x21;
              func_0x000107c6142c(puVar15);
              func_0x00010006c090(unaff_x25,puVar33);
              puVar22 = puStack_378;
              puVar16 = puVar15;
              puVar36 = unaff_x25;
            }
            else {
              if (uVar24 == 2) {
                uVar26 = unaff_x22[2];
                puStack_368 = (ulong *)unaff_x22[3];
                puStack_378 = puVar22;
                puStack_360 = puVar15;
                func_0x000107c61434(puVar22);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(puStack_360);
                puVar22 = unaff_x25;
                func_0x00010006c00c(unaff_x25,puVar33);
                func_0x000107c5ec30();
                puVar36 = puVar22;
                if (puVar22 != (ulong *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(uVar26,(long)puVar36)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ff80);
                    (*pcVar13)();
                  }
                  puVar22 = (ulong *)((uVar26 - (long)puVar36) + (long)puVar22);
                }
                puVar14 = (ulong *)((long)puStack_368 - uVar26);
                if (SBORROW8((long)puStack_368,uVar26)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f8ff7c);
                  (*pcVar13)();
                }
                func_0x000107c5ec38();
                puVar15 = puVar22;
                if (puVar22 == (ulong *)0x0) {
                  lVar31 = 0;
                }
                else {
                  if ((long)puVar14 <= (long)puVar36) {
                    puVar36 = puVar14;
                  }
                  lVar31 = (long)puVar36 + (long)puVar22;
                }
                goto LAB_102f8fedc;
              }
              uStack_348 = 0;
              uStack_347 = 0;
              uStack_346 = 0;
              uStack_345 = 0;
              uStack_344 = 0;
              uStack_343 = 0;
              uStack_350._0_1_ = 0;
              uStack_350._1_1_ = 0;
              uStack_350._2_1_ = 0;
              uStack_350._3_1_ = 0;
              uStack_350._4_1_ = 0;
              uStack_350._5_1_ = 0;
              uStack_350._6_1_ = 0;
              uStack_350._7_1_ = 0;
              puStack_360 = puVar15;
              func_0x000107c61434(puVar22);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              puVar36 = puStack_360;
              func_0x000107c61434(puStack_360);
              func_0x00010006c00c(unaff_x25,puVar33);
              unaff_x21 = puStack_370;
              func_0x000100e25bdc(&bStack_351,&uStack_350,&uStack_350,unaff_x25,puVar33);
              puStack_370 = unaff_x21;
              func_0x000107c6142c(puVar36);
              func_0x00010006c090(unaff_x25,puVar33);
              unaff_x20 = puVar22;
            }
            func_0x000107c6142c(puVar22);
            func_0x00010006c090(unaff_x22);
            unaff_x25 = puVar16;
            if ((bStack_351 & 1) == 0) goto LAB_102f8ff20;
          }
        }
LAB_102f8fa70:
        unaff_x23 = unaff_x23 + 6;
        puVar34 = puVar34 + 6;
        uVar29 = uVar29 - 1;
        puVar14 = unaff_x23;
      } while (uVar29 != 0);
    }
    puVar22 = (ulong *)0x1;
  }
  else {
LAB_102f8ff20:
    puVar22 = (ulong *)0x0;
    unaff_x25 = puVar16;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  func_0x000107c60e78();
  uStack_388 = 0x102f8ff88;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar26 = puVar22[2];
  puVar15 = unaff_x23;
  puVar23 = unaff_x25;
  puVar14 = puVar36;
  puVar16 = puStack_418;
  uStack_3e0 = uVar29;
  puStack_3d8 = puVar36;
  puStack_3d0 = puVar34;
  puStack_3c8 = unaff_x25;
  puStack_3c0 = puVar33;
  puStack_3b8 = unaff_x23;
  puStack_3b0 = unaff_x22;
  puStack_3a8 = unaff_x21;
  puStack_3a0 = unaff_x20;
  puStack_398 = unaff_x19;
  ppppuStack_390 = &pppuStack_2e0;
  if (uVar26 == param_2[2]) {
    if ((uVar26 != 0) && (puVar22 != param_2)) {
      puStack_418 = (ulong *)0x0;
      puVar15 = puVar22 + 8;
      puVar23 = param_2 + 8;
      do {
        uVar29 = puVar15[-4];
        puVar22 = (ulong *)puVar15[-3];
        unaff_x20 = (ulong *)puVar15[-2];
        unaff_x22 = (ulong *)puVar15[-1];
        unaff_x19 = (ulong *)*puVar15;
        puStack_410 = (ulong *)puVar23[-3];
        unaff_x21 = (ulong *)puVar23[-2];
        puVar36 = (ulong *)puVar23[-1];
        puVar34 = (ulong *)*puVar23;
        if (uVar29 == puVar23[-4] && puVar22 == puStack_410) {
          puVar14 = puVar36;
          puVar16 = puStack_418;
          if (unaff_x20 != unaff_x21) goto LAB_102f90490;
        }
        else {
          param_2 = puVar22;
          func_0x000107c605b8();
          puVar16 = (ulong *)0x0;
          puVar30 = unaff_x22;
          puVar32 = puVar34;
          puVar35 = puVar36;
          puVar14 = puVar22;
          if (((uVar29 & 1) == 0) ||
             (puVar30 = unaff_x19, puVar32 = unaff_x22, puVar33 = unaff_x19, puVar35 = puVar34,
             puVar14 = puVar36, unaff_x20 != unaff_x21)) goto LAB_102f9049c;
        }
        uVar10 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar24 = uVar10 >> 0x1e;
        uVar11 = (uint)((ulong)puVar34 >> 0x20);
        uVar28 = uVar11 >> 0x1e;
        iVar21 = (int)unaff_x22;
        puVar16 = puStack_418;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar29 = 0;
          if ((((unaff_x22 != (ulong *)0x0) || (unaff_x19 != (ulong *)0xc000000000000000)) ||
              ((ulong)puVar34 >> 0x3e < 3)) ||
             ((uVar29 = 0, puVar36 != (ulong *)0x0 || (puVar34 != (ulong *)0xc000000000000000))))
          goto joined_r0x000102f902b0;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar24 == 0) {
              uVar29 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)unaff_x22 >> 0x20);
              if (SBORROW4(iVar25,iVar21)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f904e0);
                (*pcVar13)();
              }
              uVar29 = (ulong)(iVar25 - iVar21);
            }
joined_r0x000102f902b0:
            if (uVar11 >> 0x1e < 2) goto LAB_102f90100;
LAB_102f900cc:
            if (uVar28 != 2) {
              puVar14 = puVar36;
              if (uVar29 == 0) goto LAB_102f8ffe8;
              goto LAB_102f90490;
            }
            uVar27 = puVar36[3] - puVar36[2];
            if (SBORROW8(puVar36[3],puVar36[2])) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102f904dc);
              (*pcVar13)();
            }
          }
          else {
            if (uVar24 == 2) {
              uVar29 = unaff_x22[3] - unaff_x22[2];
              if (SBORROW8(unaff_x22[3],unaff_x22[2])) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f904e4);
                (*pcVar13)();
              }
              goto joined_r0x000102f902b0;
            }
            uVar29 = 0;
            if (1 < uVar28) goto LAB_102f900cc;
LAB_102f90100:
            if (uVar28 == 0) {
              uVar27 = (ulong)puVar34 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)puVar36 >> 0x20);
              if (SBORROW4(iVar25,(int)puVar36)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f904d8);
                (*pcVar13)();
              }
              uVar27 = (ulong)(iVar25 - (int)puVar36);
            }
          }
          puVar14 = puVar36;
          if (uVar29 != uVar27) goto LAB_102f90490;
          if (0 < (long)uVar29) {
            param_2 = unaff_x19;
            if (uVar24 < 2) {
              if (uVar24 != 0) {
                lVar31 = (long)iVar21;
                puVar33 = (ulong *)(((long)unaff_x22 >> 0x20) - lVar31);
                if ((long)unaff_x22 >> 0x20 < lVar31) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f904e8);
                  puStack_420 = puVar22;
                  (*pcVar13)();
                }
                puStack_420 = puVar22;
                func_0x000107c61434(puVar22);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(puStack_410);
                puStack_428 = puVar36;
                func_0x00010006c00c(puVar36,puVar34);
                func_0x000107c5ec30();
                if (puVar14 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  lVar31 = 0;
                  lVar20 = 0;
                  puVar14 = puVar36;
                }
                else {
                  puVar22 = puVar14;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar31,(long)puVar22)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x102f904f4);
                    (*pcVar13)();
                  }
                  lVar1 = (lVar31 - (long)puVar22) + (long)puVar14;
                  func_0x000107c5ec38();
                  if ((long)puVar33 <= (long)puVar22) {
                    puVar22 = puVar33;
                  }
                  lVar31 = 0;
                  if (lVar1 != 0) {
                    lVar31 = lVar1;
                  }
                  lVar20 = 0;
                  if (lVar1 != 0) {
                    lVar20 = (long)puVar22 + lVar1;
                  }
                }
                unaff_x21 = puStack_418;
                unaff_x20 = puStack_428;
                func_0x000100e25bdc(&uStack_400,lVar31,lVar20,puStack_428,puVar34);
                puStack_418 = unaff_x21;
                func_0x000107c6142c(puStack_410);
                func_0x00010006c090(unaff_x20,puVar34);
                func_0x000107c6142c(puStack_420);
                func_0x00010006c090(unaff_x22);
                puVar36 = puVar14;
                puVar16 = puStack_418;
                if (((byte)uStack_400 & 1) != 0) goto LAB_102f8ffe8;
                goto LAB_102f90490;
              }
              uStack_400._0_1_ = (byte)unaff_x22;
              uStack_400._1_1_ = (undefined1)((ulong)unaff_x22 >> 8);
              uStack_400._2_1_ = (undefined1)((ulong)unaff_x22 >> 0x10);
              uStack_400._3_1_ = (undefined1)((ulong)unaff_x22 >> 0x18);
              uStack_400._4_1_ = (undefined1)((ulong)unaff_x22 >> 0x20);
              uStack_400._5_1_ = (undefined1)((ulong)unaff_x22 >> 0x28);
              uStack_400._6_1_ = (undefined1)((ulong)unaff_x22 >> 0x30);
              uStack_400._7_1_ = (undefined1)((ulong)unaff_x22 >> 0x38);
              uStack_3f8 = SUB81(unaff_x19,0);
              uStack_3f7 = (undefined1)((ulong)unaff_x19 >> 8);
              uStack_3f6 = (undefined1)((ulong)unaff_x19 >> 0x10);
              uStack_3f5 = (undefined1)((ulong)unaff_x19 >> 0x18);
              uStack_3f4 = (undefined1)((ulong)unaff_x19 >> 0x20);
              uStack_3f3 = (undefined1)((ulong)unaff_x19 >> 0x28);
              unaff_x20 = (ulong *)((long)&uStack_400 + ((ulong)unaff_x19 >> 0x30 & 0xff));
              puStack_420 = puVar22;
              func_0x000107c61434(puVar22);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              puVar33 = puStack_410;
              func_0x000107c61434(puStack_410);
              func_0x00010006c00c(puVar36,puVar34);
              unaff_x21 = puStack_418;
              func_0x000100e25bdc(&bStack_401,&uStack_400,unaff_x20,puVar36,puVar34);
              puStack_418 = unaff_x21;
              func_0x000107c6142c(puVar33);
              func_0x00010006c090(puVar36,puVar34);
              puVar22 = puStack_420;
LAB_102f903bc:
              func_0x000107c6142c(puVar22);
              func_0x00010006c090(unaff_x22);
              puVar22 = puStack_418;
              puVar16 = puStack_418;
              bVar12 = bStack_401;
            }
            else {
              if (uVar24 != 2) {
                uStack_3f8 = 0;
                uStack_3f7 = 0;
                uStack_3f6 = 0;
                uStack_3f5 = 0;
                uStack_3f4 = 0;
                uStack_3f3 = 0;
                uStack_400._0_1_ = 0;
                uStack_400._1_1_ = 0;
                uStack_400._2_1_ = 0;
                uStack_400._3_1_ = 0;
                uStack_400._4_1_ = 0;
                uStack_400._5_1_ = 0;
                uStack_400._6_1_ = 0;
                uStack_400._7_1_ = 0;
                func_0x000107c61434(puVar22);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                puVar33 = puStack_410;
                func_0x000107c61434(puStack_410);
                func_0x00010006c00c(puVar36,puVar34);
                unaff_x21 = puStack_418;
                func_0x000100e25bdc(&bStack_401,&uStack_400,&uStack_400,puVar36,puVar34);
                puStack_418 = unaff_x21;
                func_0x000107c6142c(puVar33);
                func_0x00010006c090(puVar36,puVar34);
                unaff_x20 = puVar22;
                goto LAB_102f903bc;
              }
              uVar29 = unaff_x22[2];
              puVar33 = (ulong *)unaff_x22[3];
              puStack_420 = puVar22;
              func_0x000107c61434(puVar22);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(puStack_410);
              puStack_428 = puVar36;
              func_0x00010006c00c(puVar36,puVar34);
              func_0x000107c5ec30();
              puVar22 = puVar36;
              if (puVar36 != (ulong *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(uVar29,(long)puVar22)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f904f0);
                  (*pcVar13)();
                }
                puVar36 = (ulong *)((uVar29 - (long)puVar22) + (long)puVar36);
              }
              if (SBORROW8((long)puVar33,uVar29)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f904ec);
                (*pcVar13)();
              }
              func_0x000107c5ec38();
              unaff_x21 = puStack_418;
              unaff_x20 = puStack_428;
              if (puVar36 == (ulong *)0x0) {
                lVar31 = 0;
              }
              else {
                if ((long)((long)puVar33 - uVar29) <= (long)puVar22) {
                  puVar22 = (ulong *)((long)puVar33 - uVar29);
                }
                lVar31 = (long)puVar22 + (long)puVar36;
              }
              func_0x000100e25bdc(&uStack_400,puVar36,lVar31,puStack_428,puVar34);
              func_0x000107c6142c(puStack_410);
              func_0x00010006c090(unaff_x20,puVar34);
              func_0x000107c6142c(puStack_420);
              func_0x00010006c090(unaff_x22);
              puVar22 = unaff_x21;
              puVar16 = puStack_418;
              bVar12 = (byte)uStack_400;
            }
            puStack_418 = puVar22;
            puVar14 = puVar36;
            if ((bVar12 & 1) == 0) goto LAB_102f90490;
          }
        }
LAB_102f8ffe8:
        unaff_x23 = puVar15 + 5;
        unaff_x25 = puVar23 + 5;
        uVar26 = uVar26 - 1;
        puVar15 = unaff_x23;
        puVar23 = unaff_x25;
      } while (uVar26 != 0);
    }
    puVar16 = (ulong *)0x1;
    puVar30 = unaff_x19;
    puVar32 = unaff_x22;
    puVar15 = unaff_x23;
    unaff_x19 = puVar33;
    puVar23 = unaff_x25;
    puVar35 = puVar34;
    puVar14 = puVar36;
  }
  else {
LAB_102f90490:
    puStack_418 = puVar16;
    puVar16 = (ulong *)0x0;
    puVar30 = unaff_x19;
    puVar32 = unaff_x22;
    unaff_x19 = puVar33;
    puVar35 = puVar34;
  }
LAB_102f9049c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  func_0x000107c60e78();
  uStack_438 = 0x102f904f8;
  lStack_498 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = puVar16[2];
  uStack_490 = uVar26;
  puStack_488 = puVar14;
  puStack_480 = puVar35;
  puStack_478 = puVar23;
  puStack_470 = unaff_x19;
  puStack_468 = puVar15;
  puStack_460 = puVar32;
  puStack_458 = unaff_x21;
  puStack_450 = unaff_x20;
  puStack_448 = puVar30;
  pppppuStack_440 = &ppppuStack_390;
  if (uVar29 == param_2[2]) {
    if ((uVar29 != 0) && (puVar16 != param_2)) {
      param_2 = param_2 + 9;
      puVar16 = puVar16 + 5;
      do {
        uVar26 = puVar16[-1];
        uVar4 = *puVar16;
        uVar27 = puVar16[1];
        uVar5 = puVar16[2];
        uVar2 = puVar16[3];
        uVar6 = puVar16[4];
        uVar7 = param_2[-4];
        uVar17 = param_2[-3];
        uVar8 = param_2[-2];
        uVar3 = param_2[-1];
        uVar9 = *param_2;
        if ((((uVar26 != param_2[-5]) || (uVar4 != uVar7)) &&
            (func_0x000107c605b8(uVar26,uVar4,param_2[-5],uVar7,0), (uVar26 & 1) == 0)) ||
           (((uVar27 != uVar17 || (uVar5 != uVar8)) &&
            (func_0x000107c605b8(uVar27,uVar5,uVar17,uVar8,0), (uVar27 & 1) == 0))))
        goto LAB_102f90a64;
        uVar10 = (uint)(uVar6 >> 0x20);
        uVar24 = uVar10 >> 0x1e;
        uVar11 = (uint)(uVar9 >> 0x20);
        uVar28 = uVar11 >> 0x1e;
        iVar21 = (int)uVar2;
        if (uVar6 >> 0x3e == 3) {
          uVar26 = 0;
          if (((uVar2 != 0) || (uVar6 != 0xc000000000000000)) ||
             ((uVar9 >> 0x3e < 3 || ((uVar26 = 0, uVar3 != 0 || (uVar9 != 0xc000000000000000))))))
          goto joined_r0x000102f9088c;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar24 == 0) {
              uVar26 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar25,iVar21)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f90ab8);
                (*pcVar13)();
              }
              uVar26 = (ulong)(iVar25 - iVar21);
            }
joined_r0x000102f9088c:
            if (uVar11 >> 0x1e < 2) goto LAB_102f906bc;
LAB_102f90688:
            if (uVar28 != 2) {
              if (uVar26 == 0) goto LAB_102f90558;
              goto LAB_102f90a64;
            }
            uVar27 = *(long *)(uVar3 + 0x18) - *(long *)(uVar3 + 0x10);
            if (SBORROW8(*(long *)(uVar3 + 0x18),*(long *)(uVar3 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x102f90aac);
              (*pcVar13)();
            }
          }
          else {
            if (uVar24 == 2) {
              uVar26 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
              if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f90ab4);
                (*pcVar13)();
              }
              goto joined_r0x000102f9088c;
            }
            uVar26 = 0;
            if (1 < uVar28) goto LAB_102f90688;
LAB_102f906bc:
            if (uVar28 == 0) {
              uVar27 = uVar9 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)(uVar3 >> 0x20);
              if (SBORROW4(iVar25,(int)uVar3)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x102f90ab0);
                (*pcVar13)();
              }
              uVar27 = (ulong)(iVar25 - (int)uVar3);
            }
          }
          if (uVar26 != uVar27) goto LAB_102f90a64;
          if (0 < (long)uVar26) {
            if (uVar24 < 2) {
              if (uVar24 != 0) {
                lVar31 = (long)iVar21;
                uVar26 = ((long)uVar2 >> 0x20) - lVar31;
                if ((long)uVar2 >> 0x20 < lVar31) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f90abc);
                  (*pcVar13)();
                }
                func_0x000107c61434(uVar4);
                func_0x000107c61434(uVar5);
                func_0x00010006c00c(uVar2,uVar6);
                func_0x000107c61434(uVar7);
                func_0x000107c61434(uVar8);
                uVar27 = uVar3;
                func_0x00010006c00c(uVar3,uVar9);
                func_0x000107c5ec30();
                if (uVar27 == 0) {
                  func_0x000107c5ec38();
                  uVar26 = 0;
                  lVar31 = 0;
                }
                else {
                  uVar17 = uVar27;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar31,uVar17)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x102f90ac8);
                    (*pcVar13)();
                  }
                  uVar27 = (lVar31 - uVar17) + uVar27;
                  func_0x000107c5ec38();
                  if ((long)uVar26 <= (long)uVar17) {
                    uVar17 = uVar26;
                  }
                  uVar26 = 0;
                  if (uVar27 != 0) {
                    uVar26 = uVar27;
                  }
                  lVar31 = 0;
                  if (uVar27 != 0) {
                    lVar31 = uVar17 + uVar27;
                  }
                }
LAB_102f90a0c:
                func_0x000100e25bdc(abStack_4b0,uVar26,lVar31,uVar3,uVar9);
                func_0x000107c6142c(uVar8);
                func_0x000107c6142c(uVar7);
                func_0x00010006c090(uVar3,uVar9);
                func_0x000107c6142c(uVar5);
                func_0x000107c6142c(uVar4);
                func_0x00010006c090(uVar2,uVar6);
                if ((abStack_4b0[0] & 1) != 0) goto LAB_102f90558;
                goto LAB_102f90a64;
              }
              abStack_4b0[0] = (byte)uVar2;
              abStack_4b0[1] = (byte)(uVar2 >> 8);
              abStack_4b0[2] = (byte)(uVar2 >> 0x10);
              abStack_4b0[3] = (byte)(uVar2 >> 0x18);
              abStack_4b0[4] = (byte)(uVar2 >> 0x20);
              abStack_4b0[5] = (byte)(uVar2 >> 0x28);
              abStack_4b0[6] = (byte)(uVar2 >> 0x30);
              abStack_4b0[7] = (byte)(uVar2 >> 0x38);
              abStack_4b0[8] = (byte)uVar6;
              abStack_4b0[9] = (byte)(uVar6 >> 8);
              abStack_4b0[10] = (byte)(uVar6 >> 0x10);
              abStack_4b0[0xb] = (byte)(uVar6 >> 0x18);
              abStack_4b0[0xc] = (byte)(uVar6 >> 0x20);
              abStack_4b0[0xd] = (byte)(uVar6 >> 0x28);
              func_0x000107c61434(uVar4);
              func_0x000107c61434(uVar5);
              func_0x00010006c00c(uVar2,uVar6);
              func_0x000107c61434(uVar7);
              func_0x000107c61434(uVar8);
              func_0x00010006c00c(uVar3,uVar9);
              func_0x000100e25bdc(&bStack_4b1,abStack_4b0,abStack_4b0 + (uVar6 >> 0x30 & 0xff),uVar3
                                  ,uVar9);
              func_0x000107c6142c(uVar8);
            }
            else {
              if (uVar24 == 2) {
                lVar31 = *(long *)(uVar2 + 0x10);
                lVar20 = *(long *)(uVar2 + 0x18);
                func_0x000107c61434(uVar4);
                func_0x000107c61434(uVar5);
                func_0x00010006c00c(uVar2,uVar6);
                func_0x000107c61434(uVar7);
                func_0x000107c61434(uVar8);
                uVar26 = uVar3;
                func_0x00010006c00c(uVar3,uVar9);
                func_0x000107c5ec30();
                uVar27 = uVar26;
                if (uVar26 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar31,uVar27)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x102f90ac4);
                    (*pcVar13)();
                  }
                  uVar26 = (lVar31 - uVar27) + uVar26;
                }
                uVar17 = lVar20 - lVar31;
                if (SBORROW8(lVar20,lVar31)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x102f90ac0);
                  (*pcVar13)();
                }
                func_0x000107c5ec38();
                if (uVar26 == 0) {
                  lVar31 = 0;
                }
                else {
                  if ((long)uVar17 <= (long)uVar27) {
                    uVar27 = uVar17;
                  }
                  lVar31 = uVar27 + uVar26;
                }
                goto LAB_102f90a0c;
              }
              abStack_4b0[8] = 0;
              abStack_4b0[9] = 0;
              abStack_4b0[10] = 0;
              abStack_4b0[0xb] = 0;
              abStack_4b0[0xc] = 0;
              abStack_4b0[0xd] = 0;
              abStack_4b0[0] = 0;
              abStack_4b0[1] = 0;
              abStack_4b0[2] = 0;
              abStack_4b0[3] = 0;
              abStack_4b0[4] = 0;
              abStack_4b0[5] = 0;
              abStack_4b0[6] = 0;
              abStack_4b0[7] = 0;
              func_0x000107c61434(uVar4);
              func_0x000107c61434(uVar5);
              func_0x00010006c00c(uVar2,uVar6);
              func_0x000107c61434(uVar7);
              func_0x000107c61434(uVar8);
              func_0x00010006c00c(uVar3,uVar9);
              func_0x000100e25bdc(&bStack_4b1,abStack_4b0,abStack_4b0,uVar3,uVar9);
              func_0x000107c6142c(uVar8);
            }
            func_0x000107c6142c(uVar7);
            func_0x00010006c090(uVar3,uVar9);
            func_0x000107c6142c(uVar5);
            func_0x000107c6142c(uVar4);
            func_0x00010006c090(uVar2,uVar6);
            if ((bStack_4b1 & 1) == 0) goto LAB_102f90a64;
          }
        }
LAB_102f90558:
        param_2 = param_2 + 6;
        puVar16 = puVar16 + 6;
        uVar29 = uVar29 - 1;
      } while (uVar29 != 0);
    }
    uVar18 = 1;
  }
  else {
LAB_102f90a64:
    uVar18 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_498) {
    func_0x000107c60e78(uVar18);
    return;
  }
  return;
}



/* Entry: 102f90acc; end: 102f90ad7;  */

void FUN_102f90acc(void)

{
  return;
}



/* Entry: 102f90ad8; end: 102f90bb7;  */

undefined8 FUN_102f90ad8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = *param_1;
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[4];
  if ((uVar3 >> 0x3d & 1) == 0) {
    uVar7 = param_2[4];
    if ((uVar7 >> 0x3d & 1) != 0) {
      return 0;
    }
    uVar1 = param_2[2];
    uVar4 = param_2[3];
    if ((uVar5 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar5 & 1) == 0)
       ) {
      return 0;
    }
    if (uVar2 != uVar1) {
      return 0;
    }
    func_0x000100e25fcc(uVar6,uVar3,uVar4,uVar7);
  }
  else {
    uVar7 = param_2[4];
    if ((uVar7 >> 0x3d & 1) == 0) {
      return 0;
    }
    uVar1 = param_2[2];
    uVar4 = param_2[3];
    if ((uVar5 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar5 & 1) == 0)
       ) {
      return 0;
    }
    if (uVar2 != uVar1) {
      return 0;
    }
    func_0x000100e25fcc(uVar6,uVar3 & 0xdfffffffffffffff,uVar4,uVar7 & 0xdfffffffffffffff);
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 102f90bb8; end: 102f90bef;  */

/* WARNING: Possible PIC construction at 0x000102f90bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f90bdc) */
/* WARNING: Removing unreachable block (ram,0x00010006c00c) */
/* WARNING: Removing unreachable block (ram,0x00010006c018) */
/* WARNING: Removing unreachable block (ram,0x00010006c048) */
/* WARNING: Removing unreachable block (ram,0x00010006c020) */
/* WARNING: Removing unreachable block (ram,0x00010006c040) */
/* WARNING: Removing unreachable block (ram,0x000107c6157c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0428) */

void FUN_102f90bb8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102f90bf0; end: 102f90cd7;  */

/* WARNING: Possible PIC construction at 0x000102f90c88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f90c8c) */

long FUN_102f90bf0(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_1;
  if (((ulong)param_1[5] >> 0x3d & 1) == 0) {
    if ((*(byte *)((long)param_2 + 0x2f) >> 5 & 1) == 0) {
      if (lVar2 == *param_2 && param_1[1] == param_2[1]) {
        return 1;
      }
__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return lVar2;
    }
  }
  else if (((ulong)param_2[5] >> 0x3d & 1) != 0) {
    uVar3 = param_1[4];
    if ((lVar2 != *param_2) || (param_1[1] != param_2[1]))
    goto __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
    ;
    bVar1 = false;
    if (((double)param_1[2] == (double)param_2[2]) &&
       (bVar1 = false, !NAN((double)param_1[3]) && !NAN((double)param_2[3]))) {
      bVar1 = (double)param_1[3] == (double)param_2[3];
    }
    if ((bVar1) &&
       (func_0x000100e25fcc(uVar3,param_1[5] & 0xdfffffffffffffff,param_2[4],
                            param_2[5] & 0xdfffffffffffffff), (uVar3 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 102f90cd8; end: 102f90cf7;  */

void FUN_102f90cd8(void)

{
  func_0x000107c61168(&PTR_PTR_112f2c260);
  return;
}



/* Entry: 102f90cf8; end: 102f9112b;  */

uint FUN_102f90cf8(ulong *param_1,ulong *param_2)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_160 [48];
  ulong uStack_130;
  ulong uStack_128;
  double dStack_120;
  double dStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  double dStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  double dStack_90;
  double dStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar7 = param_1[1];
  uVar3 = *param_1;
  dVar13 = (double)param_1[3];
  dVar11 = (double)param_1[2];
  uVar8 = param_1[5];
  uVar4 = param_1[4];
  uVar9 = param_2[1];
  uVar5 = *param_2;
  dVar14 = (double)param_2[3];
  dVar12 = (double)param_2[2];
  uVar10 = param_2[5];
  uVar6 = param_2[4];
  uStack_d0 = uVar5;
  uStack_c8 = uVar9;
  dStack_c0 = dVar12;
  dStack_b8 = dVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar3;
  uStack_98 = uVar7;
  dStack_90 = dVar11;
  dStack_88 = dVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar10 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_102fa5174(&uStack_a0,&uStack_130,0x112f2b680,&UNK_10db6af48);
      FUN_102fa5174(&uStack_d0,&uStack_130,0x112f2b680,&UNK_10db6af48);
LAB_102f90db0:
      FUN_102f55208(uVar3,uVar7,dVar11,dVar13,uVar4,uVar8);
LAB_102f90dc8:
      uVar3 = param_1[6];
      func_0x000100e25fcc(uVar3,param_1[7],param_2[6],param_2[7]);
      uVar1 = (uint)uVar3;
      goto LAB_102f91070;
    }
LAB_102f90de0:
    uStack_130 = uVar3;
    uStack_128 = uVar7;
    dStack_120 = dVar11;
    dStack_118 = dVar13;
    uStack_110 = uVar4;
    uStack_108 = uVar8;
    uStack_100 = uVar5;
    uStack_f8 = uVar9;
    dStack_f0 = dVar12;
    dStack_e8 = dVar14;
    uStack_e0 = uVar6;
    uStack_d8 = uVar10;
    FUN_102fa5174(&uStack_a0,auStack_160,0x112f2b680,&UNK_10db6af48);
    FUN_102fa5174(&uStack_d0,auStack_160,0x112f2b680,&UNK_10db6af48);
    func_0x000102fa51bc(&uStack_130,0x112f2c890,&UNK_10db70400);
  }
  else {
    if ((uVar10 & 0x3000000000000000) == 0x3000000000000000) goto LAB_102f90de0;
    if ((uVar8 >> 0x3d & 1) == 0) {
      if ((uVar10 >> 0x3d & 1) == 0) {
        if ((uVar3 == uVar5) && (uVar7 == uVar9)) {
          FUN_102fa5174(&uStack_a0,&uStack_130,0x112f2b680,&UNK_10db6af48);
          FUN_102fa5174(&uStack_d0,&uStack_130,0x112f2b680,&UNK_10db6af48);
          FUN_102f55208(uVar3,uVar7,dVar12,dVar14,uVar6,uVar10);
          goto LAB_102f90db0;
        }
        uVar2 = uVar3;
        func_0x000107c605b8(uVar3,uVar7,uVar5,uVar9,0);
        FUN_102fa5174(&uStack_a0,&uStack_130,0x112f2b680,&UNK_10db6af48);
        FUN_102fa5174(&uStack_d0,&uStack_130,0x112f2b680,&UNK_10db6af48);
        FUN_102f55208(uVar5,uVar9,dVar12,dVar14,uVar6,uVar10);
        FUN_102f55208(uVar3,uVar7,dVar11,dVar13,uVar4,uVar8);
        uVar1 = 0;
        if ((uVar2 & 1) == 0) goto LAB_102f91070;
        goto LAB_102f90dc8;
      }
LAB_102f90ecc:
      FUN_102fa5174(&uStack_a0,&uStack_130,0x112f2b680,&UNK_10db6af48);
      FUN_102fa5174(&uStack_d0,&uStack_130,0x112f2b680,&UNK_10db6af48);
      FUN_102f55208(uVar5,uVar9,dVar12,dVar14,uVar6,uVar10);
    }
    else {
      if ((uVar10 >> 0x3d & 1) == 0) goto LAB_102f90ecc;
      if ((((uVar3 == uVar5) && (uVar7 == uVar9)) ||
          (uVar2 = uVar3, func_0x000107c605b8(uVar3,uVar7,uVar5,uVar9,0), (uVar2 & 1) != 0)) &&
         ((dVar11 == dVar12 && (dVar13 == dVar14)))) {
        FUN_102fa5174(&uStack_a0,&uStack_130,0x112f2b680,&UNK_10db6af48);
        FUN_102fa5174(&uStack_d0,&uStack_130,0x112f2b680,&UNK_10db6af48);
        uVar2 = uVar4;
        func_0x000100e25fcc(uVar4,uVar8 & 0xdfffffffffffffff,uVar6,uVar10 & 0xdfffffffffffffff);
        FUN_102f55208(uVar5,uVar9,dVar12,dVar14,uVar6,uVar10);
        if ((uVar2 & 1) != 0) goto LAB_102f90db0;
      }
      else {
        FUN_102fa5174(&uStack_a0,&uStack_130,0x112f2b680,&UNK_10db6af48);
        FUN_102fa5174(&uStack_d0,&uStack_130,0x112f2b680,&UNK_10db6af48);
        FUN_102f55208(uVar5,uVar9,dVar12,dVar14,uVar6,uVar10);
      }
    }
    FUN_102f55208(uVar3,uVar7,dVar11,dVar13,uVar4,uVar8);
  }
  uVar1 = 0;
LAB_102f91070:
  return uVar1 & 1;
}



/* Entry: 102f9112c; end: 102f91167;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102f9112c(void)

{
  ulong in_x5;
  ulong in_x6;
  uint uVar1;
  
  if (0xe < in_x6 >> 0x3c) {
    return;
  }
  FUN_102f54ea4();
  uVar1 = (uint)(in_x6 >> 0x3e);
  if (uVar1 == 1) {
    in_x5 = in_x6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(in_x5);
  return;
}



/* Entry: 102f91168; end: 102f91a37;  */

uint FUN_102f91168(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_148 [40];
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
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar7 = param_1[1];
  uVar5 = *param_1;
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar8 = param_2[1];
  uVar6 = *param_2;
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar3 = param_1[4];
  uVar4 = param_2[4];
  uStack_d0 = uVar6;
  uStack_c8 = uVar8;
  uStack_c0 = uVar10;
  uStack_b8 = uVar12;
  uStack_b0 = uVar4;
  uStack_a0 = uVar5;
  uStack_98 = uVar7;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar3;
  if (((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar4 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_102fa5174(&uStack_a0,&uStack_120,0x112f2b678,&UNK_10db6af40);
      FUN_102fa5174(&uStack_d0,&uStack_120,0x112f2b678,&UNK_10db6af40);
LAB_102f91218:
      FUN_102f54e60(uVar5,uVar7,uVar9,uVar11,uVar3);
LAB_102f91230:
      uVar3 = param_1[5];
      func_0x000100e25fcc(uVar3,param_1[6],param_2[5],param_2[6]);
      uVar1 = (uint)uVar3;
      goto LAB_102f914bc;
    }
LAB_102f9124c:
    uStack_120 = uVar5;
    uStack_118 = uVar7;
    uStack_110 = uVar9;
    uStack_108 = uVar11;
    uStack_100 = uVar3;
    uStack_f8 = uVar6;
    uStack_f0 = uVar8;
    uStack_e8 = uVar10;
    uStack_e0 = uVar12;
    uStack_d8 = uVar4;
    FUN_102fa5174(&uStack_a0,auStack_148,0x112f2b678,&UNK_10db6af40);
    FUN_102fa5174(&uStack_d0,auStack_148,0x112f2b678,&UNK_10db6af40);
    func_0x000102fa51bc(&uStack_120,0x112f2c8a0,&UNK_10db70828);
  }
  else {
    if ((uVar4 & 0x3000000000000000) == 0x3000000000000000) goto LAB_102f9124c;
    if ((uVar3 >> 0x3d & 1) == 0) {
      if ((((uVar4 >> 0x3d & 1) != 0) ||
          (((uVar5 != uVar6 || (uVar7 != uVar8)) &&
           (uVar2 = uVar5, func_0x000107c605b8(uVar5,uVar7,uVar6,uVar8,0), (uVar2 & 1) == 0)))) ||
         (uVar9 != uVar10)) {
LAB_102f91450:
        FUN_102fa5174(&uStack_a0,&uStack_120,0x112f2b678,&UNK_10db6af40);
        FUN_102fa5174(&uStack_d0,&uStack_120,0x112f2b678,&UNK_10db6af40);
        FUN_102f54e60(uVar6,uVar8,uVar10,uVar12,uVar4);
        goto LAB_102f914a0;
      }
      FUN_102fa5174(&uStack_a0,&uStack_120,0x112f2b678,&UNK_10db6af40);
      FUN_102fa5174(&uStack_d0,&uStack_120,0x112f2b678,&UNK_10db6af40);
      uVar10 = uVar11;
      func_0x000100e25fcc(uVar11,uVar3,uVar12,uVar4);
      FUN_102f54e60(uVar6,uVar8,uVar9,uVar12,uVar4);
      FUN_102f54e60(uVar5,uVar7,uVar9,uVar11,uVar3);
      if ((uVar10 & 1) != 0) goto LAB_102f91230;
    }
    else {
      if ((((uVar4 >> 0x3d & 1) == 0) ||
          (((uVar5 != uVar6 || (uVar7 != uVar8)) &&
           (uVar2 = uVar5, func_0x000107c605b8(uVar5,uVar7,uVar6,uVar8,0), (uVar2 & 1) == 0)))) ||
         (uVar9 != uVar10)) goto LAB_102f91450;
      FUN_102fa5174(&uStack_a0,&uStack_120,0x112f2b678,&UNK_10db6af40);
      FUN_102fa5174(&uStack_d0,&uStack_120,0x112f2b678,&UNK_10db6af40);
      uVar10 = uVar11;
      func_0x000100e25fcc(uVar11,uVar3 & 0xdfffffffffffffff,uVar12,uVar4 & 0xdfffffffffffffff);
      FUN_102f54e60(uVar6,uVar8,uVar9,uVar12,uVar4);
      if ((uVar10 & 1) != 0) goto LAB_102f91218;
LAB_102f914a0:
      FUN_102f54e60(uVar5,uVar7,uVar9,uVar11,uVar3);
    }
  }
  uVar1 = 0;
LAB_102f914bc:
  return uVar1 & 1;
}



/* Entry: 102f91a38; end: 102f91acf;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_102f91a38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 102f91ad0; end: 102f91aef;  */

void FUN_102f91ad0(undefined8 *param_1)

{
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 102f91af0; end: 102f923cf;  */

uint FUN_102f91af0(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_140 [48];
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
  
  uVar4 = param_1[0xf];
  uVar3 = param_1[0xe];
  uVar13 = param_1[0x11];
  uVar11 = param_1[0x10];
  uVar8 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  uStack_b0 = uVar5;
  uStack_a8 = uVar8;
  uStack_a0 = uVar6;
  uStack_98 = uVar7;
  uStack_90 = uVar3;
  uStack_88 = uVar4;
  uStack_80 = uVar11;
  uStack_78 = uVar13;
  if (uVar13 >> 0x3c < 0xf) {
    if (0xe < uVar7 >> 0x3c) goto LAB_102f91d30;
    if (uVar3 == uVar5) {
      if (uVar4 == uVar8) {
        FUN_102fa5174(&uStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
        FUN_102fa5174(&uStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
        uVar5 = uVar11;
        func_0x000100e25fcc(uVar11,uVar13,uVar6,uVar7);
        func_0x000100d2ebd8(uVar3,uVar4,uVar6,uVar7);
        if ((uVar5 & 1) != 0) goto LAB_102f91b88;
        goto LAB_102f91f1c;
      }
      FUN_102fa5174(&uStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&uStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      uVar5 = uVar3;
    }
    else {
      FUN_102fa5174(&uStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&uStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
    }
    func_0x000100d2ebd8(uVar5,uVar8,uVar6,uVar7);
LAB_102f91f1c:
    func_0x000100d2ebd8(uVar3,uVar4,uVar11,uVar13);
  }
  else {
    if (uVar7 >> 0x3c < 0xf) {
LAB_102f91d30:
      FUN_102fa5174(&uStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&uStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      func_0x000100d2ebd8(uVar3,uVar4,uVar11,uVar13);
      uVar3 = uVar5;
      uVar4 = uVar8;
      uVar11 = uVar6;
      uVar13 = uVar7;
      goto LAB_102f91f1c;
    }
    FUN_102fa5174(&uStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
    FUN_102fa5174(&uStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
LAB_102f91b88:
    func_0x000100d2ebd8(uVar3,uVar4,uVar11,uVar13);
    uVar3 = *param_1;
    if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
       (func_0x000107c605b8(), (uVar3 & 1) == 0)) goto LAB_102f91f20;
    uVar4 = param_1[0x13];
    uVar3 = param_1[0x12];
    uVar13 = param_1[0x15];
    uVar11 = param_1[0x14];
    uVar8 = param_1[0x17];
    uVar5 = param_1[0x16];
    uVar9 = param_2[0x13];
    uVar6 = param_2[0x12];
    uVar14 = param_2[0x15];
    uVar12 = param_2[0x14];
    uVar10 = param_2[0x17];
    uVar7 = param_2[0x16];
    uStack_110 = uVar6;
    uStack_108 = uVar9;
    uStack_100 = uVar12;
    uStack_f8 = uVar14;
    uStack_f0 = uVar7;
    uStack_e8 = uVar10;
    uStack_e0 = uVar3;
    uStack_d8 = uVar4;
    uStack_d0 = uVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar5;
    uStack_b8 = uVar8;
    if (uVar4 == 0) {
      if (uVar9 != 0) goto LAB_102f91e4c;
      FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
      FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
LAB_102f91f8c:
      func_0x000102f91a84(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
      uVar3 = (ulong)(param_1[2] != 0);
      if ((char)param_1[3] != '\x01') {
        uVar3 = param_1[2];
      }
      if ((char)param_2[3] == '\x01') {
        if (param_2[2] == 0) {
          if (uVar3 == 0) goto LAB_102f920a0;
        }
        else if (uVar3 == 1) {
LAB_102f920a0:
          uVar3 = param_1[4];
          if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
            uVar3 = param_1[6];
            uVar4 = param_2[6];
            if ((char)param_2[7] == '\x01') {
              if (uVar4 == 0) {
                if (uVar3 == 0) goto LAB_102f9210c;
              }
              else if (uVar4 == 1) {
                if (uVar3 == 1) {
LAB_102f9210c:
                  if (((param_1[8] == param_2[8]) && (param_1[9] == param_2[9])) &&
                     ((param_1[10] == param_2[10] && (param_1[0xb] == param_2[0xb])))) {
                    uVar3 = param_1[0xc];
                    func_0x000100e25fcc(uVar3,param_1[0xd],param_2[0xc],param_2[0xd]);
                    uVar1 = (uint)uVar3;
                    goto LAB_102f91f24;
                  }
                }
              }
              else if (uVar3 == 2) goto LAB_102f9210c;
            }
            else if (uVar3 == uVar4) goto LAB_102f9210c;
          }
        }
      }
      else if (uVar3 == param_2[2]) goto LAB_102f920a0;
    }
    else {
      if (uVar9 == 0) {
LAB_102f91e4c:
        FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
        FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
        func_0x000102f91a84(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
        uVar3 = uVar6;
        uVar4 = uVar9;
        uVar11 = uVar12;
        uVar13 = uVar14;
        uVar5 = uVar7;
        uVar8 = uVar10;
      }
      else {
        if (((uVar3 == uVar6) && (uVar4 == uVar9)) ||
           (uVar2 = uVar3, func_0x000107c605b8(uVar3,uVar4,uVar6,uVar9,0), (uVar2 & 1) != 0)) {
          if (((uVar11 == uVar12) && (uVar13 == uVar14)) ||
             (uVar2 = uVar11, func_0x000107c605b8(uVar11,uVar13,uVar12,uVar14,0), (uVar2 & 1) != 0))
          {
            FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
            FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
            uVar2 = uVar5;
            func_0x000100e25fcc(uVar5,uVar8,uVar7,uVar10);
            func_0x000102f91a84(uVar6,uVar9,uVar12,uVar14,uVar7,uVar10);
            if ((uVar2 & 1) != 0) goto LAB_102f91f8c;
            goto LAB_102f92094;
          }
          FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
          FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
        }
        else {
          FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
          FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
        }
        func_0x000102f91a84(uVar6,uVar9,uVar12,uVar14,uVar7,uVar10);
      }
LAB_102f92094:
      func_0x000102f91a84(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
    }
  }
LAB_102f91f20:
  uVar1 = 0;
LAB_102f91f24:
  return uVar1 & 1;
}



/* Entry: 102f923d0; end: 102f92463;  */

void FUN_102f923d0(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 102f92464; end: 102f924eb;  */

/* WARNING: Possible PIC construction at 0x000102f924a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f924ac) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f92464(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                    byte *param_6,long param_7,ulong param_8)

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
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *unaff_x19;
  long lVar17;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar18;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
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
  undefined1 auVar35 [16];
  
  if (param_2 == (byte *)0x0) {
    if (param_6 != (byte *)0x0) {
      return (byte *)0x0;
    }
  }
  else {
    if (param_6 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if ((param_1 != param_5) || (param_2 != param_6)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_5,param_6,0);
      return param_1;
    }
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
    uVar4 = (uint)((ulong)param_4 >> 0x20);
    uVar11 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_8 >> 0x20);
    uVar14 = uVar5 >> 0x1e;
    iVar7 = (int)param_3;
    pbVar10 = param_4;
    if ((ulong)param_4 >> 0x3e == 3) {
      uVar13 = 0;
      if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
          (param_8 >> 0x3e < 3)) || ((uVar13 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar12,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar13 = (ulong)(iVar12 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar14 == 0) {
        uVar15 = param_8 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar12 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar12,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar13 == (long)(iVar12 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar13 = 0;
      if (uVar14 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar14 == 2) {
        uVar15 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
        if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar13 != uVar15) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar13 < 1) goto code_r0x000100e26128;
        if (uVar11 < 2) {
          if (uVar11 == 0) {
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
            pbVar10 = (byte *)((long)register0x00000008 + (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
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
            pbVar10 = param_3;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar10)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_3 = param_3 + ((long)unaff_x25 - (long)pbVar10);
            func_0x000107c5ec38();
            unaff_x19 = param_3;
            if (param_3 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar10) {
                pbVar10 = unaff_x23;
              }
              pbVar10 = pbVar10 + (long)param_3;
              goto code_r0x000100e262a4;
            }
          }
          pbVar10 = (byte *)0x0;
        }
        else {
          if (uVar11 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar10 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar17 = *(long *)(param_3 + 0x10);
          unaff_x24 = *(byte **)(param_3 + 0x18);
          func_0x000107c5ec30();
          pbVar10 = param_3;
          if (param_3 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar17,(long)pbVar10)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_3 = param_3 + (lVar17 - (long)pbVar10);
          }
          unaff_x23 = unaff_x24 + -lVar17;
          if (SBORROW8((long)unaff_x24,lVar17)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_3;
          unaff_x25 = param_4;
          if (param_3 == (byte *)0x0) {
            pbVar10 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar10) {
              pbVar10 = unaff_x23;
            }
            pbVar10 = pbVar10 + (long)param_3;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar10,param_7
                            ,param_8);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_8;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar13 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
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
    param_1 = *(byte **)pbVar8;
    param_3 = *(byte **)(pbVar8 + 8);
    pbVar16 = *(byte **)(pbVar8 + 0x18);
    bVar19 = pbVar8[0x28];
    param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    param_2 = param_3;
    if (bVar19 < 3) {
      if (bVar19 == 0) {
        if (pbVar10[0x28] == 0) {
          lVar17 = *(long *)pbVar10;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(param_1,lVar17,uVar9);
          return (byte *)(ulong)((uint)param_1 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar19 == 1) {
        if (pbVar10[0x28] != 1) {
          return (byte *)0x0;
        }
        param_5 = *(byte **)(pbVar10 + 8);
        param_6 = *(byte **)(pbVar10 + 0x10);
        lVar17 = *(long *)pbVar10;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(param_1,lVar17,uVar9);
        if (((ulong)param_1 & 1) == 0) {
          return (byte *)0x0;
        }
        param_1 = param_3;
        param_2 = param_4;
        if ((param_3 == param_5) && (param_4 == param_6)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar10[0x28] != 2) {
          return (byte *)0x0;
        }
        param_5 = *(byte **)pbVar10;
        param_6 = *(byte **)(pbVar10 + 8);
        lVar17 = *(long *)(pbVar10 + 0x18);
        if ((param_1 == param_5) && (param_3 == param_6)) {
          if (((pbVar8[0x10] ^ pbVar10[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar16 != (byte *)0x0) {
            if (lVar17 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar17);
            func_0x000107c61174();
            pbVar10 = pbVar16;
            func_0x000107c60118();
            func_0x000107c61170(pbVar16);
            func_0x000107c61170(lVar17);
            pbVar16 = pbVar10;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar17 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar18 = *(long *)(pbVar8 + 0x20);
    if (bVar19 < 5) {
      if (bVar19 != 3) {
        if (pbVar10[0x28] != 4) {
          return (byte *)0x0;
        }
        param_5 = *(byte **)pbVar10;
        param_6 = *(byte **)(pbVar10 + 8);
        if (((param_1 == param_5) && (param_3 == param_6)) &&
           (param_1 = param_4, param_2 = pbVar16, param_5 = *(byte **)(pbVar10 + 0x10),
           param_6 = *(byte **)(pbVar10 + 0x18),
           param_4 == *(byte **)(pbVar10 + 0x10) && pbVar16 == *(byte **)(pbVar10 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar10[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar10 != ((uint)param_1 & 0xff)) {
        return (byte *)0x0;
      }
      param_6 = *(byte **)(pbVar10 + 0x10);
      lVar17 = *(long *)(pbVar10 + 0x20);
      if (param_4 == (byte *)0x0) {
        if (param_6 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (param_6 == (byte *)0x0) {
          return (byte *)0x0;
        }
        param_5 = *(byte **)(pbVar10 + 8);
        param_1 = param_3;
        param_2 = param_4;
        if ((param_3 != param_5) || (param_4 != param_6)) goto code_r0x000107c605b8;
      }
      if (lVar18 != 0) {
        if (lVar17 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar16 == *(byte **)(pbVar10 + 0x18)) && (lVar18 == lVar17)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar16,lVar18,*(byte **)(pbVar10 + 0x18),lVar17,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar16 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar19 != 5) {
      if ((((pbVar16 == (byte *)0x0 && param_3 == (byte *)0x0) && param_1 == (byte *)0x0) &&
          lVar18 == 0) && param_4 == (byte *)0x0) {
        if (pbVar10[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar18 = *(long *)(pbVar10 + 0x20);
        lVar17 = *(long *)(pbVar10 + 0x18);
        bVar19 = pbVar10[8] | (byte)lVar17;
        bVar20 = pbVar10[9] | (byte)((ulong)lVar17 >> 8);
        bVar21 = pbVar10[10] | (byte)((ulong)lVar17 >> 0x10);
        bVar22 = pbVar10[0xb] | (byte)((ulong)lVar17 >> 0x18);
        bVar23 = pbVar10[0xc] | (byte)((ulong)lVar17 >> 0x20);
        bVar24 = pbVar10[0xd] | (byte)((ulong)lVar17 >> 0x28);
        bVar25 = pbVar10[0xe] | (byte)((ulong)lVar17 >> 0x30);
        bVar26 = pbVar10[0xf] | (byte)((ulong)lVar17 >> 0x38);
        bVar27 = pbVar10[0x10] | (byte)lVar18;
        bVar28 = pbVar10[0x11] | (byte)((ulong)lVar18 >> 8);
        bVar29 = pbVar10[0x12] | (byte)((ulong)lVar18 >> 0x10);
        bVar30 = pbVar10[0x13] | (byte)((ulong)lVar18 >> 0x18);
        bVar31 = pbVar10[0x14] | (byte)((ulong)lVar18 >> 0x20);
        bVar32 = pbVar10[0x15] | (byte)((ulong)lVar18 >> 0x28);
        bVar33 = pbVar10[0x16] | (byte)((ulong)lVar18 >> 0x30);
        bVar34 = pbVar10[0x17] | (byte)((ulong)lVar18 >> 0x38);
        auVar35[1] = bVar20;
        auVar35[0] = bVar19;
        auVar35[2] = bVar21;
        auVar35[3] = bVar22;
        auVar35[4] = bVar23;
        auVar35[5] = bVar24;
        auVar35[6] = bVar25;
        auVar35[7] = bVar26;
        auVar35[8] = bVar27;
        auVar35[9] = bVar28;
        auVar35[10] = bVar29;
        auVar35[0xb] = bVar30;
        auVar35[0xc] = bVar31;
        auVar35[0xd] = bVar32;
        auVar35[0xe] = bVar33;
        auVar35[0xf] = bVar34;
        auVar3[1] = bVar20;
        auVar3[0] = bVar19;
        auVar3[2] = bVar21;
        auVar3[3] = bVar22;
        auVar3[4] = bVar23;
        auVar3[5] = bVar24;
        auVar3[6] = bVar25;
        auVar3[7] = bVar26;
        auVar3[8] = bVar27;
        auVar3[9] = bVar28;
        auVar3[10] = bVar29;
        auVar3[0xb] = bVar30;
        auVar3[0xc] = bVar31;
        auVar3[0xd] = bVar32;
        auVar3[0xe] = bVar33;
        auVar3[0xf] = bVar34;
        auVar35 = NEON_ext(auVar35,auVar3,8,1);
        if (CONCAT17(bVar26 | auVar35[7],
                     CONCAT16(bVar25 | auVar35[6],
                              CONCAT15(bVar24 | auVar35[5],
                                       CONCAT14(bVar23 | auVar35[4],
                                                CONCAT13(bVar22 | auVar35[3],
                                                         CONCAT12(bVar21 | auVar35[2],
                                                                  CONCAT11(bVar20 | auVar35[1],
                                                                           bVar19 | auVar35[0]))))))
                    ) == 0 && *(long *)pbVar10 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((param_1 == (byte *)0x1) &&
         (((pbVar16 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
          lVar18 == 0)) {
        if (pbVar10[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar10 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar10[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar10 != 2) {
          return (byte *)0x0;
        }
      }
      lVar18 = *(long *)(pbVar10 + 0x20);
      lVar17 = *(long *)(pbVar10 + 0x18);
      bVar19 = pbVar10[8] | (byte)lVar17;
      bVar20 = pbVar10[9] | (byte)((ulong)lVar17 >> 8);
      bVar21 = pbVar10[10] | (byte)((ulong)lVar17 >> 0x10);
      bVar22 = pbVar10[0xb] | (byte)((ulong)lVar17 >> 0x18);
      bVar23 = pbVar10[0xc] | (byte)((ulong)lVar17 >> 0x20);
      bVar24 = pbVar10[0xd] | (byte)((ulong)lVar17 >> 0x28);
      bVar25 = pbVar10[0xe] | (byte)((ulong)lVar17 >> 0x30);
      bVar26 = pbVar10[0xf] | (byte)((ulong)lVar17 >> 0x38);
      bVar27 = pbVar10[0x10] | (byte)lVar18;
      bVar28 = pbVar10[0x11] | (byte)((ulong)lVar18 >> 8);
      bVar29 = pbVar10[0x12] | (byte)((ulong)lVar18 >> 0x10);
      bVar30 = pbVar10[0x13] | (byte)((ulong)lVar18 >> 0x18);
      bVar31 = pbVar10[0x14] | (byte)((ulong)lVar18 >> 0x20);
      bVar32 = pbVar10[0x15] | (byte)((ulong)lVar18 >> 0x28);
      bVar33 = pbVar10[0x16] | (byte)((ulong)lVar18 >> 0x30);
      bVar34 = pbVar10[0x17] | (byte)((ulong)lVar18 >> 0x38);
      auVar1[1] = bVar20;
      auVar1[0] = bVar19;
      auVar1[2] = bVar21;
      auVar1[3] = bVar22;
      auVar1[4] = bVar23;
      auVar1[5] = bVar24;
      auVar1[6] = bVar25;
      auVar1[7] = bVar26;
      auVar1[8] = bVar27;
      auVar1[9] = bVar28;
      auVar1[10] = bVar29;
      auVar1[0xb] = bVar30;
      auVar1[0xc] = bVar31;
      auVar1[0xd] = bVar32;
      auVar1[0xe] = bVar33;
      auVar1[0xf] = bVar34;
      auVar2[1] = bVar20;
      auVar2[0] = bVar19;
      auVar2[2] = bVar21;
      auVar2[3] = bVar22;
      auVar2[4] = bVar23;
      auVar2[5] = bVar24;
      auVar2[6] = bVar25;
      auVar2[7] = bVar26;
      auVar2[8] = bVar27;
      auVar2[9] = bVar28;
      auVar2[10] = bVar29;
      auVar2[0xb] = bVar30;
      auVar2[0xc] = bVar31;
      auVar2[0xd] = bVar32;
      auVar2[0xe] = bVar33;
      auVar2[0xf] = bVar34;
      auVar35 = NEON_ext(auVar1,auVar2,8,1);
      lVar17 = CONCAT17(bVar26 | auVar35[7],
                        CONCAT16(bVar25 | auVar35[6],
                                 CONCAT15(bVar24 | auVar35[5],
                                          CONCAT14(bVar23 | auVar35[4],
                                                   CONCAT13(bVar22 | auVar35[3],
                                                            CONCAT12(bVar21 | auVar35[2],
                                                                     CONCAT11(bVar20 | auVar35[1],
                                                                              bVar19 | auVar35[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar10[0x28] != 5) {
      return (byte *)0x0;
    }
    param_7 = *(long *)(pbVar10 + 8);
    param_8 = *(ulong *)(pbVar10 + 0x10);
    lVar17 = *(long *)pbVar10;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(param_1,lVar17,uVar9);
    if (((ulong)param_1 & 1) == 0) {
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



/* Entry: 102f924ec; end: 102f92a53;  */

uint FUN_102f924ec(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_140 [48];
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar4 = param_1[5];
  lVar3 = param_1[4];
  uVar13 = param_1[7];
  uVar6 = param_1[6];
  lVar10 = param_2[5];
  lVar5 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
  lStack_b0 = lVar5;
  lStack_a8 = lVar10;
  uStack_a0 = uVar7;
  uStack_98 = uVar8;
  lStack_90 = lVar3;
  lStack_88 = lVar4;
  uStack_80 = uVar6;
  uStack_78 = uVar13;
  if (uVar13 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_102f925d0;
    if (lVar3 == lVar5) {
      if (lVar4 == lVar10) {
        FUN_102fa5174(&lStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
        FUN_102fa5174(&lStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
        uVar9 = uVar6;
        func_0x000100e25fcc(uVar6,uVar13,uVar7,uVar8);
        func_0x000100d2ebd8(lVar3,lVar4,uVar7,uVar8);
        if ((uVar9 & 1) != 0) goto LAB_102f92584;
        goto LAB_102f928b0;
      }
      FUN_102fa5174(&lStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      lVar5 = lVar3;
    }
    else {
      FUN_102fa5174(&lStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
    }
    func_0x000100d2ebd8(lVar5,lVar10,uVar7,uVar8);
LAB_102f928b0:
    func_0x000100d2ebd8(lVar3,lVar4,uVar6,uVar13);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_102f925d0:
      FUN_102fa5174(&lStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
      func_0x000100d2ebd8(lVar3,lVar4,uVar6,uVar13);
      lVar3 = lVar5;
      lVar4 = lVar10;
      uVar6 = uVar7;
      uVar13 = uVar8;
      goto LAB_102f928b0;
    }
    FUN_102fa5174(&lStack_90,&uStack_e0,0x112f2b668,&UNK_10db6af30);
    FUN_102fa5174(&lStack_b0,&uStack_e0,0x112f2b668,&UNK_10db6af30);
LAB_102f92584:
    func_0x000100d2ebd8(lVar3,lVar4,uVar6,uVar13);
    lVar3 = *param_1;
    lVar4 = *param_2;
    if ((char)param_2[1] != '\x01') {
      if (lVar3 == lVar4) goto LAB_102f926bc;
      goto LAB_102f928b4;
    }
    if (lVar4 < 2) {
      if (lVar4 == 0) {
        if (lVar3 == 0) {
LAB_102f926bc:
          lVar3 = param_1[9];
          uVar6 = param_1[8];
          lVar4 = param_1[0xb];
          uVar13 = param_1[10];
          lVar5 = param_1[0xd];
          uVar7 = param_1[0xc];
          lVar10 = param_2[9];
          uVar8 = param_2[8];
          lVar14 = param_2[0xb];
          uVar12 = param_2[10];
          lVar11 = param_2[0xd];
          uVar9 = param_2[0xc];
          uStack_110 = uVar8;
          lStack_108 = lVar10;
          uStack_100 = uVar12;
          lStack_f8 = lVar14;
          uStack_f0 = uVar9;
          lStack_e8 = lVar11;
          uStack_e0 = uVar6;
          lStack_d8 = lVar3;
          uStack_d0 = uVar13;
          lStack_c8 = lVar4;
          uStack_c0 = uVar7;
          lStack_b8 = lVar5;
          if (lVar3 == 0) {
            if (lVar10 == 0) {
              FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
              FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
LAB_102f92a24:
              func_0x000102f91a84(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
              lVar3 = param_1[2];
              func_0x000100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
              uVar1 = (uint)lVar3;
              goto LAB_102f928b8;
            }
LAB_102f928e0:
            FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
            FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
            func_0x000102f91a84(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
            uVar6 = uVar8;
            lVar3 = lVar10;
            uVar13 = uVar12;
            lVar4 = lVar14;
            uVar7 = uVar9;
            lVar5 = lVar11;
          }
          else {
            if (lVar10 == 0) goto LAB_102f928e0;
            if ((((uVar6 == uVar8) && (lVar3 == lVar10)) ||
                (uVar2 = uVar6, func_0x000107c605b8(uVar6,lVar3,uVar8,lVar10,0), (uVar2 & 1) != 0))
               && (((uVar13 == uVar12 && (lVar4 == lVar14)) ||
                   (uVar2 = uVar13, func_0x000107c605b8(uVar13,lVar4,uVar12,lVar14,0),
                   (uVar2 & 1) != 0)))) {
              FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
              FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
              uVar2 = uVar7;
              func_0x000100e25fcc(uVar7,lVar5,uVar9,lVar11);
              func_0x000102f91a84(uVar8,lVar10,uVar12,lVar14,uVar9,lVar11);
              if ((uVar2 & 1) != 0) goto LAB_102f92a24;
            }
            else {
              FUN_102fa5174(&uStack_e0,auStack_140,0x112f2b670,&UNK_10db6af38);
              FUN_102fa5174(&uStack_110,auStack_140,0x112f2b670,&UNK_10db6af38);
              func_0x000102f91a84(uVar8,lVar10,uVar12,lVar14,uVar9,lVar11);
            }
          }
          func_0x000102f91a84(uVar6,lVar3,uVar13,lVar4,uVar7,lVar5);
        }
      }
      else if (lVar3 == 1) goto LAB_102f926bc;
    }
    else if (lVar4 == 2) {
      if (lVar3 == 2) goto LAB_102f926bc;
    }
    else if (lVar3 == 3) goto LAB_102f926bc;
  }
LAB_102f928b4:
  uVar1 = 0;
LAB_102f928b8:
  return uVar1 & 1;
}



/* Entry: 102f92a54; end: 102f92a6f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102f92a54(void)

{
  ulong in_x4;
  ulong in_x5;
  uint uVar1;
  
  if (0xe < in_x5 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(in_x5 >> 0x3e);
  if (uVar1 == 1) {
    in_x4 = in_x5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x4);
  return;
}



/* Entry: 102f92a70; end: 102f92f6f;  */

void FUN_102f92a70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b730;
  func_0x000107c61520(&UNK_10db6b730,&UNK_1105f2e68);
  puRam0000000112f2b728 = puVar1;
  return;
}



/* Entry: 102f92f70; end: 102f930f3;  */

/* WARNING: Possible PIC construction at 0x000102f92fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f92fa4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f92f70(undefined8 *param_1,undefined8 *param_2)

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
  if (((uVar13 == param_2[2] && param_1[3] == param_2[3]) ||
      (func_0x000107c605b8(), (uVar13 & 1) != 0)) && (param_1[4] == param_2[4])) {
    lVar19 = param_1[5];
    lVar22 = param_2[5];
    if (*(char *)(param_2 + 6) == '\x01') {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar19 == 0) {
LAB_102f93014:
            pbVar10 = (byte *)param_1[7];
            pbVar26 = (byte *)param_1[8];
            lVar19 = param_2[7];
            uVar13 = param_2[8];
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
              uVar5 = (uint)(uVar13 >> 0x20);
              uVar23 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar14 = pbVar26;
              if ((ulong)pbVar26 >> 0x3e == 3) {
                uVar21 = 0;
                if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                   ((uVar13 >> 0x3e < 3 ||
                    ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))))
                goto joined_r0x000100e26170;
code_r0x000100e26128:
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
                if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                if (uVar23 == 0) {
                  uVar24 = uVar13 >> 0x30 & 0xff;
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
                if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                if (uVar23 == 2) {
                  uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                  if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
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
                    if (uVar18 != 2) {
                      *(undefined8 *)(puVar7 + -0x6a) = 0;
                      *(undefined8 *)(puVar7 + -0x70) = 0;
                      pbVar14 = puVar7 + -0x70;
                      goto code_r0x000100e26260;
                    }
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar14 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
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
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
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
              bVar27 = pbVar9[0x28];
              pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar15 = pbVar10;
              if (bVar27 < 3) {
                if (bVar27 == 0) {
                  if (pbVar14[0x28] == 0) {
                    lVar19 = *(long *)pbVar14;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
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
                  lVar19 = *(long *)pbVar14;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar15 = pbVar26;
                  if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar14[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  lVar19 = *(long *)(pbVar14 + 0x18);
                  if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar25 != (byte *)0x0) {
                      if (lVar19 == 0) {
                        return (byte *)0x0;
                      }
                      func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                      func_0x000107c61174(lVar19);
                      func_0x000107c61174();
                      pbVar12 = pbVar25;
                      func_0x000107c60118();
                      func_0x000107c61170(pbVar25);
                      func_0x000107c61170(lVar19);
                      pbVar25 = pbVar12;
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
              if (bVar27 < 5) {
                if (bVar27 != 3) {
                  if (pbVar14[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
                     pbVar17 = *(byte **)(pbVar14 + 0x18),
                     pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))
                     ) {
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
                lVar19 = *(long *)(pbVar14 + 0x20);
                if (pbVar26 == (byte *)0x0) {
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
                  pbVar15 = pbVar26;
                  if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                  if (((ulong)pbVar25 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  return (byte *)0x1;
                }
                goto joined_r0x000100e26620;
              }
              if (bVar27 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar26 == (byte *)0x0) {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar14 + 0x20);
                  lVar19 = *(long *)(pbVar14 + 0x18);
                  bVar27 = pbVar14[8] | (byte)lVar19;
                  bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                  bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar35 = pbVar14[0x10] | (byte)lVar22;
                  bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0)
                    && lVar22 == 0)) {
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
                lVar22 = *(long *)(pbVar14 + 0x20);
                lVar19 = *(long *)(pbVar14 + 0x18);
                bVar27 = pbVar14[8] | (byte)lVar19;
                bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar14[0x10] | (byte)lVar22;
                bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                               CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar14[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar14 + 8);
              uVar13 = *(ulong *)(pbVar14 + 0x10);
              lVar22 = *(long *)pbVar14;
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
        else if (lVar19 == 1) goto LAB_102f93014;
      }
      else if (lVar22 == 2) {
        if (lVar19 == 2) goto LAB_102f93014;
      }
      else if (lVar19 == 3) goto LAB_102f93014;
    }
    else if (lVar19 == lVar22) goto LAB_102f93014;
  }
  return (byte *)0x0;
}



/* Entry: 102f930f4; end: 102f93437;  */

uint FUN_102f930f4(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar3 = param_1[0xd];
  uVar2 = param_1[0xc];
  uVar8 = param_1[0xf];
  uVar6 = param_1[0xe];
  uVar5 = param_2[0xd];
  uVar4 = param_2[0xc];
  uVar9 = param_2[0xf];
  uVar7 = param_2[0xe];
  uStack_a0 = uVar4;
  uStack_98 = uVar5;
  uStack_90 = uVar7;
  uStack_88 = uVar9;
  uStack_80 = uVar2;
  uStack_78 = uVar3;
  uStack_70 = uVar6;
  uStack_68 = uVar8;
  if (uVar8 >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) goto LAB_102f93268;
    if (uVar2 == uVar4) {
      if (uVar3 == uVar5) {
        FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
        FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
        uVar4 = uVar6;
        func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
        func_0x000100d2ebd8(uVar2,uVar3,uVar7,uVar9);
        if ((uVar4 & 1) != 0) goto LAB_102f9318c;
        goto LAB_102f933e0;
      }
      FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
      uVar4 = uVar2;
    }
    else {
      FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
    }
    func_0x000100d2ebd8(uVar4,uVar5,uVar7,uVar9);
LAB_102f933e0:
    func_0x000100d2ebd8(uVar2,uVar3,uVar6,uVar8);
  }
  else {
    if (uVar9 >> 0x3c < 0xf) {
LAB_102f93268:
      FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
      func_0x000100d2ebd8(uVar2,uVar3,uVar6,uVar8);
      uVar2 = uVar4;
      uVar3 = uVar5;
      uVar6 = uVar7;
      uVar8 = uVar9;
      goto LAB_102f933e0;
    }
    FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
    FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
LAB_102f9318c:
    func_0x000100d2ebd8(uVar2,uVar3,uVar6,uVar8);
    uVar2 = *param_1;
    if (((uVar2 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      uVar2 = param_1[2];
      if (((uVar2 == param_2[2]) && (param_1[3] == param_2[3])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar2 = param_1[4];
        if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[6];
          if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar2 = param_1[8];
            uVar3 = param_2[8];
            if ((char)param_2[9] == '\x01') {
              if (uVar3 == 0) {
                if (uVar2 == 0) goto LAB_102f93428;
              }
              else if (uVar3 == 1) {
                if (uVar2 == 1) {
LAB_102f93428:
                  uVar2 = param_1[10];
                  func_0x000100e25fcc(uVar2,param_1[0xb],param_2[10],param_2[0xb]);
                  uVar1 = (uint)uVar2;
                  goto LAB_102f933e8;
                }
              }
              else if (uVar2 == 2) goto LAB_102f93428;
            }
            else if (uVar2 == uVar3) goto LAB_102f93428;
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_102f933e8:
  return uVar1 & 1;
}



/* Entry: 102f93438; end: 102f934d7;  */

/* WARNING: Possible PIC construction at 0x000102f93468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f9346c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f93438(undefined8 *param_1,undefined8 *param_2)

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
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 == 0) goto LAB_102f934a4;
    }
    else if (lVar22 == 1) {
      if (lVar19 == 1) {
LAB_102f934a4:
        pbVar10 = (byte *)param_1[4];
        pbVar26 = (byte *)param_1[5];
        lVar19 = param_2[4];
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
          uVar4 = (uint)((ulong)pbVar26 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
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
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
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
            if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
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
                  puVar7[-0x68] = (char)pbVar26;
                  puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                unaff_x25 = pbVar26;
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
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
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
          pbVar25 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
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
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
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
                if (pbVar25 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar19);
                  pbVar25 = pbVar12;
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
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
            if (pbVar26 == (byte *)0x0) {
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
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
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
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
            bVar27 = pbVar13[8] | (byte)lVar19;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
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
    else if (lVar19 == 2) goto LAB_102f934a4;
  }
  else if (lVar19 == lVar22) goto LAB_102f934a4;
  return (byte *)0x0;
}



/* Entry: 102f934d8; end: 102f93f1b;  */

uint FUN_102f934d8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
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
  undefined1 auStack_460 [64];
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
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
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
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
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar7 = param_1[0xd];
    uVar2 = param_1[0xc];
    uVar13 = param_1[0xf];
    uVar11 = param_1[0xe];
    uVar8 = param_1[0x11];
    uVar4 = param_1[0x10];
    uVar9 = param_2[0xd];
    uVar5 = param_2[0xc];
    uVar14 = param_2[0xf];
    uVar12 = param_2[0xe];
    uVar10 = param_2[0x11];
    uVar6 = param_2[0x10];
    uStack_1e0 = uVar5;
    uStack_1d8 = uVar9;
    uStack_1d0 = uVar12;
    uStack_1c8 = uVar14;
    uStack_1c0 = uVar6;
    uStack_1b8 = uVar10;
    uStack_1b0 = uVar2;
    uStack_1a8 = uVar7;
    uStack_1a0 = uVar11;
    uStack_198 = uVar13;
    uStack_190 = uVar4;
    uStack_188 = uVar8;
    if (uVar8 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_102f935f4;
      uStack_c8 = uVar2;
      uStack_c0 = uVar7;
      uStack_b8 = uVar11;
      uStack_b0 = uVar13;
      uStack_a8 = uVar4;
      uStack_a0 = uVar8;
      uStack_98 = uVar5;
      uStack_90 = uVar9;
      uStack_88 = uVar12;
      uStack_80 = uVar14;
      uStack_78 = uVar6;
      uStack_70 = uVar10;
      FUN_102fa5174(&uStack_1b0,&uStack_360,0x112f2b6b8,&UNK_10db6af80);
      FUN_102fa5174(&uStack_1e0,&uStack_360,0x112f2b6b8,&UNK_10db6af80);
      puVar3 = &uStack_c8;
      func_0x000102f9215c(puVar3,&uStack_98);
      func_0x000102f550e8(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
      func_0x000102f550e8(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
      if (((ulong)puVar3 & 1) != 0) goto LAB_102f9371c;
    }
    else if (uVar10 >> 0x3c < 0xf) {
LAB_102f935f4:
      FUN_102fa5174(&uStack_1b0,&uStack_360,0x112f2b6b8,&UNK_10db6af80);
      FUN_102fa5174(&uStack_1e0,&uStack_360,0x112f2b6b8,&UNK_10db6af80);
      func_0x000102f550e8(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
      func_0x000102f550e8(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
    }
    else {
      FUN_102fa5174(&uStack_1b0,&uStack_360,0x112f2b6b8,&UNK_10db6af80);
      FUN_102fa5174(&uStack_1e0,&uStack_360,0x112f2b6b8,&UNK_10db6af80);
      func_0x000102f550e8(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
LAB_102f9371c:
      uVar2 = param_1[2];
      if (((uVar2 == param_2[2]) && (param_1[3] == param_2[3])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar9 = param_1[0x13];
        uVar5 = param_1[0x12];
        uVar15 = param_1[0x15];
        uVar13 = param_1[0x14];
        uVar10 = param_1[0x17];
        uVar6 = param_1[0x16];
        uVar2 = param_1[0x18];
        uVar11 = param_2[0x13];
        uVar7 = param_2[0x12];
        uVar16 = param_2[0x15];
        uVar14 = param_2[0x14];
        uVar12 = param_2[0x17];
        uVar8 = param_2[0x16];
        uVar4 = param_2[0x18];
        uStack_260 = uVar7;
        uStack_258 = uVar11;
        uStack_250 = uVar14;
        uStack_248 = uVar16;
        uStack_240 = uVar8;
        uStack_238 = uVar12;
        uStack_230 = uVar4;
        uStack_220 = uVar5;
        uStack_218 = uVar9;
        uStack_210 = uVar13;
        uStack_208 = uVar15;
        uStack_200 = uVar6;
        uStack_1f8 = uVar10;
        uStack_1f0 = uVar2;
        if (uVar2 >> 0x3c < 0xf) {
          if (0xe < uVar4 >> 0x3c) goto LAB_102f93820;
          uStack_138 = uVar5;
          uStack_130 = uVar9;
          uStack_128 = uVar13;
          uStack_120 = uVar15;
          uStack_118 = uVar6;
          uStack_110 = uVar10;
          uStack_108 = uVar2;
          uStack_100 = uVar7;
          uStack_f8 = uVar11;
          uStack_f0 = uVar14;
          uStack_e8 = uVar16;
          uStack_e0 = uVar8;
          uStack_d8 = uVar12;
          uStack_d0 = uVar4;
          FUN_102fa5174(&uStack_220,&uStack_360,0x112f2b6c0,&UNK_10db6af88);
          FUN_102fa5174(&uStack_260,&uStack_360,0x112f2b6c0,&UNK_10db6af88);
          puVar3 = &uStack_138;
          FUN_102f91168(puVar3,&uStack_100);
          func_0x000102f54e24(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar4);
          func_0x000102f54e24(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar2);
          if (((ulong)puVar3 & 1) != 0) goto LAB_102f9396c;
        }
        else if (uVar4 >> 0x3c < 0xf) {
LAB_102f93820:
          FUN_102fa5174(&uStack_220,&uStack_360,0x112f2b6c0,&UNK_10db6af88);
          FUN_102fa5174(&uStack_260,&uStack_360,0x112f2b6c0,&UNK_10db6af88);
          func_0x000102f54e24(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar2);
          func_0x000102f54e24(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar4);
        }
        else {
          FUN_102fa5174(&uStack_220,&uStack_360,0x112f2b6c0,&UNK_10db6af88);
          FUN_102fa5174(&uStack_260,&uStack_360,0x112f2b6c0,&UNK_10db6af88);
          func_0x000102f54e24(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar2);
LAB_102f9396c:
          uVar2 = param_1[4];
          if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uStack_298 = param_1[0x1a];
            uStack_2a0 = param_1[0x19];
            uStack_288 = param_1[0x1c];
            uStack_290 = param_1[0x1b];
            uStack_278 = param_1[0x1e];
            uStack_280 = param_1[0x1d];
            uStack_268 = param_1[0x20];
            uStack_270 = param_1[0x1f];
            uStack_2d8 = param_2[0x1a];
            uStack_2e0 = param_2[0x19];
            uStack_2c8 = param_2[0x1c];
            uStack_2d0 = param_2[0x1b];
            uStack_2b8 = param_2[0x1e];
            uStack_2c0 = param_2[0x1d];
            uStack_2a8 = param_2[0x20];
            uStack_2b0 = param_2[0x1f];
            uStack_328 = param_1[0x20];
            uStack_330 = param_1[0x1f];
            uStack_358 = param_1[0x1a];
            uStack_360 = param_1[0x19];
            uStack_348 = param_1[0x1c];
            uStack_350 = param_1[0x1b];
            uStack_338 = param_1[0x1e];
            uStack_340 = param_1[0x1d];
            uStack_368 = param_2[0x20];
            uStack_370 = param_2[0x1f];
            uStack_378 = param_2[0x1e];
            uStack_380 = param_2[0x1d];
            uStack_398 = param_2[0x1a];
            uStack_3a0 = param_2[0x19];
            uStack_388 = param_2[0x1c];
            uStack_390 = param_2[0x1b];
            uStack_320 = uStack_3a0;
            uStack_318 = uStack_398;
            uStack_310 = uStack_390;
            uStack_308 = uStack_388;
            uStack_300 = uStack_380;
            uStack_2f8 = uStack_378;
            uStack_2f0 = uStack_370;
            uStack_2e8 = uStack_368;
            if (uStack_328 >> 0x3c < 0xf) {
              if (0xe < uStack_368 >> 0x3c) goto LAB_102f93a80;
              uStack_418 = param_2[0x1a];
              uStack_420 = param_2[0x19];
              uStack_408 = param_2[0x1c];
              uStack_410 = param_2[0x1b];
              uStack_3f8 = param_2[0x1e];
              uStack_400 = param_2[0x1d];
              uStack_3e8 = param_2[0x20];
              uStack_3f0 = param_2[0x1f];
              uStack_178 = param_1[0x1a];
              uStack_180 = param_1[0x19];
              uStack_168 = param_1[0x1c];
              uStack_170 = param_1[0x1b];
              uStack_158 = param_1[0x1e];
              uStack_160 = param_1[0x1d];
              uStack_148 = param_1[0x20];
              uStack_150 = param_1[0x1f];
              uStack_3e0 = uStack_420;
              uStack_3d8 = uStack_418;
              uStack_3d0 = uStack_410;
              uStack_3c8 = uStack_408;
              uStack_3c0 = uStack_400;
              uStack_3b8 = uStack_3f8;
              uStack_3b0 = uStack_3f0;
              uStack_3a8 = uStack_3e8;
              FUN_102fa5174(&uStack_2a0,auStack_460,0x112f2a138,&UNK_10db6af50);
              FUN_102fa5174(&uStack_2e0,auStack_460,0x112f2a138,&UNK_10db6af50);
              puVar3 = &uStack_180;
              FUN_102f90cf8(puVar3,&uStack_3e0);
              func_0x000102fa51bc(&uStack_420,0x112f2a138,&UNK_10db6af50);
              func_0x000102fa51bc(&uStack_360,0x112f2a138,&UNK_10db6af50);
              if (((ulong)puVar3 & 1) != 0) goto LAB_102f93b98;
            }
            else if (uStack_368 >> 0x3c < 0xf) {
LAB_102f93a80:
              uStack_3e0 = uStack_360;
              uStack_3d8 = uStack_358;
              uStack_3d0 = uStack_350;
              uStack_3c8 = uStack_348;
              uStack_3c0 = uStack_340;
              uStack_3b8 = uStack_338;
              uStack_3b0 = uStack_330;
              uStack_3a8 = uStack_328;
              FUN_102fa5174(&uStack_2a0,&uStack_180,0x112f2a138,&UNK_10db6af50);
              FUN_102fa5174(&uStack_2e0,&uStack_180,0x112f2a138,&UNK_10db6af50);
              func_0x000102fa51bc(&uStack_3e0,0x112f2b688,&UNK_10db6af58);
            }
            else {
              uStack_3d8 = param_1[0x1a];
              uStack_3e0 = param_1[0x19];
              uStack_3c8 = param_1[0x1c];
              uStack_3d0 = param_1[0x1b];
              uStack_3b8 = param_1[0x1e];
              uStack_3c0 = param_1[0x1d];
              uStack_3a8 = param_1[0x20];
              uStack_3b0 = param_1[0x1f];
              FUN_102fa5174(&uStack_2a0,&uStack_180,0x112f2a138,&UNK_10db6af50);
              FUN_102fa5174(&uStack_2e0,&uStack_180,0x112f2a138,&UNK_10db6af50);
              func_0x000102fa51bc(&uStack_3e0,0x112f2a138,&UNK_10db6af50);
LAB_102f93b98:
              uVar2 = param_1[6];
              uVar4 = param_2[6];
              if ((char)param_2[7] == '\x01') {
                if (uVar4 == 0) {
                  if (uVar2 == 0) goto LAB_102f93be0;
                }
                else if (uVar4 == 1) {
                  if (uVar2 == 1) {
LAB_102f93be0:
                    uVar4 = param_1[0x22];
                    uVar2 = param_1[0x21];
                    uVar6 = param_1[0x24];
                    uVar5 = param_1[0x23];
                    uVar8 = param_1[0x26];
                    uVar7 = param_1[0x25];
                    uVar11 = param_2[0x22];
                    uVar9 = param_2[0x21];
                    uVar14 = param_2[0x24];
                    uVar13 = param_2[0x23];
                    uVar12 = param_2[0x26];
                    uVar10 = param_2[0x25];
                    uStack_420 = uVar9;
                    uStack_418 = uVar11;
                    uStack_410 = uVar13;
                    uStack_408 = uVar14;
                    uStack_400 = uVar10;
                    uStack_3f8 = uVar12;
                    uStack_360 = uVar2;
                    uStack_358 = uVar4;
                    uStack_350 = uVar5;
                    uStack_348 = uVar6;
                    uStack_340 = uVar7;
                    uStack_338 = uVar8;
                    if (uVar4 == 0) {
                      if (uVar11 != 0) goto LAB_102f93d2c;
                      FUN_102fa5174(&uStack_360,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                      FUN_102fa5174(&uStack_420,auStack_460,0x112f2b6c8,&UNK_10db6af90);
LAB_102f93dec:
                      func_0x000102f91a84(uVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
                      uVar2 = param_1[8];
                      if (((uVar2 == param_2[8]) && (param_1[9] == param_2[9])) ||
                         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                        uVar2 = param_1[10];
                        func_0x000100e25fcc(uVar2,param_1[0xb],param_2[10],param_2[0xb]);
                        uVar1 = (uint)uVar2;
                        goto LAB_102f93ef8;
                      }
                    }
                    else {
                      if (uVar11 == 0) {
LAB_102f93d2c:
                        FUN_102fa5174(&uStack_360,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                        FUN_102fa5174(&uStack_420,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                        func_0x000102f91a84(uVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
                        uVar2 = uVar9;
                        uVar4 = uVar11;
                        uVar5 = uVar13;
                        uVar6 = uVar14;
                        uVar7 = uVar10;
                        uVar8 = uVar12;
                      }
                      else {
                        if (((uVar2 == uVar9) && (uVar4 == uVar11)) ||
                           (uVar15 = uVar2, func_0x000107c605b8(uVar2,uVar4,uVar9,uVar11,0),
                           (uVar15 & 1) != 0)) {
                          if (((uVar5 == uVar13) && (uVar6 == uVar14)) ||
                             (uVar15 = uVar5, func_0x000107c605b8(uVar5,uVar6,uVar13,uVar14,0),
                             (uVar15 & 1) != 0)) {
                            FUN_102fa5174(&uStack_360,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                            FUN_102fa5174(&uStack_420,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                            uVar15 = uVar7;
                            func_0x000100e25fcc(uVar7,uVar8,uVar10,uVar12);
                            func_0x000102f91a84(uVar9,uVar11,uVar13,uVar14,uVar10,uVar12);
                            if ((uVar15 & 1) != 0) goto LAB_102f93dec;
                            goto LAB_102f93ef0;
                          }
                          FUN_102fa5174(&uStack_360,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                          FUN_102fa5174(&uStack_420,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                        }
                        else {
                          FUN_102fa5174(&uStack_360,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                          FUN_102fa5174(&uStack_420,auStack_460,0x112f2b6c8,&UNK_10db6af90);
                        }
                        func_0x000102f91a84(uVar9,uVar11,uVar13,uVar14,uVar10,uVar12);
                      }
LAB_102f93ef0:
                      func_0x000102f91a84(uVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
                    }
                  }
                }
                else if (uVar2 == 2) goto LAB_102f93be0;
              }
              else if (uVar2 == uVar4) goto LAB_102f93be0;
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_102f93ef8:
  return uVar1 & 1;
}



/* Entry: 102f93f1c; end: 102f93fa7;  */

/* WARNING: Possible PIC construction at 0x000102f93f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f93f50) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f93f1c(undefined8 *param_1,undefined8 *param_2)

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
  if (((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
      (func_0x000107c605b8(), (uVar13 & 1) == 0)) || (param_1[4] != param_2[4])) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[5];
  pbVar25 = (byte *)param_1[6];
  lVar24 = param_2[5];
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
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))))
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



/* Entry: 102f93fa8; end: 102f94d7f;  */

uint FUN_102f93fa8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
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
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined1 auStack_1f0 [32];
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
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
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
       ) && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) && (param_1[4] == param_2[4])) {
    uVar2 = param_1[5];
    if (((uVar2 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      uVar2 = param_1[7];
      if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar9 = param_1[0xc];
        uVar5 = param_1[0xb];
        uVar15 = param_1[0xe];
        uVar13 = param_1[0xd];
        uVar10 = param_1[0x10];
        uVar6 = param_1[0xf];
        uVar2 = param_1[0x11];
        uVar11 = param_2[0xc];
        uVar7 = param_2[0xb];
        uVar16 = param_2[0xe];
        uVar14 = param_2[0xd];
        uVar12 = param_2[0x10];
        uVar8 = param_2[0xf];
        uVar4 = param_2[0x11];
        uStack_150 = uVar7;
        uStack_148 = uVar11;
        uStack_140 = uVar14;
        uStack_138 = uVar16;
        uStack_130 = uVar8;
        uStack_128 = uVar12;
        uStack_120 = uVar4;
        uStack_110 = uVar5;
        uStack_108 = uVar9;
        uStack_100 = uVar13;
        uStack_f8 = uVar15;
        uStack_f0 = uVar6;
        uStack_e8 = uVar10;
        uStack_e0 = uVar2;
        if (uVar2 >> 0x3c < 0xf) {
          if (0xe < uVar4 >> 0x3c) goto LAB_102f94148;
          uStack_d8 = uVar5;
          uStack_d0 = uVar9;
          uStack_c8 = uVar13;
          uStack_c0 = uVar15;
          uStack_b8 = uVar6;
          uStack_b0 = uVar10;
          uStack_a8 = uVar2;
          uStack_a0 = uVar7;
          uStack_98 = uVar11;
          uStack_90 = uVar14;
          uStack_88 = uVar16;
          uStack_80 = uVar8;
          uStack_78 = uVar12;
          uStack_70 = uVar4;
          FUN_102fa5174(&uStack_110,&uStack_230,0x112f2b6c0,&UNK_10db6af88);
          FUN_102fa5174(&uStack_150,&uStack_230,0x112f2b6c0,&UNK_10db6af88);
          puVar3 = &uStack_d8;
          FUN_102f91168(puVar3,&uStack_a0);
          func_0x000102f54e24(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar4);
          func_0x000102f54e24(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar2);
          if (((ulong)puVar3 & 1) != 0) goto LAB_102f94294;
        }
        else if (uVar4 >> 0x3c < 0xf) {
LAB_102f94148:
          FUN_102fa5174(&uStack_110,&uStack_a0,0x112f2b6c0,&UNK_10db6af88);
          FUN_102fa5174(&uStack_150,&uStack_a0,0x112f2b6c0,&UNK_10db6af88);
          func_0x000102f54e24(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar2);
          func_0x000102f54e24(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar4);
        }
        else {
          FUN_102fa5174(&uStack_110,&uStack_a0,0x112f2b6c0,&UNK_10db6af88);
          FUN_102fa5174(&uStack_150,&uStack_a0,0x112f2b6c0,&UNK_10db6af88);
          func_0x000102f54e24(uVar5,uVar9,uVar13,uVar15,uVar6,uVar10,uVar2);
LAB_102f94294:
          uVar4 = param_1[0x13];
          uVar2 = param_1[0x12];
          uVar6 = param_1[0x15];
          uVar5 = param_1[0x14];
          uVar8 = param_1[0x17];
          uVar7 = param_1[0x16];
          uVar11 = param_2[0x13];
          uVar9 = param_2[0x12];
          uVar14 = param_2[0x15];
          uVar13 = param_2[0x14];
          uVar12 = param_2[0x17];
          uVar10 = param_2[0x16];
          uStack_230 = uVar2;
          uStack_228 = uVar4;
          uStack_220 = uVar5;
          uStack_218 = uVar6;
          uStack_210 = uVar7;
          uStack_208 = uVar8;
          uStack_180 = uVar9;
          uStack_178 = uVar11;
          uStack_170 = uVar13;
          uStack_168 = uVar14;
          uStack_160 = uVar10;
          uStack_158 = uVar12;
          if (uVar4 == 0) {
            if (uVar11 == 0) {
              FUN_102fa5174(&uStack_230,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
              FUN_102fa5174(&uStack_180,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
LAB_102f944b4:
              func_0x000102f91a84(uVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
              uVar4 = param_1[0x19];
              uVar2 = param_1[0x18];
              uVar6 = param_1[0x1b];
              uVar5 = param_1[0x1a];
              uVar8 = param_2[0x19];
              uVar7 = param_2[0x18];
              uVar10 = param_2[0x1b];
              uVar9 = param_2[0x1a];
              uStack_1d0 = uVar2;
              uStack_1c8 = uVar4;
              uStack_1c0 = uVar5;
              uStack_1b8 = uVar6;
              uStack_1a0 = uVar7;
              uStack_198 = uVar8;
              uStack_190 = uVar9;
              uStack_188 = uVar10;
              if (uVar4 == 1) {
                if (uVar8 == 1) {
                  FUN_102fa5174(&uStack_1d0,auStack_1f0,0x112f2b6d8,&UNK_10db6afa0);
                  FUN_102fa5174(&uStack_1a0,auStack_1f0,0x112f2b6d8,&UNK_10db6afa0);
                  func_0x000102f92428(uVar2,1,uVar5,uVar6);
LAB_102f9454c:
                  uVar2 = param_1[9];
                  func_0x000100e25fcc(uVar2,param_1[10],param_2[9],param_2[10]);
                  uVar1 = (uint)uVar2;
                  goto LAB_102f94674;
                }
LAB_102f94564:
                FUN_102fa5174(&uStack_1d0,auStack_1f0,0x112f2b6d8,&UNK_10db6afa0);
                FUN_102fa5174(&uStack_1a0,auStack_1f0,0x112f2b6d8,&UNK_10db6afa0);
                func_0x000102f92428(uVar2,uVar4,uVar5,uVar6);
                uVar2 = uVar7;
                uVar4 = uVar8;
                uVar5 = uVar9;
                uVar6 = uVar10;
LAB_102f947b0:
                func_0x000102f92428(uVar2,uVar4,uVar5,uVar6);
              }
              else {
                if (uVar8 == 1) goto LAB_102f94564;
                if (uVar4 == 0) {
                  if (uVar8 != 0) goto LAB_102f94754;
                }
                else if ((uVar8 == 0) ||
                        (((uVar2 != uVar7 || (uVar4 != uVar8)) &&
                         (uVar11 = uVar2, func_0x000107c605b8(uVar2,uVar4,uVar7,uVar8,0),
                         (uVar11 & 1) == 0)))) {
LAB_102f94754:
                  FUN_102fa5174(&uStack_1d0,auStack_1f0,0x112f2b6d8,&UNK_10db6afa0);
                  FUN_102fa5174(&uStack_1a0,auStack_1f0,0x112f2b6d8,&UNK_10db6afa0);
                  func_0x000102f92428(uVar7,uVar8,uVar9,uVar10);
                  goto LAB_102f947b0;
                }
                FUN_102fa5174(&uStack_1d0,auStack_1f0,0x112f2b6d8,&UNK_10db6afa0);
                FUN_102fa5174(&uStack_1a0,auStack_1f0,0x112f2b6d8,&UNK_10db6afa0);
                uVar11 = uVar5;
                func_0x000100e25fcc(uVar5,uVar6,uVar9,uVar10);
                func_0x000102f92428(uVar7,uVar8,uVar9,uVar10);
                func_0x000102f92428(uVar2,uVar4,uVar5,uVar6);
                if ((uVar11 & 1) != 0) goto LAB_102f9454c;
              }
              goto LAB_102f94670;
            }
LAB_102f94400:
            FUN_102fa5174(&uStack_230,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
            FUN_102fa5174(&uStack_180,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
            func_0x000102f91a84(uVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
            uVar2 = uVar9;
            uVar4 = uVar11;
            uVar5 = uVar13;
            uVar6 = uVar14;
            uVar7 = uVar10;
            uVar8 = uVar12;
          }
          else {
            if (uVar11 == 0) goto LAB_102f94400;
            if (((uVar2 == uVar9) && (uVar4 == uVar11)) ||
               (uVar15 = uVar2, func_0x000107c605b8(uVar2,uVar4,uVar9,uVar11,0), (uVar15 & 1) != 0))
            {
              if (((uVar5 != uVar13) || (uVar6 != uVar14)) &&
                 (uVar15 = uVar5, func_0x000107c605b8(uVar5,uVar6,uVar13,uVar14,0),
                 (uVar15 & 1) == 0)) {
                FUN_102fa5174(&uStack_230,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
                FUN_102fa5174(&uStack_180,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
                goto LAB_102f94640;
              }
              FUN_102fa5174(&uStack_230,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
              FUN_102fa5174(&uStack_180,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
              uVar15 = uVar7;
              func_0x000100e25fcc(uVar7,uVar8,uVar10,uVar12);
              func_0x000102f91a84(uVar9,uVar11,uVar13,uVar14,uVar10,uVar12);
              if ((uVar15 & 1) != 0) goto LAB_102f944b4;
            }
            else {
              FUN_102fa5174(&uStack_230,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
              FUN_102fa5174(&uStack_180,&uStack_1d0,0x112f2b6c8,&UNK_10db6af90);
LAB_102f94640:
              func_0x000102f91a84(uVar9,uVar11,uVar13,uVar14,uVar10,uVar12);
            }
          }
          func_0x000102f91a84(uVar2,uVar4,uVar5,uVar6,uVar7,uVar8);
        }
      }
    }
  }
LAB_102f94670:
  uVar1 = 0;
LAB_102f94674:
  return uVar1 & 1;
}



/* Entry: 102f94d80; end: 102f94eaf;  */

uint FUN_102f94d80(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_1a0 [112];
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
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_128 = puVar7[1];
        uStack_130 = *puVar7;
        uStack_118 = puVar7[3];
        uStack_120 = puVar7[2];
        uStack_108 = puVar7[5];
        uStack_110 = puVar7[4];
        uStack_f8 = puVar7[7];
        uStack_100 = puVar7[6];
        uStack_e8 = puVar7[9];
        uStack_f0 = puVar7[8];
        uStack_d8 = puVar7[0xb];
        uStack_e0 = puVar7[10];
        uStack_c8 = puVar7[0xd];
        uStack_d0 = puVar7[0xc];
        uStack_68 = puVar8[0xb];
        uStack_70 = puVar8[10];
        uStack_58 = puVar8[0xd];
        uStack_60 = puVar8[0xc];
        uStack_88 = puVar8[7];
        uStack_90 = puVar8[6];
        uStack_78 = puVar8[9];
        uStack_80 = puVar8[8];
        uStack_b8 = puVar8[1];
        uStack_c0 = *puVar8;
        uStack_a8 = puVar8[3];
        uStack_b0 = puVar8[2];
        uStack_98 = puVar8[5];
        uStack_a0 = puVar8[4];
        func_0x000102f54c48(&uStack_130,auStack_1a0);
        func_0x000102f54c48(&uStack_c0,auStack_1a0);
        puVar2 = &uStack_130;
        FUN_102f924ec(puVar2,&uStack_c0);
        func_0x000102f54b94(&uStack_c0);
        func_0x000102f54b94(&uStack_130);
        if (((ulong)puVar2 & 1) == 0) goto LAB_102f94e8c;
        puVar8 = puVar8 + 0xe;
        puVar7 = puVar7 + 0xe;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    if ((uVar3 == param_2[1] && param_1[2] == param_2[2]) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      lVar6 = param_1[3];
      func_0x000100e25fcc(lVar6,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)lVar6;
      goto LAB_102f94e90;
    }
  }
LAB_102f94e8c:
  uVar1 = 0;
LAB_102f94e90:
  return uVar1 & 1;
}



/* Entry: 102f94eb0; end: 102f95157;  */

uint FUN_102f94eb0(ulong *param_1,ulong *param_2)

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
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[6];
    uVar2 = param_1[5];
    uVar8 = param_1[8];
    uVar6 = param_1[7];
    uVar5 = param_2[6];
    uVar3 = param_2[5];
    uVar9 = param_2[8];
    uVar7 = param_2[7];
    uStack_a0 = uVar3;
    uStack_98 = uVar5;
    uStack_90 = uVar7;
    uStack_88 = uVar9;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
    uStack_70 = uVar6;
    uStack_68 = uVar8;
    if (uVar8 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_102f94fb4;
      if (uVar2 == uVar3) {
        if (uVar4 == uVar5) {
          FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
          FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
          uVar3 = uVar6;
          func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
          func_0x000100d2ebd8(uVar2,uVar4,uVar7,uVar9);
          if ((uVar3 & 1) != 0) goto LAB_102f94f74;
          goto LAB_102f9512c;
        }
        FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
        FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
        uVar3 = uVar2;
      }
      else {
        FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
        FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
      }
      func_0x000100d2ebd8(uVar3,uVar5,uVar7,uVar9);
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
        FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
LAB_102f94f74:
        func_0x000100d2ebd8(uVar2,uVar4,uVar6,uVar8);
        if ((int)param_1[2] == (int)param_2[2]) {
          uVar2 = param_1[3];
          func_0x000100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
          uVar1 = (uint)uVar2;
          goto LAB_102f95134;
        }
        goto LAB_102f95130;
      }
LAB_102f94fb4:
      FUN_102fa5174(&uStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&uStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
      func_0x000100d2ebd8(uVar2,uVar4,uVar6,uVar8);
      uVar2 = uVar3;
      uVar4 = uVar5;
      uVar6 = uVar7;
      uVar8 = uVar9;
    }
LAB_102f9512c:
    func_0x000100d2ebd8(uVar2,uVar4,uVar6,uVar8);
  }
LAB_102f95130:
  uVar1 = 0;
LAB_102f95134:
  return uVar1 & 1;
}



/* Entry: 102f95158; end: 102f95197;  */

void FUN_102f95158(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6c4b0;
  func_0x000107c61520(&UNK_10db6c4b0,&UNK_1105f38a0);
  puRam0000000112f2b848 = puVar1;
  return;
}



/* Entry: 102f95198; end: 102f9540b;  */

uint FUN_102f95198(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uVar2;
  
  lVar6 = param_1[3];
  lVar4 = param_1[2];
  uVar10 = param_1[5];
  uVar8 = param_1[4];
  lVar7 = param_2[3];
  lVar5 = param_2[2];
  uVar11 = param_2[5];
  uVar9 = param_2[4];
  lStack_a0 = lVar5;
  lStack_98 = lVar7;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  lStack_80 = lVar4;
  lStack_78 = lVar6;
  uStack_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar10 >> 0x3c < 0xf) {
    if (0xe < uVar11 >> 0x3c) goto LAB_102f95260;
    if (lVar4 == lVar5) {
      if (lVar6 != lVar7) {
        FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
        FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
        lVar5 = lVar4;
        goto LAB_102f953bc;
      }
      FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
      uVar3 = uVar8;
      func_0x000100e25fcc(uVar8,uVar10,uVar9,uVar11);
      func_0x000100d2ebd8(lVar4,lVar6,uVar9,uVar11);
      if ((uVar3 & 1) != 0) goto LAB_102f95230;
    }
    else {
      FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
LAB_102f953bc:
      func_0x000100d2ebd8(lVar5,lVar7,uVar9,uVar11);
    }
  }
  else {
    if (0xe < uVar11 >> 0x3c) {
      FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
LAB_102f95230:
      func_0x000100d2ebd8(lVar4,lVar6,uVar8,uVar10);
      uVar2 = *param_1;
      func_0x000100e25fcc(uVar2,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar2;
      goto LAB_102f953e8;
    }
LAB_102f95260:
    FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
    FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
    func_0x000100d2ebd8(lVar4,lVar6,uVar8,uVar10);
    lVar4 = lVar5;
    lVar6 = lVar7;
    uVar8 = uVar9;
    uVar10 = uVar11;
  }
  func_0x000100d2ebd8(lVar4,lVar6,uVar8,uVar10);
  uVar1 = 0;
LAB_102f953e8:
  return uVar1 & 1;
}



/* Entry: 102f9540c; end: 102f95523;  */

/* WARNING: Possible PIC construction at 0x000102f9543c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000102f95440) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f9540c(undefined8 *param_1,undefined8 *param_2)

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
  if (((uVar13 == param_2[2] && param_1[3] == param_2[3]) ||
      (func_0x000107c605b8(), (uVar13 & 1) != 0)) && (param_1[4] == param_2[4])) {
    uVar13 = param_1[5];
    func_0x000102f8ef5c(uVar13,param_2[5]);
    if ((uVar13 & 1) != 0) {
      pbVar10 = (byte *)param_1[6];
      pbVar25 = (byte *)param_1[7];
      lVar24 = param_2[6];
      uVar13 = param_2[7];
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



/* Entry: 102f95524; end: 102f95a63;  */

uint FUN_102f95524(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar5 = param_1[4];
  lVar3 = param_1[3];
  uVar9 = param_1[6];
  uVar7 = param_1[5];
  lVar6 = param_2[4];
  lVar4 = param_2[3];
  uVar10 = param_2[6];
  uVar8 = param_2[5];
  lStack_a0 = lVar4;
  lStack_98 = lVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  lStack_80 = lVar3;
  lStack_78 = lVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar9 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_102f95604;
    if (lVar3 == lVar4) {
      if (lVar5 == lVar6) {
        FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
        FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
        uVar2 = uVar7;
        func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
        func_0x000100d2ebd8(lVar3,lVar5,uVar8,uVar10);
        if ((uVar2 & 1) != 0) goto LAB_102f955c4;
        goto LAB_102f95784;
      }
      FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
      lVar4 = lVar3;
    }
    else {
      FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
    }
    func_0x000100d2ebd8(lVar4,lVar6,uVar8,uVar10);
LAB_102f95784:
    func_0x000100d2ebd8(lVar3,lVar5,uVar7,uVar9);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_102f95604:
      FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
      FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
      func_0x000100d2ebd8(lVar3,lVar5,uVar7,uVar9);
      lVar3 = lVar4;
      lVar5 = lVar6;
      uVar7 = uVar8;
      uVar9 = uVar10;
      goto LAB_102f95784;
    }
    FUN_102fa5174(&lStack_80,auStack_c0,0x112f2b668,&UNK_10db6af30);
    FUN_102fa5174(&lStack_a0,auStack_c0,0x112f2b668,&UNK_10db6af30);
LAB_102f955c4:
    func_0x000100d2ebd8(lVar3,lVar5,uVar7,uVar9);
    if (*param_1 == *param_2) {
      lVar3 = param_1[1];
      func_0x000100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)lVar3;
      goto LAB_102f9578c;
    }
  }
  uVar1 = 0;
LAB_102f9578c:
  return uVar1 & 1;
}



/* Entry: 102f95a64; end: 102f95ca3;  */

void FUN_102f95a64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6c588;
  func_0x000107c61520(&UNK_10db6c588,&UNK_1105f3928);
  puRam0000000112f2b858 = puVar1;
  return;
}



/* Entry: 102f95ca4; end: 102f96073;  */

uint FUN_102f95ca4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_7c0 [192];
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
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
  undefined8 uVar4;
  
  uStack_378 = param_1[0x13];
  uStack_380 = param_1[0x12];
  uStack_128 = param_1[0x15];
  uStack_130 = param_1[0x14];
  uStack_388 = param_1[0x11];
  uStack_390 = param_1[0x10];
  uStack_138 = param_1[0x13];
  uStack_140 = param_1[0x12];
  uStack_368 = param_1[0x15];
  uStack_370 = param_1[0x14];
  uStack_118 = param_1[0x17];
  uStack_120 = param_1[0x16];
  uStack_358 = param_1[0x17];
  uStack_360 = param_1[0x16];
  uStack_108 = param_1[0x19];
  uStack_110 = param_1[0x18];
  uStack_3b8 = param_1[0xb];
  uStack_3c0 = param_1[10];
  uStack_168 = param_1[0xd];
  uStack_170 = param_1[0xc];
  uStack_3c8 = param_1[9];
  uStack_3d0 = param_1[8];
  uStack_178 = param_1[0xb];
  uStack_180 = param_1[10];
  uStack_3a8 = param_1[0xd];
  uStack_3b0 = param_1[0xc];
  uStack_158 = param_1[0xf];
  uStack_160 = param_1[0xe];
  uStack_398 = param_1[0xf];
  uStack_3a0 = param_1[0xe];
  uStack_148 = param_1[0x11];
  uStack_150 = param_1[0x10];
  uStack_1b8 = param_1[3];
  uStack_1c0 = param_1[2];
  uStack_1a8 = param_1[5];
  uStack_1b0 = param_1[4];
  uStack_198 = param_1[7];
  uStack_1a0 = param_1[6];
  uStack_188 = param_1[9];
  uStack_190 = param_1[8];
  uStack_3f8 = param_1[3];
  uStack_400 = param_1[2];
  uStack_3e8 = param_1[5];
  uStack_3f0 = param_1[4];
  uStack_3d8 = param_1[7];
  uStack_3e0 = param_1[6];
  uStack_2b8 = param_2[0x13];
  uStack_2c0 = param_2[0x12];
  uStack_1e8 = param_2[0x15];
  uStack_1f0 = param_2[0x14];
  uStack_2c8 = param_2[0x11];
  uStack_2d0 = param_2[0x10];
  uStack_1f8 = param_2[0x13];
  uStack_200 = param_2[0x12];
  uStack_2a8 = param_2[0x15];
  uStack_2b0 = param_2[0x14];
  uStack_1d8 = param_2[0x17];
  uStack_1e0 = param_2[0x16];
  uStack_298 = param_2[0x17];
  uStack_2a0 = param_2[0x16];
  uStack_1c8 = param_2[0x19];
  uStack_1d0 = param_2[0x18];
  uStack_2f8 = param_2[0xb];
  uStack_300 = param_2[10];
  uStack_228 = param_2[0xd];
  uStack_230 = param_2[0xc];
  uStack_308 = param_2[9];
  uStack_310 = param_2[8];
  uStack_238 = param_2[0xb];
  uStack_240 = param_2[10];
  uStack_2e8 = param_2[0xd];
  uStack_2f0 = param_2[0xc];
  uStack_218 = param_2[0xf];
  uStack_220 = param_2[0xe];
  uStack_2d8 = param_2[0xf];
  uStack_2e0 = param_2[0xe];
  uStack_208 = param_2[0x11];
  uStack_210 = param_2[0x10];
  uStack_278 = param_2[3];
  uStack_280 = param_2[2];
  uStack_268 = param_2[5];
  uStack_270 = param_2[4];
  uStack_258 = param_2[7];
  uStack_260 = param_2[6];
  uStack_248 = param_2[9];
  uStack_250 = param_2[8];
  uStack_338 = param_2[3];
  uStack_340 = param_2[2];
  uStack_328 = param_2[5];
  uStack_330 = param_2[4];
  uStack_320 = param_2[6];
  uStack_318 = param_2[7];
  uStack_348 = param_1[0x19];
  uStack_350 = param_1[0x18];
  uStack_288 = param_2[0x19];
  uStack_290 = param_2[0x18];
  iVar1 = (int)&uStack_400;
  FUN_102f54fec();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_340;
    FUN_102f54fec();
    if (iVar1 == 1) {
      uStack_4f8 = uStack_378;
      uStack_500 = uStack_380;
      uStack_4e8 = uStack_368;
      uStack_4f0 = uStack_370;
      uStack_4d8 = uStack_358;
      uStack_4e0 = uStack_360;
      uStack_4c8 = uStack_348;
      uStack_4d0 = uStack_350;
      uStack_538 = uStack_3b8;
      uStack_540 = uStack_3c0;
      uStack_528 = uStack_3a8;
      uStack_530 = uStack_3b0;
      uStack_518 = uStack_398;
      uStack_520 = uStack_3a0;
      uStack_508 = uStack_388;
      uStack_510 = uStack_390;
      uStack_578 = uStack_3f8;
      uStack_580 = uStack_400;
      uStack_568 = uStack_3e8;
      uStack_570 = uStack_3f0;
      uStack_558 = uStack_3d8;
      uStack_560 = uStack_3e0;
      uStack_548 = uStack_3c8;
      uStack_550 = uStack_3d0;
      FUN_102fa5174(&uStack_1c0,&uStack_100,0x112f2a130,&UNK_10db663d0);
      FUN_102fa5174(&uStack_280,&uStack_100,0x112f2a130,&UNK_10db663d0);
      func_0x000102fa51bc(&uStack_580,0x112f2a130,&UNK_10db663d0);
LAB_102f9604c:
      uVar4 = *param_1;
      func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar2 = (uint)uVar4;
      goto LAB_102f96058;
    }
LAB_102f95ee4:
    func_0x000107c610b4(&uStack_580,&uStack_400,0x180);
    FUN_102fa5174(&uStack_1c0,&uStack_100,0x112f2a130,&UNK_10db663d0);
    FUN_102fa5174(&uStack_280,&uStack_100,0x112f2a130,&UNK_10db663d0);
    func_0x000102fa51bc(&uStack_580,0x112f2b6b0,&UNK_10db6af78);
  }
  else {
    uStack_5b8 = uStack_378;
    uStack_5c0 = uStack_380;
    uStack_5a8 = uStack_368;
    uStack_5b0 = uStack_370;
    uStack_598 = uStack_358;
    uStack_5a0 = uStack_360;
    uStack_588 = uStack_348;
    uStack_590 = uStack_350;
    uStack_5f8 = uStack_3b8;
    uStack_600 = uStack_3c0;
    uStack_5e8 = uStack_3a8;
    uStack_5f0 = uStack_3b0;
    uStack_5d8 = uStack_398;
    uStack_5e0 = uStack_3a0;
    uStack_5c8 = uStack_388;
    uStack_5d0 = uStack_390;
    uStack_638 = uStack_3f8;
    uStack_640 = uStack_400;
    uStack_628 = uStack_3e8;
    uStack_630 = uStack_3f0;
    uStack_618 = uStack_3d8;
    uStack_620 = uStack_3e0;
    uStack_608 = uStack_3c8;
    uStack_610 = uStack_3d0;
    iVar1 = (int)&uStack_340;
    FUN_102f54fec();
    if (iVar1 == 1) goto LAB_102f95ee4;
    uStack_678 = uStack_2b8;
    uStack_680 = uStack_2c0;
    uStack_668 = uStack_2a8;
    uStack_670 = uStack_2b0;
    uStack_658 = uStack_298;
    uStack_660 = uStack_2a0;
    uStack_648 = uStack_288;
    uStack_650 = uStack_290;
    uStack_6b8 = uStack_2f8;
    uStack_6c0 = uStack_300;
    uStack_6a8 = uStack_2e8;
    uStack_6b0 = uStack_2f0;
    uStack_698 = uStack_2d8;
    uStack_6a0 = uStack_2e0;
    uStack_688 = uStack_2c8;
    uStack_690 = uStack_2d0;
    uStack_6f8 = uStack_338;
    uStack_700 = uStack_340;
    uStack_6e8 = uStack_328;
    uStack_6f0 = uStack_330;
    uStack_6d8 = uStack_318;
    uStack_6e0 = uStack_320;
    uStack_6c8 = uStack_308;
    uStack_6d0 = uStack_310;
    uStack_4f8 = uStack_2b8;
    uStack_500 = uStack_2c0;
    uStack_4e8 = uStack_2a8;
    uStack_4f0 = uStack_2b0;
    uStack_4d8 = uStack_298;
    uStack_4e0 = uStack_2a0;
    uStack_4c8 = uStack_288;
    uStack_4d0 = uStack_290;
    uStack_538 = uStack_2f8;
    uStack_540 = uStack_300;
    uStack_528 = uStack_2e8;
    uStack_530 = uStack_2f0;
    uStack_518 = uStack_2d8;
    uStack_520 = uStack_2e0;
    uStack_508 = uStack_2c8;
    uStack_510 = uStack_2d0;
    uStack_578 = uStack_338;
    uStack_580 = uStack_340;
    uStack_568 = uStack_328;
    uStack_570 = uStack_330;
    uStack_558 = uStack_318;
    uStack_560 = uStack_320;
    uStack_548 = uStack_308;
    uStack_550 = uStack_310;
    uStack_78 = uStack_5b8;
    uStack_80 = uStack_5c0;
    uStack_68 = uStack_5a8;
    uStack_70 = uStack_5b0;
    uStack_58 = uStack_598;
    uStack_60 = uStack_5a0;
    uStack_48 = uStack_588;
    uStack_50 = uStack_590;
    uStack_b8 = uStack_5f8;
    uStack_c0 = uStack_600;
    uStack_a8 = uStack_5e8;
    uStack_b0 = uStack_5f0;
    uStack_98 = uStack_5d8;
    uStack_a0 = uStack_5e0;
    uStack_88 = uStack_5c8;
    uStack_90 = uStack_5d0;
    uStack_f8 = uStack_638;
    uStack_100 = uStack_640;
    uStack_e8 = uStack_628;
    uStack_f0 = uStack_630;
    uStack_d8 = uStack_618;
    uStack_e0 = uStack_620;
    uStack_c8 = uStack_608;
    uStack_d0 = uStack_610;
    FUN_102fa5174(&uStack_1c0,auStack_7c0,0x112f2a130,&UNK_10db663d0);
    FUN_102fa5174(&uStack_280,auStack_7c0,0x112f2a130,&UNK_10db663d0);
    puVar3 = &uStack_100;
    FUN_102f91af0(puVar3,&uStack_580);
    func_0x000102fa51bc(&uStack_700,0x112f2a130,&UNK_10db663d0);
    func_0x000102fa51bc(&uStack_400,0x112f2a130,&UNK_10db663d0);
    if (((ulong)puVar3 & 1) != 0) goto LAB_102f9604c;
  }
  uVar2 = 0;
LAB_102f96058:
  return uVar2 & 1;
}



/* Entry: 102f96074; end: 102f965f3;  */

void FUN_102f96074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2b8e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6cd20;
  func_0x000107c61520(&UNK_10db6cd20,&UNK_1105f3dc8);
  puRam0000000112f2b8e8 = puVar1;
  return;
}



/* Entry: 102f965f4; end: 102f9664b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_102f965f4(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
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
  
  if (param_6 == '\x01') {
    if (param_5 == 0) {
      if (param_1 == 0) goto SUB_100e25fcc;
    }
    else if (param_5 == 1) {
      if (param_1 == 1) {
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
    else if (param_1 == 2) goto SUB_100e25fcc;
  }
  else if (param_1 == param_5) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 102f9664c; end: 102f969ef;  */

uint FUN_102f9664c(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_100 [48];
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
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
       ) && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) && (param_1[4] == param_2[4])) {
    uVar7 = param_1[8];
    uVar2 = param_1[7];
    uVar13 = param_1[10];
    uVar11 = param_1[9];
    uVar8 = param_1[0xc];
    uVar4 = param_1[0xb];
    uVar9 = param_2[8];
    uVar5 = param_2[7];
    uVar14 = param_2[10];
    uVar12 = param_2[9];
    uVar10 = param_2[0xc];
    uVar6 = param_2[0xb];
    uStack_d0 = uVar5;
    uStack_c8 = uVar9;
    uStack_c0 = uVar12;
    uStack_b8 = uVar14;
    uStack_b0 = uVar6;
    uStack_a8 = uVar10;
    uStack_a0 = uVar2;
    uStack_98 = uVar7;
    uStack_90 = uVar11;
    uStack_88 = uVar13;
    uStack_80 = uVar4;
    uStack_78 = uVar8;
    if (uVar7 == 0) {
      if (uVar9 == 0) {
        FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
        FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
LAB_102f968f0:
        func_0x000102f91a84(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
        uVar2 = param_1[5];
        func_0x000100e25fcc(uVar2,param_1[6],param_2[5],param_2[6]);
        uVar1 = (uint)uVar2;
        goto LAB_102f969cc;
      }
LAB_102f9683c:
      FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
      FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
      func_0x000102f91a84(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
      uVar2 = uVar5;
      uVar7 = uVar9;
      uVar11 = uVar12;
      uVar13 = uVar14;
      uVar4 = uVar6;
      uVar8 = uVar10;
    }
    else {
      if (uVar9 == 0) goto LAB_102f9683c;
      if (((uVar2 == uVar5) && (uVar7 == uVar9)) ||
         (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar7,uVar5,uVar9,0), (uVar3 & 1) != 0)) {
        if (((uVar11 != uVar12) || (uVar13 != uVar14)) &&
           (uVar3 = uVar11, func_0x000107c605b8(uVar11,uVar13,uVar12,uVar14,0), (uVar3 & 1) == 0)) {
          FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
          FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
          goto LAB_102f96998;
        }
        FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
        FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
        uVar3 = uVar4;
        func_0x000100e25fcc(uVar4,uVar8,uVar6,uVar10);
        func_0x000102f91a84(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
        if ((uVar3 & 1) != 0) goto LAB_102f968f0;
      }
      else {
        FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
        FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
LAB_102f96998:
        func_0x000102f91a84(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
      }
    }
    func_0x000102f91a84(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
  }
  uVar1 = 0;
LAB_102f969cc:
  return uVar1 & 1;
}



/* Entry: 102f969f0; end: 102f96c87;  */

uint FUN_102f969f0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_430 [112];
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
  undefined8 uStack_310;
  long lStack_308;
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
  long lStack_298;
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
  long lStack_228;
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
  long lStack_1b8;
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
  undefined8 uVar3;
  
  uStack_238 = param_1[9];
  uStack_240 = param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  lStack_228 = param_1[0xb];
  uStack_230 = param_1[10];
  uStack_c8 = param_1[0xd];
  uStack_d0 = param_1[0xc];
  uStack_218 = param_1[0xd];
  uStack_220 = param_1[0xc];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  uStack_108 = param_1[5];
  uStack_110 = param_1[4];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  uStack_e8 = param_1[9];
  uStack_f0 = param_1[8];
  uStack_268 = param_1[3];
  uStack_270 = param_1[2];
  uStack_258 = param_1[5];
  uStack_260 = param_1[4];
  uStack_248 = param_1[7];
  uStack_250 = param_1[6];
  uStack_188 = param_2[3];
  uStack_190 = param_2[2];
  uStack_178 = param_2[5];
  uStack_180 = param_2[4];
  uStack_288 = param_2[0xd];
  uStack_290 = param_2[0xc];
  uStack_128 = param_2[0xf];
  uStack_130 = param_2[0xe];
  uStack_2a8 = param_2[9];
  uStack_2b0 = param_2[8];
  uStack_148 = param_2[0xb];
  uStack_150 = param_2[10];
  lStack_298 = param_2[0xb];
  uStack_2a0 = param_2[10];
  uStack_138 = param_2[0xd];
  uStack_140 = param_2[0xc];
  uStack_168 = param_2[7];
  uStack_170 = param_2[6];
  uStack_158 = param_2[9];
  uStack_160 = param_2[8];
  uStack_2d8 = param_2[3];
  uStack_2e0 = param_2[2];
  uStack_2c8 = param_2[5];
  uStack_2d0 = param_2[4];
  uStack_2b8 = param_2[7];
  uStack_2c0 = param_2[6];
  uStack_208 = param_1[0xf];
  uStack_210 = param_1[0xe];
  uStack_278 = param_2[0xf];
  uStack_280 = param_2[0xe];
  uStack_200 = uStack_2e0;
  uStack_1f8 = uStack_2d8;
  uStack_1f0 = uStack_2d0;
  uStack_1e8 = uStack_2c8;
  uStack_1e0 = uStack_2c0;
  uStack_1d8 = uStack_2b8;
  uStack_1d0 = uStack_2b0;
  uStack_1c8 = uStack_2a8;
  uStack_1c0 = uStack_2a0;
  lStack_1b8 = lStack_298;
  uStack_1b0 = uStack_290;
  uStack_1a8 = uStack_288;
  uStack_1a0 = uStack_280;
  uStack_198 = uStack_278;
  if (lStack_228 == 1) {
    if (lStack_298 == 1) {
      lStack_308 = param_1[0xb];
      uStack_310 = param_1[10];
      uStack_2f8 = param_1[0xd];
      uStack_300 = param_1[0xc];
      uStack_2e8 = param_1[0xf];
      uStack_2f0 = param_1[0xe];
      uStack_348 = param_1[3];
      uStack_350 = param_1[2];
      uStack_338 = param_1[5];
      uStack_340 = param_1[4];
      uStack_328 = param_1[7];
      uStack_330 = param_1[6];
      uStack_318 = param_1[9];
      uStack_320 = param_1[8];
      FUN_102fa5174(&uStack_120,&uStack_b0,0x112f2a110,&UNK_10db66360);
      FUN_102fa5174(&uStack_190,&uStack_b0,0x112f2a110,&UNK_10db66360);
      func_0x000102fa51bc(&uStack_350,0x112f2a110,&UNK_10db66360);
LAB_102f96c60:
      uVar3 = *param_1;
      func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar3;
      goto LAB_102f96c6c;
    }
LAB_102f96b18:
    uStack_350 = uStack_270;
    uStack_348 = uStack_268;
    uStack_340 = uStack_260;
    uStack_338 = uStack_258;
    uStack_330 = uStack_250;
    uStack_328 = uStack_248;
    uStack_320 = uStack_240;
    uStack_318 = uStack_238;
    uStack_310 = uStack_230;
    lStack_308 = lStack_228;
    uStack_300 = uStack_220;
    uStack_2f8 = uStack_218;
    uStack_2f0 = uStack_210;
    uStack_2e8 = uStack_208;
    FUN_102fa5174(&uStack_120,&uStack_b0,0x112f2a110,&UNK_10db66360);
    FUN_102fa5174(&uStack_190,&uStack_b0,0x112f2a110,&UNK_10db66360);
    func_0x000102fa51bc(&uStack_350,0x112f2b6e0,&UNK_10db6afb0);
  }
  else {
    if (lStack_298 == 1) goto LAB_102f96b18;
    uStack_378 = param_2[0xb];
    uStack_380 = param_2[10];
    uStack_368 = param_2[0xd];
    uStack_370 = param_2[0xc];
    uStack_358 = param_2[0xf];
    uStack_360 = param_2[0xe];
    uStack_3b8 = param_2[3];
    uStack_3c0 = param_2[2];
    uStack_3a8 = param_2[5];
    uStack_3b0 = param_2[4];
    uStack_398 = param_2[7];
    uStack_3a0 = param_2[6];
    uStack_388 = param_2[9];
    uStack_390 = param_2[8];
    uStack_68 = param_1[0xb];
    uStack_70 = param_1[10];
    uStack_58 = param_1[0xd];
    uStack_60 = param_1[0xc];
    uStack_48 = param_1[0xf];
    uStack_50 = param_1[0xe];
    uStack_a8 = param_1[3];
    uStack_b0 = param_1[2];
    uStack_98 = param_1[5];
    uStack_a0 = param_1[4];
    uStack_88 = param_1[7];
    uStack_90 = param_1[6];
    uStack_78 = param_1[9];
    uStack_80 = param_1[8];
    uStack_350 = uStack_3c0;
    uStack_348 = uStack_3b8;
    uStack_340 = uStack_3b0;
    uStack_338 = uStack_3a8;
    uStack_330 = uStack_3a0;
    uStack_328 = uStack_398;
    uStack_320 = uStack_390;
    uStack_318 = uStack_388;
    uStack_310 = uStack_380;
    lStack_308 = uStack_378;
    uStack_300 = uStack_370;
    uStack_2f8 = uStack_368;
    uStack_2f0 = uStack_360;
    uStack_2e8 = uStack_358;
    FUN_102fa5174(&uStack_120,auStack_430,0x112f2a110,&UNK_10db66360);
    FUN_102fa5174(&uStack_190,auStack_430,0x112f2a110,&UNK_10db66360);
    puVar2 = &uStack_b0;
    FUN_102f924ec(puVar2,&uStack_350);
    func_0x000102fa51bc(&uStack_3c0,0x112f2a110,&UNK_10db66360);
    func_0x000102fa51bc(&uStack_270,0x112f2a110,&UNK_10db66360);
    if (((ulong)puVar2 & 1) != 0) goto LAB_102f96c60;
  }
  uVar1 = 0;
LAB_102f96c6c:
  return uVar1 & 1;
}



/* Entry: 102f96c88; end: 102f970a7;  */

uint FUN_102f96c88(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_100 [48];
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
  
  uVar4 = param_1[0xd];
  uVar3 = param_1[0xc];
  uVar13 = param_1[0xf];
  uVar11 = param_1[0xe];
  uVar8 = param_1[0x11];
  uVar5 = param_1[0x10];
  uVar9 = param_2[0xd];
  uVar6 = param_2[0xc];
  uVar14 = param_2[0xf];
  uVar12 = param_2[0xe];
  uVar10 = param_2[0x11];
  uVar7 = param_2[0x10];
  uStack_d0 = uVar6;
  uStack_c8 = uVar9;
  uStack_c0 = uVar12;
  uStack_b8 = uVar14;
  uStack_b0 = uVar7;
  uStack_a8 = uVar10;
  uStack_a0 = uVar3;
  uStack_98 = uVar4;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar5;
  uStack_78 = uVar8;
  if (uVar4 == 0) {
    if (uVar9 != 0) goto LAB_102f96e1c;
    FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
    FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
LAB_102f96ed0:
    func_0x000102f91a84(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
    uVar3 = *param_1;
    if (((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      uVar3 = param_1[2];
      if (((uVar3 == param_2[2]) && (param_1[3] == param_2[3])) ||
         (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
        uVar3 = param_1[4];
        if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
          uVar3 = param_1[6];
          if (((uVar3 == param_2[6]) && (param_1[7] == param_2[7])) ||
             (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
            uVar3 = param_1[8];
            uVar4 = param_2[8];
            if ((char)param_2[9] == '\x01') {
              if (uVar4 == 0) {
                if (uVar3 == 0) goto LAB_102f97098;
              }
              else if (uVar4 == 1) {
                if (uVar3 == 1) {
LAB_102f97098:
                  uVar3 = param_1[10];
                  func_0x000100e25fcc(uVar3,param_1[0xb],param_2[10],param_2[0xb]);
                  uVar1 = (uint)uVar3;
                  goto LAB_102f97058;
                }
              }
              else if (uVar3 == 2) goto LAB_102f97098;
            }
            else if (uVar3 == uVar4) goto LAB_102f97098;
          }
        }
      }
    }
  }
  else {
    if (uVar9 == 0) {
LAB_102f96e1c:
      FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
      FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
      func_0x000102f91a84(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
      uVar3 = uVar6;
      uVar4 = uVar9;
      uVar11 = uVar12;
      uVar13 = uVar14;
      uVar5 = uVar7;
      uVar8 = uVar10;
    }
    else {
      if (((uVar3 == uVar6) && (uVar4 == uVar9)) ||
         (uVar2 = uVar3, func_0x000107c605b8(uVar3,uVar4,uVar6,uVar9,0), (uVar2 & 1) != 0)) {
        if (((uVar11 == uVar12) && (uVar13 == uVar14)) ||
           (uVar2 = uVar11, func_0x000107c605b8(uVar11,uVar13,uVar12,uVar14,0), (uVar2 & 1) != 0)) {
          FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
          FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
          uVar2 = uVar5;
          func_0x000100e25fcc(uVar5,uVar8,uVar7,uVar10);
          func_0x000102f91a84(uVar6,uVar9,uVar12,uVar14,uVar7,uVar10);
          if ((uVar2 & 1) != 0) goto LAB_102f96ed0;
          goto LAB_102f97050;
        }
        FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
        FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
      }
      else {
        FUN_102fa5174(&uStack_a0,auStack_100,0x112f2b670,&UNK_10db6af38);
        FUN_102fa5174(&uStack_d0,auStack_100,0x112f2b670,&UNK_10db6af38);
      }
      func_0x000102f91a84(uVar6,uVar9,uVar12,uVar14,uVar7,uVar10);
    }
LAB_102f97050:
    func_0x000102f91a84(uVar3,uVar4,uVar11,uVar13,uVar5,uVar8);
  }
  uVar1 = 0;
LAB_102f97058:
  return uVar1 & 1;
}



/* Entry: 102f970a8; end: 102f976a7;  */

void FUN_102f970a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2ba18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6daa0;
  func_0x000107c61520(&UNK_10db6daa0,&UNK_1105f4648);
  puRam0000000112f2ba18 = puVar1;
  return;
}



/* Entry: 102f976a8; end: 102f976bb;  */

void FUN_102f976a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f976bc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f976fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f976bc; end: 102f97767;  */

void FUN_102f976bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b058;
  func_0x000107c61520(&UNK_10db6b058,&UNK_1105f2b20);
  puRam0000000112f2bb80 = puVar1;
  return;
}



/* Entry: 102f97768; end: 102f9776b;  */

void FUN_102f97768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b098;
  func_0x000107c61520(&UNK_10db6b098,&UNK_1105f2b20);
  puRam0000000112f2bba0 = puVar1;
  return;
}



/* Entry: 102f9776c; end: 102f977ab;  */

void FUN_102f9776c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b098;
  func_0x000107c61520(&UNK_10db6b098,&UNK_1105f2b20);
  puRam0000000112f2bba0 = puVar1;
  return;
}



/* Entry: 102f977ac; end: 102f977bf;  */

void FUN_102f977ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f977c0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f97800)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f977c0; end: 102f9786b;  */

void FUN_102f977c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b158;
  func_0x000107c61520(&UNK_10db6b158,&UNK_1105f2bb0);
  puRam0000000112f2bba8 = puVar1;
  return;
}



/* Entry: 102f9786c; end: 102f9786f;  */

void FUN_102f9786c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bbc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b198;
  func_0x000107c61520(&UNK_10db6b198,&UNK_1105f2bb0);
  puRam0000000112f2bbc8 = puVar1;
  return;
}



/* Entry: 102f97870; end: 102f978af;  */

void FUN_102f97870(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bbc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b198;
  func_0x000107c61520(&UNK_10db6b198,&UNK_1105f2bb0);
  puRam0000000112f2bbc8 = puVar1;
  return;
}



/* Entry: 102f978b0; end: 102f978c3;  */

void FUN_102f978b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f978c4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f97904)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f978c4; end: 102f9796f;  */

void FUN_102f978c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bbd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b258;
  func_0x000107c61520(&UNK_10db6b258,&UNK_1105f2c40);
  puRam0000000112f2bbd0 = puVar1;
  return;
}



/* Entry: 102f97970; end: 102f97973;  */

void FUN_102f97970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b298;
  func_0x000107c61520(&UNK_10db6b298,&UNK_1105f2c40);
  puRam0000000112f2bbf0 = puVar1;
  return;
}



/* Entry: 102f97974; end: 102f979b3;  */

void FUN_102f97974(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b298;
  func_0x000107c61520(&UNK_10db6b298,&UNK_1105f2c40);
  puRam0000000112f2bbf0 = puVar1;
  return;
}



/* Entry: 102f979b4; end: 102f979c7;  */

void FUN_102f979b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f979c8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f97a08)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f979c8; end: 102f97a73;  */

void FUN_102f979c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bbf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b358;
  func_0x000107c61520(&UNK_10db6b358,&UNK_1105f2cd0);
  puRam0000000112f2bbf8 = puVar1;
  return;
}



/* Entry: 102f97a74; end: 102f97a77;  */

void FUN_102f97a74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b398;
  func_0x000107c61520(&UNK_10db6b398,&UNK_1105f2cd0);
  puRam0000000112f2bc18 = puVar1;
  return;
}



/* Entry: 102f97a78; end: 102f97ab7;  */

void FUN_102f97a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b398;
  func_0x000107c61520(&UNK_10db6b398,&UNK_1105f2cd0);
  puRam0000000112f2bc18 = puVar1;
  return;
}



/* Entry: 102f97ab8; end: 102f97acb;  */

void FUN_102f97ab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f97acc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f97b0c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f97acc; end: 102f97b77;  */

void FUN_102f97acc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b458;
  func_0x000107c61520(&UNK_10db6b458,&UNK_1105f2d60);
  puRam0000000112f2bc20 = puVar1;
  return;
}



/* Entry: 102f97b78; end: 102f97b7b;  */

void FUN_102f97b78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b498;
  func_0x000107c61520(&UNK_10db6b498,&UNK_1105f2d60);
  puRam0000000112f2bc40 = puVar1;
  return;
}



/* Entry: 102f97b7c; end: 102f97bbb;  */

void FUN_102f97b7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b498;
  func_0x000107c61520(&UNK_10db6b498,&UNK_1105f2d60);
  puRam0000000112f2bc40 = puVar1;
  return;
}



/* Entry: 102f97bbc; end: 102f97bcf;  */

void FUN_102f97bbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f97bd0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f97c10)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f97bd0; end: 102f97c7b;  */

void FUN_102f97bd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b558;
  func_0x000107c61520(&UNK_10db6b558,&UNK_1105f2df0);
  puRam0000000112f2bc48 = puVar1;
  return;
}



/* Entry: 102f97c7c; end: 102f97cbf;  */

void FUN_102f97c7c(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 102f97cc0; end: 102f97cc3;  */

void FUN_102f97cc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b598;
  func_0x000107c61520(&UNK_10db6b598,&UNK_1105f2df0);
  puRam0000000112f2bc68 = puVar1;
  return;
}



/* Entry: 102f97cc4; end: 102f97d03;  */

void FUN_102f97cc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b598;
  func_0x000107c61520(&UNK_10db6b598,&UNK_1105f2df0);
  puRam0000000112f2bc68 = puVar1;
  return;
}



/* Entry: 102f97d04; end: 102f97d27;  */

void FUN_102f97d04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f97d28();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f97d28; end: 102f97d67;  */

void FUN_102f97d28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b708;
  func_0x000107c61520(&UNK_10db6b708,&UNK_1105f2e68);
  puRam0000000112f2bc70 = puVar1;
  return;
}



/* Entry: 102f97d68; end: 102f97d7f;  */

void FUN_102f97d68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f92a70();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102f972e8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f97d80; end: 102f97dbf;  */

void FUN_102f97d80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b770;
  func_0x000107c61520(&UNK_10db6b770,&UNK_1105f2e68);
  puRam0000000112f2bc78 = puVar1;
  return;
}



/* Entry: 102f97dc0; end: 102f97de3;  */

void FUN_102f97dc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f97de4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f97de4; end: 102f97e23;  */

void FUN_102f97de4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b7e0;
  func_0x000107c61520(&UNK_10db6b7e0,&UNK_1105f2ef0);
  puRam0000000112f2bc80 = puVar1;
  return;
}



/* Entry: 102f97e24; end: 102f97e37;  */

void FUN_102f97e24(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f92ab0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f97e38();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f97e38; end: 102f97e77;  */

void FUN_102f97e38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db6b798;
  func_0x000107c61520(&DAT_10db6b798,&UNK_1105f2ef0);
  puRam0000000112f2bc88 = puVar1;
  return;
}



/* Entry: 102f97e78; end: 102f97e7b;  */

void FUN_102f97e78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b848;
  func_0x000107c61520(&UNK_10db6b848,&UNK_1105f2ef0);
  puRam0000000112f2bc90 = puVar1;
  return;
}



/* Entry: 102f97e7c; end: 102f97ebb;  */

void FUN_102f97e7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b848;
  func_0x000107c61520(&UNK_10db6b848,&UNK_1105f2ef0);
  puRam0000000112f2bc90 = puVar1;
  return;
}



/* Entry: 102f97ebc; end: 102f97edf;  */

void FUN_102f97ebc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f97ee0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f97ee0; end: 102f97f1f;  */

void FUN_102f97ee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bc98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b8b8;
  func_0x000107c61520(&UNK_10db6b8b8,&UNK_1105f2f78);
  puRam0000000112f2bc98 = puVar1;
  return;
}



/* Entry: 102f97f20; end: 102f97f33;  */

void FUN_102f97f20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f92af0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f97f34();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f97f34; end: 102f97f73;  */

void FUN_102f97f34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db6b870;
  func_0x000107c61520(&DAT_10db6b870,&UNK_1105f2f78);
  puRam0000000112f2bca0 = puVar1;
  return;
}



/* Entry: 102f97f74; end: 102f97f77;  */

void FUN_102f97f74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b920;
  func_0x000107c61520(&UNK_10db6b920,&UNK_1105f2f78);
  puRam0000000112f2bca8 = puVar1;
  return;
}



/* Entry: 102f97f78; end: 102f97fb7;  */

void FUN_102f97f78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b920;
  func_0x000107c61520(&UNK_10db6b920,&UNK_1105f2f78);
  puRam0000000112f2bca8 = puVar1;
  return;
}



/* Entry: 102f97fb8; end: 102f97fdb;  */

void FUN_102f97fb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f97fdc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f97fdc; end: 102f9801b;  */

void FUN_102f97fdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bcb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b990;
  func_0x000107c61520(&UNK_10db6b990,&UNK_1105f3088);
  puRam0000000112f2bcb0 = puVar1;
  return;
}



/* Entry: 102f9801c; end: 102f9802f;  */

void FUN_102f9801c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x102f92bb0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_102f98030();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102f98030; end: 102f9806f;  */

void FUN_102f98030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bcb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db6b948;
  func_0x000107c61520(&DAT_10db6b948,&UNK_1105f3088);
  puRam0000000112f2bcb8 = puVar1;
  return;
}



/* Entry: 102f98070; end: 102f98073;  */

void FUN_102f98070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bcc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b9f8;
  func_0x000107c61520(&UNK_10db6b9f8,&UNK_1105f3088);
  puRam0000000112f2bcc0 = puVar1;
  return;
}



/* Entry: 102f98074; end: 102f980b3;  */

void FUN_102f98074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bcc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6b9f8;
  func_0x000107c61520(&UNK_10db6b9f8,&UNK_1105f3088);
  puRam0000000112f2bcc0 = puVar1;
  return;
}



/* Entry: 102f980b4; end: 102f980d7;  */

void FUN_102f980b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102f980d8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 102f980d8; end: 102f98117;  */

void FUN_102f980d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2bcc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db6ba68;
  func_0x000107c61520(&UNK_10db6ba68,&UNK_1105f3130);
  puRam0000000112f2bcc8 = puVar1;
  return;
}


