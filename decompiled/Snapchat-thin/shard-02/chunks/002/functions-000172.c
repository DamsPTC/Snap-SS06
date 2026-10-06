/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101aca59c; end: 101aca5ab; -[_TtC30RemoteNotificationRegistration21EncryptionInfoFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aca59c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df9570));
  return;
}



/* Entry: 101aca5ac; end: 101aca79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aca5ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar3 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar4 = PTR_PTR_1126a8910;
  func_0x000107c610f8();
  func_0x000107c462c0();
  func_0x000107c61170(lVar3);
  if (puVar4 != (undefined *)0x0) {
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aca670);
  (*pcVar1)();
}



/* Entry: 101aca7a0; end: 101aca7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aca7a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar3 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar4 = PTR_PTR_1126a8910;
  func_0x000107c610f8();
  func_0x000107c462c0();
  func_0x000107c61170(lVar3);
  if (puVar4 != (undefined *)0x0) {
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aca670);
  (*pcVar1)();
}



/* Entry: 101aca7c8; end: 101aca833;  */

undefined8 FUN_101aca7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x00010096315c(param_1,param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 101aca834; end: 101aca84b;  */

void FUN_101aca834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aca84c,0,0);
  return;
}



/* Entry: 101aca84c; end: 101aca8c3;  */

void FUN_101aca84c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000100083b20(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101aca8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101aca8c4; end: 101aca8f7;  */

void FUN_101aca8c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aca8f8; end: 101aca92f;  */

undefined1  [16] FUN_101aca8f8(void)

{
  return ZEXT816(0);
}



/* Entry: 101aca930; end: 101aca993;  */

void FUN_101aca930(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101aca994;
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aca84c,0,0);
  return;
}



/* Entry: 101aca994; end: 101aca9cf;  */

void FUN_101aca994(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101aca9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101aca9d0; end: 101acaa4f;  */

long FUN_101aca9d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000107c613fc();
  func_0x000100083b20(&uStack_38);
  uVar1 = 0;
  func_0x0001009d9654(0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x0001009d9674(uStack_38,uVar1);
  func_0x000107c61574(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return unaff_x20;
}



/* Entry: 101acaa50; end: 101acaa73;  */

void FUN_101acaa50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101acaa74; end: 101acaaab;  */

undefined1  [16] FUN_101acaa74(void)

{
  return ZEXT816(0);
}



/* Entry: 101acaaac; end: 101acab4f;  */

void FUN_101acaaac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001002af4b0();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_101acabc8(param_2,param_3,param_4,param_5,param_6);
  *param_1 = param_2;
  return;
}



/* Entry: 101acab50; end: 101acab5f;  */

void FUN_101acab50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001002af4b0();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  FUN_101acabc8(uVar4,uVar2,uVar1,uVar3,uVar5);
  *param_1 = uVar4;
  return;
}



/* Entry: 101acab60; end: 101acabc7;  */

