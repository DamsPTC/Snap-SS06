/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10006b938; end: 10006be53;  */

undefined8 * FUN_10006b938(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10006b938(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10006be54; end: 10006be7f;  */

long FUN_10006be54(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10006be80; end: 10006be83;  */

void FUN_10006be80(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100012bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000b1698)(*param_1);
  return;
}



/* Entry: 10006be84; end: 10006bf17;  */

long FUN_10006be84(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Entry: 10006bf18; end: 10006bfb7;  */

int FUN_10006bf18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10006bfb8; end: 10006c0d7;  */

long * FUN_10006bfb8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar13 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar13 >> 0x11 & 1) == 0) {
    lVar16 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar16 + -8) + 0x10))(param_1,param_2,lVar16);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar3 = *puVar2;
    uVar8 = puVar2[1];
    uVar4 = puVar2[2];
    uVar9 = puVar2[3];
    uVar5 = puVar2[4];
    uVar10 = puVar2[5];
    uVar6 = puVar2[6];
    uVar11 = puVar2[7];
    uVar7 = puVar2[8];
    uVar12 = puVar2[9];
    uVar14 = *(undefined1 *)(puVar2 + 10);
    uVar15 = *(undefined1 *)((long)puVar2 + 0x51);
    FUN_10006c0d8(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar6,uVar11,uVar7,uVar12,uVar14);
    *puVar1 = uVar3;
    puVar1[1] = uVar8;
    puVar1[2] = uVar4;
    puVar1[3] = uVar9;
    puVar1[4] = uVar5;
    puVar1[5] = uVar10;
    puVar1[6] = uVar6;
    puVar1[7] = uVar11;
    puVar1[8] = uVar7;
    puVar1[9] = uVar12;
    *(undefined1 *)(puVar1 + 10) = uVar14;
    *(undefined1 *)((long)puVar1 + 0x51) = uVar15;
  }
  else {
    lVar16 = *param_2;
    *param_1 = lVar16;
    uVar17 = (ulong)uVar13 & 0xff;
    param_1 = (long *)(lVar16 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10006c0d8; end: 10006c177;  */

undefined8
FUN_10006c0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  if (param_11._1_1_ == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_1000b15b0)();
    return param_1;
  }
  if (param_11._1_1_ == '\0') {
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_5);
    if ((byte)param_11 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)(param_10);
      return param_10;
    }
    return param_9;
  }
  return param_1;
}



/* Entry: 10006c178; end: 10006c1e7;  */

void FUN_10006c178(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x14));
  FUN_10006c1e8(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],puVar1[9],*(undefined2 *)(puVar1 + 10));
  return;
}



/* Entry: 10006c1e8; end: 10006c287;  */

undefined8
FUN_10006c1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  if (param_11._1_1_ == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001000860d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000b15a8)();
    return param_1;
  }
  if (param_11._1_1_ == '\0') {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_5);
    _swift_bridgeObjectRelease(param_8);
    if ((byte)param_11 < 4) {
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(param_10);
      return param_10;
    }
    return param_9;
  }
  return param_1;
}



/* Entry: 10006c288; end: 10006c49f;  */

long FUN_10006c288(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  long lVar15;
  
  lVar15 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar15 + -8) + 0x10))(param_1,param_2,lVar15);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = *puVar2;
  uVar8 = puVar2[1];
  uVar4 = puVar2[2];
  uVar9 = puVar2[3];
  uVar5 = puVar2[4];
  uVar10 = puVar2[5];
  uVar6 = puVar2[6];
  uVar11 = puVar2[7];
  uVar7 = puVar2[8];
  uVar12 = puVar2[9];
  uVar13 = *(undefined1 *)(puVar2 + 10);
  uVar14 = *(undefined1 *)((long)puVar2 + 0x51);
  FUN_10006c0d8(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar6,uVar11,uVar7,uVar12,uVar13);
  *puVar1 = uVar3;
  puVar1[1] = uVar8;
  puVar1[2] = uVar4;
  puVar1[3] = uVar9;
  puVar1[4] = uVar5;
  puVar1[5] = uVar10;
  puVar1[6] = uVar6;
  puVar1[7] = uVar11;
  puVar1[8] = uVar7;
  puVar1[9] = uVar12;
  *(undefined1 *)(puVar1 + 10) = uVar13;
  *(undefined1 *)((long)puVar1 + 0x51) = uVar14;
  return param_1;
}



/* Entry: 10006c4a0; end: 10006c5c3;  */

long FUN_10006c4a0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar4 = puVar2[4];
  uVar6 = puVar2[7];
  uVar5 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  uVar4 = puVar2[8];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar4;
  *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(puVar2 + 10);
  uVar4 = *puVar2;
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  return param_1;
}



/* Entry: 10006c5c4; end: 10006c5cf;  */

void FUN_10006c5c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10006c5d0; end: 10006c64b;  */

ulong FUN_10006c5d0(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00010006c620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14) + 0x51);
  uVar1 = 0;
  if (2 < uVar3) {
    uVar1 = (uVar3 ^ 0xff) + 1;
  }
  return (ulong)uVar1;
}



/* Entry: 10006c64c; end: 10006c657;  */

void FUN_10006c64c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10006c658; end: 10006c6d3;  */

void FUN_10006c658(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00010006c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(char *)(param_1 + *(int *)(param_4 + 0x14) + 0x51) = -(char)param_2;
  return;
}



/* Entry: 10006c6d4; end: 10006c70b;  */

void FUN_10006c6d4(undefined8 param_1)

{
  if (lRam00000001000c77e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100091198);
  return;
}



/* Entry: 10006c70c; end: 10006c77b;  */

void FUN_10006c70c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10008d8c0;
    _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 10006c77c; end: 10006c7db;  */

void FUN_10006c77c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_c8 [88];
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
  undefined2 uStack_20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x14));
  uStack_48 = puVar1[5];
  uStack_50 = puVar1[4];
  uStack_38 = puVar1[7];
  uStack_40 = puVar1[6];
  uStack_28 = puVar1[9];
  uStack_30 = puVar1[8];
  uStack_20 = *(undefined2 *)(puVar1 + 10);
  uStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  uStack_58 = puVar1[3];
  uStack_60 = puVar1[2];
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[9] = uStack_28;
  param_1[8] = uStack_30;
  *(undefined2 *)(param_1 + 10) = uStack_20;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  func_0x00010006d27c(&uStack_70,auStack_c8);
  return;
}



/* Entry: 10006c7dc; end: 10006c813;  */

void FUN_10006c7dc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00010006c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Entry: 10006c814; end: 10006c817;  */

void FUN_10006c814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s9WidgetKit13TimelineEntryPAAE9relevanceAA0cD9RelevanceVSgvg_1000b0a98)();
  return;
}



/* Entry: 10006c818; end: 10006c83b;  */

void FUN_10006c818(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10006c83c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10006c83c; end: 10006c87f;  */

void FUN_10006c83c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c7840 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10006c6d4(0xff);
  puVar2 = &UNK_10008d8d8;
  _swift_getWitnessTable(&UNK_10008d8d8,uVar1);
  puRam00000001000c7840 = puVar2;
  return;
}



/* Entry: 10006c880; end: 10006c8a3;  */

void FUN_10006c880(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10006c8a4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10006c8a4; end: 10006c8e3;  */

void FUN_10006c8a4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008d958;
  _swift_getWitnessTable(&UNK_10008d958,&UNK_1000b6028);
  puRam00000001000c7848 = puVar1;
  return;
}



/* Entry: 10006c8e4; end: 10006c8e7;  */

void FUN_10006c8e4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c7840 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10006c6d4(0xff);
  puVar2 = &UNK_10008d8d8;
  _swift_getWitnessTable(&UNK_10008d8d8,uVar1);
  puRam00000001000c7840 = puVar2;
  return;
}



/* Entry: 10006c8e8; end: 10006ca6b;  */

void FUN_10006c8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  code *pcVar8;
  
  lVar3 = 0;
  FUN_10006c6d4();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_1000b6070;
  _swift_allocObject(&UNK_1000b6070,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  _swift_retain(param_4);
  uVar5 = 0;
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg
            (&UNK_1000b6028,&PTR_DAT_1000b6040);
  if ((uVar5 & 1) != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x000100013de4();
    puVar6 = &UNK_1000b6098;
    _swift_allocObject(&UNK_1000b6098,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_10006d170;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcVar8 = *(code **)(lVar3 + 8);
    _swift_retain(puVar4);
    (*pcVar8)(param_1,FUN_10006d1b4,puVar6,uVar2,lVar3);
    _swift_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_1000b1698)(puVar4);
    return;
  }
  __s10Foundation4DateVACycfC(puVar7);
  puVar1 = (undefined8 *)(puVar7 + *(int *)(lVar3 + 0x14));
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 10) = 0x200;
  FUN_10006ca6c(puVar7,param_3,param_4);
  _swift_release(puVar4);
  FUN_10006d178(puVar7);
  return;
}



/* Entry: 10006ca6c; end: 10006cd6b;  */

void FUN_10006ca6c(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  uStack_78 = param_3;
  pcStack_70 = param_2;
  uStack_68 = param_1;
  __s9WidgetKit20TimelineReloadPolicyVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = 0x1000c7858;
  puStack_88 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000100d0(0x1000c7858,&UNK_10008d9b8);
  lStack_90 = *(long *)(lVar3 + -8);
  lStack_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0;
  lStack_98 = lVar7;
  __s10Foundation8CalendarV9ComponentOMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar13 + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation8CalendarVMa();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar14 + 0x40));
  lVar9 = lVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1000c4130;
  func_0x0001000100d0(0x1000c4130,&UNK_10008c520);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar9 - extraout_x8_03;
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = lVar11 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation8CalendarV7currentACvgZ(lVar9);
  (**(code **)(lVar13 + 0x68))
            (lVar7,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_1000b19c0,
             lVar4);
  __s10Foundation8CalendarV4date8byAdding5value2to18wrappingComponentsAA4DateVSgAC9ComponentO_SiAJSbtF
            (lVar11,lVar7,1,uStack_68,0);
  (**(code **)(lVar13 + 8))(lVar7,lVar4);
  (**(code **)(lVar14 + 8))(lVar9,lVar5);
  lVar3 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar6);
  if ((int)lVar3 != 1) {
    (**(code **)(lVar12 + 0x20))(lVar15,lVar11,lVar6);
    lVar3 = 0x1000c7860;
    func_0x0001000100d0(0x1000c7860,&UNK_10008d9c8);
    lVar7 = 0;
    FUN_10006c6d4();
    uVar8 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
    uVar10 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(lVar3,uVar10 + *(long *)(*(long *)(lVar7 + -8) + 0x48),uVar8 | 7);
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    func_0x00010006d238(uStack_68,lVar3 + uVar10);
    puVar1 = puStack_88;
    lVar5 = lVar15;
    __s9WidgetKit20TimelineReloadPolicyV5afteryAC10Foundation4DateVFZ(puStack_88,lVar15);
    FUN_10006c83c();
    lVar4 = lStack_98;
    __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
              (lStack_98,lVar3,puVar1,lVar7,lVar5);
    (*pcStack_70)(lVar4);
    (**(code **)(lStack_90 + 8))(lVar4,lStack_80);
    (**(code **)(lVar12 + 8))(lVar15,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10006cd6c);
  (*pcVar2)();
}



/* Entry: 10006cd6c; end: 10006ceb7;  */

void FUN_10006cd6c(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_110 [8];
  undefined1 uStack_108;
  undefined8 auStack_107 [9];
  undefined1 auStack_bf [15];
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
  undefined2 uStack_60;
  
  puVar3 = (undefined1 *)0x0;
  FUN_10006c6d4();
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar6 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined1 *)param_1;
  if (*(char *)((long)param_1 + 0x51) == '\x01') {
    __s10Foundation4DateVACycfC(puVar6);
    FUN_10006d1bc();
    puVar5 = &UNK_1000b6700;
    _swift_allocError(&UNK_1000b6700,puVar4,0,0);
    *puVar4 = uVar1;
    iVar2 = *(int *)(puVar3 + 0x14);
    *(undefined **)(puVar6 + iVar2) = puVar5;
    *(undefined1 *)((long)(puVar6 + iVar2) + 0x51) = 1;
  }
  else {
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_60 = *(undefined2 *)(param_1 + 10);
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    FUN_10006d1fc(&uStack_b0,&uStack_108);
    __s10Foundation4DateVACycfC(puVar6);
    puVar4 = puVar6 + *(int *)(puVar3 + 0x14);
    *puVar4 = uVar1;
    uVar7 = *(undefined8 *)((long)param_1 + 0x11);
    *(undefined8 *)(puVar4 + 0x19) = *(undefined8 *)((long)param_1 + 0x19);
    *(undefined8 *)(puVar4 + 0x11) = uVar7;
    uVar7 = *(undefined8 *)((long)param_1 + 0x21);
    *(undefined8 *)(puVar4 + 0x29) = *(undefined8 *)((long)param_1 + 0x29);
    *(undefined8 *)(puVar4 + 0x21) = uVar7;
    uVar7 = *(undefined8 *)((long)param_1 + 0x31);
    *(undefined8 *)(puVar4 + 0x39) = *(undefined8 *)((long)param_1 + 0x39);
    *(undefined8 *)(puVar4 + 0x31) = uVar7;
    uVar7 = *(undefined8 *)((long)param_1 + 0x41);
    *(undefined8 *)(puVar4 + 0x49) = *(undefined8 *)((long)param_1 + 0x49);
    *(undefined8 *)(puVar4 + 0x41) = uVar7;
    uVar7 = *(undefined8 *)((long)param_1 + 1);
    *(undefined8 *)(puVar4 + 9) = *(undefined8 *)((long)param_1 + 9);
    *(undefined8 *)(puVar4 + 1) = uVar7;
    puVar4[0x51] = 0;
  }
  (*param_2)(puVar6);
  FUN_10006d178(puVar6);
  return;
}



/* Entry: 10006ceb8; end: 10006cecb;  */

void FUN_10006ceb8(void)

{
  __s9WidgetKit22IntentTimelineProviderPAAE15recommendationsSayAA0C14RecommendationVy0C0QzGGyF();
  return;
}



/* Entry: 10006cecc; end: 10006cf5b;  */

void FUN_10006cecc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg
            (param_3,&PTR_DAT_1000b6040);
  __s10Foundation4DateVACycfC(param_1);
  lVar2 = 0;
  FUN_10006c6d4();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x14));
  if ((param_3 & 1) == 0) {
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 10) = 0x200;
  }
  else {
    *puVar1 = 1;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    *(undefined8 *)((long)puVar1 + 0x49) = 0;
    *(undefined8 *)((long)puVar1 + 0x41) = 0;
    *(undefined1 *)((long)puVar1 + 0x51) = 2;
  }
  return;
}



/* Entry: 10006cf5c; end: 10006d09f;  */

void FUN_10006cf5c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  
  lVar3 = 0;
  FUN_10006c6d4();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg
            (param_5,&PTR_DAT_1000b6040);
  if ((param_5 & 1) != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x000100013de4();
    puVar4 = &UNK_1000b60c0;
    _swift_allocObject(&UNK_1000b60c0,0x20,7);
    *(code **)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    pcVar5 = *(code **)(lVar3 + 8);
    _swift_retain(param_4);
    (*pcVar5)(param_1,0x10006d2d4,puVar4,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_1000b1698)(puVar4);
    return;
  }
  __s10Foundation4DateVACycfC(puVar6);
  puVar1 = (undefined8 *)(puVar6 + *(int *)(lVar3 + 0x14));
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 10) = 0x200;
  (*param_3)(puVar6);
  FUN_10006d178(puVar6);
  return;
}



/* Entry: 10006d0a0; end: 10006d0a3;  */

