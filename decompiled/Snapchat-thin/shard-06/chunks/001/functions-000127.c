/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10453a3f4; end: 10453a43b;  */

void FUN_10453a3f4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd16520,0x88,2);
  uRam0000000113813d78 = uStack_38;
  uRam0000000113813d70 = uStack_40;
  uRam0000000113813d88 = uStack_28;
  uRam0000000113813d80 = uStack_30;
  uRam0000000113813d98 = uStack_18;
  uRam0000000113813d90 = uStack_20;
  return;
}



/* Entry: 10453a43c; end: 10453a45f;  */

undefined1  [16] FUN_10453a43c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f2079a0;
  auVar1._0_8_ = 0xd00000000000001b;
  return auVar1;
}



/* Entry: 10453a460; end: 10453a48f;  */

undefined1  [16] FUN_10453a460(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 10453a490; end: 10453a4c3;  */

void FUN_10453a490(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 10453a4c4; end: 10453a4db;  */

undefined1  [16] FUN_10453a4c4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x10453a4d4;
  return auVar1;
}



/* Entry: 10453a4dc; end: 10453a513;  */

uint FUN_10453a4dc(long param_1,long param_2)

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
  func_0x00010453b48c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
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



/* Entry: 10453a514; end: 10453a56b;  */

uint FUN_10453a514(undefined8 *param_1)

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
  FUN_10453ade4(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10453a56c; end: 10453a60b;  */

void FUN_10453a56c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113084ab0 != -1) {
    _swift_once(0x113084ab0,FUN_10453a3f4);
  }
  uVar5 = uRam0000000113813d98;
  uVar4 = uRam0000000113813d90;
  uVar3 = uRam0000000113813d88;
  uVar2 = uRam0000000113813d80;
  uVar1 = uRam0000000113813d78;
  *param_1 = uRam0000000113813d70;
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



/* Entry: 10453a60c; end: 10453a647;  */

void FUN_10453a60c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113084b38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113084b38,&UNK_10dd16500);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10453a648; end: 10453a763;  */

void FUN_10453a648(undefined8 param_1,undefined8 param_2)

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
  __ss6HasherV5_seedABSi_tcfC(auStack_d8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_d8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10453a764; end: 10453a803;  */

uint FUN_10453a764(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10453ade4(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10453a804; end: 10453a83b;  */

void FUN_10453a804(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 10453a83c; end: 10453a86b;  */

undefined1  [16] FUN_10453a83c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 10453a86c; end: 10453a89f;  */

void FUN_10453a86c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10453a8a0; end: 10453a8b7;  */

undefined1  [16] FUN_10453a8a0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x10453a8b0;
  return auVar1;
}



/* Entry: 10453a8b8; end: 10453a8ef;  */

uint FUN_10453a8b8(long param_1,long param_2)

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
  FUN_10453b44c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
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



/* Entry: 10453a8f0; end: 10453a9f7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10453a8f0(undefined8 *param_1)

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
  FUN_10453ab9c(uVar18,*param_1);
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



/* Entry: 10453a9f8; end: 10453aa33;  */

void FUN_10453a9f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113084b28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113084b28,&UNK_10dd164f8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 10453aa34; end: 10453ab9b;  */

void FUN_10453aa34(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_90,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_90,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10453ab9c; end: 10453ade3;  */

long * FUN_10453ab9c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_180 [96];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1[2];
  if (lVar4 != param_2[2]) {
    return (long *)0x0;
  }
  if ((lVar4 == 0) || (param_1 == param_2)) {
    return (long *)0x1;
  }
  plVar5 = param_1 + 4;
  param_2 = param_2 + 4;
  while( true ) {
    lVar4 = lVar4 + -1;
    lStack_f8 = plVar5[5];
    lStack_100 = plVar5[4];
    lStack_e8 = plVar5[7];
    lStack_f0 = plVar5[6];
    lStack_d8 = plVar5[9];
    uVar6 = plVar5[8];
    lStack_c8 = plVar5[0xb];
    uStack_d0 = plVar5[10];
    lStack_118 = plVar5[1];
    lStack_120 = *plVar5;
    lStack_108 = plVar5[3];
    lStack_110 = plVar5[2];
    lStack_98 = param_2[5];
    lStack_a0 = param_2[4];
    lStack_88 = param_2[7];
    lStack_90 = param_2[6];
    lStack_78 = param_2[9];
    uStack_80 = param_2[8];
    lStack_68 = param_2[0xb];
    lStack_70 = param_2[10];
    lStack_b8 = param_2[1];
    lStack_c0 = *param_2;
    lStack_a8 = param_2[3];
    lStack_b0 = param_2[2];
    uStack_e0 = uVar6;
    if ((char)lStack_b8 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010453ac3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dd16190)[lStack_c0] * 4 + 0x10453ac40))();
      return param_1;
    }
    if ((((lStack_120 != lStack_c0) || (lStack_110 != lStack_b0)) || (lStack_108 != lStack_a8)) ||
       (lStack_100 != lStack_a0)) {
      return (long *)0x0;
    }
    if ((int)lStack_f8 != (int)lStack_98) {
      return (long *)0x0;
    }
    if (lStack_f0 != lStack_90) {
      return (long *)0x0;
    }
    if (lStack_e8 != lStack_88) {
      return (long *)0x0;
    }
    if (((uVar6 != uStack_80) || (lStack_d8 != lStack_78)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar6 & 1) == 0)) {
      return (long *)0x0;
    }
    lVar3 = lStack_68;
    lVar2 = lStack_70;
    lVar1 = lStack_c8;
    uVar6 = uStack_d0;
    func_0x000100074ff8(&lStack_120,auStack_180);
    func_0x000100074ff8(&lStack_c0,auStack_180);
    func_0x000100e25fcc(uVar6,lVar1,lVar2,lVar3);
    func_0x000100076b30(&lStack_c0);
    param_1 = &lStack_120;
    func_0x000100076b30(param_1);
    if ((uVar6 & 1) == 0) {
      return (long *)0x0;
    }
    if (lVar4 == 0) break;
    plVar5 = plVar5 + 0xc;
    param_2 = param_2 + 0xc;
  }
  return (long *)0x1;
}



/* Entry: 10453ade4; end: 10453af63;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10453ade4(byte *param_1,long *param_2)

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
  
  if ((char)param_2[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010453ae0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dd1619b)[*param_2] * 4 + 0x10453ae10))();
    return param_1;
  }
  if ((((((*(long *)param_1 == *param_2) && (*(long *)(param_1 + 0x10) == param_2[2])) &&
        (*(long *)(param_1 + 0x18) == param_2[3])) &&
       ((*(long *)(param_1 + 0x20) == param_2[4] && (*(int *)(param_1 + 0x28) == (int)param_2[5]))))
      && (*(long *)(param_1 + 0x30) == param_2[6])) && (*(long *)(param_1 + 0x38) == param_2[7])) {
    uVar13 = *(ulong *)(param_1 + 0x40);
    if (((uVar13 == param_2[8]) && (*(long *)(param_1 + 0x48) == param_2[9])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar13,*(long *)(param_1 + 0x48),param_2[8],param_2[9],0), (uVar13 & 1) != 0)) {
      pbVar10 = *(byte **)(param_1 + 0x50);
      pbVar25 = *(byte **)(param_1 + 0x58);
      lVar24 = param_2[10];
      uVar13 = param_2[0xb];
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
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))
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



/* Entry: 10453af64; end: 10453afe3;  */

void FUN_10453af64(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16330;
  _swift_getWitnessTable(&UNK_10dd16330,&UNK_110785f30);
  puRam0000000113084ac0 = puVar1;
  return;
}



/* Entry: 10453afe4; end: 10453afe7;  */

void FUN_10453afe4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113084af0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113084af8;
  func_0x00010002969c(0x113084af8,&UNK_10dd161d0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113084af0 = puVar2;
  return;
}



/* Entry: 10453afe8; end: 10453b037;  */

void FUN_10453afe8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113084af0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113084af8;
  func_0x00010002969c(0x113084af8,&UNK_10dd161d0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113084af0 = puVar2;
  return;
}



/* Entry: 10453b038; end: 10453b04f;  */

void FUN_10453b038(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10453af64();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10006b5fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10453b050; end: 10453b08f;  */

void FUN_10453b050(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16370;
  _swift_getWitnessTable(&UNK_10dd16370,&UNK_110785f30);
  puRam0000000113084b10 = puVar1;
  return;
}



/* Entry: 10453b090; end: 10453b0a7;  */

void FUN_10453b090(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10453afa4)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10006ad8c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10453b0a8; end: 10453b0e7;  */

void FUN_10453b0a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16448;
  _swift_getWitnessTable(&UNK_10dd16448,&UNK_110785fd0);
  puRam0000000113084b20 = puVar1;
  return;
}



/* Entry: 10453b0e8; end: 10453b167;  */

void FUN_10453b0e8(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = param_2 + -1;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 9) = uVar1;
  return;
}



/* Entry: 10453b168; end: 10453b193;  */

long FUN_10453b168(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10453b194; end: 10453b23b;  */

undefined8 * FUN_10453b194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
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



/* Entry: 10453b23c; end: 10453b2d7;  */

undefined8 * FUN_10453b23c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[10];
  uVar1 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 10453b2d8; end: 10453b37f;  */

undefined8 * FUN_10453b2d8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10453b380; end: 10453b3c3;  */

undefined8 * FUN_10453b380(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10453b3c4; end: 10453b44b;  */

int FUN_10453b3c4(ulong *param_1,int param_2)

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



/* Entry: 10453b44c; end: 10453b4cb;  */

void FUN_10453b44c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd163b4;
  _swift_getWitnessTable(&DAT_10dd163b4,&UNK_110785fd0);
  puRam0000000113084b30 = puVar1;
  return;
}



/* Entry: 10453b4cc; end: 10453b4d3;  */

undefined8 * FUN_10453b4cc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10453b4d4; end: 10453b9bf;  */

/* WARNING: Removing unreachable block (ram,0x00010453b6bc) */
/* WARNING: Removing unreachable block (ram,0x00010453b738) */
/* WARNING: Removing unreachable block (ram,0x00010453b740) */

undefined1  [16] FUN_10453b4d4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_150 [40];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_bc;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6c;
  
  iVar3 = (int)&uStack_180;
  lVar12 = *(long *)(param_1 + 0x18);
  func_0x0001000a8868(param_1,lVar12);
  _swift_getDynamicType();
  FUN_104579fe8(&uStack_b0);
  if (unaff_x21 == 0) {
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    uStack_bc = uStack_6c;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    func_0x0001000a8868(param_1,*(undefined8 *)(param_1 + 0x18));
    FUN_104579d34();
    uVar10 = uStack_100;
    if (uStack_f8._1_1_ != '\x01') {
      uVar2 = (undefined1)uStack_f8;
      uVar8 = uStack_100;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar8 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar8) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x0001014d97ac(uVar10,uVar8 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
      *(undefined1 *)(uVar10 + uVar8 + 0x20) = uVar2;
    }
    uVar8 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar10;
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar10 = *(ulong *)(uVar7 + 0x10);
    uVar8 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar10) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014d97ac(uVar8,uVar10 + 1,1,uVar7);
    }
    *(ulong *)(uVar8 + 0x10) = uVar10 + 1;
    *(undefined1 *)(uVar8 + uVar10 + 0x20) = 0x22;
    uStack_100 = uVar8;
    func_0x000104540f24(0x6570797440,0xe500000000000000);
    func_0x000104540d74("\":",2);
    uStack_f8 = CONCAT62(uStack_f8._2_6_,0x2c);
    FUN_1045727d4(param_2,param_3);
    FUN_1045406f8(param_1,auStack_150);
    uVar4 = 0x113084cb8;
    func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
    uVar5 = 0x113084cc0;
    func_0x0001000285a8(0x113084cc0,&UNK_10dd16720);
    _swift_dynamicCast(&uStack_180,auStack_150,uVar4,uVar5,6);
    if (iVar3 == 0) {
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      func_0x00010454073c(&uStack_180,0x113084cc8,&UNK_10dd16728);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      lVar12 = *(long *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar4);
      (**(code **)(lVar12 + 0x48))(&uStack_100,&UNK_110788f20,&PTR_DAT_110788f40,uVar4,lVar12);
    }
    else {
      func_0x000100dba740(&uStack_180,auStack_128);
      func_0x0001000a8868(auStack_128,uStack_110);
      uVar6 = (ulong)(param_4 & 0x1010101);
      uVar4 = uStack_110;
      (**(code **)(lStack_108 + 8))(uVar6,uStack_110,lStack_108);
      uVar10 = uStack_100;
      uVar8 = uStack_100;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = uVar10;
      if ((uVar8 & 1) == 0) {
        uVar7 = 0;
        func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      }
      uVar10 = *(ulong *)(uVar7 + 0x10);
      uVar8 = *(ulong *)(uVar7 + 0x18);
      uVar11 = uVar8 >> 1;
      lVar12 = uVar10 + 1;
      uVar9 = uVar7;
      if (uVar11 <= uVar10) {
        uVar9 = (ulong)(1 < uVar8);
        func_0x0001014d97ac(uVar9,lVar12,1,uVar7);
        uVar8 = *(ulong *)(uVar9 + 0x18);
        uVar11 = uVar8 >> 1;
      }
      *(long *)(uVar9 + 0x10) = lVar12;
      *(undefined1 *)(uVar9 + uVar10 + 0x20) = 0x2c;
      lVar1 = uVar10 + 2;
      uVar10 = uVar9;
      if ((long)uVar11 < lVar1) {
        uVar10 = (ulong)(1 < uVar8);
        func_0x0001014d97ac(uVar10,lVar1,1,uVar9);
      }
      *(long *)(uVar10 + 0x10) = lVar1;
      *(undefined1 *)(uVar10 + lVar12 + 0x20) = 0x22;
      uStack_100 = uVar10;
      func_0x000104540f24(0x65756c6176,0xe500000000000000);
      func_0x000104540d74("\":",2);
      uStack_f8 = CONCAT62(uStack_f8._2_6_,0x2c);
      func_0x000104540f24(uVar6,uVar4);
      func_0x0001000834e4(auStack_128);
    }
    uVar10 = uStack_100;
    uVar8 = uStack_100;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = uVar10;
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
      func_0x0001014d97ac(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    }
    uVar10 = *(ulong *)(uVar7 + 0x10);
    lVar12 = uVar10 + 1;
    uVar8 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar10) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x0001014d97ac(uVar8,lVar12,1,uVar7);
    }
    *(long *)(uVar8 + 0x10) = lVar12;
    unaff_x21 = uVar8 + 0x20;
    *(undefined1 *)(unaff_x21 + uVar10) = 0x7d;
    uStack_f8 = CONCAT62(uStack_f8._2_6_,0x2c);
    uStack_100 = uVar8;
    _swift_bridgeObjectRetain(uVar8);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x21,lVar12);
    _swift_bridgeObjectRelease(uVar8);
    func_0x00010454077c(&uStack_100);
  }
  auVar13._8_8_ = lVar12;
  auVar13._0_8_ = unaff_x21;
  return auVar13;
}



/* Entry: 10453b9c0; end: 10453baaf;  */

