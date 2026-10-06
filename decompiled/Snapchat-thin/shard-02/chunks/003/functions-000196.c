/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b2f864; end: 101b2fecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f864(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long lVar15;
  code *pcVar16;
  undefined1 *puVar17;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  puStack_c8 = param_2;
  uStack_b8 = param_5;
  func_0x000107c5fb10();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar17 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec();
  puVar2 = param_1;
  puStack_88 = param_1;
  puStack_80 = param_2;
  func_0x000107c5fb04(puVar17);
  func_0x000100e8b654();
  uVar10 = 0;
  puVar3 = puVar17;
  func_0x000107c60214(puVar17,0,PTR___sSSN_11034da80,puVar2);
  pcVar16 = *(code **)(lVar15 + 8);
  (*pcVar16)(puVar17,lVar1);
  if (uVar10 >> 0x3c < 0xf) {
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    pcStack_d8 = pcVar16;
    uStack_d0 = param_4;
    uStack_c0 = param_3;
    func_0x000107c61168();
    puVar5 = puVar3;
    func_0x000107c5ee20(puVar3,uVar10);
    puStack_88 = (undefined *)0x0;
    puVar6 = puVar4;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar9 = puStack_88;
    if (puVar6 == (undefined *)0x0) {
      puVar4 = puStack_88;
      func_0x000107c61174();
      func_0x000107c5ed30(puVar9);
      func_0x000107c61170(puVar4);
      func_0x000107c61654();
      func_0x0001000b44c0(puVar3,uVar10);
      func_0x000107c614ac(puVar9);
      param_4 = uStack_d0;
      pcVar16 = pcStack_d8;
      param_3 = uStack_c0;
    }
    else {
      func_0x000107c61174();
      func_0x000107c60234(&puStack_88,puVar6);
      func_0x000107c615e8(puVar6);
      uVar13 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      ppuVar7 = &puStack_a8;
      func_0x000107c6147c(ppuVar7,&puStack_88,PTR___sypN_11034f1a8 + 8,uVar13,6);
      puVar9 = puStack_a8;
      uVar13 = uStack_c0;
      pcVar16 = pcStack_d8;
      if (((ulong)ppuVar7 & 1) != 0) {
        puStack_e8 = puVar4;
        puStack_e0 = puVar3;
        if (*(long *)(puStack_a8 + 0x10) == 0) {
LAB_101b2fd94:
          puStack_88 = param_1;
          puStack_80 = param_2;
          func_0x000107c5fb04(puVar17);
          uVar14 = 0;
          puVar3 = puVar17;
          func_0x000107c60214(puVar17,0,PTR___sSSN_11034da80,puVar2);
          (*pcVar16)(puVar17,lVar1);
          func_0x000107c6142c(param_2);
          FUN_101b309f0(uVar13,puVar3,uVar14,uStack_d0,uStack_b8);
          func_0x0001000b44c0(puStack_e0,uVar10);
          func_0x0001000b44c0(puVar3,uVar14);
        }
        else {
          func_0x000107c61434(puStack_a8);
          lVar15 = 0x416c616974696e69;
          uVar11 = 0;
          func_0x000100029284(0x416c616974696e69);
          puVar4 = puVar9;
          if ((uVar11 & 1) == 0) {
LAB_101b2fd90:
            func_0x000107c6142c(puVar4);
            goto LAB_101b2fd94;
          }
          func_0x0001000bb420(*(long *)(puVar9 + 0x38) + lVar15 * 0x20,&puStack_88);
          func_0x000107c6142c(puVar9);
          ppuVar7 = &puStack_a8;
          func_0x000107c6147c(ppuVar7,&puStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppuVar7 & 1) == 0) goto LAB_101b2fd94;
          uVar11 = (ulong)puStack_a8 & 0xffffffffffff;
          if (((ulong)puStack_a0 & 0x2000000000000000) != 0) {
            uVar11 = (ulong)puStack_a0 >> 0x38 & 0xf;
          }
          puVar4 = puStack_a0;
          if (uVar11 == 0) goto LAB_101b2fd90;
          puStack_c8 = *(undefined **)(puStack_c8 + _DAT_112e02488);
          puVar4 = puStack_a8;
          puVar12 = puStack_a0;
          func_0x000107c5fadc();
          func_0x000107c6142c(puStack_a0);
          puVar6 = puStack_c8;
          func_0x000107c42288();
          func_0x000107c61180();
          func_0x000107c61170(puVar4);
          puVar8 = puVar6;
          func_0x000107c5faec();
          puStack_c8 = puVar12;
          func_0x000107c61170(puVar6);
          puVar4 = PTR___sSSN_11034da80;
          puStack_a0 = puStack_c8;
          puStack_90 = PTR___sSSN_11034da80;
          puStack_a8 = puVar8;
          func_0x000100102924(&puStack_a8,&puStack_88);
          puVar6 = puVar9;
          func_0x000107c61558(puVar9);
          puStack_a8 = puVar9;
          func_0x0001001029e8(&puStack_88,0xd000000000000010,0x800000010effda40,puVar6);
          puStack_c8 = puStack_a8;
          puVar9 = puStack_a8;
          func_0x000107c5f9dc(puStack_a8,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
          puStack_88 = (undefined *)0x0;
          puVar6 = puStack_e8;
          func_0x000107c41300();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          puVar9 = puStack_88;
          func_0x000107c61174(puStack_88);
          if (puVar6 == (undefined *)0x0) {
            puVar4 = puVar9;
            func_0x000107c5ed30();
            func_0x000107c61170(puVar9);
            func_0x000107c61654();
            func_0x000107c614ac(puVar4);
LAB_101b2fe50:
            puStack_88 = param_1;
            puStack_80 = param_2;
            func_0x000107c5fb04(puVar17);
            uVar13 = 0;
            puVar3 = puVar17;
            func_0x000107c60214(puVar17,0,PTR___sSSN_11034da80,puVar2);
            (*pcVar16)(puVar17,lVar1);
            func_0x000107c6142c(param_2);
            FUN_101b309f0(uStack_c0,puVar3,uVar13,uStack_d0,uStack_b8);
            func_0x0001000b44c0(puStack_e0,uVar10);
            func_0x0001000b44c0(puVar3,uVar13);
            puVar9 = puStack_c8;
          }
          else {
            puVar9 = puVar6;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar6);
            func_0x000107c5fb04(puVar17);
            puVar6 = puVar9;
            puStack_e8 = puVar4;
            func_0x000107c5faf0(puVar9,puVar4,puVar17);
            if (puVar4 == (undefined *)0x0) {
              func_0x00010006c090(puVar9,puStack_e8);
              goto LAB_101b2fe50;
            }
            func_0x000107c6142c(param_2);
            puStack_88 = puVar6;
            puStack_80 = puVar4;
            func_0x000107c5fb04(puVar17);
            uVar13 = 0;
            puVar3 = puVar17;
            func_0x000107c60214(puVar17,0,PTR___sSSN_11034da80,puVar2);
            (*pcVar16)(puVar17,lVar1);
            func_0x000107c6142c(puVar4);
            FUN_101b309f0(uStack_c0,puVar3,uVar13,uStack_d0,uStack_b8);
            func_0x0001000b44c0(puStack_e0,uVar10);
            func_0x0001000b44c0(puVar3,uVar13);
            func_0x00010006c090(puVar9,puStack_e8);
            puVar9 = puStack_c8;
          }
        }
        func_0x000107c6142c(puVar9);
        goto LAB_101b2fd54;
      }
      func_0x0001000b44c0(puVar3,uVar10);
      param_4 = uStack_d0;
      pcVar16 = pcStack_d8;
      param_3 = uStack_c0;
    }
  }
  puStack_88 = param_1;
  puStack_80 = param_2;
  func_0x000107c5fb04(puVar17);
  uVar13 = 0;
  puVar3 = puVar17;
  func_0x000107c60214(puVar17,0,PTR___sSSN_11034da80,puVar2);
  (*pcVar16)(puVar17,lVar1);
  func_0x000107c6142c(param_2);
  FUN_101b309f0(param_3,puVar3,uVar13,param_4,uStack_b8);
  func_0x0001000b44c0(puVar3,uVar13);