void FUN_10006d0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  code *pcVar8;
  
  lVar3 = 0;
  FUN_10006c6d4();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_1000b6070;
  _swift_allocObject(&UNK_1000b6070,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  _swift_retain(param_4);
  uVar5 = 0;
  __s21SnapchatWidgetsShared19SCTimelineProvidingPAAE14isUserLoggedInSbvg
            (&UNK_1000b6028,&PTR_DAT_1000b6040);
  if ((uVar5 & 1) != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    func_0x000100013de4();
    puVar6 = &UNK_1000b6098;
    _swift_allocObject(&UNK_1000b6098,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_10006d170;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    pcVar8 = *(code **)(lVar3 + 8);
    _swift_retain(puVar4);
    (*pcVar8)(param_1,FUN_10006d1b4,puVar6,uVar2,lVar3);
    _swift_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x000100086234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_1000b1698)(puVar4);
    return;
  }
  __s10Foundation4DateVACycfC(puVar7);
  puVar1 = (undefined8 *)(puVar7 + *(int *)(lVar3 + 0x14));
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 10) = 0x200;
  FUN_10006ca6c(puVar7,param_3,param_4);
  _swift_release(puVar4);
  FUN_10006d178(puVar7);
  return;
}



/* Entry: 10006d0a4; end: 10006d10f;  */

void FUN_10006d0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s9WidgetKit22IntentTimelineProviderPAAE9relevanceAA0A9RelevanceVy0C0QzGyYaFTu_1000b0b40
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10006d110;
                    /* WARNING: Could not recover jumptable at 0x00010008570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s9WidgetKit22IntentTimelineProviderPAAE9relevanceAA0A9RelevanceVy0C0QzGyYaF_1000b0b38)
            (plVar1,param_1,param_2,param_3);
  return;
}



/* Entry: 10006d110; end: 10006d16f;  */

void FUN_10006d110(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010006d148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10006d170; end: 10006d177;  */

void FUN_10006d170(undefined8 param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  pcStack_70 = *(code **)(unaff_x20 + 0x10);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  uStack_68 = param_1;
  __s9WidgetKit20TimelineReloadPolicyVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = 0x1000c7858;
  puStack_88 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000100d0(0x1000c7858,&UNK_10008d9b8);
  lStack_90 = *(long *)(lVar3 + -8);
  lStack_80 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar4 = 0;
  lStack_98 = lVar7;
  __s10Foundation8CalendarV9ComponentOMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar13 + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  __s10Foundation8CalendarVMa();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar14 + 0x40));
  lVar9 = lVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x1000c4130;
  func_0x0001000100d0(0x1000c4130,&UNK_10008c520);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar9 - extraout_x8_03;
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = lVar11 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation8CalendarV7currentACvgZ(lVar9);
  (**(code **)(lVar13 + 0x68))
            (lVar7,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_1000b19c0,
             lVar4);
  __s10Foundation8CalendarV4date8byAdding5value2to18wrappingComponentsAA4DateVSgAC9ComponentO_SiAJSbtF
            (lVar11,lVar7,1,uStack_68,0);
  (**(code **)(lVar13 + 8))(lVar7,lVar4);
  (**(code **)(lVar14 + 8))(lVar9,lVar5);
  lVar3 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar6);
  if ((int)lVar3 != 1) {
    (**(code **)(lVar12 + 0x20))(lVar15,lVar11,lVar6);
    lVar3 = 0x1000c7860;
    func_0x0001000100d0(0x1000c7860,&UNK_10008d9c8);
    lVar7 = 0;
    FUN_10006c6d4();
    uVar8 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
    uVar10 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(lVar3,uVar10 + *(long *)(*(long *)(lVar7 + -8) + 0x48),uVar8 | 7);
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    func_0x00010006d238(uStack_68,lVar3 + uVar10);
    puVar1 = puStack_88;
    lVar5 = lVar15;
    __s9WidgetKit20TimelineReloadPolicyV5afteryAC10Foundation4DateVFZ(puStack_88,lVar15);
    FUN_10006c83c();
    lVar4 = lStack_98;
    __s9WidgetKit8TimelineV7entries6policyACyxGSayxG_AA0C12ReloadPolicyVtcfC
              (lStack_98,lVar3,puVar1,lVar7,lVar5);
    (*pcStack_70)(lVar4);
    (**(code **)(lStack_90 + 8))(lVar4,lStack_80);
    (**(code **)(lVar12 + 8))(lVar15,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10006cd6c);
  (*pcVar2)();
}



/* Entry: 10006d178; end: 10006d1b3;  */

undefined8 FUN_10006d178(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10006c6d4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10006d1b4; end: 10006d1bb;  */

void FUN_10006d1b4(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_110 [8];
  undefined1 uStack_108;
  undefined8 auStack_107 [9];
  undefined1 auStack_bf [15];
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
  undefined2 uStack_60;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  puVar4 = (undefined1 *)0x0;
  FUN_10006c6d4(0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar7 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined1 *)param_1;
  if (*(char *)((long)param_1 + 0x51) == '\x01') {
    __s10Foundation4DateVACycfC(puVar7);
    FUN_10006d1bc();
    puVar6 = &UNK_1000b6700;
    _swift_allocError(&UNK_1000b6700,puVar5,0,0);
    *puVar5 = uVar2;
    iVar3 = *(int *)(puVar4 + 0x14);
    *(undefined **)(puVar7 + iVar3) = puVar6;
    *(undefined1 *)((long)(puVar7 + iVar3) + 0x51) = 1;
  }
  else {
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_60 = *(undefined2 *)(param_1 + 10);
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    FUN_10006d1fc(&uStack_b0,&uStack_108);
    __s10Foundation4DateVACycfC(puVar7);
    puVar5 = puVar7 + *(int *)(puVar4 + 0x14);
    *puVar5 = uVar2;
    uVar8 = *(undefined8 *)((long)param_1 + 0x11);
    *(undefined8 *)(puVar5 + 0x19) = *(undefined8 *)((long)param_1 + 0x19);
    *(undefined8 *)(puVar5 + 0x11) = uVar8;
    uVar8 = *(undefined8 *)((long)param_1 + 0x21);
    *(undefined8 *)(puVar5 + 0x29) = *(undefined8 *)((long)param_1 + 0x29);
    *(undefined8 *)(puVar5 + 0x21) = uVar8;
    uVar8 = *(undefined8 *)((long)param_1 + 0x31);
    *(undefined8 *)(puVar5 + 0x39) = *(undefined8 *)((long)param_1 + 0x39);
    *(undefined8 *)(puVar5 + 0x31) = uVar8;
    uVar8 = *(undefined8 *)((long)param_1 + 0x41);
    *(undefined8 *)(puVar5 + 0x49) = *(undefined8 *)((long)param_1 + 0x49);
    *(undefined8 *)(puVar5 + 0x41) = uVar8;
    uVar8 = *(undefined8 *)((long)param_1 + 1);
    *(undefined8 *)(puVar5 + 9) = *(undefined8 *)((long)param_1 + 9);
    *(undefined8 *)(puVar5 + 1) = uVar8;
    puVar5[0x51] = 0;
  }
  (*pcVar1)(puVar7);
  FUN_10006d178(puVar7);
  return;
}



/* Entry: 10006d1bc; end: 10006d1fb;  */

void FUN_10006d1bc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008dc04;
  _swift_getWitnessTable(&UNK_10008dc04,&UNK_1000b6700);
  puRam00000001000c7850 = puVar1;
  return;
}



/* Entry: 10006d1fc; end: 10006d2cb;  */

undefined8 FUN_10006d1fc(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x10006bb84)(param_2,param_1);
  return param_2;
}



/* Entry: 10006d2cc; end: 10006d2d7;  */

void FUN_10006d2cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10006d2d8; end: 10006d797;  */

void FUN_10006d2d8(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 **ppuVar12;
  long lVar13;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 auStack_100 [4];
  long lStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  iVar2 = 2;
  FUN_1000806c0(2,0x10,0,0);
  if (iVar2 != 0) {
    lVar18 = 0x1000c7870;
    func_0x0001000100d0(0x1000c7870,&UNK_10008d9d8);
    lStack_a8 = *(long *)(lVar18 + -8);
    lStack_b0 = lVar18;
    puStack_a0 = (undefined1 *)&lStack_e0;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar24 = (long)&lStack_e0 - extraout_x8;
    puVar3 = (undefined8 *)0x1000c7878;
    lStack_d0 = lVar24;
    func_0x0001000100d0(0x1000c7878,&UNK_10008d9e0);
    lStack_c8 = puVar3[-1];
    puStack_d8 = puVar3;
    lStack_c0 = lVar24;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar24 = lVar24 - extraout_x8_00;
    puVar3 = (undefined8 *)0x1000c7880;
    func_0x0001000100d0(0x1000c7880,&UNK_10008d9e8);
    lVar22 = puVar3[-1];
    puVar10 = puVar3;
    lStack_e0 = lVar24;
    (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar18 = lVar24 - extraout_x8_01;
    __s23HomeScreenWidgetDefines0C11IdentifiersO015pinMyFriendLockB4KindSSvau();
    uVar15 = *puVar10;
    uVar16 = puVar10[1];
    uVar4 = 0;
    func_0x0001000773e0(0);
    _swift_bridgeObjectRetain(uVar16);
    uVar5 = 0x7465756f686c6973;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7465756f686c6973,0xea00000000006574);
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___UIImage_1000c20c0;
    uStack_b8 = param_1;
    _objc_opt_self();
    func_0x000100086b60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puStack_70 = &UNK_1000b6218;
    ppuStack_68 = &PTR_DAT_1000b6230;
    uVar6 = 0;
    puStack_88 = puVar10;
    FUN_100073024();
    uVar5 = uVar6;
    FUN_10006d844();
    uVar7 = uVar5;
    FUN_10006c8a4();
    *(undefined8 *)(lVar18 + -0x10) = uVar7;
    *(undefined **)(lVar18 + -0x20) = &UNK_1000b6028;
    *(undefined8 *)(lVar18 + -0x18) = uVar5;
    __s9WidgetKit19IntentConfigurationV4kind6intent8provider7contentACyxq_GSS_xmqd__q_5EntryQyd__ctc0C0Qyd__RszAA0C16TimelineProviderRd__lufC
              (lVar18,uVar15,uVar16,uVar4,&puStack_88,FUN_10006d798,0,uVar4,uVar6);
    puVar8 = PTR__OBJC_CLASS___NSBundle_1000c2230;
    _objc_opt_self();
    puVar9 = puVar8;
    func_0x000100086fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0xec000000646e6569;
    *(undefined8 *)(lVar18 + -0x10) = 0xec000000646e6569;
    puVar10 = (undefined8 *)0x72665f615f6e6970;
    __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
              (0x72665f615f6e6970,0xec000000646e6569,0,0,puVar9,0,0xe000000000000000,
               0x72462061206e6950);
    _objc_release();
    puStack_88 = puVar10;
    puStack_80 = (undefined *)uVar15;
    func_0x00010006d888();
    puVar11 = puVar9;
    FUN_100010174();
    puVar1 = PTR___sSSN_1000b1180;
    __s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lF
              (lVar24,&puStack_88,puVar3,PTR___sSSN_1000b1180,puVar9,puVar11);
    _swift_bridgeObjectRelease(uVar15);
    (**(code **)(lVar22 + 8))(lVar18,puVar3);
    lVar18 = lStack_e0;
    func_0x000100086fe0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(lVar18 + -0x10) = 0x800000010009ebe0;
    uVar16 = 0x800000010009ebc0;
    uVar15 = 0xd000000000000014;
    __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
              (0xd000000000000014,0x800000010009ebc0,0,0,puVar8,0,0xe000000000000000,
               0xd00000000000003c);
    _objc_release(puVar8);
    puStack_80 = puVar1;
    ppuVar12 = &puStack_88;
    uStack_98 = uVar15;
    uStack_90 = uVar16;
    puStack_88 = puVar3;
    ppuStack_78 = (undefined8 **)puVar9;
    puStack_70 = puVar11;
    _swift_getOpaqueTypeConformance
              (ppuVar12,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
               ,1);
    lVar22 = lStack_d0;
    puVar3 = puStack_d8;
    __s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lF
              (lStack_d0,&uStack_98,puStack_d8,puVar1,ppuVar12,puVar11);
    _swift_bridgeObjectRelease(uVar16);
    (**(code **)(lStack_c8 + 8))(lVar24,puVar3);
    lVar18 = 0x1000c41c8;
    func_0x0001000100d0(0x1000c41c8,&UNK_100089230);
    lVar13 = 0;
    __s9WidgetKit0A6FamilyOMa();
    lVar20 = *(long *)(lVar13 + -8);
    lVar23 = *(long *)(lVar20 + 0x48);
    uVar17 = (ulong)*(byte *)(lVar20 + 0x50);
    uVar19 = uVar17 + 0x20 & (uVar17 ^ 0xffffffffffffffff);
    _swift_allocObject(lVar18,uVar19 + lVar23 * 2,uVar17 | 7);
    *(undefined8 *)(lVar18 + 0x18) = 4;
    *(undefined8 *)(lVar18 + 0x10) = 2;
    lVar24 = lVar18 + uVar19;
    pcVar21 = *(code **)(lVar20 + 0x68);
    (*pcVar21)(lVar24,*(undefined4 *)
                       PTR___s9WidgetKit0A6FamilyO17accessoryCircularyA2CmFWC_1000b0a58,lVar13);
    (*pcVar21)(lVar24 + lVar23,
               *(undefined4 *)PTR___s9WidgetKit0A6FamilyO20accessoryRectangularyA2CmFWC_1000b0a60,
               lVar13);
    puStack_88 = puVar3;
    puStack_80 = puVar1;
    ppuVar14 = &puStack_88;
    ppuStack_78 = ppuVar12;
    puStack_70 = puVar11;
    _swift_getOpaqueTypeConformance
              (ppuVar14,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980
               ,1);
    lVar24 = lStack_b0;
    __s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGF
              (uStack_b8,lVar18,lStack_b0,ppuVar14);
    _swift_release(lVar18);
    (**(code **)(lStack_a8 + 8))(lVar22,lVar24);
  }
  return;
}



/* Entry: 10006d798; end: 10006d843;  */

void FUN_10006d798(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = 0;
  FUN_100073024();
  func_0x00010006d238(param_2,(long)param_1 + (long)*(int *)(lVar2 + 0x18));
  puVar3 = &UNK_10008da50;
  _swift_getKeyPath();
  *param_1 = puVar3;
  uVar4 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  _swift_storeEnumTagMultiPayload(param_1,uVar4,0);
  puVar3 = &UNK_10008da80;
  _swift_getKeyPath();
  iVar1 = *(int *)(lVar2 + 0x14);
  *(undefined **)((long)param_1 + (long)iVar1) = puVar3;
  uVar4 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
                    /* WARNING: Could not recover jumptable at 0x000100086288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagMultiPayload_1000b16d0)((long)param_1 + (long)iVar1,uVar4,0);
  return;
}



/* Entry: 10006d844; end: 10006d8d7;  */

void FUN_10006d844(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c7888 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100073024(0xff);
  puVar2 = &UNK_10008dcb8;
  _swift_getWitnessTable(&UNK_10008dcb8,uVar1);
  puRam00000001000c7888 = puVar2;
  return;
}



/* Entry: 10006d8d8; end: 10006d8ff;  */

void FUN_10006d8d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_1000911dc,1);
  return;
}



/* Entry: 10006d900; end: 10006d947;  */

