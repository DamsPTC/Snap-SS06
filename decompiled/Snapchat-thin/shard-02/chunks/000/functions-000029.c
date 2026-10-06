/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016ee7d4; end: 1016ee81f;  */

void FUN_1016ee7d4(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1016ee820; end: 1016ee87b; -[_TtC19SCMusicServicesImpl30MusicNotificationPresenterImpl submitFavoritesNotification:albumArtMedia:] */

void FUN_1016ee820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_1016edfcc(param_3,param_4);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1016ee87c; end: 1016ee89b;  */

void FUN_1016ee87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ee89c,0,0);
  return;
}



/* Entry: 1016ee89c; end: 1016ee9f7;  */

void FUN_1016ee89c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x18);
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x20);
  uVar7 = uVar2;
  func_0x0001000a8868();
  func_0x000107c427c0();
  func_0x000107c61180();
  if (lVar9 == 0) {
    lVar9 = 0;
    uVar10 = 0xf000000000000000;
    uVar11 = uVar7;
  }
  else {
    lVar4 = lVar9;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar9 = lVar4;
    func_0x000107c5ee30();
    uVar11 = uVar7;
    func_0x000107c61170(lVar4);
    uVar10 = uVar7;
  }
  *(long *)(unaff_x22 + 0x38) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  lVar4 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c427c0();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      goto LAB_1016ee988;
    }
  }
  lVar4 = 0;
  uVar11 = 0xf000000000000000;
LAB_1016ee988:
  *(long *)(unaff_x22 + 0x48) = lVar4;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  piVar8 = *(int **)(lVar3 + 8);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1016ee9f8;
                    /* WARNING: Could not recover jumptable at 0x0001016ee9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (*(undefined8 *)(unaff_x22 + 0x18),lVar9,uVar10,lVar4,uVar11,uVar2,lVar3);
  return;
}



/* Entry: 1016ee9f8; end: 1016eea6f;  */

void FUN_1016ee9f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  undefined8 uVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  uVar3 = *(undefined8 *)(lVar4 + 0x48);
  uVar5 = *(undefined8 *)(lVar4 + 0x38);
  *(undefined8 *)(lVar4 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x58));
  func_0x0001000b44c0(uVar3,uVar1);
  func_0x0001000b44c0(uVar5,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eea70,0,0);
  return;
}



/* Entry: 1016eea70; end: 1016eeb17;  */

void FUN_1016eea70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar2 = *(long *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c40dbc(0x4044000000000000,0x4044000000000000,0x4014000000000000,lVar2,param_2,
                        0xffffffffffffffff);
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar1 = lVar3;
    }
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61174(lVar1);
  func_0x000107c3fefc(uVar4,param_2,lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016eeb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016eeb18; end: 1016eeb1f;  */

void FUN_1016eeb18(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x28) = 0;
    func_0x000107c61574();
  }
  return;
}



/* Entry: 1016eeb20; end: 1016eeb5b;  */

void FUN_1016eeb20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016eeb5c; end: 1016eeb6b;  */

undefined1  [16] FUN_1016eeb5c(void)

{
  return ZEXT816(0x1103fbb10);
}



/* Entry: 1016eeb6c; end: 1016eeb8b;  */

void FUN_1016eeb6c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc2e78);
  return;
}



/* Entry: 1016eeb8c; end: 1016eec43;  */

void FUN_1016eeb8c(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar6 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  lVar1 = *(long *)(unaff_x20 + uVar3);
  lVar4 = *(long *)(unaff_x20 + uVar3 + 8);
  lVar5 = *(long *)(unaff_x20 + (uVar3 + 0x17 & 0xffffffffffffff8));
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1016eec44;
  plVar2[5] = lVar4;
  plVar2[6] = lVar5;
  plVar2[3] = unaff_x20 + uVar6;
  plVar2[4] = lVar1;
  plVar2[2] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ee89c,0,0);
  return;
}



/* Entry: 1016eec44; end: 1016eec7f;  */