LAB_101b2fd54:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    return;
  }
  return;
}



/* Entry: 101b2fecc; end: 101b2fecf; -[_TtC30BitmojiAvatarBuilderURIHandler30BitmojiAvatarBuilderURIHandler reset] */

void FUN_101b2fecc(void)

{
  return;
}



/* Entry: 101b2fed0; end: 101b2ff2f; -[_TtC30BitmojiAvatarBuilderURIHandler30BitmojiAvatarBuilderURIHandler init] */

void FUN_101b2fed0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiAvatarBuilderURIHandler.BitmojiAvatarBuilderURIHandler",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2fefc);
  (*pcVar1)();
}



/* Entry: 101b2ff30; end: 101b2ff87; -[_TtC30BitmojiAvatarBuilderURIHandler30BitmojiAvatarBuilderURIHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2ff30(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e02480));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e02468));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e02478));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e02488));
  return;
}



/* Entry: 101b2ff88; end: 101b2ffaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2ff88(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long extraout_x8;
  long unaff_x20;
  long lVar17;
  code *pcVar18;
  undefined1 *puVar19;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_68;
  
  puVar10 = *(undefined **)(unaff_x20 + 0x10);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  puStack_c8 = puVar10;
  func_0x000107c5fb10();
  lVar17 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  puVar19 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec();
  puVar2 = param_1;
  puStack_88 = param_1;
  puStack_80 = puVar10;
  func_0x000107c5fb04(puVar19);
  func_0x000100e8b654();
  uVar11 = 0;
  puVar3 = puVar19;
  func_0x000107c60214(puVar19,0,PTR___sSSN_11034da80,puVar2);
  pcVar18 = *(code **)(lVar17 + 8);
  (*pcVar18)(puVar19,lVar1);
  if (uVar11 >> 0x3c < 0xf) {
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    pcStack_d8 = pcVar18;
    uStack_d0 = uVar14;
    uStack_c0 = uVar16;
    func_0x000107c61168();
    puVar5 = puVar3;
    func_0x000107c5ee20(puVar3,uVar11);
    puStack_88 = (undefined *)0x0;
    puVar6 = puVar4;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar9 = puStack_88;
    if (puVar6 == (undefined *)0x0) {
      puVar4 = puStack_88;
      func_0x000107c61174();
      func_0x000107c5ed30(puVar9);
      func_0x000107c61170(puVar4);
      func_0x000107c61654();
      func_0x0001000b44c0(puVar3,uVar11);
      func_0x000107c614ac(puVar9);
      uVar14 = uStack_d0;
      pcVar18 = pcStack_d8;
      uVar16 = uStack_c0;
    }
    else {
      func_0x000107c61174();
      func_0x000107c60234(&puStack_88,puVar6);
      func_0x000107c615e8(puVar6);
      uVar14 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      ppuVar7 = &puStack_a8;
      func_0x000107c6147c(ppuVar7,&puStack_88,PTR___sypN_11034f1a8 + 8,uVar14,6);
      puVar9 = puStack_a8;
      uVar14 = uStack_c0;
      pcVar18 = pcStack_d8;
      if (((ulong)ppuVar7 & 1) != 0) {
        puStack_e8 = puVar4;
        puStack_e0 = puVar3;
        if (*(long *)(puStack_a8 + 0x10) == 0) {
LAB_101b2fd94:
          puStack_88 = param_1;
          puStack_80 = puVar10;
          func_0x000107c5fb04(puVar19);
          uVar16 = 0;
          puVar3 = puVar19;
          func_0x000107c60214(puVar19,0,PTR___sSSN_11034da80,puVar2);
          (*pcVar18)(puVar19,lVar1);
          func_0x000107c6142c(puVar10);
          FUN_101b309f0(uVar14,puVar3,uVar16,uStack_d0,uStack_b8);
          func_0x0001000b44c0(puStack_e0,uVar11);
          func_0x0001000b44c0(puVar3,uVar16);
        }
        else {
          func_0x000107c61434(puStack_a8);
          lVar17 = 0x416c616974696e69;
          uVar12 = 0;
          func_0x000100029284(0x416c616974696e69);
          puVar4 = puVar9;
          if ((uVar12 & 1) == 0) {
LAB_101b2fd90:
            func_0x000107c6142c(puVar4);
            goto LAB_101b2fd94;
          }
          func_0x0001000bb420(*(long *)(puVar9 + 0x38) + lVar17 * 0x20,&puStack_88);
          func_0x000107c6142c(puVar9);
          ppuVar7 = &puStack_a8;
          func_0x000107c6147c(ppuVar7,&puStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppuVar7 & 1) == 0) goto LAB_101b2fd94;
          uVar12 = (ulong)puStack_a8 & 0xffffffffffff;
          if (((ulong)puStack_a0 & 0x2000000000000000) != 0) {
            uVar12 = (ulong)puStack_a0 >> 0x38 & 0xf;
          }
          puVar4 = puStack_a0;
          if (uVar12 == 0) goto LAB_101b2fd90;
          puStack_c8 = *(undefined **)(puStack_c8 + _DAT_112e02488);
          puVar4 = puStack_a8;
          puVar13 = puStack_a0;
          func_0x000107c5fadc();
          func_0x000107c6142c(puStack_a0);
          puVar6 = puStack_c8;
          func_0x000107c42288();
          func_0x000107c61180();
          func_0x000107c61170(puVar4);
          puVar8 = puVar6;
          func_0x000107c5faec();
          puStack_c8 = puVar13;
          func_0x000107c61170(puVar6);
          puVar4 = PTR___sSSN_11034da80;
          puStack_a0 = puStack_c8;
          puStack_90 = PTR___sSSN_11034da80;
          puStack_a8 = puVar8;
          func_0x000100102924(&puStack_a8,&puStack_88);
          puVar6 = puVar9;
          func_0x000107c61558(puVar9);
          puStack_a8 = puVar9;
          func_0x0001001029e8(&puStack_88,0xd000000000000010,0x800000010effda40,puVar6);
          puStack_c8 = puStack_a8;
          puVar9 = puStack_a8;
          func_0x000107c5f9dc(puStack_a8,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
          puStack_88 = (undefined *)0x0;
          puVar6 = puStack_e8;
          func_0x000107c41300();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          puVar9 = puStack_88;
          func_0x000107c61174(puStack_88);
          if (puVar6 == (undefined *)0x0) {
            puVar4 = puVar9;
            func_0x000107c5ed30();
            func_0x000107c61170(puVar9);
            func_0x000107c61654();
            func_0x000107c614ac(puVar4);
LAB_101b2fe50:
            puStack_88 = param_1;
            puStack_80 = puVar10;
            func_0x000107c5fb04(puVar19);
            uVar14 = 0;
            puVar3 = puVar19;
            func_0x000107c60214(puVar19,0,PTR___sSSN_11034da80,puVar2);
            (*pcVar18)(puVar19,lVar1);
            func_0x000107c6142c(puVar10);
            FUN_101b309f0(uStack_c0,puVar3,uVar14,uStack_d0,uStack_b8);
            func_0x0001000b44c0(puStack_e0,uVar11);
            func_0x0001000b44c0(puVar3,uVar14);
            puVar9 = puStack_c8;
          }
          else {
            puVar9 = puVar6;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar6);
            func_0x000107c5fb04(puVar19);
            puVar6 = puVar9;
            puStack_e8 = puVar4;
            func_0x000107c5faf0(puVar9,puVar4,puVar19);
            if (puVar4 == (undefined *)0x0) {
              func_0x00010006c090(puVar9,puStack_e8);
              goto LAB_101b2fe50;
            }
            func_0x000107c6142c(puVar10);
            puStack_88 = puVar6;
            puStack_80 = puVar4;
            func_0x000107c5fb04(puVar19);
            uVar14 = 0;
            puVar3 = puVar19;
            func_0x000107c60214(puVar19,0,PTR___sSSN_11034da80,puVar2);
            (*pcVar18)(puVar19,lVar1);
            func_0x000107c6142c(puVar4);
            FUN_101b309f0(uStack_c0,puVar3,uVar14,uStack_d0,uStack_b8);
            func_0x0001000b44c0(puStack_e0,uVar11);
            func_0x0001000b44c0(puVar3,uVar14);
            func_0x00010006c090(puVar9,puStack_e8);
            puVar9 = puStack_c8;
          }
        }
        func_0x000107c6142c(puVar9);
        goto LAB_101b2fd54;
      }
      func_0x0001000b44c0(puVar3,uVar11);
      uVar14 = uStack_d0;
      pcVar18 = pcStack_d8;
      uVar16 = uStack_c0;
    }
  }
  puStack_88 = param_1;
  puStack_80 = puVar10;
  func_0x000107c5fb04(puVar19);
  uVar15 = 0;
  puVar3 = puVar19;
  func_0x000107c60214(puVar19,0,PTR___sSSN_11034da80,puVar2);
  (*pcVar18)(puVar19,lVar1);
  func_0x000107c6142c(puVar10);
  FUN_101b309f0(uVar16,puVar3,uVar15,uVar14,uStack_b8);
  func_0x0001000b44c0(puVar3,uVar15);
LAB_101b2fd54:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    return;
  }
  return;
}



/* Entry: 101b2ffb0; end: 101b2ffcf;  */

