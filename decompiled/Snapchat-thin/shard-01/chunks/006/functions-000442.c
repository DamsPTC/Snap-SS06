/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013283a0; end: 1013283b3;  */

void FUN_1013283a0(void)

{
  FUN_10132814c();
  return;
}



/* Entry: 1013283b4; end: 1013283eb;  */

void FUN_1013283b4(void)

{
  FUN_101328200();
  return;
}



/* Entry: 1013283ec; end: 1013283ef;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1013283ec(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1013283f0; end: 101328427;  */

uint FUN_1013283f0(long param_1,long param_2)

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
  func_0x000101329808();
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



/* Entry: 101328428; end: 10132846f;  */

uint FUN_101328428(undefined8 *param_1)

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
  FUN_101328bf0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101328470; end: 10132850f;  */

/* WARNING: Possible PIC construction at 0x0001013284bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013284cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013284c0) */
/* WARNING: Removing unreachable block (ram,0x0001013284d0) */

void FUN_101328470(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d732e0 != -1) {
    func_0x000107c61568(0x112d732e0,FUN_101328104);
  }
  uVar5 = uRam00000001137ff370;
  uVar4 = uRam00000001137ff368;
  uVar3 = uRam00000001137ff360;
  uVar2 = uRam00000001137ff358;
  uVar1 = uRam00000001137ff350;
  *param_1 = uRam00000001137ff348;
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



/* Entry: 101328510; end: 10132854b;  */

void FUN_101328510(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d73370;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d73370,&UNK_10d933858);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10132854c; end: 10132864f;  */

void FUN_10132854c(undefined8 param_1,undefined8 param_2)

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
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101328650; end: 1013286db;  */