undefined * FUN_10006d900(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  FUN_1000806c0(2,0x10,0,0);
  if (iVar1 != 0) {
    puVar2 = puRam00000001000c7898;
    if (puRam00000001000c7898 == (undefined *)0x0 || ((ulong)puRam00000001000c7898 & 1) != 0) {
      puVar2 = &UNK_100099a44;
      _swift_getTypeByMangledNameInContext(&UNK_100099a44,0x33,0,0);
    }
    puRam00000001000c7898 = puVar2;
    return puVar2;
  }
  return PTR___s7SwiftUI24EmptyWidgetConfigurationVN_1000b05e0;
}



/* Entry: 10006d948; end: 10006da4b;  */

void FUN_10006d948(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar8 = &uStack_60;
  puVar9 = &uStack_60;
  iVar2 = 2;
  FUN_1000806c0(2,0x10,0,0);
  if (iVar2 != 0) {
    uVar3 = 0x1000c7870;
    func_0x000100010120(0x1000c7870,&UNK_10008d9d8);
    uVar4 = 0x1000c7878;
    func_0x000100010120(0x1000c7878,&UNK_10008d9e0);
    uVar5 = 0x1000c7880;
    func_0x000100010120(0x1000c7880,&UNK_10008d9e8);
    uVar6 = uVar5;
    func_0x00010006d888();
    uVar7 = uVar6;
    FUN_100010174();
    puVar1 = PTR___sSSN_1000b1180;
    puStack_58 = PTR___sSSN_1000b1180;
    uStack_60 = uVar5;
    puStack_50 = (undefined1 *)uVar6;
    uStack_48 = uVar7;
    _swift_getOpaqueTypeConformance
              (&uStack_60,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE24configurationDisplayNameyQrqd__SyRd__lFQOMQ_1000b09b0
               ,1);
    puStack_58 = puVar1;
    uStack_60 = uVar4;
    puStack_50 = (undefined1 *)puVar8;
    uStack_48 = uVar7;
    _swift_getOpaqueTypeConformance
              (&uStack_60,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE11descriptionyQrqd__SyRd__lFQOMQ_1000b0980
               ,1);
    uStack_60 = uVar3;
    puStack_58 = (undefined *)puVar9;
    _swift_getOpaqueTypeConformance
              (&uStack_60,
               PTR___s7SwiftUI19WidgetConfigurationP0C3KitE17supportedFamiliesyQrSayAD0C6FamilyOGFQOMQ_1000b0990
               ,1);
  }
  return;
}



/* Entry: 10006da4c; end: 10006da8b;  */

void FUN_10006da4c(void)

{
  __s7SwiftUI17EnvironmentValuesV9WidgetKitE12widgetFamilyAD0eH0Ovg();
  return;
}



/* Entry: 10006da8c; end: 10006da8f;  */

void FUN_10006da8c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI16RedactionReasonsVMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  __s7SwiftUI17EnvironmentValuesV16redactionReasonsAA09RedactionF0Vvs
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 10006da90; end: 10006dabb;  */

undefined8 * FUN_10006da90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _objc_retain();
  return param_1;
}



/* Entry: 10006dabc; end: 10006dac3;  */

void FUN_10006dabc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(*param_1);
  return;
}



/* Entry: 10006dac4; end: 10006dafb;  */

undefined8 * FUN_10006dac4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10006dafc; end: 10006db07;  */

void FUN_10006dafc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10006db08; end: 10006db37;  */

undefined8 * FUN_10006db08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10006db38; end: 10006dbf3;  */

int FUN_10006db38(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10006dbf4; end: 10006e62f;  */

/* WARNING: Removing unreachable block (ram,0x00010006dd74) */

void FUN_10006dbf4(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  code *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puStack_150;
  undefined *puStack_140;
  undefined1 auStack_120 [8];
  undefined8 auStack_118 [4];
  undefined8 auStack_f8 [3];
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_7f;
  
  uVar2 = param_1;
  pcVar20 = param_2;
  __s21SnapchatWidgetsShared12AppGroupDataO17loadCurrentUserIdSSSgyFZ();
  if (pcVar20 == (code *)0x0) {
LAB_10006dd08:
    puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
    uStack_7f = 1;
    (*param_2)(&puStack_d0);
    return;
  }
  uVar3 = uVar2;
  __s21SnapchatWidgetsShared12AppGroupDataO25loadSnapchatterRepository6userIdSo011SCExtensionhI0CSgSS_tFZ
            ();
  if (uVar3 == 0) {
    _swift_bridgeObjectRelease(pcVar20);
    goto LAB_10006dd08;
  }
  puVar4 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000c20d0;
  _objc_allocWithZone();
  _objc_retain(&PTR____CFConstantStringClassReference_1000b7480);
  uVar5 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,pcVar20);
  func_0x000100086c40();
  _objc_release(uVar5);
  _objc_release(&PTR____CFConstantStringClassReference_1000b7480);
  if (puVar4 == (undefined *)0x0) {
LAB_10006dcf0:
    puVar19 = (undefined *)0x0;
    puStack_150 = (undefined *)0x0;
    puStack_140 = (undefined *)0x0;
  }
  else {
    puStack_140 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_1000c20d8;
    _objc_allocWithZone();
    func_0x000100086ce0();
    if (puStack_140 == (undefined *)0x0) goto LAB_10006dcf0;
    puVar19 = puStack_140;
    func_0x0001000870e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar19 == (undefined *)0x0) {
      uStack_c8 = 0;
      puStack_d0 = (undefined *)0x0;
      puStack_b8 = (undefined *)0x0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_d0);
      _swift_unknownObjectRelease(puVar19);
    }
    func_0x000100071da8(&puStack_d0,auStack_f8,0x1000c49f8,&UNK_1000899e0);
    if (lStack_e0 == 0) {
      FUN_100071eac(&puStack_d0,0x1000c49f8,&UNK_1000899e0);
LAB_10006dd9c:
      puVar19 = (undefined *)0x0;
      puStack_150 = (undefined *)0x0;
    }
    else {
      FUN_100036784(auStack_f8,auStack_118);
      FUN_10006e630(&puStack_d8,auStack_118,auStack_120);
      FUN_10001e3c0(auStack_118);
      FUN_100071eac(&puStack_d0,0x1000c49f8,&UNK_1000899e0);
      if (puStack_d8 == (undefined *)0x0) goto LAB_10006dd9c;
      puStack_150 = puStack_d8;
      puVar19 = puStack_d8;
      func_0x000100086f00();
    }
  }
  puVar6 = &UNK_1000b6250;
  _swift_allocObject(&UNK_1000b6250,0x38,7);
  *(ulong *)(puVar6 + 0x10) = param_1;
  *(undefined8 *)(puVar6 + 0x18) = param_4;
  puVar6[0x20] = (char)puVar19;
  *(code **)(puVar6 + 0x28) = param_2;
  *(undefined8 *)(puVar6 + 0x30) = param_3;
  puVar7 = &UNK_1000b6278;
  _swift_allocObject(&UNK_1000b6278,0x38,7);
  *(ulong *)(puVar7 + 0x10) = param_1;
  *(undefined8 *)(puVar7 + 0x18) = param_4;
  puVar7[0x20] = (char)puVar19;
  *(code **)(puVar7 + 0x28) = param_2;
  *(undefined8 *)(puVar7 + 0x30) = param_3;
  uVar8 = param_4;
  _objc_retain();
  pcVar16 = (code *)0x3;
  _swift_retain_n(param_3);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar5 = param_1;
  func_0x0001000869c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
LAB_10006def4:
    _swift_bridgeObjectRelease(pcVar20);
  }
  else {
    uVar9 = uVar5;
    func_0x000100086b40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 == 0) {
      _objc_release(uVar5);
      goto LAB_10006def4;
    }
    uVar10 = uVar9;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    pcVar17 = pcVar16;
    _objc_release(uVar9);
    uVar9 = uVar5;
    func_0x0001000866c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 != 0) {
      uVar11 = uVar9;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar9);
      if ((uVar2 == uVar11) && (pcVar20 == pcVar17)) {
        _swift_bridgeObjectRelease(pcVar20);
        _swift_bridgeObjectRelease(pcVar17);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar2,pcVar20,uVar11,pcVar17,0);
        _swift_bridgeObjectRelease(pcVar20);
        _swift_bridgeObjectRelease(pcVar17);
        if ((uVar2 & 1) == 0) {
          _swift_bridgeObjectRelease(pcVar16);
          _objc_release(uVar5);
          goto LAB_10006df00;
        }
      }
      uVar2 = uVar10;
      FUN_100071740(uVar10,pcVar16,uVar3);
      if (uVar2 == 0) {
LAB_10006e2ec:
        func_0x0001000719f8(uVar10,pcVar16,uVar3);
        _swift_bridgeObjectRelease(pcVar16);
        if (uVar10 == 0) {
          auStack_f8[0] = 1;
          auStack_118[0] = 1;
          puStack_d8 = (undefined *)0x1;
          puVar12 = auStack_f8;
          func_0x00010006f39c(puVar12,uVar3);
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = auStack_118;
            FUN_10006f52c(puVar12,uVar3);
            if (puVar12 == (undefined8 *)0x0) {
              ppuVar15 = &puStack_d8;
              FUN_10006f8f0(ppuVar15,uVar3);
              if (ppuVar15 != (undefined **)0x0) {
                FUN_10006e7e0();
                _objc_release(ppuVar15);
              }
              func_0x000100070b60(puStack_d8);
              uVar18 = 0;
              puVar19 = (undefined *)0x0;
              uVar22 = 0;
              puVar21 = (undefined *)0x0;
            }
            else {
              puVar19 = &UNK_1000b6390;
              _swift_allocObject(&UNK_1000b6390,0x20,7);
              *(undefined8 *)(puVar19 + 0x10) = 0x100070b00;
              *(undefined **)(puVar19 + 0x18) = puVar6;
              puVar21 = &UNK_1000b63b8;
              _swift_allocObject(&UNK_1000b63b8,0x20,7);
              uVar18 = 0x1000720ac;
              *(undefined8 *)(puVar21 + 0x10) = 0x1000720ac;
              *(undefined **)(puVar21 + 0x18) = puVar19;
              puVar1 = PTR___NSConcreteStackBlock_1000b0c60;
              pcStack_b0 = (code *)0x1000720b0;
              puStack_d0 = PTR___NSConcreteStackBlock_1000b0c60;
              uStack_c8 = 0x42000000;
              uStack_c0 = 0x10007205c;
              puStack_b8 = &UNK_1000b63d0;
              ppuVar15 = &puStack_d0;
              puStack_a8 = puVar21;
              __Block_copy();
              puVar21 = puStack_a8;
              _swift_retain(puVar6);
              _swift_release(puVar21);
              puVar21 = &UNK_1000b6408;
              _swift_allocObject(&UNK_1000b6408,0x20,7);
              *(undefined8 *)(puVar21 + 0x10) = 0x100070b40;
              *(undefined **)(puVar21 + 0x18) = puVar7;
              puVar13 = &UNK_1000b6430;
              _swift_allocObject(&UNK_1000b6430,0x20,7);
              uVar22 = 0x1000720b4;
              *(undefined8 *)(puVar13 + 0x10) = 0x1000720b4;
              *(undefined **)(puVar13 + 0x18) = puVar21;
              pcStack_b0 = (code *)0x1000720b8;
              puStack_d0 = puVar1;
              uStack_c8 = 0x42000000;
              uStack_c0 = 0x100072060;
              puStack_b8 = &UNK_1000b6448;
              ppuVar14 = &puStack_d0;
              puStack_a8 = puVar13;
              __Block_copy(ppuVar14);
              puVar13 = puStack_a8;
              _swift_retain(puVar7);
              _swift_release(puVar13);
              func_0x000100087020(puVar12);
              _objc_release(puVar12);
              __Block_release(ppuVar14);
              __Block_release(ppuVar15);
            }
          }
          else {
            FUN_10006e7e0();
            _objc_release(puVar12);
            uVar18 = 0;
            puVar19 = (undefined *)0x0;
            uVar22 = 0;
            puVar21 = (undefined *)0x0;
          }
          func_0x000100070b60(auStack_118[0]);
          func_0x000100070b60(auStack_f8[0]);
          func_0x000100070b70(uVar18,puVar19);
          func_0x000100070b70(uVar22,puVar21);
          _objc_release(uVar8);
          _objc_release(param_1);
          _swift_release(puVar6);
          _swift_release(puVar7);
          _objc_release(uVar5);
          _objc_release(uVar3);
          _objc_release(puVar4);
          _objc_release(puStack_140);
          _objc_release(puStack_150);
          _swift_release(param_3);
          return;
        }
        func_0x00010006eeac(uVar10,param_1,param_4,puVar19,param_2,param_3);
        _objc_release(uVar10);
        _objc_release(puVar4);
        _objc_release(uVar5);
        _swift_release(puVar7);
      }
      else {
        uVar9 = uVar2;
        func_0x000100086ee0();
        if ((int)uVar9 == 0) {
          _objc_release(uVar2);
          goto LAB_10006e2ec;
        }
        _swift_bridgeObjectRelease(pcVar16);
        FUN_10006e7e0(uVar2,param_1,param_4,puVar19,param_2,param_3);
        _objc_release(uVar2);
        _objc_release(puVar4);
        _objc_release(uVar5);
        _swift_release(puVar7);
      }
      _swift_release(param_3);
      _objc_release(uVar8);
      _objc_release(param_1);
      _swift_release(puVar6);
      _objc_release(uVar3);
      _objc_release(puStack_150);
      goto LAB_10006e26c;
    }
    _swift_bridgeObjectRelease(pcVar20);
    _swift_bridgeObjectRelease(pcVar16);
    _objc_release(uVar5);
  }
LAB_10006df00:
  auStack_f8[0] = 1;
  auStack_118[0] = 1;
  puStack_d8 = (undefined *)0x1;
  puVar12 = auStack_f8;
  func_0x00010006f39c(puVar12,uVar3);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = auStack_118;
    FUN_10006f52c(puVar12,uVar3);
    if (puVar12 == (undefined8 *)0x0) {
      ppuVar15 = &puStack_d8;
      FUN_10006f8f0(ppuVar15,uVar3);
      if (ppuVar15 != (undefined **)0x0) {
        FUN_10006e7e0();
        _objc_release(ppuVar15);
      }
      func_0x000100070b60(puStack_d8);
      uVar18 = 0;
      puVar19 = (undefined *)0x0;
      pcVar20 = (code *)0x0;
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar19 = &UNK_1000b62a0;
      _swift_allocObject(&UNK_1000b62a0,0x20,7);
      *(undefined8 *)(puVar19 + 0x10) = 0x100070b00;
      *(undefined **)(puVar19 + 0x18) = puVar6;
      puVar21 = &UNK_1000b62c8;
      _swift_allocObject(&UNK_1000b62c8,0x20,7);
      uVar18 = 0x1000720a4;
      *(undefined8 *)(puVar21 + 0x10) = 0x1000720a4;
      *(undefined **)(puVar21 + 0x18) = puVar19;
      puVar1 = PTR___NSConcreteStackBlock_1000b0c60;
      pcStack_b0 = (code *)0x1000720a8;
      puStack_d0 = PTR___NSConcreteStackBlock_1000b0c60;
      uStack_c8 = 0x42000000;
      uStack_c0 = 0x10007205c;
      puStack_b8 = &UNK_1000b62e0;
      ppuVar15 = &puStack_d0;
      puStack_a8 = puVar21;
      __Block_copy();
      puVar21 = puStack_a8;
      _swift_retain(puVar6);
      _swift_release(puVar21);
      puVar21 = &UNK_1000b6318;
      _swift_allocObject(&UNK_1000b6318,0x20,7);
      *(undefined8 *)(puVar21 + 0x10) = 0x100070b40;
      *(undefined **)(puVar21 + 0x18) = puVar7;
      puVar13 = &UNK_1000b6340;
      _swift_allocObject(&UNK_1000b6340,0x20,7);
      pcVar20 = FUN_100070bc0;
      *(code **)(puVar13 + 0x10) = FUN_100070bc0;
      *(undefined **)(puVar13 + 0x18) = puVar21;
      pcStack_b0 = FUN_100070bf0;
      puStack_d0 = puVar1;
      uStack_c8 = 0x42000000;
      uStack_c0 = 0x100072060;
      puStack_b8 = &UNK_1000b6358;
      ppuVar14 = &puStack_d0;
      puStack_a8 = puVar13;
      __Block_copy(ppuVar14);
      puVar13 = puStack_a8;
      _swift_retain(puVar7);
      _swift_release(puVar13);
      func_0x000100087020(puVar12);
      _objc_release(puVar12);
      __Block_release(ppuVar14);
      __Block_release(ppuVar15);
    }
  }
  else {
    FUN_10006e7e0();
    _objc_release(puVar12);
    uVar18 = 0;
    puVar19 = (undefined *)0x0;
    pcVar20 = (code *)0x0;
    puVar21 = (undefined *)0x0;
  }
  func_0x000100070b60(auStack_118[0]);
  func_0x000100070b60(auStack_f8[0]);
  func_0x000100070b70(uVar18,puVar19);
  func_0x000100070b70(pcVar20,puVar21);
  _swift_release(param_3);
  _objc_release(uVar8);
  _objc_release(param_1);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puStack_140);
  puStack_140 = puStack_150;