void FUN_101b2ffb0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8340);
  return;
}



/* Entry: 101b2ffd0; end: 101b2ffdf;  */

undefined1  [16] FUN_101b2ffd0(void)

{
  return ZEXT816(0x110446798);
}



/* Entry: 101b2ffe0; end: 101b309df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2ffe0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  lVar10 = param_2;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  func_0x000107c3eb80();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    lStack_78 = param_3;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f8();
    func_0x00010006c00c(lVar3,lVar10);
    lVar2 = lVar3;
    func_0x000107c5ee20(lVar3,lVar10);
    func_0x000107c46368();
    func_0x000107c61170(lVar2);
    func_0x00010006c090(lVar3,lVar10);
    if (puVar4 != (undefined *)0x0) {
      uVar13 = *(undefined8 *)(param_2 + _DAT_112e02468);
      lVar5 = 0;
      func_0x000101b2f45c();
      lVar2 = lVar5;
      func_0x000107c610f8();
      *(undefined8 *)(lVar2 + _DAT_112e02428) = param_4;
      *(undefined **)(lVar2 + _DAT_112e02430) = puVar4;
      puVar7 = PTR_s_init_1125d9248;
      lStack_70 = lVar2;
      lStack_68 = lVar5;
      func_0x000107c61174();
      plVar6 = &lStack_70;
      puStack_80 = puVar4;
      func_0x000107c61154(plVar6,puVar7);
      func_0x000107c4d664(uVar13);
      func_0x000107c61170(plVar6);
      func_0x000107c5d7e0(param_1);
      func_0x000107c61180();
      func_0x000107c5edb4(lVar12);
      func_0x000107c61170(param_1);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar7 = PTR_PTR_1126b1ce0;
      func_0x000107c610f8(PTR_PTR_1126b1ce0);
      puVar8 = puVar7;
      func_0x000107c5ed90();
      puVar9 = puVar4;
      func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(puVar4);
      func_0x000107c4913c(puVar7);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar9);
      (**(code **)(lVar11 + 8))(lVar12,lVar1);
      (**(code **)(lStack_78 + 0x10))(lStack_78,puVar7);
      func_0x000107c61170(puStack_80);
      func_0x000107c61170(puVar7);
      func_0x00010006c090(lVar3,lVar10);
      return;
    }
    func_0x00010006c090(lVar3,lVar10);
    param_3 = lStack_78;
  }
  func_0x000107c5d7e0(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar12);
  func_0x000107c61170(param_1);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar7 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar8 = puVar7;
  func_0x000107c5ed90();
  puVar9 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar4);
  func_0x000107c4913c(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar9);
  (**(code **)(lVar11 + 8))(lVar12,lVar1);
  (**(code **)(param_3 + 0x10))(param_3,puVar7);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 101b309e0; end: 101b309ef;  */