uint FUN_101328650(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101328bf0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1013286dc; end: 10132878f;  */

/* WARNING: Removing unreachable block (ram,0x00010132878c) */

void FUN_1013286dc(undefined8 param_1,long param_2,long param_3)

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
        func_0x000101328e04();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101328790; end: 101328833;  */

void FUN_101328790(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
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
    func_0x000101328e04();
    (*pcVar2)(&lStack_60,1,&UNK_1103a33d0,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 101328834; end: 101328873;  */

void FUN_101328834(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 101328874; end: 1013288a3;  */

undefined1  [16] FUN_101328874(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1013288a4; end: 1013288d7;  */

void FUN_1013288a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1013288d8; end: 1013288eb;  */

undefined1  [16] FUN_1013288d8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1013288e8;
  return auVar1;
}



/* Entry: 1013288ec; end: 101328927;  */

void FUN_1013288ec(void)

{
  FUN_1013286dc();
  return;
}



/* Entry: 101328928; end: 10132892b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101328928(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10132892c; end: 101328963;  */

uint FUN_10132892c(long param_1,long param_2)

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
  FUN_1013297c8();
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



/* Entry: 101328964; end: 101328983;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101328964(long *param_1)

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
    if (lVar18 < 2) {
      if (lVar18 == 0) {
        if (lVar20 == 0) {
FUN_100e25fcc:
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
                (uVar13 >> 0x3e < 3)) ||
               ((uVar22 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
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
            if (uVar6 >> 0x1e < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
              if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar7)();
              }
              goto LAB_100e2608c;
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
            if (1 < uVar23) goto LAB_100e26050;
LAB_100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar13 >> 0x30 & 0xff;
LAB_100e2608c:
              if (uVar22 == uVar24) goto LAB_100e26094;
            }
            else {
              iVar21 = (int)((ulong)lVar15 >> 0x20);
              if (SBORROW4(iVar21,(int)lVar15)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar7)();
              }
              if (uVar22 == (long)(iVar21 - (int)lVar15)) {
LAB_100e26094:
                if ((long)uVar22 < 1) goto LAB_100e26128;
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
LAB_100e26260:
                    unaff_x21 = 0;
                    FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                  (undefined1 *)((long)register0x00000008 + -0x70));
                    plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto LAB_100e262b0;
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
                      goto LAB_100e262a4;
                    }
                  }
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if (uVar19 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                    goto LAB_100e26260;
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
LAB_100e262a4:
                unaff_x20 = (long *)((ulong)pbVar27 & 0x3fffffffffffffff);
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                              lVar15,uVar13);
                plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = uVar13;
                goto LAB_100e262b0;
              }
            }
            plVar9 = (long *)0x0;
          }
LAB_100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
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
          *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,pbVar29,uVar11);
                uVar13 = (ulong)((uint)pbVar12 & 1);
                goto LAB_100e266f0;
              }
              goto LAB_100e266ec;
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
                    FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
              goto LAB_100e266ec;
            }
            if (pbVar29[0x28] != 1) goto LAB_100e266ec;
            pbVar16 = *(byte **)(pbVar29 + 8);
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto LAB_100e266ec;
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
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
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
                        *(long *)pbVar29 == 0) goto LAB_100e26708;
                  }
                  goto LAB_100e266ec;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0)) {
                  if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto LAB_100e266ec;
                }
                else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto LAB_100e266ec;
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
              if (pbVar29[0x28] != 5) goto LAB_100e266ec;
              lVar15 = *(long *)(pbVar29 + 8);
              uVar13 = *(ulong *)(pbVar29 + 0x10);
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              if (((ulong)pbVar12 & 1) == 0) goto LAB_100e266ec;
              unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
              unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
              unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
              unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
              unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
              unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
              unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
              unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
              goto FUN_100e25fcc;
            }
            if (bVar30 == 3) {
              if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
              goto LAB_100e266ec;
              pbVar17 = *(byte **)(pbVar29 + 0x10);
              pbVar26 = *(byte **)(pbVar29 + 0x20);
              if (pbVar27 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) goto LAB_100e266ec;
              }
              else {
                if (pbVar17 == (byte *)0x0) goto LAB_100e266ec;
                pbVar16 = *(byte **)(pbVar29 + 8);
                pbVar12 = pbVar10;
                pbVar14 = pbVar27;
                if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
                if (pbVar26 != (byte *)0x0) goto LAB_100e266ec;
              }
              else {
                if (pbVar26 == (byte *)0x0) goto LAB_100e266ec;
                if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
                goto LAB_100e26708;
                func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
                pbVar29 = pbVar28;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
LAB_100e266ec:
                  uVar13 = 0;
LAB_100e266f0:
                  auVar47._8_8_ = pbVar29;
                  auVar47._0_8_ = uVar13;
                  return auVar47;
                }
              }
            }
            else {
              if (pbVar29[0x28] != 4) goto LAB_100e266ec;
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
                 (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
                 pbVar17 = *(byte **)(pbVar29 + 0x18),
                 pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
              goto code_r0x000107c605b8;
            }
          }
LAB_100e26708:
          uVar13 = 1;
          goto LAB_100e266f0;
        }
      }
      else if (lVar20 == 1) goto FUN_100e25fcc;
    }
    else if (lVar18 == 2) {
      if (lVar20 == 2) goto FUN_100e25fcc;
    }
    else if (lVar18 == 3) {
      if (lVar20 == 3) goto FUN_100e25fcc;
    }
    else if (lVar20 == 4) goto FUN_100e25fcc;
  }
  else if (lVar20 == lVar18) goto FUN_100e25fcc;
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 101328984; end: 101328a23;  */

/* WARNING: Possible PIC construction at 0x0001013289d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013289e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013289d4) */
/* WARNING: Removing unreachable block (ram,0x0001013289e4) */

void FUN_101328984(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112d732f0 != -1) {
    func_0x000107c61568(0x112d732f0,0x101328694);
  }
  uVar5 = uRam00000001137ff3a0;
  uVar4 = uRam00000001137ff398;
  uVar3 = uRam00000001137ff390;
  uVar2 = uRam00000001137ff388;
  uVar1 = uRam00000001137ff380;
  *param_1 = uRam00000001137ff378;
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



/* Entry: 101328a24; end: 101328a5f;  */

void FUN_101328a24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112d73360;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112d73360,&UNK_10d933850);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101328a60; end: 101328b73;  */

void FUN_101328a60(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101328b74; end: 101328b9f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_101328b74(long *param_1,long *param_2)

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
    if (lVar18 < 2) {
      if (lVar18 == 0) {
        if (lVar20 == 0) {
FUN_100e25fcc:
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
                (uVar13 >> 0x3e < 3)) ||
               ((uVar22 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
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
            if (uVar6 >> 0x1e < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
              if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar7)();
              }
              goto LAB_100e2608c;
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
            if (1 < uVar23) goto LAB_100e26050;
LAB_100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar13 >> 0x30 & 0xff;
LAB_100e2608c:
              if (uVar22 == uVar24) goto LAB_100e26094;
            }
            else {
              iVar21 = (int)((ulong)lVar15 >> 0x20);
              if (SBORROW4(iVar21,(int)lVar15)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar7)();
              }
              if (uVar22 == (long)(iVar21 - (int)lVar15)) {
LAB_100e26094:
                if ((long)uVar22 < 1) goto LAB_100e26128;
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
LAB_100e26260:
                    unaff_x21 = 0;
                    FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                  (undefined1 *)((long)register0x00000008 + -0x70));
                    plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto LAB_100e262b0;
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
                      goto LAB_100e262a4;
                    }
                  }
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if (uVar19 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                    goto LAB_100e26260;
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
LAB_100e262a4:
                unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                              lVar15,uVar13);
                plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = uVar13;
                goto LAB_100e262b0;
              }
            }
            plVar9 = (long *)0x0;
          }
LAB_100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
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
          *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,pbVar29,uVar11);
                uVar13 = (ulong)((uint)pbVar12 & 1);
                goto LAB_100e266f0;
              }
              goto LAB_100e266ec;
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
                    FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
              goto LAB_100e266ec;
            }
            if (pbVar29[0x28] != 1) goto LAB_100e266ec;
            pbVar16 = *(byte **)(pbVar29 + 8);
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto LAB_100e266ec;
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
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
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
                        *(long *)pbVar29 == 0) goto LAB_100e26708;
                  }
                  goto LAB_100e266ec;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0)) {
                  if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto LAB_100e266ec;
                }
                else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto LAB_100e266ec;
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
              if (pbVar29[0x28] != 5) goto LAB_100e266ec;
              lVar15 = *(long *)(pbVar29 + 8);
              uVar13 = *(ulong *)(pbVar29 + 0x10);
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              if (((ulong)pbVar12 & 1) == 0) goto LAB_100e266ec;
              unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
              unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
              unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
              unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
              unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
              unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
              unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
              unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
              goto FUN_100e25fcc;
            }
            if (bVar30 == 3) {
              if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
              goto LAB_100e266ec;
              pbVar17 = *(byte **)(pbVar29 + 0x10);
              pbVar26 = *(byte **)(pbVar29 + 0x20);
              if (pbVar27 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) goto LAB_100e266ec;
              }
              else {
                if (pbVar17 == (byte *)0x0) goto LAB_100e266ec;
                pbVar16 = *(byte **)(pbVar29 + 8);
                pbVar12 = pbVar10;
                pbVar14 = pbVar27;
                if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
                if (pbVar26 != (byte *)0x0) goto LAB_100e266ec;
              }
              else {
                if (pbVar26 == (byte *)0x0) goto LAB_100e266ec;
                if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
                goto LAB_100e26708;
                func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
                pbVar29 = pbVar28;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
LAB_100e266ec:
                  uVar13 = 0;
LAB_100e266f0:
                  auVar47._8_8_ = pbVar29;
                  auVar47._0_8_ = uVar13;
                  return auVar47;
                }
              }
            }
            else {
              if (pbVar29[0x28] != 4) goto LAB_100e266ec;
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
                 (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
                 pbVar17 = *(byte **)(pbVar29 + 0x18),
                 pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
              goto code_r0x000107c605b8;
            }
          }