LAB_10006e26c:
  _objc_release(puStack_140);
  return;
}



/* Entry: 10006e630; end: 10006e7df;  */

void FUN_10006e630(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x21;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar3 = 0;
  FUN_10001e4f0(param_2,&lStack_70);
  puVar1 = PTR___sypN_1000b14c8;
  _swift_dynamicCast(&lStack_90,&lStack_70,PTR___sypN_1000b14c8 + 8,
                     PTR___s10Foundation4DataVN_1000b1930,6);
  uVar6 = uStack_88;
  lVar2 = lStack_90;
  if ((uVar3 & 1) != 0) {
    _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_1000c20e0);
    func_0x00010001c120(lVar2,uVar6);
    lVar4 = lVar2;
    FUN_10001ccd4(lVar2,uVar6);
    func_0x000100018c5c(lVar2,uVar6);
    if (unaff_x21 != 0) {
      func_0x000100018c5c(lVar2,uVar6);
      *param_3 = unaff_x21;
      return;
    }
    func_0x000100087440(lVar4);
    lVar5 = lVar4;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      func_0x000100018c5c(lVar2,uVar6);
      _objc_release(lVar4);
      uStack_88 = 0;
      lStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_90);
      func_0x000100018c5c(lVar2,uVar6);
      _swift_unknownObjectRelease(lVar5);
      _objc_release(lVar4);
    }
    uStack_68 = uStack_88;
    lStack_70 = lStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 == 0) {
      FUN_100071eac(&lStack_70,0x1000c49f8,&UNK_1000899e0);
    }
    else {
      uVar6 = 0;
      FUN_100071f2c(0,0x1000c4a00,&PTR_PTR_1000c20e8);
      puVar7 = param_1;
      _swift_dynamicCast(param_1,&lStack_70,puVar1 + 8,uVar6,6);
      if (((ulong)puVar7 & 1) != 0) {
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10006e7e0; end: 10006f52b;  */

void FUN_10006e7e0(undefined *param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                  code *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined4 uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_cc;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 uStack_6f;
  
  lVar5 = 0;
  uVar18 = param_2;
  uStack_134 = param_4;
  uStack_130 = param_3;
  pcStack_e0 = param_5;
  uStack_d8 = param_6;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_108 = *(long *)(lVar5 + -8);
  lStack_100 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_108 + 0x40));
  lVar5 = 0;
  puStack_110 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s8Dispatch0A3QoSVMa();
  lStack_120 = *(long *)(lVar5 + -8);
  lStack_118 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_120 + 0x40));
  lVar14 = (long)(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_128 = lVar14;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lStack_148 = *(long *)(lVar5 + -8);
  lStack_140 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_148 + 0x40));
  lStack_150 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100087100();
  puVar6 = param_1;
  func_0x000100087900();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    uVar16 = 0xe000000000000000;
    uVar12 = uVar18;
    if (param_2 == 2) goto LAB_10006e96c;
LAB_10006e930:
    if (param_2 == 1) {
      uStack_e8 = (ulong)uStack_e8._4_4_ << 0x20;
      uStack_cc = 0;
    }
    else {
      _swift_bridgeObjectRelease(uVar16);
      puVar17 = (undefined *)0x0;
      uVar16 = 0;
      uStack_cc = 0xff;
      uStack_e8 = CONCAT44(uStack_e8._4_4_,1);
    }
  }
  else {
    puVar17 = puVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar12 = uVar18;
    _objc_release(puVar6);
    uVar16 = uVar18;
    if (param_2 != 2) goto LAB_10006e930;
LAB_10006e96c:
    uStack_e8 = (ulong)uStack_e8._4_4_ << 0x20;
    uStack_cc = 2;
  }
  puVar6 = param_1;
  func_0x000100087060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
    uVar20 = 0;
    uVar18 = uVar12;
  }
  else {
    puVar19 = puVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar18 = uVar12;
    _objc_release(puVar6);
    uVar20 = uVar12;
  }
  puVar6 = param_1;
  func_0x000100087920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    uVar18 = 0;
  }
  else {
    puVar15 = puVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar6);
  }
  puVar6 = param_1;
  func_0x000100086520();
  _objc_retainAutoreleasedReturnValue();
  uStack_f8 = uVar16;
  puStack_f0 = puVar17;
  if (puVar6 == (undefined *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0x1000c78b8;
    FUN_100070c34(0x1000c78b8,&PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_1000c21c8,0x1000c7900,
                  &UNK_10008db50);
    _swift_allocObject();
    *(undefined8 *)(lVar5 + 0x18) = 3;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined **)(lVar5 + 0x20) = puVar6;
  }
  func_0x000100086a00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  _objc_release(param_1);
  uVar7 = 0x1000c78f0;
  puStack_c0 = puVar6;
  func_0x0001000100d0(0x1000c78f0,&UNK_10008db48);
  uVar8 = 0x1000c78f8;
  func_0x000100071f6c(0x1000c78f8,0x1000c78f0,&UNK_10008db48,PTR___sSayxGSKsMc_1000b11c8);
  uVar9 = 0;
  uVar13 = 0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,uVar7,uVar8);
  _swift_bridgeObjectRelease(puVar6);
  if ((uStack_e8 & 1) != 0) {
    puStack_c0 = (undefined *)CONCAT71(puStack_c0._1_7_,1);
    uStack_6f = 1;
    (*pcStack_e0)(&puStack_c0);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar20);
    return;
  }
  if (uVar20 == 0) {
LAB_10006eb74:
    if (uVar18 != 0) {
      uVar12 = (ulong)puVar15 & 0xffffffffffff;
      if ((uVar18 & 0x2000000000000000) != 0) {
        uVar12 = uVar18 >> 0x38 & 0xf;
      }
      puVar19 = puVar15;
      uVar16 = uVar18;
      if (uVar12 != 0) goto LAB_10006eba8;
    }
    puStack_c0 = (undefined *)((ulong)puStack_c0._1_7_ << 8);
    uStack_6f = 1;
    (*pcStack_e0)(&puStack_c0);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(uVar20);
    func_0x000100071d10(puStack_f0,uStack_f8,uStack_cc);
  }
  else {
    uVar12 = (ulong)puVar19 & 0xffffffffffff;
    if ((uVar20 & 0x2000000000000000) != 0) {
      uVar12 = uVar20 >> 0x38 & 0xf;
    }
    uVar16 = uVar20;
    if (uVar12 == 0) goto LAB_10006eb74;
LAB_10006eba8:
    puStack_178 = puVar15;
    uStack_168 = uVar9;
    uStack_160 = uVar18;
    uStack_158 = uVar13;
    uStack_e8 = uVar20;
    _swift_bridgeObjectRetain(uVar16);
    func_0x000100071f2c(0,0x1000c49b0,&PTR__OBJC_CLASS___OS_dispatch_queue_1000c20c8);
    lVar2 = lStack_140;
    lVar1 = lStack_148;
    lVar14 = lStack_150;
    (**(code **)(lStack_148 + 0x68))
              (lStack_150,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_1000b1750
               ,lStack_140);
    uVar4 = uStack_cc;
    puVar17 = puStack_f0;
    uVar12 = uStack_f8;
    func_0x000100071cf4(puStack_f0,uStack_f8,uStack_cc);
    lVar10 = lVar14;
    __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
    lStack_170 = lVar10;
    (**(code **)(lVar1 + 8))(lVar14,lVar2);
    puVar6 = &UNK_1000b6638;
    _swift_allocObject(&UNK_1000b6638,0x79,7);
    uVar7 = uStack_d8;
    uVar13 = uStack_130;
    uVar9 = uStack_158;
    uVar18 = uStack_160;
    *(undefined8 *)(puVar6 + 0x10) = uStack_130;
    *(long *)(puVar6 + 0x18) = lVar5;
    puVar6[0x20] = (byte)uStack_134 & 1;
    *(code **)(puVar6 + 0x28) = pcStack_e0;
    *(undefined8 *)(puVar6 + 0x30) = uStack_d8;
    *(undefined **)(puVar6 + 0x38) = puVar19;
    *(ulong *)(puVar6 + 0x40) = uVar16;
    *(undefined **)(puVar6 + 0x48) = puStack_178;
    *(ulong *)(puVar6 + 0x50) = uStack_160;
    *(undefined8 *)(puVar6 + 0x58) = uStack_168;
    *(undefined8 *)(puVar6 + 0x60) = uStack_158;
    *(undefined **)(puVar6 + 0x68) = puVar17;
    *(ulong *)(puVar6 + 0x70) = uVar12;
    puVar6[0x78] = (char)uVar4;
    uStack_a0 = 0x1000720ec;
    puStack_c0 = PTR___NSConcreteStackBlock_1000b0c60;
    uStack_b8 = 0x42000000;
    uStack_b0 = 0x100024234;
    puStack_a8 = &UNK_1000b6650;
    ppuVar11 = &puStack_c0;
    puStack_98 = puVar6;
    __Block_copy(ppuVar11);
    _swift_bridgeObjectRetain(lVar5);
    _swift_retain(uVar7);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar18);
    _objc_retain(uVar13);
    lVar1 = lStack_128;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_128);
    puStack_c8 = PTR___swiftEmptyArrayStorage_1000b14d0;
    FUN_100054aa8();
    uVar7 = 0x1000c4b98;
    func_0x0001000100d0(0x1000c4b98,&UNK_100089e30);
    uVar8 = 0x1000c4ba0;
    func_0x000100071f6c(0x1000c4ba0,0x1000c4b98,&UNK_100089e30,PTR___sSayxGSTsMc_1000b11d0);
    lVar2 = lStack_100;
    puVar3 = puStack_110;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (puStack_110,&puStack_c8,uVar7,uVar8,lStack_100,uVar13);
    lVar14 = lStack_170;
    __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (0,lVar1,puVar3,ppuVar11);
    __Block_release(ppuVar11);
    _swift_bridgeObjectRelease(uStack_e8);
    _swift_bridgeObjectRelease(uVar18);
    _swift_bridgeObjectRelease(lVar5);
    _swift_bridgeObjectRelease(uVar9);
    _objc_release(lVar14);
    func_0x000100071d10(puStack_f0,uStack_f8,uStack_cc);
    (**(code **)(lStack_108 + 8))(puVar3,lVar2);
    (**(code **)(lStack_120 + 8))(lVar1,lStack_118);
    _swift_release(puStack_98);
  }
  return;
}



/* Entry: 10006f52c; end: 10006f8b7;  */

ulong FUN_10006f52c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  char cStack_71;
  
  uVar15 = *param_1;
  if (uVar15 == 1) {
    func_0x000100087180();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      uVar15 = *param_1;
      *param_1 = 0;
    }
    else {
      uVar5 = 0;
      FUN_100071f2c(0,0x1000c78b0,&PTR__OBJC_CLASS___SCExtensionConversation_1000c21c0);
      uVar15 = param_2;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_2,uVar5);
      _objc_release(param_2);
      if (uVar15 >> 0x3e == 0) {
        uVar13 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar13 = uVar15 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar15) {
          uVar13 = uVar15;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          if ((uVar15 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10006f854);
              (*pcVar4)();
            }
            uVar6 = *(ulong *)(uVar15 + uVar14 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar6 = uVar14;
            func_0x000100070cac(uVar14,uVar15,&PTR__OBJC_CLASS___SCExtensionConversation_1000c21c0,
                                0x1000c78b0);
          }
          uVar1 = uVar14 + 1;
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10006f850);
            (*pcVar4)();
          }
          cStack_71 = '\0';
          puVar7 = &UNK_1000b6480;
          _swift_allocObject(&UNK_1000b6480,0x18,7);
          *(char **)(puVar7 + 0x10) = &cStack_71;
          puVar8 = &UNK_1000b64a8;
          _swift_allocObject(&UNK_1000b64a8,0x20,7);
          *(code **)(puVar8 + 0x10) = FUN_100071cc0;
          *(undefined **)(puVar8 + 0x18) = puVar7;
          puVar2 = PTR___NSConcreteStackBlock_1000b0c60;
          uStack_88 = 0x1000720bc;
          puStack_a8 = PTR___NSConcreteStackBlock_1000b0c60;
          uStack_a0 = 0x42000000;
          uStack_98 = 0x10007205c;
          puStack_90 = &UNK_1000b64c0;
          ppuVar9 = &puStack_a8;
          puStack_80 = puVar8;
          __Block_copy(ppuVar9);
          puVar10 = puStack_80;
          _swift_retain(puVar8);
          _swift_release(puVar10);
          puVar10 = &UNK_1000b64f8;
          _swift_allocObject(&UNK_1000b64f8,0x18,7);
          *(char **)(puVar10 + 0x10) = &cStack_71;
          puVar11 = &UNK_1000b6520;
          _swift_allocObject(&UNK_1000b6520,0x20,7);
          *(code **)(puVar11 + 0x10) = FUN_100071ce4;
          *(undefined **)(puVar11 + 0x18) = puVar10;
          uStack_88 = 0x1000720c0;
          puStack_a8 = puVar2;
          uStack_a0 = 0x42000000;
          uStack_98 = 0x100072060;
          puStack_90 = &UNK_1000b6538;
          ppuVar12 = &puStack_a8;
          puStack_80 = puVar11;
          __Block_copy(ppuVar12);
          puVar2 = puStack_80;
          _swift_retain(puVar11);
          _swift_release(puVar2);
          func_0x000100087020(uVar6);
          __Block_release(ppuVar12);
          __Block_release(ppuVar9);
          cVar3 = cStack_71;
          _swift_release(puVar7);
          puVar7 = puVar8;
          _swift_isEscapingClosureAtFileLocation(puVar8,"",0x45,0x43,0x2f,1);
          _swift_release(puVar10);
          _swift_release(puVar8);
          if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10006f858);
            (*pcVar4)();
          }
          puVar7 = puVar11;
          _swift_isEscapingClosureAtFileLocation(puVar11,"",0x45,0x45,0x1a,1);
          _swift_release(puVar11);
          if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10006f85c);
            (*pcVar4)();
          }
          if (cVar3 != '\0') {
            _swift_bridgeObjectRelease(uVar15);
            uVar15 = *param_1;
            *param_1 = uVar6;
            _objc_retain(uVar6);
            func_0x000100070b60(uVar15);
            return uVar6;
          }
          _objc_release(uVar6);
          uVar14 = uVar14 + 1;
        } while (uVar1 != uVar13);
      }
      _swift_bridgeObjectRelease(uVar15);
      uVar15 = *param_1;
      *param_1 = 0;
    }
    func_0x000100070b60(uVar15);
    uVar15 = 0;
  }
  else {
    _objc_retain(uVar15);
  }
  return uVar15;
}