void FUN_1016eec44(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016eec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016eec80; end: 1016eedf7;  */

undefined1  [16] FUN_1016eec80(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  bVar1 = *(byte *)(unaff_x20 + 4);
  uVar5 = 0xee006172656d6163;
  uVar2 = 0x5f72616c75646f6d;
  if (bVar1 != 2) {
    uVar5 = 0xe900000000000074;
    uVar2 = 0x75635f6b63697571;
  }
  uVar7 = 0x77656976657270;
  if (bVar1 != 0) {
    uVar7 = 0x6172656d6163;
  }
  uVar8 = 0xe700000000000000;
  if (bVar1 != 0) {
    uVar8 = 0xe600000000000000;
  }
  if (bVar1 < 2) {
    uVar5 = uVar8;
    uVar2 = uVar7;
  }
  lVar4 = unaff_x20[1];
  if (lVar4 == 0) {
    lVar4 = -0x15ffffffffff9b97;
    uVar7 = 0x5f736e656c5f6f6e;
    lVar9 = unaff_x20[3];
  }
  else {
    uVar7 = *unaff_x20;
    lVar9 = unaff_x20[3];
  }
  if (lVar9 == 0) {
    lVar6 = -0x13ffffff9b96a08e;
    uVar8 = 0x65746c69665f6f6e;
  }
  else {
    uVar8 = unaff_x20[2];
    lVar6 = lVar9;
  }
  func_0x000107c61434();
  func_0x000107c61434(lVar9);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  func_0x000107c5fb78(uVar7,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  func_0x000107c5fb78(uVar8,lVar6);
  func_0x000107c6142c(lVar6);
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1016eedf8; end: 1016eee2f;  */

void FUN_1016eedf8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_1103fbba8;
  param_1[4] = &PTR_DAT_1103fbb48;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016eee30; end: 1016eefab;  */

void FUN_1016eee30(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x22;
  
  puVar4 = *(undefined8 **)(unaff_x22 + 0xb8);
  FUN_1016f05f0();
  if (0xe < param_2 >> 0x3c) {
    FUN_1016f0734();
    func_0x000107c613f8(&UNK_1103fbc48,puVar4,0,0);
    *puVar4 = 0;
    puVar4[1] = 0;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001016eeea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar7 = param_2;
  FUN_1016f04e0();
  *(undefined8 *)(unaff_x22 + 0x10) = 0xd000000000000010;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x800000010efb84f0;
  *(undefined8 **)(unaff_x22 + 0x20) = puVar4;
  *(ulong *)(unaff_x22 + 0x28) = param_2;
  *(undefined1 *)(unaff_x22 + 0x30) = 0;
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  FUN_1016eec80();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  *(undefined8 *)(unaff_x22 + 200) = 0x800000010efb8510;
  func_0x000100083b20(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  func_0x0001000a8868(unaff_x22 + 0x40,uVar2);
  piVar8 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1016eefac;
                    /* WARNING: Could not recover jumptable at 0x0001016eefa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar6,unaff_x22 + 0x10,0xd000000000000021,0x800000010efb8510,0x408c200000000000,uVar2,
             lVar3);
  return;
}



/* Entry: 1016eefac; end: 1016ef017;  */

void FUN_1016eefac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 200);
  *(undefined8 *)(lVar3 + 0xd8) = param_1;
  *(undefined8 *)(lVar3 + 0xe0) = param_2;
  *(long *)(lVar3 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xd0));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1016ef018;
  }
  else {
    pcVar2 = FUN_1016ef170;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1016ef018; end: 1016ef16f;  */

void FUN_1016ef018(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar1 = *(ulong *)(unaff_x22 + 0xe0);
  lVar4 = *(long *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x0001000834e4(unaff_x22 + 0x40);
  uVar3 = uVar1 & 0xdfffffffffffffff;
  func_0x000107c610f8(PTR_PTR_1126a79c8);
  FUN_1016e8bc0(uVar5,uVar1);
  FUN_1016f082c(uVar5,uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(ulong *)(unaff_x22 + 0xe0);
  if (lVar4 != 0) {
    func_0x0001016e8bc8(uVar2,uVar1);
    func_0x0001016e8bc8(uVar2,uVar1);
    func_0x000107c61654();
    FUN_1016e8b44(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001016ef0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x0001016e8bc8(uVar2,uVar1);
  func_0x000107c61170(uVar5);
  FUN_1016e8b44(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  if ((uVar1 >> 0x3d & 1) == 0) {
    puVar6 = (undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
    func_0x000103fc8ad8(puVar6,unaff_x22 + 0xa8,PTR___s10Foundation4DataVN_110350ae0);
    lVar4 = 0x90;
    lVar7 = 0x88;
  }
  else {
    puVar6 = (undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
    *(ulong *)(unaff_x22 + 0xa0) = uVar3;
    func_0x000103fc8ae0(puVar6,unaff_x22 + 0x98,PTR___s10Foundation4DataVN_110350ae0);
    lVar4 = 0x78;
    lVar7 = 0x70;
  }
  func_0x0001016e8bc8(uVar2,uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001016ef16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*puVar6,*(undefined8 *)(unaff_x22 + lVar7),*(undefined1 *)(unaff_x22 + lVar4));
  return;
}



/* Entry: 1016ef170; end: 1016ef1bf;  */

void FUN_1016ef170(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c61654();
  FUN_1016e8b44(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001016ef1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(code **)(unaff_x22 + 8),param_2,0);
  return;
}



/* Entry: 1016ef1c0; end: 1016ef1db;  */

void FUN_1016ef1c0(undefined1 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined1 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ef1dc,0,0);
  return;
}



/* Entry: 1016ef1dc; end: 1016ef35b;  */

void FUN_1016ef1dc(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x22;
  
  puVar5 = (undefined8 *)(ulong)*(byte *)(unaff_x22 + 0x98);
  FUN_1016f0774();
  if (0xe < param_2 >> 0x3c) {
    FUN_1016f0734();
    func_0x000107c613f8(&UNK_1103fbc48,puVar5,0,0);
    *puVar5 = 0;
    puVar5[1] = 0;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001016ef250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar4 = *(undefined1 *)(unaff_x22 + 0x98);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = param_2;
  FUN_1016f04e0();
  *(undefined8 *)(unaff_x22 + 0x10) = 0xd000000000000014;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x800000010efb8540;
  *(undefined8 **)(unaff_x22 + 0x20) = puVar5;
  *(ulong *)(unaff_x22 + 0x28) = param_2;
  *(undefined1 *)(unaff_x22 + 0x30) = 0;
  *(undefined **)(unaff_x22 + 0x38) = puVar6;
  FUN_1016f0b88(uVar4);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar8);
  *(undefined8 *)(unaff_x22 + 0x70) = 0x800000010efb8560;
  func_0x000100083b20(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  func_0x0001000a8868(unaff_x22 + 0x40,uVar2);
  piVar9 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1016ef35c;
                    /* WARNING: Could not recover jumptable at 0x0001016ef358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (plVar7,unaff_x22 + 0x10,0xd000000000000026,0x800000010efb8560,0x40f5180000000000,uVar2,
             lVar3);
  return;
}



/* Entry: 1016ef35c; end: 1016ef3c7;  */

void FUN_1016ef35c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(lVar3 + 0x80) = param_1;
  *(undefined8 *)(lVar3 + 0x88) = param_2;
  *(long *)(lVar3 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x78));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1016ef3c8;
  }
  else {
    pcVar2 = FUN_1016ef55c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1016ef3c8; end: 1016ef55b;  */

void FUN_1016ef3c8(void)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  ulong *puVar7;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  puVar7 = *(ulong **)(unaff_x22 + 0x80);
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c610f8(PTR_PTR_1126a79d0);
  FUN_1016e8bc0(puVar7,uVar5);
  puVar2 = puVar7;
  FUN_1016f082c(puVar7,uVar5 & 0xdfffffffffffffff);
  func_0x0001016e8bc8(puVar7);
  if (lVar1 == 0) {
    puVar7 = puVar2;
    func_0x000107c44a08();
    if (((ulong)puVar7 & 1) != 0) {
      puVar7 = puVar2;
      func_0x000107c4e230();
      func_0x000107c61180();
      if (puVar7 != (ulong *)0x0) {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
        func_0x000107c61170(puVar2);
        func_0x0001016e8bc8(uVar4,uVar6);
        FUN_1016e8b44(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001016ef4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(puVar7);
        return;
      }
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c61174();
    puVar7 = puVar2;
    func_0x000107c417f0();
    func_0x000107c61180();
    puVar3 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    puVar7 = puVar2;
    func_0x000107c61170();
    FUN_1016f0734();
    func_0x000107c613f8(&UNK_1103fbc48,puVar7,0,0);
    *puVar7 = (ulong)puVar3;
    puVar7[1] = uVar5;
    func_0x000107c61654();
    func_0x000107c61170(puVar2);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  }
  func_0x0001016e8bc8(uVar4,uVar6);
  func_0x000107c61654();
  FUN_1016e8b44(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001016ef558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016ef55c; end: 1016ef5a7;  */

void FUN_1016ef55c(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x40);
  func_0x000107c61654();
  FUN_1016e8b44(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001016ef5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016ef5a8; end: 1016ef5fb;  */

void FUN_1016ef5a8(undefined1 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016ef5fc;
  plVar1[0xd] = param_2;
  *(undefined1 *)(plVar1 + 0x13) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ef1dc,0,0);
  return;
}



/* Entry: 1016ef5fc; end: 1016ef663;  */

void FUN_1016ef5fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x10));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001016ef640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ef664,0,0);
  return;
}



/* Entry: 1016ef664; end: 1016ef8bb;  */

void FUN_1016ef664(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x22;
  undefined *puVar10;
  undefined *puStack_60;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c51bac();
  if (lVar3 != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x18);
    func_0x000107c51ba8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      puStack_60 = (undefined *)0x0;
      uVar4 = 0;
      FUN_1016f090c(0,0x112dc2f08,&PTR_PTR_1126dea30);
      func_0x000107c5fc50(lVar3,&puStack_60,uVar4);
      func_0x000107c61170(lVar3);
      puVar6 = puStack_60;
      if (puStack_60 != (undefined *)0x0) {
        puVar10 = (undefined *)((ulong)puStack_60 & 0xffffffffffffff8);
        if ((ulong)puStack_60 >> 0x3e == 0) {
          puVar7 = *(undefined **)(puVar10 + 0x10);
        }
        else {
          puVar7 = puStack_60;
          if (-1 < (long)puStack_60) {
            puVar7 = puVar10;
          }
          func_0x000107c60480();
        }
        if (puVar7 != (undefined *)0x0) {
          uVar8 = 0;
          do {
            if (((ulong)puVar6 & 0xc000000000000001) == 0) {
              if (*(ulong *)(puVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1016ef85c);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(puVar6 + uVar8 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar5 = uVar8;
              FUN_1016f01c4(uVar8,puVar6,&PTR_PTR_1126dea30,0x112dc2f08);
            }
            puVar1 = (undefined *)(uVar8 + 1);
            if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1016ef858);
              (*pcVar2)();
            }
            uVar9 = uVar5;
            func_0x000107c51b8c();
            if ((int)uVar9 == 2) {
              func_0x000107c6142c(puVar6);
              func_0x000107c61174();
              uVar8 = uVar5;
              func_0x000107c5cdc4();
              func_0x000107c61180();
              func_0x000107c61170(uVar5);
              uVar9 = uVar5;
              if (uVar8 == 0) goto LAB_1016ef87c;
              uVar9 = uVar8;
              func_0x000107c5ce7c();
              if (uVar9 != 0) {
                uVar9 = uVar8;
                func_0x000107c5ce78();
                func_0x000107c61180();
                if (uVar9 != 0) {
                  puStack_60 = (undefined *)0x0;
                  uVar4 = 0;
                  FUN_1016f090c(0,0x112d52668,&PTR_PTR_1126bfa50);
                  func_0x000107c5fc50(uVar9,&puStack_60,uVar4);
                  func_0x000107c61170(uVar9);
                  puVar6 = puStack_60;
                  if (puStack_60 != (undefined *)0x0) {
                    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
                    func_0x000107c61170(uVar5);
                    func_0x000107c61170(uVar8);
                    func_0x000107c61170(uVar4);
                    goto LAB_1016ef894;
                  }
                }
              }
              uVar9 = *(ulong *)(unaff_x22 + 0x18);
              func_0x000107c61170(uVar5);
              func_0x000107c61170(uVar8);
              goto LAB_1016ef888;
            }
            func_0x000107c61170(uVar5);
            uVar8 = uVar8 + 1;
          } while (puVar1 != puVar7);
        }
        func_0x000107c6142c(puVar6);
        uVar9 = 0;
LAB_1016ef87c:
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x18));
        goto LAB_1016ef888;
      }
    }
  }
  uVar9 = *(ulong *)(unaff_x22 + 0x18);
LAB_1016ef888:
  func_0x000107c61170(uVar9);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1016ef894:
                    /* WARNING: Could not recover jumptable at 0x0001016ef8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6);
  return;
}



/* Entry: 1016ef8bc; end: 1016ef90f;  */

void FUN_1016ef8bc(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016ef910;
  plVar1[0x17] = param_1;
  plVar1[0x18] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eee30,0,0);
  return;
}



/* Entry: 1016ef910; end: 1016ef97b;  */

void FUN_1016ef910(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(long *)(lVar1 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x10));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001016ef958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ef97c,0,0);
  return;
}



/* Entry: 1016ef97c; end: 1016eff03;  */

void FUN_1016ef97c(void)

{
  undefined8 ****ppppuVar1;
  long lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  long unaff_x22;
  undefined8 ***pppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ***apppuStack_68 [2];
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar2 = *(long *)(unaff_x22 + 0x28);
  pppuVar16 = *(undefined8 ****)(unaff_x22 + 0x18);
  func_0x000107c610f8(PTR_PTR_1126a79c8);
  func_0x00010006c00c(pppuVar16,uVar6);
  pppuVar4 = pppuVar16;
  FUN_1016f082c(pppuVar16,uVar6);
  func_0x00010006c090(pppuVar16,uVar6);
  if (lVar2 == 0) {
    if (pppuVar4 != (undefined8 ***)0x0) {
      pppuVar16 = pppuVar4;
      func_0x000107c4490c();
      if (((ulong)pppuVar16 & 1) == 0) {
LAB_1016efbc8:
        func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
      }
      else {
        pppuVar16 = pppuVar4;
        func_0x000107c4abc0();
        func_0x000107c61180();
        if (pppuVar16 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1016eff00);
          (*pcVar3)();
        }
        pppuVar7 = pppuVar16;
        func_0x000107c5c694();
        func_0x000107c61170(pppuVar16);
        if (pppuVar7 == (undefined8 ***)0x0) goto LAB_1016efbc8;
        pppuVar16 = pppuVar4;
        func_0x000107c4abc0();
        func_0x000107c61180();
        if (pppuVar16 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1016eff04);
          (*pcVar3)();
        }
        pppuVar7 = pppuVar16;
        func_0x000107c5c690();
        func_0x000107c61180();
        func_0x000107c61170(pppuVar16);
        if (pppuVar7 == (undefined8 ***)0x0) {
LAB_1016efbe4:
          uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
          uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
LAB_1016efc00:
          func_0x000107c61170(pppuVar4);
          goto LAB_1016ef9f8;
        }
        apppuStack_68[0] = (undefined8 ****)0x0;
        uVar6 = 0;
        FUN_1016f090c(0,0x112dc2f10,&PTR_PTR_1126a79d8);
        func_0x000107c5fc50(pppuVar7,apppuStack_68,uVar6);
        func_0x000107c61170(pppuVar7);
        pppuVar16 = apppuStack_68[0];
        if ((undefined8 ****)apppuStack_68[0] == (undefined8 ****)0x0) goto LAB_1016efbe4;
        if (((ulong)apppuStack_68[0] & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)apppuStack_68[0] & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016efeb8);
            (*pcVar3)();
          }
          pppuVar7 = (undefined8 ***)apppuStack_68[0][4];
          func_0x000107c61174();
        }
        else {
          pppuVar7 = (undefined8 ***)0x0;
          FUN_1016f01c4(0,apppuStack_68[0],&PTR_PTR_1126a79d8,0x112dc2f10);
        }
        func_0x000107c6142c(pppuVar16);
        pppuVar16 = pppuVar7;
        func_0x000107c4e2c0();
        func_0x000107c61180();
        if (pppuVar16 == (undefined8 ***)0x0) {
LAB_1016efbf0:
          uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
          uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
LAB_1016efbf8:
          func_0x000107c61170(pppuVar4);
          pppuVar4 = pppuVar7;
          goto LAB_1016efc00;
        }
        pppuVar8 = pppuVar16;
        func_0x000107c4e230();
        func_0x000107c61180();
        func_0x000107c61170(pppuVar16);
        if (pppuVar8 == (undefined8 ***)0x0) goto LAB_1016efbf0;
        pppuVar16 = pppuVar8;
        func_0x000107c51bac();
        if (pppuVar16 != (undefined8 ***)0x0) {
          pppuVar16 = pppuVar8;
          func_0x000107c51ba8();
          func_0x000107c61180();
          if (pppuVar16 != (undefined8 ***)0x0) {
            apppuStack_68[0] = (undefined8 ****)0x0;
            uVar6 = 0;
            FUN_1016f090c(0,0x112dc2f08,&PTR_PTR_1126dea30);
            ppppuVar5 = apppuStack_68;
            func_0x000107c5fc50(pppuVar16,ppppuVar5,uVar6);
            func_0x000107c61170(pppuVar16);
            ppppuVar17 = (undefined8 ****)apppuStack_68[0];
            if ((undefined8 ****)apppuStack_68[0] != (undefined8 ****)0x0) {
              ppppuVar15 = (undefined8 ****)((ulong)apppuStack_68[0] & 0xffffffffffffff8);
              if ((ulong)apppuStack_68[0] >> 0x3e == 0) {
                ppppuVar18 = (undefined8 ****)ppppuVar15[2];
              }
              else {
                ppppuVar18 = (undefined8 ****)apppuStack_68[0];
                if (-1 < (long)apppuStack_68[0]) {
                  ppppuVar18 = ppppuVar15;
                }
                func_0x000107c60480();
              }
              if (ppppuVar18 != (undefined8 ****)0x0) {
                pppuVar16 = (undefined8 ***)0x0;
                do {
                  if (((ulong)ppppuVar17 & 0xc000000000000001) == 0) {
                    if (ppppuVar15[2] <= pppuVar16) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016efec0);
                      (*pcVar3)();
                    }
                    pppuVar9 = ppppuVar17[(long)pppuVar16 + 4];
                    func_0x000107c61174();
                    ppppuVar14 = ppppuVar5;
                  }
                  else {
                    pppuVar9 = pppuVar16;
                    ppppuVar14 = ppppuVar17;
                    FUN_1016f01c4(pppuVar16,ppppuVar17,&PTR_PTR_1126dea30,0x112dc2f08);
                  }
                  ppppuVar1 = (undefined8 ****)((long)pppuVar16 + 1);
                  if (SCARRY8((long)pppuVar16,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016efebc);
                    (*pcVar3)();
                  }
                  pppuVar10 = pppuVar9;
                  func_0x000107c44fd8();
                  func_0x000107c61180();
                  ppppuVar5 = ppppuVar14;
                  if (pppuVar10 != (undefined8 ***)0x0) {
                    pppuVar11 = pppuVar10;
                    func_0x000107c5faec();
                    func_0x000107c61170(pppuVar10);
                    if ((pppuVar11 == (undefined8 ***)0xd000000000000015) &&
                       (ppppuVar14 == (undefined8 ****)0x800000010efb8590)) {
                      func_0x000107c6142c(ppppuVar17);
                      ppppuVar17 = (undefined8 ****)0x800000010efb8590;
                    }
                    else {
                      ppppuVar5 = ppppuVar14;
                      func_0x000107c605b8(pppuVar11,ppppuVar14,0xd000000000000015,0x800000010efb8590
                                          ,0);
                      func_0x000107c6142c(ppppuVar14);
                      if (((ulong)pppuVar11 & 1) == 0) goto LAB_1016efc48;
                    }
                    func_0x000107c6142c(ppppuVar17);
                    pppuVar16 = pppuVar9;
                    func_0x000107c51b8c();
                    if ((int)pppuVar16 == 2) {
                      pppuVar16 = pppuVar9;
                      func_0x000107c5cdc4();
                      func_0x000107c61180();
                      if (pppuVar16 == (undefined8 ***)0x0) goto LAB_1016efe10;
                      pppuVar10 = pppuVar16;
                      func_0x000107c5ce7c();
                      if (pppuVar10 != (undefined8 ***)0x0) {
                        pppuVar10 = pppuVar16;
                        func_0x000107c5ce78();
                        func_0x000107c61180();
                        uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
                        uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
                        if (pppuVar10 != (undefined8 ***)0x0) {
                          apppuStack_68[0] = (undefined8 ****)0x0;
                          uVar12 = 0;
                          FUN_1016f090c(0,0x112d52668,&PTR_PTR_1126bfa50);
                          func_0x000107c5fc50(pppuVar10,apppuStack_68,uVar12);
                          func_0x00010006c090(uVar6,uVar13);
                          func_0x000107c61170(pppuVar4);
                          func_0x000107c61170(pppuVar8);
                          func_0x000107c61170(pppuVar7);
                          func_0x000107c61170(pppuVar9);
                          func_0x000107c61170(pppuVar16);
                          func_0x000107c61170(pppuVar10);
                          ppppuVar5 = (undefined8 ****)apppuStack_68[0];
                          goto LAB_1016efa00;
                        }
                        func_0x00010006c090(uVar6,uVar13);
                        func_0x000107c61170(pppuVar4);
                        func_0x000107c61170(pppuVar9);
                        func_0x000107c61170(pppuVar16);
                        func_0x000107c61170(pppuVar8);
                        pppuVar4 = pppuVar7;
                        goto LAB_1016efbd4;
                      }
                      func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x18),
                                          *(undefined8 *)(unaff_x22 + 0x20));
                      func_0x000107c61170(pppuVar4);
                      func_0x000107c61170(pppuVar8);
                      func_0x000107c61170(pppuVar7);
                      pppuVar7 = pppuVar16;
                    }
                    else {
LAB_1016efe10:
                      func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x18),
                                          *(undefined8 *)(unaff_x22 + 0x20));
                      func_0x000107c61170(pppuVar4);
                      func_0x000107c61170(pppuVar8);
                    }
                    func_0x000107c61170(pppuVar7);
                    pppuVar4 = pppuVar9;
                    goto LAB_1016efbd4;
                  }
LAB_1016efc48:
                  func_0x000107c61170(pppuVar9);
                  pppuVar16 = (undefined8 ***)((long)pppuVar16 + 1);
                } while (ppppuVar1 != ppppuVar18);
              }
              uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
              uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
              func_0x000107c61170(pppuVar4);
              func_0x000107c61170(pppuVar7);
              func_0x000107c61170(pppuVar8);
              func_0x000107c6142c(ppppuVar17);
              goto LAB_1016ef9f8;
            }
          }
          uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
          uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
          func_0x000107c61170(pppuVar4);
          pppuVar4 = pppuVar8;
          goto LAB_1016efbf8;
        }
        func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
        func_0x000107c61170(pppuVar4);
        func_0x000107c61170(pppuVar8);
        pppuVar4 = pppuVar7;
      }
