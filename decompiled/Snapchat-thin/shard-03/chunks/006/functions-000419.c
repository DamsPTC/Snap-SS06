/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102adee3c; end: 102adee6f;  */

void FUN_102adee3c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102adee70; end: 102adf667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_102adee70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7,long param_8)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 unaff_x20;
  undefined *puVar19;
  undefined8 uVar20;
  undefined1 auStack_78 [24];
  
  lVar15 = 0x10;
  func_0x000107c613fc();
  plVar3 = *(long **)(param_3 + _DAT_113074ea0);
  func_0x000107c40534();
  func_0x000107c61180();
  plVar4 = plVar3;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000100b9a7ec();
  if (plVar4 == (long *)*plVar3 && lVar15 == plVar3[1]) {
    func_0x000107c6142c(lVar15);
  }
  else {
    func_0x000107c605b8(plVar4,lVar15,(long *)*plVar3,plVar3[1],0);
    func_0x000107c6142c(lVar15);
    if (((ulong)plVar4 & 1) == 0) {
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_6);
      return unaff_x20;
    }
  }
  lVar15 = _DAT_112ff4f58;
  puVar19 = *(undefined **)(param_8 + _DAT_112fcacc8);
  func_0x000107c61428(param_7 + _DAT_112ff4f58,auStack_78,0,0);
  lVar15 = param_7 + lVar15;
  func_0x000107c61618();
  func_0x000107c6157c(puVar19);
  if (lVar15 != 0) {
    lVar5 = lVar15;
    func_0x000107c3da64();
    func_0x000107c61180();
    func_0x000107c61170(lVar15);
    if (lVar5 != 0) {
      puVar6 = &UNK_110596da8;
      func_0x000107c613fc(&UNK_110596da8,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar5;
      func_0x0001000285a8(0x112eeb910,&UNK_10db199a0);
      func_0x000107c613fc();
      pcVar7 = (code *)0x102adfa74;
      goto LAB_102adf07c;
    }
  }
  func_0x0001000285a8(0x112eeb910,&UNK_10db199a0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar19);
  pcVar7 = FUN_102adf7a8;
  puVar6 = puVar19;
LAB_102adf07c:
  func_0x0001000bdd8c(pcVar7,puVar6);
  uVar20 = *(undefined8 *)(param_5 + _DAT_112fcab50);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar20);
  uVar8 = param_6;
  func_0x000107c4529c();
  func_0x000107c61180();
  uVar14 = param_1;
  func_0x000107c3dff0();
  func_0x000107c61180();
  puVar6 = &UNK_110596d80;
  func_0x000107c613fc(&UNK_110596d80,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar20;
  *(code **)(puVar6 + 0x18) = pcVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = param_4;
  *(undefined8 *)(puVar6 + 0x30) = uVar14;
  func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar20);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  pcVar9 = FUN_102adfa48;
  func_0x0001000bdd8c(FUN_102adfa48,puVar6);
  uVar10 = 0x112d4adc0;
  func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
  uVar11 = 0x102adfa4c;
  func_0x0001000cb480(0x102adfa4c,0,uVar10);
  uVar10 = uVar11;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar20);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar11);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,8,0);
  lVar15 = 0;
  do {
    bVar2 = *(byte *)(lVar15 + 0x112eeb940);
    uVar11 = 0x65746172656e6567;
    if (bVar2 != 6) {
      uVar11 = 0x5f69755f736e656c;
    }
    uVar1 = 0xe800000000000000;
    if (bVar2 != 6) {
      uVar1 = 0xee00657461647075;
    }
    uVar17 = 0x800000010f0e9630;
    uVar8 = 0xd00000000000001c;
    if (bVar2 != 4) {
      uVar17 = 0x800000010f0e9610;
      uVar8 = 0xd000000000000015;
    }
    if (bVar2 < 6) {
      uVar1 = uVar17;
      uVar11 = uVar8;
    }
    uVar17 = 0xed00006472616f62;
    uVar8 = 0x79656b5f6e65706f;
    if (bVar2 != 2) {
      uVar17 = 0x800000010f0e9650;
      uVar8 = 0xd00000000000001c;
    }
    pcVar16 = "customization_changed";
    uVar14 = 0xd000000000000011;
    if (bVar2 != 0) {
      pcVar16 = "hide_trending_prompts_button";
      uVar14 = 0xd000000000000015;
    }
    if (bVar2 < 2) {
      uVar17 = (ulong)pcVar16 | 0x8000000000000000;
      uVar8 = uVar14;
    }
    if (bVar2 < 4) {
      uVar1 = uVar17;
      uVar11 = uVar8;
    }
    uVar17 = *(ulong *)(puVar6 + 0x10);
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar17) {
      func_0x000100403514(1 < *(ulong *)(puVar6 + 0x18),uVar17 + 1,1);
    }
    lVar15 = lVar15 + 1;
    *(ulong *)(puVar6 + 0x10) = uVar17 + 1;
    *(undefined8 *)(puVar6 + uVar17 * 0x10 + 0x20) = uVar11;
    *(ulong *)(puVar6 + uVar17 * 0x10 + 0x28) = uVar1;
  } while (lVar15 != 8);
  puVar12 = puVar6;
  func_0x000100403a6c();
  func_0x000107c61574(puVar6);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,2,0);
  uVar1 = *(ulong *)(puVar6 + 0x10);
  uVar17 = *(ulong *)(puVar6 + 0x18);
  uVar18 = uVar17 >> 1;
  lVar15 = uVar1 + 1;
  if (uVar18 <= uVar1) {
    func_0x000100403514(1 < uVar17,lVar15,1);
    uVar17 = *(ulong *)(puVar6 + 0x18);
    uVar18 = uVar17 >> 1;
  }
  *(long *)(puVar6 + 0x10) = lVar15;
  *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = 0x5f6576726573626f;
  *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = 0xed00007374696465;
  lVar5 = uVar1 + 2;
  if ((long)uVar18 < lVar5) {
    func_0x000100403514(1 < uVar17,lVar5,1);
  }
  *(long *)(puVar6 + 0x10) = lVar5;
  *(undefined8 *)(puVar6 + lVar15 * 0x10 + 0x20) = 0x79656b5f6e65706f;
  *(undefined8 *)(puVar6 + lVar15 * 0x10 + 0x28) = 0xed00006472616f62;
  puVar13 = puVar6;
  func_0x000100403a6c(puVar6);
  func_0x000107c61574(puVar6);
  func_0x00010105ba6c(puVar13);
  lVar15 = lRam0000000112eebb78;
  func_0x000107c61174(uVar10);
  if (lVar15 != -1) {
    func_0x000107c61568(0x112eebb78,FUN_102ad90a0);
  }
  uVar11 = uRam0000000113804eb0;
  puVar6 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar14 = 0;
  func_0x0001044e4d64(0);
  uVar8 = uVar14;
  func_0x000100f06a9c();
  func_0x000107c5fe08(uVar11,uVar14,uVar8);
  puVar13 = puVar12;
  func_0x000107c5fe08(puVar12,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar12);
  func_0x000107c48360(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar13);
  uVar11 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(puVar19);
  func_0x000107c61574(pcVar7);
  return unaff_x20;
}