void FUN_101b309e0(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101b309ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101b309f0; end: 101b30b73;  */

void FUN_101b309f0(undefined8 param_1,undefined8 param_2,ulong param_3,code *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  code *pcStack_68;
  
  lVar1 = 0;
  pcStack_68 = param_4;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c5d7e0(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(param_1);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar3 = puVar2;
  func_0x000107c5ed90();
  puVar4 = puVar2;
  func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar2);
  uVar6 = 0;
  if (param_3 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_2,param_3);
    uVar6 = param_2;
  }
  puVar2 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  func_0x000107c4913c();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar6);
  (**(code **)(lVar5 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  (*pcStack_68)(puVar2);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101b30b74; end: 101b30b83; -[SCBitmojiPosePickerServices batchedSceneFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e024b8));
  return;
}



/* Entry: 101b30b84; end: 101b30bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30b84(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e024b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b30bd0; end: 101b30c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30bd0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e024b8) = param_1;
  func_0x000101b30c0c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b30c2c; end: 101b30c83; -[SCBitmojiPosePickerServices initWithBatchedSceneFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112e024b8) = param_3;
  lVar2 = param_1;
  func_0x000101b30c0c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101b30c84; end: 101b30cdf; -[SCBitmojiPosePickerServices init] */

void FUN_101b30c84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiPosePickerScope.BitmojiPosePickerServices",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b30cb0);
  (*pcVar1)();
}



