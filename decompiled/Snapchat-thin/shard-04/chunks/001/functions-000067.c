/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10309553c; end: 10309565f;  */

undefined * FUN_10309553c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103095660);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1030baf88();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x00010480f4c4(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103095660; end: 103095673;  */

void FUN_103095660(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 103095674; end: 103095857;  */

void FUN_103095674(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    param_1 = param_1 + 0x20;
    do {
      func_0x0001030958bc(param_1,&uStack_90,0x112d4b5f0,&UNK_10d9127d0);
      uVar3 = uStack_88;
      uVar2 = uStack_90;
      func_0x000100102924(auStack_80,auStack_b0);
      lVar10 = *param_3;
      uVar5 = uVar2;
      uVar6 = uVar3;
      func_0x000100029284();
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar8 = (ulong)~(uint)uVar6 & 1;
      lVar9 = lVar7 + uVar8;
      if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103095844);
        (*pcVar4)();
      }
      if (*(long *)(lVar10 + 0x18) < lVar9) {
        func_0x000100102b0c(lVar9,param_2 & 1);
        uVar5 = uVar2;
        uVar8 = uVar3;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103095858);
          (*pcVar4)();
        }
joined_r0x000103095814:
        if ((uVar6 & 1) != 0) goto LAB_1030956b0;
LAB_1030957bc:
        lVar7 = *param_3;
        lVar9 = lVar7 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar9 + 0x40) = *(ulong *)(lVar9 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        func_0x000100102924(auStack_b0,*(long *)(lVar7 + 0x38) + uVar5 * 0x20);
        if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103095848);
          (*pcVar4)();
        }
        *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      }
      else {
        if ((param_2 & 1) == 0) {
          func_0x0001010fc388();
          goto joined_r0x000103095814;
        }
        if ((uVar6 & 1) == 0) goto LAB_1030957bc;
LAB_1030956b0:
        lVar7 = *param_3;
        lVar9 = uVar5 * 0x20;
        func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar9,auStack_f0);
        func_0x0001000bb420(auStack_f0,auStack_d0);
        func_0x000107c6142c(uVar3);
        func_0x000100183ab8(auStack_f0);
        func_0x000100183ab8(auStack_b0);
        lVar7 = *(long *)(lVar7 + 0x38);
        func_0x000100183ab8(lVar7 + lVar9);
        func_0x000100102924(auStack_d0,lVar7 + lVar9);
      }
      param_1 = param_1 + 0x30;
      param_2 = 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



/* Entry: 103095858; end: 10309587b;  */

void FUN_103095858(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001030942f4();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10309587c; end: 103095967;  */

undefined8 FUN_10309587c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103095968; end: 103095deb;  */

/* WARNING: Possible PIC construction at 0x000103095a58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095d84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103095d78) */
/* WARNING: Removing unreachable block (ram,0x000103095d68) */
/* WARNING: Removing unreachable block (ram,0x000103095d44) */
/* WARNING: Removing unreachable block (ram,0x000103095d24) */
/* WARNING: Removing unreachable block (ram,0x000103095cc0) */
/* WARNING: Removing unreachable block (ram,0x000103095d80) */
/* WARNING: Removing unreachable block (ram,0x000103095cdc) */
/* WARNING: Removing unreachable block (ram,0x000103095b40) */
/* WARNING: Removing unreachable block (ram,0x000103095ac8) */
/* WARNING: Removing unreachable block (ram,0x000103095d88) */
/* WARNING: Removing unreachable block (ram,0x000103095d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103095968(uint param_1,uint param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auStack_b0 [80];
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar6 = _DAT_1138131e8;
  puVar10 = *(undefined8 **)(unaff_x20 + _DAT_112f38c78);
  if (*(long *)((long)puVar10 + _DAT_1138131e8) != 0) {
    puVar5 = (undefined8 *)(*(long *)((long)puVar10 + _DAT_1138131e8) + _DAT_113067980);
    pcVar1 = (code *)*puVar5;
    uVar2 = puVar5[1];
    func_0x000107c6157c(uVar2);
    (*pcVar1)(param_1 & 1,param_2 & 1);
    func_0x000107c61574(uVar2);
  }
  func_0x0001041bf5c0(0);
  puVar5 = (undefined8 *)(ulong)(param_2 & 1);
  func_0x0001041bf1c4();
  lVar11 = _DAT_112f38c90;
  if ((param_1 & 1) == 0) {
    lVar11 = *(long *)((long)puVar10 + _DAT_1138131e0);
    if ((lVar11 == 0) || (*(long *)(unaff_x20 + _DAT_112f38c88) == 0)) {
      func_0x0001041b5884();
      puVar10 = (undefined8 *)*puVar5;
      uVar2 = puVar5[1];
      lVar6 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar9 = auStack_b0;
      func_0x000107c61534();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      uVar7 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      *(undefined1 **)(lVar6 + 0x28) = puVar9;
      func_0x000107c61434(uVar2);
      func_0x000107c602fc(0x2f);
      func_0x000107c6142c(0xe000000000000000);
      uVar7 = 0;
      func_0x000107c60714(lVar4,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0xd00000000000002c,0x800000010f11cf90);
      puVar3 = PTR___sSSN_11034da80;
      *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar6 + 0x30) = 0x5b;
      *(undefined8 *)(lVar6 + 0x38) = 0xe100000000000000;
      lVar4 = lVar6;
      func_0x000100214a84(lVar6);
      func_0x000107c61588(lVar6);
      FUN_1030968bc((undefined8 *)(lVar6 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c5fadc(puVar10,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c5f9dc(lVar4,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar4);
      func_0x000107c466bc(puVar8);
      puVar5 = puVar10;
    }
    else {
      puVar10 = *(undefined8 **)((long)puVar10 + lVar6);
      if (puVar10 == (undefined8 *)0x0) {
        func_0x000107c61174(lVar11);
        FUN_103095dec();
        func_0x000107c61170(lVar11);
      }
      else {
        pcVar1 = *(code **)((long)puVar10 + _DAT_113067978);
        uVar2 = ((undefined8 *)((long)puVar10 + _DAT_113067978))[1];
        func_0x000107c61174(lVar11);
        func_0x000107c61174(puVar10);
        func_0x000107c6157c(uVar2);
        (*pcVar1)(lVar11);
        puVar5 = puVar10;
      }
    }
  }
  else {
    lVar6 = unaff_x20 + _DAT_112f38c90;
    func_0x000107c61618();
    if (lVar6 == 0) {
      lVar11 = unaff_x20 + lVar11;
      func_0x000107c61618();
      if (lVar11 != 0) {
        func_0x0001041bb118(0);
        func_0x0001041b9620(puVar10);
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000107c5c3c8();
        func_0x000107c61180();
        func_0x000107c3d24c(lVar11);
        func_0x000107c615e8(lVar11);
        puVar5 = puVar10;
      }
    }
    else {
      func_0x0001041bb118(0);
      func_0x0001041b9620(puVar10);
      func_0x000107c3d254(lVar6);
      func_0x000107c615e8(lVar6);
      puVar5 = puVar10;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 103095dec; end: 103095f3f;  */

/* WARNING: Possible PIC construction at 0x000103095e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103095ef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103095e38) */
/* WARNING: Removing unreachable block (ram,0x000103095e3c) */
/* WARNING: Removing unreachable block (ram,0x000103095e58) */
/* WARNING: Removing unreachable block (ram,0x000103095e68) */
/* WARNING: Removing unreachable block (ram,0x000103095e7c) */
/* WARNING: Removing unreachable block (ram,0x000103095ef4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103095dec(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112f38c78) + _DAT_1138131e0);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x00010419e6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112f38c88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c10b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + _DAT_112f38c88),PTR_s_presentAttachment_1126206c0);
    return;
  }
  return;
}



/* Entry: 103095f40; end: 103095f9f; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter init] */

void FUN_103095f40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdDeepLinkAttachmentPresenter",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103095f6c);
  (*pcVar1)();
}



/* Entry: 103095fa0; end: 103095ff7; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103095fa0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38c78));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38c80));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38c88));
  param_1 = param_1 + _DAT_112f38c90;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103095ff8; end: 103096017;  */

void FUN_103095ff8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2da8);
  return;
}



/* Entry: 103096018; end: 103096053; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter canHandleAttachment:] */

bool FUN_103096018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 3;
}



/* Entry: 103096054; end: 10309657b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103096054(void)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  undefined1 *puVar15;
  long extraout_x8;
  long lVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  code *pcStack_130;
  uint uStack_124;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [112];
  
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar19 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar11 = _DAT_1138131d8;
  lVar18 = (long)&pcStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(unaff_x20 + _DAT_112f38c80);
  if (lVar16 != 0) {
    lVar17 = *(long *)(unaff_x20 + _DAT_112f38c78);
    pcVar20 = *(code **)(lVar19 + 0x10);
    (*pcVar20)(lVar18,lVar17 + _DAT_1138131d8,lVar6);
    lVar7 = lVar16;
    func_0x000107c615f0(lVar16);
    func_0x000107c5ed90();
    pcStack_130 = *(code **)(lVar19 + 8);
    (*pcStack_130)(lVar18,lVar6);
    lVar8 = lVar16;
    func_0x000107c4a6c8();
    func_0x000107c61170(lVar7);
    lVar19 = _DAT_1138131e8;
    uStack_124 = (uint)lVar8;
    if (*(long *)(lVar17 + _DAT_1138131e8) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar17 + _DAT_1138131e8) + _DAT_113067988);
      pcVar3 = (code *)*puVar1;
      uVar4 = puVar1[1];
      func_0x000107c6157c(uVar4);
      (*pcVar3)(uStack_124 ^ 1);
      func_0x000107c61574(uVar4);
    }
    lVar7 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    puVar15 = auStack_e0;
    func_0x000107c61534();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    ppuVar9 = &PTR____CFConstantStringClassReference_110f0e358;
    func_0x000107c5faec();
    ppuStack_110 = ppuVar9;
    puStack_108 = puVar15;
    func_0x000107c61434(puVar15);
    func_0x000107c602d4(lVar7 + 0x20,&ppuStack_110,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    *(undefined **)(lVar7 + 0x60) = PTR___sSbN_11034dd40;
    func_0x000107c6142c(puVar15);
    *(undefined1 *)(lVar7 + 0x48) = 1;
    lVar8 = lVar7;
    func_0x000100dfa3f0(lVar7);
    func_0x000107c61588(lVar7);
    FUN_1030968bc(lVar7 + 0x20,0x112d377a0,&UNK_10d9016e0);
    if (*(long *)(lVar17 + lVar19) != 0) {
      plVar2 = (long *)(*(long *)(lVar17 + lVar19) + _DAT_113067990);
      lVar19 = *plVar2;
      if (lVar19 != 0) {
        lVar21 = plVar2[1];
        puStack_118 = PTR_DAT_1126a2840;
        lVar7 = lVar16;
        func_0x000107c61494(lVar16,1,&puStack_118);
        if (lVar7 != 0) {
          (*pcVar20)(lVar18,lVar17 + lVar11,lVar6);
          lVar11 = lVar21;
          func_0x000107c6157c(lVar21);
          func_0x000107c5ed90();
          (*pcStack_130)(lVar18,lVar6);
          lVar6 = lVar8;
          func_0x000107c5f9dc(lVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                              PTR___ss11AnyHashableVSHsWP_11034e450);
          func_0x000107c6142c(lVar8);
          puVar12 = &UNK_1106073a8;
          func_0x000107c613fc(&UNK_1106073a8,0x20,7);
          *(long *)(puVar12 + 0x10) = lVar19;
          *(long *)(puVar12 + 0x18) = lVar21;
          puVar5 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_f0 = FUN_103096880;
          ppuStack_110 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
          puStack_108 = (undefined1 *)0x42000000;
          puStack_100 = &UNK_100ff4e14;
          puStack_f8 = &UNK_1106073c0;
          pppuVar14 = &ppuStack_110;
          puStack_e8 = puVar12;
          func_0x000107c60bc4(pppuVar14);
          puVar12 = puStack_e8;
          func_0x000107c6157c(lVar21);
          func_0x000107c61574(puVar12);
          puVar12 = &UNK_110607330;
          func_0x000107c613fc(&UNK_110607330,0x18,7);
          func_0x000107c61614(puVar12 + 0x10,unaff_x20);
          puVar13 = &UNK_1106073f8;
          func_0x000107c613fc(&UNK_1106073f8,0x19,7);
          *(undefined **)(puVar13 + 0x10) = puVar12;
          puVar13[0x18] = (char)uStack_124;
          pcStack_f0 = FUN_1030968a0;
          ppuStack_110 = (undefined **)puVar5;
          puStack_108 = (undefined1 *)0x42000000;
          puStack_100 = &UNK_1000f3aa0;
          puStack_f8 = &UNK_110607410;
          pppuVar10 = &ppuStack_110;
          puStack_e8 = puVar13;
          func_0x000107c60bc4(pppuVar10);
          func_0x000107c61574(puStack_e8);
          func_0x000107c44628(lVar7);
          func_0x000107c60bd0(pppuVar10);
          func_0x000107c60bd0(pppuVar14);
          func_0x000107c615e8(lVar16);
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lVar6);
          func_0x0001013c2974(lVar19,lVar21);
          return;
        }
      }
    }
    lVar19 = lVar18;
    (*pcVar20)(lVar18,lVar17 + lVar11,lVar6);
    func_0x000107c5ed90();
    (*pcStack_130)(lVar18,lVar6);
    lVar11 = lVar8;
    func_0x000107c5f9dc(lVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar8);
    puVar12 = &UNK_110607330;
    func_0x000107c613fc(&UNK_110607330,0x18,7);
    func_0x000107c61614(puVar12 + 0x10,unaff_x20);
    puVar13 = &UNK_110607358;
    func_0x000107c613fc(&UNK_110607358,0x19,7);
    *(undefined **)(puVar13 + 0x10) = puVar12;
    puVar13[0x18] = (char)uStack_124;
    pcStack_f0 = (code *)0x10309690c;
    ppuStack_110 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
    puStack_108 = (undefined1 *)0x42000000;
    puStack_100 = &UNK_1000f3aa0;
    puStack_f8 = &UNK_110607370;
    pppuVar14 = &ppuStack_110;
    puStack_e8 = puVar13;
    func_0x000107c60bc4(pppuVar14);
    func_0x000107c61574(puStack_e8);
    func_0x000107c44624(lVar16);
    func_0x000107c60bd0(pppuVar14);
    func_0x000107c615e8(lVar16);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar11);
  }
  return;
}



/* Entry: 10309657c; end: 1030965ef;  */