undefined1  [16] FUN_10453b9c0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  uVar2 = 0x112d48d68;
  func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
  lVar5 = 0x113084c80;
  _swift_initStaticObject();
  _swift_bridgeObjectRetain(param_1);
  func_0x000103ee3b44();
  uVar4 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = uVar2;
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(uVar2 + 0x10) + 1;
    uVar3 = 0;
    func_0x0001014d97ac(0,lVar5,1,uVar2);
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  lVar1 = uVar2 + 1;
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    lVar5 = lVar1;
    func_0x0001014d97ac(uVar4,lVar1,1,uVar3);
  }
  *(long *)(uVar4 + 0x10) = lVar1;
  *(undefined1 *)(uVar4 + uVar2 + 0x20) = 0x7d;
  uVar2 = uVar4;
  func_0x0001004496cc(uVar4);
  _swift_bridgeObjectRelease(uVar4);
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 10453bab0; end: 10453bfff;  */

/* WARNING: Removing unreachable block (ram,0x00010453bd90) */
/* WARNING: Removing unreachable block (ram,0x00010453be64) */

void FUN_10453bab0(long param_1,long param_2,undefined8 param_3,byte param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  long unaff_x21;
  undefined *puVar12;
  ulong uVar13;
  undefined *apuStack_118 [3];
  long lStack_100;
  undefined *apuStack_f0 [5];
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined *apuStack_98 [3];
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  FUN_1045406f8(param_5,apuStack_f0);
  lVar4 = 0;
  func_0x000104557570();
  _swift_allocObject();
  uVar5 = 0x80;
  _swift_slowAlloc(0x80,0xffffffffffffffff);
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  uStack_b8 = 0;
  bStack_a0 = param_4 & 1;
  lStack_c8 = param_1;
  lStack_c0 = param_2;
  lStack_b0 = lVar4;
  uStack_a8 = param_3;
  uStack_70 = param_3;
  func_0x000104540540(apuStack_f0,apuStack_118);
  if (lStack_100 == 0) {
    ppuStack_78 = &PTR_DAT_110789eb8;
    puStack_80 = &UNK_110789ee0;
    apuStack_98[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    ppuVar6 = (undefined **)0x112d49548;
    ppuVar7 = apuStack_f0;
    func_0x00010454073c(ppuVar7,0x112d49548,&UNK_10d90fde0);
    if (lStack_100 != 0) {
      ppuVar6 = (undefined **)0x112d49548;
      ppuVar7 = apuStack_118;
      func_0x00010454073c(ppuVar7,0x112d49548,&UNK_10d90fde0);
    }
  }
  else {
    func_0x00010454073c(apuStack_f0,0x112d49548,&UNK_10d90fde0);
    ppuVar7 = apuStack_118;
    ppuVar6 = apuStack_98;
    func_0x000100dba740();
  }
  puVar12 = (undefined *)0x5;
  while( true ) {
    uVar13 = lStack_c0 - param_1;
    if (uStack_b8 == uVar13) break;
    uVar9 = uStack_b8;
    if (uStack_b8 < uVar13) {
      uVar9 = uVar13;
    }
    while (*(byte *)(param_1 + uStack_b8) < 0x21 &&
           (1L << ((ulong)*(byte *)(param_1 + uStack_b8) & 0x3f) & 0x100002600U) != 0) {
      if (uVar9 == uStack_b8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10453bdc4);
        (*pcVar3)();
      }
      uStack_b8 = uStack_b8 + 1;
      if (uVar13 == uStack_b8) goto LAB_10453bed4;
    }
    while( true ) {
      if (uVar13 == uStack_b8) {
        puVar12 = (undefined *)0xd;
        goto LAB_10453bd98;
      }
      bVar2 = *(byte *)(param_1 + uStack_b8);
      if (0x22 < bVar2) goto LAB_10453bd98;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
      if (uVar13 <= uStack_b8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10453bdc8);
        (*pcVar3)();
      }
      uStack_b8 = uStack_b8 + 1;
    }
    if (((ulong)bVar2 != 0x22) || (FUN_10457e7d8(), ppuVar6 == (undefined **)0x0)) {
LAB_10453bd98:
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,ppuVar7,0,0);
      *ppuVar7 = (undefined *)0x0;
      ppuVar7[1] = puVar12;
      goto LAB_10453bf74;
    }
    FUN_10457ed38(0x3a);
    if (unaff_x21 != 0) {
      FUN_1045405d0(&lStack_c8);
      _swift_bridgeObjectRelease(ppuVar6);
      return;
    }
    if ((ppuVar7 == (undefined **)0x65756c6176) && (ppuVar6 == (undefined **)0xe500000000000000)) {
      _swift_bridgeObjectRelease(0xe500000000000000);
LAB_10453bde8:
      uVar9 = uVar13;
      if (uStack_b8 == uVar13) goto LAB_10453be4c;
      uVar1 = uVar13;
      if (uVar13 <= uStack_b8) {
        uVar1 = uStack_b8;
      }
      goto LAB_10453be18;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (ppuVar7,ppuVar6,0x65756c6176,0xe500000000000000,0);
    _swift_bridgeObjectRelease();
    if (((ulong)ppuVar7 & 1) != 0) goto LAB_10453bde8;
    if ((param_4 & 1) == 0) goto LAB_10453bf4c;
    uVar9 = uVar13;
    if (uStack_b8 != uVar13) {
      uVar1 = uStack_b8;
      if (uStack_b8 <= uVar13) {
        uVar1 = uVar13;
      }
      do {
        uVar9 = uStack_b8;
        if (0x20 < *(byte *)(param_1 + uStack_b8) ||
            (1L << ((ulong)*(byte *)(param_1 + uStack_b8) & 0x3f) & 0x100002600U) == 0) break;
        if (uVar1 == uStack_b8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10453bfec);
          (*pcVar3)();
        }
        uStack_b8 = uStack_b8 + 1;
        uVar9 = uVar13;
      } while (uVar13 != uStack_b8);
    }
    FUN_10457ee04();
    param_1 = lStack_c8;
    if (lStack_c8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10453bffc);
      (*pcVar3)();
    }
    ppuVar6 = (undefined **)(uStack_b8 - uVar9);
    if (SBORROW8(uStack_b8,uVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10453bff0);
      (*pcVar3)();
    }
    puVar8 = (undefined8 *)(lStack_c8 + uVar9);
    FUN_104596000();
    if (ppuVar6 == (undefined **)0x0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar8,0,0);
      puVar8[1] = 6;
      *puVar8 = 0;
      goto LAB_10453bf74;
    }
    _swift_bridgeObjectRelease(ppuVar6);
    ppuVar7 = (undefined **)0x2c;
    FUN_10457ed38();
  }
LAB_10453bed4:
  if (((param_4 & 1) == 0) && (uVar9 = lStack_c0 - param_1, uVar13 != uVar9)) {
    lVar4 = 0;
    if (uVar13 <= uVar9) {
      lVar4 = uVar9 - uVar13;
    }
    lVar11 = (lStack_c0 - uVar13) - param_1;
    pbVar10 = (byte *)(param_1 + uVar13);
    do {
      uVar13 = uVar13 + 1;
      ppuVar6 = ppuVar7;
      if (0x20 < *pbVar10 || (1L << ((ulong)*pbVar10 & 0x3f) & 0x100002600U) == 0)
      goto LAB_10453bf4c;
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10453bfac);
        (*pcVar3)();
      }
      lVar4 = lVar4 + -1;
      lVar11 = lVar11 + -1;
      pbVar10 = pbVar10 + 1;
      uStack_b8 = uVar13;
    } while (lVar11 != 0);
  }
  FUN_1045405d0(&lStack_c8);
  return;
LAB_10453bf4c:
  FUN_104540604();
  _swift_allocError(&UNK_1107861d8,ppuVar6,0,0);
  *(undefined1 *)ppuVar6 = 1;
LAB_10453bf74:
  _swift_willThrow();
  goto LAB_10453bf80;
  while( true ) {
    if (uVar1 == uStack_b8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10453bff4);
      (*pcVar3)();
    }
    uStack_b8 = uStack_b8 + 1;
    uVar9 = uVar13;
    if (uVar13 == uStack_b8) break;
LAB_10453be18:
    uVar9 = uStack_b8;
    if (0x20 < *(byte *)(param_1 + uStack_b8) ||
        (1L << ((ulong)*(byte *)(param_1 + uStack_b8) & 0x3f) & 0x100002600U) == 0) break;
  }
LAB_10453be4c:
  FUN_10457ee04();
  uVar13 = uStack_b8;
  param_1 = lStack_c8;
  if (lStack_c8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10453c000);
    (*pcVar3)();
  }
  lVar4 = uStack_b8 - uVar9;
  if (SBORROW8(uStack_b8,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10453bff8);
    (*pcVar3)();
  }
  puVar8 = (undefined8 *)(lStack_c8 + uVar9);
  FUN_104596000();
  if (lVar4 != 0) {
    ppuVar7 = (undefined **)param_6[1];
    *param_6 = puVar8;
    param_6[1] = lVar4;
    _swift_bridgeObjectRelease();
    goto LAB_10453bed4;
  }
  FUN_104540590();
  _swift_allocError(&UNK_110788c08,puVar8,0,0);
  puVar8[1] = 6;
  *puVar8 = 0;
  _swift_willThrow();
LAB_10453bf80:
  FUN_1045405d0(&lStack_c8);
  return;
}



/* Entry: 10453c000; end: 10453c543;  */

/* WARNING: Removing unreachable block (ram,0x00010453c4dc) */
/* WARNING: Removing unreachable block (ram,0x00010453c240) */
/* WARNING: Removing unreachable block (ram,0x00010453c410) */
/* WARNING: Removing unreachable block (ram,0x00010453c424) */
/* WARNING: Removing unreachable block (ram,0x00010453c0b4) */
/* WARNING: Removing unreachable block (ram,0x00010453c3b0) */
/* WARNING: Removing unreachable block (ram,0x00010453c428) */
/* WARNING: Removing unreachable block (ram,0x00010453c42c) */

void FUN_10453c000(void)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_157;
  undefined1 uStack_156;
  undefined1 uStack_155;
  undefined1 uStack_154;
  undefined1 uStack_153;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  char cStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b8,0,0);
  FUN_1045404a0(unaff_x20 + 0x20,&lStack_a0);
  if (cStack_78 != '\0') {
    if (cStack_78 == '\x01') {
      func_0x000100dba740(&lStack_a0,&lStack_100);
      puVar11 = puStack_e0;
      puVar4 = puStack_e8;
      plVar9 = &lStack_100;
      func_0x0001000a8868(plVar9,puStack_e8);
      func_0x000100075890(&puStack_128,1,0,puVar4,PTR___s10Foundation4DataVN_110350ae0,puVar11,
                          &PTR_DAT_110789f58,plVar9);
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_d0,0,0);
      puVar4 = *(undefined **)(unaff_x20 + 0x10);
      puVar11 = *(undefined **)(unaff_x20 + 0x18);
      _swift_bridgeObjectRetain(puVar11);
      puVar5 = puVar11;
      FUN_1045613d8();
      puVar10 = puVar5;
      func_0x0001045620bc();
      _swift_bridgeObjectRelease(puVar11);
      _swift_bridgeObjectRelease(puVar5);
      if (puVar4 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(lStack_a0);
        uStack_120 = 0xc000000000000000;
        puVar4 = (undefined *)0x0;
        goto LAB_10453c4f8;
      }
      ppuStack_108 = &PTR_DAT_110789eb8;
      puStack_110 = &UNK_110789ee0;
      puStack_128 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      puVar11 = &DAT_10e813964;
      puVar5 = puVar4;
      _swift_conformsToProtocol();
      puStack_e8 = puVar4;
      puStack_e0 = puVar10;
      if (puVar5 == (undefined *)0x0) {
        lVar8 = lStack_a0;
        FUN_10453b9c0();
        lStack_138 = lVar8;
        puStack_130 = puVar11;
        FUN_1045406f8(&puStack_128,&uStack_160);
        plVar9 = &lStack_100;
        func_0x0001000c5db4(plVar9);
        func_0x00010006c00c(lVar8,puVar11);
        FUN_104580fa0(plVar9,&lStack_138,&uStack_160,uStack_98,uStack_90,puVar4,
                      PTR___s10Foundation4DataVN_110350ae0,puVar10,&PTR_DAT_110789f58);
        _swift_bridgeObjectRelease(lStack_a0);
        func_0x00010006c090(lVar8,puVar11);
      }
      else {
        lStack_138 = 0;
        puStack_130 = (undefined *)0xe000000000000000;
        FUN_10453bab0(lStack_a0 + 0x20,lStack_a0 + 0x20 + *(long *)(lStack_a0 + 0x10),uStack_98,
                      uStack_90,&puStack_128,&lStack_138);
        puVar11 = puStack_130;
        lVar8 = lStack_138;
        FUN_1045406f8(&puStack_128,&uStack_160);
        plVar9 = &lStack_100;
        func_0x0001000c5db4(plVar9);
        _swift_bridgeObjectRetain(puVar11);
        FUN_1045810ec(plVar9,lVar8,puVar11,&uStack_160,uStack_98,uStack_90,puVar4,puVar10);
        _swift_bridgeObjectRelease(puVar11);
        _swift_bridgeObjectRelease(lStack_a0);
      }
      func_0x0001000834e4(&puStack_128);
      puVar11 = puStack_e0;
      puVar4 = puStack_e8;
      plVar9 = &lStack_100;
      func_0x0001000a8868(plVar9,puStack_e8);
      func_0x000100075890(&puStack_128,1,0,puVar4,PTR___s10Foundation4DataVN_110350ae0,puVar11,
                          &PTR_DAT_110789f58,plVar9);
    }
    puVar4 = puStack_128;
    func_0x0001000834e4(&lStack_100);
    goto LAB_10453c4f8;
  }
  puStack_e8 = PTR___s10Foundation4DataVN_110350ae0;
  puStack_e0 = PTR___s10Foundation4DataVAA15ContiguousBytesAAWP_110350ad0;
  uStack_f8 = uStack_98;
  lStack_100 = lStack_a0;
  plVar9 = &lStack_100;
  func_0x0001000a8868();
  lVar8 = *plVar9;
  uVar1 = plVar9[1];
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar13 == 0) {
      uStack_160._0_1_ = (undefined1)lVar8;
      uStack_160._1_1_ = (undefined1)((ulong)lVar8 >> 8);
      uStack_160._2_1_ = (undefined1)((ulong)lVar8 >> 0x10);
      uStack_160._3_1_ = (undefined1)((ulong)lVar8 >> 0x18);
      uStack_160._4_1_ = (undefined1)((ulong)lVar8 >> 0x20);
      uStack_160._5_1_ = (undefined1)((ulong)lVar8 >> 0x28);
      uStack_160._6_1_ = (undefined1)((ulong)lVar8 >> 0x30);
      uStack_160._7_1_ = (undefined1)((ulong)lVar8 >> 0x38);
      uStack_158 = (undefined1)uVar1;
      uStack_157 = (undefined1)(uVar1 >> 8);
      uStack_156 = (undefined1)(uVar1 >> 0x10);
      uStack_155 = (undefined1)(uVar1 >> 0x18);
      uStack_154 = (undefined1)(uVar1 >> 0x20);
      uStack_153 = (undefined1)(uVar1 >> 0x28);
      puVar12 = (undefined8 *)((long)&uStack_160 + (uVar1 >> 0x30 & 0xff));
      plVar9 = &uStack_160;
    }
    else {
      lVar14 = (long)(int)lVar8;
      plVar6 = (long *)((lVar8 >> 0x20) - lVar14);
      if (lVar8 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10453c534);
        (*pcVar3)();
      }
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (plVar9 == (long *)0x0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
        plVar9 = (long *)0x0;
      }
      else {
        plVar7 = plVar9;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar14,(long)plVar7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10453c540);
          (*pcVar3)();
        }
        plVar9 = (long *)((lVar14 - (long)plVar7) + (long)plVar9);
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (plVar9 != (long *)0x0) {
          if ((long)plVar6 <= (long)plVar7) {
            plVar7 = plVar6;
          }
          puVar12 = (undefined8 *)((long)plVar7 + (long)plVar9);
          goto LAB_10453c468;
        }
      }
      puVar12 = (undefined8 *)0x0;
    }
  }
  else if (uVar13 == 2) {
    lVar14 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    plVar6 = plVar9;
    if (plVar9 != (long *)0x0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar14,(long)plVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10453c53c);
        (*pcVar3)();
      }
      plVar9 = (long *)((lVar14 - (long)plVar6) + (long)plVar9);
    }
    plVar7 = (long *)(lVar8 - lVar14);
    if (SBORROW8(lVar8,lVar14)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10453c538);
      (*pcVar3)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (plVar9 == (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      if ((long)plVar7 <= (long)plVar6) {
        plVar6 = plVar7;
      }
      puVar12 = (undefined8 *)((long)plVar6 + (long)plVar9);
    }
  }
  else {
    uStack_158 = 0;
    uStack_157 = 0;
    uStack_156 = 0;
    uStack_155 = 0;
    uStack_154 = 0;
    uStack_153 = 0;
    uStack_160._0_1_ = 0;
    uStack_160._1_1_ = 0;
    uStack_160._2_1_ = 0;
    uStack_160._3_1_ = 0;
    uStack_160._4_1_ = 0;
    uStack_160._5_1_ = 0;
    uStack_160._6_1_ = 0;
    uStack_160._7_1_ = 0;
    plVar9 = &uStack_160;
    puVar12 = &uStack_160;
  }