LAB_1016efbd4:
      func_0x000107c61170(pppuVar4);
      goto LAB_1016ef9fc;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c614ac(lVar2);
  }
LAB_1016ef9f8:
  func_0x00010006c090(uVar6,uVar13);
LAB_1016ef9fc:
  ppppuVar5 = (undefined8 ****)0x0;
LAB_1016efa00:
                    /* WARNING: Could not recover jumptable at 0x0001016efa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(ppppuVar5);
  return;
}



/* Entry: 1016eff04; end: 1016eff57;  */

void FUN_1016eff04(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016eff58;
  plVar1[0x17] = param_1;
  plVar1[0x18] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eee30,0,0);
  return;
}



/* Entry: 1016eff58; end: 1016effbf;  */

void FUN_1016eff58(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016effbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016effc0; end: 1016f0013;  */

void FUN_1016effc0(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016f0014;
  plVar1[0x17] = param_1;
  plVar1[0x18] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eee30,0,0);
  return;
}



/* Entry: 1016f0014; end: 1016f006b;  */

void FUN_1016f0014(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f0068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016f006c; end: 1016f00bf;  */

void FUN_1016f006c(undefined1 param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1016f0950;
  plVar1[0xd] = lVar2;
  *(undefined1 *)(plVar1 + 0x13) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ef1dc,0,0);
  return;
}