/* Entry: 10006f8b8; end: 10006f8ef;  */

void FUN_10006f8b8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  _objc_retain(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_2);
  return;
}



/* Entry: 10006f8f0; end: 10006fba7;  */

ulong FUN_10006f8f0(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = *param_1;
  if (uVar8 == 1) {
    func_0x000100086a20();
    _objc_retainAutoreleasedReturnValue();
    if (param_2 != 0) {
      uVar3 = 0;
      FUN_100071f2c(0,0x1000c4140,&PTR__OBJC_CLASS___SCExtensionSnapchatter_1000c20b0);
      uVar8 = param_2;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_2,uVar3);
      _objc_release(param_2);
      if (uVar8 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar6 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar6 != 0) {
        uVar7 = 0;
        do {
          if ((uVar8 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10006fa30);
              (*pcVar2)();
            }
            uVar4 = *(ulong *)(uVar8 + uVar7 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar4 = uVar7;
            func_0x000100070cac(uVar7,uVar8,&PTR__OBJC_CLASS___SCExtensionSnapchatter_1000c20b0,
                                0x1000c4140);
          }
          uVar1 = uVar7 + 1;
          if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10006fa2c);
            (*pcVar2)();
          }
          uVar5 = uVar4;
          func_0x000100086ee0();
          if ((int)uVar5 != 0) {
            _swift_bridgeObjectRelease(uVar8);
            uVar8 = *param_1;
            *param_1 = uVar4;
            _objc_retain(uVar4);
            func_0x000100070b60(uVar8);
            return uVar4;
          }
          _objc_release(uVar4);
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar6);
      }
      _swift_bridgeObjectRelease(uVar8);
    }
    uVar8 = *param_1;
    *param_1 = 0;
    func_0x000100070b60(uVar8);
    uVar8 = 0;
  }
  else {
    _objc_retain(uVar8);
  }
  return uVar8;
}



/* Entry: 10006fba8; end: 1000709a3;  */

undefined * FUN_10006fba8(undefined *param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar11;
  long extraout_x8_01;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  undefined8 extraout_x13;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  code *pcVar23;
  ulong auStack_120 [3];
  undefined *puStack_108;
  ulong *puStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  ulong *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,param_2);
  uVar6 = 0x1000c78c0;
  func_0x0001000100d0(0x1000c78c0,&UNK_10008db10);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(uVar6 - 8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  puStack_100 = (ulong *)((long)auStack_120 - extraout_x8);
  __s10Foundation3URLVMa();
  puVar22 = *(undefined **)(lVar4 + -8);
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)((long)puVar22 + 0x40));
  lVar4 = ((long)auStack_120 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar11 = (ulong *)(lVar4 - extraout_x12);
  lVar4 = 0x1000c4330;
  puStack_c8 = puVar11;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  lStack_b8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar19 = (long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar4 = lVar19 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar12 = (lVar4 - extraout_x12_01) - extraout_x12_02;
  uStack_f0 = uVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  uVar12 = uVar12 - extraout_x12_03;
  uStack_d0 = uVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar21 = uVar12 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar20 = lVar21 - extraout_x12_05;
  if (param_1 == (undefined *)0x0) {
LAB_100070174:
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)((ulong)param_1 >> 0x3e);
    uStack_f8 = extraout_x13;
    if (puVar14 == (undefined *)0x0) {
      puVar5 = *(undefined **)((undefined *)((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      puVar15 = puVar5;
      if ((undefined *)0x2 < puVar5) {
        puVar15 = (undefined *)0x3;
      }
      if ((long)puVar5 < (long)puVar15) {
LAB_1000709a0:
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1000709a4);
        (*pcVar23)();
      }
    }
    else {
      puVar15 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        puVar15 = param_1;
      }
      puVar5 = puVar15;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puStack_e0 = puVar5;
      puStack_d8 = puVar15;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100070974);
        (*pcVar23)();
      }
      puVar15 = puStack_e0;
      if ((undefined *)0x2 < puStack_e0) {
        puVar15 = (undefined *)0x3;
      }
      puVar5 = puStack_d8;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if ((long)puVar5 < (long)puVar15) goto LAB_1000709a0;
    }
    auStack_120[0] = uVar6;
    auStack_120[1] = param_3;
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      _swift_bridgeObjectRetain(param_1);
LAB_10006fe44:
      puVar5 = (undefined *)0x0;
      auStack_120[2] = (ulong)param_1 & 0xffffffffffffff8;
      puVar14 = (undefined *)(auStack_120[2] + 0x20);
      param_4 = (long)puVar15 << 1 | 1;
      if (((ulong)puStack_b0 & 1) == 0) goto LAB_100070004;
LAB_10006fe64:
      lVar18 = lStack_c0;
      if (auStack_120[2] == 0) goto LAB_100070174;
      puVar15 = (undefined *)(param_4 >> 1);
      uVar6 = (long)puVar15 - (long)puVar5;
      if (SBORROW8((long)puVar15,(long)puVar5)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100070978);
        (*pcVar23)();
      }
      puStack_b0 = PTR___swiftEmptyArrayStorage_1000b14d0;
      if (uVar6 != 0) {
        puStack_a8 = PTR___swiftEmptyArrayStorage_1000b14d0;
        puStack_e0 = (undefined *)param_4;
        puStack_d8 = puVar14;
        _swift_unknownObjectRetain(auStack_120[2]);
        func_0x000100070ea4(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100070980);
          (*pcVar23)();
        }
        puStack_b0 = puStack_a8;
        puVar14 = puVar5;
        if ((long)puVar5 <= (long)puVar15) {
          puVar14 = puVar15;
        }
        lVar4 = (long)puVar14 - (long)puVar5;
        if (((ulong)puStack_e0 & 1) == 0) {
          plVar16 = (long *)(puStack_d8 + (long)puVar5 * 8);
          do {
            if (lVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100070944);
              (*pcVar23)();
            }
            lVar21 = *plVar16;
            _objc_retain();
            _objc_retain();
            lVar19 = lVar21;
            func_0x0001000864e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar19 != 0) {
              __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar20);
              _objc_release(lVar19);
            }
            (**(code **)((long)puVar22 + 0x38))(lVar20,lVar19 == 0,1,lVar18);
            _objc_release(lVar21);
            _objc_release(lVar21);
            puStack_a8 = puStack_b0;
            uVar12 = *(ulong *)(puStack_b0 + 0x10);
            if (*(ulong *)(puStack_b0 + 0x18) >> 1 <= uVar12) {
              func_0x000100070ea4(1 < *(ulong *)(puStack_b0 + 0x18),uVar12 + 1,1);
            }
            *(ulong *)(puStack_a8 + 0x10) = uVar12 + 1;
            puStack_b0 = puStack_a8;
            func_0x000100071d58(lVar20,puStack_a8 +
                                       *(long *)(lStack_b8 + 0x48) * uVar12 +
                                       ((ulong)*(byte *)(lStack_b8 + 0x50) + 0x20 &
                                       ((ulong)*(byte *)(lStack_b8 + 0x50) ^ 0xffffffffffffffff)));
            lVar4 = lVar4 + -1;
            plVar16 = plVar16 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        else {
          plVar16 = (long *)(puStack_d8 + (long)puVar5 * 8);
          do {
            if (lVar4 == 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x10007094c);
              (*pcVar23)();
            }
            lVar21 = *plVar16;
            _objc_retain();
            _objc_retain();
            lVar20 = lVar21;
            func_0x0001000864e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar20 != 0) {
              __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar19);
              _objc_release(lVar20);
            }
            (**(code **)((long)puVar22 + 0x38))(lVar19,lVar20 == 0,1,lVar18);
            _objc_release(lVar21);
            _objc_release(lVar21);
            puStack_a8 = puStack_b0;
            uVar12 = *(ulong *)(puStack_b0 + 0x10);
            if (*(ulong *)(puStack_b0 + 0x18) >> 1 <= uVar12) {
              func_0x000100070ea4(1 < *(ulong *)(puStack_b0 + 0x18),uVar12 + 1,1);
            }
            *(ulong *)(puStack_a8 + 0x10) = uVar12 + 1;
            puStack_b0 = puStack_a8;
            func_0x000100071d58(lVar19,puStack_a8 +
                                       *(long *)(lStack_b8 + 0x48) * uVar12 +
                                       ((ulong)*(byte *)(lStack_b8 + 0x50) + 0x20 &
                                       ((ulong)*(byte *)(lStack_b8 + 0x50) ^ 0xffffffffffffffff)));
            lVar4 = lVar4 + -1;
            plVar16 = plVar16 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        goto LAB_100070350;
      }
    }
    else {
      if (puVar15 == (undefined *)0x0) {
        _swift_bridgeObjectRetain(param_1);
      }
      else {
        puVar5 = (undefined *)0x0;
        FUN_100071f2c(0,0x1000c78b8,&PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_1000c21c8);
        puStack_d8 = puVar14;
        _swift_bridgeObjectRetain(param_1);
        puVar14 = puStack_d8;
        puStack_e0 = puVar5;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(0,param_1,puVar5);
        if ((puVar15 != (undefined *)0x1) &&
           (__ss12_ArrayBufferV18_typeCheckSlowPathyySiF(1,param_1,puStack_e0),
           puVar15 != (undefined *)0x2)) {
          __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(2,param_1,puStack_e0);
        }
      }
      if (puVar14 == (undefined *)0x0) goto LAB_10006fe44;
      _swift_bridgeObjectRelease(param_1);
      puVar5 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        puVar5 = param_1;
      }
      uVar6 = 0;
      __ss18_CocoaArrayWrapperVys12_SliceBufferVyyXlGSnySiGcig();
      puVar14 = puVar15;
      auStack_120[2] = uVar6;
      if (((ulong)puStack_b0 & 1) != 0) goto LAB_10006fe64;
LAB_100070004:
      if (auStack_120[2] == 0) goto LAB_100070174;
      puVar15 = (undefined *)(param_4 >> 1);
      uVar6 = (long)puVar15 - (long)puVar5;
      if (SBORROW8((long)puVar15,(long)puVar5)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x10007097c);
        (*pcVar23)();
      }
      puStack_b0 = PTR___swiftEmptyArrayStorage_1000b14d0;
      lVar18 = lStack_c0;
      if (uVar6 != 0) {
        puStack_a8 = PTR___swiftEmptyArrayStorage_1000b14d0;
        puStack_e0 = (undefined *)param_4;
        puStack_d8 = puVar14;
        _swift_unknownObjectRetain(auStack_120[2]);
        func_0x000100070ea4(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
        lVar18 = lStack_c0;
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100070984);
          (*pcVar23)();
        }
        puStack_b0 = puStack_a8;
        puVar14 = puVar5;
        if ((long)puVar5 <= (long)puVar15) {
          puVar14 = puVar15;
        }
        lVar19 = (long)puVar14 - (long)puVar5;
        if (((ulong)puStack_e0 & 1) == 0) {
          plVar16 = (long *)(puStack_d8 + (long)puVar5 * 8);
          do {
            if (lVar19 == 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100070948);
              (*pcVar23)();
            }
            lVar20 = *plVar16;
            _objc_retain();
            _objc_retain();
            lVar4 = lVar20;
            func_0x000100086500();
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 != 0) {
              __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar21);
              _objc_release(lVar4);
            }
            (**(code **)((long)puVar22 + 0x38))(lVar21,lVar4 == 0,1,lVar18);
            _objc_release(lVar20);
            _objc_release(lVar20);
            puStack_a8 = puStack_b0;
            uVar12 = *(ulong *)(puStack_b0 + 0x10);
            if (*(ulong *)(puStack_b0 + 0x18) >> 1 <= uVar12) {
              func_0x000100070ea4(1 < *(ulong *)(puStack_b0 + 0x18),uVar12 + 1,1);
            }
            *(ulong *)(puStack_a8 + 0x10) = uVar12 + 1;
            puStack_b0 = puStack_a8;
            func_0x000100071d58(lVar21,puStack_a8 +
                                       *(long *)(lStack_b8 + 0x48) * uVar12 +
                                       ((ulong)*(byte *)(lStack_b8 + 0x50) + 0x20 &
                                       ((ulong)*(byte *)(lStack_b8 + 0x50) ^ 0xffffffffffffffff)));
            lVar19 = lVar19 + -1;
            plVar16 = plVar16 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        else {
          plVar16 = (long *)(puStack_d8 + (long)puVar5 * 8);
          do {
            if (lVar19 == 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100070950);
              (*pcVar23)();
            }
            lVar21 = *plVar16;
            _objc_retain();
            _objc_retain();
            lVar20 = lVar21;
            func_0x000100086500();
            _objc_retainAutoreleasedReturnValue();
            if (lVar20 != 0) {
              __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar4);
              _objc_release(lVar20);
            }
            (**(code **)((long)puVar22 + 0x38))(lVar4,lVar20 == 0,1,lVar18);
            _objc_release(lVar21);
            _objc_release(lVar21);
            puStack_a8 = puStack_b0;
            uVar12 = *(ulong *)(puStack_b0 + 0x10);
            if (*(ulong *)(puStack_b0 + 0x18) >> 1 <= uVar12) {
              func_0x000100070ea4(1 < *(ulong *)(puStack_b0 + 0x18),uVar12 + 1,1);
            }
            *(ulong *)(puStack_a8 + 0x10) = uVar12 + 1;
            puStack_b0 = puStack_a8;
            func_0x000100071d58(lVar4,puStack_a8 +
                                      *(long *)(lStack_b8 + 0x48) * uVar12 +
                                      ((ulong)*(byte *)(lStack_b8 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(lStack_b8 + 0x50) ^ 0xffffffffffffffff)));
            lVar19 = lVar19 + -1;
            plVar16 = plVar16 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