LAB_100e26708:
          uVar13 = 1;
          goto LAB_100e266f0;
        }
      }
      else if (lVar20 == 1) goto FUN_100e25fcc;
    }
    else if (lVar18 == 2) {
      if (lVar20 == 2) goto FUN_100e25fcc;
    }
    else if (lVar18 == 3) {
      if (lVar20 == 3) goto FUN_100e25fcc;
    }
    else if (lVar20 == 4) goto FUN_100e25fcc;
  }
  else if (lVar20 == lVar18) goto FUN_100e25fcc;
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 101328ba0; end: 101328bef;  */

undefined8 FUN_101328ba0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d732d0;
  func_0x0001000285a8(0x112d732d0,&UNK_10d9334b8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101328bf0; end: 101328dc3;  */

uint FUN_101328bf0(undefined8 *param_1,undefined8 *param_2)

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
    if (0xe < uVar11 >> 0x3c) goto LAB_101328c98;
    if (lVar4 == lVar5) {
      if (lVar6 != lVar7) {
        FUN_101328ba0(&lStack_80,auStack_c0);
        FUN_101328ba0(&lStack_a0,auStack_c0);
        lVar5 = lVar4;
        goto LAB_101328d74;
      }
      FUN_101328ba0(&lStack_80,auStack_c0);
      FUN_101328ba0(&lStack_a0,auStack_c0);
      uVar3 = uVar8;
      FUN_100e25fcc(uVar8,uVar10,uVar9,uVar11);
      FUN_101327178(lVar4,lVar6,uVar9,uVar11);
      if ((uVar3 & 1) != 0) goto LAB_101328c68;
    }
    else {
      FUN_101328ba0(&lStack_80,auStack_c0);
      FUN_101328ba0(&lStack_a0,auStack_c0);
LAB_101328d74:
      FUN_101327178(lVar5,lVar7,uVar9,uVar11);
    }
  }
  else {
    if (0xe < uVar11 >> 0x3c) {
      FUN_101328ba0(&lStack_80,auStack_c0);
      FUN_101328ba0(&lStack_a0,auStack_c0);
LAB_101328c68:
      FUN_101327178(lVar4,lVar6,uVar8,uVar10);
      uVar2 = *param_1;
      FUN_100e25fcc(uVar2,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar2;
      goto LAB_101328da0;
    }
LAB_101328c98:
    FUN_101328ba0(&lStack_80,auStack_c0);
    FUN_101328ba0(&lStack_a0,auStack_c0);
    FUN_101327178(lVar4,lVar6,uVar8,uVar10);
    lVar4 = lVar5;
    lVar6 = lVar7;
    uVar8 = uVar9;
    uVar10 = uVar11;
  }
  FUN_101327178(lVar4,lVar6,uVar8,uVar10);
  uVar1 = 0;
LAB_101328da0:
  return uVar1 & 1;
}