/* Entry: 1016f00c0; end: 1016f0113;  */

void FUN_1016f00c0(undefined1 param_1)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1016f094c;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_1016ef5fc;
  plVar1[0xd] = lVar3;
  *(undefined1 *)(plVar1 + 0x13) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ef1dc,0,0);
  return;
}



/* Entry: 1016f0114; end: 1016f0167;  */

void FUN_1016f0114(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1016f0168;
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  plVar2[2] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = (long)FUN_1016ef910;
  plVar1[0x17] = param_1;
  plVar1[0x18] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eee30,0,0);
  return;
}



/* Entry: 1016f0168; end: 1016f01af;  */

void FUN_1016f0168(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016f01b0; end: 1016f01c3;  */

ulong FUN_1016f01b0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f02a8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f02ac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bfdb0;
    func_0x000107c61168(PTR_PTR_1126bfdb0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bfdb0;
    func_0x000107c61168(PTR_PTR_1126bfdb0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1016f090c(0,0x112dc2b68,&PTR_PTR_1126bfdb0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f0380);
  (*pcVar2)();
}



/* Entry: 1016f01c4; end: 1016f037f;  */

ulong FUN_1016f01c4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f02a8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f02ac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1016f090c(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f0380);
  (*pcVar2)();
}



/* Entry: 1016f0380; end: 1016f03cf;  */

ulong FUN_1016f0380(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f02a8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f02ac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a79f8;
    func_0x000107c61168(PTR_PTR_1126a79f8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126a79f8;
    func_0x000107c61168(PTR_PTR_1126a79f8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1016f090c(0,0x112dc2f30,&PTR_PTR_1126a79f8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f0380);
  (*pcVar2)();
}



/* Entry: 1016f03d0; end: 1016f0433;  */

undefined1  [16] FUN_1016f03d0(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_78 [56];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = auStack_78;
  func_0x000107c5fb58(puVar3,param_1,param_2);
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        uVar5 = 1;
        goto LAB_1016f04c8;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_1016f04c8:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 1016f0434; end: 1016f04df;  */

undefined1  [16] FUN_1016f0434(ulong param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar3 == param_1 && uVar2 == param_2) ||
         (func_0x000107c605b8(uVar3,uVar2,param_1,param_2,0), (uVar3 & 1) != 0)) {
        uVar4 = 1;
        goto LAB_1016f04c8;
      }
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_1016f04c8:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = param_3;
  return auVar6;
}



/* Entry: 1016f04e0; end: 1016f05ef;  */

undefined * FUN_1016f04e0(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
    puVar8 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar12 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar12[-3];
      uVar5 = puVar12[-2];
      uVar4 = puVar12[-1];
      uVar6 = *puVar12;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_1016f03d0();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1016f05ec);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1016f05f0);
        (*pcVar7)();
      }
      puVar12 = puVar12 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 1016f05f0; end: 1016f0733;  */