LAB_100070350:
        _swift_unknownObjectRelease(auStack_120[2]);
      }
    }
    lVar4 = *(long *)(puStack_b0 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_1000b14d0;
    puStack_e0 = puVar22;
    if (lVar4 != 0) {
      puVar15 = puStack_b0 +
                ((ulong)*(byte *)(lStack_b8 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lStack_b8 + 0x50) ^ 0xffffffffffffffff));
      puStack_d8 = *(undefined **)(lStack_b8 + 0x48);
      uVar6 = uStack_f0;
      do {
        uVar12 = uStack_d0;
        func_0x000100071da8(puVar15,uStack_d0,0x1000c4330,&UNK_1000890b0);
        func_0x000100071d58(uVar12,uVar6);
        uVar12 = uVar6;
        (**(code **)((long)puVar22 + 0x30))(uVar6,1,lVar18);
        if ((int)uVar12 == 1) {
          FUN_100071eac(uVar6,0x1000c4330,&UNK_1000890b0);
        }
        else {
          pcVar23 = *(code **)((long)puVar22 + 0x20);
          (*pcVar23)(puStack_c8,uVar6,lVar18);
          puVar22 = puVar14;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar5 = puVar14;
          if (((ulong)puVar22 & 1) == 0) {
            puVar5 = (undefined *)0x0;
            FUN_100071368(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
          }
          uVar6 = *(ulong *)(puVar5 + 0x10);
          puVar14 = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar6) {
            puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
            FUN_100071368(puVar14,uVar6 + 1,1,puVar5);
          }
          lVar18 = lStack_c0;
          puVar22 = puStack_e0;
          *(ulong *)(puVar14 + 0x10) = uVar6 + 1;
          (*pcVar23)(puVar14 + *(long *)((long)puStack_e0 + 0x48) * uVar6 +
                               ((ulong)*(byte *)((long)puStack_e0 + 0x50) + 0x20 &
                               ((ulong)*(byte *)((long)puStack_e0 + 0x50) ^ 0xffffffffffffffff)),
                     puStack_c8);
          uVar6 = uStack_f0;
        }
        puVar15 = puVar15 + (long)puStack_d8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    lVar4 = *(long *)(puVar14 + 0x10);
    _swift_bridgeObjectRelease(puVar14);
    if (lVar4 == 0) {
      _swift_bridgeObjectRelease(puStack_b0);
      puVar22 = (undefined *)0x0;
    }
    else {
      puVar14 = &UNK_1000b65c0;
      _swift_allocObject(&UNK_1000b65c0,0x18,7);
      puVar15 = puStack_b0;
      uVar7 = 0;
      FUN_100071e14(0,*(undefined8 *)(puStack_b0 + 0x10));
      puStack_c8 = (ulong *)(puVar14 + 0x10);
      *puStack_c8 = uVar7;
      puStack_108 = puVar14;
      _dispatch_group_create();
      uVar12 = auStack_120[1];
      uVar6 = auStack_120[0];
      uStack_d0 = *(ulong *)(puVar15 + 0x10);
      uStack_f0 = uVar7;
      if (uStack_d0 != 0) {
        uVar7 = 0;
        puVar11 = puStack_100;
        do {
          if (*(ulong *)(puStack_b0 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x10007093c);
            (*pcVar23)();
          }
          bVar1 = *(byte *)(lStack_b8 + 0x50);
          lVar4 = *(long *)(lStack_b8 + 0x48);
          iVar2 = *(int *)(uVar6 + 0x30);
          *puVar11 = uVar7;
          func_0x000100071da8(puStack_b0 +
                              lVar4 * uVar7 +
                              ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),
                              (long)puVar11 + (long)iVar2,0x1000c4330,&UNK_1000890b0);
          uVar17 = uStack_f8;
          func_0x000100071da8((long)puVar11 + (long)iVar2,uStack_f8,0x1000c4330,&UNK_1000890b0);
          lVar4 = lStack_c0;
          uVar9 = uVar17;
          (**(code **)((long)puVar22 + 0x30))(uVar17,1,lStack_c0);
          if ((int)uVar9 == 1) {
            FUN_100071eac(uVar17,0x1000c4330,&UNK_1000890b0);
            puVar3 = puStack_c8;
            _swift_beginAccess(puStack_c8,&puStack_a8,0x21,0);
            uVar13 = *puVar3;
            _objc_retain(uVar12);
            uVar10 = uVar13;
            _swift_isUniquelyReferenced_nonNull_native();
            *puVar3 = uVar13;
            if ((uVar10 & 1) == 0) {
              FUN_10007172c();
              *puStack_c8 = uVar13;
            }
            if (*(ulong *)(uVar13 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x100070940);
              (*pcVar23)();
            }
            lVar4 = uVar13 + uVar7 * 8;
            uVar17 = *(undefined8 *)(lVar4 + 0x20);
            *(ulong *)(lVar4 + 0x20) = uVar12;
            *puStack_c8 = uVar13;
            _swift_endAccess(&puStack_a8);
            _objc_release(uVar17);
          }
          else {
            (**(code **)((long)puVar22 + 0x20))(lStack_e8,uVar17,lVar4);
            uVar10 = uStack_f0;
            _dispatch_group_enter(uStack_f0);
            puVar15 = PTR__OBJC_CLASS___NSURLSession_1000c21a0;
            _objc_opt_self();
            func_0x0001000875c0();
            _objc_retainAutoreleasedReturnValue();
            puStack_d8 = puVar15;
            __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
            puVar22 = &UNK_1000b65e8;
            _swift_allocObject(&UNK_1000b65e8,0x30,7);
            puVar14 = puStack_108;
            *(ulong *)(puVar22 + 0x10) = uVar12;
            *(undefined **)(puVar22 + 0x18) = puStack_108;
            *(ulong *)(puVar22 + 0x20) = uVar7;
            *(ulong *)(puVar22 + 0x28) = uVar10;
            pcStack_88 = FUN_100071f20;
            puStack_a8 = PTR___NSConcreteStackBlock_1000b0c60;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_100057954;
            puStack_90 = &UNK_1000b6600;
            ppuVar8 = &puStack_a8;
            puStack_80 = puVar22;
            __Block_copy(ppuVar8);
            puVar22 = puStack_80;
            _objc_retain(uVar12);
            _swift_retain(puVar14);
            _objc_retain(uVar10);
            _swift_release(puVar22);
            puVar14 = puStack_d8;
            puVar5 = puStack_d8;
            func_0x000100086740(puStack_d8);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puStack_100;
            __Block_release(ppuVar8);
            puVar22 = puStack_e0;
            _objc_release(puVar14);
            _objc_release(puVar15);
            func_0x0001000871c0(puVar5);
            _objc_release(puVar5);
            (**(code **)((long)puVar22 + 8))(lStack_e8,lVar4);
          }
          uVar7 = uVar7 + 1;
          FUN_100071eac(puVar11,0x1000c78c0,&UNK_10008db10);
        } while (uStack_d0 != uVar7);
      }
      _swift_bridgeObjectRelease(puStack_b0);
      __sSo17OS_dispatch_groupC8DispatchE4waityyF();
      puVar11 = puStack_c8;
      _swift_beginAccess(puStack_c8,&puStack_a8,0,0);
      uVar12 = *puVar11;
      uVar7 = *(ulong *)(uVar12 + 0x10);
      _swift_bridgeObjectRetain(uVar12);
      uVar6 = 0;
      puVar22 = PTR___swiftEmptyArrayStorage_1000b14d0;
      while (uVar7 != uVar6) {
        if (*(ulong *)(uVar12 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x100070938);
          (*pcVar23)();
        }
        lVar4 = *(long *)(uVar12 + uVar6 * 8 + 0x20);
        uVar6 = uVar6 + 1;
        if (lVar4 != 0) {
          _objc_retain();
          puVar14 = puVar22;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar14 == 0) || ((long)puVar22 < 0)) ||
             (puVar14 = puVar22, ((ulong)puVar22 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar22 >> 0x3e == 0) {
              puVar15 = *(undefined **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar15 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar22) {
                puVar15 = puVar22;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar15);
            }
            puVar14 = (undefined *)0x0;
            FUN_100071240(0,puVar15 + 1,1,puVar22);
          }
          uVar13 = (ulong)puVar14 & 0xffffffffffffff8;
          uVar10 = *(ulong *)(uVar13 + 0x10);
          puVar22 = puVar14;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar10) {
            puVar22 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_100071240(puVar22,uVar10 + 1,1,puVar14);
            uVar13 = (ulong)puVar22 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar13 + 0x10) = uVar10 + 1;
          *(long *)(uVar13 + uVar10 * 8 + 0x20) = lVar4;
        }
      }
      _swift_release(puStack_108);
      _swift_bridgeObjectRelease(uVar12);
      _objc_release(uStack_f0);
    }
    _swift_unknownObjectRelease(auStack_120[2]);
  }
  return puVar22;
}



/* Entry: 1000709a4; end: 100070af3;  */

void FUN_1000709a4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6,ulong param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  
  if (param_2 >> 0x3c < 0xf) {
    puVar3 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone();
    func_0x00010001c120(param_1,param_2);
    uVar5 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
    func_0x000100086ca0();
    _objc_release(uVar5);
    FUN_1000275d4(param_1,param_2);
    if (puVar3 != (undefined *)0x0) goto LAB_100070a50;
  }
  _objc_retain(param_5);
  puVar3 = param_5;
LAB_100070a50:
  _objc_retain();
  _swift_beginAccess(param_6 + 0x10,auStack_68,0x21,0);
  uVar6 = *(ulong *)(param_6 + 0x10);
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_6 + 0x10) = uVar6;
  if ((uVar4 & 1) == 0) {
    FUN_10007172c();
    *(ulong *)(param_6 + 0x10) = uVar6;
  }
  if ((long)param_7 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100070af0);
    (*pcVar2)();
  }
  if (param_7 < *(ulong *)(uVar6 + 0x10)) {
    lVar1 = uVar6 + param_7 * 8;
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined **)(lVar1 + 0x20) = puVar3;
    *(ulong *)(param_6 + 0x10) = uVar6;
    _swift_endAccess(auStack_68);
    _objc_release(uVar5);
    _dispatch_group_leave(param_8);
    _objc_release(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100070af4);
  (*pcVar2)();
}



/* Entry: 100070af4; end: 100070b0b;  */

/* WARNING: Removing unreachable block (ram,0x00010006dd74) */

void FUN_100070af4(ulong param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  code *pcVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 *unaff_x20;
  undefined *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined *puStack_150;
  undefined *puStack_140;
  undefined1 auStack_120 [8];
  undefined8 auStack_118 [4];
  undefined8 auStack_f8 [3];
  long lStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_7f;
  
  uVar18 = *unaff_x20;
  uVar2 = param_1;
  pcVar20 = param_2;
  __s21SnapchatWidgetsShared12AppGroupDataO17loadCurrentUserIdSSSgyFZ();
  if (pcVar20 == (code *)0x0) {
LAB_10006dd08:
    puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
    uStack_7f = 1;
    (*param_2)(&puStack_d0);
    return;
  }
  uVar3 = uVar2;
  __s21SnapchatWidgetsShared12AppGroupDataO25loadSnapchatterRepository6userIdSo011SCExtensionhI0CSgSS_tFZ
            ();
  if (uVar3 == 0) {
    _swift_bridgeObjectRelease(pcVar20);
    goto LAB_10006dd08;
  }
  puVar4 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000c20d0;
  _objc_allocWithZone();
  _objc_retain(&PTR____CFConstantStringClassReference_1000b7480);
  uVar5 = uVar2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,pcVar20);
  func_0x000100086c40();
  _objc_release(uVar5);
  _objc_release(&PTR____CFConstantStringClassReference_1000b7480);
  if (puVar4 == (undefined *)0x0) {
LAB_10006dcf0:
    puVar19 = (undefined *)0x0;
    puStack_150 = (undefined *)0x0;
    puStack_140 = (undefined *)0x0;
  }
  else {
    puStack_140 = PTR__OBJC_CLASS___SCAppGroupPlistStorage_1000c20d8;
    _objc_allocWithZone();
    func_0x000100086ce0();
    if (puStack_140 == (undefined *)0x0) goto LAB_10006dcf0;
    puVar19 = puStack_140;
    func_0x0001000870e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar19 == (undefined *)0x0) {
      uStack_c8 = 0;
      puStack_d0 = (undefined *)0x0;
      puStack_b8 = (undefined *)0x0;
      uStack_c0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&puStack_d0);
      _swift_unknownObjectRelease(puVar19);
    }
    func_0x000100071da8(&puStack_d0,auStack_f8,0x1000c49f8,&UNK_1000899e0);
    if (lStack_e0 == 0) {
      FUN_100071eac(&puStack_d0,0x1000c49f8,&UNK_1000899e0);
LAB_10006dd9c:
      puVar19 = (undefined *)0x0;
      puStack_150 = (undefined *)0x0;
    }
    else {
      FUN_100036784(auStack_f8,auStack_118);
      FUN_10006e630(&puStack_d8,auStack_118,auStack_120);
      FUN_10001e3c0(auStack_118);
      FUN_100071eac(&puStack_d0,0x1000c49f8,&UNK_1000899e0);
      if (puStack_d8 == (undefined *)0x0) goto LAB_10006dd9c;
      puStack_150 = puStack_d8;
      puVar19 = puStack_d8;
      func_0x000100086f00();
    }
  }
  puVar6 = &UNK_1000b6250;
  _swift_allocObject(&UNK_1000b6250,0x38,7);
  *(ulong *)(puVar6 + 0x10) = param_1;
  *(undefined8 *)(puVar6 + 0x18) = uVar18;
  puVar6[0x20] = (char)puVar19;
  *(code **)(puVar6 + 0x28) = param_2;
  *(undefined8 *)(puVar6 + 0x30) = param_3;
  puVar7 = &UNK_1000b6278;
  _swift_allocObject(&UNK_1000b6278,0x38,7);
  *(ulong *)(puVar7 + 0x10) = param_1;
  *(undefined8 *)(puVar7 + 0x18) = uVar18;
  puVar7[0x20] = (char)puVar19;
  *(code **)(puVar7 + 0x28) = param_2;
  *(undefined8 *)(puVar7 + 0x30) = param_3;
  uVar8 = uVar18;
  _objc_retain();
  pcVar16 = (code *)0x3;
  _swift_retain_n(param_3);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar5 = param_1;
  func_0x0001000869c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
LAB_10006def4:
    _swift_bridgeObjectRelease(pcVar20);
  }
  else {
    uVar9 = uVar5;
    func_0x000100086b40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 == 0) {
      _objc_release(uVar5);
      goto LAB_10006def4;
    }
    uVar10 = uVar9;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    pcVar17 = pcVar16;
    _objc_release(uVar9);
    uVar9 = uVar5;
    func_0x0001000866c0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar9 != 0) {
      uVar11 = uVar9;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(uVar9);
      if ((uVar2 == uVar11) && (pcVar20 == pcVar17)) {
        _swift_bridgeObjectRelease(pcVar20);
        _swift_bridgeObjectRelease(pcVar17);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar2,pcVar20,uVar11,pcVar17,0);
        _swift_bridgeObjectRelease(pcVar20);
        _swift_bridgeObjectRelease(pcVar17);
        if ((uVar2 & 1) == 0) {
          _swift_bridgeObjectRelease(pcVar16);
          _objc_release(uVar5);
          goto LAB_10006df00;
        }
      }
      uVar2 = uVar10;
      FUN_100071740(uVar10,pcVar16,uVar3);
      if (uVar2 == 0) {
LAB_10006e2ec:
        func_0x0001000719f8(uVar10,pcVar16,uVar3);
        _swift_bridgeObjectRelease(pcVar16);
        if (uVar10 == 0) {
          auStack_f8[0] = 1;
          auStack_118[0] = 1;
          puStack_d8 = (undefined *)0x1;
          puVar12 = auStack_f8;
          func_0x00010006f39c(puVar12,uVar3);
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = auStack_118;
            FUN_10006f52c(puVar12,uVar3);
            if (puVar12 == (undefined8 *)0x0) {
              ppuVar15 = &puStack_d8;
              FUN_10006f8f0(ppuVar15,uVar3);
              if (ppuVar15 != (undefined **)0x0) {
                FUN_10006e7e0();
                _objc_release(ppuVar15);
              }
              func_0x000100070b60(puStack_d8);
              uVar18 = 0;
              puVar19 = (undefined *)0x0;
              uVar22 = 0;
              puVar21 = (undefined *)0x0;
            }
            else {
              puVar19 = &UNK_1000b6390;
              _swift_allocObject(&UNK_1000b6390,0x20,7);
              *(undefined8 *)(puVar19 + 0x10) = 0x100070b00;
              *(undefined **)(puVar19 + 0x18) = puVar6;
              puVar21 = &UNK_1000b63b8;
              _swift_allocObject(&UNK_1000b63b8,0x20,7);
              uVar18 = 0x1000720ac;
              *(undefined8 *)(puVar21 + 0x10) = 0x1000720ac;
              *(undefined **)(puVar21 + 0x18) = puVar19;
              puVar1 = PTR___NSConcreteStackBlock_1000b0c60;
              pcStack_b0 = (code *)0x1000720b0;
              puStack_d0 = PTR___NSConcreteStackBlock_1000b0c60;
              uStack_c8 = 0x42000000;
              uStack_c0 = 0x10007205c;
              puStack_b8 = &UNK_1000b63d0;
              ppuVar15 = &puStack_d0;
              puStack_a8 = puVar21;
              __Block_copy();
              puVar21 = puStack_a8;
              _swift_retain(puVar6);
              _swift_release(puVar21);
              puVar21 = &UNK_1000b6408;
              _swift_allocObject(&UNK_1000b6408,0x20,7);
              *(undefined8 *)(puVar21 + 0x10) = 0x100070b40;
              *(undefined **)(puVar21 + 0x18) = puVar7;
              puVar13 = &UNK_1000b6430;
              _swift_allocObject(&UNK_1000b6430,0x20,7);
              uVar22 = 0x1000720b4;
              *(undefined8 *)(puVar13 + 0x10) = 0x1000720b4;
              *(undefined **)(puVar13 + 0x18) = puVar21;
              pcStack_b0 = (code *)0x1000720b8;
              puStack_d0 = puVar1;
              uStack_c8 = 0x42000000;
              uStack_c0 = 0x100072060;
              puStack_b8 = &UNK_1000b6448;
              ppuVar14 = &puStack_d0;
              puStack_a8 = puVar13;
              __Block_copy(ppuVar14);
              puVar13 = puStack_a8;
              _swift_retain(puVar7);
              _swift_release(puVar13);
              func_0x000100087020(puVar12);
              _objc_release(puVar12);
              __Block_release(ppuVar14);
              __Block_release(ppuVar15);
            }
          }
          else {
            FUN_10006e7e0();
            _objc_release(puVar12);
            uVar18 = 0;
            puVar19 = (undefined *)0x0;
            uVar22 = 0;
            puVar21 = (undefined *)0x0;
          }
          func_0x000100070b60(auStack_118[0]);
          func_0x000100070b60(auStack_f8[0]);
          func_0x000100070b70(uVar18,puVar19);
          func_0x000100070b70(uVar22,puVar21);
          _objc_release(uVar8);
          _objc_release(param_1);
          _swift_release(puVar6);
          _swift_release(puVar7);
          _objc_release(uVar5);
          _objc_release(uVar3);
          _objc_release(puVar4);
          _objc_release(puStack_140);
          _objc_release(puStack_150);
          _swift_release(param_3);
          return;
        }
        func_0x00010006eeac(uVar10,param_1,uVar18,puVar19,param_2,param_3);
        _objc_release(uVar10);
        _objc_release(puVar4);
        _objc_release(uVar5);
        _swift_release(puVar7);
      }
      else {
        uVar9 = uVar2;
        func_0x000100086ee0();
        if ((int)uVar9 == 0) {
          _objc_release(uVar2);
          goto LAB_10006e2ec;
        }
        _swift_bridgeObjectRelease(pcVar16);
        FUN_10006e7e0(uVar2,param_1,uVar18,puVar19,param_2,param_3);
        _objc_release(uVar2);
        _objc_release(puVar4);
        _objc_release(uVar5);
        _swift_release(puVar7);
      }
      _swift_release(param_3);
      _objc_release(uVar8);
      _objc_release(param_1);
      _swift_release(puVar6);
      _objc_release(uVar3);
      _objc_release(puStack_150);
      goto LAB_10006e26c;
    }
    _swift_bridgeObjectRelease(pcVar20);
    _swift_bridgeObjectRelease(pcVar16);
    _objc_release(uVar5);
  }