LAB_10453c468:
  func_0x0001004497b8(&puStack_128,plVar9,puVar12);
  func_0x0001000834e4(&lStack_100);
  puVar4 = puStack_128;
LAB_10453c4f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail(puVar4,uStack_120);
  FUN_1045400a4();
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(puVar4 + 0x28) = 0xc000000000000000;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  puVar4[0x48] = 0;
  puRam0000000113813dd0 = puVar4;
  return;
}



/* Entry: 10453c544; end: 10453c583;  */

void FUN_10453c544(long param_1)

{
  FUN_1045400a4();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0x28) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  lRam0000000113813dd0 = param_1;
  return;
}



/* Entry: 10453c584; end: 10453c757;  */

void FUN_10453c584(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 *puVar4;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  puVar3 = (undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = 0xc000000000000000;
  *puVar3 = 0;
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _swift_beginAccess(puVar4,auStack_70,1,0);
  *puVar4 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  _swift_beginAccess(param_1 + 0x20,auStack_b8,0,0);
  FUN_1045404a0(param_1 + 0x20,auStack_a0);
  _swift_bridgeObjectRetain(uVar2);
  _swift_release(param_1);
  _swift_beginAccess(puVar3,auStack_d0,0x21,0);
  FUN_104540644(auStack_a0,puVar3);
  _swift_endAccess(auStack_d0);
  return;
}



/* Entry: 10453c758; end: 10453ce07;  */

/* WARNING: Removing unreachable block (ram,0x00010453cd48) */

void FUN_10453c758(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  code *pcVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [12];
  uint uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *apuStack_128 [3];
  long lStack_110;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  char cStack_70;
  
  puVar3 = (undefined1 *)0x0;
  uStack_164 = param_4;
  uStack_160 = param_3;
  uStack_158 = param_1;
  uStack_140 = param_2;
  __sSqMa(0,param_5);
  lVar10 = *(long *)(puVar3 + -8);
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_170 + -extraout_x8;
  lStack_150 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_150 + 0x40));
  lVar12 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar11 - extraout_x12_00;
  uStack_148 = param_6;
  func_0x00010453c66c();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_104540604();
    _swift_allocError(&UNK_1107861d8,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
    return;
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_1045404a0(unaff_x20 + 0x20,&puStack_98);
  if (cStack_70 == '\0') {
    puStack_100 = puStack_98;
    uStack_f8 = uStack_90;
    func_0x000104540540(uStack_140,auStack_d8);
    func_0x00010006c00c(puStack_98,uStack_90);
    *(undefined ***)(lVar8 + -0x10) = &PTR_DAT_110789f58;
    FUN_10457fe00(lVar8,&puStack_100,auStack_d8,1,uStack_160,uStack_164 & 1,param_5,
                  PTR___s10Foundation4DataVN_110350ae0,uStack_148);
    lVar10 = lStack_150;
    uVar6 = uStack_158;
    if (unaff_x21 != 0) {
      func_0x00010006c090(puStack_98,uStack_90);
      return;
    }
    (**(code **)(lStack_150 + 8))(uStack_158,param_5);
    func_0x00010006c090(puStack_98,uStack_90);
    (**(code **)(lVar10 + 0x20))(uVar6,lVar8,param_5);
    return;
  }
  if (cStack_70 == '\x01') {
    func_0x000100dba740(&puStack_98,auStack_d8);
    FUN_1045406f8(auStack_d8,&puStack_100);
    uVar6 = 0x113084cb8;
    func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
    puVar4 = puVar13;
    _swift_dynamicCast(puVar13,&puStack_100,uVar6,param_5,6);
    lVar2 = lStack_150;
    if ((int)puVar4 == 0) {
      (**(code **)(lStack_150 + 0x38))(puVar13,1,1,param_5);
      (**(code **)(lVar10 + 8))(puVar13,puVar3);
      func_0x0001000a8868(auStack_d8,lStack_c0);
      uVar6 = 0x112deef08;
      func_0x0001000285a8(0x112deef08,&UNK_10d9bc0a0);
      func_0x000100075890(&puStack_100,1,0,lStack_c0,uVar6,uStack_b8,&PTR_DAT_110789f28);
      if (unaff_x21 == 0) {
        apuStack_128[0] = puStack_100;
        func_0x000104540540(uStack_140,&puStack_100);
        *(undefined ***)(lVar8 + -0x10) = &PTR_DAT_110789f28;
        FUN_10457fe00(lVar12,apuStack_128,&puStack_100,1,100,0,param_5,uVar6,uStack_148);
        lVar8 = lStack_150;
        uVar6 = uStack_158;
        (**(code **)(lStack_150 + 8))(uStack_158,param_5);
        (**(code **)(lVar8 + 0x20))(uVar6,lVar12,param_5);
      }
    }
    else {
      (**(code **)(lStack_150 + 0x38))(puVar13,0,1,param_5);
      uVar6 = uStack_158;
      (**(code **)(lVar2 + 8))(uStack_158,param_5);
      pcVar9 = *(code **)(lVar2 + 0x20);
      (*pcVar9)(lVar11,puVar13,param_5);
      (*pcVar9)(uVar6,lVar11,param_5);
    }
    func_0x0001000834e4(auStack_d8);
    return;
  }
  func_0x000104540540(uStack_140,apuStack_128);
  if (lStack_110 == 0) {
    ppuStack_e0 = &PTR_DAT_110789eb8;
    puStack_e8 = &UNK_110789ee0;
    puStack_100 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x000100dba740(apuStack_128,&puStack_100);
  }
  puVar7 = &DAT_10e813964;
  lVar8 = param_5;
  _swift_conformsToProtocol();
  if (lVar8 == 0) {
    puVar5 = puStack_98;
    FUN_10453b9c0();
    puStack_138 = puVar5;
    puStack_130 = puVar7;
    FUN_1045406f8(&puStack_100,apuStack_128);
    uVar6 = uStack_148;
    uStack_b8 = uStack_148;
    puVar4 = auStack_d8;
    lStack_c0 = param_5;
    func_0x0001000c5db4(puVar4);
    func_0x00010006c00c(puVar5,puVar7);
    FUN_104580fa0(puVar4,&puStack_138,apuStack_128,uStack_90,uStack_88,param_5,
                  PTR___s10Foundation4DataVN_110350ae0,uVar6,&PTR_DAT_110789f58);
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease(puStack_98);
      func_0x00010006c090(puVar5,puVar7);
      goto LAB_10453cd90;
    }
    _swift_bridgeObjectRelease(puStack_98);
    func_0x00010006c090(puVar5,puVar7);
    func_0x0001014b0bdc(auStack_d8);
  }
  else {
    puStack_138 = (undefined *)0x0;
    puStack_130 = (undefined *)0xe000000000000000;
    FUN_10453bab0(puStack_98 + 0x20,puStack_98 + 0x20 + *(long *)(puStack_98 + 0x10),uStack_90,
                  uStack_88,&puStack_100,&puStack_138);
    puVar5 = puStack_130;
    puVar7 = puStack_138;
    if (unaff_x21 == 0) {
      FUN_1045406f8(&puStack_100,apuStack_128);
      uVar6 = uStack_148;
      uStack_b8 = uStack_148;
      puVar4 = auStack_d8;
      lStack_c0 = param_5;
      func_0x0001000c5db4(puVar4);
      _swift_bridgeObjectRetain(puVar5);
      FUN_1045810ec(puVar4,puVar7,puVar5,apuStack_128,uStack_90,uStack_88,param_5,uVar6);
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease(puStack_98);
LAB_10453cd90:
      uVar1 = uStack_158;
      (**(code **)(lStack_150 + 8))(uStack_158,param_5);
      func_0x0001000834e4(&puStack_100);
      uVar6 = 0x113084cb8;
      func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
      _swift_dynamicCast(uVar1,auStack_d8,uVar6,param_5,7);
      return;
    }
    _swift_bridgeObjectRelease(puStack_98);
    _swift_bridgeObjectRelease(puStack_130);
  }
  func_0x0001000834e4(&puStack_100);
  return;
}



/* Entry: 10453ce08; end: 10453d10f;  */

/* WARNING: Removing unreachable block (ram,0x00010453d090) */

void FUN_10453ce08(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_150 [40];
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *apuStack_118 [3];
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  char cStack_70;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_1045404a0(unaff_x20 + 0x20,&puStack_98);
  if ((cStack_70 == '\0') || (cStack_70 == '\x01')) {
    FUN_104540514(&puStack_98);
    return;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_c8,0,0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(uVar1);
  uVar7 = uVar1;
  FUN_1045613d8();
  uVar8 = uVar7;
  func_0x0001045620bc();
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar7);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease();
    FUN_1045404d4();
    _swift_allocError(&UNK_110786978,puStack_98,0,0);
    *puStack_98 = 0;
    _swift_willThrow();
    return;
  }
  ppuStack_f8 = &PTR_DAT_110789eb8;
  puStack_100 = &UNK_110789ee0;
  apuStack_118[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar9 = &DAT_10e813964;
  lVar3 = lVar2;
  _swift_conformsToProtocol();
  if (lVar3 == 0) {
    puVar4 = puStack_98;
    FUN_10453b9c0();
    puStack_128 = puVar4;
    puStack_120 = puVar9;
    FUN_1045406f8(apuStack_118,auStack_150);
    puVar5 = auStack_f0;
    lStack_d8 = lVar2;
    uStack_d0 = uVar8;
    func_0x0001000c5db4(puVar5);
    func_0x00010006c00c(puVar4,puVar9);
    FUN_104580fa0(puVar5,&puStack_128,auStack_150,uStack_90,uStack_88,lVar2,
                  PTR___s10Foundation4DataVN_110350ae0,uVar8,&PTR_DAT_110789f58);
    _swift_bridgeObjectRelease(puStack_98);
    func_0x00010006c090(puVar4,puVar9);
    if (unaff_x21 == 0) goto LAB_10453d0fc;
    func_0x0001014b0bdc(auStack_f0);
  }
  else {
    puStack_128 = (undefined1 *)0x0;
    puStack_120 = (undefined *)0xe000000000000000;
    FUN_10453bab0(puStack_98 + 0x20,puStack_98 + 0x20 + *(long *)(puStack_98 + 0x10),uStack_90,
                  uStack_88,apuStack_118,&puStack_128);
    puVar9 = puStack_120;
    puVar5 = puStack_128;
    if (unaff_x21 == 0) {
      FUN_1045406f8(apuStack_118,auStack_150);
      puVar4 = auStack_f0;
      lStack_d8 = lVar2;
      uStack_d0 = uVar8;
      func_0x0001000c5db4(puVar4);
      _swift_bridgeObjectRetain(puVar9);
      FUN_1045810ec(puVar4,puVar5,puVar9,auStack_150,uStack_90,uStack_88,lVar2,uVar8);
      _swift_bridgeObjectRelease(puVar9);
      _swift_bridgeObjectRelease(puStack_98);
LAB_10453d0fc:
      func_0x0001000834e4(auStack_f0);
      func_0x0001000834e4(apuStack_118);
      return;
    }
    _swift_bridgeObjectRelease(puStack_98);
    _swift_bridgeObjectRelease(puStack_120);
  }
  ppuVar6 = apuStack_118;
  func_0x0001000834e4();
  FUN_1045404d4();
  _swift_allocError(&UNK_110786978,ppuVar6,0,0);
  *(undefined1 *)ppuVar6 = 0;
  _swift_willThrow();
  _swift_errorRelease(unaff_x21);
  return;
}



/* Entry: 10453d110; end: 10453d13b;  */