void FUN_10309657c(uint param_1,long param_2,uint param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_103095968(param_1 & 1,(param_3 ^ 0xffffffff) & 1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1030965f0; end: 103096617; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter presentAttachment] */

void FUN_1030965f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103096054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103096618; end: 10309674f;  */

/* WARNING: Possible PIC construction at 0x000103096738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030966f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309673c) */
/* WARNING: Removing unreachable block (ram,0x0001030966f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103096618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  func_0x0001041bb118(0);
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112f38c78);
  func_0x0001041b9620(puVar1);
  func_0x0001041bf5c0(0);
  uVar2 = 0;
  func_0x0001041bf1c4(0);
  lVar5 = *(long *)(unaff_x20 + _DAT_112f38c88);
  if ((lVar5 == 0) || (lVar3 = lVar5, func_0x000107c4a214(), (int)lVar3 == 0)) {
    lVar5 = unaff_x20 + _DAT_112f38c90;
    func_0x000107c61618();
    if (lVar5 == 0) goto code_r0x000107c61170;
    puVar4 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
  }
  else {
    lVar3 = lVar5;
    func_0x000107c4a214();
    if ((int)lVar3 != 0) {
      func_0x000107c4201c(lVar5);
      goto code_r0x000107c61170;
    }
    lVar5 = unaff_x20 + _DAT_112f38c90;
    func_0x000107c61618();
    if (lVar5 == 0) goto code_r0x000107c61170;
    puVar4 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c5c3c8();
  }
  func_0x000107c61180();
  func_0x000107c3d24c(lVar5,param_2,puVar1,puVar4,uVar2);
  func_0x000107c615e8(lVar5);
  puVar1 = puVar4;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 103096750; end: 103096777; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter dismissAttachment] */

void FUN_103096750(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103096618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103096778; end: 10309678f; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103096778(long param_1)

{
  if (*(long *)(param_1 + _DAT_112f38c88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112f38c88),PTR_s_isPresenting_1125fc4e0);
    return;
  }
  return;
}



/* Entry: 103096790; end: 103096793; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter adAttachmentPresenterTriggerAttempt:] */

void FUN_103096790(void)

{
  return;
}



/* Entry: 103096794; end: 103096797; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter adAttachmentPresenterDidLoad:metrics:] */

void FUN_103096794(void)

{
  return;
}



/* Entry: 103096798; end: 10309679b; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter adAttachmentPresenterDidTrigger:] */

void FUN_103096798(void)

{
  return;
}



/* Entry: 10309679c; end: 1030967fb; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter adAttachmentPresenterDidPresent:attachmentMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309679c(long param_1)

{
  param_1 = param_1 + _DAT_112f38c90;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3d254();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1030967fc; end: 103096863; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdDeepLinkAttachmentPresenter adAttachmentPresenterDidComplete:result:attachmentMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030967fc(long param_1)

{
  param_1 = param_1 + _DAT_112f38c90;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3d24c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 103096864; end: 10309687f;  */

void FUN_103096864(long param_1,long param_2)

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



/* Entry: 103096880; end: 10309689f;  */

void FUN_103096880(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030968a0; end: 1030968bb;  */

void FUN_1030968a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10309657c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1030968bc; end: 1030968fb;  */

undefined8 FUN_1030968bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1030968fc; end: 10309690f;  */

void FUN_1030968fc(long param_1,long param_2)

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



/* Entry: 103096910; end: 10309751b;  */

void FUN_103096910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_110607448;
  func_0x000107c613fc(&UNK_110607448,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_6;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_11;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_14;
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_10309751c,puVar1);
  return;
}



/* Entry: 10309751c; end: 10309755f;  */

void FUN_10309751c(void)

{
  long unaff_x20;
  
  func_0x000103096a78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 103097560; end: 10309759f;  */

undefined ** FUN_103097560(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 1030975a0; end: 1030975ff; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdInstantPageAttachmentPresenter init] */

void FUN_1030975a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdInstantPageAttachmentPresenter",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030975cc);
  (*pcVar1)();
}



/* Entry: 103097600; end: 1030977a7; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdInstantPageAttachmentPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010309765c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309767c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030976bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030976dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309770c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309772c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309775c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309777c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103097760) */
/* WARNING: Removing unreachable block (ram,0x000103097730) */
/* WARNING: Removing unreachable block (ram,0x000103097710) */
/* WARNING: Removing unreachable block (ram,0x0001030976e0) */
/* WARNING: Removing unreachable block (ram,0x0001030976c0) */
/* WARNING: Removing unreachable block (ram,0x000103097680) */
/* WARNING: Removing unreachable block (ram,0x000103097660) */
/* WARNING: Removing unreachable block (ram,0x000103097780) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103097600(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38cf0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38cf8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38d00));
  FUN_103088dc0(param_1 + _DAT_112f38d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38d18));
  return;
}



/* Entry: 1030977a8; end: 1030977c7;  */

void FUN_1030977a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b2e88);
  return;
}



/* Entry: 1030977c8; end: 103097803; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdInstantPageAttachmentPresenter canHandleAttachment:] */

bool FUN_1030977c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000104191a9c();
  func_0x000107c61170(param_3);
  return (int)uVar1 == 8;
}