undefined1  [16] FUN_1016f05f0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR_PTR_1126bfde0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c57e00();
  puVar2 = PTR_PTR_1126a7a00;
  func_0x000107c610f8(PTR_PTR_1126a7a00);
  func_0x000107c453e4();
  func_0x000107c575e0();
  if (param_1[1] == 0) {
    lVar5 = 0;
    if (param_1[3] == 0) goto LAB_1016f06b4;
    uVar3 = 0;
  }
  else {
    uVar3 = *param_1;
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c55d70(puVar2);
  func_0x000107c61170(uVar3);
  lVar5 = param_1[3];
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_1[2];
    func_0x000107c5fadc(uVar3);
  }
  func_0x000107c549d8(puVar2);
  func_0x000107c61170(uVar3);
LAB_1016f06b4:
  func_0x000107c57dc8(puVar1);
  puVar4 = puVar1;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    puVar6 = (undefined *)0x0;
    lVar5 = -0x1000000000000000;
  }
  else {
    puVar6 = puVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
  }
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = puVar6;
  return auVar7;
}



/* Entry: 1016f0734; end: 1016f0773;  */

void FUN_1016f0734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc2f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d980028;
  func_0x000107c61520(&UNK_10d980028,&UNK_1103fbc48);
  puRam0000000112dc2f00 = puVar1;
  return;
}



/* Entry: 1016f0774; end: 1016f082b;  */

undefined1  [16] FUN_1016f0774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_PTR_1126bfde8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_1016f0b88(param_1);
  uVar4 = param_2;
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c571ac(puVar1);
  func_0x000107c61170(param_1);
  puVar2 = puVar1;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
    puVar3 = (undefined *)0x0;
    uVar4 = 0xf000000000000000;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 1016f082c; end: 1016f08eb;  */

undefined1  [16] FUN_1016f082c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = unaff_x20;
    return auVar3;
  }
  func_0x000107c60e78();
  return ZEXT816(0x1103fbb88);
}



/* Entry: 1016f08ec; end: 1016f090b;  */

undefined1  [16] FUN_1016f08ec(void)

{
  return ZEXT816(0x1103fbb88);
}



/* Entry: 1016f090c; end: 1016f094b;  */

void FUN_1016f090c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1016f094c; end: 1016f095b;  */

void FUN_1016f094c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016f095c; end: 1016f09cb;  */

undefined8 * FUN_1016f095c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1016f09cc; end: 1016f0abf;  */