void FUN_10453d110(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_104540514(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10453d13c; end: 10453d537;  */

/* WARNING: Removing unreachable block (ram,0x00010453d2e0) */
/* WARNING: Removing unreachable block (ram,0x00010453d3cc) */

void FUN_10453d13c(undefined *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined1 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_197;
  undefined6 uStack_196;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
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
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x10) = param_1;
  *(undefined1 **)(unaff_x20 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar8);
  FUN_1045613d8();
  puVar7 = param_2;
  func_0x0001045620bc();
  _swift_bridgeObjectRelease();
  if (param_1 == (undefined *)0x0) {
    FUN_1045407b0();
    _swift_allocError(&UNK_11078a540,param_2,0,0);
    *param_2 = 0;
    _swift_willThrow();
  }
  else {
    FUN_1045a8898();
    if (unaff_x21 == 0) {
      uStack_1a0 = 0;
      FUN_1045407f0(param_3,&uStack_1f8);
      uStack_198 = SUB81(param_2,0);
      uStack_197 = 0;
      puVar4 = param_1;
      _swift_conformsToProtocol(param_1,&DAT_10e8147e0);
      if (puVar4 == (undefined *)0x0) {
        FUN_1045407b0();
        _swift_allocError(&UNK_11078a540,puVar4,0,0);
        *puVar4 = 6;
        _swift_willThrow();
        func_0x00010454082c(&uStack_1f8);
      }
      else {
        (**(code **)(puVar4 + 8))(&uStack_90,param_1,puVar4);
        uStack_178 = uStack_78;
        uStack_180 = uStack_80;
        uStack_188 = uStack_88;
        uStack_190 = uStack_90;
        uStack_168 = uStack_68;
        uStack_170 = uStack_70;
        uStack_118 = uStack_1c0;
        uStack_120 = uStack_1c8;
        uStack_108 = uStack_1b0;
        uStack_110 = uStack_1b8;
        uStack_f8 = uStack_1a0;
        uStack_100 = uStack_1a8;
        uStack_148 = uStack_1f0;
        uStack_150 = uStack_1f8;
        puStack_138 = puStack_1e0;
        uStack_140 = uStack_1e8;
        puStack_130 = puStack_1d8;
        uStack_c8 = uStack_70;
        uStack_d0 = uStack_78;
        uStack_c0 = uStack_68;
        uStack_f0 = CONCAT62(uStack_196,CONCAT11(uStack_197,uStack_198));
        uStack_e8 = uStack_90;
        uStack_d8 = uStack_80;
        uStack_e0 = uStack_88;
        puStack_160 = param_1;
        puStack_b8 = param_1;
        puStack_b0 = puVar7;
        if (param_1 == &UNK_11078ace8) {
          uStack_218 = 0xc000000000000000;
          uStack_220 = 0;
          if (lRam0000000113084b48 != -1) {
            _swift_once(0x113084b48,FUN_10453c544);
          }
          uStack_210 = uRam0000000113813dd0;
          _swift_retain();
          puVar5 = &uStack_150;
          FUN_10456042c();
          uVar2 = uStack_210;
          uVar1 = uStack_218;
          uVar8 = uStack_220;
          puStack_1e0 = &UNK_11078ace8;
          func_0x0001039f7488();
          uStack_1f8 = uVar8;
          uStack_1f0 = uVar1;
          uStack_1e8 = uVar2;
          puStack_1d8 = puVar5;
          func_0x00010006c00c(uVar8,uVar1);
          _swift_retain(uVar2);
          func_0x00010006c090(uVar8,uVar1);
          _swift_release(uVar2);
          uStack_1d0 = 1;
          _swift_beginAccess(unaff_x20 + 0x20,auStack_238,0x21,0);
          FUN_104540644(&uStack_1f8,unaff_x20 + 0x20);
          _swift_endAccess(auStack_238);
        }
        else {
          pcVar9 = *(code **)(puVar7 + 0x10);
          puVar5 = &uStack_220;
          puStack_208 = param_1;
          puStack_200 = puVar7;
          func_0x0001000c5db4(puVar5);
          (*pcVar9)(puVar5,param_1,puVar7);
          puVar3 = puStack_200;
          puVar4 = puStack_208;
          func_0x0001000c6518(&uStack_220,puStack_208);
          (**(code **)(puVar7 + 0x40))(&uStack_150,&UNK_11078a2b0,&PTR_DAT_11078a2d8,puVar4,puVar3);
          FUN_1045406f8(&uStack_220,&uStack_1f8);
          uStack_1d0 = 1;
          _swift_beginAccess(unaff_x20 + 0x20,auStack_238,0x21,0);
          FUN_104540644(&uStack_1f8,unaff_x20 + 0x20);
          _swift_endAccess(auStack_238);
          func_0x0001000834e4(&uStack_220);
        }
        puVar5 = &uStack_150;
        func_0x000104540894();
        uVar6 = (uint)param_3;
        FUN_1045981d0();
        if ((uVar6 & 0xff) != 1) {
          FUN_1045407b0();
          _swift_allocError(&UNK_11078a540,puVar5,0,0);
          *(undefined1 *)puVar5 = 0;
          _swift_willThrow();
        }
        func_0x000104540860(&uStack_150);
      }
    }
  }
  return;
}



/* Entry: 10453d538; end: 10453dc67;  */

/* WARNING: Removing unreachable block (ram,0x00010453d82c) */
/* WARNING: Removing unreachable block (ram,0x00010453d96c) */
/* WARNING: Removing unreachable block (ram,0x00010453d9fc) */
/* WARNING: Removing unreachable block (ram,0x00010453da0c) */
/* WARNING: Removing unreachable block (ram,0x00010453da10) */
/* WARNING: Removing unreachable block (ram,0x00010453d6b8) */

void FUN_10453d538(ulong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  uint uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_158 [40];
  long lStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b0 [24];
  long lStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  char cStack_70;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_b0,0,0);
  FUN_1045404a0(unaff_x20 + 0x20,&lStack_98);
  if (cStack_70 == '\0') {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_158,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar5);
    uVar10 = uVar5;
    FUN_1045613d8();
    uVar8 = uVar10;
    func_0x0001045620bc();
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar10);
    if (lVar3 == 0) {
      uVar10 = *(ulong *)(unaff_x20 + 0x10);
      uVar8 = *(ulong *)(unaff_x20 + 0x18);
      uVar5 = uVar10 & 0xffffffffffff;
      if ((uVar8 & 0x2000000000000000) != 0) {
        uVar5 = uVar8 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        _swift_bridgeObjectRetain(uVar8);
        FUN_1045a23d0(1);
        FUN_104540d74(": ",2);
        FUN_1045a0a64(uVar10,uVar8);
        uVar13 = *param_1;
        uVar5 = uVar13;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = uVar13;
        if ((uVar5 & 1) == 0) {
          uVar10 = 0;
          func_0x0001014d97ac(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
        }
        uVar5 = *(ulong *)(uVar10 + 0x10);
        uVar13 = uVar10;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
          func_0x0001014d97ac(uVar13,uVar5 + 1,1,uVar10);
        }
        *(ulong *)(uVar13 + 0x10) = uVar5 + 1;
        *(undefined1 *)(uVar13 + uVar5 + 0x20) = 10;
        _swift_bridgeObjectRelease(uVar8);
        *param_1 = uVar13;
      }
      uVar2 = (uint)(uStack_90 >> 0x20);
      uVar12 = uVar2 >> 0x1e;
      if (uVar2 >> 0x1e < 2) {
        if (uVar12 == 0) {
          if ((uStack_90 & 0xff000000000000) != 0) {
LAB_10453d84c:
            FUN_1045a23d0(2);
            FUN_104540d74(": ",2);
            FUN_1045a1270(lStack_98,uStack_90);
            uVar8 = *param_1;
            uVar5 = uVar8;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar10 = uVar8;
            if ((uVar5 & 1) == 0) {
              uVar10 = 0;
              func_0x0001014d97ac(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
            }
            uVar5 = *(ulong *)(uVar10 + 0x10);
            uVar8 = uVar10;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
              uVar8 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
              func_0x0001014d97ac(uVar8,uVar5 + 1,1,uVar10);
            }
            *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
            *(undefined1 *)(uVar8 + uVar5 + 0x20) = 10;
            func_0x00010006c090(lStack_98,uStack_90);
            *param_1 = uVar8;
            return;
          }
        }
        else if ((long)(int)lStack_98 != lStack_98 >> 0x20) goto LAB_10453d84c;
      }
      else if ((uVar12 == 2) && (*(long *)(lStack_98 + 0x10) != *(long *)(lStack_98 + 0x18)))
      goto LAB_10453d84c;
      func_0x00010006c090(lStack_98,uStack_90);
      return;
    }
    lStack_c8 = lStack_98;
    uStack_c0 = uStack_90;
    ppuStack_100 = (undefined **)0x0;
    uStack_118 = 0;
    puStack_120 = (undefined *)0x0;
    puStack_108 = (undefined *)0x0;
    uStack_110 = 0;
    puVar4 = auStack_f0;
    lStack_d8 = lVar3;
    uStack_d0 = uVar8;
    func_0x0001000c5db4(puVar4);
    func_0x00010006c00c(lStack_98,uStack_90);
    FUN_10457fe00(puVar4,&lStack_c8,&puStack_120,1,100,0,lVar3,PTR___s10Foundation4DataVN_110350ae0,
                  uVar8,&PTR_DAT_110789f58);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar7);
    FUN_10453ff9c(param_1,puVar4,uVar1,uVar7,lVar3,uVar8);
    func_0x00010006c090(lStack_98,uStack_90);
  }
  else if (cStack_70 == '\x01') {
    func_0x000100dba740(&lStack_98,auStack_f0);
    _swift_beginAccess(unaff_x20 + 0x10,&puStack_120,0,0);
    uVar5 = uStack_d0;
    lVar3 = lStack_d8;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = auStack_f0;
    func_0x0001000a8868(puVar4,lStack_d8);
    _swift_bridgeObjectRetain(uVar7);
    FUN_10453ff9c(param_1,puVar4,uVar1,uVar7,lVar3,uVar5);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,&lStack_c8,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar10 = *(ulong *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar10);
    uVar8 = uVar10;
    FUN_1045613d8();
    uVar13 = uVar8;
    func_0x0001045620bc();
    uVar5 = uVar13;
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar8);
    if (lVar3 == 0) {
      uVar8 = *(ulong *)(unaff_x20 + 0x10);
      uVar13 = *(ulong *)(unaff_x20 + 0x18);
      uVar10 = uVar8 & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar10 = uVar13 >> 0x38 & 0xf;
      }
      if (uVar10 != 0) {
        _swift_bridgeObjectRetain(uVar13);
        FUN_1045a23d0(1);
        FUN_104540d74(": ",2);
        uVar5 = uVar13;
        FUN_1045a0a64(uVar8,uVar13);
        uVar14 = *param_1;
        uVar10 = uVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar8 = uVar14;
        if ((uVar10 & 1) == 0) {
          uVar5 = *(long *)(uVar14 + 0x10) + 1;
          uVar8 = 0;
          func_0x0001014d97ac(0,uVar5,1,uVar14);
        }
        uVar14 = *(ulong *)(uVar8 + 0x10);
        uVar10 = uVar14 + 1;
        uVar9 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar14) {
          uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          uVar5 = uVar10;
          func_0x0001014d97ac(uVar9,uVar10,1,uVar8);
        }
        *(ulong *)(uVar9 + 0x10) = uVar10;
        *(undefined1 *)(uVar9 + uVar14 + 0x20) = 10;
        _swift_bridgeObjectRelease(uVar13);
        *param_1 = uVar9;
      }
      lVar3 = lStack_98;
      FUN_10453b9c0(lStack_98);
      _swift_bridgeObjectRelease(lStack_98);
      _swift_bridgeObjectRetain(param_1[1]);
      func_0x000103ee3b44();
      FUN_104540d74("#json: ",7);
      FUN_1045a1270(lVar3,uVar5);
      FUN_104540d74(&DAT_10f68f57e,1);
      func_0x00010006c090(lVar3,uVar5);
      return;
    }
    ppuStack_100 = &PTR_DAT_110789eb8;
    puStack_108 = &UNK_110789ee0;
    puStack_120 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar11 = &DAT_10e813964;
    lVar6 = lVar3;
    _swift_conformsToProtocol();
    lStack_d8 = lVar3;
    uStack_d0 = uVar13;
    if (lVar6 == 0) {
      lVar6 = lStack_98;
      FUN_10453b9c0();
      lStack_130 = lVar6;
      puStack_128 = puVar11;
      FUN_1045406f8(&puStack_120,auStack_158);
      puVar4 = auStack_f0;
      func_0x0001000c5db4(puVar4);
      func_0x00010006c00c(lVar6,puVar11);
      FUN_104580fa0(puVar4,&lStack_130,auStack_158,uStack_90,uStack_88,lVar3,
                    PTR___s10Foundation4DataVN_110350ae0,uVar13,&PTR_DAT_110789f58);
      _swift_bridgeObjectRelease(lStack_98);
      func_0x00010006c090(lVar6,puVar11);
    }
    else {
      lStack_130 = 0;
      puStack_128 = (undefined *)0xe000000000000000;
      FUN_10453bab0(lStack_98 + 0x20,lStack_98 + 0x20 + *(long *)(lStack_98 + 0x10),uStack_90,
                    uStack_88,&puStack_120,&lStack_130);
      puVar11 = puStack_128;
      lVar6 = lStack_130;
      FUN_1045406f8(&puStack_120,auStack_158);
      puVar4 = auStack_f0;
      func_0x0001000c5db4(puVar4);
      _swift_bridgeObjectRetain(puVar11);
      FUN_1045810ec(puVar4,lVar6,puVar11,auStack_158,uStack_90,uStack_88,lVar3,uVar13);
      _swift_bridgeObjectRelease(puVar11);
      _swift_bridgeObjectRelease(lStack_98);
    }
    func_0x0001000834e4(&puStack_120);
    uVar5 = uStack_d0;
    lVar3 = lStack_d8;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar4 = auStack_f0;
    func_0x0001000a8868(puVar4,lStack_d8);
    _swift_bridgeObjectRetain(uVar7);
    FUN_10453ff9c(param_1,puVar4,uVar1,uVar7,lVar3,uVar5);
  }
  _swift_bridgeObjectRelease(uVar7);
  func_0x0001000834e4(auStack_f0);
  return;
}



/* Entry: 10453dc68; end: 10453df3b;  */

uint FUN_10453dc68(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined1 auStack_d8 [24];
  ulong uStack_c0;
  undefined8 uStack_b8;
  char cStack_98;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  _swift_beginAccess(param_1 + 0x10,&uStack_c0,0x20,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar2 == *(ulong *)(param_1 + 0x10) &&
      *(long *)(unaff_x20 + 0x18) == *(long *)(param_1 + 0x18)) {
    _swift_endAccess(&uStack_c0);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    _swift_endAccess(&uStack_c0);
    uVar7 = 0;
    if ((uVar2 & 1) == 0) goto LAB_10453de9c;
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_d8,0,0);
  FUN_1045404a0(unaff_x20 + 0x20,&uStack_c0);
  if (cStack_98 == '\x01') {
    func_0x000100dba740(&uStack_c0,auStack_90);
    _swift_beginAccess(param_1 + 0x20,auStack_118,0,0);
    FUN_1045404a0(param_1 + 0x20,&uStack_c0);
    if (cStack_98 == '\x01') {
      func_0x000100dba740(&uStack_c0,auStack_100);
      puVar3 = auStack_90;
      func_0x0001000a8868(puVar3,uStack_78);
      _swift_getDynamicType();
      puVar4 = auStack_100;
      func_0x0001000a8868(puVar4,uStack_e8);
      _swift_getDynamicType();
      if (puVar3 == puVar4) {
        func_0x0001000a8868(auStack_90,uStack_78);
        puVar4 = auStack_100;
        (**(code **)(lStack_70 + 0x58))(puVar4,uStack_78,lStack_70);
        uVar7 = (uint)puVar4;
        func_0x0001000834e4(auStack_100);
        func_0x0001000834e4(auStack_90);
        goto LAB_10453de9c;
      }
      func_0x0001000834e4(auStack_100);
    }
    else {
      FUN_104540514(&uStack_c0);
    }
    func_0x0001000834e4(auStack_90);
  }
  else {
    FUN_104540514(&uStack_c0);
  }
  FUN_1045404a0(unaff_x20 + 0x20,&uStack_c0);
  uVar1 = uStack_b8;
  uVar2 = uStack_c0;
  if (cStack_98 == '\0') {
    _swift_beginAccess(param_1 + 0x20,auStack_100,0,0);
    FUN_1045404a0(param_1 + 0x20,&uStack_c0);
    uVar5 = uStack_c0;
    if (cStack_98 != '\0') {
      func_0x00010006c090(uVar2,uVar1);
      goto LAB_10453de0c;
    }
    uVar6 = uVar2;
    func_0x000100e25fcc(uVar2,uVar1,uStack_c0,uStack_b8);
    func_0x00010006c090(uVar2,uVar1);
    func_0x00010006c090(uVar5,uStack_b8);
    if ((uVar6 & 1) == 0) goto LAB_10453de14;
LAB_10453def4:
    uVar7 = 1;
    goto LAB_10453de9c;
  }
LAB_10453de0c:
  FUN_104540514(&uStack_c0);
LAB_10453de14:
  FUN_1045404a0(unaff_x20 + 0x20,&uStack_c0);
  uVar2 = uStack_c0;
  if (cStack_98 == '\x02') {
    _swift_beginAccess(param_1 + 0x20,auStack_90,0,0);
    FUN_1045404a0(param_1 + 0x20,&uStack_c0);
    if (cStack_98 != '\x02') {
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_10453de90;
    }
    uVar5 = uVar2;
    func_0x000102e855cc(uVar2,uStack_c0);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uStack_c0);
    if ((uVar5 & 1) != 0) goto LAB_10453def4;
  }
  else {
LAB_10453de90:
    FUN_104540514(&uStack_c0);
  }
  uVar7 = 0;
