/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c454fc; end: 101c45543;  */

uint FUN_101c454fc(undefined8 *param_1)

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
  FUN_101c45ddc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c45544; end: 101c455e3;  */

/* WARNING: Possible PIC construction at 0x000101c45590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c455a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c45594) */
/* WARNING: Removing unreachable block (ram,0x000101c455a4) */

void FUN_101c45544(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0b280 != -1) {
    func_0x000107c61568(0x112e0b280,FUN_101c44e4c);
  }
  uVar5 = uRam0000000113804400;
  uVar4 = uRam00000001138043f8;
  uVar3 = uRam00000001138043f0;
  uVar2 = uRam00000001138043e8;
  uVar1 = uRam00000001138043e0;
  *param_1 = uRam00000001138043d8;
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



/* Entry: 101c455e4; end: 101c4561f;  */

void FUN_101c455e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0b2e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0b2e0,&UNK_10d9e44d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c45620; end: 101c45723;  */

void FUN_101c45620(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c45724; end: 101c4576b;  */

uint FUN_101c45724(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101c45ddc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c4576c; end: 101c457db;  */

void FUN_101c4576c(void)

{
  func_0x000107c5fb78(0x7972746e756f432e,0xec0000007473694c);
  uRam0000000113804408 = 0xd000000000000031;
  uRam0000000113804410 = 0x800000010f004fb0;
  return;
}



/* Entry: 101c457dc; end: 101c45823;  */

void FUN_101c457dc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e44e0,0x10,2);
  uRam0000000113804420 = uStack_38;
  uRam0000000113804418 = uStack_40;
  uRam0000000113804430 = uStack_28;
  uRam0000000113804428 = uStack_30;
  uRam0000000113804440 = uStack_18;
  uRam0000000113804438 = uStack_20;
  return;
}



/* Entry: 101c45824; end: 101c458a7;  */

void FUN_101c45824(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x88))();
    }
  }
  return;
}



/* Entry: 101c458a8; end: 101c4591f;  */

void FUN_101c458a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) == 0) ||
     ((**(code **)(param_6 + 0x148))(param_2,1,param_5,param_6), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 101c45920; end: 101c4593b;  */

void FUN_101c45920(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 101c4593c; end: 101c45997;  */

undefined1  [16] FUN_101c4593c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112e0b290 != -1) {
    func_0x000107c61568(0x112e0b290,FUN_101c4576c);
  }
  auVar1._8_8_ = uRam0000000113804410;
  auVar1._0_8_ = uRam0000000113804408;
  func_0x000107c61434(uRam0000000113804410);
  return auVar1;
}



/* Entry: 101c45998; end: 101c4599f;  */

undefined8 FUN_101c45998(void)

{
  return 1;
}



/* Entry: 101c459a0; end: 101c459cf;  */

undefined1  [16] FUN_101c459a0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101c459d0; end: 101c45a03;  */

void FUN_101c459d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101c45a04; end: 101c45a17;  */

undefined1  [16] FUN_101c45a04(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x101c45a14;
  return auVar1;
}



/* Entry: 101c45a18; end: 101c45a4f;  */

void FUN_101c45a18(void)

{
  FUN_101c45824();
  return;
}



/* Entry: 101c45a50; end: 101c45a53;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c45a50(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c45a54; end: 101c45a8b;  */

uint FUN_101c45a54(long param_1,long param_2)

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
  FUN_101c468e8();
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



/* Entry: 101c45a8c; end: 101c45a9f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c45a8c(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  uint uVar24;
  ulong uVar25;
  int *piVar26;
  byte *pbVar27;
  byte *unaff_x19;
  long lVar28;
  long *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
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
  
  lVar29 = *param_1;
  lVar28 = param_1[1];
  uVar18 = param_1[2];
  lVar1 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[1];
  pbVar16 = (byte *)unaff_x20[2];
  lVar20 = *(long *)(lVar1 + 0x10);
  if (lVar20 != *(long *)(lVar29 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar20 != 0 && lVar1 != lVar29) {
    piVar23 = (int *)(lVar1 + 0x20);
    piVar26 = (int *)(lVar29 + 0x20);
    do {
      if (*piVar23 != *piVar26) {
        return (byte *)0x0;
      }
      lVar20 = lVar20 + -1;
      piVar23 = piVar23 + 1;
      piVar26 = piVar26 + 1;
    } while (lVar20 != 0);
  }
  do {
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
    uVar5 = (uint)((ulong)pbVar16 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar18 >> 0x20);
    uVar24 = uVar6 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar16;
    if ((ulong)pbVar16 >> 0x3e == 3) {
      uVar22 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar16 != (byte *)0xc000000000000000)) ||
          (uVar18 >> 0x3e < 3)) || ((uVar22 = 0, lVar28 != 0 || (uVar18 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar22 = (ulong)pbVar16 >> 0x30 & 0xff;
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
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar18 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar21 = (int)((ulong)lVar28 >> 0x20);
      if (SBORROW4(iVar21,(int)lVar28)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar22 == (long)(iVar21 - (int)lVar28)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
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
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10);
        if (SBORROW8(*(long *)(lVar28 + 0x18),*(long *)(lVar28 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar22 != uVar25) goto code_r0x000100e26154;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar16;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar16 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar16 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar16 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar16 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar16 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar16 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
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
          unaff_x24 = pbVar16;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
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
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + (lVar29 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar16;
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
        unaff_x20 = (long *)((ulong)pbVar16 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar28,
                            uVar18);
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar18;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar22 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
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
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar27 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar16 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar28 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar28,uVar11);
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
        lVar28 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar28,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar16;
        if ((pbVar10 == pbVar15) && (pbVar16 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar28 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar27 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar28 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar28);
          func_0x000107c61174();
          pbVar10 = pbVar27;
          func_0x000107c60118();
          func_0x000107c61170(pbVar27);
          func_0x000107c61170(lVar28);
          pbVar27 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar27 & 1) == 0) {
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
    lVar29 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar16, pbVar14 = pbVar27, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar16 == *(byte **)(pbVar13 + 0x10) && pbVar27 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar28 = *(long *)(pbVar13 + 0x20);
      if (pbVar16 == (byte *)0x0) {
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
        pbVar14 = pbVar16;
        if ((pbVar10 != pbVar15) || (pbVar16 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar28 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar27 == *(byte **)(pbVar13 + 0x18)) && (lVar29 == lVar28)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar27,lVar29,*(byte **)(pbVar13 + 0x18),lVar28,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar28 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar27 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar29 == 0) && pbVar16 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar13 + 0x20);
        lVar28 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar28;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar28 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar28 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar28 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar28 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar28 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar28 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar28 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar29;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
        auVar46 = NEON_ext(auVar46,auVar4,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar27 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar16 == (byte *)0x0) &&
          lVar29 == 0)) {
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
      lVar29 = *(long *)(pbVar13 + 0x20);
      lVar28 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar28;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar28 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar28 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar28 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar28 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar28 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar28 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar28 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar29;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
      auVar46 = NEON_ext(auVar2,auVar3,8,1);
      lVar28 = CONCAT17(bVar37 | auVar46[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar28 = *(long *)(pbVar13 + 8);
    uVar18 = *(ulong *)(pbVar13 + 0x10);
    lVar29 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar29,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101c45aa0; end: 101c45b3f;  */