/* Entry: 101b30ce0; end: 101b30cef; -[SCBitmojiPosePickerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e024b8));
  return;
}



/* Entry: 101b30cf0; end: 101b30cff; -[SCBitmojiPosePickerScope pluginRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30cf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e024e8));
  return;
}



/* Entry: 101b30d00; end: 101b30d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30d00(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e024e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b30d4c; end: 101b30d6b;  */

void FUN_101b30d4c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f84d8);
  return;
}



/* Entry: 101b30d6c; end: 101b30dc3; -[SCBitmojiPosePickerScope initWithPluginRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112e024e8) = param_3;
  lVar2 = param_1;
  FUN_101b30d4c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101b30dc4; end: 101b30e1f; -[SCBitmojiPosePickerScope init] */

void FUN_101b30dc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiPosePickerScope.SCBitmojiPosePickerScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b30df0);
  (*pcVar1)();
}



/* Entry: 101b30e20; end: 101b30e2f; -[SCBitmojiPosePickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30e20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e024e8));
  return;
}



/* Entry: 101b30e30; end: 101b30e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30e30(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b31224();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e02520) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101b30e9c; end: 101b30f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30e9c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e02520) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b30f08; end: 101b30f67; -[_TtC47BitmojiSelfiePickerScopedFactoryServiceProvider35SCBitmojiSelfiePickerScopedServices init] */

void FUN_101b30f08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiSelfiePickerScopedFactoryServiceProvider.SCBitmojiSelfiePickerScopedServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b30f34);
  (*pcVar1)();
}



/* Entry: 101b30f68; end: 101b30f77; -[_TtC47BitmojiSelfiePickerScopedFactoryServiceProvider35SCBitmojiSelfiePickerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e02520));
  return;
}



/* Entry: 101b30f78; end: 101b30fe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b30f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110446a18;
  func_0x000107c613fc(&UNK_110446a18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101b312bc,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b30fe4; end: 101b3107f;  */

void FUN_101b30fe4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110446928;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110446928;
  return;
}



/* Entry: 101b31080; end: 101b310b7;  */