/* Entry: 103097804; end: 10309781b; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdInstantPageAttachmentPresenter isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103097804(long param_1)

{
  return *(int *)(param_1 + _DAT_112f38d08) == 1;
}



/* Entry: 10309781c; end: 10309831f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309781c(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  ulong **ppuVar12;
  undefined1 *puVar13;
  long extraout_x8;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x20;
  ulong *puVar25;
  undefined8 uVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  code *pcVar30;
  undefined8 uVar31;
  ulong *puVar32;
  undefined1 *puVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  long alStack_190 [2];
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar35 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar35 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar33 = auStack_180 + lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f38d08) = 1;
  uVar24 = *(undefined8 *)(unaff_x20 + _DAT_112f38d00);
  lVar34 = *(long *)(unaff_x20 + _DAT_112f38cf0);
  uVar29 = *(undefined8 *)(unaff_x20 + _DAT_112f38d18);
  uVar31 = *(undefined8 *)(unaff_x20 + _DAT_112f38d20);
  puVar25 = *(ulong **)(unaff_x20 + _DAT_112f38d28);
  uStack_148 = *(undefined8 *)(unaff_x20 + _DAT_112f38d30);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f38d38);
  uVar37 = ((undefined8 *)(unaff_x20 + _DAT_112f38d40))[1];
  uVar36 = *(undefined8 *)(unaff_x20 + _DAT_112f38d40);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f38d48);
  uStack_160 = *(undefined8 *)(unaff_x20 + _DAT_112f38d50);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f38d58);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f38d60);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f38d68);
  uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112f38d70);
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f38d78);
  uStack_150 = *(undefined8 *)(unaff_x20 + _DAT_112f38d80);
  uStack_178 = *(undefined8 *)(unaff_x20 + _DAT_112f38d88);
  uStack_170 = *(undefined8 *)(unaff_x20 + _DAT_112f38d90);
  uStack_158 = *(undefined8 *)(unaff_x20 + _DAT_112f38d98);
  uStack_140 = *(undefined8 *)(unaff_x20 + _DAT_112f38da0);
  uVar23 = *(undefined8 *)(unaff_x20 + _DAT_112f38da8);
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112f38db0);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112f38db8);
  lVar4 = 0;
  func_0x00010309c534();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar35 = lVar5 + _DAT_112f38ef0;
  *(undefined8 *)(lVar35 + 8) = 0;
  func_0x000107c61614(lVar35,0);
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f38f58);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  lVar27 = _DAT_112f38f68;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar27) = puVar6;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f38f88);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112f38ee8) = uVar24;
  *(long *)(lVar5 + _DAT_112f38ee0) = lVar34;
  *(undefined ***)(lVar35 + 8) = &PTR_DAT_1106074b8;
  lVar27 = unaff_x20;
  func_0x000107c61604(lVar35);
  *(undefined8 *)(lVar5 + _DAT_112f38ef8) = uVar29;
  *(undefined8 *)(lVar5 + _DAT_112f38f00) = uVar31;
  *(ulong **)(lVar5 + _DAT_112f38f08) = puVar25;
  lStack_168 = _DAT_113068288;
  puVar2 = (undefined8 *)(*(long *)(lVar34 + _DAT_113068288) + _DAT_113067ec0);
  lVar35 = puVar2[1];
  if (lVar35 == 0) {
    func_0x000107c615f0(uVar24);
    func_0x000107c61174(lVar34);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uVar31);
    func_0x000107c6157c();
    func_0x00010011df08();
    func_0x000107c61180();
    puVar32 = puVar25;
    func_0x000107c5faec();
    func_0x000107c61170(puVar25);
  }
  else {
    puVar32 = (ulong *)*puVar2;
    func_0x000107c615f0(uVar24);
    func_0x000107c61174(lVar34);
    func_0x000107c6157c(uVar29);
    func_0x000107c6157c(uVar31);
    func_0x000107c6157c(puVar25);
    lVar27 = lVar35;
  }
  func_0x000103c56918(0);
  func_0x000107c61434();
  func_0x000103c558f8();
  lVar7 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(puVar33,1,1,lVar7);
  uVar29 = 1;
  puVar13 = puVar33;
  func_0x000103c55984(1,puVar33);
  func_0x0001000293e4(puVar33);
  func_0x000107c5fadc(uVar29,puVar13);
  func_0x000107c6142c(puVar13);
  func_0x000107c5284c(lVar35);
  func_0x000107c61170(uVar29);
  func_0x0001000d224c(&puStack_a8);
  puVar25 = puVar32;
  func_0x000107c5fadc(puVar32,lVar27);
  lVar7 = lVar35;
  func_0x000107c3dfb0(lVar35);
  func_0x000107c61180();
  puVar8 = puStack_a8;
  func_0x000107c443b8();
  func_0x000107c61180();
  func_0x000107c615e8(puStack_a8);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(lVar7);
  *(ulong **)(lVar5 + _DAT_112f38f20) = puVar8;
  puVar6 = PTR__swift_isaMask_11034f488;
  pcVar30 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x88);
  func_0x000107c61174(puVar8);
  func_0x000107c61434(lVar27);
  (*pcVar30)(puVar32,lVar27);
  func_0x000107c61170(puVar8);
  puVar25 = (ulong *)0x0;
  func_0x000103c43334();
  func_0x000107c610f8();
  func_0x000107c469b0(0,0,0,0);
  lVar7 = _DAT_112f38f10;
  *(ulong **)(lVar5 + _DAT_112f38f10) = puVar25;
  puStack_a8 = (ulong *)0x0;
  lStack_a0 = 0xe000000000000000;
  func_0x000107c61174();
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(lStack_a0);
  puStack_a8 = puVar32;
  lStack_a0 = lVar27;
  func_0x000107c5fb78(0xd000000000000010,0x800000010f11d010);
  (**(code **)((*(ulong *)puVar6 & *puVar25) + 0x88))(puStack_a8,lStack_a0);
  func_0x000107c61170(puVar25);
  uVar29 = *(undefined8 *)(lVar5 + lVar7);
  func_0x000107c61174(uVar29);
  func_0x000103c55a80();
  func_0x000107c61170(uVar29);
  uVar26 = *(undefined8 *)(lVar5 + lVar7);
  func_0x000103c483bc(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar24);
  func_0x000107c61174();
  uVar31 = uStack_150;
  func_0x000107c6157c(uStack_150);
  uVar9 = uStack_160;
  func_0x000107c61174();
  uVar29 = uStack_158;
  func_0x000107c6157c(uStack_158);
  func_0x000103c45ff8(uVar26,uVar31,uVar24,uVar9,uVar29);
  uVar24 = uStack_148;
  *(undefined8 *)(lVar5 + _DAT_112f38f18) = uVar26;
  *(undefined8 *)(lVar5 + _DAT_112f38ed8) = uStack_148;
  *(undefined8 *)(lVar5 + _DAT_112f38f28) = uVar14;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f38f30);
  puVar2[1] = uVar37;
  *puVar2 = uVar36;
  *(undefined8 *)(lVar5 + _DAT_112f38f38) = uVar15;
  *(undefined8 *)(lVar5 + _DAT_112f38f40) = uVar9;
  *(undefined8 *)(lVar5 + _DAT_112f38f48) = uVar16;
  *(undefined8 *)(lVar5 + _DAT_112f38f50) = uVar17;
  *(undefined8 *)(lVar5 + _DAT_112f38f60) = uVar18;
  *(undefined8 *)(lVar5 + _DAT_112f38f70) = uVar22;
  *(undefined8 *)(lVar5 + _DAT_112f38f78) = uVar19;
  *(undefined8 *)(lVar5 + _DAT_112f38f80) = uVar31;
  *(undefined8 *)(lVar5 + _DAT_112f38f98) = uVar29;
  func_0x000107c6157c(uVar31);
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar29);
  func_0x000107c61174(uVar24);
  func_0x000107c61174(uVar14);
  func_0x000107c615f0(uVar36);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(uVar16);
  func_0x000107c61174(uVar17);
  func_0x000107c615f0(uVar18);
  func_0x000107c6157c(uVar22);
  func_0x000107c61174(uVar19);
  func_0x0001000d224c(&puStack_a8);
  *(ulong **)(lVar5 + _DAT_112f38fa0) = puStack_a8;
  *(undefined8 *)(lVar5 + _DAT_112f38fa8) = uVar23;
  *(undefined8 *)(lVar5 + _DAT_112f38fb0) = uVar20;
  *(undefined8 *)(lVar5 + _DAT_112f38fb8) = uVar21;
  *(undefined1 *)(lVar5 + _DAT_112f38fc0) = 0;
  lVar27 = ((undefined8 *)(lVar34 + _DAT_1130682c8))[1];
  if (lVar27 != 0) {
    puVar2 = (undefined8 *)(*(long *)(lVar34 + lStack_168) + _DAT_113067eb8);
    lVar7 = puVar2[1];
    if (lVar7 != 0) {
      uVar17 = *(undefined8 *)(lVar34 + _DAT_1130682c8);
      uVar16 = *puVar2;
      puVar6 = PTR_PTR_1126b0798;
      func_0x000107c610f8();
      func_0x000107c6157c(uVar23);
      func_0x000107c6157c(uVar20);
      func_0x000107c6157c(uVar21);
      func_0x000107c61434(lVar7);
      uVar14 = uStack_178;
      func_0x000107c615f0(uStack_178);
      uVar15 = uStack_170;
      func_0x000107c615f0(uStack_170);
      func_0x000107c5fadc(uVar16,lVar7);
      func_0x000107c6142c(lVar7);
      func_0x000107c5fadc(uVar17,lVar27);
      func_0x000107c485d4();
      func_0x000107c615e8(uVar14);
      func_0x000107c615e8(uVar15);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar17);
      *(undefined **)(lVar5 + _DAT_112f38f90) = puVar6;
      goto LAB_1030980c8;
    }
  }
  *(undefined8 *)(lVar5 + _DAT_112f38f90) = 0;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar20);
  func_0x000107c6157c(uVar21);
LAB_1030980c8:
  plVar10 = &lStack_78;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c61154(plVar10,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  FUN_10309b2fc();
  func_0x00010309b3f4();
  puVar6 = &UNK_110607550;
  func_0x000107c613fc(&UNK_110607550,0x18,7);
  *(long **)(puVar6 + 0x10) = plVar10;
  func_0x000107c61174();
  puVar1 = PTR___sytN_11034f1b0 + 8;
  *(undefined **)((long)alStack_190 + lVar3) = puVar1;
  uVar14 = 6;
  func_0x0001001ca524(6,0,8,4,0,0,&UNK_10db84340,puVar6);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar14);
  puVar6 = &UNK_110607578;
  func_0x000107c613fc(&UNK_110607578,0x18,7);
  *(long **)(puVar6 + 0x10) = plVar10;
  func_0x000107c61174();
  *(undefined **)((long)alStack_190 + lVar3) = puVar1;
  uVar14 = 6;
  func_0x0001001ca524(6,0,8,4,0,0,&UNK_10db84348,puVar6);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar14);
  uVar15 = *(undefined8 *)((long)plVar10 + _DAT_112f38fa0);
  uVar14 = uVar15;
  func_0x000107c615f0(uVar15);
  FUN_10309b590();
  func_0x000107c59fcc(uVar15);
  func_0x000107c61170(plVar10);
  func_0x000107c61170(lVar35);
  func_0x000107c615e8(uVar15);
  func_0x000107c61170(uVar14);
  uVar28 = *(ulong *)(unaff_x20 + _DAT_112f38cf8);
  uVar11 = uVar28;
  func_0x000107c61150(uVar28,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_attachUI_completion__1125a0c10);
  if ((uVar11 & 1) != 0) {
    puVar6 = &UNK_1106074d8;
    func_0x000107c613fc(&UNK_1106074d8,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,unaff_x20);
    pcStack_88 = FUN_103098898;
    puStack_a8 = (ulong *)PTR___NSConcreteStackBlock_11034bd00;
    lStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_110607590;
    ppuVar12 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar12);
    puVar1 = puStack_80;
    func_0x000107c61580(puVar6,2);
    func_0x000107c61574(puVar1);
    func_0x000107c3e2c4(uVar28);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61578(puVar6,2);
  }
  func_0x000107c61170(plVar10);
  return;
}



/* Entry: 103098320; end: 103098403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103098320(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f38d10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x0001041bb118(0);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112f38cf0);
      func_0x000107c61174(uVar2);
      uVar3 = uVar2;
      func_0x0001041b974c();
      func_0x000107c61170(uVar2);
      uVar2 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2c0();
      func_0x000107c3d254(lVar1);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103098404; end: 10309842b; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdInstantPageAttachmentPresenter presentAttachment] */

void FUN_103098404(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10309781c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10309842c; end: 1030984f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309842c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if (*(int *)(unaff_x20 + _DAT_112f38d08) == 1) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f38cf8);
    puVar1 = &UNK_1106074d8;
    func_0x000107c613fc(&UNK_1106074d8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    uStack_40 = 0x1030988b4;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_110607518;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c41864(uVar3);
    func_0x000107c60bd0(ppuVar2);
  }
  return;
}



/* Entry: 1030984f8; end: 103098637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030984f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f38d10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001041bb118(0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f38cf0);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x0001041b974c();
      func_0x000107c61170(uVar3);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      uVar3 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2c0();
      func_0x000107c3d24c(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + _DAT_112f38d08) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 103098638; end: 10309865f; -[_TtC40SCAdAttachmentHandlerImplementationSwift32AdInstantPageAttachmentPresenter dismissAttachment] */

void FUN_103098638(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10309842c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103098660; end: 103098787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103098660(uint param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  if (*(int *)(unaff_x20 + _DAT_112f38d08) == 1) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f38cf8);
    puVar2 = &UNK_1106074d8;
    func_0x000107c613fc(&UNK_1106074d8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_40 = FUN_103098788;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000b0c7c;
    puStack_48 = &UNK_1106074f0;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
  }
  lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_112f38cf0) + _DAT_1130682b8);
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + _DAT_1130679c0);
    pcVar6 = (code *)*puVar1;
    if (pcVar6 != (code *)0x0) {
      uVar5 = puVar1[1];
      func_0x000107c6157c(uVar5);
      (*pcVar6)(param_1 & 1);
      func_0x000101237350(pcVar6,uVar5);
    }
  }
  return;
}



/* Entry: 103098788; end: 1030987ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103098788(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f38d10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001041bb118(0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f38cf0);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x0001041b974c();
      func_0x000107c61170(uVar3);
      puVar5 = PTR_PTR_1126af5d0;
      func_0x000107c61168(PTR_PTR_1126af5d0);
      func_0x000107c5c3c8();
      func_0x000107c61180();
      uVar3 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2c0();
      func_0x000107c3d24c(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + _DAT_112f38d08) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1030987ac; end: 103098803;  */

void FUN_1030987ac(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103098804;
  plVar2[0x15] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0x16] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1030a45a4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar2[0x17] = lVar3;
  plVar2[0x18] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030a1514,lVar3,lVar4);
  return;
}