/* Entry: 102adf668; end: 102adf6bf;  */

void FUN_102adf668(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_102ad77a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110596988;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 102adf6c0; end: 102adf7a7;  */

void FUN_102adf6c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = 0;
  func_0x000102ae00bc();
  uVar5 = 0x38;
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 1;
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar4 = lVar3;
  func_0x000107c5eec4(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(long *)(lVar3 + 0x28) = lVar4;
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110596eb8;
  *param_1 = lVar3;
  func_0x000107c6157c(param_2);
  return;
}



/* Entry: 102adf7a8; end: 102adf7af;  */

void FUN_102adf7a8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = 0;
  func_0x000102ae00bc();
  uVar5 = 0x38;
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 1;
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar4 = lVar3;
  func_0x000107c5eec4(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(long *)(lVar3 + 0x28) = lVar4;
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  *(undefined8 *)(lVar3 + 0x10) = unaff_x20;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110596eb8;
  *param_1 = lVar3;
  func_0x000107c6157c();
  return;
}



/* Entry: 102adf7b0; end: 102adfa47;  */

void FUN_102adf7b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x0001003a5b88();
  uVar8 = param_5;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar1 = param_5;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar2 = param_5;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar3 = param_5;
  func_0x000107c3fb78();
  func_0x000107c61180();
  func_0x000107c4f598();
  func_0x000107c61180();
  lVar4 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar4 + 0x38,0);
  func_0x000107c61614(lVar4 + 0x40,0);
  func_0x000107c61614(lVar4 + 0x48,0);
  *(undefined8 *)(lVar4 + 0x58) = 0;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x68) = puVar5;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar4 + 0x78) = puVar5;
  uVar6 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar4 + 0x80) = uVar6;
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined8 *)(lVar4 + 0x18) = param_2;
  *(undefined8 *)(lVar4 + 0x20) = param_3;
  *(undefined8 *)(lVar4 + 0x28) = param_4;
  *(undefined8 *)(lVar4 + 0x30) = uVar8;
  func_0x000107c61604(lVar4 + 0x38,uVar1);
  func_0x000107c61604(lVar4 + 0x40,uVar2);
  func_0x000107c61604(lVar4 + 0x48,uVar3);
  *(undefined8 *)(lVar4 + 0x50) = param_5;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  puVar5 = &UNK_110596de8;
  func_0x000107c613fc(&UNK_110596de8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,lVar4);
  pcStack_70 = FUN_102adfaf0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596e00;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar7);
  puVar5 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar5);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_5);
  func_0x000107c60bd0(ppuVar7);
  uVar8 = *(undefined8 *)(lVar4 + 0x70);
  *(undefined8 *)(lVar4 + 0x70) = param_6;
  func_0x000107c61170(uVar8);
  *param_1 = lVar4;
  return;
}



/* Entry: 102adfa48; end: 102adfa7b;  */

void FUN_102adfa48(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001003a5b88();
  uVar3 = uVar7;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar4 = uVar7;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x000107c3fb78();
  func_0x000107c61180();
  func_0x000107c4f598();
  func_0x000107c61180();
  lVar8 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar8 + 0x38,0);
  func_0x000107c61614(lVar8 + 0x40,0);
  func_0x000107c61614(lVar8 + 0x48,0);
  *(undefined8 *)(lVar8 + 0x58) = 0;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x68) = puVar9;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar8 + 0x78) = puVar9;
  uVar10 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar8 + 0x80) = uVar10;
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(undefined8 *)(lVar8 + 0x98) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 0x18) = uVar12;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar1;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  func_0x000107c61604(lVar8 + 0x38,uVar4);
  func_0x000107c61604(lVar8 + 0x40,uVar5);
  func_0x000107c61604(lVar8 + 0x48,uVar6);
  *(undefined8 *)(lVar8 + 0x50) = uVar7;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  puVar9 = &UNK_110596de8;
  func_0x000107c613fc(&UNK_110596de8,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar8);
  pcStack_70 = FUN_102adfaf0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596e00;
  ppuVar11 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar11);
  puVar9 = puStack_68;
  func_0x000107c61174(uVar12);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c60bd0(ppuVar11);
  uVar12 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(lVar8 + 0x70) = uVar13;
  func_0x000107c61170(uVar12);
  *param_1 = lVar8;
  return;
}