/* Entry: 101328dc4; end: 101328e43;  */

void FUN_101328dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d732e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933640;
  func_0x000107c61520(&UNK_10d933640,&UNK_1103a3448);
  puRam0000000112d732e8 = puVar1;
  return;
}



/* Entry: 101328e44; end: 101328ec3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101328e44(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
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
    if (param_5 < 2) {
      if (param_5 == 0) {
        if (param_1 == 0) {
FUN_100e25fcc:
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
LAB_100e26128:
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
              if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
              if (uVar18 == 0) {
                uVar19 = param_8 >> 0x30 & 0xff;
                goto LAB_100e2608c;
              }
              iVar16 = (int)((ulong)param_7 >> 0x20);
              if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar17 == (long)(iVar16 - (int)param_7)) goto LAB_100e26094;
LAB_100e26154:
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
              if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
              if (uVar18 == 2) {
                uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
                if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
LAB_100e2608c:
                if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
                if ((long)uVar17 < 1) goto LAB_100e26128;
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
LAB_100e26260:
                    unaff_x21 = 0;
                    FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                  (undefined1 *)((long)register0x00000008 + -0x70));
                    pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto LAB_100e262b0;
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
                      goto LAB_100e262a4;
                    }
                  }
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if (uVar15 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                    goto LAB_100e26260;
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
LAB_100e262a4:
                unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,
                              param_7,param_8);
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = param_8;
              }
              else {
                pbVar8 = (byte *)(ulong)(uVar17 == 0);
              }
            }
LAB_100e262b0:
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
            *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
                  FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                  FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
                   param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18)))
                {
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
                                                                          CONCAT11(bVar24 | auVar39[
                                                  1],bVar23 | auVar39[0]))))))) == 0 &&
                    *(long *)pbVar11 == 0) {
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
                                                                             CONCAT11(bVar24 | 
                                                  auVar39[1],bVar23 | auVar39[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar11[0x28] != 5) {
              return (byte *)0x0;
            }
            param_7 = *(long *)(pbVar11 + 8);
            param_8 = *(ulong *)(pbVar11 + 0x10);
            lVar21 = *(long *)pbVar11;
            uVar9 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
      else if (param_1 == 1) goto FUN_100e25fcc;
    }
    else if (param_5 == 2) {
      if (param_1 == 2) goto FUN_100e25fcc;
    }
    else if (param_5 == 3) {
      if (param_1 == 3) goto FUN_100e25fcc;
    }
    else if (param_1 == 4) goto FUN_100e25fcc;
  }
  else if (param_1 == param_5) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 101328ec4; end: 101328f03;  */

void FUN_101328ec4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933718;
  func_0x000107c61520(&UNK_10d933718,&UNK_1103a34c8);
  puRam0000000112d73300 = puVar1;
  return;
}



/* Entry: 101328f04; end: 101328f17;  */

void FUN_101328f04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101328f18();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101328f58)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101328f18; end: 101328f97;  */

void FUN_101328f18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933558;
  func_0x000107c61520(&UNK_10d933558,&UNK_1103a33d0);
  puRam0000000112d73308 = puVar1;
  return;
}



/* Entry: 101328f98; end: 101328f9b;  */

void FUN_101328f98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d73318 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d73320;
  func_0x00010002969c(0x112d73320,&UNK_10d9334e0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d73318 = puVar2;
  return;
}