LAB_10006df00:
  auStack_f8[0] = 1;
  auStack_118[0] = 1;
  puStack_d8 = (undefined *)0x1;
  puVar12 = auStack_f8;
  func_0x00010006f39c(puVar12,uVar3);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = auStack_118;
    FUN_10006f52c(puVar12,uVar3);
    if (puVar12 == (undefined8 *)0x0) {
      ppuVar15 = &puStack_d8;
      FUN_10006f8f0(ppuVar15,uVar3);
      if (ppuVar15 != (undefined **)0x0) {
        FUN_10006e7e0();
        _objc_release(ppuVar15);
      }
      func_0x000100070b60(puStack_d8);
      uVar18 = 0;
      puVar19 = (undefined *)0x0;
      pcVar20 = (code *)0x0;
      puVar21 = (undefined *)0x0;
    }
    else {
      puVar19 = &UNK_1000b62a0;
      _swift_allocObject(&UNK_1000b62a0,0x20,7);
      *(undefined8 *)(puVar19 + 0x10) = 0x100070b00;
      *(undefined **)(puVar19 + 0x18) = puVar6;
      puVar21 = &UNK_1000b62c8;
      _swift_allocObject(&UNK_1000b62c8,0x20,7);
      uVar18 = 0x1000720a4;
      *(undefined8 *)(puVar21 + 0x10) = 0x1000720a4;
      *(undefined **)(puVar21 + 0x18) = puVar19;
      puVar1 = PTR___NSConcreteStackBlock_1000b0c60;
      pcStack_b0 = (code *)0x1000720a8;
      puStack_d0 = PTR___NSConcreteStackBlock_1000b0c60;
      uStack_c8 = 0x42000000;
      uStack_c0 = 0x10007205c;
      puStack_b8 = &UNK_1000b62e0;
      ppuVar15 = &puStack_d0;
      puStack_a8 = puVar21;
      __Block_copy();
      puVar21 = puStack_a8;
      _swift_retain(puVar6);
      _swift_release(puVar21);
      puVar21 = &UNK_1000b6318;
      _swift_allocObject(&UNK_1000b6318,0x20,7);
      *(undefined8 *)(puVar21 + 0x10) = 0x100070b40;
      *(undefined **)(puVar21 + 0x18) = puVar7;
      puVar13 = &UNK_1000b6340;
      _swift_allocObject(&UNK_1000b6340,0x20,7);
      pcVar20 = FUN_100070bc0;
      *(code **)(puVar13 + 0x10) = FUN_100070bc0;
      *(undefined **)(puVar13 + 0x18) = puVar21;
      pcStack_b0 = FUN_100070bf0;
      puStack_d0 = puVar1;
      uStack_c8 = 0x42000000;
      uStack_c0 = 0x100072060;
      puStack_b8 = &UNK_1000b6358;
      ppuVar14 = &puStack_d0;
      puStack_a8 = puVar13;
      __Block_copy(ppuVar14);
      puVar13 = puStack_a8;
      _swift_retain(puVar7);
      _swift_release(puVar13);
      func_0x000100087020(puVar12);
      _objc_release(puVar12);
      __Block_release(ppuVar14);
      __Block_release(ppuVar15);
    }
  }
  else {
    FUN_10006e7e0();
    _objc_release(puVar12);
    uVar18 = 0;
    puVar19 = (undefined *)0x0;
    pcVar20 = (code *)0x0;
    puVar21 = (undefined *)0x0;
  }
  func_0x000100070b60(auStack_118[0]);
  func_0x000100070b60(auStack_f8[0]);
  func_0x000100070b70(uVar18,puVar19);
  func_0x000100070b70(pcVar20,puVar21);
  _swift_release(param_3);
  _objc_release(uVar8);
  _objc_release(param_1);
  _swift_release(puVar6);
  _swift_release(puVar7);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(puStack_140);
  puStack_140 = puStack_150;
LAB_10006e26c:
  _objc_release(puStack_140);
  return;
}



/* Entry: 100070b0c; end: 100070b3f;  */

void FUN_100070b0c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100070b40; end: 100070b9b;  */

/* WARNING: Possible PIC construction at 0x00010006f2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006f2fc) */

ulong FUN_100070b40(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long unaff_x20;
  long lVar13;
  bool bVar14;
  ulong uVar15;
  byte bVar16;
  ulong uStack_130;
  long lStack_128;
  uint uStack_11c;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  ulong uVar17;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 uStack_6f;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x18);
  pcStack_e0 = *(code **)(unaff_x20 + 0x28);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_11c = (uint)*(byte *)(unaff_x20 + 0x20);
  lVar2 = 0;
  uVar4 = uVar3;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_f0 = *(long *)(lVar2 + -8);
  lStack_e8 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar12 = (long)&uStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_f8 = lVar12;
  __s8Dispatch0A3QoSVMa();
  lStack_108 = *(long *)(lVar2 + -8);
  lStack_100 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_108 + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_110 = lVar12;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100087100();
  uVar15 = param_1;
  func_0x000100086a60();
  _objc_retainAutoreleasedReturnValue();
  if (uVar15 == 0) {
    uVar17 = 0;
    uVar15 = 0xe000000000000000;
    uVar11 = uVar4;
  }
  else {
    uVar17 = uVar15;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar11 = uVar4;
    _objc_release(uVar15);
    uVar15 = uVar4;
  }
  if (uVar3 == 2) {
    bVar14 = false;
    bVar16 = 3;
  }
  else if (uVar3 == 1) {
    bVar14 = false;
    bVar16 = 1;
  }
  else {
    _swift_bridgeObjectRelease(uVar15);
    uVar17 = 0;
    uVar15 = 0;
    bVar16 = 0xff;
    bVar14 = true;
  }
  uVar3 = param_1;
  func_0x000100086a80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(uVar3);
  func_0x000100086540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  FUN_100071f2c(0,0x1000c78b8,&PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_1000c21c8);
  uVar3 = param_1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_1,uVar5);
  _objc_release(param_1);
  if (bVar14) {
    puStack_c0 = (undefined *)CONCAT71(puStack_c0._1_7_,1);
    uStack_6f = 1;
    (*pcStack_e0)(&puStack_c0);
    _swift_bridgeObjectRelease(uVar11);
  }
  else {
    uVar1 = uVar4 & 0xffffffffffff;
    if ((uVar11 & 0x2000000000000000) != 0) {
      uVar1 = uVar11 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      puStack_c0 = (undefined *)((ulong)puStack_c0._1_7_ << 8);
      uStack_6f = 1;
      (*pcStack_e0)(&puStack_c0);
      _swift_bridgeObjectRelease(uVar11);
      _swift_bridgeObjectRelease(uVar3);
      uVar3 = uVar15;
    }
    else {
      FUN_100071f2c(0,0x1000c49b0,&PTR__OBJC_CLASS___OS_dispatch_queue_1000c20c8);
      (**(code **)(lVar13 + 0x68))
                (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_1000b1750,
                 lVar2);
      uStack_130 = uVar15;
      func_0x000100071cf4(uVar17,uVar15);
      _swift_bridgeObjectRetain(uVar11);
      lVar6 = lVar12;
      __sSo17OS_dispatch_queueC8DispatchE6global3qosAbC0D3QoSV0G6SClassO_tFZ();
      lStack_128 = lVar6;
      (**(code **)(lVar13 + 8))(lVar12,lVar2);
      puVar7 = &UNK_1000b6570;
      _swift_allocObject(&UNK_1000b6570,0x79,7);
      uVar9 = uStack_d8;
      uVar5 = uStack_118;
      *(undefined8 *)(puVar7 + 0x10) = uStack_118;
      *(ulong *)(puVar7 + 0x18) = uVar3;
      puVar7[0x20] = (byte)uStack_11c & 1;
      *(code **)(puVar7 + 0x28) = pcStack_e0;
      *(undefined8 *)(puVar7 + 0x30) = uStack_d8;
      *(ulong *)(puVar7 + 0x38) = uVar4;
      *(ulong *)(puVar7 + 0x40) = uVar11;
      *(undefined8 *)(puVar7 + 0x50) = 0;
      *(undefined8 *)(puVar7 + 0x48) = 0;
      *(undefined8 *)(puVar7 + 0x60) = 0;
      *(undefined8 *)(puVar7 + 0x58) = 0;
      *(ulong *)(puVar7 + 0x68) = uVar17;
      *(ulong *)(puVar7 + 0x70) = uVar15;
      puVar7[0x78] = bVar16;
      uStack_a0 = 0x100071d0c;
      puStack_c0 = PTR___NSConcreteStackBlock_1000b0c60;
      uStack_b8 = 0x42000000;
      uStack_b0 = 0x100024234;
      puStack_a8 = &UNK_1000b6588;
      ppuVar8 = &puStack_c0;
      puStack_98 = puVar7;
      __Block_copy(ppuVar8);
      _objc_retain(uVar5);
      _swift_bridgeObjectRetain(uVar3);
      _swift_retain(uVar9);
      lVar12 = lStack_110;
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_110);
      puStack_c8 = PTR___swiftEmptyArrayStorage_1000b14d0;
      FUN_100054aa8();
      uVar5 = 0x1000c4b98;
      func_0x0001000100d0(0x1000c4b98,&UNK_100089e30);
      uVar10 = 0x1000c4ba0;
      func_0x000100071f6c(0x1000c4ba0,0x1000c4b98,&UNK_100089e30,PTR___sSayxGSTsMc_1000b11d0);
      lVar13 = lStack_f8;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (lStack_f8,&puStack_c8,uVar5,uVar10,lStack_e8,uVar9);
      lVar2 = lStack_128;
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar12,lVar13,ppuVar8);
      __Block_release(ppuVar8);
      _swift_bridgeObjectRelease(uVar11);
      _swift_bridgeObjectRelease(uVar3);
      _objc_release(lVar2);
      uVar3 = uStack_130;
    }
    if (bVar16 == 0xff) {
      return uVar17;
    }
    if (3 < bVar16) {
      return uVar17;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(uVar3);
  return uVar3;
}



/* Entry: 100070b9c; end: 100070bbf;  */

void FUN_100070b9c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100070bc0; end: 100070bdf;  */

void FUN_100070bc0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100070be0; end: 100070bef;  */

void FUN_100070be0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100070bf0; end: 100070c0f;  */

void FUN_100070bf0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100070c10; end: 100070c33;  */

