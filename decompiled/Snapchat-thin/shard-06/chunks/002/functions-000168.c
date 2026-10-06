/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104606768; end: 10460678b;  */

void FUN_104606768(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10460678c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10460678c; end: 1046067cb;  */

void FUN_10460678c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1ee38;
  _swift_getWitnessTable(&UNK_10dd1ee38,&UNK_11078f0f0);
  puRam0000000113089838 = puVar1;
  return;
}



/* Entry: 1046067cc; end: 1046067f7;  */

void FUN_1046067cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1046067f8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010456235c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1046067f8; end: 104606837;  */

void FUN_1046067f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089840 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1ee60;
  _swift_getWitnessTable(&UNK_10dd1ee60,&UNK_11078f0f0);
  puRam0000000113089840 = puVar1;
  return;
}



/* Entry: 104606838; end: 10460683b;  */

void FUN_104606838(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1eea0;
  _swift_getWitnessTable(&UNK_10dd1eea0,&UNK_11078f0f0);
  puRam0000000113089848 = puVar1;
  return;
}



/* Entry: 10460683c; end: 10460687b;  */

void FUN_10460683c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1eea0;
  _swift_getWitnessTable(&UNK_10dd1eea0,&UNK_11078f0f0);
  puRam0000000113089848 = puVar1;
  return;
}



/* Entry: 10460687c; end: 1046068a3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10460687c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1046068a4; end: 10460694b;  */

undefined8 * FUN_1046068a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10460694c; end: 10460698f;  */

undefined8 * FUN_10460694c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 104606990; end: 104606a43;  */