/* Entry: 103098804; end: 10309883f;  */

void FUN_103098804(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010309883c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103098840; end: 103098897;  */

void FUN_103098840(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1030988b0;
  plVar2[0x17] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0x18] = lVar4;
  lVar4 = 0x112d45220;
  FUN_1030a45a4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar2[0x19] = lVar3;
  plVar2[0x1a] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1030a185c,lVar3,lVar4);
  return;
}



/* Entry: 103098898; end: 1030988b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103098898(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f38d10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x0001041bb118(0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f38cf0);
      func_0x000107c61174(uVar3);
      uVar4 = uVar3;
      func_0x0001041b974c();
      func_0x000107c61170(uVar3);
      uVar3 = 0;
      func_0x0001041bf5c0(0);
      func_0x0001041bf2c0();
      func_0x000107c3d254(lVar2);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1030988b8; end: 10309948f;  */

void FUN_1030988b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f38638,&UNK_10db83ad0);
  puVar1 = &UNK_1106075d0;
  func_0x000107c613fc(&UNK_1106075d0,0xb0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_13;
  *(undefined8 *)(puVar1 + 0x30) = param_14;
  *(undefined8 *)(puVar1 + 0x38) = param_20;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  *(undefined8 *)(puVar1 + 0x48) = param_12;
  *(undefined8 *)(puVar1 + 0x50) = param_4;
  *(undefined8 *)(puVar1 + 0x58) = param_5;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_8;
  *(undefined8 *)(puVar1 + 0x70) = param_9;
  *(undefined8 *)(puVar1 + 0x78) = param_10;
  *(undefined8 *)(puVar1 + 0x80) = param_11;
  *(undefined8 *)(puVar1 + 0x88) = param_15;
  *(undefined8 *)(puVar1 + 0x90) = param_16;
  *(undefined8 *)(puVar1 + 0x98) = param_17;
  *(undefined8 *)(puVar1 + 0xa0) = param_18;
  *(undefined8 *)(puVar1 + 0xa8) = param_19;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x0001000823a8(FUN_103099490,puVar1);
  return;
}



/* Entry: 103099490; end: 1030994db;  */

void FUN_103099490(void)

{
  long unaff_x20;
  
  func_0x000103098a84(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Entry: 1030994dc; end: 10309951b;  */

undefined ** FUN_1030994dc(void)

{
  return &PTR_DAT_112f39ed0;
}



/* Entry: 10309951c; end: 10309968b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309951c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_4;
  func_0x000107c614f0();
  lVar3 = _DAT_112f38e50;
  pcVar5 = "AdInstantPageEventLoggerImpl";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(param_4 + lVar3) = pcVar5;
  lVar3 = _DAT_112f38e58;
  uVar6 = 0x112f38e20;
  func_0x0001000285a8(0x112f38e20,&UNK_10db84408);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar3) = uVar6;
  lVar3 = _DAT_112f38e60;
  uVar6 = 0x112f38e28;
  func_0x0001000285a8(0x112f38e28,&UNK_10db84410);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar3) = uVar6;
  lVar3 = _DAT_112f38e68;
  uVar6 = 0x112f38e30;
  func_0x0001000285a8(0x112f38e30,&UNK_10db84418);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_4 + lVar3) = uVar6;
  puVar1 = (undefined8 *)(param_4 + _DAT_112f38e70);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_4 + _DAT_112f38e38) = *(undefined8 *)(param_1 + _DAT_113068288);
  *(undefined8 *)(param_4 + _DAT_112f38e40) = param_2;
  *(undefined8 *)(param_4 + _DAT_112f38e48) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_4;
  lStack_58 = lVar4;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 10309968c; end: 1030996cb; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdInstantPageEventLoggerImpl adInstantPageEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309968c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030996cc; end: 10309970b; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdInstantPageEventLoggerImpl adInstantPageOperationalEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030996cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10309970c; end: 10309974b; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdInstantPageEventLoggerImpl asmEventObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309970c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10309974c; end: 103099bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309974c(double param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong auStack_f0 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f38e48));
  lVar15 = *(long *)(unaff_x20 + _DAT_112f38e38);
  lVar6 = ((long *)(lVar15 + _DAT_113067ec0))[1];
  if (lVar6 == 0) {
    func_0x000107c5eec4((long)&uStack_b0 + lVar1);
    func_0x000107c5eeac();
    (**(code **)(lVar14 + 8))((long)&uStack_b0 + lVar1,lVar5);
    lVar5 = 0;
    lVar14 = lVar6;
  }
  else {
    lVar5 = lVar6;
    lVar14 = *(long *)(lVar15 + _DAT_113067ec0);
    param_3 = lVar6;
  }
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c61434(lVar5);
  func_0x000107c602fc(0x15);
  func_0x000107c5fb78(0x5f746e6174736e69,0xed00005f65676170);
  func_0x000107c5fb78(lVar14,param_3);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar9 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  uStack_88 = param_2;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar9);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(param_1 * 1000.0,&uStack_80,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar2 = uStack_78;
  uVar8 = uStack_80;
  func_0x0001000d224c(&uStack_80);
  uVar3 = uStack_80;
  if (uStack_80 == 0) {
    uVar16 = 0;
  }
  else {
    lVar5 = lVar14;
    func_0x000107c5fadc(lVar14,param_3);
    uVar16 = uVar3;
    func_0x000107c5b77c();
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar5);
  }
  func_0x0001000d224c(&uStack_80);
  uVar3 = uStack_80;
  if (uStack_80 == 0) {
    uVar17 = 1;
  }
  else {
    lVar5 = lVar14;
    func_0x000107c5fadc(lVar14,param_3);
    uVar17 = uVar3;
    func_0x000107c5df18();
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar5);
  }
  func_0x0001000d224c(&uStack_80);
  uVar3 = uStack_80;
  if (uStack_80 == 0) {
    uVar11 = 1;
  }
  else {
    lVar5 = lVar14;
    func_0x000107c5fadc(lVar14,param_3);
    uVar11 = uVar3;
    func_0x000107c42f50();
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(lVar5);
  }
  if (-1 < (long)(uVar17 | uVar16 | uVar11)) {
    uVar7 = *(undefined8 *)(lVar15 + _DAT_113067ee8);
    uVar13 = *(undefined8 *)(lVar15 + _DAT_113067eb0);
    lVar5 = ((undefined8 *)(lVar15 + _DAT_113067eb0))[1];
    uStack_a0 = *(undefined8 *)(lVar15 + _DAT_113067ee0);
    uStack_a8 = *(undefined8 *)(lVar15 + _DAT_113067ec8);
    uVar12 = *(undefined8 *)(lVar15 + _DAT_113067eb8);
    lVar6 = ((undefined8 *)(lVar15 + _DAT_113067eb8))[1];
    uStack_b0 = *(undefined8 *)(lVar15 + _DAT_113067ed0);
    uStack_98 = uVar17;
    uStack_90 = uVar16;
    func_0x000107c61174();
    func_0x000107c61434(lVar6);
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar8,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5fadc(lVar14,param_3);
    func_0x000107c6142c(param_3);
    if (lVar6 == 0) {
      uVar12 = 0;
    }
    else {
      func_0x000107c5fadc(uVar12,lVar6);
      func_0x000107c6142c(lVar6);
    }
    if (lVar5 == 0) {
      uVar13 = 0;
    }
    else {
      func_0x000107c5fadc(uVar13,lVar5);
      func_0x000107c6142c(lVar5);
    }
    puVar9 = PTR_PTR_1126b9150;
    func_0x000107c610f8(PTR_PTR_1126b9150);
    uVar10 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010efbcc50);
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x38) = uVar10;
    uVar2 = uStack_b0;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x28) = 3;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x30) = uVar2;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x20) = 3;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x18) = uStack_a8;
    uVar2 = uStack_a0;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 8) = uVar7;
    *(undefined8 *)((long)auStack_f0 + lVar1 + 0x10) = uVar2;
    *(ulong *)((long)auStack_f0 + lVar1) = uVar11;
    func_0x000107c30ad4(param_1 * 1000.0,puVar9,uVar8,lVar14,uVar12,uVar13,0,uStack_90,uStack_98);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar10);
    return puVar9;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x103099bbc);
  (*pcVar4)();
}



/* Entry: 103099bbc; end: 103099c43; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdInstantPageEventLoggerImpl userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x000103099c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103099c28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103099c1c) */
/* WARNING: Removing unreachable block (ram,0x000103099c2c) */

void FUN_103099bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_103099d68(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103099c44; end: 103099ca3; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdInstantPageEventLoggerImpl init] */

void FUN_103099c44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdInstantPageEventLoggerImpl",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103099c70);
  (*pcVar1)();
}



/* Entry: 103099ca4; end: 103099d3f; -[_TtC40SCAdAttachmentHandlerImplementationSwift28AdInstantPageEventLoggerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103099ca4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38e38));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f38e40));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38e48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38e50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f38e58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f38e60));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f38e68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f38e70 + 8))
  ;
  return;
}



/* Entry: 103099d40; end: 103099d5f;  */

void FUN_103099d40(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3010);
  return;
}