/* Entry: 102adfa7c; end: 102adfabf;  */

void FUN_102adfa7c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102adfac0; end: 102adfacf;  */

void FUN_102adfac0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001003a5b88();
  uVar3 = uVar7;
  func_0x000107c5c884();
  func_0x000107c61180();
  uVar4 = uVar7;
  func_0x000107c5c848();
  func_0x000107c61180();
  uVar5 = uVar7;
  func_0x000107c5dfb4();
  func_0x000107c61180();
  uVar6 = uVar7;
  func_0x000107c3fb78();
  func_0x000107c61180();
  func_0x000107c4f598();
  func_0x000107c61180();
  lVar8 = 0;
  func_0x000102ade580();
  func_0x000107c613fc();
  func_0x000107c61614(lVar8 + 0x38,0);
  func_0x000107c61614(lVar8 + 0x40,0);
  func_0x000107c61614(lVar8 + 0x48,0);
  *(undefined8 *)(lVar8 + 0x58) = 0;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x68) = puVar9;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ade444();
  *(undefined **)(lVar8 + 0x78) = puVar9;
  uVar10 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar8 + 0x80) = uVar10;
  *(undefined8 *)(lVar8 + 0x88) = 0;
  *(undefined8 *)(lVar8 + 0x90) = 0;
  *(undefined8 *)(lVar8 + 0x98) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  *(undefined8 *)(lVar8 + 0x18) = uVar12;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar1;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  func_0x000107c61604(lVar8 + 0x38,uVar4);
  func_0x000107c61604(lVar8 + 0x40,uVar5);
  func_0x000107c61604(lVar8 + 0x48,uVar6);
  *(undefined8 *)(lVar8 + 0x50) = uVar7;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  puVar9 = &UNK_110596de8;
  func_0x000107c613fc(&UNK_110596de8,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar8);
  pcStack_70 = FUN_102adfaf0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101218f4c;
  puStack_78 = &UNK_110596e00;
  ppuVar11 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar11);
  puVar9 = puStack_68;
  func_0x000107c61174(uVar12);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c60bd0(ppuVar11);
  uVar12 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(lVar8 + 0x70) = uVar13;
  func_0x000107c61170(uVar12);
  *param_1 = lVar8;
  return;
}



/* Entry: 102adfad0; end: 102adfaef;  */

void FUN_102adfad0(void)

{
  func_0x000107c61168(&PTR_PTR_112eebd80);
  return;
}



/* Entry: 102adfaf0; end: 102adfb13;  */

void FUN_102adfaf0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102ad9780(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102adfb14; end: 102adfb4f;  */

void FUN_102adfb14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102adfb50; end: 102adfb5b;  */

void FUN_102adfb50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102adfb5c; end: 102adfc9b;  */

void FUN_102adfb5c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c501d0(uVar2);
  func_0x000107c61180();
  puVar3 = &UNK_110596e40;
  func_0x000107c613fc(&UNK_110596e40,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_102adfd08;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  pcStack_50 = FUN_102adfd10;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1019dec60;
  puStack_58 = &UNK_110596e58;
  ppuVar4 = &puStack_70;
  puStack_48 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar5 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c4c590(uVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574();
  func_0x000107c61170(uVar2);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x7a,0x16,0x25,1);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102adfc9c);
  (*pcVar1)();
}



/* Entry: 102adfc9c; end: 102adfd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102adfc9c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  long in_x7;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(in_x7 + 0x18);
  func_0x000107c452a4();
  func_0x000107c61180();
  lVar1 = _DAT_112eebb80;
  func_0x000107c61428(lVar3 + _DAT_112eebb80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined8 *)(lVar3 + lVar1) = in_x6;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102adfd08; end: 102adfd0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102adfd08(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c452a4();
  func_0x000107c61180();
  lVar1 = _DAT_112eebb80;
  func_0x000107c61428(lVar3 + _DAT_112eebb80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined8 *)(lVar3 + lVar1) = in_x6;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102adfd10; end: 102adfd2f;  */