/* Entry: 101328f9c; end: 101328feb;  */

void FUN_101328f9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d73318 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d73320;
  func_0x00010002969c(0x112d73320,&UNK_10d9334e0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d73318 = puVar2;
  return;
}



/* Entry: 101328fec; end: 101328fef;  */

void FUN_101328fec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933598;
  func_0x000107c61520(&UNK_10d933598,&UNK_1103a33d0);
  puRam0000000112d73328 = puVar1;
  return;
}



/* Entry: 101328ff0; end: 10132902f;  */

void FUN_101328ff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933598;
  func_0x000107c61520(&UNK_10d933598,&UNK_1103a33d0);
  puRam0000000112d73328 = puVar1;
  return;
}



/* Entry: 101329030; end: 101329053;  */

void FUN_101329030(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101329054();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101329054; end: 101329093;  */

void FUN_101329054(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933618;
  func_0x000107c61520(&UNK_10d933618,&UNK_1103a3448);
  puRam0000000112d73330 = puVar1;
  return;
}



/* Entry: 101329094; end: 1013290a7;  */

void FUN_101329094(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101328dc4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1013290a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1013290a8; end: 1013290e7;  */

void FUN_1013290a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9335d0;
  func_0x000107c61520(&DAT_10d9335d0,&UNK_1103a3448);
  puRam0000000112d73338 = puVar1;
  return;
}



/* Entry: 1013290e8; end: 1013290eb;  */

void FUN_1013290e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933680;
  func_0x000107c61520(&UNK_10d933680,&UNK_1103a3448);
  puRam0000000112d73340 = puVar1;
  return;
}



/* Entry: 1013290ec; end: 10132912b;  */

void FUN_1013290ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933680;
  func_0x000107c61520(&UNK_10d933680,&UNK_1103a3448);
  puRam0000000112d73340 = puVar1;
  return;
}



/* Entry: 10132912c; end: 10132914f;  */

void FUN_10132912c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101329150();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101329150; end: 10132918f;  */

void FUN_101329150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9336f0;
  func_0x000107c61520(&UNK_10d9336f0,&UNK_1103a34c8);
  puRam0000000112d73348 = puVar1;
  return;
}



/* Entry: 101329190; end: 1013291a3;  */

void FUN_101329190(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101328ec4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1013291d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1013291a4; end: 1013291d3;  */

void FUN_1013291a4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1013291d4; end: 101329213;  */

void FUN_1013291d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9336a8;
  func_0x000107c61520(&DAT_10d9336a8,&UNK_1103a34c8);
  puRam0000000112d73350 = puVar1;
  return;
}



/* Entry: 101329214; end: 101329217;  */

void FUN_101329214(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933758;
  func_0x000107c61520(&UNK_10d933758,&UNK_1103a34c8);
  puRam0000000112d73358 = puVar1;
  return;
}



/* Entry: 101329218; end: 101329257;  */

void FUN_101329218(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d933758;
  func_0x000107c61520(&UNK_10d933758,&UNK_1103a34c8);
  puRam0000000112d73358 = puVar1;
  return;
}



/* Entry: 101329258; end: 1013292f7;  */

int FUN_101329258(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1013292f8; end: 10132933f;  */

/* WARNING: Possible PIC construction at 0x000101329310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101329314) */
/* WARNING: Removing unreachable block (ram,0x000101329330) */
/* WARNING: Removing unreachable block (ram,0x000101329324) */

void FUN_1013292f8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101329340; end: 10132949b;  */

undefined8 * FUN_101329340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar2 = param_2[5];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    uVar1 = param_2[4];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[4] = uVar1;
    param_1[5] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  return param_1;
}



/* Entry: 10132949c; end: 1013294cf;  */

undefined8 FUN_10132949c(undefined8 param_1)

{
  (*(code *)&DAT_101c2f70c)();
  return param_1;
}



/* Entry: 1013294d0; end: 10132955f;  */

undefined8 * FUN_1013294d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar1;
      uVar1 = param_1[4];
      param_1[4] = param_2[4];
      param_1[5] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_10132949c(param_1 + 2);
  }
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 101329560; end: 10132962b;  */