/* Entry: 103099d60; end: 103099d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103099d60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  
  lVar1 = 0x15;
  FUN_10309974c();
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f38e70);
  lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112f38e70))[1];
  func_0x000107c61434(lVar8);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0x6c623a74756f6261;
  func_0x000107c5fadc(0x6c623a74756f6261,0xeb000000006b6e61);
  uVar6 = 0x24;
  func_0x000107c5fadc(0x24,0xe100000000000000);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x000107c5fadc(uVar9,lVar8);
    func_0x000107c6142c(lVar8);
  }
  puVar7 = PTR_PTR_1126b9030;
  func_0x000107c610f8();
  lVar8 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c30cb4(0xbff0000000000000,0xbff0000000000000,puVar7,lVar2,0x15,0xffffffffffffffff,
                      uVar3,uVar4,0,uVar5,1,0xffffffffffffffff,0xffffffffffffffff,uVar6,0,0,uVar9,
                      lVar8);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170();
  func_0x0001018acc84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined **)(lVar8 + 0x20) = puVar7;
  func_0x00010468314c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  lVar2 = lVar1;
  func_0x000104682d18(lVar1,lVar8);
  lStack_68 = lVar2;
  func_0x0001002a64a8(&lStack_68);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 103099d68; end: 10309a2f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103099d68(undefined8 *****param_1,undefined8 *****param_2)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  long lVar6;
  undefined8 *****pppppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  ulong uVar15;
  long extraout_x8;
  undefined8 *****unaff_x20;
  undefined8 *****pppppuVar16;
  undefined *puVar17;
  undefined8 *****pppppuVar18;
  undefined8 *****pppppuVar19;
  undefined8 uVar20;
  undefined *unaff_x28;
  long alStack_160 [9];
  long alStack_118 [13];
  undefined8 ****appppuStack_b0 [4];
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar19 = (undefined8 *****)0xd000000000000014;
  pppppuVar3 = (undefined8 *****)0x0;
  func_0x000107c5fb10();
  pppppuVar18 = (undefined8 *****)pppppuVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(pppppuVar18[8]);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pppppuVar7 = (undefined8 *****)((long)appppuStack_b0 + lVar1);
  pppppuVar4 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  pppppuVar5 = pppppuVar4;
  func_0x000107c5faec();
  func_0x000107c61170(pppppuVar4);
  if ((pppppuVar5 == (undefined8 *****)0xd000000000000014) &&
     (param_2 == (undefined8 *****)0x800000010f11d0f0)) {
    func_0x000107c6142c(0x800000010f11d0f0);
  }
  else {
    pppppuVar4 = pppppuVar5;
    pppppuVar13 = param_2;
    func_0x000107c605b8(pppppuVar5,param_2,0xd000000000000014,0x800000010f11d0f0,0);
    func_0x000107c6142c(param_2);
    if (((ulong)pppppuVar4 & 1) == 0) goto LAB_10309a2ac;
  }
  func_0x000107c3eb80();
  func_0x000107c61180();
  func_0x000107c60234(&ppppuStack_90);
  func_0x000107c615e8(param_1);
  unaff_x28 = PTR___sypN_11034f1a8;
  pppppuVar16 = appppuStack_b0 + 2;
  pppppuVar13 = &ppppuStack_90;
  func_0x000107c6147c(pppppuVar16,pppppuVar13,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  ppppuVar2 = appppuStack_b0[3];
  if (((ulong)pppppuVar16 & 1) == 0) goto LAB_10309a2ac;
  ppppuStack_90 = appppuStack_b0[2];
  ppppuStack_88 = appppuStack_b0[3];
  func_0x000107c5fb04(pppppuVar7);
  func_0x000100e8b654();
  param_1 = &ppppuStack_90;
  param_2 = (undefined8 *****)0x0;
  pppppuVar4 = pppppuVar7;
  func_0x000107c60214(pppppuVar7,0,PTR___sSSN_11034da80,pppppuVar16);
  pppppuVar13 = pppppuVar3;
  (*(code *)pppppuVar18[1])(pppppuVar7,pppppuVar3);
  func_0x000107c6142c(ppppuVar2);
  pppppuVar5 = (undefined8 *****)ppppuVar2;
  if (0xe < (ulong)param_2 >> 0x3c) goto LAB_10309a2ac;
  param_1 = (undefined8 *****)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  pppppuVar16 = pppppuVar4;
  func_0x000107c5ee20(pppppuVar4,param_2);
  ppppuStack_90 = (undefined8 *****)0x0;
  func_0x000107c3ab8c();
  func_0x000107c61180();
  func_0x000107c61170(pppppuVar16);
  pppppuVar3 = (undefined8 *****)ppppuStack_90;
  pppppuVar13 = param_2;
  if (param_1 == (undefined8 *****)0x0) {
    param_1 = (undefined8 *****)ppppuStack_90;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(param_1);
    func_0x000107c61654();
    func_0x0001000b44c0(pppppuVar4,param_2);
    func_0x000107c614ac(pppppuVar3);
    unaff_x20 = pppppuVar3;
    goto LAB_10309a2ac;
  }
  func_0x000107c61174();
  func_0x000107c60234(&ppppuStack_90,param_1);
  func_0x000107c615e8(param_1);
  uVar20 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  pppppuVar3 = appppuStack_b0 + 2;
  pppppuVar14 = &ppppuStack_90;
  func_0x000107c6147c(pppppuVar3,pppppuVar14,unaff_x28 + 8,uVar20,6);
  ppppuVar2 = appppuStack_b0[2];
  if (((ulong)pppppuVar3 & 1) == 0) {
    func_0x0001000b44c0(pppppuVar4,param_2);
    pppppuVar3 = pppppuVar16;
    goto LAB_10309a2ac;
  }
  if ((undefined8 ****)appppuStack_b0[2][2] == (undefined8 ****)0x0) {
LAB_10309a070:
    pppppuVar5 = (undefined8 *****)0xe000000000000000;
    pppppuVar7 = (undefined8 *****)0x0;
  }
  else {
    func_0x000107c61434(appppuStack_b0[2]);
    lVar6 = 0x707954746e657665;
    pppppuVar14 = (undefined8 *****)0xe900000000000065;
    func_0x000100029284(0x707954746e657665);
    if (((ulong)pppppuVar14 & 1) == 0) {
      func_0x000107c6142c(ppppuVar2);
      goto LAB_10309a070;
    }
    func_0x0001000bb420(ppppuVar2[7] + lVar6 * 4,&ppppuStack_90);
    func_0x000107c6142c(ppppuVar2);
    pppppuVar3 = appppuStack_b0 + 2;
    pppppuVar14 = &ppppuStack_90;
    func_0x000107c6147c(pppppuVar3,pppppuVar14,unaff_x28 + 8,PTR___sSSN_11034da80,6);
    pppppuVar5 = (undefined8 *****)appppuStack_b0[3];
    pppppuVar7 = (undefined8 *****)appppuStack_b0[2];
    if (((ulong)pppppuVar3 & 1) == 0) goto LAB_10309a070;
  }
  pppppuVar3 = (undefined8 *****)0x13;
  FUN_10309974c();
  pppppuVar18 = pppppuVar3;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (pppppuVar18 == (undefined8 *****)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(pppppuVar14);
  }
  if ((undefined8 ****)ppppuVar2[2] == (undefined8 ****)0x0) {
LAB_10309a100:
    ppppuStack_88 = (undefined8 *****)0x0;
    ppppuStack_90 = (undefined8 *****)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c61434(ppppuVar2);
    lVar6 = 0x61746164;
    uVar15 = 0;
    func_0x000100029284(0x61746164);
    if ((uVar15 & 1) == 0) {
      func_0x000107c6142c(ppppuVar2);
      goto LAB_10309a100;
    }
    func_0x0001000bb420(ppppuVar2[7] + lVar6 * 4,&ppppuStack_90);
    func_0x000107c6142c(ppppuVar2);
  }
  func_0x000107c6142c(ppppuVar2);
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&ppppuStack_90);
LAB_10309a190:
    unaff_x28 = *(undefined **)((long)unaff_x20 + _DAT_112f38e70);
    lVar6 = ((undefined8 *)((long)unaff_x20 + _DAT_112f38e70))[1];
LAB_10309a1a0:
    func_0x000107c61434(lVar6);
    pppppuVar16 = (undefined8 *****)0x0;
  }
  else {
    pppppuVar19 = appppuStack_b0 + 2;
    func_0x000107c6147c(pppppuVar19,&ppppuStack_90,unaff_x28 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)pppppuVar19 & 1) == 0) goto LAB_10309a190;
    unaff_x28 = *(undefined **)((long)unaff_x20 + _DAT_112f38e70);
    lVar6 = ((undefined8 *)((long)unaff_x20 + _DAT_112f38e70))[1];
    appppuStack_b0[0] = pppppuVar3;
    if ((undefined8 *****)appppuStack_b0[3] == (undefined8 *****)0x0) goto LAB_10309a1a0;
    func_0x000107c61434(lVar6);
    pppppuVar16 = (undefined8 *****)appppuStack_b0[2];
    func_0x000107c5fadc(appppuStack_b0[2],appppuStack_b0[3]);
    func_0x000107c6142c(appppuStack_b0[3]);
    pppppuVar3 = (undefined8 *****)appppuStack_b0[0];
  }
  func_0x000107c5fadc(pppppuVar7,pppppuVar5);
  func_0x000107c6142c(pppppuVar5);
  if (lVar6 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = unaff_x28;
    func_0x000107c5fadc(unaff_x28,lVar6);
    func_0x000107c6142c(lVar6);
  }
  pppppuVar19 = (undefined8 *****)PTR_PTR_1126d6da0;
  func_0x000107c610f8();
  func_0x000107c30bf4();
  func_0x000107c61170(pppppuVar18);
  func_0x000107c61170(pppppuVar16);
  func_0x000107c61170(pppppuVar7);
  func_0x000107c61170(puVar17);
  param_1 = *(undefined8 ******)((long)unaff_x20 + _DAT_112f38e68);
  func_0x0001046a3a74(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  pppppuVar7 = pppppuVar19;
  func_0x000107c61174();
  pppppuVar5 = pppppuVar3;
  func_0x0001046a3680(pppppuVar3,pppppuVar7);
  ppppuStack_90 = pppppuVar5;
  func_0x0001002a64a8(&ppppuStack_90);
  func_0x0001000b44c0(pppppuVar4,param_2);
  func_0x000107c61170(pppppuVar5);
  func_0x000107c61170(pppppuVar3);
  func_0x000107c61170(pppppuVar7);
  unaff_x20 = param_1;
LAB_10309a2ac:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    lVar6 = 1;
    *(undefined **)((long)alStack_118 + lVar1 + 8) = unaff_x28;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x10) = pppppuVar19;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x18) = pppppuVar18;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x20) = pppppuVar5;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x28) = pppppuVar7;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x30) = pppppuVar4;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x38) = param_2;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x40) = pppppuVar3;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x48) = param_1;
    *(undefined8 ******)((long)alStack_118 + lVar1 + 0x50) = unaff_x20;
    *(undefined1 **)((long)alStack_118 + lVar1 + 0x58) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_118 + lVar1 + 0x60) = FUN_10309a2f4;
    FUN_10309974c();
    *(long *)((long)alStack_160 + lVar1 + 0x40) = lVar6;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(pppppuVar13);
    }
    uVar20 = *(undefined8 *)((long)param_1 + _DAT_112f38e70);
    lVar12 = ((undefined8 *)((long)param_1 + _DAT_112f38e70))[1];
    func_0x000107c61434(lVar12);
    uVar8 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar9 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    uVar10 = 0x6c623a74756f6261;
    func_0x000107c5fadc(0x6c623a74756f6261,0xeb000000006b6e61);
    uVar11 = 0x24;
    func_0x000107c5fadc(0x24,0xe100000000000000);
    if (lVar12 == 0) {
      uVar20 = 0;
    }
    else {
      func_0x000107c5fadc(uVar20,lVar12);
      func_0x000107c6142c(lVar12);
    }
    puVar17 = PTR_PTR_1126b9030;
    func_0x000107c610f8();
    lVar12 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    *(undefined8 *)((long)alStack_160 + lVar1 + 0x20) = 0;
    *(undefined8 *)((long)alStack_160 + lVar1 + 0x28) = 0;
    *(undefined8 *)((long)alStack_160 + lVar1 + 0x30) = uVar20;
    *(long *)((long)alStack_160 + lVar1 + 0x38) = lVar12;
    *(undefined8 *)((long)alStack_160 + lVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((long)alStack_160 + lVar1 + 0x18) = uVar11;
    *(undefined8 *)((long)alStack_160 + lVar1) = 1;
    *(undefined8 *)((long)alStack_160 + lVar1 + 8) = 0xffffffffffffffff;
    func_0x000107c30cb4(0xbff0000000000000,0xbff0000000000000,puVar17,lVar6,1,0xffffffffffffffff,
                        uVar8,uVar9,0,uVar10);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar20);
    func_0x000107c61170();
    func_0x0001018acc84();
    func_0x000107c613fc();
    *(undefined8 *)(lVar12 + 0x18) = 3;
    *(undefined8 *)(lVar12 + 0x10) = 1;
    *(undefined **)(lVar12 + 0x20) = puVar17;
    func_0x00010468314c(0);
    func_0x000107c610f8();
    uVar8 = *(undefined8 *)((long)alStack_160 + lVar1 + 0x40);
    func_0x000107c61174();
    func_0x000107c61174(puVar17);
    uVar20 = uVar8;
    func_0x000104682d18(uVar8,lVar12);
    *(undefined8 *)((long)alStack_118 + lVar1) = uVar20;
    func_0x0001002a64a8((long)alStack_118 + lVar1);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar17);
    return;
  }
  return;
}



/* Entry: 10309a2f4; end: 10309a303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309a2f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  
  lVar1 = 1;
  FUN_10309974c();
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f38e70);
  lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112f38e70))[1];
  func_0x000107c61434(lVar8);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0x6c623a74756f6261;
  func_0x000107c5fadc(0x6c623a74756f6261,0xeb000000006b6e61);
  uVar6 = 0x24;
  func_0x000107c5fadc(0x24,0xe100000000000000);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x000107c5fadc(uVar9,lVar8);
    func_0x000107c6142c(lVar8);
  }
  puVar7 = PTR_PTR_1126b9030;
  func_0x000107c610f8();
  lVar8 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c30cb4(0xbff0000000000000,0xbff0000000000000,puVar7,lVar2,1,0xffffffffffffffff,uVar3,
                      uVar4,0,uVar5,1,0xffffffffffffffff,0xffffffffffffffff,uVar6,0,0,uVar9,lVar8);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170();
  func_0x0001018acc84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined **)(lVar8 + 0x20) = puVar7;
  func_0x00010468314c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  lVar2 = lVar1;
  func_0x000104682d18(lVar1,lVar8);
  lStack_68 = lVar2;
  func_0x0001002a64a8(&lStack_68);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 10309a304; end: 10309a54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309a304(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_68;
  
  lVar1 = param_1;
  FUN_10309974c();
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f38e70);
  lVar8 = ((undefined8 *)(unaff_x20 + _DAT_112f38e70))[1];
  func_0x000107c61434(lVar8);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar5 = 0x6c623a74756f6261;
  func_0x000107c5fadc(0x6c623a74756f6261,0xeb000000006b6e61);
  uVar6 = 0x24;
  func_0x000107c5fadc(0x24,0xe100000000000000);
  if (lVar8 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x000107c5fadc(uVar9,lVar8);
    func_0x000107c6142c(lVar8);
  }
  puVar7 = PTR_PTR_1126b9030;
  func_0x000107c610f8();
  lVar8 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c30cb4(0xbff0000000000000,0xbff0000000000000,puVar7,lVar2,param_1,0xffffffffffffffff,
                      uVar3,uVar4,0,uVar5,1,0xffffffffffffffff,0xffffffffffffffff,uVar6,0,0,uVar9,
                      lVar8);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170();
  func_0x0001018acc84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 3;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined **)(lVar8 + 0x20) = puVar7;
  func_0x00010468314c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar7);
  lVar2 = lVar1;
  func_0x000104682d18(lVar1,lVar8);
  lStack_68 = lVar2;
  func_0x0001002a64a8(&lStack_68);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 10309a550; end: 10309a55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309a550(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_68;
  
  lVar1 = 5;
  uVar8 = param_2;
  FUN_10309974c();
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f38e70);
  lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f38e70))[1];
  func_0x000107c61434(lVar7);
  func_0x000107c61434(param_2);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uVar5 = 0x24;
  func_0x000107c5fadc(0x24,0xe100000000000000);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c5fadc(uVar8,lVar7);
    func_0x000107c6142c(lVar7);
  }
  puVar6 = PTR_PTR_1126b9030;
  func_0x000107c610f8();
  lVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c30cb4(0xbff0000000000000,0xbff0000000000000,puVar6,lVar2,5,0xffffffffffffffff,uVar3,
                      uVar4,0,param_1,1,0xffffffffffffffff,0xffffffffffffffff,uVar5,0,0,uVar8,lVar7)
  ;
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170();
  func_0x0001018acc84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 3;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined **)(lVar7 + 0x20) = puVar6;
  func_0x00010468314c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  lVar2 = lVar1;
  func_0x000104682d18(lVar1,lVar7);
  lStack_68 = lVar2;
  func_0x0001002a64a8(&lStack_68);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 10309a560; end: 10309a7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309a560(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_68;
  
  lVar1 = param_3;
  uVar8 = param_2;
  FUN_10309974c();
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f38e70);
  lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f38e70))[1];
  func_0x000107c61434(lVar7);
  func_0x000107c61434(param_2);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  uVar5 = 0x24;
  func_0x000107c5fadc(0x24,0xe100000000000000);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    func_0x000107c5fadc(uVar8,lVar7);
    func_0x000107c6142c(lVar7);
  }
  puVar6 = PTR_PTR_1126b9030;
  func_0x000107c610f8();
  lVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c30cb4(0xbff0000000000000,0xbff0000000000000,puVar6,lVar2,param_3,0xffffffffffffffff,
                      uVar3,uVar4,0,param_1,1,0xffffffffffffffff,0xffffffffffffffff,uVar5,0,0,uVar8,
                      lVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170();
  func_0x0001018acc84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x18) = 3;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined **)(lVar7 + 0x20) = puVar6;
  func_0x00010468314c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(puVar6);
  lVar2 = lVar1;
  func_0x000104682d18(lVar1,lVar7);
  lStack_68 = lVar2;
  func_0x0001002a64a8(&lStack_68);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 10309a7b4; end: 10309a813; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdInstantPageLocationProvider init] */