int FUN_104606990(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104606a44; end: 104606a73;  */

undefined1  [16] FUN_104606a44(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  _swift_bridgeObjectRetain(param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 104606a74; end: 104606aa7;  */

void FUN_104606a74(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 104606aa8; end: 104606abb;  */

undefined8 FUN_104606aa8(void)

{
  return 0x104606ab8;
}



/* Entry: 104606abc; end: 104606aef;  */

undefined1  [16]
FUN_104606abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c(param_3,param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 104606af0; end: 104606b23;  */

void FUN_104606af0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 104606b24; end: 104606b5f;  */

undefined1  [16] FUN_104606b24(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x104606b34;
  return auVar1;
}



/* Entry: 104606b60; end: 104606c1f;  */

void FUN_104606b60(void)

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
  FUN_104555d34(&UNK_10dd1f018,0xc,&uStack_48,&lStack_40);
  puRam0000000113814a18 = puStack_38;
  lRam0000000113814a10 = lStack_40;
  puRam0000000113814a28 = puStack_28;
  puRam0000000113814a20 = puStack_30;
  puRam0000000113814a38 = puStack_18;
  puRam0000000113814a30 = puStack_20;
  return;
}



/* Entry: 104606c20; end: 104606cbf;  */

void FUN_104606c20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089858 != -1) {
    _swift_once(0x113089858,FUN_104606b60);
  }
  uVar5 = uRam0000000113814a38;
  uVar4 = uRam0000000113814a30;
  uVar3 = uRam0000000113814a28;
  uVar2 = uRam0000000113814a20;
  uVar1 = uRam0000000113814a18;
  *param_1 = uRam0000000113814a10;
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



/* Entry: 104606cc0; end: 104606d43;  */

void FUN_104606cc0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 104606d44; end: 104606dcb;  */

void FUN_104606d44(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 104606dcc; end: 104606ea7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104606dcc(ulong param_1,long param_2,byte *param_3,byte *param_4,ulong param_5,
                    long param_6,long param_7,ulong param_8)

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
  
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
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
    uVar4 = (uint)((ulong)param_4 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_8 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_3;
    pbVar11 = param_4;
    if ((ulong)param_4 >> 0x3e == 3) {
      uVar17 = 0;
      if (((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
         ((param_8 >> 0x3e < 3 || ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))))
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
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
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
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,param_7
                            ,param_8);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_8;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
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
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
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
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
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



/* Entry: 104606ea8; end: 104606edb;  */

void FUN_104606ea8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 104606edc; end: 104606f0b;  */

undefined1  [16] FUN_104606edc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 104606f0c; end: 104606f3f;  */

void FUN_104606f0c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 104606f40; end: 104606f53;  */

undefined1  [16] FUN_104606f40(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x104606f50;
  return auVar1;
}



/* Entry: 104606f54; end: 104606f8b;  */

void FUN_104606f54(void)

{
  FUN_104606cc0();
  return;
}



/* Entry: 104606f8c; end: 10460702b;  */

void FUN_104606f8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113089858 != -1) {
    _swift_once(0x113089858,FUN_104606b60);
  }
  uVar5 = uRam0000000113814a38;
  uVar4 = uRam0000000113814a30;
  uVar3 = uRam0000000113814a28;
  uVar2 = uRam0000000113814a20;
  uVar1 = uRam0000000113814a18;
  *param_1 = uRam0000000113814a10;
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



/* Entry: 10460702c; end: 104607067;  */

void FUN_10460702c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089878;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089878,&UNK_10dd1f010);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104607068; end: 1046070c3;  */

void FUN_104607068(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001046048dc(auStack_78,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046070c4; end: 1046070cf;  */

void FUN_1046070c4(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_90,uVar2,uVar4);
  }
  uVar6 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    if (uVar7 != 0) {
      lVar8 = (long)(int)uVar3;
      lVar9 = (long)uVar3 >> 0x20;
      goto LAB_1045c04cc;
    }
    if ((uVar5 & 0xff000000000000) == 0) goto LAB_1045c04e4;
  }
  else {
    if (uVar7 != 2) goto LAB_1045c04e4;
    lVar8 = *(long *)(uVar3 + 0x10);
    lVar9 = *(long *)(uVar3 + 0x18);
LAB_1045c04cc:
    if (lVar8 == lVar9) goto LAB_1045c04e4;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,uVar3,uVar5);
LAB_1045c04e4:
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



/* Entry: 1046070d0; end: 10460719f;  */

void FUN_1046070d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x0001046048dc(auStack_78,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046071a0; end: 1046071c3;  */

void FUN_1046071a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1046071c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1046071c4; end: 104607203;  */

void FUN_1046071c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1ef58;
  _swift_getWitnessTable(&UNK_10dd1ef58,&UNK_11078f270);
  puRam0000000113089860 = puVar1;
  return;
}



/* Entry: 104607204; end: 10460722f;  */

void FUN_104607204(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104607230();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1045b7960();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 104607230; end: 10460726f;  */

void FUN_104607230(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1ef80;
  _swift_getWitnessTable(&UNK_10dd1ef80,&UNK_11078f270);
  puRam0000000113089868 = puVar1;
  return;
}



/* Entry: 104607270; end: 104607273;  */

void FUN_104607270(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1efc0;
  _swift_getWitnessTable(&UNK_10dd1efc0,&UNK_11078f270);
  puRam0000000113089870 = puVar1;
  return;
}



/* Entry: 104607274; end: 1046072b3;  */

void FUN_104607274(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd1efc0;
  _swift_getWitnessTable(&UNK_10dd1efc0,&UNK_11078f270);
  puRam0000000113089870 = puVar1;
  return;
}



/* Entry: 1046072b4; end: 104607307;  */

long FUN_1046072b4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104607308; end: 1046073b7;  */

undefined8 * FUN_104607308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 1046073b8; end: 1046073fb;  */

undefined8 * FUN_1046073b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1046073fc; end: 1046074cb;  */

int FUN_1046073fc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1046074cc; end: 1046074ef;  */

void FUN_1046074cc(void)

{
  FUN_10460c350(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1046074f0; end: 104607517;  */

undefined1  [16] FUN_1046074f0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104607518; end: 1046075bb;  */

void FUN_104607518(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130898c0;
  func_0x0001000285a8(0x1130898c0,&UNK_10dd1f030);
  _swift_initStaticObject();
  uRam0000000113814a40 = uVar1;
  return;
}



/* Entry: 1046075bc; end: 1046075ff;  */

void FUN_1046075bc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 104607600; end: 10460763f;  */

void FUN_104607600(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1130898c0;
  func_0x0001000285a8(0x1130898c0,&UNK_10dd1f030);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104607640; end: 10460767b;  */

void FUN_104607640(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = lVar1 == 0;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10460767c; end: 10460774b;  */

void FUN_10460767c(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  cVar2 = *(char *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0;
  if (cVar2 != '\x01') {
    uVar1 = uVar3;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10460774c; end: 1046077a7;  */

bool FUN_10460774c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((char)param_1[1] == '\x01') {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_1;
  }
  lVar1 = 0;
  if ((char)param_2[1] != '\x01') {
    lVar1 = *param_2;
  }
  return lVar2 == lVar1;
}



/* Entry: 1046077a8; end: 1046077f7;  */

undefined8 FUN_1046077a8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1045670a0(uVar1,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return uVar1;
}



/* Entry: 1046077f8; end: 10460784b;  */

void FUN_1046077f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  *(undefined1 *)(unaff_x20 + 3) = param_4;
  return;
}



/* Entry: 10460784c; end: 1046078a7;  */

undefined8 FUN_10460784c(void)

{
  return 0x10460785c;
}



/* Entry: 1046078a8; end: 1046078eb;  */

void FUN_1046078a8(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2 & 0xff;
  unaff_x20[2] = 0;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 1046078ec; end: 10460794b;  */

code * FUN_1046078ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *unaff_x20;
  
  param_1[2] = unaff_x20;
  if ((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(byte *)(unaff_x20 + 3) == 0xff)) {
    uVar1 = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined1 *)(unaff_x20 + 1);
    uVar1 = *unaff_x20;
    if (((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03) != 0 ||
        (*(byte *)(unaff_x20 + 3) & 0x3f) != 0) {
      uVar1 = 0;
      uVar2 = 1;
    }
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return FUN_10460794c;
}



/* Entry: 10460794c; end: 104607993;  */

void FUN_10460794c(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)param_1[2];
  uVar3 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  FUN_104567140(*puVar2,puVar2[1],puVar2[2],*(undefined1 *)(puVar2 + 3));
  *puVar2 = uVar3;
  puVar2[1] = (ulong)bVar1;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  return;
}



/* Entry: 104607994; end: 1046079d7;  */

undefined8 FUN_104607994(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  if ((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(byte *)(unaff_x20 + 3) == 0xff)) {
    return 0;
  }
  uVar1 = *unaff_x20;
  if (((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) !=
      1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1046079d8; end: 104607a17;  */

void FUN_1046079d8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  *unaff_x20 = param_1;
  unaff_x20[2] = 0x1000000000000000;
  unaff_x20[1] = 0;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 104607a18; end: 104607a6b;  */

code * FUN_104607a18(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  param_1[1] = unaff_x20;
  if (((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (uVar1 = 0, *(byte *)(unaff_x20 + 3) != 0xff)) &&
     (uVar1 = *unaff_x20,
     ((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) !=
     1)) {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return FUN_104607a6c;
}



/* Entry: 104607a6c; end: 104607b1b;  */

void FUN_104607a6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  FUN_104567140(*puVar2,puVar2[1],puVar2[2],*(undefined1 *)(puVar2 + 3));
  *puVar2 = uVar1;
  puVar2[2] = 0x1000000000000000;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  return;
}



/* Entry: 104607b1c; end: 104607be7;  */

void FUN_104607b1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = 0x2000000000000000;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 104607be8; end: 104607c9b;  */

void FUN_104607be8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  uVar7 = *param_1;
  uVar2 = *puVar3;
  uVar4 = puVar3[1];
  uVar6 = puVar3[2];
  uVar5 = *(undefined1 *)(puVar3 + 3);
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar1);
    FUN_104567140(uVar2,uVar4,uVar6,uVar5);
    *puVar3 = uVar7;
    puVar3[1] = uVar1;
    puVar3[2] = 0x2000000000000000;
    *(undefined1 *)(puVar3 + 3) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  FUN_104567140(uVar2,uVar4,uVar6,uVar5);
  *puVar3 = uVar7;
  puVar3[1] = uVar1;
  puVar3[2] = 0x2000000000000000;
  *(undefined1 *)(puVar3 + 3) = 0;
  return;
}



/* Entry: 104607c9c; end: 104607cdf;  */

byte FUN_104607c9c(void)

{
  byte *unaff_x20;
  
  if ((((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (unaff_x20[0x18] == 0xff)) {
    return 0;
  }
  return ((uint)(*(ulong *)(unaff_x20 + 0x10) >> 0x3c) & 0xfffffc03 | (unaff_x20[0x18] & 0x3f) << 2)
         == 3 & *unaff_x20;
}



/* Entry: 104607ce0; end: 104607d1f;  */

void FUN_104607ce0(ulong param_1)

{
  ulong *unaff_x20;
  
  FUN_104567140(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
  *unaff_x20 = param_1 & 1;
  unaff_x20[2] = 0x3000000000000000;
  unaff_x20[1] = 0;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 104607d20; end: 104607d77;  */

code * FUN_104607d20(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *unaff_x20;
  
  *param_1 = unaff_x20;
  if ((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(byte *)(unaff_x20 + 3) == 0xff)) {
    bVar1 = 0;
  }
  else {
    bVar1 = ((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03 |
            (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) == 3 & (byte)*unaff_x20;
  }
  *(byte *)(param_1 + 1) = bVar1;
  return FUN_104607d78;
}



/* Entry: 104607d78; end: 104607dbb;  */

void FUN_104607d78(undefined8 *param_1)

{
  byte bVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)*param_1;
  bVar1 = *(byte *)(param_1 + 1);
  FUN_104567140(*puVar2,puVar2[1],puVar2[2],(char)puVar2[3]);
  *puVar2 = (ulong)bVar1;
  puVar2[2] = 0x3000000000000000;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  return;
}



/* Entry: 104607dbc; end: 104607e93;  */

void FUN_104607dbc(void)

{
  undefined8 *unaff_x20;
  ulong uVar1;
  
  uVar1 = unaff_x20[2];
  if (((((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
      (*(byte *)(unaff_x20 + 3) == 0xff)) ||
     (((uint)(uVar1 >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) != 4)) {
    FUN_10460c350(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    FUN_1045670c4(*unaff_x20,unaff_x20[1],uVar1);
  }
  return;
}



/* Entry: 104607e94; end: 104607f37;  */

undefined1  [16] FUN_104607e94(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  param_1[3] = unaff_x20;
  puVar1 = (undefined *)*unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  if (((((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
      (*(byte *)(unaff_x20 + 3) == 0xff)) ||
     (((uint)(uVar2 >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) != 4)) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10460c350();
    uVar3 = 0;
    uVar2 = 0xc000000000000000;
  }
  else {
    FUN_1045670c4(puVar1,uVar3,uVar2);
  }
  *param_1 = puVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_104607f38;
  return auVar4;
}



/* Entry: 104607f38; end: 104608003;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104607f38(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_1;
  uVar7 = param_1[1];
  uVar2 = param_1[2];
  puVar4 = (undefined8 *)param_1[3];
  uVar3 = *puVar4;
  uVar5 = puVar4[1];
  uVar9 = puVar4[2];
  uVar6 = *(undefined1 *)(puVar4 + 3);
  if ((param_2 & 1) == 0) {
    FUN_104567140(uVar3,uVar5,uVar9,uVar6);
    *puVar4 = uVar1;
    puVar4[1] = uVar7;
    puVar4[2] = uVar2;
    *(undefined1 *)(puVar4 + 3) = 1;
    return;
  }
  _swift_bridgeObjectRetain(uVar1);
  func_0x00010006c00c(uVar7,uVar2);
  FUN_104567140(uVar3,uVar5,uVar9,uVar6);
  *puVar4 = uVar1;
  puVar4[1] = uVar7;
  puVar4[2] = uVar2;
  *(undefined1 *)(puVar4 + 3) = 1;
  _swift_bridgeObjectRelease(uVar1);
  uVar8 = (uint)(uVar2 >> 0x3e);
  if (uVar8 == 1) {
    uVar7 = uVar2 & 0x3fffffffffffffff;
  }
  else if (uVar8 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar7);
  return;
}



/* Entry: 104608004; end: 10460816b;  */

undefined * FUN_104608004(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined *)*unaff_x20;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(unaff_x20 + 3) != 0xff)) &&
     (((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) ==
      5)) {
    FUN_1045670c4(puVar1,unaff_x20[1]);
    puVar2 = puVar1;
  }
  return puVar2;
}



/* Entry: 10460816c; end: 104608247;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10460816c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_1;
  uVar7 = param_1[1];
  uVar2 = param_1[2];
  puVar4 = (undefined8 *)param_1[3];
  uVar3 = *puVar4;
  uVar5 = puVar4[1];
  uVar9 = puVar4[2];
  uVar6 = *(undefined1 *)(puVar4 + 3);
  if ((param_2 & 1) == 0) {
    FUN_104567140(uVar3,uVar5,uVar9,uVar6);
    *puVar4 = uVar1;
    puVar4[1] = uVar7;
    puVar4[2] = uVar2 | 0x1000000000000000;
    *(undefined1 *)(puVar4 + 3) = 1;
    return;
  }
  _swift_bridgeObjectRetain(uVar1);
  func_0x00010006c00c(uVar7,uVar2);
  FUN_104567140(uVar3,uVar5,uVar9,uVar6);
  *puVar4 = uVar1;
  puVar4[1] = uVar7;
  puVar4[2] = uVar2 | 0x1000000000000000;
  *(undefined1 *)(puVar4 + 3) = 1;
  _swift_bridgeObjectRelease(uVar1);
  uVar8 = (uint)(uVar2 >> 0x3e);
  if (uVar8 == 1) {
    uVar7 = uVar2 & 0x3fffffffffffffff;
  }
  else if (uVar8 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar7);
  return;
}



/* Entry: 104608248; end: 104608277;  */

undefined1  [16] FUN_104608248(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 104608278; end: 1046082ab;  */

void FUN_104608278(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1046082ac; end: 1046082c3;  */

undefined1  [16] FUN_1046082ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1046082bc;
  return auVar1;
}



/* Entry: 1046082c4; end: 104608383;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1046082c4(ulong param_1,byte *param_2,byte *param_3,undefined8 param_4,long param_5,
                    ulong param_6)

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
  
  FUN_10460aa08(param_1,param_4);
  if ((param_1 & 1) == 0) {
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
    uVar4 = (uint)((ulong)param_3 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_6 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_2;
    pbVar11 = param_3;
    if ((ulong)param_3 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_2 != (byte *)0x0) || (param_3 != (byte *)0xc000000000000000)) ||
          (param_6 >> 0x3e < 3)) || ((uVar17 = 0, param_5 != 0 || (param_6 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_2 >> 0x20);
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
        uVar19 = param_6 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar16,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_5)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
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
        uVar19 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
        if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
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
            *(char *)((long)register0x00000008 + -0x70) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_2 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_2 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_2 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_3;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_3 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_3 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_3 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_3 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_3 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_3 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_2 >> 0x20) - (long)unaff_x25);
          if ((long)param_2 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_3;
          if (param_2 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_2 = (byte *)0x0;
          }
          else {
            pbVar11 = param_2;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_2 = param_2 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_2;
            if (param_2 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_2;
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
          lVar21 = *(long *)(param_2 + 0x10);
          unaff_x24 = *(byte **)(param_2 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_2;
          if (param_2 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_2 = param_2 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_2;
          unaff_x25 = param_3;
          if (param_2 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_2;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_3 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_2,pbVar11,param_5
                            ,param_6);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_6;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
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
    pbVar10 = *(byte **)pbVar8;
    param_2 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_3 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_2;
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
        pbVar10 = param_2;
        pbVar12 = param_3;
        if ((param_2 == pbVar13) && (param_3 == pbVar14)) {
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
        if ((pbVar10 == pbVar13) && (param_2 == pbVar14)) {
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
        if (((pbVar10 == pbVar13) && (param_2 == pbVar14)) &&
           (pbVar10 = param_3, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_3 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
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
      if (param_3 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_2;
        pbVar12 = param_3;
        if ((param_2 != pbVar13) || (param_3 != pbVar14)) goto code_r0x000107c605b8;
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
      if ((((pbVar20 == (byte *)0x0 && param_2 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_3 == (byte *)0x0) {
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
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_2 == (byte *)0x0) && param_3 == (byte *)0x0) &&
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
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_5 = *(long *)(pbVar11 + 8);
    param_6 = *(ulong *)(pbVar11 + 0x10);
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



/* Entry: 104608384; end: 1046083ab;  */

double FUN_104608384(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = param_1[2];
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar7 = param_2[2];
  uVar9 = (uint)((ulong)dVar6 >> 0x3c) & 3 | (*(byte *)(param_1 + 3) & 0x3f) << 2;
  uVar8 = (uint)*(byte *)(param_2 + 3);
  uVar3 = (uint)((ulong)dVar7 >> 0x20);
  if (uVar9 < 3) {
    if (uVar9 == 0) {
      if ((uVar3 >> 0x1c & 3) == 0 && (*(byte *)(param_2 + 3) & 0x3f) == 0) {
        dVar6 = 0.0;
        if (((ulong)dVar5 & 0xff) != 1) {
          dVar6 = dVar4;
        }
        if (((ulong)dVar2 & 0xff) == 1) {
          if (dVar6 != 0.0) goto LAB_10460c648;
        }
        else if (dVar6 != dVar1) goto LAB_10460c648;
LAB_10460c638:
        uVar9 = 1;
        goto LAB_10460c64c;
      }
    }
    else {
      if (uVar9 == 1) {
        uVar9 = (uint)(dVar4 == dVar1);
        if ((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) != 1) {
          uVar9 = 0;
        }
        goto LAB_10460c64c;
      }
      if ((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) == 2) {
        if ((dVar4 != dVar1) || (dVar5 != dVar2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(dVar4,dVar5,dVar1,dVar2,0);
          return dVar4;
        }
        goto LAB_10460c638;
      }
    }
  }
  else {
    if (uVar9 == 3) {
      uVar9 = SUB84(dVar1,0) ^ SUB84(dVar4,0) ^ 1;
      if ((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) != 3) {
        uVar9 = 0;
      }
      goto LAB_10460c64c;
    }
    if (uVar9 == 4) {
      if (((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) == 4) &&
         (FUN_10460aa08(dVar4,dVar1), ((ulong)dVar4 & 1) != 0)) {
        func_0x000100e25fcc(dVar5,dVar6,dVar2,dVar7);
joined_r0x00010460c634:
        if (((ulong)dVar5 & 1) != 0) goto LAB_10460c638;
      }
    }
    else if (((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) == 5) &&
            (FUN_1045b863c(dVar4,dVar1), ((ulong)dVar4 & 1) != 0)) {
      func_0x000100e25fcc(dVar5,(ulong)dVar6 & 0xcfffffffffffffff,dVar2,
                          (ulong)dVar7 & 0xcfffffffffffffff);
      goto joined_r0x00010460c634;
    }
  }
LAB_10460c648:
  uVar9 = 0;
LAB_10460c64c:
  return (double)(ulong)(uVar9 & 1);
}



/* Entry: 1046083ac; end: 1046083d3;  */

void FUN_1046083ac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1046083d4; end: 1046083e7;  */

undefined8 FUN_1046083d4(void)

{
  return 0x1046083e4;
}



/* Entry: 1046083e8; end: 10460841b;  */

undefined1  [16] FUN_1046083e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 10460841c; end: 10460844f;  */

void FUN_10460841c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 104608450; end: 104608463;  */

undefined1  [16] FUN_104608450(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x104608460;
  return auVar1;
}



/* Entry: 104608464; end: 104608523;  */

void FUN_104608464(void)

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
  FUN_104555d34(&UNK_10dd1f52a,0xe,&uStack_48,&lStack_40);
  puRam0000000113814a58 = puStack_38;
  lRam0000000113814a50 = lStack_40;
  puRam0000000113814a68 = puStack_28;
  puRam0000000113814a60 = puStack_30;
  puRam0000000113814a78 = puStack_18;
  puRam0000000113814a70 = puStack_20;
  return;
}



/* Entry: 104608524; end: 104608663;  */

void FUN_104608524(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130898c8 != -1) {
    _swift_once(0x1130898c8,FUN_104608464);
  }
  uVar5 = uRam0000000113814a78;
  uVar4 = uRam0000000113814a70;
  uVar3 = uRam0000000113814a68;
  uVar2 = uRam0000000113814a60;
  uVar1 = uRam0000000113814a58;
  *param_1 = uRam0000000113814a50;
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



/* Entry: 104608664; end: 10460868b;  */

undefined * FUN_104608664(void)

{
  return &UNK_11078f2e8;
}



/* Entry: 10460868c; end: 10460874b;  */

void FUN_10460868c(void)

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
  FUN_104555d34(&UNK_10dd1f520,9,&uStack_48,&lStack_40);
  puRam0000000113814a88 = puStack_38;
  lRam0000000113814a80 = lStack_40;
  puRam0000000113814a98 = puStack_28;
  puRam0000000113814a90 = puStack_30;
  puRam0000000113814aa8 = puStack_18;
  puRam0000000113814aa0 = puStack_20;
  return;
}



/* Entry: 10460874c; end: 1046087eb;  */

void FUN_10460874c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130898d0 != -1) {
    _swift_once(0x1130898d0,FUN_10460868c);
  }
  uVar5 = uRam0000000113814aa8;
  uVar4 = uRam0000000113814aa0;
  uVar3 = uRam0000000113814a98;
  uVar2 = uRam0000000113814a90;
  uVar1 = uRam0000000113814a88;
  *param_1 = uRam0000000113814a80;
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



/* Entry: 1046087ec; end: 1046088c3;  */

/* WARNING: Removing unreachable block (ram,0x0001046088c0) */

void FUN_1046087ec(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x1c8);
        FUN_10460c660();
        func_0x00010456241c();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1046088c4; end: 10460898b;  */

void FUN_1046088c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  code *pcVar3;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_6 + 0x1a8);
    uVar1 = param_1;
    FUN_10460c660();
    uVar2 = uVar1;
    func_0x00010456241c();
    (*pcVar3)(param_2,1,&UNK_110787f98,&UNK_11078f680,&PTR_DAT_110787db0,uVar1,uVar2,param_5,param_6
             );
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10460898c; end: 1046089e7;  */

void FUN_10460898c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_1045bfd28(auStack_78,param_1,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046089e8; end: 104608a1f;  */

void FUN_1046089e8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10460c350();
  *param_1 = puVar1;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 104608a20; end: 104608a4f;  */

undefined1  [16] FUN_104608a20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f2080d0;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Entry: 104608a50; end: 104608a87;  */

void FUN_104608a50(void)

{
  FUN_1046087ec();
  return;
}



/* Entry: 104608a88; end: 104608b27;  */

void FUN_104608a88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130898d0 != -1) {
    _swift_once(0x1130898d0,FUN_10460868c);
  }
  uVar5 = uRam0000000113814aa8;
  uVar4 = uRam0000000113814aa0;
  uVar3 = uRam0000000113814a98;
  uVar2 = uRam0000000113814a90;
  uVar1 = uRam0000000113814a88;
  *param_1 = uRam0000000113814a80;
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



/* Entry: 104608b28; end: 104608b3b;  */

void FUN_104608b28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113089968;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113089968,&UNK_10dd1f4a8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104608b3c; end: 104608b93;  */

void FUN_104608b3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_1045bfd28(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104608b94; end: 104608b9f;  */

void FUN_104608b94(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
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
  
  lVar5 = *unaff_x20;
  lVar1 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (*(long *)(lVar5 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(1);
    FUN_104618d94(&uStack_90,lVar5);
  }
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_1045bfdbc;
    }
    if ((uVar3 & 0xff000000000000) == 0) goto LAB_1045bfdd4;
  }
  else {
    if (uVar4 != 2) goto LAB_1045bfdd4;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_1045bfdbc:
    if (lVar5 == lVar6) goto LAB_1045bfdd4;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,lVar1,uVar3);
LAB_1045bfdd4:
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



/* Entry: 104608ba0; end: 104608bf3;  */

void FUN_104608ba0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_1045bfd28(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104608bf4; end: 104608c27;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104608bf4(ulong *param_1,undefined8 *param_2)

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
  ulong unaff_x20;
  byte *pbVar23;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
  long lVar25;
  byte *unaff_x23;
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
  
  uVar18 = *param_1;
  pbVar9 = (byte *)param_1[1];
  pbVar23 = (byte *)param_1[2];
  lVar22 = param_2[1];
  uVar24 = param_2[2];
  FUN_10460aa08(uVar18,*param_2);
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
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar24 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar24 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar24 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
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
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar24 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
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
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
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
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
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
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar24);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
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
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    lVar25 = *(long *)(pbVar8 + 0x20);
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
      if (lVar25 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar25,*(byte **)(pbVar12 + 0x18),lVar22,0);
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
          lVar25 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
    uVar24 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 104608c28; end: 104608ce7;  */

void FUN_104608c28(void)

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
  FUN_104555d34(&UNK_10dd1f4d0,0x4f,&uStack_48,&lStack_40);
  puRam0000000113814ab8 = puStack_38;
  lRam0000000113814ab0 = lStack_40;
  puRam0000000113814ac8 = puStack_28;
  puRam0000000113814ac0 = puStack_30;
  puRam0000000113814ad8 = puStack_18;
  puRam0000000113814ad0 = puStack_20;
  return;
}



/* Entry: 104608ce8; end: 104608d87;  */

void FUN_104608ce8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130898e0 != -1) {
    _swift_once(0x1130898e0,FUN_104608c28);
  }
  uVar5 = uRam0000000113814ad8;
  uVar4 = uRam0000000113814ad0;
  uVar3 = uRam0000000113814ac8;
  uVar2 = uRam0000000113814ac0;
  uVar1 = uRam0000000113814ab8;
  *param_1 = uRam0000000113814ab0;
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



/* Entry: 104608d88; end: 104608ec3;  */

/* WARNING: Removing unreachable block (ram,0x000104608e94) */
/* WARNING: Removing unreachable block (ram,0x000104608e78) */
/* WARNING: Removing unreachable block (ram,0x000104608e28) */
/* WARNING: Removing unreachable block (ram,0x000104608e5c) */

void FUN_104608d88(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 < 4) {
      if (lVar1 == 1) {
        FUN_104608ec4(param_1);
      }
      else if (lVar1 == 2) {
        FUN_10460903c(param_1);
      }
      else if (lVar1 == 3) {
        FUN_104609198(param_1);
      }
    }
    else if (lVar1 == 4) {
      FUN_10460930c(param_1);
    }
    else if (lVar1 == 5) {
      FUN_10460945c();
    }
    else if (lVar1 == 6) {
      FUN_1046095ec();
    }
  }
  return;
}