void FUN_100070c10(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x1000c78d0;
  plVar5 = (long *)&UNK_10008db28;
  iVar1 = 2;
  FUN_1000806c0(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100071f2c(0,0x1000c6170,&PTR__OBJC_CLASS___UIImage_1000c20c0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x1000c4170;
      plVar5 = (long *)&UNK_100088b30;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    _swift_getTypeByMangledNameInContext(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100070c34; end: 100070e67;  */

void FUN_100070c34(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_1000806c0(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100071f2c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x1000c4170;
      param_4 = (long *)&UNK_100088b30;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    _swift_getTypeByMangledNameInContext(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100070e68; end: 100070ebf;  */

void FUN_100070e68(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100070ec0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100070ec0; end: 10007119f;  */

undefined *
FUN_100070ec0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10007100c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_100070c34(param_5,param_6,param_7,param_8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_100071f2c(0,param_5,param_6);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 1000711a0; end: 10007123f;  */

undefined * FUN_1000711a0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x1000c6170;
    FUN_100070c34(0x1000c6170,&PTR__OBJC_CLASS___UIImage_1000c20c0,0x1000c78d0,&UNK_10008db28);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100071240; end: 100071367;  */

ulong FUN_100071240(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100071368);
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
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1000711a0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100071364);
      (*pcVar1)();
    }
    func_0x000100071614(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 100071368; end: 1000714e3;  */

undefined * FUN_100071368(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000714e4);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x1000c78c8;
    func_0x0001000100d0(0x1000c78c8,&UNK_10008db20);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000714dc);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000714e0);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  __s10Foundation3URLVMa();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Entry: 1000714e4; end: 10007172b;  */

undefined * FUN_1000714e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100071614);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x1000c78d8;
    func_0x0001000100d0(0x1000c78d8,&UNK_10008db30);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x1000c78e0;
    func_0x0001000100d0(0x1000c78e0,&UNK_10008db38);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 10007172c; end: 10007173f;  */

/* WARNING: Removing unreachable block (ram,0x000100071504) */
/* WARNING: Removing unreachable block (ram,0x000100071514) */
/* WARNING: Removing unreachable block (ram,0x000100071610) */
/* WARNING: Removing unreachable block (ram,0x000100071520) */
/* WARNING: Removing unreachable block (ram,0x000100071528) */
/* WARNING: Removing unreachable block (ram,0x0001000715a0) */
/* WARNING: Removing unreachable block (ram,0x0001000715a8) */
/* WARNING: Removing unreachable block (ram,0x0001000715ac) */
/* WARNING: Removing unreachable block (ram,0x0001000715b0) */
/* WARNING: Removing unreachable block (ram,0x0001000715c0) */

undefined * FUN_10007172c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x1000c78d8;
    func_0x0001000100d0(0x1000c78d8,&UNK_10008db30);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  uVar5 = 0x1000c78e0;
  func_0x0001000100d0(0x1000c78e0,&UNK_10008db38);
  _swift_arrayInitWithCopy(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  _swift_bridgeObjectRelease(param_1);
  return puVar3;
}



/* Entry: 100071740; end: 100071caf;  */

void FUN_100071740(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_78;
  
  func_0x000100086a20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar4 = 0;
    FUN_100071f2c(0,0x1000c4140,&PTR__OBJC_CLASS___SCExtensionSnapchatter_1000c20b0);
    uVar5 = param_3;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(param_3);
    if (uVar5 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      puVar2 = PTR___swiftEmptyArrayStorage_1000b14d0;
    }
    else {
      uVar11 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar11 = uVar5;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar2 = PTR___swiftEmptyArrayStorage_1000b14d0;
    }
    PTR___swiftEmptyArrayStorage_1000b14d0 = puVar2;
    if (uVar11 != 0) {
      uStack_78 = uVar5 & 0xffffffffffffff8;
      uVar12 = 0;
      do {
        while( true ) {
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uStack_78 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100071934);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(uVar5 + uVar12 * 8 + 0x20);
            _objc_retain();
            uVar9 = uVar4;
          }
          else {
            uVar6 = uVar12;
            uVar9 = uVar5;
            func_0x000100070cac(uVar12,uVar5,&PTR__OBJC_CLASS___SCExtensionSnapchatter_1000c20b0,
                                0x1000c4140);
          }
          uVar1 = uVar12 + 1;
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100071930);
            (*pcVar3)();
          }
          uVar7 = uVar6;
          func_0x000100087900();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar9;
          if (uVar7 == 0) break;
          uVar8 = uVar7;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          uVar4 = uVar9;
          _objc_release(uVar7);
          if ((uVar8 == param_1) && (uVar9 == param_2)) {
            _swift_bridgeObjectRelease(uVar9);
          }
          else {
            uVar4 = uVar9;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,uVar9,param_1,param_2,0);
            _swift_bridgeObjectRelease(uVar9);
            if ((uVar8 & 1) == 0) break;
          }
          puVar10 = puVar2;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar10 & 1) == 0) {
            uVar4 = *(long *)(puVar2 + 0x10) + 1;
            func_0x00010001024c(0,uVar4,1);
          }
          uVar9 = *(ulong *)(puVar2 + 0x10);
          uVar12 = uVar9 + 1;
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar9) {
            uVar4 = uVar12;
            func_0x00010001024c(1 < *(ulong *)(puVar2 + 0x18),uVar12,1);
          }
          *(ulong *)(puVar2 + 0x10) = uVar12;
          *(ulong *)(puVar2 + uVar9 * 8 + 0x20) = uVar6;
          uVar12 = uVar1;
          if (uVar1 == uVar11) goto LAB_100071958;
        }
        _objc_release(uVar6);
        uVar12 = uVar12 + 1;
      } while (uVar1 != uVar11);
    }
LAB_100071958:
    _swift_bridgeObjectRelease(uVar5);
    if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
      puVar10 = puVar2;
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    else {
      puVar10 = *(undefined **)(puVar2 + 0x10);
    }
    if (puVar10 == (undefined *)0x0) {
      _swift_release(puVar2);
    }
    else {
      if (((ulong)puVar2 & 0xc000000000000001) == 0) {
        if (*(long *)(puVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000719f8);
          (*pcVar3)();
        }
        _objc_retain(*(undefined8 *)(puVar2 + 0x20));
      }
      else {
        func_0x000100070cac(0,puVar2,&PTR__OBJC_CLASS___SCExtensionSnapchatter_1000c20b0,0x1000c4140
                           );
      }
      _swift_release(puVar2);
    }
  }
  return;
}



/* Entry: 100071cb0; end: 100071cbf;  */

void FUN_100071cb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100071cc0; end: 100071ce3;  */

void FUN_100071cc0(undefined1 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  func_0x000100086ee0();
  *puVar1 = param_1;
  return;
}



/* Entry: 100071ce4; end: 100071d23;  */

void FUN_100071ce4(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 100071d24; end: 100071def;  */

undefined8 FUN_100071d24(undefined8 param_1)

{
  (*(code *)(undefined *)0x10006bb40)();
  return param_1;
}



/* Entry: 100071df0; end: 100071e13;  */

void FUN_100071df0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100071e14; end: 100071eab;  */

undefined * FUN_100071e14(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100071eac);
    (*pcVar1)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (param_2 != (undefined *)0x0) {
    uVar2 = 0x1000c78e0;
    func_0x0001000100d0(0x1000c78e0,&UNK_10008db38);
    puVar3 = param_2;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(param_2,uVar2);
    *(undefined **)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    param_2 = param_2 + -1;
    if (param_2 != (undefined *)0x0) {
      puVar4 = (undefined8 *)(puVar3 + 0x28);
      do {
        *puVar4 = param_1;
        _objc_retain(param_1);
        param_2 = param_2 + -1;
        puVar4 = puVar4 + 1;
      } while (param_2 != (undefined *)0x0);
    }
    _objc_retain(param_1);
  }
  return puVar3;
}



/* Entry: 100071eac; end: 100071eeb;  */

undefined8 FUN_100071eac(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100071eec; end: 100071f1f;  */

void FUN_100071eec(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100071f20; end: 100071f2b;  */

void FUN_100071f20(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_68 [24];
  
  puVar2 = *(undefined **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  if (param_2 >> 0x3c < 0xf) {
    puVar7 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone();
    func_0x00010001c120(param_1,param_2);
    uVar9 = param_1;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_1,param_2);
    func_0x000100086ca0();
    _objc_release(uVar9);
    FUN_1000275d4(param_1,param_2);
    if (puVar7 != (undefined *)0x0) goto LAB_100070a50;
  }
  _objc_retain(puVar2);
  puVar7 = puVar2;
LAB_100070a50:
  _objc_retain();
  _swift_beginAccess(lVar4 + 0x10,auStack_68,0x21,0);
  uVar10 = *(ulong *)(lVar4 + 0x10);
  uVar8 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar4 + 0x10) = uVar10;
  if ((uVar8 & 1) == 0) {
    FUN_10007172c();
    *(ulong *)(lVar4 + 0x10) = uVar10;
  }
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100070af0);
    (*pcVar6)();
  }
  if (uVar3 < *(ulong *)(uVar10 + 0x10)) {
    lVar1 = uVar10 + uVar3 * 8;
    uVar9 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined **)(lVar1 + 0x20) = puVar7;
    *(ulong *)(lVar4 + 0x10) = uVar10;
    _swift_endAccess(auStack_68);
    _objc_release(uVar9);
    _dispatch_group_leave(uVar5);
    _objc_release(puVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100070af4);
  (*pcVar6)();
}



/* Entry: 100071f2c; end: 100071faf;  */

void FUN_100071f2c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 100071fb0; end: 10007204f;  */

void FUN_100071fb0(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x00010006b964(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined1 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100072050; end: 100072257;  */

void FUN_100072050(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 100072258; end: 100072297;  */

void FUN_100072258(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c7908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008dbdc;
  _swift_getWitnessTable(&UNK_10008dbdc,&UNK_1000b6700);
  puRam00000001000c7908 = puVar1;
  return;
}



/* Entry: 100072298; end: 1000722ab;  */

bool FUN_100072298(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1000722ac; end: 100072357;  */

void FUN_1000722ac(void)

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



/* Entry: 100072358; end: 100072367;  */

void FUN_100072358(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100085c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_1000b1448)();
  return;
}



/* Entry: 100072368; end: 10007258b;  */

long * FUN_100072368(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  bool bVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  
  uVar12 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar12 >> 0x11 & 1) == 0) {
    uVar16 = 0x1000c41d0;
    func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
    plVar17 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar16);
    bVar15 = (int)plVar17 != 1;
    if (bVar15) {
      *param_1 = *param_2;
      _swift_retain();
    }
    else {
      lVar18 = 0;
      __s9WidgetKit0A6FamilyOMa();
      (**(code **)(*(long *)(lVar18 + -8) + 0x10))(param_1,param_2,lVar18);
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar16,!bVar15);
    lVar21 = (long)*(int *)(param_3 + 0x14);
    uVar16 = 0x1000c41d8;
    func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
    lVar18 = (long)param_2 + lVar21;
    _swift_getEnumCaseMultiPayload(lVar18,uVar16);
    bVar15 = (int)lVar18 != 1;
    if (bVar15) {
      *(undefined8 *)((long)param_1 + lVar21) = *(undefined8 *)((long)param_2 + lVar21);
      _swift_retain();
    }
    else {
      lVar18 = 0;
      __s7SwiftUI16RedactionReasonsVMa();
      (**(code **)(*(long *)(lVar18 + -8) + 0x10))
                ((long)param_1 + lVar21,(long)param_2 + lVar21,lVar18);
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar21,uVar16,!bVar15);
    lVar18 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
    lVar21 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
    lVar19 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar19 + -8) + 0x10))(lVar18,lVar21,lVar19);
    lVar19 = 0;
    FUN_10006c6d4();
    puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar19 + 0x14));
    puVar2 = (undefined8 *)(lVar21 + *(int *)(lVar19 + 0x14));
    uVar16 = *puVar2;
    uVar7 = puVar2[1];
    uVar3 = puVar2[2];
    uVar8 = puVar2[3];
    uVar4 = puVar2[4];
    uVar9 = puVar2[5];
    uVar5 = puVar2[6];
    uVar10 = puVar2[7];
    uVar6 = puVar2[8];
    uVar11 = puVar2[9];
    uVar13 = *(undefined1 *)(puVar2 + 10);
    uVar14 = *(undefined1 *)((long)puVar2 + 0x51);
    FUN_10006c0d8(uVar16,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar6,uVar11,uVar13);
    *puVar1 = uVar16;
    puVar1[1] = uVar7;
    puVar1[2] = uVar3;
    puVar1[3] = uVar8;
    puVar1[4] = uVar4;
    puVar1[5] = uVar9;
    puVar1[6] = uVar5;
    puVar1[7] = uVar10;
    puVar1[8] = uVar6;
    puVar1[9] = uVar11;
    *(undefined1 *)(puVar1 + 10) = uVar13;
    *(undefined1 *)((long)puVar1 + 0x51) = uVar14;
  }
  else {
    lVar18 = *param_2;
    *param_1 = lVar18;
    uVar20 = (ulong)uVar12 & 0xff;
    param_1 = (long *)(lVar18 + (uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10007258c; end: 1000726b7;  */

void FUN_10007258c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar1);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  }
  else {
    _swift_release(*param_1);
  }
  lVar4 = (long)*(int *)(param_2 + 0x14);
  uVar1 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar3 = (long)param_1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar3,uVar1);
  if ((int)lVar3 == 1) {
    lVar3 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + lVar4,lVar3);
  }
  else {
    _swift_release(*(undefined8 *)((long)param_1 + lVar4));
  }
  lVar3 = (long)param_1 + (long)*(int *)(param_2 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar3,lVar4);
  lVar4 = 0;
  FUN_10006c6d4();
  puVar2 = (undefined8 *)(lVar3 + *(int *)(lVar4 + 0x14));
  FUN_10006c1e8(*puVar2,puVar2[1],puVar2[2],puVar2[3],puVar2[4],puVar2[5],puVar2[6],puVar2[7],
                puVar2[8],puVar2[9],*(undefined2 *)(puVar2 + 10));
  return;
}



/* Entry: 1000726b8; end: 100072af7;  */

undefined8 * FUN_1000726b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  uVar14 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  puVar15 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar14);
  bVar13 = (int)puVar15 != 1;
  if (bVar13) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar16 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar16 + -8) + 0x10))(param_1,param_2,lVar16);
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar14,!bVar13);
  lVar18 = (long)*(int *)(param_3 + 0x14);
  uVar14 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar16 = (long)param_2 + lVar18;
  _swift_getEnumCaseMultiPayload(lVar16,uVar14);
  bVar13 = (int)lVar16 != 1;
  if (bVar13) {
    *(undefined8 *)((long)param_1 + lVar18) = *(undefined8 *)((long)param_2 + lVar18);
    _swift_retain();
  }
  else {
    lVar16 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar16 + -8) + 0x10))
              ((long)param_1 + lVar18,(long)param_2 + lVar18,lVar16);
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar18,uVar14,!bVar13);
  lVar16 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar18 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  lVar17 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar17 + -8) + 0x10))(lVar16,lVar18,lVar17);
  lVar17 = 0;
  FUN_10006c6d4();
  puVar15 = (undefined8 *)(lVar16 + *(int *)(lVar17 + 0x14));
  puVar1 = (undefined8 *)(lVar18 + *(int *)(lVar17 + 0x14));
  uVar14 = *puVar1;
  uVar6 = puVar1[1];
  uVar2 = puVar1[2];
  uVar7 = puVar1[3];
  uVar3 = puVar1[4];
  uVar8 = puVar1[5];
  uVar4 = puVar1[6];
  uVar9 = puVar1[7];
  uVar5 = puVar1[8];
  uVar10 = puVar1[9];
  uVar11 = *(undefined1 *)(puVar1 + 10);
  uVar12 = *(undefined1 *)((long)puVar1 + 0x51);
  FUN_10006c0d8(uVar14,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar11);
  *puVar15 = uVar14;
  puVar15[1] = uVar6;
  puVar15[2] = uVar2;
  puVar15[3] = uVar7;
  puVar15[4] = uVar3;
  puVar15[5] = uVar8;
  puVar15[6] = uVar4;
  puVar15[7] = uVar9;
  puVar15[8] = uVar5;
  puVar15[9] = uVar10;
  *(undefined1 *)(puVar15 + 10) = uVar11;
  *(undefined1 *)((long)puVar15 + 0x51) = uVar12;
  return param_1;
}



/* Entry: 100072af8; end: 100072b37;  */

undefined8 FUN_100072af8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100072b38; end: 100072ea3;  */

long FUN_100072b38(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = 0x1000c41d0;
  func_0x0001000100d0(0x1000c41d0,&UNK_100088d00);
  lVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s9WidgetKit0A6FamilyOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    _swift_storeEnumTagMultiPayload(param_1,lVar3,1);
  }
  else {
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  lVar3 = 0x1000c41d8;
  func_0x0001000100d0(0x1000c41d8,&UNK_1000892a0);
  lVar4 = param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar4,lVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI16RedactionReasonsVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + lVar5,param_2 + lVar5,lVar4);
    _swift_storeEnumTagMultiPayload(param_1 + lVar5,lVar3,1);
  }
  else {
    _memcpy(param_1 + lVar5,param_2 + lVar5,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  lVar3 = param_1 + *(int *)(param_3 + 0x18);
  param_2 = param_2 + *(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(lVar3,param_2,lVar4);
  lVar4 = 0;
  FUN_10006c6d4();
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar4 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x14));
  uVar6 = puVar2[4];
  uVar8 = puVar2[7];
  uVar7 = puVar2[6];
  puVar1[5] = puVar2[5];
  puVar1[4] = uVar6;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  uVar6 = puVar2[8];
  puVar1[9] = puVar2[9];
  puVar1[8] = uVar6;
  *(undefined2 *)(puVar1 + 10) = *(undefined2 *)(puVar2 + 10);
  uVar6 = *puVar2;
  uVar8 = puVar2[3];
  uVar7 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar8;
  puVar1[2] = uVar7;
  return param_1;
}