LAB_10453de9c:
  return uVar7 & 1;
}



/* Entry: 10453df3c; end: 10453eaef;  */

/* WARNING: Removing unreachable block (ram,0x00010453e9b0) */

undefined1  [16] FUN_10453df3c(uint param_1)

{
  ulong ***pppuVar1;
  ulong uVar2;
  ulong ***pppuVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  ulong ****ppppuVar9;
  ulong ****ppppuVar10;
  ulong ****ppppuVar11;
  ulong uVar12;
  ulong ***pppuVar13;
  ulong uVar14;
  ulong ***pppuVar15;
  ulong uVar16;
  ulong *****unaff_x20;
  long unaff_x21;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong ***pppuStack_130;
  ulong ***pppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  ulong uStack_f8;
  ulong ****ppppuStack_f0;
  ulong ***pppuStack_e8;
  ulong ***pppuStack_d8;
  ulong ***pppuStack_d0;
  ulong ****ppppuStack_c0;
  ulong ***pppuStack_b8;
  undefined1 auStack_b0 [24];
  long lStack_98;
  ulong uStack_90;
  char cStack_70;
  
  _swift_beginAccess(unaff_x20 + 4,auStack_b0,0,0);
  FUN_1045404a0(unaff_x20 + 4,&lStack_98);
  if (cStack_70 == '\0') {
    uVar4 = (uint)(uStack_90 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        if ((uStack_90 & 0xff000000000000) == 0) {
LAB_10453e430:
          _swift_beginAccess(unaff_x20 + 2,&uStack_148,0,0);
          uVar12 = (ulong)unaff_x20[2] & 0xffffffffffff;
          if (((ulong)unaff_x20[3] & 0x2000000000000000) != 0) {
            uVar12 = (ulong)unaff_x20[3] >> 0x38 & 0xf;
          }
          if (uVar12 == 0) {
            func_0x00010006c090(lStack_98,uStack_90);
            unaff_x20 = (ulong *****)0xe200000000000000;
            pppppuVar6 = (ulong *****)0x7d7b;
            goto LAB_10453e930;
          }
        }
      }
      else if ((long)(int)lStack_98 == lStack_98 >> 0x20) goto LAB_10453e430;
    }
    else if ((uVar17 != 2) || (*(long *)(lStack_98 + 0x10) == *(long *)(lStack_98 + 0x18)))
    goto LAB_10453e430;
    pppppuVar6 = unaff_x20 + 2;
    _swift_beginAccess(pppppuVar6,&ppppuStack_f0,0,0);
    pppuStack_d8 = (ulong ***)unaff_x20[2];
    pppuStack_d0 = (ulong ***)unaff_x20[3];
    pppuStack_130 = (ulong ***)0x2f;
    pppuStack_128 = (ulong ***)0xe100000000000000;
    func_0x000100e8b654();
    ppppuVar10 = &pppuStack_130;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (ppppuVar10,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar6,pppppuVar6);
    if (((ulong)ppppuVar10 & 1) == 0) {
      ppppuVar10 = unaff_x20[2];
      ppppuVar9 = unaff_x20[3];
      uVar12 = (ulong)ppppuVar10 & 0xffffffffffff;
      if (((ulong)ppppuVar9 & 0x2000000000000000) != 0) {
        uVar12 = (ulong)ppppuVar9 >> 0x38 & 0xf;
      }
      unaff_x20 = (ulong *****)0x800000010f207a10;
      if (uVar12 == 0) {
        pppppuVar6 = (ulong *****)0x0;
        FUN_104597744();
        _swift_allocObject();
        *(undefined1 *)(pppppuVar6 + 2) = 3;
        pppppuVar6[3] = (ulong ****)0xd000000000000049;
        pppppuVar6[4] = (ulong ****)0x800000010f207b70;
        pppppuVar6[5] = (ulong ****)0xd00000000000001b;
        pppppuVar6[6] = (ulong ****)0x800000010f207b20;
        pppppuVar6[7] = (ulong ****)0xd000000000000025;
        pppppuVar6[8] = (ulong ****)0x800000010f207a10;
        ppppuVar10 = (ulong ****)0x1b2;
      }
      else {
        pppuStack_d8 = (ulong ***)0x0;
        pppuStack_d0 = (ulong ***)0xe000000000000000;
        _swift_bridgeObjectRetain(ppppuVar9);
        __ss11_StringGutsV4growyySiF(0x2f);
        _swift_bridgeObjectRelease(pppuStack_d0);
        pppuStack_d8 = (ulong ***)0xd00000000000002c;
        pppuStack_d0 = (ulong ***)0x800000010f207b40;
        __sSS6appendyySSF(ppppuVar10,ppppuVar9);
        __sSS6appendyySSF(0x2e,0xe100000000000000);
        _swift_bridgeObjectRelease(ppppuVar9);
        pppuVar13 = pppuStack_d0;
        pppuVar3 = pppuStack_d8;
        pppppuVar6 = (ulong *****)0x0;
        FUN_104597744();
        _swift_allocObject();
        *(undefined1 *)(pppppuVar6 + 2) = 3;
        pppppuVar6[3] = (ulong ****)pppuVar3;
        pppppuVar6[4] = (ulong ****)pppuVar13;
        pppppuVar6[5] = (ulong ****)0xd00000000000001b;
        pppppuVar6[6] = (ulong ****)0x800000010f207b20;
        pppppuVar6[7] = (ulong ****)0xd000000000000025;
        pppppuVar6[8] = (ulong ****)0x800000010f207a10;
        ppppuVar10 = (ulong ****)0x1b4;
      }
      pppppuVar6[9] = ppppuVar10;
      pppppuVar8 = pppppuVar6;
      FUN_104540678();
      _swift_allocError(&UNK_110789f98,pppppuVar8,0,0);
      *pppppuVar8 = (ulong ****)pppppuVar6;
LAB_10453e7e4:
      _swift_willThrow();
      func_0x00010006c090(lStack_98,uStack_90);
      goto LAB_10453e930;
    }
    if (uVar17 < 2) {
      if (uVar17 == 0) {
        if ((uStack_90 & 0xff000000000000) != 0) {
LAB_10453e5d0:
          pppppuVar6 = (ulong *****)unaff_x20[2];
          ppppuVar10 = unaff_x20[3];
          _swift_bridgeObjectRetain(ppppuVar10);
          ppppuVar9 = ppppuVar10;
          FUN_1045613d8();
          ppppuVar11 = ppppuVar9;
          func_0x0001045620bc();
          _swift_bridgeObjectRelease(ppppuVar10);
          _swift_bridgeObjectRelease();
          if (pppppuVar6 != (ulong *****)0x0) {
            lStack_100 = lStack_98;
            uStack_f8 = uStack_90;
            uStack_110 = 0;
            pppuStack_128 = (ulong ***)0x0;
            pppuStack_130 = (ulong ***)0x0;
            uStack_118 = 0;
            uStack_120 = 0;
            ppppuVar10 = &pppuStack_d8;
            ppppuStack_c0 = (ulong ****)pppppuVar6;
            pppuStack_b8 = (ulong ***)ppppuVar11;
            func_0x0001000c5db4(ppppuVar10);
            func_0x00010006c00c(lStack_98,uStack_90);
            FUN_10457fe00(ppppuVar10,&lStack_100,&pppuStack_130,1,100,0,pppppuVar6,
                          PTR___s10Foundation4DataVN_110350ae0,ppppuVar11,&PTR_DAT_110789f58);
            if (unaff_x21 == 0) {
              pppppuVar8 = (ulong *****)unaff_x20[2];
              ppppuVar10 = unaff_x20[3];
              _swift_bridgeObjectRetain(ppppuVar10);
              pppppuVar6 = (ulong *****)&pppuStack_d8;
              FUN_10453b4d4(pppppuVar6,pppppuVar8,ppppuVar10,param_1 & 0x1010101);
              func_0x00010006c090(lStack_98,uStack_90);
              _swift_bridgeObjectRelease(ppppuVar10);
              func_0x0001000834e4(&pppuStack_d8);
              unaff_x20 = pppppuVar8;
            }
            else {
              func_0x00010006c090(lStack_98,uStack_90);
              func_0x0001014b0bdc(&pppuStack_d8);
            }
            goto LAB_10453e930;
          }
          func_0x0001045406b8();
          _swift_allocError(&UNK_110788dc0,ppppuVar9,0,0);
          *(undefined1 *)ppppuVar9 = 0;
          goto LAB_10453e7e4;
        }
      }
      else if ((long)(int)lStack_98 != lStack_98 >> 0x20) goto LAB_10453e5d0;
    }
    else if ((uVar17 == 2) && (*(long *)(lStack_98 + 0x10) != *(long *)(lStack_98 + 0x18)))
    goto LAB_10453e5d0;
    ppppuVar10 = (ulong ****)0x0;
    func_0x0001014d97ac(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    pppuVar3 = ppppuVar10[2];
    pppuVar13 = ppppuVar10[3];
    pppuVar15 = (ulong ***)((ulong)pppuVar13 >> 1);
    if (pppuVar15 <= pppuVar3) {
      ppppuVar10 = (ulong ****)(ulong)((ulong ***)0x1 < pppuVar13);
      func_0x0001014d97ac(ppppuVar10,(ulong ***)((long)pppuVar3 + 1U),1);
      pppuVar13 = ppppuVar10[3];
      pppuVar15 = (ulong ***)((ulong)pppuVar13 >> 1);
    }
    ppppuVar10[2] = (ulong ***)((long)pppuVar3 + 1U);
    *(undefined1 *)((long)ppppuVar10 + (long)(pppuVar3 + 4)) = 0x7b;
    pppuStack_d0._0_2_ = 0x100;
    pppuVar1 = (ulong ***)((long)pppuVar3 + 2);
    if ((long)pppuVar15 < (long)pppuVar1) {
      ppppuVar10 = (ulong ****)(ulong)((ulong ***)0x1 < pppuVar13);
      func_0x0001014d97ac(ppppuVar10,pppuVar1,1);
    }
    ppppuVar10[2] = pppuVar1;
    *(undefined1 *)((long)ppppuVar10 + (long)pppuVar3 + 0x21U) = 0x22;
    pppuStack_d8 = (ulong ***)ppppuVar10;
    func_0x000104540f24(0x6570797440,0xe500000000000000);
    func_0x000104540d74("\":",2);
    pppuStack_d0 = (ulong ***)CONCAT62(pppuStack_d0._2_6_,0x2c);
    ppppuVar10 = unaff_x20[2];
    ppppuVar9 = unaff_x20[3];
    _swift_bridgeObjectRetain(ppppuVar9);
    FUN_1045727d4(ppppuVar10,ppppuVar9);
    _swift_bridgeObjectRelease(ppppuVar9);
    pppuVar3 = pppuStack_d8;
    ppppuVar10 = (ulong ****)pppuStack_d8;
    _swift_isUniquelyReferenced_nonNull_native();
    ppppuVar9 = (ulong ****)pppuVar3;
    if (((ulong)ppppuVar10 & 1) == 0) {
      ppppuVar9 = (ulong ****)0x0;
      func_0x0001014d97ac(0,(long)pppuVar3[2] + 1,1,pppuVar3);
    }
    pppuVar3 = ppppuVar9[2];
    unaff_x20 = (ulong *****)((long)pppuVar3 + 1);
    ppppuVar10 = ppppuVar9;
    if ((ulong ***)((ulong)ppppuVar9[3] >> 1) <= pppuVar3) {
      ppppuVar10 = (ulong ****)(ulong)((ulong ***)0x1 < ppppuVar9[3]);
      func_0x0001014d97ac(ppppuVar10,unaff_x20,1,ppppuVar9);
    }
    ppppuVar10[2] = (ulong ***)unaff_x20;
    pppppuVar6 = (ulong *****)(ppppuVar10 + 4);
    *(undefined1 *)((long)pppppuVar6 + (long)pppuVar3) = 0x7d;
    _swift_bridgeObjectRetain(ppppuVar10);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(pppppuVar6,unaff_x20);
    func_0x00010006c090(lStack_98,uStack_90);
  }
  else {
    if (cStack_70 == '\x01') {
      func_0x000100dba740(&lStack_98,&pppuStack_d8);
      pppppuVar8 = unaff_x20 + 2;
      _swift_beginAccess(pppppuVar8,&pppuStack_130,0,0);
      pppppuVar7 = (ulong *****)unaff_x20[2];
      ppppuVar10 = unaff_x20[3];
      uVar12 = (ulong)ppppuVar10 & 0x2000000000000000;
      uVar14 = (ulong)pppppuVar7 & 0xffffffffffff;
      uVar16 = (ulong)ppppuVar10 >> 0x38 & 0xf;
      uVar2 = uVar14;
      if (uVar12 != 0) {
        uVar2 = uVar16;
      }
      pppppuVar6 = unaff_x20;
      if (uVar2 != 0) {
        uStack_148 = 0x2f;
        uStack_140 = 0xe100000000000000;
        ppppuStack_f0 = (ulong ****)pppppuVar7;
        pppuStack_e8 = (ulong ***)ppppuVar10;
        func_0x000100e8b654();
        puVar5 = &uStack_148;
        pppppuVar6 = &ppppuStack_f0;
        __sSy10FoundationE8containsySbqd__SyRd__lF
                  (puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar8,pppppuVar8);
        pppppuVar7 = (ulong *****)unaff_x20[2];
        ppppuVar10 = unaff_x20[3];
        if (((ulong)puVar5 & 1) == 0) {
          ppppuStack_f0 = (ulong ****)0x0;
          pppuStack_e8 = (ulong ***)0xe000000000000000;
          _swift_bridgeObjectRetain(ppppuVar10);
          __ss11_StringGutsV4growyySiF(0x2f);
          _swift_bridgeObjectRelease(pppuStack_e8);
          ppppuStack_f0 = (ulong ****)0xd00000000000002c;
          pppuStack_e8 = (ulong ***)0x800000010f207b40;
          __sSS6appendyySSF(pppppuVar7,ppppuVar10);
          __sSS6appendyySSF(0x2e,0xe100000000000000);
          _swift_bridgeObjectRelease(ppppuVar10);
          pppuVar3 = pppuStack_e8;
          ppppuVar10 = ppppuStack_f0;
          pppppuVar6 = (ulong *****)0x0;
          FUN_104597744();
          _swift_allocObject();
          *(undefined1 *)(pppppuVar6 + 2) = 3;
          pppppuVar6[3] = ppppuVar10;
          pppppuVar6[4] = (ulong ****)pppuVar3;
          pppppuVar6[5] = (ulong ****)0xd00000000000001b;
          pppppuVar6[6] = (ulong ****)0x800000010f207b20;
          pppppuVar6[7] = (ulong ****)0xd000000000000025;
          pppppuVar6[8] = (ulong ****)0x800000010f207a10;
          pppppuVar6[9] = (ulong ****)0x1cd;
          pppppuVar8 = pppppuVar6;
          FUN_104540678();
          _swift_allocError(&UNK_110789f98,pppppuVar8,0,0);
          *pppppuVar8 = (ulong ****)pppppuVar6;
          _swift_willThrow();
          unaff_x20 = (ulong *****)0x800000010f207b20;
          func_0x0001000834e4(&pppuStack_d8);
          goto LAB_10453e930;
        }
        uVar12 = (ulong)ppppuVar10 & 0x2000000000000000;
        uVar14 = (ulong)pppppuVar7 & 0xffffffffffff;
        uVar16 = (ulong)ppppuVar10 >> 0x38 & 0xf;
      }
      if (uVar12 != 0) {
        uVar14 = uVar16;
      }
      if (uVar14 == 0) {
        pppppuVar7 = (ulong *****)&pppuStack_d8;
        func_0x0001000a8868(pppppuVar7,ppppuStack_c0);
        ppppuVar10 = (ulong ****)0xd000000000000013;
        FUN_104561f60();
        pppppuVar6 = (ulong *****)ppppuStack_c0;
      }
      else {
        _swift_bridgeObjectRetain(ppppuVar10);
      }
      pppppuVar8 = (ulong *****)&pppuStack_d8;
      FUN_10453b4d4(pppppuVar8,pppppuVar7,ppppuVar10,param_1 & 0x1010101);
      if (unaff_x21 == 0) {
        func_0x0001000834e4(&pppuStack_d8);
        _swift_bridgeObjectRelease(ppppuVar10);
        pppppuVar6 = pppppuVar8;
        unaff_x20 = pppppuVar7;
      }
      else {
        func_0x0001000834e4(&pppuStack_d8);
        _swift_bridgeObjectRelease(ppppuVar10);
      }
      goto LAB_10453e930;
    }
    pppppuVar6 = unaff_x20 + 2;
    _swift_beginAccess(pppppuVar6,&pppuStack_d8,0,0);
    pppuStack_130 = (ulong ***)unaff_x20[2];
    pppuStack_128 = (ulong ***)unaff_x20[3];
    ppppuStack_f0 = (ulong ****)0x2f;
    pppuStack_e8 = (ulong ***)0xe100000000000000;
    func_0x000100e8b654();
    pppppuVar8 = &ppppuStack_f0;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (pppppuVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,pppppuVar6,pppppuVar6);
    if (((ulong)pppppuVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(lStack_98);
      ppppuVar10 = unaff_x20[2];
      ppppuVar9 = unaff_x20[3];
      uVar12 = (ulong)ppppuVar10 & 0xffffffffffff;
      if (((ulong)ppppuVar9 & 0x2000000000000000) != 0) {
        uVar12 = (ulong)ppppuVar9 >> 0x38 & 0xf;
      }
      unaff_x20 = (ulong *****)0x800000010f207a10;
      if (uVar12 == 0) {
        pppppuVar6 = (ulong *****)0x0;
        FUN_104597744();
        _swift_allocObject();
        *(undefined1 *)(pppppuVar6 + 2) = 3;
        pppppuVar6[3] = (ulong ****)0xd000000000000049;
        pppppuVar6[4] = (ulong ****)0x800000010f207b70;
        pppppuVar6[5] = (ulong ****)0xd00000000000001b;
        pppppuVar6[6] = (ulong ****)0x800000010f207b20;
        pppppuVar6[7] = (ulong ****)0xd000000000000025;
        pppppuVar6[8] = (ulong ****)0x800000010f207a10;
        ppppuVar10 = (ulong ****)0x1d6;
      }
      else {
        pppuStack_130 = (ulong ***)0x0;
        pppuStack_128 = (ulong ***)0xe000000000000000;
        _swift_bridgeObjectRetain(ppppuVar9);
        __ss11_StringGutsV4growyySiF(0x2f);
        _swift_bridgeObjectRelease(pppuStack_128);
        pppuStack_130 = (ulong ***)0xd00000000000002c;
        pppuStack_128 = (ulong ***)0x800000010f207b40;
        __sSS6appendyySSF(ppppuVar10,ppppuVar9);
        __sSS6appendyySSF(0x2e,0xe100000000000000);
        _swift_bridgeObjectRelease(ppppuVar9);
        pppuVar13 = pppuStack_128;
        pppuVar3 = pppuStack_130;
        pppppuVar6 = (ulong *****)0x0;
        FUN_104597744();
        _swift_allocObject();
        *(undefined1 *)(pppppuVar6 + 2) = 3;
        pppppuVar6[3] = (ulong ****)pppuVar3;
        pppppuVar6[4] = (ulong ****)pppuVar13;
        pppppuVar6[5] = (ulong ****)0xd00000000000001b;
        pppppuVar6[6] = (ulong ****)0x800000010f207b20;
        pppppuVar6[7] = (ulong ****)0xd000000000000025;
        pppppuVar6[8] = (ulong ****)0x800000010f207a10;
        ppppuVar10 = (ulong ****)0x1d8;
      }
      pppppuVar6[9] = ppppuVar10;
      pppppuVar8 = pppppuVar6;
      FUN_104540678();
      _swift_allocError(&UNK_110789f98,pppppuVar8,0,0);
      *pppppuVar8 = (ulong ****)pppppuVar6;
      _swift_willThrow();
      goto LAB_10453e930;
    }
    ppppuVar10 = (ulong ****)0x0;
    func_0x0001014d97ac(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    pppuVar3 = ppppuVar10[2];
    pppuVar13 = ppppuVar10[3];
    pppuVar15 = (ulong ***)((ulong)pppuVar13 >> 1);
    if (pppuVar15 <= pppuVar3) {
      ppppuVar10 = (ulong ****)(ulong)((ulong ***)0x1 < pppuVar13);
      func_0x0001014d97ac(ppppuVar10,(ulong ***)((long)pppuVar3 + 1U),1);
      pppuVar13 = ppppuVar10[3];
      pppuVar15 = (ulong ***)((ulong)pppuVar13 >> 1);
    }
    ppppuVar10[2] = (ulong ***)((long)pppuVar3 + 1U);
    *(undefined1 *)((long)ppppuVar10 + (long)(pppuVar3 + 4)) = 0x7b;
    pppuStack_128._0_2_ = 0x100;
    pppuVar1 = (ulong ***)((long)pppuVar3 + 2);
    if ((long)pppuVar15 < (long)pppuVar1) {
      ppppuVar10 = (ulong ****)(ulong)((ulong ***)0x1 < pppuVar13);
      func_0x0001014d97ac(ppppuVar10,pppuVar1,1);
    }
    ppppuVar10[2] = pppuVar1;
    *(undefined1 *)((long)ppppuVar10 + (long)pppuVar3 + 0x21U) = 0x22;
    pppuStack_130 = (ulong ***)ppppuVar10;
    func_0x000104540f24(0x6570797440,0xe500000000000000);
    func_0x000104540d74("\":",2);
    pppuStack_128 = (ulong ***)CONCAT62(pppuStack_128._2_6_,0x2c);
    ppppuVar10 = unaff_x20[2];
    ppppuVar9 = unaff_x20[3];
    _swift_bridgeObjectRetain(ppppuVar9);
    FUN_1045727d4(ppppuVar10,ppppuVar9);
    _swift_bridgeObjectRelease(ppppuVar9);
    if (*(long *)(lStack_98 + 0x10) == 0) {
      _swift_bridgeObjectRelease(lStack_98);
    }
    else {
      func_0x000104540d74(&DAT_10f68e8ee,1);
      func_0x000103ee3b44(lStack_98);
    }
    pppuVar3 = pppuStack_130;
    ppppuVar10 = (ulong ****)pppuStack_130;
    _swift_isUniquelyReferenced_nonNull_native();
    ppppuVar9 = (ulong ****)pppuVar3;
    if (((ulong)ppppuVar10 & 1) == 0) {
      ppppuVar9 = (ulong ****)0x0;
      func_0x0001014d97ac(0,(long)pppuVar3[2] + 1,1,pppuVar3);
    }
    pppuVar3 = ppppuVar9[2];
    unaff_x20 = (ulong *****)((long)pppuVar3 + 1);
    ppppuVar10 = ppppuVar9;
    if ((ulong ***)((ulong)ppppuVar9[3] >> 1) <= pppuVar3) {
      ppppuVar10 = (ulong ****)(ulong)((ulong ***)0x1 < ppppuVar9[3]);
      func_0x0001014d97ac(ppppuVar10,unaff_x20,1,ppppuVar9);
    }
    ppppuVar10[2] = (ulong ***)unaff_x20;
    pppppuVar6 = (ulong *****)(ppppuVar10 + 4);
    *(undefined1 *)((long)pppppuVar6 + (long)pppuVar3) = 0x7d;
    _swift_bridgeObjectRetain(ppppuVar10);
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(pppppuVar6,unaff_x20);
  }
  _swift_bridgeObjectRelease_n(ppppuVar10,2);
LAB_10453e930:
  auVar18._8_8_ = unaff_x20;
  auVar18._0_8_ = pppppuVar6;
  return auVar18;
}



/* Entry: 10453eaf0; end: 10453f1d7;  */

/* WARNING: Removing unreachable block (ram,0x00010453f078) */
/* WARNING: Removing unreachable block (ram,0x00010453ef00) */
/* WARNING: Removing unreachable block (ram,0x00010453eed4) */
/* WARNING: Removing unreachable block (ram,0x00010453eee8) */

void FUN_10453eaf0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_88;
  undefined1 auStack_78 [24];
  undefined *puStack_58;
  
  puVar7 = (undefined8 *)0x7b;
  FUN_10457ed38();
  if (unaff_x21 == 0) {
    lVar15 = param_1[0xb] + -1;
    if (SBORROW8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10453f174);
      (*pcVar6)();
    }
    param_1[0xb] = lVar15;
    if (lVar15 < 0) {
      FUN_104540590();
      _swift_allocError(&UNK_110788c08,puVar7,0,0);
      puVar7[1] = 0x13;
      *puVar7 = 0;
      _swift_willThrow();
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
      _swift_bridgeObjectRelease(uVar8);
      puStack_a8 = (undefined *)0xc000000000000000;
      puStack_b0 = (undefined *)0x0;
      uStack_88 = 0;
      _swift_beginAccess(unaff_x20 + 0x20,&uStack_c8,0x21,0);
      puVar10 = (undefined *)(unaff_x20 + 0x20);
      FUN_104540644(&puStack_b0);
      puVar7 = &uStack_c8;
      _swift_endAccess();
      FUN_10457b120();
      puVar5 = PTR___sSSN_11034da80;
      if (((ulong)puVar7 & 1) == 0) {
        uVar4 = 0;
        puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
        bVar3 = true;
        do {
          FUN_10457b090();
          puVar11 = puVar10;
          FUN_10457ed38(0x3a);
          if (((puVar7 == (undefined8 *)0x6570797440) &&
              (puVar10 == (undefined *)0xe500000000000000)) ||
             (puVar9 = puVar7, puVar11 = puVar10,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (puVar7,puVar10,0x6570797440,0xe500000000000000,0), ((ulong)puVar9 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease();
            FUN_10457b090();
            uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
            *(undefined **)(unaff_x20 + 0x10) = puVar10;
            *(undefined **)(unaff_x20 + 0x18) = puVar11;
            _swift_bridgeObjectRetain(puVar11);
            _swift_bridgeObjectRelease(uVar8);
            uStack_c8 = 0x2f;
            uStack_c0 = 0xe100000000000000;
            puStack_b0 = puVar10;
            puStack_a8 = puVar11;
            func_0x000100e8b654();
            puVar7 = &uStack_c8;
            puVar10 = puVar5;
            __sSy10FoundationE8containsySbqd__SyRd__lF(puVar7,puVar5,puVar5,uVar8,uVar8);
            _swift_bridgeObjectRelease(puVar11);
            if (((ulong)puVar7 & 1) == 0) {
              uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
              uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
              puStack_b0 = (undefined *)0x0;
              puStack_a8 = (undefined *)0xe000000000000000;
              _swift_bridgeObjectRetain(uVar2);
              __ss11_StringGutsV4growyySiF(0x2c);
              _swift_bridgeObjectRelease(puStack_a8);
              puStack_b0 = (undefined *)0xd000000000000029;
              puStack_a8 = (undefined *)0x800000010f207af0;
              __sSS6appendyySSF(uVar8,uVar2);
              __sSS6appendyySSF(0x2e,0xe100000000000000);
              _swift_bridgeObjectRelease(uVar2);
              puVar5 = puStack_a8;
              puVar10 = puStack_b0;
              plVar13 = (long *)0x0;
              FUN_104597744();
              _swift_allocObject();
              *(undefined1 *)(plVar13 + 2) = 2;
              plVar13[3] = (long)puVar10;
              plVar13[4] = (long)puVar5;
              plVar13[5] = -0x2fffffffffffffef;
              plVar13[6] = -0x7ffffffef0df8610;
              plVar13[7] = -0x2fffffffffffffdb;
              plVar13[8] = -0x7ffffffef0df85f0;
              lVar15 = 0x1ff;
              goto LAB_10453f130;
            }
          }
          else {
            if (!bVar3) {
              puVar11 = puStack_58;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar12 = puStack_58;
              if (((ulong)puVar11 & 1) == 0) {
                puVar12 = (undefined *)0x0;
                func_0x0001014d97ac(0,*(long *)(puStack_58 + 0x10) + 1,1,puStack_58);
              }
              uVar1 = *(ulong *)(puVar12 + 0x10);
              puStack_58 = puVar12;
              if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
                puStack_58 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
                func_0x0001014d97ac(puStack_58,uVar1 + 1,1,puVar12);
              }
              *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
              puStack_58[uVar1 + 0x20] = uVar4;
            }
            puVar11 = puStack_58;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar12 = puStack_58;
            if (((ulong)puVar11 & 1) == 0) {
              puVar12 = (undefined *)0x0;
              func_0x0001014d97ac(0,*(long *)(puStack_58 + 0x10) + 1,1,puStack_58);
            }
            uVar1 = *(ulong *)(puVar12 + 0x10);
            puStack_58 = puVar12;
            if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
              puStack_58 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
              func_0x0001014d97ac(puStack_58,uVar1 + 1,1,puVar12);
            }
            *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
            puStack_58[uVar1 + 0x20] = 0x22;
            _swift_bridgeObjectRetain(puVar10);
            func_0x000104540f24(puVar7,puVar10);
            func_0x000104540d74("\":",2);
            _swift_bridgeObjectRelease(puVar10);
            FUN_10457e0a0();
            lVar15 = param_1[2];
            FUN_10457ee04();
            if (*param_1 == 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10453f184);
              (*pcVar6)();
            }
            puVar10 = (undefined *)(param_1[2] - lVar15);
            if (SBORROW8(param_1[2],lVar15)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10453f178);
              (*pcVar6)();
            }
            puVar7 = (undefined8 *)(*param_1 + lVar15);
            FUN_104596000();
            if (puVar10 == (undefined *)0x0) {
              FUN_104540590();
              _swift_allocError(&UNK_110788c08,puVar7,0,0);
              puVar7[1] = 6;
              *puVar7 = 0;
              _swift_willThrow();
              _swift_bridgeObjectRelease(puStack_58);
              return;
            }
            func_0x000104540f24();
            bVar3 = false;
            uVar4 = 0x2c;
          }
          FUN_10457e0a0();
          uVar1 = param_1[2];
          lVar15 = *param_1;
          if (lVar15 == 0) {
            if (uVar1 != 0) goto LAB_10453ec38;
          }
          else if (uVar1 != param_1[1] - lVar15) {
LAB_10453ec38:
            if (*(char *)(lVar15 + uVar1) == '}') {
              if ((lVar15 == 0) || ((ulong)(param_1[1] - lVar15) <= uVar1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10453f17c);
                (*pcVar6)();
              }
              param_1[2] = uVar1 + 1;
              lVar15 = param_1[0xb] + 1;
              if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10453f180);
                (*pcVar6)();
              }
              param_1[0xb] = lVar15;
              if (param_1[4] < lVar15) {
                __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                          ("Fatal error",0xb,2,0xd000000000000039,0x800000010f207ab0,
                           "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10453f1d8);
                (*pcVar6)();
              }
              uVar1 = *(ulong *)(unaff_x20 + 0x10) & 0xffffffffffff;
              if ((*(ulong *)(unaff_x20 + 0x18) & 0x2000000000000000) != 0) {
                uVar1 = *(ulong *)(unaff_x20 + 0x18) >> 0x38 & 0xf;
              }
              if (uVar1 != 0) {
                uStack_a0 = (undefined1)param_1[5];
                puStack_b0 = puStack_58;
                uStack_88 = 2;
                puStack_a8 = (undefined *)lVar15;
                _swift_beginAccess(unaff_x20 + 0x20,&uStack_c8,0x21,0);
                _swift_bridgeObjectRetain(puStack_58);
                FUN_104540644(&puStack_b0,unaff_x20 + 0x20);
                _swift_endAccess(&uStack_c8);
                _swift_bridgeObjectRelease(puStack_58);
                return;
              }
              plVar13 = (long *)0x0;
              FUN_104597744();
              _swift_allocObject();
              *(undefined1 *)(plVar13 + 2) = 2;
              plVar13[3] = -0x2fffffffffffffb2;
              plVar13[4] = -0x7ffffffef0df85c0;
              plVar13[5] = -0x2fffffffffffffef;
              plVar13[6] = -0x7ffffffef0df8610;
              plVar13[7] = -0x2fffffffffffffdb;
              plVar13[8] = -0x7ffffffef0df85f0;
              lVar15 = 0x208;
LAB_10453f130:
              plVar13[9] = lVar15;
              plVar14 = plVar13;
              FUN_104540678();
              _swift_allocError(&UNK_110789f98,plVar14,0,0);
              *plVar14 = (long)plVar13;
              _swift_willThrow();
              _swift_bridgeObjectRelease(puStack_58);
              return;
            }
          }
          puVar7 = (undefined8 *)0x2c;
          FUN_10457ed38();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 10453f1d8; end: 10453f22b;  */

void FUN_10453f1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_2,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
                    /* WARNING: Could not recover jumptable at 0x00010453f228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 10453f22c; end: 10453f29f;  */

undefined8 FUN_10453f22c(void)

{
  return 100;
}



/* Entry: 10453f2a0; end: 10453f2cf;  */

void FUN_10453f2a0(void)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 10453f2d0; end: 10453f737;  */

undefined * FUN_10453f2d0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    uVar10 = 0;
    func_0x0001000285a8(0x1130874f8);
    puVar8 = puVar13;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar14 = (undefined8 *)(puVar6 + 0x28);
    do {
      uVar1 = puVar14[-1];
      uVar3 = *puVar14;
      uVar15 = puVar14[1];
      uVar5 = *(undefined1 *)(puVar14 + 2);
      uVar2 = puVar14[3];
      uVar4 = puVar14[4];
      uVar9 = uVar1;
      func_0x00010035a314();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10460d76c);
        (*pcVar7)();
      }
      uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar11 + 0x40) = *(ulong *)(puVar8 + uVar11 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      *(ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 8) = uVar1;
      puVar12 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x28);
      *puVar12 = uVar3;
      puVar12[1] = uVar15;
      *(undefined1 *)(puVar12 + 2) = uVar5;
      puVar12[3] = uVar2;
      puVar12[4] = uVar4;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10460d770);
        (*pcVar7)();
      }
      puVar14 = puVar14 + 6;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
  }
  return puVar8;
}