int FUN_1016f09cc(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 1016f0ac0; end: 1016f0b5b;  */

undefined1  [16] FUN_1016f0ac0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd000000000000012;
  if (param_2 == 0) {
    uVar1 = 0x800000010efb85d0;
  }
  else {
    func_0x000107c602fc(0x1a);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_1,param_2);
    uVar2 = 0xd000000000000018;
    uVar1 = 0x800000010efb85b0;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1016f0b5c; end: 1016f0b87;  */

undefined1  [16] FUN_1016f0b5c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  uVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  uVar3 = 0xd000000000000012;
  if (lVar1 == 0) {
    uVar2 = 0x800000010efb85d0;
  }
  else {
    func_0x000107c602fc(0x1a);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar2,lVar1);
    uVar3 = 0xd000000000000018;
    uVar2 = 0x800000010efb85b0;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Entry: 1016f0b88; end: 1016f0c2b;  */

undefined1  [16] FUN_1016f0b88(uint param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((param_1 >> 7 & 1) == 0) {
    if ((param_1 & 0xff) != 0) {
      pcVar1 = "TrendingTab:QuickCut";
      uVar2 = 0xd000000000000012;
      if ((param_1 & 0xff) != 1) {
        pcVar1 = "ForYouTab:Preview";
        uVar2 = 0xd000000000000014;
      }
      auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
      auVar3._0_8_ = uVar2;
      return auVar3;
    }
    uVar2 = 0xd000000000000013;
    pcVar1 = "TrendingTab:Preview";
  }
  else {
    if ((param_1 & 0x7f) != 0) {
      uVar2 = 0xd000000000000010;
      pcVar1 = "ForYouTab:QuickCut";
      if ((param_1 & 0x7f) != 1) {
        uVar2 = 0xd000000000000012;
        pcVar1 = "Empty request data";
      }
      auVar4._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
      auVar4._0_8_ = uVar2;
      return auVar4;
    }
    uVar2 = 0xd000000000000011;
    pcVar1 = "ForYouTab:Preview";
  }
  auVar5._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 1016f0c2c; end: 1016f0c7b;  */

/* WARNING: Possible PIC construction at 0x0001016f0c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016f0c68) */

void FUN_1016f0c2c(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1016f11f4();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1016f0c7c; end: 1016f0c83;  */

/* WARNING: Possible PIC construction at 0x0001016f0c64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016f0c68) */

void FUN_1016f0c7c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_1016f11f4();
  func_0x000107c613fc();
  *(long *)(lVar3 + 0x10) = lVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 1016f0c84; end: 1016f0cbf;  */

void FUN_1016f0c84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1016f0cc0; end: 1016f0ccb; -[_TtC19SCMusicServicesImpl20MusicPreferencesImpl musicSnapContextRecommendationIndex] */

void FUN_1016f0cc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1016f0ccc();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016f0ccc; end: 1016f0d83;  */

void FUN_1016f0ccc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efb86b0);
  lVar2 = lStack_38;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(uVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar4 = lVar2;
    func_0x000107c6148c(lVar2,puVar3);
    if (lVar4 != 0) {
      return;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  return;
}



/* Entry: 1016f0d84; end: 1016f0e37; -[_TtC19SCMusicServicesImpl20MusicPreferencesImpl setMusicSnapContextRecommendationIndex:] */

void FUN_1016f0d84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000100083b20(&uStack_38);
  func_0x000107c61174(param_3);
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010efb86b0);
  func_0x000107c56bcc(uStack_38);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1016f0e38; end: 1016f0e43; -[_TtC19SCMusicServicesImpl20MusicPreferencesImpl musicAutoApplyThresholdModifier] */

void FUN_1016f0e38(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1016f0e7c();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016f0e44; end: 1016f0e7b;  */

void FUN_1016f0e44(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016f0e7c; end: 1016f0f37;  */

void FUN_1016f0e7c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efb86e0);
  lVar2 = lStack_38;
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(uVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar4 = lVar2;
    func_0x000107c6148c(lVar2,puVar3);
    if (lVar4 != 0) {
      return;
    }
    func_0x000107c615e8(lVar2);
  }
  func_0x0001002ed07c(0);
  func_0x000107c60110(0);
  return;
}



/* Entry: 1016f0f38; end: 1016f1017;  */

void FUN_1016f0f38(float param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_48;
  
  uVar1 = param_2;
  FUN_1016f0e7c();
  func_0x000107c436dc();
  fVar4 = param_1;
  FUN_1016f1018(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  fVar5 = param_1 * fVar4;
  if ((int)param_2 != 4) {
    fVar5 = param_1 + fVar4;
  }
  func_0x000107c46978(fVar5);
  func_0x000107c61174();
  func_0x000100083b20(&uStack_48);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010efb86e0);
  func_0x000107c56bcc(uStack_48);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1016f1018; end: 1016f116b;  */

undefined8 FUN_1016f1018(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  if (param_1 < 3) {
    if (param_1 != 0) {
      if (param_1 != 2) {
        return 0;
      }
      func_0x000100083b20(&uStack_38);
      uVar2 = 0xd000000000000028;
      func_0x000107c5fadc(0xd000000000000028,0x800000010efb8770);
      uVar4 = 0;
      uVar3 = uStack_38;
      goto LAB_1016f1130;
    }
    func_0x000100083b20(&uStack_38);
    pcVar1 = "MUSIC_AUTOPLAY_BACKOFF_INCREMENT_DELETE";
    uVar2 = 0xd000000000000027;
  }
  else {
    if (param_1 == 3) {
      func_0x000100083b20(&uStack_38);
      uVar2 = 0xd00000000000002c;
      func_0x000107c5fadc(0xd00000000000002c,0x800000010efb8740);
      uVar4 = 0xbf800000;
      uVar3 = uStack_38;
      goto LAB_1016f1130;
    }
    if (param_1 != 4) {
      return 0;
    }
    func_0x000100083b20(&uStack_38);
    pcVar1 = "MUSIC_IOS_AUTOAPPLY_BACKOFF_DECAY";
    uVar2 = 0xd000000000000021;
  }
  func_0x000107c5fadc(uVar2,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar4 = 0x3f800000;
  uVar3 = uStack_38;
LAB_1016f1130:
  func_0x000107c436e4(uVar4,uVar3);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar2);
  return uVar4;
}



/* Entry: 1016f116c; end: 1016f119b; -[_TtC19SCMusicServicesImpl20MusicPreferencesImpl updateMusicAutoApplyThresholdModifierFor:] */

void FUN_1016f116c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_1016f0f38(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1016f119c; end: 1016f11a7;  */

void FUN_1016f119c(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001016f11e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1016f11a8; end: 1016f11e3;  */

void FUN_1016f11a8(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001016f11e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1016f11e4; end: 1016f11f3;  */

undefined1  [16] FUN_1016f11e4(void)

{
  return ZEXT816(0x1103fbce8);
}



/* Entry: 1016f11f4; end: 1016f1213;  */

void FUN_1016f11f4(void)

{
  func_0x000107c61168(&PTR_PTR_112dc2f80);
  return;
}



/* Entry: 1016f1214; end: 1016f134b;  */

undefined1  [16] FUN_1016f1214(undefined8 param_1,char param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_2 == '\x01') {
    func_0x000107c602fc(0x28);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0xd000000000000026;
    uStack_38 = 0x800000010efb87d0;
    puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
  }
  else {
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0x727420636973754d;
    uStack_38 = 0xec000000206b6361;
    puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    func_0x000107c5fb78(0xd000000000000017,0x800000010efb8800);
  }
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 1016f134c; end: 1016f1373;  */

undefined1  [16] FUN_1016f134c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(unaff_x20 + 8) == '\x01') {
    func_0x000107c602fc(0x28);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0xd000000000000026;
    uStack_38 = 0x800000010efb87d0;
    puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
  }
  else {
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0x727420636973754d;
    uStack_38 = 0xec000000206b6361;
    puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    func_0x000107c5fb78(0xd000000000000017,0x800000010efb8800);
  }
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 1016f1374; end: 1016f13af;  */

void FUN_1016f1374(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1016f1ee4();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1016f13b0; end: 1016f13b7;  */

void FUN_1016f13b0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1016f1ee4();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016f13b8; end: 1016f13e7;  */

void FUN_1016f13b8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1016f13e8; end: 1016f143f;  */

void FUN_1016f13e8(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016f1440;
  plVar1[8] = param_4;
  plVar1[9] = (long)param_3;
  plVar1[10] = *param_3;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xb] = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar1[0xc] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0xd] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xe] = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xf] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f15d0,0,0);
  return;
}



/* Entry: 1016f1440; end: 1016f14ab;  */

void FUN_1016f1440(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x30) = param_1;
    pcVar1 = FUN_1016f14ac;
  }
  else {
    pcVar1 = FUN_1016f14f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016f14ac; end: 1016f14ef;  */

void FUN_1016f14ac(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000100b60084();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016f14ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f14f0; end: 1016f152f;  */

void FUN_1016f14f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x00010488ade0(uVar1);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016f152c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f1530; end: 1016f15cf;  */

void FUN_1016f1530(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 **)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = *unaff_x20;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f15d0,0,0);
  return;
}



/* Entry: 1016f15d0; end: 1016f18b3;  */