void FUN_101acab60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c613fc();
  FUN_101acabc8(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 101acabc8; end: 101acb687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_101acabc8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [200];
  long alStack_70 [2];
  
  lStack_150 = *unaff_x20;
  lVar2 = 0;
  uVar14 = param_2;
  func_0x000107c5f804();
  lStack_160 = *(long *)(lVar2 + -8);
  lStack_158 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_160 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  unaff_x20[6] = puVar3;
  func_0x000100083b20(alStack_70);
  lVar18 = alStack_70[0];
  uVar17 = *(undefined8 *)(alStack_70[0] + _DAT_113091b70);
  func_0x000107c615f0(uVar17);
  func_0x000107c61170(lVar18);
  unaff_x20[2] = uVar17;
  func_0x000100083b20(alStack_70);
  lVar18 = alStack_70[0];
  uVar4 = *(undefined8 *)(alStack_70[0] + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lVar18);
  uVar17 = uVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = uVar17;
  func_0x000107c5faec();
  func_0x000107c61170(uVar17);
  func_0x0001008fc608();
  if (uVar14 >> 0x3c < 0xf) {
    puVar3 = PTR_PTR_1126ba6c8;
    uStack_198 = param_4;
    uStack_188 = param_1;
    uStack_180 = param_2;
    uStack_178 = param_3;
    func_0x000107c610f8();
    func_0x00010006c00c(uVar4,uVar14);
    uVar17 = uVar4;
    func_0x000107c5ee20(uVar4,uVar14);
    func_0x000107c46d34();
    puStack_170 = puVar3;
    func_0x000107c61170(uVar17);
    uStack_1a8 = uVar4;
    uStack_1a0 = uVar14;
    func_0x0001000b44c0(uVar4,uVar14);
    lVar18 = 0x112da0580;
    func_0x0001000285a8(0x112da0580,&UNK_10da23000);
    puVar15 = auStack_138;
    func_0x000107c61534();
    *(undefined8 *)(lVar18 + 0x18) = 0xe;
    *(undefined8 *)(lVar18 + 0x10) = 7;
    uVar17 = 4;
    func_0x000107c5fe40();
    *(undefined8 *)(lVar18 + 0x20) = uVar17;
    *(undefined8 *)(lVar18 + 0x28) = 0x49544355444f5250;
    *(undefined8 *)(lVar18 + 0x30) = 0xea00000000004e4f;
    uVar17 = 5;
    func_0x000107c5fe40();
    *(undefined8 *)(lVar18 + 0x38) = uVar17;
    *(undefined8 *)(lVar18 + 0x40) = 0;
    *(undefined8 *)(lVar18 + 0x48) = 0xe000000000000000;
    uVar4 = 6;
    func_0x000107c5fe40();
    *(undefined8 *)(lVar18 + 0x50) = uVar4;
    func_0x000106c4013c();
    func_0x000107c61180();
    uVar17 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    *(undefined8 *)(lVar18 + 0x58) = uVar17;
    *(undefined1 **)(lVar18 + 0x60) = puVar15;
    uVar17 = 7;
    func_0x000107c5fe40();
    *(undefined8 *)(lVar18 + 0x68) = uVar17;
    *(undefined8 *)(lVar18 + 0x70) = 0;
    *(undefined8 *)(lVar18 + 0x78) = 0xe000000000000000;
    uVar17 = 8;
    func_0x000107c5fe40();
    *(undefined8 *)(lVar18 + 0x80) = uVar17;
    *(undefined8 *)(lVar18 + 0x88) = 0x65736c6166;
    *(undefined8 *)(lVar18 + 0x90) = 0xe500000000000000;
    uVar17 = 9;
    func_0x000107c5fe40();
    *(undefined8 *)(lVar18 + 0x98) = uVar17;
    *(undefined8 *)(lVar18 + 0xa0) = 0x65736c6166;
    *(undefined8 *)(lVar18 + 0xa8) = 0xe500000000000000;
    uVar17 = 0x11;
    func_0x000107c5fe40();
    *(undefined8 *)(lVar18 + 0xb0) = uVar17;
    *(undefined8 *)(lVar18 + 0xb8) = 0x65736c6166;
    *(undefined8 *)(lVar18 + 0xc0) = 0xe500000000000000;
    lVar5 = lVar18;
    func_0x000100121358(lVar18);
    func_0x000107c61588(lVar18);
    uVar17 = 0x112da0588;
    func_0x0001000285a8(0x112da0588,&UNK_10d9432f0);
    func_0x000107c61408((undefined8 *)(lVar18 + 0x20),7,uVar17);
    puVar3 = PTR_PTR_1126c0858;
    func_0x000107c610f8();
    lVar6 = 0;
    func_0x0001002ed07c();
    lVar18 = lVar6;
    func_0x000100120cb0();
    lVar7 = lVar5;
    func_0x000107c5f9dc(lVar5,lVar6,PTR___sSSN_11034da80,lVar18);
    func_0x000107c6142c(lVar5);
    func_0x000107c48e98();
    func_0x000107c61170(lVar7);
    puVar8 = PTR_PTR_1126b8238;
    func_0x000107c61168();
    func_0x000107c5d8e4();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101acb688);
      (*pcVar1)();
    }
    puVar11 = PTR_PTR_1126b2930;
    func_0x000107c61168(PTR_PTR_1126b2930);
    func_0x000107c40efc();
    func_0x000107c61180();
    puVar16 = puVar11;
    func_0x000107c446b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar11 = puVar16;
    func_0x000107c5faec(puVar16);
    lVar18 = lVar6;
    func_0x000107c61170(puVar16);
    puVar16 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c61168();
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar9 = puVar16;
    func_0x000107c3ee08();
    func_0x000107c61180();
    func_0x000107c61170(puVar16);
    if (puVar9 == (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      lVar18 = 0;
    }
    else {
      puVar16 = puVar9;
      func_0x000107c5faec(puVar9);
      func_0x000107c61170(puVar9);
    }
    func_0x000107c61174();
    puStack_168 = puVar3;
    func_0x000107c61174();
    func_0x000107c5fadc(puVar11,lVar6);
    func_0x000107c6142c(lVar6);
    uStack_190 = param_5;
    if (lVar18 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      func_0x000107c5fadc(puVar16,lVar18);
      func_0x000107c6142c(lVar18);
    }
    uVar17 = uStack_188;
    puVar10 = PTR_PTR_1126c0850;
    func_0x000107c610f8(PTR_PTR_1126c0850);
    auStack_1c0[lVar2] = 0;
    puVar9 = puStack_168;
    puVar3 = puStack_170;
    func_0x000107c49258();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar16);
    lVar5 = lStack_158;
    lVar18 = lStack_160;
    (**(code **)(lStack_160 + 0x68))
              (auStack_1b0 + lVar2,
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lStack_158);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f8(PTR_PTR_1126ae790);
    uVar4 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010eff6ef0);
    func_0x000107c5f800();
    func_0x000107c470d0(puVar3);
    func_0x000107c61170(uVar4);
    (**(code **)(lVar18 + 8))(auStack_1b0 + lVar2,lVar5);
    puVar8 = PTR_PTR_1126b4ec0;
    func_0x000107c610f8(PTR_PTR_1126b4ec0);
    func_0x000107c47de8();
    puVar11 = PTR_PTR_1126c0798;
    func_0x000107c61168();
    func_0x000107c408ec();
    func_0x000107c61180();
    unaff_x20[4] = puVar11;
    func_0x000107c3dd9c();
    func_0x000107c61180();
    unaff_x20[5] = puVar11;
    puVar11 = (undefined *)unaff_x20[4];
    func_0x000107c3dda0();
    func_0x000107c61180();
    lVar2 = unaff_x20[5];
    if (lVar2 == 0) {
      func_0x0001000b44c0(uStack_1a8,uStack_1a0);
      func_0x000107c61574(uVar17);
      func_0x000107c61574(uStack_180);
      func_0x000107c61574(uStack_178);
      func_0x000107c61574(uStack_198);
      func_0x000107c61574(uStack_190);
      func_0x000107c61170(puVar10);
      puVar10 = puVar8;
    }
    else {
      if (puVar11 != (undefined *)0x0) {
        puVar16 = PTR_PTR_1126c0848;
        func_0x000107c61168();
        func_0x000107c61174();
        lStack_150 = lVar2;
        func_0x000107c61174(puVar8);
        func_0x000107c61174(puVar11);
        func_0x000100083b20(alStack_70);
        lVar2 = alStack_70[0];
        func_0x000100083b20(&uStack_140);
        func_0x000107c61174(puVar11);
        func_0x000100083b20(&uStack_148);
        uVar17 = uStack_148;
        func_0x000107c3e420(uStack_148);
        func_0x000107c61180();
        func_0x000107c61170(uStack_148);
        uVar4 = uVar17;
        func_0x000107c5c734(uVar17);
        func_0x000107c61180();
        func_0x000107c61170(uVar17);
        func_0x000107c4090c();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(uStack_140);
        func_0x000107c61170(puVar11);
        func_0x000107c615e8(uVar4);
        uVar4 = uStack_188;
        uVar17 = uStack_190;
        unaff_x20[3] = puVar16;
        if (puVar16 == (undefined *)0x0) {
          func_0x000107c61170(puStack_170);
          func_0x000107c61170(puStack_168);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(lStack_150);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar11);
          func_0x000107c61574(uStack_188);
          func_0x000107c61574(uStack_180);
          func_0x000107c61574(uStack_178);
          func_0x000107c61574(uStack_198);
          func_0x000107c61574(uStack_190);
          func_0x0001000b44c0(uStack_1a8,uStack_1a0);
          func_0x000107c61574();
          return (undefined8 *)0x0;
        }
        func_0x000100083b20(alStack_70);
        lVar2 = alStack_70[0];
        uVar12 = *(undefined8 *)(alStack_70[0] + _DAT_113083f80);
        func_0x000107c61174();
        func_0x000107c61170(lVar2);
        uVar13 = uVar12;
        func_0x000107c49e24();
        func_0x000107c61170(uVar12);
        lVar2 = lStack_150;
        if ((int)uVar13 == 0) {
          func_0x000100083b20(alStack_70);
          uVar12 = *(undefined8 *)(alStack_70[0] + _DAT_113083f80);
          func_0x000107c61174();
          func_0x000107c61170(alStack_70[0]);
          uVar13 = uVar12;
          func_0x000107c49e14();
          func_0x000107c61170(uVar12);
          lVar2 = lStack_150;
          if ((int)uVar13 == 0) {
            func_0x000107c4db70(lStack_150);
          }
          else {
            func_0x000107c41c2c(lStack_150);
          }
        }
        else {
          func_0x000107c41ca4(lStack_150);
        }
        FUN_101acb688();
        func_0x000107c61170(puStack_170);
        func_0x000107c61170(puStack_168);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar11);
        func_0x0001000b44c0(uStack_1a8,uStack_1a0);
        func_0x000107c61574(uVar4);
        func_0x000107c61574(uStack_180);
        func_0x000107c61574(uStack_178);
        func_0x000107c61574(uStack_198);
        func_0x000107c61574(uVar17);
        return unaff_x20;
      }
      func_0x000107c61174(lVar2);
      func_0x0001000b44c0(uStack_1a8,uStack_1a0);
      func_0x000107c61170(lVar2);
      func_0x000107c61574(uVar17);
      func_0x000107c61574(uStack_180);
      func_0x000107c61574(uStack_178);
      func_0x000107c61574(uStack_198);
      func_0x000107c61574(uStack_190);
      puVar11 = puVar8;
    }
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puStack_168);
    func_0x000107c61170(puStack_170);
    func_0x000107c615e8(unaff_x20[2]);
    func_0x000107c61170(unaff_x20[4]);
    func_0x000107c61170(unaff_x20[5]);
  }
  else {
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c615e8(unaff_x20[2]);
  }
  func_0x000107c61170(unaff_x20[6]);
  func_0x000107c61464();
  return (undefined8 *)0x0;
}