void FUN_10309a7b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdInstantPageLocationProvider",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10309a7e0);
  (*pcVar1)();
}



/* Entry: 10309a814; end: 10309a84b; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdInstantPageLocationProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010309a830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309a834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309a814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38ea0));
  return;
}



/* Entry: 10309a84c; end: 10309a86b;  */

void FUN_10309a84c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b3108);
  return;
}



/* Entry: 10309a86c; end: 10309aa67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10309a86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&puStack_80);
  puVar3 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    puVar2 = puStack_80;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c61174();
      uVar5 = unaff_x20;
      func_0x000107c417f0();
      func_0x000107c61180();
      uVar4 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(unaff_x20);
      func_0x000107c61170(uVar5);
      func_0x0001048b0ec8(0);
      func_0x000107c610f8();
      func_0x0001048b0b48(uVar4,param_4,0x27);
      uVar5 = 0;
      func_0x0001000295c4(0);
      func_0x000107c5ffdc();
      puVar2 = &UNK_110607720;
      func_0x000107c613fc(&UNK_110607720,0x18,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      uStack_60 = 0x10309b038;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1010c8c0c;
      puStack_68 = &UNK_110607738;
      puStack_58 = puVar2;
      func_0x000107c60bc4(&puStack_80);
      puVar2 = puStack_58;
      func_0x000107c61174(puVar1);
      func_0x000107c61574(puVar2);
      func_0x000107c503b0(0x4014000000000000,puVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
    }
    else {
      func_0x000107c4077c();
      func_0x000107c4077c(puVar2);
      puVar3 = PTR_PTR_1126b1d80;
      func_0x000107c610f8(PTR_PTR_1126b1d80);
      func_0x000107c470e4(param_1,param_2);
      func_0x000107c43b74(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(puStack_80);
    }
  }
  return puVar1;
}



/* Entry: 10309aa68; end: 10309ac63;  */

/* WARNING: Possible PIC construction at 0x00010309aad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309ac00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309ac24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309ac38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309ac28) */
/* WARNING: Removing unreachable block (ram,0x00010309ac04) */
/* WARNING: Removing unreachable block (ram,0x00010309aadc) */
/* WARNING: Removing unreachable block (ram,0x00010309ac3c) */

void FUN_10309aa68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_b0 [80];
  
  puVar6 = auStack_b0;
  if (param_3 == 0) {
    lVar2 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    func_0x000107c61534();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    func_0x000107c5faec();
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    puVar1 = PTR___sSSN_11034da80;
    *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
    *(undefined1 **)(lVar2 + 0x28) = puVar6;
    *(undefined8 *)(lVar2 + 0x30) = 0xd00000000000001b;
    *(undefined8 *)(lVar2 + 0x38) = 0x800000010f11d130;
    lVar4 = lVar2;
    func_0x000100214a84(lVar2);
    func_0x000107c61588(lVar2);
    func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    param_3 = -0x2fffffffffffffe3;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010db84490);
    func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar4);
    func_0x000107c466bc(puVar5);
  }
  else {
    func_0x000107c61174();
    func_0x000107c4077c();
    func_0x000107c4077c(param_3);
    func_0x000107c610f8(PTR_PTR_1126b1d80);
    func_0x000107c470e4(param_1,param_2);
    func_0x000107c43b74(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10309ac64; end: 10309ac97; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdInstantPageLocationProvider getCurrentLocation] */

void FUN_10309ac64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10309a86c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10309ac98; end: 10309ad7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309ac98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&puStack_60);
  puVar1 = puStack_60;
  if (puStack_60 != (undefined *)0x0) {
    puVar3 = &UNK_1106076d0;
    func_0x000107c613fc(&UNK_1106076d0,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    pcStack_40 = FUN_10309b014;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x10309af44;
    puStack_48 = &UNK_1106076e8;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar3 = puStack_38;
    func_0x000107c61174(puVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c43068(puVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar1);
  }
  return puVar2;
}



/* Entry: 10309ad80; end: 10309afdf;  */

/* WARNING: Possible PIC construction at 0x00010309aee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309af08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309af1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309af0c) */
/* WARNING: Removing unreachable block (ram,0x00010309aee8) */
/* WARNING: Removing unreachable block (ram,0x00010309af20) */

void FUN_10309ad80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [80];
  
  puVar6 = auStack_a0;
  if (param_1 != 0) {
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c43b74(param_4);
      goto code_r0x000107c61170;
    }
  }
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = 0xd00000000000001b;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010f11d110;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  param_1 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010db84490);
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10309afe0; end: 10309b013; -[_TtC40SCAdAttachmentHandlerImplementationSwift29AdInstantPageLocationProvider getHomeLocation] */

void FUN_10309afe0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10309ac98();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10309b014; end: 10309b047;  */

/* WARNING: Possible PIC construction at 0x00010309aee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309af08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309af1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309af0c) */
/* WARNING: Removing unreachable block (ram,0x00010309aee8) */
/* WARNING: Removing unreachable block (ram,0x00010309af20) */

void FUN_10309b014(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_a0 [80];
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar5 = auStack_a0;
  if (param_1 != 0) {
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c43b74(uVar6);
      goto code_r0x000107c61170;
    }
  }
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar6 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar5;
  *(undefined8 *)(lVar2 + 0x30) = 0xd00000000000001b;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010f11d110;
  lVar3 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  param_1 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010db84490);
  func_0x000107c5f9dc(lVar3,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  func_0x000107c466bc(puVar4);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10309b048; end: 10309b2fb;  */

undefined * FUN_10309b048(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  lVar10 = 0;
  func_0x000107c5ebbc();
  lVar12 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 != 0) {
    func_0x000103094ed4(0,lVar17,0);
    uVar1 = param_1 + 0x40;
    uVar11 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar14 = 0;
    do {
      if (uVar11 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10309b2ec);
        (*pcVar9)();
      }
      uVar19 = uVar11 >> 6;
      uVar20 = 1L << (uVar11 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar19 * 8) & uVar20) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10309b2f0);
        (*pcVar9)();
      }
      iVar7 = *(int *)(param_1 + 0x24);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 0x10);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c5ebb0(&stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          uVar3,uVar5,uVar4,uVar6);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(uVar5);
      uVar16 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        func_0x000103094ed4(1 < *(ulong *)(puVar8 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar16 + 1;
      (**(code **)(lVar12 + 0x20))
                (puVar8 + *(long *)(lVar12 + 0x48) * uVar16 +
                          ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)),
                 &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar10);
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar16 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10309b2f4);
        (*pcVar9)();
      }
      uVar13 = *(ulong *)(uVar1 + uVar19 * 8);
      if ((uVar13 & uVar20) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10309b2f8);
        (*pcVar9)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10309b2fc);
        (*pcVar9)();
      }
      uVar13 = uVar13 & -2L << (uVar11 & 0x3f);
      if (uVar13 == 0) {
        lVar18 = uVar19 << 6;
        puVar15 = (ulong *)(param_1 + 0x48 + uVar19 * 8);
        do {
          uVar19 = uVar19 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar19) {
            func_0x000102d69350(uVar11,iVar7,0);
            goto LAB_10309b11c;
          }
          uVar20 = *puVar15;
          lVar18 = lVar18 + 0x40;
          puVar15 = puVar15 + 1;
        } while (uVar20 == 0);
        func_0x000102d69350(uVar11,iVar7,0);
        uVar11 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar18;
      }
      else {
        uVar19 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | uVar11 & 0x7fffffffffffffc0;
      }
