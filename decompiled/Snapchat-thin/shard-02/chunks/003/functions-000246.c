/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c32078; end: 101c3209f;  */

void FUN_101c32078(void)

{
  FUN_101c31e88();
  return;
}



/* Entry: 101c320a0; end: 101c320d7;  */

uint FUN_101c320a0(long param_1,long param_2)

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
  func_0x000101c3c9ec();
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



/* Entry: 101c320d8; end: 101c3211f;  */

uint FUN_101c320d8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_101c37dfc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c32120; end: 101c321bf;  */

/* WARNING: Possible PIC construction at 0x000101c3216c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c3217c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c32170) */
/* WARNING: Removing unreachable block (ram,0x000101c32180) */

void FUN_101c32120(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a708 != -1) {
    func_0x000107c61568(0x112e0a708,FUN_101c31e40);
  }
  uVar5 = uRam0000000113804070;
  uVar4 = uRam0000000113804068;
  uVar3 = uRam0000000113804060;
  uVar2 = uRam0000000113804058;
  uVar1 = uRam0000000113804050;
  *param_1 = uRam0000000113804048;
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



/* Entry: 101c321c0; end: 101c321d3;  */

void FUN_101c321c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0abc8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0abc8,&UNK_10d9e3568);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c321d4; end: 101c322e7;  */

void FUN_101c321d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = unaff_x20[1];
  uStack_48 = *(undefined1 *)(unaff_x20 + 2);
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c322e8; end: 101c32377;  */

uint FUN_101c322e8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_101c37dfc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c32378; end: 101c323af;  */

void FUN_101c32378(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101c36fcc();
  *param_1 = puVar1;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 101c323b0; end: 101c323e7;  */

undefined1  [16] FUN_101c323b0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f004720;
  auVar1._0_8_ = 0xd000000000000042;
  return auVar1;
}



/* Entry: 101c323e8; end: 101c3245b;  */

void FUN_101c323e8(void)

{
  FUN_101c355d4();
  return;
}



/* Entry: 101c3245c; end: 101c32493;  */

uint FUN_101c3245c(long param_1,long param_2)

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
  func_0x000101c3c9ac();
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



/* Entry: 101c32494; end: 101c3249f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c32494(undefined8 *param_1)

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
  (*(code *)0x101c365b4)(uVar18,*param_1);
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
        uVar20 = uVar25 >> 0x30 & 0xff;
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
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar25);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar25;
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
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
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
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 101c324a0; end: 101c3253f;  */

/* WARNING: Possible PIC construction at 0x000101c324ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c324fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c324f0) */
/* WARNING: Removing unreachable block (ram,0x000101c32500) */

void FUN_101c324a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a720 != -1) {
    func_0x000107c61568(0x112e0a720,0x101c32330);
  }
  uVar5 = uRam00000001138040a0;
  uVar4 = uRam0000000113804098;
  uVar3 = uRam0000000113804090;
  uVar2 = uRam0000000113804088;
  uVar1 = uRam0000000113804080;
  *param_1 = uRam0000000113804078;
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



/* Entry: 101c32540; end: 101c32553;  */

void FUN_101c32540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0abb8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0abb8,&UNK_10d9e3560);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c32554; end: 101c3258b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c32554(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_101c395b0();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 101c3258c; end: 101c32597;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c3258c(ulong *param_1,undefined8 *param_2)

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
  (*(code *)0x101c365b4)(uVar18,*param_2);
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



/* Entry: 101c32598; end: 101c325df;  */

void FUN_101c32598(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e37a0,0x12,2);
  uRam00000001138040b0 = uStack_38;
  uRam00000001138040a8 = uStack_40;
  uRam00000001138040c0 = uStack_28;
  uRam00000001138040b8 = uStack_30;
  uRam00000001138040d0 = uStack_18;
  uRam00000001138040c8 = uStack_20;
  return;
}



/* Entry: 101c325e0; end: 101c326b3;  */

/* WARNING: Removing unreachable block (ram,0x000101c326b0) */