/* Entry: 101acb688; end: 101acb837;  */

void FUN_101acb688(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar7 = &puStack_90;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = uVar8;
  func_0x000107c5e39c(uVar8);
  func_0x000107c61180();
  puVar6 = &UNK_11043f340;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_11043f340,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x101acb974;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c1de60;
  puStack_78 = &UNK_11043f358;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c419f0(uVar8);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_11043f340,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  uStack_70 = 0x101acb998;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c1de60;
  puStack_78 = &UNK_11043f380;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar2 = uVar8;
  func_0x000107c5c320(uVar8);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101acb838; end: 101acb91f;  */

void FUN_101acb838(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c3de6c();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101acb920; end: 101acb963;  */

void FUN_101acb920(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101acb964; end: 101acb9a7;  */

undefined1  [16] FUN_101acb964(void)

{
  return ZEXT816(0x11043f320);
}



/* Entry: 101acb9a8; end: 101acba4f;  */

void FUN_101acb9a8(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001002ad114();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar1;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  *(undefined1 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined8 *)(param_2 + 0x18) = uStack_48;
  *param_1 = param_2;
  func_0x000107c6157c(param_3);
  return;
}



/* Entry: 101acba50; end: 101acba57;  */

void FUN_101acba50(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_48);
  func_0x0001002ad114();
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar3;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  *(undefined1 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uStack_48;
  *param_1 = lVar2;
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 101acba58; end: 101acbad7;  */

long FUN_101acba58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 101acbad8; end: 101acbd1f;  */

/* WARNING: Removing unreachable block (ram,0x000101acbb3c) */
/* WARNING: Removing unreachable block (ram,0x000101acbcec) */
/* WARNING: Removing unreachable block (ram,0x000101acbb44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101acbad8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_a0 [16];
  
  func_0x000100087bd4(0x101acc134,auStack_a0,PTR___sytN_11034f1b0 + 8);
  uVar1 = 0x112dc6628;
  func_0x0001000285a8(0x112dc6628,&UNK_10d986590);
  func_0x000101acc150();
  puVar2 = &UNK_11043f738;
  func_0x000107c613f8(&UNK_11043f738,uVar1,0,0);
  puVar3 = puVar2;
  func_0x00010488904c();
  func_0x000107c614ac(puVar2);
  return puVar3;
}



/* Entry: 101acbd20; end: 101acbe73;  */

void FUN_101acbd20(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 auStack_78 [2];
  undefined1 auStack_68 [24];
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  lVar1 = param_1[2];
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c4dbfc(param_3);
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c6157c(uVar6);
    func_0x000100087bd4(FUN_101acc104,param_2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar6);
    if ((char)lVar1 == '\x01') {
      func_0x000107c4dbfc(param_3);
    }
    else {
      func_0x000107c5ee20(lVar3,lVar4);
      lVar4 = lVar3;
      func_0x000107c5cb08();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101acbe74);
        (*pcVar2)();
      }
      puVar5 = PTR_PTR_1126c07b8;
      func_0x000107c610f8(PTR_PTR_1126c07b8);
      func_0x000107c48dcc();
      func_0x000107c61170(lVar4);
      func_0x000100083b20(auStack_78);
      func_0x000107c4db7c(param_3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(auStack_78[0]);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101acbe74; end: 101acbf0b;  */

void FUN_101acbe74(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *param_2 = 1;
    *(undefined1 *)(param_1 + 0x30) = 1;
    func_0x0001000285a8(0x112dc93d0,&UNK_10d9ca9c0);
    func_0x000107c613fc();
    uVar1 = 1;
    func_0x00010095c380();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    func_0x000107c61574(uVar2);
  }
  uVar1 = *param_3;
  *param_3 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101acbf0c; end: 101acbfaf;  */

void FUN_101acbf0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_28 = 0;
  uStack_38 = param_1;
  uStack_30 = param_2;
  func_0x00010006c00c();
  func_0x000100b60be8(&uStack_38);
  func_0x000101acc20c(uStack_38,uStack_30,uStack_28);
  return;
}



/* Entry: 101acbfb0; end: 101acbffb;  */

void FUN_101acbfb0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101acbffc; end: 101acc03f;  */

void FUN_101acbffc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101acc040; end: 101acc06b;  */

void FUN_101acc040(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001002ac474();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 101acc06c; end: 101acc06f; -[_TtC30RemoteNotificationRegistration23UploadAPNSTokenCallback onComplete:] */

void FUN_101acc06c(void)

{
  return;
}



/* Entry: 101acc070; end: 101acc073; -[_TtC30RemoteNotificationRegistration23UploadAPNSTokenCallback onError:appEventType:] */

void FUN_101acc070(void)

{
  return;
}



/* Entry: 101acc074; end: 101acc0af; -[_TtC30RemoteNotificationRegistration23UploadAPNSTokenCallback init] */

void FUN_101acc074(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101acc0b0; end: 101acc0e3;  */

void FUN_101acc0b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101acc0e4; end: 101acc103;  */

undefined1  [16] FUN_101acc0e4(void)

{
  return ZEXT816(0x11043f3e0);
}



/* Entry: 101acc104; end: 101acc133;  */

void FUN_101acc104(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101acc134; end: 101acc18f;  */

void FUN_101acc134(void)

{
  long unaff_x20;
  
  FUN_101acbe74(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101acc190; end: 101acc1c7;  */

void FUN_101acc190(void)

{
  func_0x00010484eee8(0x101acc1fc);
  return;
}



/* Entry: 101acc1c8; end: 101acc227;  */

void FUN_101acc1c8(long param_1,long param_2)

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



/* Entry: 101acc228; end: 101acc283;  */

/* WARNING: Possible PIC construction at 0x000101acc264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101acc268) */

void FUN_101acc228(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101acc284; end: 101acc28f;  */

/* WARNING: Possible PIC construction at 0x000101acc264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101acc268) */

void FUN_101acc284(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101acc290; end: 101acc3af;  */

void FUN_101acc290(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  if ((char)param_1[2] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0e3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_onError__1126169d8,5);
    return;
  }
  lVar2 = *param_1;
  func_0x000107c5ee20(lVar2,param_1[1]);
  lVar3 = lVar2;
  func_0x000107c5cb08();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c07b8;
    func_0x000107c610f8(PTR_PTR_1126c07b8);
    func_0x000107c48dcc();
    func_0x000107c61170(lVar3);
    func_0x000100083b20(&uStack_38);
    func_0x000107c4db7c(param_2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uStack_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101acc364);
  (*pcVar1)();
}



/* Entry: 101acc3b0; end: 101acc3db;  */

void FUN_101acc3b0(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001002ac4d4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 101acc3dc; end: 101acc3df; -[_TtC30RemoteNotificationRegistration23UploadLPSETokenCallback onComplete:] */

void FUN_101acc3dc(void)

{
  return;
}



/* Entry: 101acc3e0; end: 101acc3e3; -[_TtC30RemoteNotificationRegistration23UploadLPSETokenCallback onError:appEventType:] */

void FUN_101acc3e0(void)

{
  return;
}



/* Entry: 101acc3e4; end: 101acc41f; -[_TtC30RemoteNotificationRegistration23UploadLPSETokenCallback init] */

void FUN_101acc3e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101acc420; end: 101acc453;  */

void FUN_101acc420(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101acc454; end: 101acc463;  */

undefined1  [16] FUN_101acc454(void)

{
  return ZEXT816(0x11043f498);
}



/* Entry: 101acc464; end: 101acc4c7;  */

long FUN_101acc464(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101acc4c8; end: 101acc5a7;  */

undefined8 * FUN_101acc4c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 101acc5a8; end: 101acc5fb;  */

undefined8 * FUN_101acc5a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101acc5fc; end: 101acc693;  */

int FUN_101acc5fc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101acc694; end: 101acc7d3;  */

undefined8 FUN_101acc694(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x0001000285a8(0x112dc93d0,&UNK_10d9ca9c0);
  func_0x000107c613fc();
  lVar2 = 1;
  func_0x00010095c380();
  func_0x000107c4d830(param_1);
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c435e4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uStack_50 = 0x101acc91c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101acc364;
  puStack_58 = &UNK_11043f578;
  lStack_48 = lVar2;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(lVar1);
  uVar4 = uVar5;
  func_0x000107c5c320(uVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar2);
  return uVar5;
}



/* Entry: 101acc7d4; end: 101acc90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acc7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = *(long *)(lStack_58 + _DAT_112e1f4d8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x000107c4dbfc(param_1);
  }
  else {
    lVar1 = lVar2;
    FUN_101acc694(lVar2,param_2);
    puVar3 = &UNK_11043f560;
    func_0x000107c613fc(&UNK_11043f560,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(undefined8 *)(puVar3 + 0x28) = param_4;
    *(undefined8 *)(puVar3 + 0x30) = param_5;
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    func_0x00010075a04c(0,1,FUN_101acc90c,puVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 101acc90c; end: 101acc94b;  */

void FUN_101acc90c(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((char)param_1[2] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0e3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_onError__1126169d8,5);
    return;
  }
  lVar3 = *param_1;
  func_0x000107c5ee20(lVar3,param_1[1],*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = lVar3;
  func_0x000107c5cb08();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126c07b8;
    func_0x000107c610f8(PTR_PTR_1126c07b8);
    func_0x000107c48dcc();
    func_0x000107c61170(lVar4);
    func_0x000100083b20(&uStack_38);
    func_0x000107c4db7c(uVar1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uStack_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101acc364);
  (*pcVar2)();
}



/* Entry: 101acc94c; end: 101acc9ab;  */

void FUN_101acc94c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uStack_38;
  param_1[1] = puVar1;
  param_1[2] = param_3;
  func_0x000107c6157c(param_3);
  return;
}



/* Entry: 101acc9ac; end: 101acc9b3;  */

void FUN_101acc9ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uStack_38;
  param_1[1] = puVar2;
  param_1[2] = uVar1;
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 101acc9b4; end: 101acca87;  */

void FUN_101acc9b4(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  if ((char)param_1[2] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010c0e3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_onError__1126169d8,5);
    return;
  }
  lVar2 = *param_1;
  func_0x000107c5ee20(lVar2,param_1[1]);
  lVar3 = lVar2;
  func_0x000107c5cb08();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126c07b8;
    func_0x000107c610f8(PTR_PTR_1126c07b8);
    func_0x000107c48dcc();
    func_0x000107c61170(lVar3);
    func_0x000100083b20(&uStack_38);
    func_0x000107c4db7c(param_2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uStack_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101acca88);
  (*pcVar1)();
}



/* Entry: 101acca88; end: 101accacb;  */

void FUN_101acca88(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000101acc150();
  puVar1 = &UNK_11043f738;
  func_0x000107c613f8(&UNK_11043f738,param_1,0,0);
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101accacc; end: 101accb17;  */

void FUN_101accacc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101accb18; end: 101accb43;  */

void FUN_101accb18(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001002ac534();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 101accb44; end: 101accb47; -[_TtC30RemoteNotificationRegistration23UploadVOIPTokenCallback onComplete:] */

void FUN_101accb44(void)

{
  return;
}



/* Entry: 101accb48; end: 101accb4b; -[_TtC30RemoteNotificationRegistration23UploadVOIPTokenCallback onError:appEventType:] */

void FUN_101accb48(void)

{
  return;
}



/* Entry: 101accb4c; end: 101accb87; -[_TtC30RemoteNotificationRegistration23UploadVOIPTokenCallback init] */

void FUN_101accb4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101accb88; end: 101accbbb;  */

void FUN_101accb88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101accbbc; end: 101accbcb;  */

undefined1  [16] FUN_101accbbc(void)

{
  return ZEXT816(0x11043f5d8);
}



/* Entry: 101accbcc; end: 101accbfb;  */

void FUN_101accbcc(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 101accbfc; end: 101acccbb;  */

undefined8 * FUN_101accbfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 101acccbc; end: 101accd07;  */

undefined8 * FUN_101acccbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101accd08; end: 101accd9f;  */

int FUN_101accd08(ulong *param_1,int param_2)

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



/* Entry: 101accda0; end: 101acced3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101accda0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  ppuVar4 = &puStack_70;
  func_0x0001000285a8(0x112dc93d0,&UNK_10d9ca9c0);
  func_0x000107c613fc();
  lVar2 = 1;
  func_0x00010095c380();
  uVar3 = *(undefined8 *)(param_1 + _DAT_113091ba0);
  func_0x000107c435e4(uVar3);
  func_0x000107c61180();
  pcStack_50 = FUN_101acced4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_101accacc;
  puStack_58 = &UNK_11043f690;
  lStack_48 = lVar2;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(lVar1);
  uVar5 = uVar3;
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar2);
  return uVar5;
}



/* Entry: 101acced4; end: 101accf0b;  */

void FUN_101acced4(void)

{
  func_0x0001048512a8(FUN_101accf28);
  return;
}



/* Entry: 101accf0c; end: 101accf27;  */

void FUN_101accf0c(long param_1,long param_2)

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



/* Entry: 101accf28; end: 101accf4b;  */

void FUN_101accf28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000100b60084(&uStack_20);
  return;
}



/* Entry: 101accf4c; end: 101acd04b;  */

void FUN_101accf4c(void)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x000101acc150();
  puVar1 = &UNK_11043f738;
  func_0x000107c613f8(&UNK_11043f738,unaff_x20,0,0);
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101acd04c; end: 101acd08b;  */

void FUN_101acd04c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df99b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9cab5c;
  func_0x000107c61520(&UNK_10d9cab5c,&UNK_11043f738);
  puRam0000000112df99b8 = puVar1;
  return;
}



/* Entry: 101acd08c; end: 101acd093;  */

undefined8 FUN_101acd08c(void)

{
  return 1;
}



/* Entry: 101acd094; end: 101acd133;  */

void FUN_101acd094(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 101acd134; end: 101acd143;  */

void FUN_101acd134(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101acd144; end: 101acd1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acd144(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  func_0x0001002af390();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112df99c8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112df99d0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112df99d8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101acd1e8; end: 101acd1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acd1e8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  func_0x0001002af390();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112df99c8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112df99d0) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112df99d8) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 101acd1f4; end: 101acd267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acd1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df99c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112df99d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112df99d8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101acd268; end: 101acd2c7; -[_TtC30RemoteNotificationRegistration24NotificationTokenFetcher fetchToken:appEventType:callback:] */

/* WARNING: Possible PIC construction at 0x000101acd2b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101acd2b4) */

void FUN_101acd268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101acd370(param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101acd2c8; end: 101acd327; -[_TtC30RemoteNotificationRegistration24NotificationTokenFetcher init] */

void FUN_101acd2c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RemoteNotificationRegistration.NotificationTokenFetcher",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101acd2f4);
  (*pcVar1)();
}



/* Entry: 101acd328; end: 101acd36f; -[_TtC30RemoteNotificationRegistration24NotificationTokenFetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101acd344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101acd348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acd328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df99c8));
  return;
}



/* Entry: 101acd370; end: 101acd5f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acd370(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    if (param_1 == 3) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112df99d0);
      func_0x000107c61174(param_2);
      func_0x000107c6157c(uVar5);
      func_0x000100083b20(&uStack_60);
      func_0x000107c61574(uVar5);
      FUN_101acc7d4(param_2,uStack_60,uStack_58,uStack_50,uStack_48);
      func_0x000107c61574(uStack_48);
      func_0x000107c61574(uStack_50);
      func_0x000107c61574(uStack_58);
      func_0x000107c61170(uStack_60);
      func_0x000107c61170(param_2);
    }
    else {
      if (param_1 == 1) {
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112df99d8);
        func_0x000107c61174();
        func_0x000107c6157c(uVar5);
        func_0x000100083b20(&uStack_60);
        func_0x000107c61574(uVar5);
        uVar5 = uStack_60;
        FUN_101accda0(uStack_60,uStack_58);
        puVar2 = &UNK_11043f800;
        func_0x000107c613fc(&UNK_11043f800,0x30,7);
        *(long *)(puVar2 + 0x10) = param_2;
        *(undefined8 *)(puVar2 + 0x18) = uStack_60;
        *(undefined8 *)(puVar2 + 0x20) = uStack_58;
        *(undefined8 *)(puVar2 + 0x28) = uStack_50;
        func_0x000107c61174(param_2);
        uVar3 = uStack_60;
        func_0x000107c61174(uStack_60);
        uVar4 = uStack_58;
        func_0x000107c61174(uStack_58);
        func_0x000107c6157c(uStack_50);
        func_0x00010075a04c(0,1,0x101acd604,puVar2);
        func_0x000107c61574(uStack_50);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(param_2);
        func_0x000107c61574(uVar5);
      }
      else {
        if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0e3f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_onError__1126169d8,9);
          return;
        }
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112df99c8);
        func_0x000107c61174();
        func_0x000107c6157c(uVar5);
        func_0x000100083b20(&uStack_60);
        func_0x000107c61574(uVar5);
        FUN_101acbad8();
        puVar1 = &UNK_11043f828;
        func_0x000107c613fc(&UNK_11043f828,0x18,7);
        func_0x000107c61644(puVar1 + 0x10,uStack_60);
        puVar2 = &UNK_11043f850;
        func_0x000107c613fc(&UNK_11043f850,0x20,7);
        *(undefined **)(puVar2 + 0x10) = puVar1;
        *(long *)(puVar2 + 0x18) = param_2;
        func_0x000107c61174(param_2);
        func_0x00010075a04c(0,1,0x101acd610,puVar2);
        func_0x000107c61574(uStack_60);
        func_0x000107c61170(param_2);
        func_0x000107c61574(uVar5);
      }
      func_0x000107c61574(puVar2);
    }
  }
  return;
}



/* Entry: 101acd5f4; end: 101acd617;  */

undefined1  [16] FUN_101acd5f4(void)

{
  return ZEXT816(0x11043f7e0);
}



/* Entry: 101acd618; end: 101acd663;  */

void FUN_101acd618(undefined8 param_1)

{
  func_0x0001000285a8(0x112df8910,&UNK_10d9c8e80);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101acd740,param_1);
  return;
}



/* Entry: 101acd664; end: 101acd73f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acd664(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_1130366d8);
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_1130366e0);
  lVar2 = 0;
  FUN_101acdf80();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112df9a30) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112df9a38) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61580(uVar5,2);
  func_0x000107c61580(uVar6,2);
  plVar4 = &lStack_58;
  func_0x000107c61154(plVar4,puVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(lStack_48);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 101acd740; end: 101acd787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acd740(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar5 = *(undefined8 *)(lStack_48 + _DAT_1130366d8);
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_1130366e0);
  lVar2 = 0;
  FUN_101acdf80();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112df9a30) = uVar5;
  *(undefined8 *)(lVar3 + _DAT_112df9a38) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c61580(uVar5,2);
  func_0x000107c61580(uVar6,2);
  plVar4 = &lStack_58;
  func_0x000107c61154(plVar4,puVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61170(lStack_48);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 101acd788; end: 101acd78f; -[_TtC48PlusDynamicBillboardSignalProviderImplementation34PlusDynamicBillboardSignalProvider preCheckSource] */

undefined8 FUN_101acd788(void)

{
  return 0x11;
}



/* Entry: 101acd790; end: 101acd8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101acd790(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  char *pcVar14;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 in_stack_ffffffffffffffc8;
  
  if (((param_2 != 0xd000000000000020) || (param_3 != -0x7ffffffef1009020)) &&
     (func_0x000107c605b8(param_2,param_3,0xd000000000000020,0x800000010eff6fe0,0),
     (param_2 & 1) == 0)) {
    func_0x0001000d224c(&stack0xffffffffffffffc8);
    func_0x000107c4b700(in_stack_ffffffffffffffc8);
    func_0x000107c615e8(in_stack_ffffffffffffffc8);
    func_0x0001000d224c(&stack0xffffffffffffffc8);
    uVar1 = in_stack_ffffffffffffffc8;
    func_0x000107c3d104();
    func_0x000107c61180();
    func_0x000107c615e8(in_stack_ffffffffffffffc8);
    uVar2 = 0;
    func_0x000103f77110(0);
    uVar3 = uVar1;
    func_0x000107c5f9e8(uVar1,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(uVar1);
    func_0x000107c6142c(uVar3);
    puVar4 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    return puVar4;
  }
  func_0x0001000d224c(&puStack_90);
  puVar4 = puStack_90;
  func_0x000107c4b6fc(puStack_90);
  puVar5 = puStack_90;
  func_0x000107c3d0fc();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar5 = &UNK_11043f950;
    func_0x000107c613fc(&UNK_11043f950,0x18,7);
    plVar13 = (long *)(puVar5 + 0x10);
    *plVar13 = 0;
    puVar7 = &UNK_11043f978;
    func_0x000107c613fc(&UNK_11043f978,0x11,7);
    pcVar14 = puVar7 + 0x10;
    *pcVar14 = '\0';
    puVar8 = puStack_90;
    func_0x000107c3d100();
    func_0x000107c61180();
    puVar9 = &UNK_11043f9a0;
    func_0x000107c613fc(&UNK_11043f9a0,0x18,7);
    func_0x000107c61614(puVar9 + 0x10,puStack_90);
    puVar10 = &UNK_11043f9c8;
    func_0x000107c613fc(&UNK_11043f9c8,0x30,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined **)(puVar10 + 0x18) = puVar6;
    *(undefined **)(puVar10 + 0x20) = puVar5;
    *(undefined **)(puVar10 + 0x28) = puVar7;
    pcStack_70 = FUN_101acdfa0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10083fefc;
    puStack_78 = &UNK_11043f9e0;
    ppuVar11 = &puStack_90;
    puStack_68 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar9 = puStack_68;
    func_0x000107c61174(puVar6);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar9);
    puVar9 = puVar8;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar8);
    func_0x000107c61428(plVar13,&puStack_90,1,0);
    lVar12 = *plVar13;
    *plVar13 = (long)puVar9;
    func_0x000107c61170(lVar12);
    func_0x000107c61428(pcVar14,auStack_a8,0,0);
    if (*pcVar14 == '\x01') {
      lVar12 = 0;
      if (*plVar13 != 0) {
        func_0x000107c4218c();
        lVar12 = *plVar13;
      }
      *plVar13 = 0;
      func_0x000107c61170(lVar12);
    }
    puVar9 = puVar6;
    func_0x000107c43bf4(puVar6);
    func_0x000107c61180();
    func_0x000107c615e8(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar7);
  }
  else {
    func_0x000107c61170();
    puVar9 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar9);
    func_0x000107c61180();
    func_0x000107c615e8(puStack_90);
    func_0x000107c61170(puVar4);
  }
  return puVar9;
}



/* Entry: 101acd8fc; end: 101acdb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101acd8fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long *plVar10;
  char *pcVar11;
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x0001000d224c(&puStack_90);
  puVar2 = puStack_90;
  func_0x000107c4b6fc(puStack_90);
  puVar1 = puStack_90;
  func_0x000107c3d0fc();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar1 = &UNK_11043f950;
    func_0x000107c613fc(&UNK_11043f950,0x18,7);
    plVar10 = (long *)(puVar1 + 0x10);
    *plVar10 = 0;
    puVar4 = &UNK_11043f978;
    func_0x000107c613fc(&UNK_11043f978,0x11,7);
    pcVar11 = puVar4 + 0x10;
    *pcVar11 = '\0';
    puVar5 = puStack_90;
    func_0x000107c3d100();
    func_0x000107c61180();
    puVar6 = &UNK_11043f9a0;
    func_0x000107c613fc(&UNK_11043f9a0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,puStack_90);
    puVar7 = &UNK_11043f9c8;
    func_0x000107c613fc(&UNK_11043f9c8,0x30,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined **)(puVar7 + 0x18) = puVar3;
    *(undefined **)(puVar7 + 0x20) = puVar1;
    *(undefined **)(puVar7 + 0x28) = puVar4;
    pcStack_70 = FUN_101acdfa0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10083fefc;
    puStack_78 = &UNK_11043f9e0;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_68;
    func_0x000107c61174(puVar3);
    func_0x000107c6157c(puVar1);
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar6);
    puVar6 = puVar5;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61428(plVar10,&puStack_90,1,0);
    lVar9 = *plVar10;
    *plVar10 = (long)puVar6;
    func_0x000107c61170(lVar9);
    func_0x000107c61428(pcVar11,auStack_a8,0,0);
    if (*pcVar11 == '\x01') {
      lVar9 = 0;
      if (*plVar10 != 0) {
        func_0x000107c4218c();
        lVar9 = *plVar10;
      }
      *plVar10 = 0;
      func_0x000107c61170(lVar9);
    }
    puVar6 = puVar3;
    func_0x000107c43bf4(puVar3);
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar4);
  }
  else {
    func_0x000107c61170();
    puVar6 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar6);
    func_0x000107c61180();
    func_0x000107c615e8(puStack_90);
    func_0x000107c61170(puVar2);
  }
  return puVar6;
}



/* Entry: 101acdba0; end: 101acdd5f; -[_TtC48PlusDynamicBillboardSignalProviderImplementation34PlusDynamicBillboardSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_101acdba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101acd790(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101acdd60; end: 101acddc7; -[_TtC48PlusDynamicBillboardSignalProviderImplementation34PlusDynamicBillboardSignalProvider eligibleForCampaignId:] */

uint FUN_101acdd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  func_0x000101acdc0c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 101acddc8; end: 101acdee7;  */

void FUN_101acddc8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c3d0fc();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
    if (lVar1 != 0) {
      func_0x000107c61170(lVar1);
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(param_3);
  func_0x000107c61170(puVar2);
  func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
  if (*(long *)(param_4 + 0x10) == 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_88,1,0);
    *(undefined1 *)(param_5 + 0x10) = 1;
  }
  else {
    func_0x000107c4218c();
    func_0x000107c61428(param_4 + 0x10,auStack_88,1,0);
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_4 + 0x10) = 0;
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101acdee8; end: 101acdf47; -[_TtC48PlusDynamicBillboardSignalProviderImplementation34PlusDynamicBillboardSignalProvider init] */

void FUN_101acdee8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusDynamicBillboardSignalProviderImplementation.PlusDynamicBillboardSignalProvider"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101acdf14);
  (*pcVar1)();
}



/* Entry: 101acdf48; end: 101acdf7f; -[_TtC48PlusDynamicBillboardSignalProviderImplementation34PlusDynamicBillboardSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101acdf64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101acdf68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101acdf48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df9a30));
  return;
}



/* Entry: 101acdf80; end: 101acdf9f;  */

void FUN_101acdf80(void)

{
  func_0x000107c61168(&PTR_PTR_1127f4338);
  return;
}