void FUN_101b31080(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101b310b8; end: 101b310bf;  */

undefined8 FUN_101b310b8(void)

{
  return 0x1b;
}



/* Entry: 101b310c0; end: 101b311f3;  */

void FUN_101b310c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110446a40;
  func_0x000107c613fc(&UNK_110446a40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b31294;
  func_0x00010058fa64(FUN_101b31294,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b311f4; end: 101b31223;  */

undefined ** FUN_101b311f4(void)

{
  return &PTR_DAT_113066850;
}



/* Entry: 101b31224; end: 101b31243;  */

void FUN_101b31224(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8598);
  return;
}



/* Entry: 101b31244; end: 101b31293;  */

undefined1  [16] FUN_101b31244(void)

{
  return ZEXT816(0x110446978);
}



/* Entry: 101b31294; end: 101b312bb;  */

void FUN_101b31294(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101b312bc; end: 101b312bf;  */

void FUN_101b312bc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b312c0; end: 101b313d3;  */

/* WARNING: Possible PIC construction at 0x000101b31380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b31390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b313a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b313b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b313a4) */
/* WARNING: Removing unreachable block (ram,0x000101b31394) */
/* WARNING: Removing unreachable block (ram,0x000101b31384) */
/* WARNING: Removing unreachable block (ram,0x000101b313b4) */

void FUN_101b312c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110446ac8;
  func_0x000107c613fc(&UNK_110446ac8,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  uVar2 = 0x112e02590;
  func_0x0001000285a8(0x112e02590,&UNK_10d9d4458);
  func_0x000107c613fc();
  uVar3 = 0x101b317c4;
  func_0x0001000841fc(0x101b317c4,puVar1,uVar2);
  func_0x000100084214(&UNK_10d9d4420,0x31,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101b313d4; end: 101b313f7;  */

/* WARNING: Possible PIC construction at 0x000101b31380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b31390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b313a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b313b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b313a4) */
/* WARNING: Removing unreachable block (ram,0x000101b31394) */
/* WARNING: Removing unreachable block (ram,0x000101b31384) */
/* WARNING: Removing unreachable block (ram,0x000101b313b4) */

void FUN_101b313d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar7 = &UNK_110446ac8;
  func_0x000107c613fc(&UNK_110446ac8,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar3;
  *(undefined8 *)(puVar7 + 0x20) = uVar8;
  *(undefined8 *)(puVar7 + 0x28) = uVar4;
  *(undefined8 *)(puVar7 + 0x30) = uVar9;
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined8 *)(puVar7 + 0x40) = uVar2;
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar8 = 0x112e02590;
  func_0x0001000285a8(0x112e02590,&UNK_10d9d4458);
  func_0x000107c613fc();
  uVar9 = 0x101b317c4;
  func_0x0001000841fc(0x101b317c4,puVar7,uVar8);
  func_0x000100084214(&UNK_10d9d4420,0x31,2);
  *param_1 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101b313f8; end: 101b31767;  */

void FUN_101b313f8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e02598,&UNK_10d9d4460);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101b32ce0();
  func_0x000100082720("BitmojiSelfiePickerScopeGraphBridgeServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112e025a0,&UNK_10d9d4470);
  puVar3 = &UNK_110446af0;
  func_0x000107c613fc(&UNK_110446af0,0x58,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  uVar8 = 0x101b317f4;
  func_0x0001000823a8(0x101b317f4,puVar3);
  func_0x000100082720("SCBitmojiSelfiePickerEntryPointWrapperServiceProvider",0x35,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101b31080;
  func_0x0001000823a8(FUN_101b31080,0);
  func_0x000100082720("SCBitmojiSelfiePickerScopedServicesCleanupRelayServiceProvider",0x3e,2);
  func_0x0001000285a8(0x112e025a8,&UNK_10d9d4468);
  puVar3 = &UNK_110446b18;
  func_0x000107c613fc(&UNK_110446b18,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101b31828;
  func_0x0001000823a8(FUN_101b31828,puVar3);
  func_0x000100082720("SCBitmojiSelfiePickerScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112e02528,&UNK_10d9d41f0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101b31834;
  func_0x0001000823a8(0x101b31834,pcVar5);
  func_0x000100082720("SCBitmojiSelfiePickerScopeInitializationServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e02518,&UNK_10d9d41e0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101b3183c;
  func_0x0001000823a8(0x101b3183c,uVar6);
  func_0x000100082720("SCBitmojiSelfiePickerScopedServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_110446b40;
  func_0x000107c613fc(&UNK_110446b40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101b31844;
  func_0x0001000823a8(0x101b31844,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCBitmojiSelfiePickerScopeEntryPointProvider",0x2c,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101b31768; end: 101b31827;  */

void FUN_101b31768(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b31828; end: 101b3184b;  */

void FUN_101b31828(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b3249c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCBitmojiSelfiePickerScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 101b3184c; end: 101b32263;  */

void FUN_101b3184c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_101b323ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126a8a50;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effdd00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effdd20);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1a230);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar1);
  uVar11 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efc3d70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *param_1 = param_2;
  return;
}



/* Entry: 101b32264; end: 101b322df;  */

void FUN_101b32264(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101b322e0; end: 101b322e7;  */

undefined8 FUN_101b322e0(void)

{
  return 0x1b;
}



/* Entry: 101b322e8; end: 101b3236b;  */

void FUN_101b322e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101b3242c,param_2,FUN_101b32430,param_2,FUN_101b32458,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b3236c; end: 101b323bb;  */

undefined8 FUN_101b3236c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b323bc; end: 101b323eb;  */

undefined ** FUN_101b323bc(void)

{
  return &PTR_DAT_113066850;
}



/* Entry: 101b323ec; end: 101b3240b;  */

void FUN_101b323ec(void)

{
  func_0x000107c61168(&PTR_PTR_112e02618);
  return;
}



/* Entry: 101b3240c; end: 101b3242f;  */

undefined1  [16] FUN_101b3240c(void)

{
  return ZEXT816(0x110446b98);
}



/* Entry: 101b32430; end: 101b32457;  */

void FUN_101b32430(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101b32458; end: 101b3245f;  */

undefined8 FUN_101b32458(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b32460; end: 101b3249b;  */

void FUN_101b32460(undefined8 *param_1,undefined8 param_2)

{
  FUN_101b3249c();
  func_0x0001000a7f38("SCBitmojiSelfiePickerScopeInitializationPluginRegistryServiceProvider",0x45,2
                     );
  *param_1 = param_2;
  return;
}



/* Entry: 101b3249c; end: 101b32687;  */

void FUN_101b3249c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d050;
  ppuVar4 = &PTR_DAT_113066850;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110446be8;
  func_0x000107c613fc(&UNK_110446be8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e026b8;
  func_0x0001000285a8(0x112e026b8,&UNK_10d9d45e8);
  func_0x0001000a6ee8(&UNK_110446df8,
                      "BitmojiSelfiePickerScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_101b32688,puVar2,uVar3,&UNK_110446df8,&PTR_DAT_112e02748);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110446b98,
                      "SCBitmojiSelfiePickerEntryPointWrapperScopeInitializationPluginKey",0x42,2,
                      FUN_101b3273c,param_3,uVar3,&UNK_110446b98,&PTR_DAT_112e025b0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110446c10;
  func_0x000107c613fc(&UNK_110446c10,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104469b8,
                      "SCBitmojiSelfiePickerScopedServicesScopeInitializationPluginKey",0x3f,2,
                      FUN_101b327ec,puVar2,uVar3,&UNK_1104469b8,&PTR_DAT_112e02530);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e026c0;
  func_0x0001000285a8(0x112e026c0,&UNK_10d9d45f0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101b32688; end: 101b326c7;  */

void FUN_101b32688(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b32dc4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiSelfiePickerScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 101b326c8; end: 101b3273b;  */

void FUN_101b326c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101b32828;
  func_0x0001000823a8(0x101b32828,param_3);
  func_0x000100082720("SCBitmojiSelfiePickerEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b3273c; end: 101b32743;  */

void FUN_101b3273c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101b32828;
  func_0x0001000823a8();
  func_0x000100082720("SCBitmojiSelfiePickerEntryPointWrapperScopeInitializationPluginProvider",0x47
                      ,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b32744; end: 101b327eb;  */

void FUN_101b32744(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110446c38;
  func_0x000107c613fc(&UNK_110446c38,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101b32820;
  func_0x0001000823a8(FUN_101b32820,puVar1);
  func_0x000100082720("SCBitmojiSelfiePickerScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar2;
  return;
}



/* Entry: 101b327ec; end: 101b327f3;  */

void FUN_101b327ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110446c38;
  func_0x000107c613fc(&UNK_110446c38,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101b32820;
  func_0x0001000823a8(FUN_101b32820,puVar3);
  func_0x000100082720("SCBitmojiSelfiePickerScopedServicesScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = pcVar4;
  return;
}



/* Entry: 101b327f4; end: 101b3281f;  */

void FUN_101b327f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b32820; end: 101b3282f;  */

void FUN_101b32820(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110446a40;
  func_0x000107c613fc(&UNK_110446a40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b31294;
  func_0x00010058fa64(FUN_101b31294,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b32830; end: 101b328b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b32830(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101b32bf0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e026c8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e026d0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b328b8);
  (*pcVar1)();
}



/* Entry: 101b328b8; end: 101b32917; -[_TtC35BitmojiSelfiePickerScopeGraphBridge50BitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_101b328b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiSelfiePickerScopeGraphBridge.BitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b328e4);
  (*pcVar1)();
}



/* Entry: 101b32918; end: 101b3294f; -[_TtC35BitmojiSelfiePickerScopeGraphBridge50BitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b32934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b32938) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b32918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e026c8));
  return;
}



/* Entry: 101b32950; end: 101b32977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b32950(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e026d0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e026c8));
  return;
}



/* Entry: 101b32978; end: 101b32997;  */

void FUN_101b32978(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8658);
  return;
}



/* Entry: 101b32998; end: 101b32a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b32998(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e02700) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e02708);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b32a20);
  (*pcVar2)();
}



/* Entry: 101b32a20; end: 101b32b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b32a20(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e02700);
  *(undefined **)(unaff_x20 + _DAT_112e02700) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e02708);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e02708))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_110446d58;
  func_0x000107c613fc(&UNK_110446d58,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101b32b0c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101b32b08; end: 101b32b13;  */

void FUN_101b32b08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b32b14; end: 101b32b73; -[_TtC35BitmojiSelfiePickerScopeGraphBridge50SCBitmojiSelfiePickerScopedServicesSaberEntryPoint init] */

void FUN_101b32b14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiSelfiePickerScopeGraphBridge.SCBitmojiSelfiePickerScopedServicesSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b32b40);
  (*pcVar1)();
}



/* Entry: 101b32b74; end: 101b32bab; -[_TtC35BitmojiSelfiePickerScopeGraphBridge50SCBitmojiSelfiePickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b32b74(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e02708));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02700));
  return;
}



/* Entry: 101b32bac; end: 101b32baf;  */

void FUN_101b32bac(void)

{
  return;
}



/* Entry: 101b32bb0; end: 101b32bcf;  */

void FUN_101b32bb0(void)

{
  FUN_101b32a20();
  return;
}



/* Entry: 101b32bd0; end: 101b32bef;  */

void FUN_101b32bd0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8720);
  return;
}



/* Entry: 101b32bf0; end: 101b32cbf;  */

undefined8 FUN_101b32bf0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e02738,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_101b32cc0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101b32cc0; end: 101b32cdf;  */

void FUN_101b32cc0(void)

{
  func_0x000107c61168(&PTR_PTR_1127f87e8);
  return;
}



/* Entry: 101b32ce0; end: 101b32d4b;  */

void FUN_101b32ce0(void)

{
  func_0x0001000285a8(0x112e02740,&UNK_10d9d46c8);
  func_0x0001000823a8(0x101b32d20,0);
  return;
}



/* Entry: 101b32d4c; end: 101b32d87; -[_TtC35BitmojiSelfiePickerScopeGraphBridge43BitmojiSelfiePickerScopeGraphBridgeServices init] */

void FUN_101b32d4c(undefined8 param_1)

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



/* Entry: 101b32d88; end: 101b32dbb;  */

void FUN_101b32d88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b32dbc; end: 101b32dc3;  */

undefined8 FUN_101b32dbc(void)

{
  return 0x1b;
}



/* Entry: 101b32dc4; end: 101b32f3b;  */

void FUN_101b32dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110446da0;
  func_0x000107c613fc(&UNK_110446da0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101b32f3c,puVar1);
  return;
}



/* Entry: 101b32f3c; end: 101b32f43;  */

void FUN_101b32f3c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e02738,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e02738,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110446e38;
  func_0x000107c613fc(&UNK_110446e38,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101b32ff0;
  func_0x00010058fa64(0x101b32ff0,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b32f44; end: 101b32f9f;  */

void FUN_101b32f44(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e02738,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e02738,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101b32fa0; end: 101b32ff7;  */

undefined ** FUN_101b32fa0(void)

{
  return &PTR_DAT_113066850;
}



/* Entry: 101b32ff8; end: 101b3303f; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b32ff8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02798;
  func_0x000107c61428(param_1 + _DAT_112e02798,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b33040; end: 101b33097; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02798;
  func_0x000107c61428(param_1 + _DAT_112e02798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b33098; end: 101b330df; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint bitmojiSelfiePickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33098(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e027a0;
  func_0x000107c61428(param_1 + _DAT_112e027a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b330e0; end: 101b33143; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint setBitmojiSelfiePickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b330e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e027a0;
  func_0x000107c61428(param_1 + _DAT_112e027a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b33144; end: 101b33277;  */

/* WARNING: Possible PIC construction at 0x000101b331fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b33218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b33234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b33200) */
/* WARNING: Removing unreachable block (ram,0x000101b3321c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33144(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3ea28();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101b32978();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101b32bf0();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b33278);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e026c8) = lVar5;
    *(long *)(lVar4 + _DAT_112e026d0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101b33278; end: 101b3329f; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101b33278(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b33144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b332a0; end: 101b332e3; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_101b332a0(undefined8 param_1)

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



/* Entry: 101b332e4; end: 101b3347b;  */

void FUN_101b332e4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef1002040)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010effdfc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BitmojiSelfiePickerScopeGraphBridge/SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5e,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b3347c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52d34();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b3347c; end: 101b33527; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101b3347c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b332e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b33528; end: 101b33593; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33528(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e02798,0);
  *(undefined8 *)(param_1 + _DAT_112e027a0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e027a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b33594; end: 101b335c7;  */

void FUN_101b33594(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b335c8; end: 101b3360f; -[SCBitmojiSelfiePickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b335f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b335f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b335c8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e02798);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e027a0));
  return;
}



/* Entry: 101b33610; end: 101b3362f;  */

void FUN_101b33610(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8898);
  return;
}



/* Entry: 101b33630; end: 101b33677; -[SCSCBitmojiSelfiePickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33630(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e027d8;
  func_0x000107c61428(param_1 + _DAT_112e027d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b33678; end: 101b336cf; -[SCSCBitmojiSelfiePickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b33678(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e027d8;
  func_0x000107c61428(param_1 + _DAT_112e027d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b336d0; end: 101b337a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b336d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_101b32bd0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e02700) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b337a8);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e02708);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e027e0);
    *(long **)(unaff_x20 + _DAT_112e027e0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101b337a8; end: 101b337cf; -[SCSCBitmojiSelfiePickerScopedServicesSaberEntryPoint begin] */

void FUN_101b337a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b336d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