/* Entry: 10453f738; end: 10453f757;  */

void FUN_10453f738(void)

{
  FUN_1045f8de0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 10453f758; end: 10453f8fb;  */

undefined * FUN_10453f758(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 10453f8fc; end: 10453f93b;  */

void FUN_10453f8fc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == -1) {
    uVar1 = *param_2;
  }
  else {
    _swift_once(param_1,param_3);
    uVar1 = *param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10453f93c; end: 10453fbb3;  */

undefined * FUN_10453f93c(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 10453fbb4; end: 10453fbd3;  */

void FUN_10453fbb4(void)

{
  FUN_1045f8ff0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 10453fbd4; end: 10453ff9b;  */

undefined8 FUN_10453fbd4(void)

{
  return 0xc;
}



/* Entry: 10453ff9c; end: 1045400a3;  */

void FUN_10453ff9c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(puVar2);
  uVar1 = (ulong)param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    param_4 = 0xd000000000000013;
    param_3 = puVar2;
    FUN_104561f60(puVar2,0xd000000000000013,0x800000010f207bc0,param_5,param_6);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
  }
  FUN_1045a7bb0(puVar2,param_3,param_4,param_1,param_5,param_6);
  _swift_bridgeObjectRelease(param_4);
  (**(code **)(lVar3 + 8))(puVar2,param_5);
  return;
}



/* Entry: 1045400a4; end: 1045400c3;  */

void FUN_1045400a4(void)

{
  _objc_opt_self(&PTR_PTR_113084b90);
  return;
}



/* Entry: 1045400c4; end: 1045400ef;  */

long FUN_1045400c4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1045400f0; end: 10454012b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1045400f0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)(byte)param_1[5];
  if (2 < (byte)param_1[5]) {
    uVar2 = (int)*param_1 + 3;
  }
  if (uVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
    return;
  }
  if (uVar2 == 1) {
    if ((*(byte *)(*(long *)(param_1[3] - 8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1[3] - 8) + 8))();
      return;
    }
    uVar1 = *param_1;
  }
  else {
    uVar1 = *param_1;
    uVar2 = (uint)(param_1[1] >> 0x3e);
    if (uVar2 == 1) {
      uVar1 = param_1[1] & 0x3fffffffffffffff;
    }
    else if (uVar2 != 2) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10454012c; end: 1045402e3;  */

undefined8 * FUN_10454012c(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (uint)*(byte *)(param_2 + 10);
  if (2 < *(byte *)(param_2 + 10)) {
    uVar3 = *param_2 + 3;
  }
  if (uVar3 == 2) {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar1;
    *(char *)(param_1 + 2) = (char)param_2[4];
    *(undefined1 *)(param_1 + 5) = 2;
    _swift_bridgeObjectRetain();
  }
  else if (uVar3 == 1) {
    lVar4 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))(param_1);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    uVar1 = *(undefined8 *)param_2;
    uVar2 = *(undefined8 *)(param_2 + 2);
    func_0x00010006c00c(uVar1,uVar2);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return param_1;
}



/* Entry: 1045402e4; end: 1045403bf;  */

void FUN_1045402e4(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar2 = *param_1 + 3;
    }
    if (uVar2 == 2) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    }
    else if (uVar2 == 1) {
      func_0x0001000834e4();
    }
    else {
      func_0x00010006c090(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2));
    }
    uVar2 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar2 = *param_2 + 3;
    }
    if (uVar2 == 2) {
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(char *)(param_1 + 4) = (char)param_2[4];
      uVar1 = 2;
    }
    else if (uVar2 == 1) {
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
    }
    *(undefined1 *)(param_1 + 10) = uVar1;
  }
  return;
}