int FUN_101329560(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10132962c; end: 1013296cb;  */

undefined8 * FUN_10132962c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 1013296cc; end: 101329713;  */

undefined8 * FUN_1013296cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101329714; end: 1013297c7;  */

int FUN_101329714(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1013297c8; end: 101329887;  */

void FUN_1013297c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d73368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9336c4;
  func_0x000107c61520(&DAT_10d9336c4,&UNK_1103a34c8);
  puRam0000000112d73368 = puVar1;
  return;
}



/* Entry: 101329888; end: 10132988f;  */

long FUN_101329888(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101329890; end: 1013298cf;  */

long FUN_101329890(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  FUN_100e9ebd4(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 1013298d0; end: 1013298eb;  */

void FUN_1013298d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100e9ebd4(param_1,unaff_x20 + 0x10);
  return;
}



/* Entry: 1013298ec; end: 101329907;  */

void FUN_1013298ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101329908,0,0);
  return;
}



/* Entry: 101329908; end: 101329a5f;  */

/* WARNING: Removing unreachable block (ram,0x00010132999c) */

void FUN_101329908(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x98);
  func_0x000100e1b010(*(long *)(unaff_x22 + 0xa8) + 0x10,unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  lVar4 = unaff_x22 + 0x40;
  func_0x0001000a8868(lVar4,uVar2);
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar10 = puVar8[5];
  uVar9 = puVar8[4];
  uVar13 = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x18) = puVar8[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  FUN_1013290a8();
  func_0x000100075890(unaff_x22 + 0x88,0,0,&UNK_1103a3448,PTR___s10Foundation4DataVN_110350ae0,lVar4
                      ,&PTR_DAT_110789f58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar9;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar10;
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar5;
  plVar6 = plVar5;
  FUN_1013291d4();
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101329a60;
                    /* WARNING: Could not recover jumptable at 0x000101329a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (unaff_x22 + 0x68,0xd000000000000046,0x800000010ef36f60,uVar9,uVar10,
             *(undefined8 *)(unaff_x22 + 0xa0),&UNK_1103a34c8,plVar6,uVar2,lVar3);
  return;
}



/* Entry: 101329a60; end: 101329ad3;  */

void FUN_101329a60(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  uVar4 = *(undefined8 *)(lVar3 + 0xb0);
  *(long *)(lVar3 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xc0));
  func_0x00010006c090(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101329ad4;
  }
  else {
    pcVar2 = FUN_101329b2c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101329ad4; end: 101329b2b;  */

void FUN_101329ad4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000101329b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar3,uVar1,uVar2);
  return;
}



/* Entry: 101329b2c; end: 101329ba3;  */

void FUN_101329b2c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000101329b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101329ba4; end: 101329c27; -[_TtC39IncentiveCampaignInviteTakeoverProvider39IncentiveCampaignInviteTakeoverProvider canShowCampaign:] */

uint FUN_101329ba4(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    if ((param_3 == -0x2fffffffffffffd4) && (param_2 == -0x7ffffffef10c9000)) {
      uVar1 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar1 = (uint)param_3;
    }
    func_0x000107c6142c(param_2);
  }
  return uVar1 & 1;
}



/* Entry: 101329c28; end: 101329edf;  */

/* WARNING: Possible PIC construction at 0x000101329d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101329d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101329dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101329e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101329e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101329dcc) */
/* WARNING: Removing unreachable block (ram,0x000101329e00) */
/* WARNING: Removing unreachable block (ram,0x000101329e30) */
/* WARNING: Removing unreachable block (ram,0x000101329d88) */
/* WARNING: Removing unreachable block (ram,0x000101329d44) */
/* WARNING: Removing unreachable block (ram,0x000101329e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101329c28(undefined *param_1)

{
  ulong *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  if (param_1 == (undefined *)0x0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d73450);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = (ulong *)PTR_PTR_1130c6130;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d73448);
    FUN_10132d1b8(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c615f0(uVar3);
    func_0x00010132d138(puVar1,uVar3);
    pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x70);
    func_0x000107c615f0();
    (*pcVar4)();
    param_1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101329ee0; end: 101329fa7; -[_TtC39IncentiveCampaignInviteTakeoverProvider39IncentiveCampaignInviteTakeoverProvider showCampaign:uiContainer:onComplete:] */

/* WARNING: Possible PIC construction at 0x000101329f84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101329f88) */

void FUN_101329ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1103a36e0;
    func_0x000107c613fc(&UNK_1103a36e0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x10132a4b0;
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_101329c28(param_3,param_4,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101329fa8; end: 10132a003; -[_TtC39IncentiveCampaignInviteTakeoverProvider39IncentiveCampaignInviteTakeoverProvider init] */

void FUN_101329fa8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("IncentiveCampaignInviteTakeoverProvider.IncentiveCampaignInviteTakeoverProvider"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101329fd4);
  (*pcVar1)();
}



/* Entry: 10132a004; end: 10132a08f; -[_TtC39IncentiveCampaignInviteTakeoverProvider39IncentiveCampaignInviteTakeoverProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a004(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d73448));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d73450));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d73458));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d73460));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d73468));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d73470));
  if (*(long *)(param_1 + _DAT_112d73478) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d73478))[1]);
    return;
  }
  return;
}



/* Entry: 10132a090; end: 10132a1d3;  */

/* WARNING: Possible PIC construction at 0x00010132a114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132a1ac: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a090(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + _DAT_112d73468);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + _DAT_112d73460);
    if (puVar1 == (undefined *)0x0) {
      return;
    }
    lVar2 = *(long *)(param_1 + _DAT_112d73450);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar1 = puVar3;
      func_0x000107c5f9dc();
      func_0x000107c6142c(puVar3);
      func_0x000107c4c4c0(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  else {
    FUN_10132b1b8(0);
    func_0x000107c610f8();
    func_0x000107c615f4(puVar3,2);
    lVar2 = param_1;
    func_0x000107c61174();
    puVar1 = puVar3;
    func_0x00010132b058(puVar3,param_1,&PTR_DAT_1103a3608);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112d73458));
    func_0x000107c615e8(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10132a1d4; end: 10132a2f7;  */

/* WARNING: Possible PIC construction at 0x00010132a280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132a2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132a2b0) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a1d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112d73460);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar3 = *(long *)(param_1 + _DAT_112d73450);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    pcVar4 = *(code **)(param_1 + _DAT_112d73478);
    if (pcVar4 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(param_1 + _DAT_112d73478))[1]);
      (*pcVar4)();
    }
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4b8(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10132a2f8; end: 10132a32f;  */

void FUN_10132a2f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &UNK_1103a3690;
  ppuVar2 = &puStack_60;
  func_0x000107c613fc(&UNK_1103a3690,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  uStack_40 = 0x10132a4a8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103a36a8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10132a330; end: 10132a3d7;  */

void FUN_10132a330(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = unaff_x20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_6;
  uStack_40 = param_5;
  lStack_38 = param_4;
  func_0x000107c60bc4(&puStack_60);
  lVar1 = lStack_38;
  func_0x000107c61174();
  func_0x000107c61574(lVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 10132a3d8; end: 10132a45f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a3d8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d73458);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  pcVar3 = *(code **)(unaff_x20 + _DAT_112d73478);
  if (pcVar3 != (code *)0x0) {
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d73478))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar3)();
    if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10132a460; end: 10132a463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a460(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d73458);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  pcVar3 = *(code **)(unaff_x20 + _DAT_112d73478);
  if (pcVar3 != (code *)0x0) {
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d73478))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar3)();
    if (pcVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10132a464; end: 10132a483;  */

void FUN_10132a464(void)

{
  func_0x000107c61168(&PTR_PTR_1127c8440);
  return;
}



/* Entry: 10132a484; end: 10132a4c3;  */

/* WARNING: Possible PIC construction at 0x00010132a280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132a2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132a2b0) */
/* WARNING: Removing unreachable block (ram,0x00010058d43c) */
/* WARNING: Removing unreachable block (ram,0x00010058d448) */
/* WARNING: Removing unreachable block (ram,0x00010058d440) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a484(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar1 = *(undefined **)(lVar3 + _DAT_112d73460);
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  lVar4 = *(long *)(lVar3 + _DAT_112d73450);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    pcVar5 = *(code **)(lVar3 + _DAT_112d73478);
    if (pcVar5 != (code *)0x0) {
      func_0x000107c6157c(((undefined8 *)(lVar3 + _DAT_112d73478))[1]);
      (*pcVar5)();
    }
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa3f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar1 = puVar2;
    func_0x000107c5f9dc();
    func_0x000107c6142c(puVar2);
    func_0x000107c4c4b8(lVar4);
    func_0x000107c615e8(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10132a4c4; end: 10132a66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10132a4c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  func_0x000107c613fc();
  lVar3 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000107c615f0(lVar4);
    uVar5 = param_3;
    func_0x000107c43b5c();
    func_0x000107c61180();
    lVar6 = 0;
    FUN_10132a464();
    lVar3 = lVar6;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112d73460) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d73468) = 0;
    *(undefined8 *)(lVar3 + _DAT_112d73470) = 0;
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d73478);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(long *)(lVar3 + _DAT_112d73448) = lVar4;
    *(undefined8 *)(lVar3 + _DAT_112d73450) = uVar5;
    *(undefined8 *)(lVar3 + _DAT_112d73458) = param_4;
    puVar2 = PTR_s_init_1125d9248;
    lStack_60 = lVar3;
    lStack_58 = lVar6;
    func_0x000107c61174(param_4);
    func_0x000107c61154(&lStack_60,puVar2);
    uVar5 = param_1;
    func_0x000107c4e9e4(param_1);
    func_0x000107c61180();
    func_0x000107c61174(plVar7);
    func_0x000107c4fba8(uVar5);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(plVar7);
    func_0x000107c61170(plVar7);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 10132a670; end: 10132a68b;  */

void FUN_10132a670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10132a68c; end: 10132a6ab;  */

void FUN_10132a68c(void)

{
  func_0x000107c61168(&PTR_PTR_112d734e8);
  return;
}



/* Entry: 10132a6ac; end: 10132a6b7; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a6ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73540;
  func_0x000107c61428(param_1 + _DAT_112d73540,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132a6b8; end: 10132a6c3; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73540;
  func_0x000107c61428(param_1 + _DAT_112d73540,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132a6c4; end: 10132a6cf; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a6c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73548;
  func_0x000107c61428(param_1 + _DAT_112d73548,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132a6d0; end: 10132a6db; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a6d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73548;
  func_0x000107c61428(param_1 + _DAT_112d73548,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132a6dc; end: 10132a6e7; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a6dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73550;
  func_0x000107c61428(param_1 + _DAT_112d73550,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132a6e8; end: 10132a72b;  */

void FUN_10132a6e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132a72c; end: 10132a737; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73550;
  func_0x000107c61428(param_1 + _DAT_112d73550,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132a738; end: 10132a78b;  */

void FUN_10132a738(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10132a78c; end: 10132a7d3; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint incentiveCampaignDetailsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a78c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d73558;
  func_0x000107c61428(param_1 + _DAT_112d73558,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10132a7d4; end: 10132a837; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint setIncentiveCampaignDetailsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132a7d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d73558;
  func_0x000107c61428(param_1 + _DAT_112d73558,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10132a838; end: 10132aa97;  */

/* WARNING: Possible PIC construction at 0x00010132a8f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132a9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132a9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132aa04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132aa14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132aa68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010132aa58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010132aa6c) */
/* WARNING: Removing unreachable block (ram,0x00010132aa18) */
/* WARNING: Removing unreachable block (ram,0x00010132aa08) */
/* WARNING: Removing unreachable block (ram,0x00010132a9e8) */
/* WARNING: Removing unreachable block (ram,0x00010132a8fc) */
/* WARNING: Removing unreachable block (ram,0x00010132a9f8) */
/* WARNING: Removing unreachable block (ram,0x00010132a900) */
/* WARNING: Removing unreachable block (ram,0x00010132aa5c) */

void FUN_10132a838(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3e8cc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c452c4();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_10132a68c(0);
        func_0x000107c613fc();
        func_0x000107c5dbd4(lVar2);
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10132aa98; end: 10132aabf; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint begin] */

void FUN_10132aa98(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10132a838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10132aac0; end: 10132ab03; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint end] */

void FUN_10132aac0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10132ab04; end: 10132ad73;  */

void FUN_10132ab04(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52c50();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef10eea40)) &&
             (func_0x000107c605b8(0xd000000000000024,0x800000010ef115c0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "IncentiveCampaignInviteTakeoverProvider/SCIncentiveCampaignInviteTakeoverProviderEntryPoint.swift"
                                ,0x61,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10132ad74);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55348();
        }
        goto LAB_10132ab90;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_10132ab90:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10132ad74; end: 10132ae1f; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint setValue:forIvarName:] */

void FUN_10132ad74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10132ab04(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10132ae20; end: 10132aeb3; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132ae20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d73540,0);
  func_0x000107c61614(param_1 + _DAT_112d73548,0);
  func_0x000107c61614(param_1 + _DAT_112d73550,0);
  *(undefined8 *)(param_1 + _DAT_112d73558) = 0;
  *(undefined8 *)(param_1 + _DAT_112d73560) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10132aeb4; end: 10132aee7;  */

void FUN_10132aeb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10132aee8; end: 10132af4f; -[SCIncentiveCampaignInviteTakeoverProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10132aee8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d73540);
  func_0x000107c61610(param_1 + _DAT_112d73548);
  func_0x000107c61610(param_1 + _DAT_112d73550);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d73558));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d73560));
  return;
}



/* Entry: 10132af50; end: 10132af6f;  */

void FUN_10132af50(void)

{
  func_0x000107c61168(&PTR_PTR_1127c85a0);
  return;
}