void FUN_1016f15d0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x40);
  func_0x000107c42794();
  func_0x000107c61180();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  if (uVar4 != 0) {
    uVar9 = uVar4;
    func_0x000107c40500();
    func_0x000107c61180();
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f18b0);
      (*pcVar3)();
    }
    uVar12 = uVar9;
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c61170(uVar9);
    func_0x000107c6142c(param_2);
    uVar9 = uVar12 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar9 = param_2 >> 0x38 & 0xf;
    }
    if (uVar9 == 0) {
      func_0x000107c61170(uVar4);
    }
    else {
      uVar9 = uVar4;
      func_0x000107c40500();
      func_0x000107c61180();
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f18b4);
        (*pcVar3)();
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
      lVar2 = *(long *)(unaff_x22 + 0x68);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar12 = uVar9;
      func_0x000107c5faec();
      func_0x000107c61170(uVar9);
      func_0x000107c5edd0(uVar11,uVar12,uVar7);
      func_0x000107c6142c(uVar7);
      (**(code **)(lVar2 + 0x30))(uVar11,1,uVar10);
      if ((int)uVar11 != 1) {
        (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x58),
                   *(undefined8 *)(unaff_x22 + 0x60));
        func_0x000100083b20(unaff_x22 + 0x10);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar2 = *(long *)(unaff_x22 + 0x30);
        uVar11 = uVar10;
        func_0x0001000a8868(unaff_x22 + 0x10);
        uVar9 = uVar4;
        func_0x000107c4271c();
        func_0x000107c61180();
        if (uVar9 == 0) {
          uVar12 = 0;
          uVar13 = 0xf000000000000000;
          uVar14 = uVar11;
        }
        else {
          uVar12 = uVar9;
          func_0x000107c5ee30();
          uVar14 = uVar11;
          func_0x000107c61170(uVar9);
          uVar13 = uVar11;
        }
        *(ulong *)(unaff_x22 + 0x88) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar13;
        func_0x000107c42718();
        func_0x000107c61180();
        if (uVar4 == 0) {
          uVar9 = 0;
          uVar14 = 0xf000000000000000;
        }
        else {
          uVar9 = uVar4;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar4);
        }
        *(ulong *)(unaff_x22 + 0x98) = uVar9;
        *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
        uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
        puVar15 = (undefined8 *)(unaff_x22 + 0x38);
        *puVar15 = uVar11;
        func_0x000107c614e4();
        func_0x000107c5fb18(puVar15);
        *(undefined8 *)(unaff_x22 + 0xa8) = uVar11;
        piVar8 = *(int **)(lVar2 + 8);
        iVar1 = *piVar8;
        plVar6 = (long *)(ulong)(uint)piVar8[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xb0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1016f18b4;
                    /* WARNING: Could not recover jumptable at 0x0001016f18a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar8))
                  (*(undefined8 *)(unaff_x22 + 0x78),uVar12,uVar13,uVar9,uVar14,puVar15,uVar11,
                   uVar10,lVar2);
        return;
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
      func_0x000107c61170(uVar4);
      func_0x0001000293e4(uVar10);
    }
  }
  puVar5 = *(undefined8 **)(unaff_x22 + 0x40);
  func_0x000107c5cda4();
  puVar15 = puVar5;
  func_0x0001016f1fe0();
  func_0x000107c613f8(&UNK_1103fbdc0,puVar15,0,0);
  *puVar15 = puVar5;
  *(undefined1 *)(puVar15 + 1) = 0;
  func_0x000107c61654();
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001016f1758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f18b4; end: 1016f193b;  */

void FUN_1016f18b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0xa8);
  uVar2 = *(undefined8 *)(lVar6 + 0x98);
  uVar4 = *(undefined8 *)(lVar6 + 0xa0);
  uVar3 = *(undefined8 *)(lVar6 + 0x88);
  uVar5 = *(undefined8 *)(lVar6 + 0x90);
  *(undefined8 *)(lVar6 + 0xb8) = param_1;
  *(undefined8 *)(lVar6 + 0xc0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xb0));
  func_0x000107c6142c(uVar1);
  func_0x0001000b44c0(uVar2,uVar4);
  func_0x0001000b44c0(uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f193c,0,0);
  return;
}



/* Entry: 1016f193c; end: 1016f1d6f;  */

void FUN_1016f193c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x22;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar17 = *(ulong *)(unaff_x22 + 0xc0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (0xe < uVar17 >> 0x3c) {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar11 = *(long *)(unaff_x22 + 0x68);
    puVar9 = *(undefined8 **)(unaff_x22 + 0x40);
    func_0x000107c5cda4();
    puVar10 = puVar9;
    func_0x0001016f1fe0();
    func_0x000107c613f8(&UNK_1103fbdc0,puVar10,0,0);
    *puVar10 = puVar9;
    *(undefined1 *)(puVar10 + 1) = 1;
    func_0x000107c61654();
    func_0x000107c61170(uVar16);
    (**(code **)(lVar11 + 8))(uVar19,uVar15);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c615c0(uVar19);
    func_0x000107c615c0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001016f1a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  iVar8 = (int)*(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c4a190();
  if (iVar8 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar17 = *(ulong *)(unaff_x22 + 0x80);
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x70),uVar19,*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c4271c();
    func_0x000107c61180();
    if (uVar17 == 0) {
      param_2 = 0;
      uVar16 = 0xf000000000000000;
      uVar15 = uVar19;
    }
    else {
      param_2 = uVar17;
      func_0x000107c5ee30();
      uVar15 = uVar19;
      func_0x000107c61170(uVar17);
      uVar16 = uVar19;
    }
    lVar11 = *(long *)(unaff_x22 + 0x80);
    func_0x000107c42718();
    func_0x000107c61180();
    if (lVar11 == 0) {
      lVar14 = 0;
      uVar15 = 0xf000000000000000;
    }
    else {
      lVar14 = lVar11;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar11);
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
    puVar12 = PTR_PTR_1126b3020;
    func_0x000107c610f8(PTR_PTR_1126b3020);
    FUN_1016f2020(uVar19,param_2,uVar16,lVar14,uVar15,puVar12);
  }
  uVar18 = *(ulong *)(unaff_x22 + 0x40);
  func_0x000107c5cda4(uVar18);
  uVar17 = uVar18;
  func_0x000107c5bb48(uVar18);
  func_0x000107c60a44(&uStack_80,(double)(uVar17 & 0xffffffff) / 1000.0,600);
  func_0x000107c447cc();
  uVar17 = param_2;
  if ((int)uVar18 == 0) {
LAB_1016f1b90:
    lVar11 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar11 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c404d4();
    func_0x000107c61180();
    uVar17 = param_2;
    if (lVar11 == 0) goto LAB_1016f1b90;
    lVar14 = lVar11;
    func_0x000107c41214();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    uVar17 = param_2;
    if (lVar14 == 0) goto LAB_1016f1b90;
    lVar11 = lVar14;
    func_0x000107c5ee30(lVar14);
    uVar17 = param_2;
    func_0x000107c61170(lVar14);
  }
  uVar18 = *(ulong *)(unaff_x22 + 0x40);
  func_0x000107c42ccc();
  func_0x000107c61180();
  if (uVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1016f1d70);
    (*pcVar7)();
  }
  uVar13 = uVar18;
  func_0x000107c5faec();
  uVar20 = uVar17;
  func_0x000107c61170(uVar18);
  func_0x000107c6142c(uVar17);
  uVar18 = uVar13 & 0xffffffffffff;
  if ((uVar17 & 0x2000000000000000) != 0) {
    uVar18 = uVar17 >> 0x38 & 0xf;
  }
  if (uVar18 != 0) {
    lVar14 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c42ccc();
    func_0x000107c61180();
    if (lVar14 != 0) {
      lVar21 = lVar14;
      func_0x000107c5faec();
      func_0x000107c61170(lVar14);
      goto LAB_1016f1c1c;
    }
  }
  lVar21 = 0;
  uVar20 = 0;
LAB_1016f1c1c:
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c5ee20(uVar15,*(undefined8 *)(unaff_x22 + 0xc0));
  if (param_2 >> 0x3c < 0xf) {
    lVar14 = lVar11;
    func_0x000107c5ee20(lVar11,param_2);
    func_0x0001000b44c0(lVar11,param_2);
  }
  else {
    lVar14 = 0;
  }
  if (uVar20 == 0) {
    lVar21 = 0;
  }
  else {
    func_0x000107c5fadc(lVar21,uVar20);
    func_0x000107c6142c(uVar20);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar11 = *(long *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar12 = PTR_PTR_1126b3030;
  func_0x000107c610f8(PTR_PTR_1126b3030);
  *(undefined8 *)(unaff_x22 + 200) = uStack_80;
  *(undefined8 *)(unaff_x22 + 0xd0) = uStack_78;
  *(undefined8 *)(unaff_x22 + 0xd8) = uStack_70;
  func_0x000107c48e18();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar19);
  func_0x0001000b44c0(uVar16,uVar3);
  (**(code **)(lVar11 + 8))(uVar1,uVar6);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016f1d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar12);
  return;
}