/* Entry: 1045403c0; end: 10454049f;  */

int FUN_1045403c0(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 1045404a0; end: 1045404d3;  */

undefined8 FUN_1045404a0(undefined8 param_1,undefined8 param_2)

{
  FUN_10454012c(param_2,param_1,&UNK_110786148);
  return param_2;
}



/* Entry: 1045404d4; end: 104540513;  */

void FUN_1045404d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16ba8;
  _swift_getWitnessTable(&UNK_10dd16ba8,&UNK_110786978);
  puRam0000000113084c60 = puVar1;
  return;
}



/* Entry: 104540514; end: 10454058f;  */

undefined8 FUN_104540514(undefined8 param_1)

{
  FUN_1045400f0(param_1,&UNK_110786148);
  return param_1;
}



/* Entry: 104540590; end: 1045405cf;  */

void FUN_104540590(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd18630;
  _swift_getWitnessTable(&UNK_10dd18630,&UNK_110788c08);
  puRam0000000113084c68 = puVar1;
  return;
}



/* Entry: 1045405d0; end: 104540603;  */

undefined8 FUN_1045405d0(undefined8 param_1)

{
  (*(code *)(undefined *)0x10457f770)();
  return param_1;
}



/* Entry: 104540604; end: 104540643;  */

void FUN_104540604(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084c70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16798;
  _swift_getWitnessTable(&UNK_10dd16798,&UNK_1107861d8);
  puRam0000000113084c70 = puVar1;
  return;
}



/* Entry: 104540644; end: 104540677;  */

undefined8 FUN_104540644(undefined8 param_1,undefined8 param_2)

{
  FUN_1045402e4(param_2,param_1,&UNK_110786148);
  return param_2;
}



/* Entry: 104540678; end: 1045406f7;  */

void FUN_104540678(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19030;
  _swift_getWitnessTable(&UNK_10dd19030,&UNK_110789f98);
  puRam0000000113084ca8 = puVar1;
  return;
}



/* Entry: 1045406f8; end: 1045407af;  */

long FUN_1045406f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1045407b0; end: 1045407ef;  */

void FUN_1045407b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19388;
  _swift_getWitnessTable(&UNK_10dd19388,&UNK_11078a540);
  puRam0000000113084cd0 = puVar1;
  return;
}



/* Entry: 1045407f0; end: 1045408cf;  */

undefined8 FUN_1045407f0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x1045acec4)(param_2,param_1);
  return param_2;
}



/* Entry: 1045408d0; end: 1045408e3;  */

undefined * FUN_1045408d0(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x1130874f0,&UNK_10dd18fb8);
    puVar6 = puVar9;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    puVar10 = (undefined8 *)(puVar4 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar11 = *puVar10;
      uVar7 = uVar2;
      uVar8 = uVar3;
      FUN_104559588();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10460d84c);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10460d850);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar9 != (undefined *)0x0);
  }
  return puVar6;
}



/* Entry: 1045408e4; end: 10454094b;  */

void FUN_1045408e4(undefined8 param_1,undefined1 param_2)

{
  __ss6HasherV8_combineyySuF(param_2);
  return;
}



/* Entry: 10454094c; end: 10454095f;  */

bool FUN_10454094c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104540960; end: 104540a0b;  */

void FUN_104540960(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104540a0c; end: 104540a0f;  */

void FUN_104540a0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16730;
  _swift_getWitnessTable(&UNK_10dd16730,&UNK_1107861d8);
  puRam0000000113084cd8 = puVar1;
  return;
}



/* Entry: 104540a10; end: 104540a4f;  */

void FUN_104540a10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113084cd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd16730;
  _swift_getWitnessTable(&UNK_10dd16730,&UNK_1107861d8);
  puRam0000000113084cd8 = puVar1;
  return;
}



/* Entry: 104540a50; end: 104540bc3;  */

void FUN_104540a50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104540bc4; end: 104540d73;  */

void FUN_104540bc4(undefined1 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar14 = (long)param_2 - (long)param_1;
  uVar5 = 0;
  if (param_1 != (undefined1 *)0x0) {
    uVar5 = uVar14;
  }
  uVar4 = *unaff_x20;
  lVar9 = *(long *)(uVar4 + 0x10);
  if (SCARRY8(lVar9,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540cd4);
    (*pcVar1)();
  }
  uVar12 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar12 != 0) {
    uVar11 = *(ulong *)(uVar4 + 0x18);
    uVar3 = uVar11 >> 1;
    if ((long)(lVar9 + uVar5) <= (long)uVar3) goto LAB_104540c40;
  }
  func_0x0001014d97ac();
  uVar11 = *(ulong *)(uVar12 + 0x18);
  uVar3 = uVar11 >> 1;
  uVar4 = uVar12;
LAB_104540c40:
  uVar12 = *(ulong *)(uVar4 + 0x10);
  uVar13 = uVar3 - uVar12;
  uVar10 = 0;
  if ((((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) && (param_1 < param_2)) &&
     (uVar3 != uVar12)) {
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104540d74);
      (*pcVar1)();
    }
    uVar10 = uVar14;
    if (uVar13 <= uVar14) {
      uVar10 = uVar13;
    }
    _memmove(uVar4 + uVar12 + 0x20,param_1,uVar10);
    param_1 = param_1 + uVar10;
  }
  if ((long)uVar10 < (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540cd8);
    (*pcVar1)();
  }
  if (uVar10 != 0) {
    bVar2 = SCARRY8(uVar12,uVar10);
    uVar12 = uVar12 + uVar10;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104540cdc);
      (*pcVar1)();
    }
    *(ulong *)(uVar4 + 0x10) = uVar12;
  }
  if ((uVar10 != uVar13 || param_1 == (undefined1 *)0x0) || param_1 == param_2) {
LAB_104540cb0:
    *unaff_x20 = uVar4;
    return;
  }
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  uVar5 = uVar4;
  do {
    while( true ) {
      uVar14 = uVar11 >> 1;
      if ((long)(uVar12 + 1) <= (long)uVar14) break;
      uVar4 = (ulong)(1 < uVar11);
      func_0x0001014d97ac(uVar4,uVar12 + 1,1,uVar5);
      uVar11 = *(ulong *)(uVar4 + 0x18);
      uVar14 = uVar11 >> 1;
      if ((long)uVar14 <= (long)uVar12) goto LAB_104540ce4;
LAB_104540d00:
      lVar9 = uVar12 + 0x20;
      puVar7 = puVar6;
      do {
        *(undefined1 *)(uVar4 + lVar9) = uVar8;
        if (puVar7 == param_2) {
          *(long *)(uVar4 + 0x10) = lVar9 + -0x1f;
          goto LAB_104540cb0;
        }
        puVar6 = puVar7 + 1;
        uVar8 = *puVar7;
        lVar9 = lVar9 + 1;
        puVar7 = puVar6;
      } while (lVar9 - uVar14 != 0x20);
      uVar11 = *(ulong *)(uVar4 + 0x18);
      *(ulong *)(uVar4 + 0x10) = uVar14;
      uVar5 = uVar4;
      uVar12 = uVar14;
    }
    uVar4 = uVar5;
    if ((long)uVar12 < (long)uVar14) goto LAB_104540d00;
LAB_104540ce4:
    *(ulong *)(uVar4 + 0x10) = uVar12;
    uVar5 = uVar4;
  } while( true );
}