void FUN_102adfd10(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102adfd30; end: 102adfd4b;  */

void FUN_102adfd30(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102adfd4c; end: 102adfd77;  */

void FUN_102adfd4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102adfd78; end: 102adfd97;  */

void FUN_102adfd78(void)

{
  FUN_102adfb5c();
  return;
}



/* Entry: 102adfd98; end: 102adfd9f;  */

undefined8 FUN_102adfd98(void)

{
  return 0;
}



/* Entry: 102adfda0; end: 102adfdbf;  */

void FUN_102adfda0(void)

{
  func_0x000107c61168(&PTR_PTR_112eebe18);
  return;
}



/* Entry: 102adfdc0; end: 102adfdef;  */

void FUN_102adfdc0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102adfdf0; end: 102adfdfb;  */

void FUN_102adfdf0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102adfdfc; end: 102adfe17;  */

void FUN_102adfdfc(void)

{
  func_0x0001005c563c(0);
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102adfe18; end: 102adfe1f;  */

void FUN_102adfe18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102adfe20; end: 102adfebf;  */

void FUN_102adfe20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102adfec0; end: 102adfeef;  */

void FUN_102adfec0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001005c563c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 102adfef0; end: 102ae008f;  */

undefined1  [16] FUN_102adfef0(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [40];
  char cStack_38;
  
  func_0x0001000d224c(&uStack_70);
  func_0x000107c614f0(uStack_70);
  (**(code **)(lStack_68 + 8))(auStack_60);
  func_0x000107c615e8(uStack_70);
  if (cStack_38 == -1) {
    func_0x00010101bc14(auStack_60);
    uStack_80 = 0;
    lStack_78 = 0;
  }
  else {
    func_0x00010101bc9c(auStack_60,auStack_c8);
    func_0x000102ae015c(auStack_c8,auStack_98);
    func_0x00010101bb90(auStack_60);
    func_0x0001000a8868(auStack_98,uStack_80);
    (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
    func_0x0001000834e4(auStack_98);
  }
  auVar1._8_8_ = lStack_78;
  auVar1._0_8_ = uStack_80;
  return auVar1;
}



/* Entry: 102ae0090; end: 102ae00db;  */

void FUN_102ae0090(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ae00dc; end: 102ae014b;  */

void FUN_102ae00dc(void)

{
  FUN_102adfef0();
  return;
}



/* Entry: 102ae014c; end: 102ae0173;  */

undefined1  [16] FUN_102ae014c(void)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(*unaff_x20 + 0x18);
  return auVar1;
}



/* Entry: 102ae0174; end: 102ae017f; -[SCInLensCreationApiCapturePluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae0174(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec000;
  func_0x000107c61428(param_1 + _DAT_112eec000,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae0180; end: 102ae018b; -[SCInLensCreationApiCapturePluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae0180(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec000;
  func_0x000107c61428(param_1 + _DAT_112eec000,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae018c; end: 102ae0197; -[SCInLensCreationApiCapturePluginEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae018c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec008;
  func_0x000107c61428(param_1 + _DAT_112eec008,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae0198; end: 102ae01a3; -[SCInLensCreationApiCapturePluginEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae0198(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec008;
  func_0x000107c61428(param_1 + _DAT_112eec008,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae01a4; end: 102ae01af; -[SCInLensCreationApiCapturePluginEntryPoint inLensCreationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae01a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec010;
  func_0x000107c61428(param_1 + _DAT_112eec010,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae01b0; end: 102ae01bb; -[SCInLensCreationApiCapturePluginEntryPoint setInLensCreationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae01b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec010;
  func_0x000107c61428(param_1 + _DAT_112eec010,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae01bc; end: 102ae01c7; -[SCInLensCreationApiCapturePluginEntryPoint carouselLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae01bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec018;
  func_0x000107c61428(param_1 + _DAT_112eec018,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae01c8; end: 102ae01d3; -[SCInLensCreationApiCapturePluginEntryPoint setCarouselLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae01c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec018;
  func_0x000107c61428(param_1 + _DAT_112eec018,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae01d4; end: 102ae01df; -[SCInLensCreationApiCapturePluginEntryPoint previewConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae01d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec020;
  func_0x000107c61428(param_1 + _DAT_112eec020,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae01e0; end: 102ae01eb; -[SCInLensCreationApiCapturePluginEntryPoint setPreviewConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae01e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec020;
  func_0x000107c61428(param_1 + _DAT_112eec020,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae01ec; end: 102ae01f7; -[SCInLensCreationApiCapturePluginEntryPoint inLensCreationLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae01ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec028;
  func_0x000107c61428(param_1 + _DAT_112eec028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae01f8; end: 102ae0203; -[SCInLensCreationApiCapturePluginEntryPoint setInLensCreationLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae01f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec028;
  func_0x000107c61428(param_1 + _DAT_112eec028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae0204; end: 102ae020f; -[SCInLensCreationApiCapturePluginEntryPoint dependencyProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae0204(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec030;
  func_0x000107c61428(param_1 + _DAT_112eec030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae0210; end: 102ae0253;  */

void FUN_102ae0210(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ae0254; end: 102ae025f; -[SCInLensCreationApiCapturePluginEntryPoint setDependencyProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae0254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec030;
  func_0x000107c61428(param_1 + _DAT_112eec030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae0260; end: 102ae02b3;  */

void FUN_102ae0260(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae02b4; end: 102ae0ae3;  */

/* WARNING: Possible PIC construction at 0x000102ae0554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae0564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae0574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae0820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae08c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae0974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae0984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae09a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae09b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae09d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae09e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae09f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae0a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae0a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae0a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae07ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae07fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae07cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae07ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae079c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ae07b0) */
/* WARNING: Removing unreachable block (ram,0x000102ae07d0) */
/* WARNING: Removing unreachable block (ram,0x000102ae0800) */
/* WARNING: Removing unreachable block (ram,0x000102ae07f0) */
/* WARNING: Removing unreachable block (ram,0x000102ae0a58) */
/* WARNING: Removing unreachable block (ram,0x000102ae0a48) */
/* WARNING: Removing unreachable block (ram,0x000102ae0a38) */
/* WARNING: Removing unreachable block (ram,0x000102ae09f8) */
/* WARNING: Removing unreachable block (ram,0x000102ae09e8) */
/* WARNING: Removing unreachable block (ram,0x000102ae09d8) */
/* WARNING: Removing unreachable block (ram,0x000102ae09bc) */
/* WARNING: Removing unreachable block (ram,0x000102ae09ac) */
/* WARNING: Removing unreachable block (ram,0x000102ae0988) */
/* WARNING: Removing unreachable block (ram,0x000102ae0978) */
/* WARNING: Removing unreachable block (ram,0x000102ae08c4) */
/* WARNING: Removing unreachable block (ram,0x000102ae0acc) */
/* WARNING: Removing unreachable block (ram,0x000102ae08f8) */
/* WARNING: Removing unreachable block (ram,0x000102ae0824) */
/* WARNING: Removing unreachable block (ram,0x000102ae0a7c) */
/* WARNING: Removing unreachable block (ram,0x000102ae085c) */
/* WARNING: Removing unreachable block (ram,0x000102ae0aa4) */
/* WARNING: Removing unreachable block (ram,0x000102ae08a4) */
/* WARNING: Removing unreachable block (ram,0x000102ae0578) */
/* WARNING: Removing unreachable block (ram,0x000102ae0650) */
/* WARNING: Removing unreachable block (ram,0x000102ae065c) */
/* WARNING: Removing unreachable block (ram,0x000102ae0660) */
/* WARNING: Removing unreachable block (ram,0x000102ae066c) */
/* WARNING: Removing unreachable block (ram,0x000102ae0670) */
/* WARNING: Removing unreachable block (ram,0x000102ae0678) */
/* WARNING: Removing unreachable block (ram,0x000102ae067c) */
/* WARNING: Removing unreachable block (ram,0x000102ae0684) */
/* WARNING: Removing unreachable block (ram,0x000102ae0688) */
/* WARNING: Removing unreachable block (ram,0x000102ae0694) */
/* WARNING: Removing unreachable block (ram,0x000102ae0698) */
/* WARNING: Removing unreachable block (ram,0x000102ae06a0) */
/* WARNING: Removing unreachable block (ram,0x000102ae06a4) */
/* WARNING: Removing unreachable block (ram,0x000102ae06ac) */
/* WARNING: Removing unreachable block (ram,0x000102ae06b0) */
/* WARNING: Removing unreachable block (ram,0x000102ae06e4) */
/* WARNING: Removing unreachable block (ram,0x000102ae06c8) */
/* WARNING: Removing unreachable block (ram,0x000102ae06e0) */
/* WARNING: Removing unreachable block (ram,0x000102ae0808) */
/* WARNING: Removing unreachable block (ram,0x000102ae0568) */
/* WARNING: Removing unreachable block (ram,0x000102ae0558) */
/* WARNING: Removing unreachable block (ram,0x000102ae07a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae02b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f284();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c452a8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c3f6a4();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c4f0d8();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c452a0();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            func_0x000107c417b8();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_102ad85a0();
              func_0x000107c613fc();
              if (*(int *)(lVar2 + _DAT_113082420) != 0) {
                uVar10 = *(undefined8 *)(lVar5 + _DAT_112fcab50);
                puVar7 = &UNK_110596ef8;
                func_0x000107c613fc(&UNK_110596ef8,0x18,7);
                *(long *)(puVar7 + 0x10) = lVar4;
                func_0x0001000285a8(0x112eeb910,&UNK_10db199a0);
                func_0x000107c613fc();
                func_0x000107c6157c(uVar10);
                func_0x000107c61174(lVar4);
                pcVar8 = FUN_102ae0ae4;
                func_0x0001000bdd8c(FUN_102ae0ae4,puVar7);
                func_0x000107c4529c();
                func_0x000107c61180();
                func_0x000107c3dff0();
                func_0x000107c61180();
                puVar7 = &UNK_110596f20;
                func_0x000107c613fc(&UNK_110596f20,0x40,7);
                *(long *)(puVar7 + 0x10) = unaff_x20;
                *(undefined8 *)(puVar7 + 0x18) = uVar10;
                *(code **)(puVar7 + 0x20) = pcVar8;
                *(long *)(puVar7 + 0x28) = lVar6;
                *(long *)(puVar7 + 0x30) = lVar3;
                *(long *)(puVar7 + 0x38) = lVar1;
                func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
                func_0x000107c613fc();
                func_0x000107c6157c(uVar10);
                func_0x000107c61174(unaff_x20);
                func_0x000107c6157c(pcVar8);
                func_0x000107c61174(lVar6);
                func_0x000107c61174(lVar3);
                func_0x000107c61174(lVar1);
                func_0x0001000bdd8c(0x102ae0aec,puVar7);
                uVar9 = 0x112d4adc0;
                func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
                func_0x0001000cb480(0x102ad820c,0,uVar9);
                func_0x0001003a5b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__swift_release_11034f4c0)(uVar10);
                return;
              }
              func_0x000107c61170(lVar2);
              lVar1 = lVar5;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102ae0ae4; end: 102ae0afb;  */

void FUN_102ae0ae4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_102ad77a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110596988;
  *param_1 = lVar2;
  return;
}



/* Entry: 102ae0afc; end: 102ae0b23; -[SCInLensCreationApiCapturePluginEntryPoint begin] */

void FUN_102ae0afc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ae02b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ae0b24; end: 102ae0b67; -[SCInLensCreationApiCapturePluginEntryPoint end] */

void FUN_102ae0b24(undefined8 param_1)

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



/* Entry: 102ae0b68; end: 102ae0f23;  */

void FUN_102ae0b68(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x49556172656d6163;
      if (((param_2 == 0x49556172656d6163) && (param_3 == -0x12ffff9a8f909cad)) ||
         (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c530ec();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef0f167e0)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010f0e9820,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5533c();
        }
        else {
          if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0f167c0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000016,0x800000010f0e9840,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000015;
              if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef0f167a0)) ||
                 (func_0x000107c605b8(0xd000000000000015,0x800000010f0e9860,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57780();
              }
              else {
                uVar2 = 0xd00000000000001d;
                if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef0f16780)) ||
                   (func_0x000107c605b8(0xd00000000000001d,0x800000010f0e9880,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55338();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0f1a8d0)) {
                    uVar2 = 0;
                    func_0x000107c605b8(0xd000000000000012,0x800000010f0e5730,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "SCInLensCreationApiPlugin/SCInLensCreationApiCapturePluginEntryPoint.swift"
                                          ,0x4a,2,0x3f,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ae0f24);
                      (*pcVar1)();
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5401c();
                }
              }
              goto LAB_102ae0bfc;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53250();
        }
      }
      goto LAB_102ae0bfc;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_102ae0bfc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ae0f24; end: 102ae0fcf; -[SCInLensCreationApiCapturePluginEntryPoint setValue:forIvarName:] */

void FUN_102ae0f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ae0b68(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ae0fd0; end: 102ae10a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae0fd0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112eec000,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec008,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec010,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec018,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec020,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec028,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec030,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eec038) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ae10a8; end: 102ae10c7; -[SCInLensCreationApiCapturePluginEntryPoint init] */

void FUN_102ae10a8(void)

{
  FUN_102ae0fd0();
  return;
}



/* Entry: 102ae10c8; end: 102ae10fb;  */

void FUN_102ae10c8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ae10fc; end: 102ae1193; -[SCInLensCreationApiCapturePluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae10fc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eec000);
  func_0x000107c61610(param_1 + _DAT_112eec008);
  func_0x000107c61610(param_1 + _DAT_112eec010);
  func_0x000107c61610(param_1 + _DAT_112eec018);
  func_0x000107c61610(param_1 + _DAT_112eec020);
  func_0x000107c61610(param_1 + _DAT_112eec028);
  func_0x000107c61610(param_1 + _DAT_112eec030);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eec038));
  return;
}



/* Entry: 102ae1194; end: 102ae11b3;  */

void FUN_102ae1194(void)

{
  func_0x000107c61168(&PTR_PTR_112886a40);
  return;
}



/* Entry: 102ae11b4; end: 102ae11bf; -[SCInLensCreationApiMainCameraPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae11b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec068;
  func_0x000107c61428(param_1 + _DAT_112eec068,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae11c0; end: 102ae11cb; -[SCInLensCreationApiMainCameraPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae11c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec068;
  func_0x000107c61428(param_1 + _DAT_112eec068,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae11cc; end: 102ae11d7; -[SCInLensCreationApiMainCameraPluginEntryPoint inLensCreationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae11cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec070;
  func_0x000107c61428(param_1 + _DAT_112eec070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae11d8; end: 102ae11e3; -[SCInLensCreationApiMainCameraPluginEntryPoint setInLensCreationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae11d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec070;
  func_0x000107c61428(param_1 + _DAT_112eec070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae11e4; end: 102ae11ef; -[SCInLensCreationApiMainCameraPluginEntryPoint carouselLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae11e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec078;
  func_0x000107c61428(param_1 + _DAT_112eec078,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae11f0; end: 102ae11fb; -[SCInLensCreationApiMainCameraPluginEntryPoint setCarouselLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae11f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec078;
  func_0x000107c61428(param_1 + _DAT_112eec078,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae11fc; end: 102ae1207; -[SCInLensCreationApiMainCameraPluginEntryPoint previewConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae11fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec080;
  func_0x000107c61428(param_1 + _DAT_112eec080,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae1208; end: 102ae1213; -[SCInLensCreationApiMainCameraPluginEntryPoint setPreviewConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae1208(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec080;
  func_0x000107c61428(param_1 + _DAT_112eec080,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae1214; end: 102ae121f; -[SCInLensCreationApiMainCameraPluginEntryPoint inLensCreationLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae1214(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec088;
  func_0x000107c61428(param_1 + _DAT_112eec088,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae1220; end: 102ae122b; -[SCInLensCreationApiMainCameraPluginEntryPoint setInLensCreationLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae1220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec088;
  func_0x000107c61428(param_1 + _DAT_112eec088,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae122c; end: 102ae1237; -[SCInLensCreationApiMainCameraPluginEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae122c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec090;
  func_0x000107c61428(param_1 + _DAT_112eec090,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae1238; end: 102ae127b;  */

void FUN_102ae1238(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102ae127c; end: 102ae1287; -[SCInLensCreationApiMainCameraPluginEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae127c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec090;
  func_0x000107c61428(param_1 + _DAT_112eec090,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae1288; end: 102ae12db;  */

void FUN_102ae1288(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae12dc; end: 102ae1a87;  */

/* WARNING: Possible PIC construction at 0x000102ae153c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae154c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae155c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae17c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae185c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae190c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae191c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae1940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae1950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae1960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae1970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae1980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae19e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae19f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae19c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae19d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ae179c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ae19d4) */
/* WARNING: Removing unreachable block (ram,0x000102ae19c4) */
/* WARNING: Removing unreachable block (ram,0x000102ae19f4) */
/* WARNING: Removing unreachable block (ram,0x000102ae19e4) */
/* WARNING: Removing unreachable block (ram,0x000102ae1984) */
/* WARNING: Removing unreachable block (ram,0x000102ae1974) */
/* WARNING: Removing unreachable block (ram,0x000102ae1964) */
/* WARNING: Removing unreachable block (ram,0x000102ae1954) */
/* WARNING: Removing unreachable block (ram,0x000102ae1944) */
/* WARNING: Removing unreachable block (ram,0x000102ae1920) */
/* WARNING: Removing unreachable block (ram,0x000102ae1910) */
/* WARNING: Removing unreachable block (ram,0x000102ae1860) */
/* WARNING: Removing unreachable block (ram,0x000102ae1a70) */
/* WARNING: Removing unreachable block (ram,0x000102ae1890) */
/* WARNING: Removing unreachable block (ram,0x000102ae17c4) */
/* WARNING: Removing unreachable block (ram,0x000102ae1a20) */
/* WARNING: Removing unreachable block (ram,0x000102ae17fc) */
/* WARNING: Removing unreachable block (ram,0x000102ae1a48) */
/* WARNING: Removing unreachable block (ram,0x000102ae1840) */
/* WARNING: Removing unreachable block (ram,0x000102ae1560) */
/* WARNING: Removing unreachable block (ram,0x000102ae1638) */
/* WARNING: Removing unreachable block (ram,0x000102ae1644) */
/* WARNING: Removing unreachable block (ram,0x000102ae1648) */
/* WARNING: Removing unreachable block (ram,0x000102ae1654) */
/* WARNING: Removing unreachable block (ram,0x000102ae1658) */
/* WARNING: Removing unreachable block (ram,0x000102ae1660) */
/* WARNING: Removing unreachable block (ram,0x000102ae1664) */
/* WARNING: Removing unreachable block (ram,0x000102ae166c) */
/* WARNING: Removing unreachable block (ram,0x000102ae1670) */
/* WARNING: Removing unreachable block (ram,0x000102ae167c) */
/* WARNING: Removing unreachable block (ram,0x000102ae1680) */
/* WARNING: Removing unreachable block (ram,0x000102ae1688) */
/* WARNING: Removing unreachable block (ram,0x000102ae168c) */
/* WARNING: Removing unreachable block (ram,0x000102ae1694) */
/* WARNING: Removing unreachable block (ram,0x000102ae1698) */
/* WARNING: Removing unreachable block (ram,0x000102ae16cc) */
/* WARNING: Removing unreachable block (ram,0x000102ae16b0) */
/* WARNING: Removing unreachable block (ram,0x000102ae16c8) */
/* WARNING: Removing unreachable block (ram,0x000102ae17a8) */
/* WARNING: Removing unreachable block (ram,0x000102ae1550) */
/* WARNING: Removing unreachable block (ram,0x000102ae1540) */
/* WARNING: Removing unreachable block (ram,0x000102ae17a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae12dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c452a8();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f6a4();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    else {
      lVar4 = unaff_x20;
      func_0x000107c4f0d8();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c452a0();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c4c144();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_102ad8ffc();
            func_0x000107c613fc();
            uVar9 = *(undefined8 *)(lVar4 + _DAT_112fcab50);
            puVar6 = &UNK_110596f48;
            func_0x000107c613fc(&UNK_110596f48,0x18,7);
            *(long *)(puVar6 + 0x10) = lVar3;
            func_0x0001000285a8(0x112eeb910,&UNK_10db199a0);
            func_0x000107c613fc();
            func_0x000107c6157c(uVar9);
            func_0x000107c61174();
            pcVar7 = FUN_102ae1a88;
            func_0x0001000bdd8c(FUN_102ae1a88,puVar6);
            func_0x000107c4529c();
            func_0x000107c61180();
            func_0x000107c3dff0();
            func_0x000107c61180();
            puVar6 = &UNK_110596f70;
            func_0x000107c613fc(&UNK_110596f70,0x38,7);
            *(undefined8 *)(puVar6 + 0x10) = uVar9;
            *(code **)(puVar6 + 0x18) = pcVar7;
            *(long *)(puVar6 + 0x20) = lVar5;
            *(long *)(puVar6 + 0x28) = lVar2;
            *(long *)(puVar6 + 0x30) = lVar1;
            func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
            func_0x000107c613fc();
            func_0x000107c6157c(uVar9);
            func_0x000107c6157c(pcVar7);
            func_0x000107c61174(lVar5);
            func_0x000107c61174();
            func_0x000107c61174(lVar1);
            func_0x0001000bdd8c(0x102ae1a90,puVar6);
            uVar8 = 0x112d4adc0;
            func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
            func_0x0001000cb480(0x102ad8f80,0,uVar8);
            func_0x0001003a5b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_release_11034f4c0)(uVar9);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 102ae1a88; end: 102ae1a9f;  */

void FUN_102ae1a88(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4af30();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_102ad77a4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110596988;
  *param_1 = lVar2;
  return;
}



/* Entry: 102ae1aa0; end: 102ae1ac7; -[SCInLensCreationApiMainCameraPluginEntryPoint begin] */

void FUN_102ae1aa0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ae12dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ae1ac8; end: 102ae1b0b; -[SCInLensCreationApiMainCameraPluginEntryPoint end] */

void FUN_102ae1ac8(undefined8 param_1)

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



/* Entry: 102ae1b0c; end: 102ae1e5b;  */

void FUN_102ae1b0c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0f167e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f0e9820,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0f167c0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000016,0x800000010f0e9840,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000015;
            if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef0f167a0)) ||
               (func_0x000107c605b8(0xd000000000000015,0x800000010f0e9860,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c57780();
            }
            else {
              uVar2 = 0xd00000000000001d;
              if (((param_2 == -0x2fffffffffffffe3) && (param_3 == -0x7ffffffef0f16780)) ||
                 (func_0x000107c605b8(0xd00000000000001d,0x800000010f0e9880,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c55338();
              }
              else {
                uVar2 = 0x656d61436e69616d;
                if (((param_2 != 0x656d61436e69616d) || (param_3 != -0x109a8f909cac9e8e)) &&
                   (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "SCInLensCreationApiPlugin/SCInLensCreationApiMainCameraPluginEntryPoint.swift"
                                      ,0x4d,2,0x3b,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ae1e5c);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c561a0();
              }
            }
            goto LAB_102ae1b9c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53250();
        goto LAB_102ae1b9c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5533c();
  }
LAB_102ae1b9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102ae1e5c; end: 102ae1f07; -[SCInLensCreationApiMainCameraPluginEntryPoint setValue:forIvarName:] */

void FUN_102ae1e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102ae1b0c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102ae1f08; end: 102ae1fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae1f08(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112eec068,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec070,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec078,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec080,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec088,0);
  func_0x000107c61614(unaff_x20 + _DAT_112eec090,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eec098) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ae1fcc; end: 102ae1feb; -[SCInLensCreationApiMainCameraPluginEntryPoint init] */

void FUN_102ae1fcc(void)

{
  FUN_102ae1f08();
  return;
}



/* Entry: 102ae1fec; end: 102ae201f;  */

void FUN_102ae1fec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ae2020; end: 102ae20a7; -[SCInLensCreationApiMainCameraPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2020(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112eec068);
  func_0x000107c61610(param_1 + _DAT_112eec070);
  func_0x000107c61610(param_1 + _DAT_112eec078);
  func_0x000107c61610(param_1 + _DAT_112eec080);
  func_0x000107c61610(param_1 + _DAT_112eec088);
  func_0x000107c61610(param_1 + _DAT_112eec090);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eec098));
  return;
}



/* Entry: 102ae20a8; end: 102ae20c7;  */

void FUN_102ae20a8(void)

{
  func_0x000107c61168(&PTR_PTR_112886b30);
  return;
}



/* Entry: 102ae20c8; end: 102ae20d3; -[SCInLensCreationApiPostCapturePluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae20c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec0c8;
  func_0x000107c61428(param_1 + _DAT_112eec0c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae20d4; end: 102ae20df; -[SCInLensCreationApiPostCapturePluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae20d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec0c8;
  func_0x000107c61428(param_1 + _DAT_112eec0c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae20e0; end: 102ae20eb; -[SCInLensCreationApiPostCapturePluginEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae20e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec0d0;
  func_0x000107c61428(param_1 + _DAT_112eec0d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae20ec; end: 102ae20f7; -[SCInLensCreationApiPostCapturePluginEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae20ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec0d0;
  func_0x000107c61428(param_1 + _DAT_112eec0d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae20f8; end: 102ae2103; -[SCInLensCreationApiPostCapturePluginEntryPoint viewfinderScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae20f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec0d8;
  func_0x000107c61428(param_1 + _DAT_112eec0d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae2104; end: 102ae210f; -[SCInLensCreationApiPostCapturePluginEntryPoint setViewfinderScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2104(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec0d8;
  func_0x000107c61428(param_1 + _DAT_112eec0d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae2110; end: 102ae211b; -[SCInLensCreationApiPostCapturePluginEntryPoint inLensCreationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2110(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec0e0;
  func_0x000107c61428(param_1 + _DAT_112eec0e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae211c; end: 102ae2127; -[SCInLensCreationApiPostCapturePluginEntryPoint setInLensCreationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae211c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec0e0;
  func_0x000107c61428(param_1 + _DAT_112eec0e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae2128; end: 102ae2133; -[SCInLensCreationApiPostCapturePluginEntryPoint previewConfigServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2128(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec0e8;
  func_0x000107c61428(param_1 + _DAT_112eec0e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae2134; end: 102ae213f; -[SCInLensCreationApiPostCapturePluginEntryPoint setPreviewConfigServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2134(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec0e8;
  func_0x000107c61428(param_1 + _DAT_112eec0e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae2140; end: 102ae214b; -[SCInLensCreationApiPostCapturePluginEntryPoint inLensCreationLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2140(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec0f0;
  func_0x000107c61428(param_1 + _DAT_112eec0f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae214c; end: 102ae2157; -[SCInLensCreationApiPostCapturePluginEntryPoint setInLensCreationLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae214c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec0f0;
  func_0x000107c61428(param_1 + _DAT_112eec0f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae2158; end: 102ae2163; -[SCInLensCreationApiPostCapturePluginEntryPoint previewLazyServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2158(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec0f8;
  func_0x000107c61428(param_1 + _DAT_112eec0f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae2164; end: 102ae216f; -[SCInLensCreationApiPostCapturePluginEntryPoint setPreviewLazyServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eec0f8;
  func_0x000107c61428(param_1 + _DAT_112eec0f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102ae2170; end: 102ae217b; -[SCInLensCreationApiPostCapturePluginEntryPoint snapEditorCTLensToolSessionProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ae2170(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eec100;
  func_0x000107c61428(param_1 + _DAT_112eec100,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102ae217c; end: 102ae21bf;  */

void FUN_102ae217c(long param_1,undefined8 param_2,long *param_3)

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