/* Entry: 1016f1d70; end: 1016f1eaf; -[_TtC19SCMusicServicesImpl26MusicSelectionResolverImpl musicSelectionFromMusicTrack:] */

void FUN_1016f1d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112dc2ff0,&UNK_10d9800e8);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_1103fbd28;
  func_0x000107c613fc(&UNK_1103fbd28,0x28,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(lVar1);
  uVar3 = 1;
  func_0x0001001ca524(1,3,0x50,4,0,0,&UNK_10d980160,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  uVar3 = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x00010488b12c();
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1016f1eb0; end: 1016f1ed3;  */

void FUN_1016f1eb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016f1ed4; end: 1016f1ee3;  */

undefined1  [16] FUN_1016f1ed4(void)

{
  return ZEXT816(0x1103fbd08);
}



/* Entry: 1016f1ee4; end: 1016f1f37;  */

void FUN_1016f1ee4(void)

{
  func_0x000107c61168(&PTR_PTR_112dc3038);
  return;
}



/* Entry: 1016f1f38; end: 1016f1fa3;  */

void FUN_1016f1f38(void)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar1 = *(long **)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1016f1fa4;
  plVar6[3] = lVar4;
  plVar2 = (long *)0xe0;
  func_0x000107c615b8();
  plVar6[4] = (long)plVar2;
  *plVar2 = (long)plVar6;
  plVar2[1] = (long)FUN_1016f1440;
  plVar2[8] = lVar7;
  plVar2[9] = (long)plVar1;
  plVar2[10] = *plVar1;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xb] = uVar3;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar2[0xc] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0xd] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xe] = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xf] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f15d0,0,0);
  return;
}



/* Entry: 1016f1fa4; end: 1016f201f;  */

void FUN_1016f1fa4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f1fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016f2020; end: 1016f211f;  */

undefined8
FUN_1016f2020(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x000107c5ed90();
  if (param_3 >> 0x3c < 0xf) {
    uVar3 = param_2;
    func_0x000107c5ee20(param_2,param_3);
    func_0x0001000b44c0(param_2,param_3);
  }
  else {
    uVar3 = 0;
  }
  if (param_5 >> 0x3c < 0xf) {
    uVar4 = param_4;
    func_0x000107c5ee20(param_4,param_5);
    func_0x0001000b44c0(param_4,param_5);
  }
  else {
    uVar4 = 0;
  }
  func_0x000107c49144();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return unaff_x20;
}



/* Entry: 1016f2120; end: 1016f21d3;  */

int FUN_1016f2120(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1016f21d4; end: 1016f2213;  */

undefined1  [16] FUN_1016f21d4(void)

{
  return ZEXT816(0x1103fbe38);
}



/* Entry: 1016f2214; end: 1016f2223;  */

undefined1  [16] FUN_1016f2214(void)

{
  return ZEXT816(0x1103fbee0);
}



/* Entry: 1016f2224; end: 1016f2253;  */

void FUN_1016f2224(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1016ec894();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1016f2254; end: 1016f22c7;  */

void FUN_1016f2254(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1016f59bc;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar2[0xf] = param_3;
  plVar2[0x10] = param_4;
  plVar2[0xd] = (long)puVar1;
  plVar2[0xe] = param_2;
  plVar2[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f22e8,0,0);
  return;
}



/* Entry: 1016f22c8; end: 1016f22e7;  */

void FUN_1016f22c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f22e8,0,0);
  return;
}



/* Entry: 1016f22e8; end: 1016f24ff;  */

void FUN_1016f22e8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined *puVar12;
  int *piVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar2 = PTR_PTR_1126a7a08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x88) = puVar2;
  func_0x00010102c3b8(uVar14);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar12 = PTR___sypN_11034f1a8;
  uVar15 = uVar14;
  func_0x000107c5fc48(uVar14,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar14);
  func_0x000107c45788(puVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c59fd4(puVar2);
  func_0x000107c61170(puVar3);
  func_0x00010102c3b8(uVar8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar12 = puVar12 + 8;
  uVar14 = uVar8;
  func_0x000107c5fc48(uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c45788(puVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c59954(puVar2);
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    puVar2 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    *(undefined **)(unaff_x22 + 0x90) = puVar2;
    *(undefined **)(unaff_x22 + 0x98) = puVar12;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
    *(undefined **)(unaff_x22 + 0x38) = puVar2;
    *(undefined **)(unaff_x22 + 0x40) = puVar12;
    uVar14 = 0x112d56fe0;
    func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
    pcVar4 = FUN_1016f2ae0;
    func_0x00010488bc98(FUN_1016f2ae0,unaff_x22 + 0x10,uVar14);
    *(code **)(unaff_x22 + 0xa0) = pcVar4;
    *(code **)(unaff_x22 + 0x58) = pcVar4;
    plVar5 = (long *)0x40;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa8) = plVar5;
    lVar6 = 0x112dc2cf0;
    func_0x0001000285a8(0x112dc2cf0,&UNK_10d9802c0);
    lVar7 = lVar6;
    FUN_1016ebd6c();
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1016f2500;
    plVar5[3] = unaff_x22 + 0x48;
    uVar8 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,lVar7,lVar6,&UNK_10e821f58,&UNK_10e821f60);
    uVar14 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    lVar9 = 0;
    __ss6ResultOMa(0,uVar8,uVar14,PTR___ss5ErrorWS_11034ee10);
    plVar5[4] = lVar9;
    uVar10 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar5[5] = uVar10;
    piVar13 = *(int **)(lVar7 + 0x10);
    iVar1 = *piVar13;
    plVar11 = (long *)(ulong)(uint)piVar13[1];
    _swift_task_alloc();
    plVar5[6] = (long)plVar11;
    *plVar11 = (long)plVar5;
    plVar11[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar13))(plVar11,uVar10,lVar6,lVar7);
    return;
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016f24fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016f2500; end: 1016f2563;  */

void FUN_1016f2500(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1016f2564;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_1016f26d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016f2564; end: 1016f26cf;  */

void FUN_1016f2564(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x22;
  long lVar8;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x50);
  if (uVar7 >> 0x3c < 0xf) {
    lVar8 = *(long *)(unaff_x22 + 0x48);
    lVar6 = *(long *)(unaff_x22 + 0xb0);
    func_0x000107c610f8(PTR_PTR_1126a7a10);
    func_0x000100de78a0(lVar8,uVar7);
    lVar4 = lVar8;
    FUN_1016f4ea0(lVar8,uVar7);
    func_0x0001000b44c0(lVar8,uVar7);
    if (lVar6 == 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
      if (lVar4 != 0) {
        lVar6 = lVar4;
        FUN_1016f2bd0(lVar4,*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),
                      *(undefined8 *)(unaff_x22 + 0x80));
        func_0x000107c61170(lVar4);
        func_0x0001000b44c0(lVar8,uVar7);
        func_0x000107c61574(uVar2);
        func_0x00010006c090(uVar3,uVar1);
        func_0x000107c61170(uVar5);
        goto LAB_1016f2638;
      }
      func_0x00010006c090(uVar3,uVar1);
      func_0x000107c61574(uVar2);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
      func_0x000107c614ac(lVar6);
      func_0x00010006c090(uVar3,uVar1);
      func_0x000107c61574(uVar2);
    }
    func_0x000107c61170(uVar5);
    func_0x0001000b44c0(lVar8,uVar7);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c61574(uVar1);
    func_0x000107c61170(uVar5);
  }
  lVar6 = 0;
LAB_1016f2638:
                    /* WARNING: Could not recover jumptable at 0x0001016f2658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar6);
  return;
}