/* Entry: 104540d74; end: 104541037;  */

void FUN_104540d74(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  undefined1 uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar7 = *unaff_x20;
  lVar10 = *(long *)(uVar7 + 0x10);
  if (SCARRY8(lVar10,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e78);
    (*pcVar1)();
  }
  uVar13 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar13 != 0) {
    uVar12 = *(ulong *)(uVar7 + 0x18);
    uVar3 = uVar12 >> 1;
    if (lVar10 + param_2 <= (long)uVar3) goto LAB_104540de0;
  }
  func_0x0001014d97ac();
  uVar12 = *(ulong *)(uVar13 + 0x18);
  uVar3 = uVar12 >> 1;
  uVar7 = uVar13;
LAB_104540de0:
  uVar13 = *(ulong *)(uVar7 + 0x10);
  lVar10 = uVar3 - uVar13;
  if ((param_2 == 0) || (lVar10 == 0)) {
    puVar4 = (undefined1 *)0x0;
    if (param_1 != (undefined1 *)0x0) {
      puVar4 = param_1;
    }
    puVar9 = (undefined1 *)0x0;
    if (param_1 != (undefined1 *)0x0) {
      puVar9 = param_1 + param_2;
    }
    lVar11 = 0;
  }
  else {
    lVar11 = param_2;
    if (lVar10 <= param_2) {
      lVar11 = lVar10;
    }
    _memcpy(uVar7 + uVar13 + 0x20,param_1,lVar11);
    puVar4 = param_1 + lVar11;
    puVar9 = param_1 + param_2;
  }
  if (lVar11 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e7c);
    (*pcVar1)();
  }
  if (0 < lVar11) {
    bVar2 = SCARRY8(uVar13,lVar11);
    uVar13 = uVar13 + lVar11;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104540e80);
      (*pcVar1)();
    }
    *(ulong *)(uVar7 + 0x10) = uVar13;
  }
  if ((lVar11 != lVar10 || puVar4 == (undefined1 *)0x0) || puVar9 == puVar4) {
LAB_104540e58:
    *unaff_x20 = uVar7;
    return;
  }
  puVar5 = puVar4 + 1;
  uVar8 = *puVar4;
  uVar3 = uVar7;
  do {
    while( true ) {
      uVar6 = uVar12 >> 1;
      if ((long)(uVar13 + 1) <= (long)uVar6) break;
      uVar7 = (ulong)(1 < uVar12);
      func_0x0001014d97ac(uVar7,uVar13 + 1,1,uVar3);
      uVar12 = *(ulong *)(uVar7 + 0x18);
      uVar6 = uVar12 >> 1;
      if ((long)uVar6 <= (long)uVar13) goto LAB_104540e88;
LAB_104540ea4:
      lVar10 = uVar13 + 0x20;
      puVar4 = puVar5;
      do {
        *(undefined1 *)(uVar7 + lVar10) = uVar8;
        if (puVar4 == puVar9) {
          *(long *)(uVar7 + 0x10) = lVar10 + -0x1f;
          goto LAB_104540e58;
        }
        uVar8 = *puVar4;
        puVar5 = puVar5 + 1;
        lVar10 = lVar10 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar10 - uVar6 != 0x20);
      uVar12 = *(ulong *)(uVar7 + 0x18);
      *(ulong *)(uVar7 + 0x10) = uVar6;
      uVar3 = uVar7;
      uVar13 = uVar6;
    }
    uVar7 = uVar3;
    if ((long)uVar13 < (long)uVar6) goto LAB_104540ea4;
LAB_104540e88:
    *(ulong *)(uVar7 + 0x10) = uVar13;
    uVar3 = uVar7;
  } while( true );
}



/* Entry: 104541038; end: 10454122f;  */

void FUN_104541038(undefined8 param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 uStack_44;
  byte bStack_43;
  byte bStack_42;
  char cStack_41;
  
  uVar9 = (uint)param_1 & 0xff;
  uVar4 = (uint)param_1 >> 8 & 0xff;
  uVar5 = (ulong)(uVar4 - uVar9);
  if (uVar4 < uVar9) {
    uVar5 = -(ulong)(uVar9 - uVar4);
  }
  uVar8 = *unaff_x20;
  lVar11 = *(long *)(uVar8 + 0x10);
  if (SCARRY8(lVar11,uVar5 + 1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104541120);
    (*pcVar2)();
  }
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)uVar7 == 0) ||
     (uVar6 = *(ulong *)(uVar8 + 0x18) >> 1, (long)uVar6 < (long)(lVar11 + uVar5 + 1))) {
    func_0x0001014d97ac();
    uVar6 = *(ulong *)(uVar7 + 0x18) >> 1;
    uVar8 = uVar7;
  }
  puVar12 = (undefined1 *)(uVar6 - *(long *)(uVar8 + 0x10));
  puVar3 = &uStack_44;
  FUN_104542a54(puVar3,param_1,uVar8 + *(long *)(uVar8 + 0x10) + 0x20,puVar12);
  if ((long)puVar3 <= (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104541124);
    (*pcVar2)();
  }
  if (0 < (long)puVar3) {
    if (SCARRY8(*(long *)(uVar8 + 0x10),(long)puVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104541154);
      (*pcVar2)();
    }
    *(undefined1 **)(uVar8 + 0x10) = puVar3 + *(long *)(uVar8 + 0x10);
  }
  if ((puVar3 == puVar12) && (cStack_41 != '\x01')) {
    uVar5 = *(ulong *)(uVar8 + 0x10);
    uVar9 = (uint)bStack_42;
    if ((uint)bStack_42 == (uint)bStack_43) {
      uVar4 = 0;
      bVar1 = true;
    }
    else {
      uVar4 = bStack_42 + 1;
      if (uVar4 >> 8 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104541230);
        (*pcVar2)();
      }
      bVar1 = false;
    }
    do {
      uVar7 = *(ulong *)(uVar8 + 0x18) >> 1;
      if ((long)uVar7 < (long)(uVar5 + 1)) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        func_0x0001014d97ac(uVar6,uVar5 + 1,1,uVar8);
        uVar7 = *(ulong *)(uVar6 + 0x18) >> 1;
        uVar8 = uVar6;
      }
      if ((long)uVar5 < (long)uVar7) {
        lVar11 = uVar5 + 0x20;
        uVar10 = uVar9;
        do {
          uVar9 = uVar4;
          *(char *)(uVar8 + lVar11) = (char)uVar10;
          if (bVar1) {
            *(long *)(uVar8 + 0x10) = lVar11 + -0x1f;
            goto LAB_104541100;
          }
          if ((uint)bStack_43 == (uVar9 & 0xff)) {
            uVar4 = 0;
            bVar1 = true;
          }
          else {
            uVar4 = (uVar9 & 0xff) + 1;
            if (uVar4 >> 8 != 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10454122c);
              (*pcVar2)();
            }
            bVar1 = false;
          }
          lVar11 = lVar11 + 1;
          uVar5 = uVar7;
          uVar10 = uVar9;
        } while (lVar11 - uVar7 != 0x20);
      }
      *(ulong *)(uVar8 + 0x10) = uVar5;
    } while( true );
  }
LAB_104541100:
  *unaff_x20 = uVar8;
  return;
}



/* Entry: 104541230; end: 10454133b;  */

void FUN_104541230(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x104541330);
    (*pcVar2)();
  }
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (!SCARRY8(lVar6,lVar1)) {
    lVar3 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar3 == 0) || (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < lVar6 + lVar1)) {
      func_0x0001014d97ac();
      uVar4 = *(ulong *)(lVar3 + 0x18) >> 1;
      lVar5 = lVar3;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1045412a4);
        (*pcVar2)();
      }
    }
    else {
      lVar6 = *(long *)(lVar5 + 0x10);
      if ((long)(uVar4 - lVar6) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104541338);
        (*pcVar2)();
      }
      _memcpy(lVar5 + lVar6 + 0x20,param_2 + param_3,lVar1);
      if (0 < lVar1) {
        if (SCARRY8(lVar6,lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10454133c);
          (*pcVar2)();
        }
        *(long *)(lVar5 + 0x10) = lVar6 + lVar1;
      }
    }
    _swift_unknownObjectRelease(param_1);
    *unaff_x20 = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104541334);
  (*pcVar2)();
}



/* Entry: 10454133c; end: 104541447;  */

void FUN_10454133c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10454143c);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_10454eac8();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104541440);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104541444);
      (*pcVar1)();
    }
    uVar3 = 0x113084de8;
    func_0x0001000285a8(0x113084de8,&UNK_10dd16950);
    _swift_arrayInitWithCopy(lVar5 + lVar7 * 0x28 + 0x20,param_1 + 0x20,uVar6,uVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104541448);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 104541448; end: 10454161b;  */

void FUN_104541448(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x12;
  long lVar3;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_7 + -8);
  lVar2 = param_7;
  uStack_ac = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  (**(code **)(lVar3 + 0x10))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),extraout_x12,lVar2);
  func_0x000104540540(param_3,&uStack_a8);
  (**(code **)(lVar3 + 0x20))
            (param_1,auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7);
  uStack_68 = param_10;
  lVar2 = 0;
  lStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  FUN_10454161c(0,&lStack_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  puVar1[1] = uStack_a0;
  *puVar1 = uStack_a8;
  puVar1[3] = uStack_90;
  puVar1[2] = uStack_98;
  puVar1[4] = uStack_88;
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x38)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x3c));
  *puVar1 = param_5;
  *(char *)(puVar1 + 1) = (char)uStack_ac;
  return;
}



/* Entry: 10454161c; end: 104541627;  */

void FUN_10454161c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&UNK_10e8136dc);
  return;
}



/* Entry: 104541628; end: 1045416e3;  */

void FUN_104541628(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar2 = 0;
  __sSqMa(0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000104541680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 1045416e4; end: 104541727;  */

undefined8 FUN_1045416e4(void)

{
  return 0x1045416f4;
}



/* Entry: 104541728; end: 104541867;  */

void FUN_104541728(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x38);
  (*pcVar5)(param_1,1,1,lVar2);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar2);
  (*pcVar5)(param_1,0,1,lVar2);
  uStack_68 = param_10;
  lVar2 = 0;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_70 = param_9;
  FUN_104543f38(0,&uStack_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  uVar6 = *param_3;
  uVar8 = param_3[3];
  uVar7 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  puVar1[4] = param_3[4];
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x38)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x3c));
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = param_6;
  return;
}



/* Entry: 104541868; end: 10454187f;  */

void FUN_104541868(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104541880,0,0);
  return;
}



/* Entry: 104541880; end: 104541993;  */

void FUN_104541880(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar5,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104541914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,1);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  *(long *)(unaff_x22 + 0x30) = lVar6;
  *(long *)(unaff_x22 + 0x38) = lVar1;
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar5,lVar1,PTR___sSciTL_11034fea8,PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_104541994;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar3,unaff_x22 + 0x60,lVar1,uVar4);
  return;
}



/* Entry: 104541994; end: 1045419ef;  */

void FUN_104541994(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1045419f0;
  }
  else {
    pcVar1 = FUN_104541cd0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1045419f0; end: 104541ccf;  */

void FUN_1045419f0(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  
  bVar1 = *(byte *)(unaff_x22 + 0x60);
  uVar9 = *(ulong *)(unaff_x22 + 0x48);
  if (*(char *)(unaff_x22 + 0x61) == '\x01') {
    if (uVar9 == 0) {
      uVar5 = 0;
      uVar7 = 1;
LAB_104541bd4:
                    /* WARNING: Could not recover jumptable at 0x000104541bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar5,uVar7);
      return;
    }
    lVar12 = *(long *)(unaff_x22 + 0x30);
    lVar3 = *(long *)(unaff_x22 + 0x38);
  }
  else {
    if (0x1c < uVar9) {
      lVar12 = *(long *)(unaff_x22 + 0x30);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
      lVar3 = 0;
      __sSqMa(0,uVar7);
      (**(code **)(*(long *)(lVar3 + -8) + 8))(uVar8,lVar3);
      (**(code **)(lVar12 + 0x38))(uVar8,1,1,uVar7);
      plVar4 = (long *)0x0;
      FUN_104597744();
      _swift_allocObject();
      *(undefined1 *)(plVar4 + 2) = 1;
      plVar4[3] = -0x2fffffffffffff7a;
      plVar4[4] = -0x7ffffffef0df83f0;
      plVar4[5] = 0x497261567478656e;
      plVar4[6] = -0x13ffffffd6d78b92;
      plVar4[7] = -0x2fffffffffffffd8;
      plVar4[8] = -0x7ffffffef0df8420;
      plVar4[9] = 0x77;
      plVar6 = plVar4;
      FUN_104540678();
      _swift_allocError(&UNK_110789f98,plVar6,0,0);
      *plVar6 = (long)plVar4;
      goto LAB_104541b84;
    }
    uVar5 = *(ulong *)(unaff_x22 + 0x40) | ((ulong)bVar1 & 0x7f) << (uVar9 & 0x3f);
    if (-1 < (char)bVar1) {
      uVar7 = 0;
      goto LAB_104541bd4;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar7,uVar8,PTR___sSciTL_11034fea8,PTR___s13AsyncIteratorSciTl_11034fb50);
    lVar12 = *(long *)(lVar3 + -8);
    (**(code **)(lVar12 + 0x30))(uVar11,1,lVar3);
    if ((int)uVar11 == 0) {
      *(ulong *)(unaff_x22 + 0x40) = uVar5;
      *(ulong *)(unaff_x22 + 0x48) = uVar9 + 7;
      *(long *)(unaff_x22 + 0x30) = lVar12;
      *(long *)(unaff_x22 + 0x38) = lVar3;
      _swift_getAssociatedConformanceWitness
                (uVar7,uVar8,lVar3,PTR___sSciTL_11034fea8,
                 PTR___sSci13AsyncIteratorSci_ScITn_11034fe98);
      plVar6 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x50) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_104541994;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
                (plVar6,(byte *)(unaff_x22 + 0x60),lVar3,uVar7);
      return;
    }
  }
  puVar10 = *(undefined1 **)(unaff_x22 + 0x18);
  lVar2 = 0;
  __sSqMa(0,lVar3);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(puVar10,lVar2);
  (**(code **)(lVar12 + 0x38))(puVar10,1,1,lVar3);
  FUN_104541cdc();
  _swift_allocError(&UNK_110786808,puVar10,0,0);
  *puVar10 = 1;
LAB_104541b84:
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000104541bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