LAB_10309b11c:
      lVar14 = lVar14 + 1;
      uVar11 = uVar16;
    } while (lVar14 != lVar17);
  }
  return puVar8;
}



/* Entry: 10309b2fc; end: 10309b58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309b2fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f38f60);
  func_0x000107c5e39c(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1106077b8;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_1030a47e0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100c1de60;
  puStack_48 = &UNK_110607d70;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10309b590; end: 10309b86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309b590(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 auStack_c0 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - extraout_x12;
  lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112f38ee0) + _DAT_113068288);
  func_0x000107c61174();
  lVar4 = lVar3;
  func_0x000107c5eec4(lVar10);
  func_0x000107c5eeac();
  pcVar15 = *(code **)(lVar12 + 8);
  lVar12 = lVar10;
  lVar8 = lVar2;
  (*pcVar15)(lVar10,lVar2);
  lVar13 = ((long *)(lVar3 + _DAT_113067ec0))[1];
  if (lVar13 == 0) {
    func_0x000107c5eec4(lVar14);
    func_0x000107c5eeac();
    (*pcVar15)(lVar14,lVar2);
  }
  else {
    lVar12 = *(long *)(lVar3 + _DAT_113067ec0);
    lVar8 = lVar13;
  }
  uVar9 = *(undefined8 *)(lVar3 + _DAT_113067eb8);
  lVar2 = ((undefined8 *)(lVar3 + _DAT_113067eb8))[1];
  uVar5 = *(undefined8 *)(lVar3 + _DAT_113067ee8);
  uStack_68 = *(undefined8 *)(lVar3 + _DAT_113067ee0);
  uStack_70 = *(undefined8 *)(lVar3 + _DAT_113067ec8);
  uStack_80 = *(undefined8 *)(lVar3 + _DAT_113067eb0);
  lVar14 = ((undefined8 *)(lVar3 + _DAT_113067eb0))[1];
  uStack_78 = *(undefined8 *)(lVar3 + _DAT_113067ed0);
  func_0x000107c61174();
  func_0x000107c61434(lVar13);
  func_0x000107c5fadc(lVar4,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(lVar12,lVar8);
  func_0x000107c6142c(lVar8);
  if (lVar2 == 0) {
    uVar9 = 0;
    uVar11 = uStack_80;
  }
  else {
    func_0x000107c5fadc(uVar9,lVar2);
    uVar11 = uStack_80;
  }
  uStack_80 = uVar11;
  if (lVar14 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x000107c5fadc(uVar11,lVar14);
  }
  puVar6 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010efbcc50);
  *(undefined8 *)(lVar10 + -8) = uVar7;
  uVar1 = uStack_78;
  *(undefined8 *)(lVar10 + -0x18) = 3;
  *(undefined8 *)(lVar10 + -0x10) = uVar1;
  *(undefined8 *)(lVar10 + -0x20) = 3;
  *(undefined8 *)(lVar10 + -0x28) = uStack_70;
  uVar1 = uStack_68;
  *(undefined8 *)(lVar10 + -0x38) = uVar5;
  *(undefined8 *)(lVar10 + -0x30) = uVar1;
  *(undefined8 *)(lVar10 + -0x40) = 0;
  func_0x000107c30ad4(0,puVar6,lVar4,lVar12,uVar9,uVar11,0,0,0);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  return puVar6;
}



/* Entry: 10309b870; end: 10309b92b; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309b870(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + _DAT_112f38ef0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  puVar2 = (undefined8 *)(param_1 + _DAT_112f38f58);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  lVar1 = _DAT_112f38f68;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar4;
  puVar2 = (undefined8 *)(param_1 + _DAT_112f38f88);
  *puVar2 = 0;
  puVar2[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCAdAttachmentHandlerImplementationSwift/AdInstantPageViewController.swift",
                      0x4a,2,0xd1,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10309b92c);
  (*pcVar3)();
}



/* Entry: 10309b92c; end: 10309bc93;  */

/* WARNING: Possible PIC construction at 0x00010309ba7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309bb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309bb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309bb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309bc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309bc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309bc4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309bc2c) */
/* WARNING: Removing unreachable block (ram,0x00010309bc1c) */
/* WARNING: Removing unreachable block (ram,0x00010309bb9c) */
/* WARNING: Removing unreachable block (ram,0x00010309bbfc) */
/* WARNING: Removing unreachable block (ram,0x00010309bbd4) */
/* WARNING: Removing unreachable block (ram,0x00010309bc00) */
/* WARNING: Removing unreachable block (ram,0x00010309bb7c) */
/* WARNING: Removing unreachable block (ram,0x00010309bb6c) */
/* WARNING: Removing unreachable block (ram,0x00010309ba80) */
/* WARNING: Removing unreachable block (ram,0x00010309bab4) */
/* WARNING: Removing unreachable block (ram,0x00010309ba98) */
/* WARNING: Removing unreachable block (ram,0x00010309bab0) */
/* WARNING: Removing unreachable block (ram,0x00010309bad4) */
/* WARNING: Removing unreachable block (ram,0x00010309bc50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309b92c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long in_stack_00000000;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  puVar1 = (undefined8 *)(*(long *)(in_stack_00000000 + _DAT_112f38ee0) + _DAT_1130682d8);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  puVar5 = PTR_PTR_1126acb30;
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x000107c4563c();
  if (param_3 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar7 = param_3;
    }
    func_0x000107c60480();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 == 0) {
    FUN_10309d054(uVar6,uVar2,puVar5);
    puVar5 = PTR_PTR_1126acb70;
    func_0x000107c610f8(PTR_PTR_1126acb70);
    func_0x000107c5fadc(param_1,param_2);
    uVar6 = 0;
    FUN_1030a471c(0,0x112f38c60,&PTR_PTR_1126acb08);
    func_0x000107c5fc48(puVar3,uVar6);
    func_0x000107c6142c(puVar3);
    func_0x000107c5ee20(param_4,param_5);
    func_0x000107c4648c(puVar5);
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000103094e38(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10309bc94);
      (*pcVar4)();
    }
    if ((param_3 & 0xc000000000000001) == 0) {
      if (*(long *)((param_3 & 0xffffffffffffff8) + 0x10) < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10309bc78);
        (*pcVar4)();
      }
      param_1 = *(undefined8 *)(param_3 + 0x20);
      func_0x000107c61174();
    }
    else {
      param_1 = 0;
      FUN_1030b5f18(0,param_3);
    }
    uStack_78 = param_1;
    FUN_10309d508(auStack_70,&uStack_78);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10309bc94; end: 10309bd8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309bc94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  FUN_10309c78c();
  puVar1 = PTR_PTR_1126acb38;
  func_0x000107c610f8();
  func_0x000107c49520();
  puVar2 = puVar1;
  func_0x000107c5dbc0();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c61170(param_1);
  }
  else {
    pcStack_40 = FUN_10309cff4;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_100f11710;
    puStack_48 = &UNK_110607780;
    func_0x000107c60bc4(&puStack_60);
    uVar4 = 0;
    func_0x000103c43334(0);
    func_0x000107c614e8();
    func_0x000107c4fcd8(puVar2,param_2,ppuVar3,uVar4);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(puVar2);
  }
  return puVar1;
}



/* Entry: 10309bd90; end: 10309bd93;  */

void FUN_10309bd90(void)

{
  return;
}



/* Entry: 10309bd94; end: 10309be8b;  */

/* WARNING: Possible PIC construction at 0x00010309be4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309be6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309be50) */
/* WARNING: Removing unreachable block (ram,0x00010309be70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309bd94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = (undefined8 *)(*(long *)(param_4 + _DAT_112f38ee0) + _DAT_1130682d8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar4 = PTR_PTR_1126acb30;
  func_0x000107c610f8(PTR_PTR_1126acb30);
  func_0x000107c61434(uVar3);
  func_0x000107c4563c(puVar4);
  FUN_10309be8c(param_1,param_2,uVar2,uVar3,puVar4);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10309be8c; end: 10309bf63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10309be8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  FUN_10309d054(param_3,param_4,param_5);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c598e0(param_3);
  func_0x000107c61170(param_1);
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(unaff_x20 + _DAT_112f38ee0) + _DAT_113068288) + _DAT_113067eb8);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c58f88(param_3);
  func_0x000107c61170(uVar3);
  return param_3;
}



/* Entry: 10309bf64; end: 10309bf67;  */

void FUN_10309bf64(void)

{
  return;
}



/* Entry: 10309bf68; end: 10309bfff; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309bf68(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + _DAT_112f38ee0) + _DAT_113068290);
  lStack_40 = param_1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x0001041c8a20(FUN_1030a42f4,auStack_50,FUN_10309bf64,0);
  func_0x000107c61170(uVar1);
  FUN_10309a2f4();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10309c000; end: 10309c0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309c000(uint param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c51750();
  func_0x000107c61170(puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f38f58);
  *puVar1 = puVar4;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x000107c5a9c4(puVar2);
  func_0x000107c61180();
  func_0x000107c30a30();
  func_0x000107c517f4(puVar2);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10309c0cc; end: 10309c0fb; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController viewWillAppear:] */

void FUN_10309c0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10309c000(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10309c0fc; end: 10309c1ab; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309c0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewWillDisappear__112685438;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar2,param_3);
  if (*(char *)(param_1 + _DAT_112f38f58 + 8) != '\x01') {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    func_0x000107c517f4();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10309c1ac; end: 10309c1b3; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController shouldDismissViewControllerWhenEnterBackground] */

undefined8 FUN_10309c1ac(void)

{
  return 0;
}



/* Entry: 10309c1b4; end: 10309c303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309c1b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112f38ef0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_103098660(*(undefined1 *)(unaff_x20 + _DAT_112f38fc0));
    func_0x000107c615e8(lVar1);
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f38ee0) + _DAT_113068290);
  func_0x000107c61174(uVar2);
  func_0x0001041c8a20(FUN_1030a4780,auStack_50,FUN_10309c304,0);
  func_0x000107c61170(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10309c304; end: 10309c307;  */

void FUN_10309c304(void)

{
  return;
}



/* Entry: 10309c308; end: 10309c32b; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController dealloc] */

void FUN_10309c308(void)

{
  func_0x000107c61174();
  FUN_10309c1b4();
  return;
}



/* Entry: 10309c32c; end: 10309c507; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010309c388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309c3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309c408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309c428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309c468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309c488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010309c4dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010309c4c0) */
/* WARNING: Removing unreachable block (ram,0x00010309c48c) */
/* WARNING: Removing unreachable block (ram,0x00010309c46c) */
/* WARNING: Removing unreachable block (ram,0x00010309c42c) */
/* WARNING: Removing unreachable block (ram,0x00010309c40c) */
/* WARNING: Removing unreachable block (ram,0x00010309c3ac) */
/* WARNING: Removing unreachable block (ram,0x00010309c38c) */
/* WARNING: Removing unreachable block (ram,0x00010309c4e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309c32c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38ed8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f38ee0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f38ee8));
  func_0x0001030a475c(param_1 + _DAT_112f38ef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f38ef8));
  return;
}



/* Entry: 10309c508; end: 10309c553; -[_TtC40SCAdAttachmentHandlerImplementationSwift27AdInstantPageViewController initWithNibName:bundle:] */