/* WARNING: Possible PIC construction at 0x000101c45aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c45afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c45af0) */
/* WARNING: Removing unreachable block (ram,0x000101c45b00) */

void FUN_101c45aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0b298 != -1) {
    func_0x000107c61568(0x112e0b298,FUN_101c457dc);
  }
  uVar5 = uRam0000000113804440;
  uVar4 = uRam0000000113804438;
  uVar3 = uRam0000000113804430;
  uVar2 = uRam0000000113804428;
  uVar1 = uRam0000000113804420;
  *param_1 = uRam0000000113804418;
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



/* Entry: 101c45b40; end: 101c45b7b;  */

void FUN_101c45b40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0b2d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0b2d0,&UNK_10d9e44c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c45b7c; end: 101c45c7f;  */

void FUN_101c45b7c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101c45c80; end: 101c45cab;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c45c80(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  int *piVar23;
  uint uVar24;
  ulong uVar25;
  int *piVar26;
  byte *pbVar27;
  byte *unaff_x19;
  long lVar28;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
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
  
  lVar29 = *param_1;
  pbVar10 = (byte *)param_1[1];
  pbVar16 = (byte *)param_1[2];
  lVar1 = *param_2;
  lVar28 = param_2[1];
  uVar18 = param_2[2];
  lVar20 = *(long *)(lVar29 + 0x10);
  if (lVar20 != *(long *)(lVar1 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar20 != 0 && lVar29 != lVar1) {
    piVar23 = (int *)(lVar29 + 0x20);
    piVar26 = (int *)(lVar1 + 0x20);
    do {
      if (*piVar23 != *piVar26) {
        return (byte *)0x0;
      }
      lVar20 = lVar20 + -1;
      piVar23 = piVar23 + 1;
      piVar26 = piVar26 + 1;
    } while (lVar20 != 0);
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
    uVar5 = (uint)((ulong)pbVar16 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar18 >> 0x20);
    uVar24 = uVar6 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar16;
    if ((ulong)pbVar16 >> 0x3e == 3) {
      uVar22 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar16 != (byte *)0xc000000000000000)) ||
          (uVar18 >> 0x3e < 3)) || ((uVar22 = 0, lVar28 != 0 || (uVar18 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar22 = (ulong)pbVar16 >> 0x30 & 0xff;
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
      if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar18 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar21 = (int)((ulong)lVar28 >> 0x20);
      if (SBORROW4(iVar21,(int)lVar28)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
      }
      if (uVar22 == (long)(iVar21 - (int)lVar28)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
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
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10);
        if (SBORROW8(*(long *)(lVar28 + 0x18),*(long *)(lVar28 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
code_r0x000100e2608c:
        if (uVar22 != uVar25) goto code_r0x000100e26154;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar16;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar16 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar16 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar16 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar16 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar16 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar16 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
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
          unaff_x24 = pbVar16;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
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
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + (lVar29 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar16;
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
        unaff_x20 = (ulong)pbVar16 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar28,
                            uVar18);
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar18;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar22 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
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
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar27 = *(byte **)(pbVar9 + 0x18);
    bVar30 = pbVar9[0x28];
    pbVar16 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar28 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar28,uVar11);
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
        lVar28 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar28,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar16;
        if ((pbVar10 == pbVar15) && (pbVar16 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar28 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar27 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar28 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar28);
          func_0x000107c61174();
          pbVar10 = pbVar27;
          func_0x000107c60118();
          func_0x000107c61170(pbVar27);
          func_0x000107c61170(lVar28);
          pbVar27 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar27 & 1) == 0) {
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
    lVar29 = *(long *)(pbVar9 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar16, pbVar14 = pbVar27, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar16 == *(byte **)(pbVar13 + 0x10) && pbVar27 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar28 = *(long *)(pbVar13 + 0x20);
      if (pbVar16 == (byte *)0x0) {
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
        pbVar14 = pbVar16;
        if ((pbVar10 != pbVar15) || (pbVar16 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar28 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar27 == *(byte **)(pbVar13 + 0x18)) && (lVar29 == lVar28)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar27,lVar29,*(byte **)(pbVar13 + 0x18),lVar28,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar28 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar27 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar29 == 0) && pbVar16 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar13 + 0x20);
        lVar28 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar28;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar28 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar28 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar28 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar28 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar28 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar28 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar28 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar29;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
        auVar46 = NEON_ext(auVar46,auVar4,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar27 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar16 == (byte *)0x0) &&
          lVar29 == 0)) {
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
      lVar29 = *(long *)(pbVar13 + 0x20);
      lVar28 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar28;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar28 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar28 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar28 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar28 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar28 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar28 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar28 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar29;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
      auVar46 = NEON_ext(auVar2,auVar3,8,1);
      lVar28 = CONCAT17(bVar37 | auVar46[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar28 = *(long *)(pbVar13 + 8);
    uVar18 = *(ulong *)(pbVar13 + 0x10);
    lVar29 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar29,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
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



/* Entry: 101c45cac; end: 101c45d83;  */

undefined8
FUN_101c45cac(long param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,ulong param_6
             )

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  
  if ((param_3 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3d & 1) != 0) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != *(long *)(param_4 + 0x10)) {
      return 0;
    }
    if ((lVar1 != 0) && (param_1 != param_4)) {
      piVar2 = (int *)(param_1 + 0x20);
      piVar3 = (int *)(param_4 + 0x20);
      do {
        if (*piVar2 != *piVar3) {
          return 0;
        }
        lVar1 = lVar1 + -1;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (lVar1 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
  }
  else {
    if ((param_6 >> 0x3d & 1) == 0) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != *(long *)(param_4 + 0x10)) {
      return 0;
    }
    if ((lVar1 != 0) && (param_1 != param_4)) {
      piVar2 = (int *)(param_1 + 0x20);
      piVar3 = (int *)(param_4 + 0x20);
      do {
        if (*piVar2 != *piVar3) {
          return 0;
        }
        lVar1 = lVar1 + -1;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (lVar1 != 0);
    }
    func_0x000100e25fcc(param_2,param_3 & 0xdfffffffffffffff,param_5,param_6 & 0xdfffffffffffffff);
  }
  if ((param_2 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 101c45d84; end: 101c45ddb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c45d84(long param_1,byte *param_2,byte *param_3,long param_4,long param_5,
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
  long lVar16;
  int iVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  ulong uVar21;
  int *piVar22;
  byte *pbVar23;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != *(long *)(param_4 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar16 != 0 && param_1 != param_4) {
    piVar19 = (int *)(param_1 + 0x20);
    piVar22 = (int *)(param_4 + 0x20);
    do {
      if (*piVar19 != *piVar22) {
        return (byte *)0x0;
      }
      lVar16 = lVar16 + -1;
      piVar19 = piVar19 + 1;
      piVar22 = piVar22 + 1;
    } while (lVar16 != 0);
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
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)param_2;
    pbVar11 = param_3;
    if ((ulong)param_3 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((param_2 != (byte *)0x0) || (param_3 != (byte *)0xc000000000000000)) ||
          (param_6 >> 0x3e < 3)) || ((uVar18 = 0, param_5 != 0 || (param_6 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar18 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)param_2 >> 0x20);
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
      if (uVar20 == 0) {
        uVar21 = param_6 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar17,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)param_5)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar18 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
        if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
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
          lVar16 = *(long *)(param_2 + 0x10);
          unaff_x24 = *(byte **)(param_2 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_2;
          if (param_2 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar16,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_2 = param_2 + (lVar16 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar16;
          if (SBORROW8((long)unaff_x24,lVar16)) {
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
    pbVar10 = *(byte **)pbVar8;
    param_2 = *(byte **)(pbVar8 + 8);
    pbVar23 = *(byte **)(pbVar8 + 0x18);
    bVar25 = pbVar8[0x28];
    param_3 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_2;
    if (bVar25 < 3) {
      if (bVar25 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar16 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar16,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar25 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar16 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar16,uVar9);
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
        lVar16 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_2 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar16 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar16);
          func_0x000107c61174();
          pbVar11 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar16);
          pbVar23 = pbVar11;
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
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar25 < 5) {
      if (bVar25 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_2 == pbVar14)) &&
           (pbVar10 = param_3, pbVar12 = pbVar23, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_3 == *(byte **)(pbVar11 + 0x10) && pbVar23 == *(byte **)(pbVar11 + 0x18))) {
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
      lVar16 = *(long *)(pbVar11 + 0x20);
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
      if (lVar24 != 0) {
        if (lVar16 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar11 + 0x18)) && (lVar24 == lVar16)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar24,*(byte **)(pbVar11 + 0x18),lVar16,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar16 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar25 != 5) {
      if ((((pbVar23 == (byte *)0x0 && param_2 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar24 == 0) && param_3 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar11 + 0x20);
        lVar16 = *(long *)(pbVar11 + 0x18);
        bVar25 = pbVar11[8] | (byte)lVar16;
        bVar26 = pbVar11[9] | (byte)((ulong)lVar16 >> 8);
        bVar27 = pbVar11[10] | (byte)((ulong)lVar16 >> 0x10);
        bVar28 = pbVar11[0xb] | (byte)((ulong)lVar16 >> 0x18);
        bVar29 = pbVar11[0xc] | (byte)((ulong)lVar16 >> 0x20);
        bVar30 = pbVar11[0xd] | (byte)((ulong)lVar16 >> 0x28);
        bVar31 = pbVar11[0xe] | (byte)((ulong)lVar16 >> 0x30);
        bVar32 = pbVar11[0xf] | (byte)((ulong)lVar16 >> 0x38);
        bVar33 = pbVar11[0x10] | (byte)lVar24;
        bVar34 = pbVar11[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar35 = pbVar11[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar36 = pbVar11[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar37 = pbVar11[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar38 = pbVar11[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar39 = pbVar11[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar40 = pbVar11[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar41[1] = bVar26;
        auVar41[0] = bVar25;
        auVar41[2] = bVar27;
        auVar41[3] = bVar28;
        auVar41[4] = bVar29;
        auVar41[5] = bVar30;
        auVar41[6] = bVar31;
        auVar41[7] = bVar32;
        auVar41[8] = bVar33;
        auVar41[9] = bVar34;
        auVar41[10] = bVar35;
        auVar41[0xb] = bVar36;
        auVar41[0xc] = bVar37;
        auVar41[0xd] = bVar38;
        auVar41[0xe] = bVar39;
        auVar41[0xf] = bVar40;
        auVar3[1] = bVar26;
        auVar3[0] = bVar25;
        auVar3[2] = bVar27;
        auVar3[3] = bVar28;
        auVar3[4] = bVar29;
        auVar3[5] = bVar30;
        auVar3[6] = bVar31;
        auVar3[7] = bVar32;
        auVar3[8] = bVar33;
        auVar3[9] = bVar34;
        auVar3[10] = bVar35;
        auVar3[0xb] = bVar36;
        auVar3[0xc] = bVar37;
        auVar3[0xd] = bVar38;
        auVar3[0xe] = bVar39;
        auVar3[0xf] = bVar40;
        auVar41 = NEON_ext(auVar41,auVar3,8,1);
        if (CONCAT17(bVar32 | auVar41[7],
                     CONCAT16(bVar31 | auVar41[6],
                              CONCAT15(bVar30 | auVar41[5],
                                       CONCAT14(bVar29 | auVar41[4],
                                                CONCAT13(bVar28 | auVar41[3],
                                                         CONCAT12(bVar27 | auVar41[2],
                                                                  CONCAT11(bVar26 | auVar41[1],
                                                                           bVar25 | auVar41[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && param_2 == (byte *)0x0) && param_3 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar11 + 0x20);
      lVar16 = *(long *)(pbVar11 + 0x18);
      bVar25 = pbVar11[8] | (byte)lVar16;
      bVar26 = pbVar11[9] | (byte)((ulong)lVar16 >> 8);
      bVar27 = pbVar11[10] | (byte)((ulong)lVar16 >> 0x10);
      bVar28 = pbVar11[0xb] | (byte)((ulong)lVar16 >> 0x18);
      bVar29 = pbVar11[0xc] | (byte)((ulong)lVar16 >> 0x20);
      bVar30 = pbVar11[0xd] | (byte)((ulong)lVar16 >> 0x28);
      bVar31 = pbVar11[0xe] | (byte)((ulong)lVar16 >> 0x30);
      bVar32 = pbVar11[0xf] | (byte)((ulong)lVar16 >> 0x38);
      bVar33 = pbVar11[0x10] | (byte)lVar24;
      bVar34 = pbVar11[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar35 = pbVar11[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar36 = pbVar11[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar37 = pbVar11[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar38 = pbVar11[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar39 = pbVar11[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar40 = pbVar11[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar26;
      auVar1[0] = bVar25;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33;
      auVar1[9] = bVar34;
      auVar1[10] = bVar35;
      auVar1[0xb] = bVar36;
      auVar1[0xc] = bVar37;
      auVar1[0xd] = bVar38;
      auVar1[0xe] = bVar39;
      auVar1[0xf] = bVar40;
      auVar2[1] = bVar26;
      auVar2[0] = bVar25;
      auVar2[2] = bVar27;
      auVar2[3] = bVar28;
      auVar2[4] = bVar29;
      auVar2[5] = bVar30;
      auVar2[6] = bVar31;
      auVar2[7] = bVar32;
      auVar2[8] = bVar33;
      auVar2[9] = bVar34;
      auVar2[10] = bVar35;
      auVar2[0xb] = bVar36;
      auVar2[0xc] = bVar37;
      auVar2[0xd] = bVar38;
      auVar2[0xe] = bVar39;
      auVar2[0xf] = bVar40;
      auVar41 = NEON_ext(auVar1,auVar2,8,1);
      lVar16 = CONCAT17(bVar32 | auVar41[7],
                        CONCAT16(bVar31 | auVar41[6],
                                 CONCAT15(bVar30 | auVar41[5],
                                          CONCAT14(bVar29 | auVar41[4],
                                                   CONCAT13(bVar28 | auVar41[3],
                                                            CONCAT12(bVar27 | auVar41[2],
                                                                     CONCAT11(bVar26 | auVar41[1],
                                                                              bVar25 | auVar41[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_5 = *(long *)(pbVar11 + 8);
    param_6 = *(ulong *)(pbVar11 + 0x10);
    lVar16 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar16,uVar9);
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



/* Entry: 101c45ddc; end: 101c45fbb;  */

uint FUN_101c45ddc(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar9 = param_1[1];
  uVar7 = *param_1;
  uVar5 = param_1[2];
  uVar10 = param_2[1];
  uVar8 = *param_2;
  uVar6 = param_2[2];
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  uStack_90 = uVar6;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  uStack_70 = uVar5;
  if (((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_101c46968(&uStack_80,auStack_b8);
      FUN_101c46968(&uStack_a0,auStack_b8);
LAB_101c45e5c:
      FUN_101c43834(uVar7,uVar9,uVar5);
      uVar7 = param_1[3];
      func_0x000100e25fcc(uVar7,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar7;
      goto LAB_101c45f98;
    }
LAB_101c45e84:
    FUN_101c46968(&uStack_80,auStack_b8);
    FUN_101c46968(&uStack_a0,auStack_b8);
    FUN_101c43834(uVar7,uVar9,uVar5);
    uVar7 = uVar8;
    uVar9 = uVar10;
    uVar5 = uVar6;
  }
  else {
    if ((uVar6 & 0x3000000000000000) == 0x3000000000000000) goto LAB_101c45e84;
    if ((uVar5 >> 0x3d & 1) == 0) {
      if ((uVar6 >> 0x3d & 1) != 0) goto LAB_101c45f04;
      FUN_101c46968(&uStack_80,auStack_b8);
      FUN_101c46968(&uStack_a0,auStack_b8);
      uVar3 = uVar5;
      uVar4 = uVar6;
LAB_101c45f68:
      uVar2 = uVar7;
      FUN_101c45d84(uVar7,uVar9,uVar3,uVar8,uVar10,uVar4);
      FUN_101c43834(uVar8,uVar10,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_101c45e5c;
    }
    else {
      if ((uVar6 >> 0x3d & 1) != 0) {
        FUN_101c46968(&uStack_80,auStack_b8);
        FUN_101c46968(&uStack_a0,auStack_b8);
        uVar3 = uVar5 & 0xdfffffffffffffff;
        uVar4 = uVar6 & 0xdfffffffffffffff;
        goto LAB_101c45f68;
      }
LAB_101c45f04:
      FUN_101c46968(&uStack_80,auStack_b8);
      FUN_101c46968(&uStack_a0,auStack_b8);
      FUN_101c43834(uVar8,uVar10,uVar6);
    }
  }
  FUN_101c43834(uVar7,uVar9,uVar5);
  uVar1 = 0;
LAB_101c45f98:
  return uVar1 & 1;
}



/* Entry: 101c45fbc; end: 101c4603b;  */

void FUN_101c45fbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e42e8;
  func_0x000107c61520(&UNK_10d9e42e8,&UNK_11045b830);
  puRam0000000112e0b288 = puVar1;
  return;
}



/* Entry: 101c4603c; end: 101c4605f;  */

void FUN_101c4603c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c46060();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c46060; end: 101c4609f;  */

void FUN_101c46060(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b2a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e42c0;
  func_0x000107c61520(&UNK_10d9e42c0,&UNK_11045b830);
  puRam0000000112e0b2a8 = puVar1;
  return;
}



/* Entry: 101c460a0; end: 101c460b7;  */

void FUN_101c460a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c45fbc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101c44df0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c460b8; end: 101c460f7;  */

void FUN_101c460b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b2b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4328;
  func_0x000107c61520(&UNK_10d9e4328,&UNK_11045b830);
  puRam0000000112e0b2b0 = puVar1;
  return;
}



/* Entry: 101c460f8; end: 101c4611b;  */

void FUN_101c460f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c4611c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c4611c; end: 101c4615b;  */

void FUN_101c4611c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b2b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4398;
  func_0x000107c61520(&UNK_10d9e4398,&UNK_11045b940);
  puRam0000000112e0b2b8 = puVar1;
  return;
}



/* Entry: 101c4615c; end: 101c4616f;  */

void FUN_101c4615c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101c45ffc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101c461a0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c46170; end: 101c4619f;  */

void FUN_101c46170(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c461a0; end: 101c461df;  */

void FUN_101c461a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b2c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e4350;
  func_0x000107c61520(&DAT_10d9e4350,&UNK_11045b940);
  puRam0000000112e0b2c0 = puVar1;
  return;
}



/* Entry: 101c461e0; end: 101c461e3;  */

void FUN_101c461e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4400;
  func_0x000107c61520(&UNK_10d9e4400,&UNK_11045b940);
  puRam0000000112e0b2c8 = puVar1;
  return;
}



/* Entry: 101c461e4; end: 101c46223;  */

void FUN_101c461e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b2c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4400;
  func_0x000107c61520(&UNK_10d9e4400,&UNK_11045b940);
  puRam0000000112e0b2c8 = puVar1;
  return;
}



/* Entry: 101c46224; end: 101c46287;  */

long FUN_101c46224(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c46288; end: 101c463ff;  */

undefined8 * FUN_101c46288(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[2];
  if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[2] = param_2[2];
  }
  else {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    FUN_101c437cc(uVar3,uVar1,uVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 101c46400; end: 101c464ab;  */

undefined8 * FUN_101c46400(undefined8 *param_1)

{
  FUN_101c43848(*param_1,param_1[1],param_1[2]);
  return param_1;
}



/* Entry: 101c464ac; end: 101c46577;  */

int FUN_101c464ac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101c46578; end: 101c46613;  */

undefined8 * FUN_101c46578(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_101c437cc(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 101c46614; end: 101c46653;  */

undefined8 * FUN_101c46614(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_101c43848(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 101c46654; end: 101c4673b;  */

int FUN_101c46654(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101c4673c; end: 101c46763;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c4673c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
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



/* Entry: 101c46764; end: 101c4680b;  */

undefined8 * FUN_101c46764(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 101c4680c; end: 101c4684f;  */

undefined8 * FUN_101c4680c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 101c46850; end: 101c468e7;  */

int FUN_101c46850(ulong *param_1,int param_2)

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



/* Entry: 101c468e8; end: 101c46967;  */

void FUN_101c468e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b2d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e436c;
  func_0x000107c61520(&DAT_10d9e436c,&UNK_11045b940);
  puRam0000000112e0b2d8 = puVar1;
  return;
}



/* Entry: 101c46968; end: 101c469eb;  */

undefined8 FUN_101c46968(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e0b2f0;
  func_0x0001000285a8(0x112e0b2f0,&UNK_10d9e44f8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c469ec; end: 101c46a2b;  */

undefined8 * FUN_101c469ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_101c437cc(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 101c46a2c; end: 101c46a6b;  */

void FUN_101c46a2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e0b350;
  func_0x0001000285a8(0x112e0b350,&UNK_10d9e4530);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101c46a6c; end: 101c46a93;  */

void FUN_101c46a6c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101c46a94; end: 101c46b3f;  */

void FUN_101c46a94(void)

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



/* Entry: 101c46b40; end: 101c46b53;  */

bool FUN_101c46b40(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c46b54; end: 101c46b9b;  */

void FUN_101c46b54(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e4810,0x2b,2);
  uRam0000000113804450 = uStack_38;
  uRam0000000113804448 = uStack_40;
  uRam0000000113804460 = uStack_28;
  uRam0000000113804458 = uStack_30;
  uRam0000000113804470 = uStack_18;
  uRam0000000113804468 = uStack_20;
  return;
}



/* Entry: 101c46b9c; end: 101c46c3b;  */

/* WARNING: Possible PIC construction at 0x000101c46be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c46bf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c46bec) */
/* WARNING: Removing unreachable block (ram,0x000101c46bfc) */

void FUN_101c46b9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0b358 != -1) {
    func_0x000107c61568(0x112e0b358,FUN_101c46b54);
  }
  uVar5 = uRam0000000113804470;
  uVar4 = uRam0000000113804468;
  uVar3 = uRam0000000113804460;
  uVar2 = uRam0000000113804458;
  uVar1 = uRam0000000113804450;
  *param_1 = uRam0000000113804448;
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



/* Entry: 101c46c3c; end: 101c46c83;  */

void FUN_101c46c3c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e47c0,0x43,2);
  uRam0000000113804480 = uStack_38;
  uRam0000000113804478 = uStack_40;
  uRam0000000113804490 = uStack_28;
  uRam0000000113804488 = uStack_30;
  uRam00000001138044a0 = uStack_18;
  uRam0000000113804498 = uStack_20;
  return;
}



/* Entry: 101c46c84; end: 101c46d9b;  */

/* WARNING: Removing unreachable block (ram,0x000101c46d64) */

void FUN_101c46c84(undefined8 param_1,long param_2,long param_3)

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
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_101c46cfc;
          pcVar4 = *(code **)(param_3 + 0x168);
        }
LAB_101c46cec:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x168);
          goto LAB_101c46cec;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x138);
          goto LAB_101c46cec;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x180);
          FUN_101c46f40();
          (*pcVar4)(unaff_x20 + 0x38,&UNK_11045bb40,lVar1,param_2,param_3);
        }
      }
LAB_101c46cfc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101c46d9c; end: 101c46f3f;  */

void FUN_101c46d9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar7;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar1 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar3 = unaff_x20[2];
  uVar1 = unaff_x20[3];
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar1 & 0xff000000000000) == 0) goto LAB_101c46e4c;
    }
    else {
      lVar5 = (long)(int)uVar3;
      lVar6 = (long)uVar3 >> 0x20;
LAB_101c46e2c:
      if (lVar5 == lVar6) goto LAB_101c46e4c;
    }
    (**(code **)(param_3 + 0x78))(uVar3,uVar1,2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(uVar3 + 0x10);
    lVar6 = *(long *)(uVar3 + 0x18);
    goto LAB_101c46e2c;
  }
LAB_101c46e4c:
  uVar3 = unaff_x20[4];
  uVar1 = unaff_x20[5];
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)uVar3;
      lVar6 = (long)uVar3 >> 0x20;
      goto LAB_101c46e84;
    }
    if ((uVar1 & 0xff000000000000) == 0) goto LAB_101c46ea4;
  }
  else {
    if (uVar4 != 2) goto LAB_101c46ea4;
    lVar5 = *(long *)(uVar3 + 0x10);
    lVar6 = *(long *)(uVar3 + 0x18);
LAB_101c46e84:
    if (lVar5 == lVar6) goto LAB_101c46ea4;
  }
  (**(code **)(param_3 + 0x78))(uVar3,uVar1,3,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_101c46ea4:
  if ((char)unaff_x20[6] == '\x01') {
    uVar3 = 1;
    (**(code **)(param_3 + 0x68))(1,4,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[7] != 0) {
    uStack_48 = (undefined1)unaff_x20[8];
    pcVar7 = *(code **)(param_3 + 0x80);
    uStack_50 = unaff_x20[7];
    FUN_101c46f40();
    (*pcVar7)(&uStack_50,5,&UNK_11045bb40,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
  return;
}



/* Entry: 101c46f40; end: 101c46f7f;  */

void FUN_101c46f40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e4538;
  func_0x000107c61520(&DAT_10d9e4538,&UNK_11045bb40);
  puRam0000000112e0b368 = puVar1;
  return;
}



/* Entry: 101c46f80; end: 101c46fd3;  */

/* WARNING: Possible PIC construction at 0x000101c473b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c473d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101c473d4) */
/* WARNING: Removing unreachable block (ram,0x000101c473d8) */
/* WARNING: Removing unreachable block (ram,0x000101c473f8) */
/* WARNING: Removing unreachable block (ram,0x000101c47424) */
/* WARNING: Removing unreachable block (ram,0x000101c4742c) */
/* WARNING: Removing unreachable block (ram,0x000101c4740c) */
/* WARNING: Removing unreachable block (ram,0x000101c47430) */
/* WARNING: Removing unreachable block (ram,0x000101c47434) */
/* WARNING: Removing unreachable block (ram,0x000101c47410) */
/* WARNING: Removing unreachable block (ram,0x000101c47438) */
/* WARNING: Removing unreachable block (ram,0x000101c47418) */
/* WARNING: Removing unreachable block (ram,0x000101c47420) */
/* WARNING: Removing unreachable block (ram,0x000101c47440) */
/* WARNING: Removing unreachable block (ram,0x000101c473b4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c46f80(undefined8 *param_1,byte *param_2)

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
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar26;
  undefined8 uVar27;
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
  
  puVar26 = &stack0xfffffffffffffff0;
  pbVar11 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = *(byte **)param_2;
  pbVar16 = *(byte **)(param_2 + 8);
  if ((byte *)*param_1 != *(byte **)param_2 || (byte *)param_1[1] != *(byte **)(param_2 + 8)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar14,pbVar15,pbVar16,0);
    return pbVar11;
  }
  uVar12 = param_1[2];
  func_0x000100e25fcc(uVar12,param_1[3],*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18));
  if ((uVar12 & 1) == 0) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar24 = (byte *)param_1[5];
  lVar23 = *(long *)(param_2 + 0x20);
  uVar12 = *(ulong *)(param_2 + 0x28);
  uVar27 = 0x101c473d4;
  puVar7 = &stack0xffffffffffffffe0;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = param_1;
    *(byte **)(puVar7 + -0x18) = param_2;
    *(undefined1 **)(puVar7 + -0x10) = puVar26;
    *(undefined8 *)(puVar7 + -8) = uVar27;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar12 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar12 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar12 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar18,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar12 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar24;
            puVar7[-0x67] = (char)((ulong)pbVar24 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar24 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar24 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar24 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar24 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70);
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
          unaff_x24 = pbVar24;
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
            param_2 = pbVar10;
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
          if (uVar17 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          param_2 = pbVar10;
          unaff_x25 = pbVar24;
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
        param_1 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar23,uVar12);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar12;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar19 == 0);
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
    *(undefined8 **)(puVar7 + -0xa0) = param_1;
    *(byte **)(puVar7 + -0x98) = param_2;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar22 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar27 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar27);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar16 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar27 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar27);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar10;
        pbVar14 = pbVar24;
        if ((pbVar10 == pbVar15) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar16 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar10 == pbVar16)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar11 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar11;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar16 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar10 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar16 = *(byte **)(pbVar13 + 0x18),
           pbVar24 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar13 + 0x10);
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar10;
        pbVar14 = pbVar24;
        if ((pbVar10 != pbVar15) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar28 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar28 = pbVar13[8] | (byte)lVar23;
        bVar29 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar30 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar31 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar32 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar33 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar34 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar35 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar36 = pbVar13[0x10] | (byte)lVar25;
        bVar37 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar38 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar39 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar40 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar41 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar42 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar43 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar28 = pbVar13[8] | (byte)lVar23;
      bVar29 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar30 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar31 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar32 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar33 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar34 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar35 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar36 = pbVar13[0x10] | (byte)lVar25;
      bVar37 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar38 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar39 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar40 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar41 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar42 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar43 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
      lVar23 = CONCAT17(bVar35 | auVar44[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar12 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar27 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar27);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar26 = *(undefined1 **)(puVar7 + -0x90);
    uVar27 = *(undefined8 *)(puVar7 + -0x88);
    param_1 = *(undefined8 **)(puVar7 + -0xa0);
    param_2 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 101c46fd4; end: 101c47003;  */

undefined1  [16] FUN_101c46fd4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 101c47004; end: 101c47037;  */

void FUN_101c47004(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 101c47038; end: 101c4704b;  */

undefined1  [16] FUN_101c47038(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x101c47048;
  return auVar1;
}



/* Entry: 101c4704c; end: 101c47073;  */

void FUN_101c4704c(void)

{
  FUN_101c46c84();
  return;
}



/* Entry: 101c47074; end: 101c47077;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c47074(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c47078; end: 101c470af;  */

uint FUN_101c47078(long param_1,long param_2)

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
  FUN_101c47a1c();
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



/* Entry: 101c470b0; end: 101c47117;  */

uint FUN_101c470b0(undefined8 *param_1)

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
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
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
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_101c47380(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101c47118; end: 101c471b7;  */

/* WARNING: Possible PIC construction at 0x000101c47164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c47174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c47168) */
/* WARNING: Removing unreachable block (ram,0x000101c47178) */

void FUN_101c47118(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0b360 != -1) {
    func_0x000107c61568(0x112e0b360,FUN_101c46c3c);
  }
  uVar5 = uRam00000001138044a0;
  uVar4 = uRam0000000113804498;
  uVar3 = uRam0000000113804490;
  uVar2 = uRam0000000113804488;
  uVar1 = uRam0000000113804480;
  *param_1 = uRam0000000113804478;
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



/* Entry: 101c471b8; end: 101c471f3;  */

void FUN_101c471b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0b3b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0b3b0,&UNK_10d9e47b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c471f4; end: 101c47317;  */

void FUN_101c471f4(undefined8 param_1,undefined8 param_2)

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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
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



/* Entry: 101c47318; end: 101c4737f;  */

uint FUN_101c47318(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
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
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_101c47380(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101c47380; end: 101c47453;  */

/* WARNING: Possible PIC construction at 0x000101c473b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c473d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101c473d4) */
/* WARNING: Removing unreachable block (ram,0x000101c473d8) */
/* WARNING: Removing unreachable block (ram,0x000101c473f8) */
/* WARNING: Removing unreachable block (ram,0x000101c47424) */
/* WARNING: Removing unreachable block (ram,0x000101c4742c) */
/* WARNING: Removing unreachable block (ram,0x000101c4740c) */
/* WARNING: Removing unreachable block (ram,0x000101c47430) */
/* WARNING: Removing unreachable block (ram,0x000101c47434) */
/* WARNING: Removing unreachable block (ram,0x000101c47410) */
/* WARNING: Removing unreachable block (ram,0x000101c47438) */
/* WARNING: Removing unreachable block (ram,0x000101c47418) */
/* WARNING: Removing unreachable block (ram,0x000101c47420) */
/* WARNING: Removing unreachable block (ram,0x000101c47440) */
/* WARNING: Removing unreachable block (ram,0x000101c473b4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c47380(undefined8 *param_1,byte *param_2)

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
  byte *pbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar26;
  undefined8 uVar27;
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
  
  puVar26 = &stack0xfffffffffffffff0;
  pbVar11 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = *(byte **)param_2;
  pbVar16 = *(byte **)(param_2 + 8);
  if ((byte *)*param_1 != *(byte **)param_2 || (byte *)param_1[1] != *(byte **)(param_2 + 8)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar14,pbVar15,pbVar16,0);
    return pbVar11;
  }
  uVar12 = param_1[2];
  func_0x000100e25fcc(uVar12,param_1[3],*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18));
  if ((uVar12 & 1) == 0) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar24 = (byte *)param_1[5];
  lVar23 = *(long *)(param_2 + 0x20);
  uVar12 = *(ulong *)(param_2 + 0x28);
  uVar27 = 0x101c473d4;
  puVar7 = &stack0xffffffffffffffe0;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = param_1;
    *(byte **)(puVar7 + -0x18) = param_2;
    *(undefined1 **)(puVar7 + -0x10) = puVar26;
    *(undefined8 *)(puVar7 + -8) = uVar27;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar12 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar12 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar12 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar18,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar12 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar24;
            puVar7[-0x67] = (char)((ulong)pbVar24 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar24 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar24 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar24 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar24 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70);
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
          unaff_x24 = pbVar24;
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
            param_2 = pbVar10;
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
          if (uVar17 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar25 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          param_2 = pbVar10;
          unaff_x25 = pbVar24;
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
        param_1 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar23,uVar12);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar12;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar19 == 0);
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
    *(undefined8 **)(puVar7 + -0xa0) = param_1;
    *(byte **)(puVar7 + -0x98) = param_2;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar22 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar27 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar27);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar16 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar27 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar27);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar10;
        pbVar14 = pbVar24;
        if ((pbVar10 == pbVar15) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar16 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar10 == pbVar16)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar23);
            func_0x000107c61174();
            pbVar11 = pbVar22;
            func_0x000107c60118();
            func_0x000107c61170(pbVar22);
            func_0x000107c61170(lVar23);
            pbVar22 = pbVar11;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar16 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar10 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar16 = *(byte **)(pbVar13 + 0x18),
           pbVar24 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar16 = *(byte **)(pbVar13 + 0x10);
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar10;
        pbVar14 = pbVar24;
        if ((pbVar10 != pbVar15) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar28 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar28 = pbVar13[8] | (byte)lVar23;
        bVar29 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar30 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar31 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar32 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar33 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar34 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar35 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar36 = pbVar13[0x10] | (byte)lVar25;
        bVar37 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar38 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar39 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar40 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar41 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar42 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar43 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar28 = pbVar13[8] | (byte)lVar23;
      bVar29 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar30 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar31 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar32 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar33 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar34 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar35 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar36 = pbVar13[0x10] | (byte)lVar25;
      bVar37 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar38 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar39 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar40 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar41 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar42 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar43 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
      lVar23 = CONCAT17(bVar35 | auVar44[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar12 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar27 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar27);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    puVar26 = *(undefined1 **)(puVar7 + -0x90);
    uVar27 = *(undefined8 *)(puVar7 + -0x88);
    param_1 = *(undefined8 **)(puVar7 + -0xa0);
    param_2 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 101c47454; end: 101c47493;  */

void FUN_101c47454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e46b8;
  func_0x000107c61520(&UNK_10d9e46b8,&UNK_11045bbb8);
  puRam0000000112e0b370 = puVar1;
  return;
}



/* Entry: 101c47494; end: 101c474a7;  */

void FUN_101c47494(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c474a8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101c474e8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c474a8; end: 101c47527;  */

void FUN_101c474a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e45d0;
  func_0x000107c61520(&UNK_10d9e45d0,&UNK_11045bb40);
  puRam0000000112e0b378 = puVar1;
  return;
}



/* Entry: 101c47528; end: 101c4752b;  */

void FUN_101c47528(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e0b388 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0b390;
  func_0x00010002969c(0x112e0b390,&UNK_10d9e4558);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e0b388 = puVar2;
  return;
}



/* Entry: 101c4752c; end: 101c4757b;  */

void FUN_101c4752c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e0b388 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0b390;
  func_0x00010002969c(0x112e0b390,&UNK_10d9e4558);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e0b388 = puVar2;
  return;
}



/* Entry: 101c4757c; end: 101c4757f;  */

void FUN_101c4757c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4610;
  func_0x000107c61520(&UNK_10d9e4610,&UNK_11045bb40);
  puRam0000000112e0b398 = puVar1;
  return;
}



/* Entry: 101c47580; end: 101c475bf;  */

void FUN_101c47580(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4610;
  func_0x000107c61520(&UNK_10d9e4610,&UNK_11045bb40);
  puRam0000000112e0b398 = puVar1;
  return;
}



/* Entry: 101c475c0; end: 101c475e3;  */

void FUN_101c475c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c475e4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c475e4; end: 101c47623;  */

void FUN_101c475e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b3a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4690;
  func_0x000107c61520(&UNK_10d9e4690,&UNK_11045bbb8);
  puRam0000000112e0b3a0 = puVar1;
  return;
}



/* Entry: 101c47624; end: 101c47637;  */

void FUN_101c47624(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c47454();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101c44db0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c47638; end: 101c47667;  */

void FUN_101c47638(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c47668; end: 101c4766b;  */

void FUN_101c47668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b3a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e46f8;
  func_0x000107c61520(&UNK_10d9e46f8,&UNK_11045bbb8);
  puRam0000000112e0b3a8 = puVar1;
  return;
}



/* Entry: 101c4766c; end: 101c476ab;  */

void FUN_101c4766c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b3a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e46f8;
  func_0x000107c61520(&UNK_10d9e46f8,&UNK_11045bbb8);
  puRam0000000112e0b3a8 = puVar1;
  return;
}



/* Entry: 101c476ac; end: 101c4774b;  */

int FUN_101c476ac(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101c4774c; end: 101c477af;  */

long FUN_101c4774c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c477b0; end: 101c478f3;  */

undefined8 * FUN_101c477b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  return param_1;
}



/* Entry: 101c478f4; end: 101c4796f;  */

undefined8 * FUN_101c478f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101c47970; end: 101c47a1b;  */

int FUN_101c47970(int *param_1,int param_2)

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



/* Entry: 101c47a1c; end: 101c47a5b;  */

void FUN_101c47a1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b3b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e4664;
  func_0x000107c61520(&DAT_10d9e4664,&UNK_11045bbb8);
  puRam0000000112e0b3b8 = puVar1;
  return;
}



/* Entry: 101c47a5c; end: 101c47a9f;  */

void FUN_101c47a5c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 101c47aa0; end: 101c47adf;  */

void FUN_101c47aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e0b408;
  func_0x0001000285a8(0x112e0b408,&UNK_10d9e4840);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101c47ae0; end: 101c47b1b;  */

void FUN_101c47ae0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101c47b1c; end: 101c47bfb;  */

void FUN_101c47b1c(void)

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



/* Entry: 101c47bfc; end: 101c47c37;  */

bool FUN_101c47bfc(ulong *param_1,ulong *param_2)

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



/* Entry: 101c47c38; end: 101c47c7f;  */

void FUN_101c47c38(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e4c00,0x38,2);
  uRam00000001138044b0 = uStack_38;
  uRam00000001138044a8 = uStack_40;
  uRam00000001138044c0 = uStack_28;
  uRam00000001138044b8 = uStack_30;
  uRam00000001138044d0 = uStack_18;
  uRam00000001138044c8 = uStack_20;
  return;
}