void FUN_101c325e0(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        FUN_101c372d8();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 0x10,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101c326b4; end: 101c3277f;  */

void FUN_101c326b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    FUN_101c372d8();
    (*pcVar4)(&lStack_50,1,&UNK_11045bea0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 101c32780; end: 101c327db;  */

void FUN_101c32780(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 101c327dc; end: 101c32803;  */

void FUN_101c327dc(void)

{
  FUN_101c325e0();
  return;
}



/* Entry: 101c32804; end: 101c3283b;  */

uint FUN_101c32804(long param_1,long param_2)

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
  func_0x000101c3c96c();
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



/* Entry: 101c3283c; end: 101c32883;  */

uint FUN_101c3283c(undefined8 *param_1)

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
  FUN_101c38194(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c32884; end: 101c32923;  */

/* WARNING: Possible PIC construction at 0x000101c328d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c328e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c328d4) */
/* WARNING: Removing unreachable block (ram,0x000101c328e4) */

void FUN_101c32884(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a740 != -1) {
    func_0x000107c61568(0x112e0a740,FUN_101c32598);
  }
  uVar5 = uRam00000001138040d0;
  uVar4 = uRam00000001138040c8;
  uVar3 = uRam00000001138040c0;
  uVar2 = uRam00000001138040b8;
  uVar1 = uRam00000001138040b0;
  *param_1 = uRam00000001138040a8;
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



/* Entry: 101c32924; end: 101c32937;  */

void FUN_101c32924(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0aba8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0aba8,&UNK_10d9e3558);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c32938; end: 101c3296b;  */

void FUN_101c32938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 101c3296c; end: 101c32a8f;  */

void FUN_101c3296c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined1 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c32a90; end: 101c32b1b;  */

uint FUN_101c32a90(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101c38194(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c32b1c; end: 101c32c03;  */

/* WARNING: Removing unreachable block (ram,0x000101c32c00) */

void FUN_101c32b1c(undefined8 param_1,long param_2,long param_3)

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
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000101c37720();
        (*pcVar3)(unaff_x20 + 0x18,&UNK_11045a430,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 1) goto LAB_101c32ba8;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_101c32ba8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c32c04; end: 101c32cf7;  */

void FUN_101c32c04(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if ((char)unaff_x20[2] == '\x01') {
      uVar3 = 1;
      (**(code **)(param_3 + 0x68))(1,2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (unaff_x20[3] != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[3];
      func_0x000101c37720();
      (*pcVar4)(&uStack_50,3,&UNK_11045a430,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 101c32cf8; end: 101c32d43;  */

void FUN_101c32cf8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 101c32d44; end: 101c32d73;  */

undefined1  [16] FUN_101c32d44(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 101c32d74; end: 101c32da7;  */

void FUN_101c32d74(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 101c32da8; end: 101c32dbb;  */

undefined1  [16] FUN_101c32da8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x101c32db8;
  return auVar1;
}



/* Entry: 101c32dbc; end: 101c32de3;  */

void FUN_101c32dbc(void)

{
  FUN_101c32b1c();
  return;
}



/* Entry: 101c32de4; end: 101c32de7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c32de4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c32de8; end: 101c32e1f;  */

uint FUN_101c32de8(long param_1,long param_2)

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
  func_0x000101c3c92c();
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



/* Entry: 101c32e20; end: 101c32e77;  */

uint FUN_101c32e20(undefined8 *param_1)

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
  FUN_101c38288(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101c32e78; end: 101c32f17;  */

/* WARNING: Possible PIC construction at 0x000101c32ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c32ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c32ec8) */
/* WARNING: Removing unreachable block (ram,0x000101c32ed8) */

void FUN_101c32e78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a750 != -1) {
    func_0x000107c61568(0x112e0a750,0x101c32ad4);
  }
  uVar5 = uRam0000000113804100;
  uVar4 = uRam00000001138040f8;
  uVar3 = uRam00000001138040f0;
  uVar2 = uRam00000001138040e8;
  uVar1 = uRam00000001138040e0;
  *param_1 = uRam00000001138040d8;
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



/* Entry: 101c32f18; end: 101c32f53;  */

void FUN_101c32f18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0ab98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0ab98,&UNK_10d9e3550);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c32f54; end: 101c33087;  */

void FUN_101c32f54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = unaff_x20[1];
  uStack_58 = *(undefined1 *)(unaff_x20 + 2);
  uStack_50 = unaff_x20[3];
  uStack_48 = *(undefined1 *)(unaff_x20 + 4);
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c33088; end: 101c33127;  */

uint FUN_101c33088(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101c38288(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101c33128; end: 101c3325f;  */

/* WARNING: Removing unreachable block (ram,0x000101c3325c) */

void FUN_101c33128(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_101c372d8();
          goto LAB_101c33248;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_101c331a0;
        }
      }
      else if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000101c38390();
LAB_101c33248:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x30;
        }
        else {
          if (lVar1 != 5) goto LAB_101c331b0;
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x40;
        }
LAB_101c331a0:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_101c331b0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c33260; end: 101c333d3;  */

void FUN_101c33260(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar5 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    FUN_101c372d8();
    (*pcVar5)(&lStack_50,1,&UNK_11045bea0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar4 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar1 = uVar4 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar4,uVar2,2,param_2,param_3), unaff_x21 == 0)
     ) {
    if (unaff_x20[4] != 0) {
      uStack_48 = (undefined1)unaff_x20[5];
      pcVar5 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[4];
      func_0x000101c38390();
      (*pcVar5)(&lStack_50,3,&UNK_11045a310,uVar4,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar4 = unaff_x20[7];
    uVar1 = unaff_x20[6] & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar1 = uVar4 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar4,4,param_2,param_3), unaff_x21 == 0)) {
      uVar4 = unaff_x20[9];
      uVar1 = unaff_x20[8] & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar1 = uVar4 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar4,5,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 101c333d4; end: 101c3342b;  */

void FUN_101c333d4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}



/* Entry: 101c3342c; end: 101c3345b;  */

undefined1  [16] FUN_101c3342c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 101c3345c; end: 101c3348f;  */

void FUN_101c3345c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 101c33490; end: 101c334a3;  */

undefined1  [16] FUN_101c33490(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x101c334a0;
  return auVar1;
}



/* Entry: 101c334a4; end: 101c334cb;  */

void FUN_101c334a4(void)

{
  FUN_101c33128();
  return;
}



/* Entry: 101c334cc; end: 101c334cf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c334cc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c334d0; end: 101c33507;  */

uint FUN_101c334d0(long param_1,long param_2)

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
  func_0x000101c3c8ec();
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



/* Entry: 101c33508; end: 101c3355f;  */

uint FUN_101c33508(undefined8 *param_1)

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
  FUN_101c37ff8(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101c33560; end: 101c335ff;  */

/* WARNING: Possible PIC construction at 0x000101c335ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c335bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c335b0) */
/* WARNING: Removing unreachable block (ram,0x000101c335c0) */

void FUN_101c33560(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a760 != -1) {
    func_0x000107c61568(0x112e0a760,0x101c330e0);
  }
  uVar5 = uRam0000000113804130;
  uVar4 = uRam0000000113804128;
  uVar3 = uRam0000000113804120;
  uVar2 = uRam0000000113804118;
  uVar1 = uRam0000000113804110;
  *param_1 = uRam0000000113804108;
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



/* Entry: 101c33600; end: 101c3363b;  */

void FUN_101c33600(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0ab88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0ab88,&UNK_10d9e3548);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c3363c; end: 101c33757;  */

void FUN_101c3363c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101c33758; end: 101c337f7;  */

uint FUN_101c33758(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101c37ff8(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101c337f8; end: 101c3382f;  */

undefined1  [16] FUN_101c337f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f004840;
  auVar1._0_8_ = 0xd000000000000044;
  return auVar1;
}



/* Entry: 101c33830; end: 101c33897;  */

void FUN_101c33830(void)

{
  FUN_101c34908();
  return;
}



/* Entry: 101c33898; end: 101c338cf;  */

uint FUN_101c33898(long param_1,long param_2)

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
  func_0x000101c3c8ac();
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



/* Entry: 101c338d0; end: 101c338ef;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101c338d0(long *param_1)

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
  if ((char)param_1[1] != '\x01') {
    if (lVar20 == lVar18) goto SUB_100e25fcc;
    goto LAB_101c38144;
  }
  if (lVar18 < 2) {
    if (lVar18 == 0) {
      if (lVar20 == 0) {
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
    else if (lVar20 == 1) goto SUB_100e25fcc;
  }
  else if (lVar18 == 2) {
    if (lVar20 == 2) goto SUB_100e25fcc;
  }
  else if (lVar20 == 3) goto SUB_100e25fcc;
LAB_101c38144:
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 101c338f0; end: 101c3398f;  */

/* WARNING: Possible PIC construction at 0x000101c3393c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c3394c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c33940) */
/* WARNING: Removing unreachable block (ram,0x000101c33950) */

void FUN_101c338f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a778 != -1) {
    func_0x000107c61568(0x112e0a778,0x101c337b0);
  }
  uVar5 = uRam0000000113804160;
  uVar4 = uRam0000000113804158;
  uVar3 = uRam0000000113804150;
  uVar2 = uRam0000000113804148;
  uVar1 = uRam0000000113804140;
  *param_1 = uRam0000000113804138;
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



/* Entry: 101c33990; end: 101c339a3;  */

void FUN_101c33990(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0ab78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0ab78,&UNK_10d9e3540);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c339a4; end: 101c339db;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c339a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_101c399a0();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 101c339dc; end: 101c339fb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101c339dc(long *param_1,long *param_2)

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
  if ((char)param_2[1] != '\x01') {
    if (lVar20 == lVar18) goto SUB_100e25fcc;
    goto LAB_101c38144;
  }
  if (lVar18 < 2) {
    if (lVar18 == 0) {
      if (lVar20 == 0) {
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
    else if (lVar20 == 1) goto SUB_100e25fcc;
  }
  else if (lVar18 == 2) {
    if (lVar20 == 2) goto SUB_100e25fcc;
  }
  else if (lVar20 == 3) goto SUB_100e25fcc;
LAB_101c38144:
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 101c339fc; end: 101c33a43;  */

void FUN_101c339fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e365b,0xc,2);
  uRam0000000113804170 = uStack_38;
  uRam0000000113804168 = uStack_40;
  uRam0000000113804180 = uStack_28;
  uRam0000000113804178 = uStack_30;
  uRam0000000113804190 = uStack_18;
  uRam0000000113804188 = uStack_20;
  return;
}



/* Entry: 101c33a44; end: 101c33a7b;  */

undefined1  [16] FUN_101c33a44(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f004890;
  auVar1._0_8_ = 0xd00000000000003f;
  return auVar1;
}



/* Entry: 101c33a7c; end: 101c33ab3;  */

uint FUN_101c33a7c(long param_1,long param_2)

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
  func_0x000101c3c86c();
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



/* Entry: 101c33ab4; end: 101c33b53;  */

/* WARNING: Possible PIC construction at 0x000101c33b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c33b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c33b04) */
/* WARNING: Removing unreachable block (ram,0x000101c33b14) */

void FUN_101c33ab4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a788 != -1) {
    func_0x000107c61568(0x112e0a788,FUN_101c339fc);
  }
  uVar5 = uRam0000000113804190;
  uVar4 = uRam0000000113804188;
  uVar3 = uRam0000000113804180;
  uVar2 = uRam0000000113804178;
  uVar1 = uRam0000000113804170;
  *param_1 = uRam0000000113804168;
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



/* Entry: 101c33b54; end: 101c33b67;  */

void FUN_101c33b54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0ab68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0ab68,&UNK_10d9e3538);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c33b68; end: 101c33b9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c33b68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_101c39a9c();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 101c33ba0; end: 101c33be7;  */

void FUN_101c33ba0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e36c0,0x49,2);
  uRam00000001138041a0 = uStack_38;
  uRam0000000113804198 = uStack_40;
  uRam00000001138041b0 = uStack_28;
  uRam00000001138041a8 = uStack_30;
  uRam00000001138041c0 = uStack_18;
  uRam00000001138041b8 = uStack_20;
  return;
}



/* Entry: 101c33be8; end: 101c33d0b;  */

/* WARNING: Removing unreachable block (ram,0x000101c33d08) */

void FUN_101c33be8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000101c38490();
LAB_101c33cf4:
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_101c33c60;
        }
      }
      else {
        if (lVar1 != 3) {
          if (lVar1 != 4) goto LAB_101c33c70;
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000101c37720();
          goto LAB_101c33cf4;
        }
        pcVar3 = *(code **)(param_3 + 0x90);
        lVar1 = unaff_x20 + 0x18;
LAB_101c33c60:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_101c33c70:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c33d0c; end: 101c33e33;  */

void FUN_101c33d0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000101c38490();
    (*pcVar3)(&lStack_50,1,&UNK_11045a3a0,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((*(long *)(unaff_x20[2] + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) &&
     ((lVar2 = unaff_x20[3], lVar2 == 0 ||
      ((**(code **)(param_3 + 0x30))(lVar2,3,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[4] != 0) {
      uStack_48 = (undefined1)unaff_x20[5];
      pcVar3 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[4];
      func_0x000101c37720();
      (*pcVar3)(&lStack_50,4,&UNK_11045a430,lVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 101c33e34; end: 101c33e9b;  */

void FUN_101c33e34(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = puVar1;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 101c33e9c; end: 101c33ec3;  */

void FUN_101c33e9c(void)

{
  FUN_101c33be8();
  return;
}



/* Entry: 101c33ec4; end: 101c33efb;  */

uint FUN_101c33ec4(long param_1,long param_2)

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
  func_0x000101c3c82c();
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



/* Entry: 101c33efc; end: 101c33f43;  */

uint FUN_101c33efc(undefined8 *param_1)

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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_101c37b7c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101c33f44; end: 101c33fe3;  */

/* WARNING: Possible PIC construction at 0x000101c33f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c33fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c33f94) */
/* WARNING: Removing unreachable block (ram,0x000101c33fa4) */

void FUN_101c33f44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a798 != -1) {
    func_0x000107c61568(0x112e0a798,FUN_101c33ba0);
  }
  uVar5 = uRam00000001138041c0;
  uVar4 = uRam00000001138041b8;
  uVar3 = uRam00000001138041b0;
  uVar2 = uRam00000001138041a8;
  uVar1 = uRam00000001138041a0;
  *param_1 = uRam0000000113804198;
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



/* Entry: 101c33fe4; end: 101c33ff7;  */

void FUN_101c33fe4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0ab58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0ab58,&UNK_10d9e3530);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c33ff8; end: 101c340fb;  */

void FUN_101c33ff8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c340fc; end: 101c3418b;  */

uint FUN_101c340fc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_101c37b7c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101c3418c; end: 101c342af;  */

/* WARNING: Removing unreachable block (ram,0x000101c342ac) */

void FUN_101c3418c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          FUN_101c372d8();
        }
        else {
          if (lVar1 != 2) goto LAB_101c34214;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000101c38490();
        }
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x160);
          lVar1 = unaff_x20 + 0x20;
        }
        else {
          if (lVar1 != 4) goto LAB_101c34214;
          pcVar4 = *(code **)(param_3 + 0x90);
          lVar1 = unaff_x20 + 0x28;
        }
        (*pcVar4)(lVar1,param_2,param_3);
      }
LAB_101c34214:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101c342b0; end: 101c343d7;  */

void FUN_101c342b0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar2 = &lStack_50;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    FUN_101c372d8();
    (*pcVar3)(&lStack_50,1,&UNK_11045bea0,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x000101c38490();
    (*pcVar3)(&lStack_50,2,&UNK_11045a3a0,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((*(long *)(unaff_x20[4] + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x100))(unaff_x20[4],3,param_2,param_3), unaff_x21 == 0)) &&
     ((unaff_x20[5] == 0 ||
      ((**(code **)(param_3 + 0x30))(unaff_x20[5],4,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 101c343d8; end: 101c3443b;  */

void FUN_101c343d8(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = puVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xc000000000000000;
  return;
}



/* Entry: 101c3443c; end: 101c34463;  */

void FUN_101c3443c(void)

{
  FUN_101c3418c();
  return;
}



/* Entry: 101c34464; end: 101c3449b;  */

uint FUN_101c34464(long param_1,long param_2)

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
  func_0x000101c3c7ec();
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



/* Entry: 101c3449c; end: 101c344e3;  */

uint FUN_101c3449c(undefined8 *param_1)

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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_101c37cf4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101c344e4; end: 101c34583;  */

/* WARNING: Possible PIC construction at 0x000101c34530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c34540: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c34534) */
/* WARNING: Removing unreachable block (ram,0x000101c34544) */

void FUN_101c344e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a7b0 != -1) {
    func_0x000107c61568(0x112e0a7b0,0x101c34144);
  }
  uVar5 = uRam00000001138041f0;
  uVar4 = uRam00000001138041e8;
  uVar3 = uRam00000001138041e0;
  uVar2 = uRam00000001138041d8;
  uVar1 = uRam00000001138041d0;
  *param_1 = uRam00000001138041c8;
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



/* Entry: 101c34584; end: 101c34597;  */

void FUN_101c34584(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0ab48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0ab48,&UNK_10d9e3528);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c34598; end: 101c345cb;  */

void FUN_101c34598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 101c345cc; end: 101c346cf;  */

void FUN_101c345cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c346d0; end: 101c34763;  */

uint FUN_101c346d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_101c37cf4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101c34764; end: 101c3479b;  */

undefined1  [16] FUN_101c34764(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f004970;
  auVar1._0_8_ = 0xd000000000000041;
  return auVar1;
}



/* Entry: 101c3479c; end: 101c347d3;  */

uint FUN_101c3479c(long param_1,long param_2)

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
  func_0x000101c3c7ac();
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



/* Entry: 101c347d4; end: 101c34873;  */

/* WARNING: Possible PIC construction at 0x000101c34820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c34830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c34824) */
/* WARNING: Removing unreachable block (ram,0x000101c34834) */

void FUN_101c347d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a7c0 != -1) {
    func_0x000107c61568(0x112e0a7c0,0x101c34718);
  }
  uVar5 = uRam0000000113804220;
  uVar4 = uRam0000000113804218;
  uVar3 = uRam0000000113804210;
  uVar2 = uRam0000000113804208;
  uVar1 = uRam0000000113804200;
  *param_1 = uRam00000001138041f8;
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



/* Entry: 101c34874; end: 101c34887;  */

void FUN_101c34874(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0ab38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0ab38,&UNK_10d9e3520);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c34888; end: 101c348bf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c34888(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_101c39d90();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 101c348c0; end: 101c34907;  */

void FUN_101c348c0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e365b,0xc,2);
  uRam0000000113804230 = uStack_38;
  uRam0000000113804228 = uStack_40;
  uRam0000000113804240 = uStack_28;
  uRam0000000113804238 = uStack_30;
  uRam0000000113804250 = uStack_18;
  uRam0000000113804248 = uStack_20;
  return;
}



/* Entry: 101c34908; end: 101c349b7;  */

void FUN_101c34908(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      pcVar4 = *(code **)(param_3 + 0x180);
      (*param_4)();
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c349b8; end: 101c34a5b;  */

void FUN_101c349b8(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,code *param_8,
                  undefined8 param_9)

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
    (*param_8)();
    (*pcVar2)(&lStack_60,1,param_9,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}