void FUN_10309c508(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdAttachmentHandlerImplementationSwift.AdInstantPageViewController",0x44,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10309c534);
  (*pcVar1)();
}



/* Entry: 10309c554; end: 10309c6b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309c554(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112f38ee0) + _DAT_1130682e0);
  uVar2 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  uVar7 = uVar4;
  FUN_1030a34fc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  puVar3 = PTR_PTR_1126acb28;
  func_0x000107c610f8(PTR_PTR_1126acb28);
  func_0x000107c5fadc(uVar2,uVar7);
  func_0x000107c6142c(uVar7);
  uVar4 = 0;
  FUN_1030a471c(0,0x112dd1f40,&PTR_PTR_1126a7d88);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
  func_0x000107c61574(puVar6);
  uVar4 = 0;
  FUN_1030a471c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c5fc48(puVar6,uVar4);
  func_0x000107c48684(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  return puVar3;
}



/* Entry: 10309c6b4; end: 10309c78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10309c6b4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f38f30);
    func_0x000107c615f0(uVar2);
    FUN_103099d60();
    func_0x000107c615e8(uVar2);
    uVar3 = *(undefined8 *)(param_2 + _DAT_112f38fa0);
    uVar2 = uVar3;
    func_0x000107c615f0(uVar3);
    FUN_10309c554();
    puVar1 = PTR_PTR_1126acb20;
    func_0x000107c610f8(PTR_PTR_1126acb20);
    func_0x000107c467ec();
    func_0x000107c61170(uVar2);
    func_0x000107c4bc34(uVar3);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10309c78c; end: 10309cff3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309c78c(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  long unaff_x20;
  undefined8 uVar22;
  undefined *puVar23;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  ppuVar6 = &puStack_b0;
  ppuVar7 = &puStack_b0;
  ppuVar8 = &puStack_b0;
  ppuVar9 = &puStack_b0;
  ppuVar11 = &puStack_b0;
  ppuVar13 = &puStack_b0;
  ppuVar14 = &puStack_b0;
  ppuVar15 = &puStack_b0;
  ppuVar16 = &puStack_b0;
  ppuVar17 = &puStack_b0;
  ppuVar18 = &puStack_b0;
  ppuVar20 = &puStack_b0;
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112f38fb0);
  uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112f38fb8);
  lVar1 = 0;
  FUN_10309a84c();
  lVar19 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar19 + _DAT_112f38ea0) = uVar21;
  *(undefined8 *)(lVar19 + _DAT_112f38ea8) = uVar22;
  puVar10 = PTR_s_init_1125d9248;
  lStack_80 = lVar19;
  lStack_78 = lVar1;
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar22);
  plVar2 = &lStack_80;
  func_0x000107c61154(plVar2,puVar10);
  puVar10 = &UNK_1106077b8;
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  puVar3 = &UNK_1106077e0;
  func_0x000107c613fc(&UNK_1106077e0,0x20,7);
  lVar19 = unaff_x20 + _DAT_112f38ef0;
  lVar1 = lVar19;
  func_0x000107c61618(lVar19);
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(lVar19 + 8);
  func_0x000107c61614(puVar3 + 0x10,lVar1);
  func_0x000107c615e8(lVar1);
  puVar4 = &UNK_110607808;
  func_0x000107c613fc(&UNK_110607808,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar23;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar5 = PTR_PTR_1126acb40;
  func_0x000107c610f8(PTR_PTR_1126acb40);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = (code *)0x1030a4398;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110607820;
  puStack_88 = puVar4;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar4);
  func_0x000107c465d4(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_88);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112f38f28);
  func_0x000107c5c734(uVar21);
  func_0x000107c61180();
  func_0x000107c53548(puVar5);
  func_0x000107c615e8(uVar21);
  func_0x0001000d224c(&puStack_b0);
  puVar23 = puStack_b0;
  func_0x000107c56a84(puVar5);
  func_0x000107c615e8(puVar23);
  func_0x000107c56058(puVar5);
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  pcStack_90 = FUN_1030a43a0;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100c75f50;
  puStack_98 = &UNK_110607848;
  puStack_88 = puVar23;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c56fa8(puVar5);
  func_0x000107c60bd0(ppuVar7);
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  pcStack_90 = (code *)0x1030a43d0;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100c75f50;
  puStack_98 = &UNK_110607870;
  puStack_88 = puVar23;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c56fac(puVar5);
  func_0x000107c60bd0(ppuVar8);
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  pcStack_90 = FUN_1030a4400;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110607898;
  puStack_88 = puVar23;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c56d64(puVar5);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  pcStack_90 = (code *)0x1030a4408;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100c75f50;
  puStack_98 = &UNK_1106078c0;
  puStack_88 = puVar10;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_88);
  func_0x000107c55fe0(puVar5);
  func_0x000107c60bd0(ppuVar11);
  func_0x0001000d224c(&puStack_b0);
  puVar10 = puStack_b0;
  if (puStack_b0 != (undefined *)0x0) {
    puVar23 = puStack_b0;
    func_0x000107c409cc();
    func_0x000107c61180();
    if (puVar23 != (undefined *)0x0) {
      puVar12 = puVar23;
      func_0x000107c40978();
      func_0x000107c61180();
      func_0x000107c53e94(puVar5);
      func_0x000107c615e8(puVar10);
      func_0x000107c615e8(puVar23);
      puVar10 = puVar12;
    }
    func_0x000107c615e8(puVar10);
  }
  puVar10 = &UNK_1106077b8;
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  pcStack_90 = (code *)0x1030a4410;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100e46924;
  puStack_98 = &UNK_1106078e8;
  puStack_88 = puVar23;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c533ec(puVar5);
  func_0x000107c60bd0(ppuVar13);
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  pcStack_90 = FUN_1030a4418;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100c75f50;
  puStack_98 = &UNK_110607910;
  puStack_88 = puVar23;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c576d0(puVar5);
  func_0x000107c60bd0(ppuVar14);
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  pcStack_90 = FUN_1030a4448;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110607938;
  puStack_88 = puVar23;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c57c98(puVar5);
  func_0x000107c60bd0(ppuVar15);
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  pcStack_90 = FUN_1030a4450;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100c75f50;
  puStack_98 = &UNK_110607960;
  puStack_88 = puVar23;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c54730(puVar5);
  func_0x000107c60bd0(ppuVar16);
  puVar23 = puVar10;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar23 + 0x10);
  pcStack_90 = FUN_1030a4480;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = (undefined *)0x1030a48b0;
  puStack_98 = &UNK_110607988;
  puStack_88 = puVar23;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c54e8c(puVar5);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  pcStack_90 = (code *)0x1030a4488;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = (undefined *)0x1030a0bac;
  puStack_98 = &UNK_1106079b0;
  puStack_88 = puVar10;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000107c59058(puVar5);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c560d0(puVar5);
  lVar19 = *(long *)(unaff_x20 + _DAT_112f38f78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar19 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar19;
    func_0x000107c4c1dc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar19);
  }
  func_0x000107c52188(puVar5);
  func_0x000107c615e8(lVar1);
  func_0x0001000d224c(&puStack_b0);
  puVar10 = puStack_b0;
  if (puStack_b0 == (undefined *)0x0) {
    puVar23 = (undefined *)0x0;
  }
  else {
    puVar23 = puStack_b0;
    func_0x000107c4c1dc(puStack_b0);
    func_0x000107c61180();
    func_0x000107c615e8(puVar10);
  }
  func_0x000107c52604(puVar5);
  func_0x000107c615e8(puVar23);
  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112f38ee8);
  puVar10 = &UNK_1106077b8;
  func_0x000107c613fc(&UNK_1106077b8,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  pcStack_90 = (code *)0x1030a4490;
  puStack_b0 = puVar3;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_100f11710;
  puStack_98 = &UNK_1106079d8;
  puStack_88 = puVar10;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c61574(puStack_88);
  func_0x000103c43334(0);
  func_0x000107c614e8();
  func_0x000107c4c214(uVar21);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar20);
  func_0x000107c5a6c8(puVar5);
  func_0x000107c61170(plVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(uVar21);
  return puVar5;
}



/* Entry: 10309cff4; end: 10309d053;  */

undefined8 FUN_10309cff4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
  func_0x000107c610f8(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
  func_0x000107c453e4();
  uVar2 = 0;
  func_0x000103c43334(0);
  func_0x000107c610f8();
  func_0x000107c469b0(0,0,0,0);
  func_0x000107c61170(puVar1);
  return uVar2;
}



/* Entry: 10309d054; end: 10309d36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10309d054(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = *(long *)(unaff_x20 + _DAT_112f38ee0);
  uVar11 = *(undefined8 *)(lVar12 + _DAT_113068298);
  lVar10 = ((undefined8 *)(lVar12 + _DAT_113068298))[1];
  puVar4 = PTR_PTR_1126acb50;
  func_0x000107c610f8(PTR_PTR_1126acb50);
  func_0x000107c61434(lVar10);
  lVar9 = lVar10;
  func_0x000107c5fadc(uVar11,lVar10);
  func_0x000107c6142c(lVar10);
  func_0x000107c48d40(puVar4);
  func_0x000107c61170(uVar11);
  lVar10 = ((undefined8 *)(lVar12 + _DAT_1130682a0))[1];
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar12 + _DAT_1130682a0);
    func_0x000107c61434(lVar10);
    lVar9 = lVar10;
    func_0x000107c5fadc(uVar11,lVar10);
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c552d0(puVar4);
  func_0x000107c61170(uVar11);
  puVar5 = PTR_PTR_1126acb58;
  func_0x000107c610f8(PTR_PTR_1126acb58);
  func_0x000107c45a68();
  uVar11 = 0;
  if (param_2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    lVar9 = param_2;
    uVar11 = param_1;
  }
  func_0x000107c598f0(puVar5);
  func_0x000107c61170(uVar11);
  FUN_10309d36c();
  func_0x000107c5a3cc(puVar5);
  func_0x000107c61170(uVar11);
  func_0x000104043f18();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5a2b8(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000104043f08();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar9);
  func_0x000107c598f4(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c590dc(puVar5);
  lVar10 = ((undefined8 *)(lVar12 + _DAT_1130682e0))[1];
  if (lVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar12 + _DAT_1130682e0);
    func_0x000107c61434(lVar10);
    func_0x000107c5fadc(uVar11,lVar10);
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c5a26c(puVar5);
  func_0x000107c61170(uVar11);
  lVar10 = *(long *)(lVar12 + _DAT_1130682e8);
  if (lVar10 != 0) {
    uVar11 = *(undefined8 *)(lVar10 + _DAT_113091610);
    uVar1 = ((undefined8 *)(lVar10 + _DAT_113091610))[1];
    uVar7 = *(undefined8 *)(lVar10 + _DAT_113091600);
    uVar2 = ((undefined8 *)(lVar10 + _DAT_113091600))[1];
    uVar8 = *(undefined8 *)(lVar10 + _DAT_113091608);
    uVar3 = ((undefined8 *)(lVar10 + _DAT_113091608))[1];
    puVar6 = PTR_PTR_1126acb60;
    func_0x000107c610f8(PTR_PTR_1126acb60);
    func_0x000107c61174(lVar10);
    func_0x000107c5fadc(uVar11,uVar1);
    func_0x000107c5fadc(uVar7,uVar2);
    func_0x000107c5fadc(uVar8,uVar3);
    func_0x000107c45e80(puVar6);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c57938(puVar5);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(puVar4);
  return puVar5;
}


