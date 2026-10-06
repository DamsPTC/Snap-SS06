/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102467904; end: 10246793f;  */

void FUN_102467904(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010246793c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102467940; end: 102467db3;  */

undefined *
FUN_102467940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar3 = puVar7;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      puVar5 = &uStack_88;
      func_0x000102467e98(param_1,puVar5,param_4,param_5);
      uVar1 = uStack_88;
      uVar4 = uStack_88;
      FUN_102467624();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102467a50);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      func_0x000100102924(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102467a54);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 102467db4; end: 102467df3;  */

void FUN_102467db4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102467df4; end: 102467e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102467df4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long unaff_x20;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_70 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR_PTR_1126e2158;
  func_0x000107c610f8(PTR_PTR_1126e2158);
  func_0x000107c453e4();
  func_0x000107c547d8();
  puVar4 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar4,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar12 = *(undefined8 *)(lVar1 + _DAT_112e9c128);
    func_0x000107c615f0(uVar12);
    func_0x000107c61170(lVar1);
    func_0x000107c4bfb0(uVar12);
    func_0x000107c615e8(uVar12);
  }
  func_0x000107c5faec(*(undefined8 *)PTR__UIApplicationOpenSettingsURLString_110345a80);
  func_0x000107c5edd0(puVar11);
  func_0x000107c6142c(puVar4);
  puVar4 = puVar11;
  (**(code **)(lVar13 + 0x30))(puVar11,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x000107c61170(puVar3);
    FUN_102467e18(puVar11,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar10,puVar11,lVar2);
    puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    puVar6 = puVar5;
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c5ed90();
    puVar8 = puVar6;
    func_0x000107c3f3f4();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar13 + 8))(lVar10,lVar2);
      func_0x000107c61170(puVar3);
    }
    else {
      func_0x000107c5a9c4(puVar5);
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c5ed90();
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_102467940(PTR___swiftEmptyArrayStorage_11034f1c8,0x112d377b0,&UNK_10d913200,0x112d377b8,
                    &UNK_10d9016f0);
      uVar9 = 0;
      func_0x000100dfa6ec(0);
      uVar12 = 0x112d377a8;
      func_0x000102467e58(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
      puVar8 = puVar7;
      func_0x000107c5f9dc(puVar7,uVar9,PTR___sypN_11034f1a8 + 8,uVar12);
      func_0x000107c6142c(puVar7);
      func_0x000107c4de70(puVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar8);
      (**(code **)(lVar13 + 8))(lVar10,lVar2);
    }
  }
  return;
}



/* Entry: 102467e18; end: 102467edf;  */

undefined8 FUN_102467e18(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102467ee0; end: 102467ee7;  */

void FUN_102467ee0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001024669c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102467ee8; end: 102467fbb;  */

undefined * FUN_102467ee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c59c74(puVar1);
  func_0x000107c5a100(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000102469b50();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 102467fbc; end: 102467fef; -[_TtC24BitmojiExtensionSettings45BitmojiExtensionKeyboardEnabledViewController getTitle] */

void FUN_102467fbc(undefined8 param_1,undefined8 param_2)

{
  FUN_102469ce4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102467ff0; end: 10246812b;  */

void FUN_102467ff0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  FUN_10246812c();
  puVar2 = &UNK_11050c2b8;
  puVar1 = puVar2;
  func_0x000107c613fc(&UNK_11050c2b8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c613fc(&UNK_11050c2b8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11050c2e0;
  func_0x000107c613fc(&UNK_11050c2e0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10daa9f38;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined **)(puVar3 + 0x20) = &UNK_10daa9f48;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  func_0x000107c61580(puVar1,2);
  func_0x000107c61580(puVar2,2);
  uVar4 = 2;
  func_0x000100859150(2,0,0x10,4,0,0,&UNK_10daa9f50,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61578(puVar1,2);
  func_0x000107c61578(puVar2,2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 10246812c; end: 102468937;  */

/* WARNING: Possible PIC construction at 0x00010246817c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024681b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246825c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246834c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024683c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024683e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246845c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024684ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024684d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024685d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024685f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024686cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246871c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246876c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246879c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024687c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024687fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024688a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246883c) */
/* WARNING: Removing unreachable block (ram,0x0001024688c8) */
/* WARNING: Removing unreachable block (ram,0x000102468850) */
/* WARNING: Removing unreachable block (ram,0x000102468800) */
/* WARNING: Removing unreachable block (ram,0x00010246885c) */
/* WARNING: Removing unreachable block (ram,0x000102468808) */
/* WARNING: Removing unreachable block (ram,0x0001024687c8) */
/* WARNING: Removing unreachable block (ram,0x0001024687a0) */
/* WARNING: Removing unreachable block (ram,0x000102468770) */
/* WARNING: Removing unreachable block (ram,0x000102468934) */
/* WARNING: Removing unreachable block (ram,0x000102468784) */
/* WARNING: Removing unreachable block (ram,0x000102468748) */
/* WARNING: Removing unreachable block (ram,0x000102468720) */
/* WARNING: Removing unreachable block (ram,0x0001024686d0) */
/* WARNING: Removing unreachable block (ram,0x000102468930) */
/* WARNING: Removing unreachable block (ram,0x000102468704) */
/* WARNING: Removing unreachable block (ram,0x000102468674) */
/* WARNING: Removing unreachable block (ram,0x00010246864c) */
/* WARNING: Removing unreachable block (ram,0x0001024685fc) */
/* WARNING: Removing unreachable block (ram,0x00010246892c) */
/* WARNING: Removing unreachable block (ram,0x000102468630) */
/* WARNING: Removing unreachable block (ram,0x0001024685d4) */
/* WARNING: Removing unreachable block (ram,0x000102468584) */
/* WARNING: Removing unreachable block (ram,0x000102468928) */
/* WARNING: Removing unreachable block (ram,0x0001024685b8) */
/* WARNING: Removing unreachable block (ram,0x00010246852c) */
/* WARNING: Removing unreachable block (ram,0x0001024684d8) */
/* WARNING: Removing unreachable block (ram,0x0001024684b0) */
/* WARNING: Removing unreachable block (ram,0x000102468460) */
/* WARNING: Removing unreachable block (ram,0x000102468924) */
/* WARNING: Removing unreachable block (ram,0x000102468494) */
/* WARNING: Removing unreachable block (ram,0x000102468438) */
/* WARNING: Removing unreachable block (ram,0x0001024683e8) */
/* WARNING: Removing unreachable block (ram,0x000102468920) */
/* WARNING: Removing unreachable block (ram,0x00010246841c) */
/* WARNING: Removing unreachable block (ram,0x0001024683c8) */
/* WARNING: Removing unreachable block (ram,0x000102468378) */
/* WARNING: Removing unreachable block (ram,0x00010246891c) */
/* WARNING: Removing unreachable block (ram,0x0001024683ac) */
/* WARNING: Removing unreachable block (ram,0x000102468350) */
/* WARNING: Removing unreachable block (ram,0x000102468334) */
/* WARNING: Removing unreachable block (ram,0x00010246829c) */
/* WARNING: Removing unreachable block (ram,0x000102468918) */
/* WARNING: Removing unreachable block (ram,0x000102468318) */
/* WARNING: Removing unreachable block (ram,0x000102468260) */
/* WARNING: Removing unreachable block (ram,0x000102468224) */
/* WARNING: Removing unreachable block (ram,0x0001024681b4) */
/* WARNING: Removing unreachable block (ram,0x000102468914) */
/* WARNING: Removing unreachable block (ram,0x000102468210) */
/* WARNING: Removing unreachable block (ram,0x000102468180) */
/* WARNING: Removing unreachable block (ram,0x000102468910) */
/* WARNING: Removing unreachable block (ram,0x000102468194) */
/* WARNING: Removing unreachable block (ram,0x0001024688a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246812c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102468910);
  (*pcVar1)();
}



/* Entry: 102468938; end: 1024689a3;  */

void FUN_102468938(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1024689a4,uVar1,uVar2);
  return;
}



/* Entry: 1024689a4; end: 102468a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024689a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112e9c198);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c3e544();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c5faec();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar1);
        goto LAB_102468a68;
      }
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
LAB_102468a68:
                    /* WARNING: Could not recover jumptable at 0x000102468a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102468a84; end: 102468af7;  */

void FUN_102468a84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102468af8,uVar1,uVar2);
  return;
}



/* Entry: 102468af8; end: 102468bab;  */

void FUN_102468af8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar2;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0x68) = lVar2;
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102468bac,uVar3,uVar1);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000102468ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102468bac; end: 102468c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102468bac(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x60) + _DAT_112e9c190);
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102468c34;
                    /* WARNING: Could not recover jumptable at 0x000102468c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102460264(uVar2,0x3032353230303032,0xe800000000000000,*(undefined8 *)(unaff_x22 + 0x28),1);
  return;
}



/* Entry: 102468c34; end: 102468c8f;  */

void FUN_102468c34(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102468c90;
  }
  else {
    pcVar1 = FUN_102468d14;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x78));
  return;
}



/* Entry: 102468c90; end: 102468d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102468c90(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  if (lVar3 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_102469a7c;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar3 = *(long *)(unaff_x22 + 0x60);
    func_0x000107c55258(*(undefined8 *)(lVar3 + _DAT_112e9c1a8));
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = (code *)0x102468d88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar4,uVar2);
  return;
}



/* Entry: 102468d14; end: 102468dbb;  */

void FUN_102468d14(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102468d54,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102468dbc; end: 102468e63; -[_TtC24BitmojiExtensionSettings45BitmojiExtensionKeyboardEnabledViewController viewDidLoad] */

void FUN_102468dbc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102467ff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102468e64; end: 102468e93; -[_TtC24BitmojiExtensionSettings45BitmojiExtensionKeyboardEnabledViewController viewDidDisappear:] */

void FUN_102468e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000102468de4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102468e94; end: 102468ef3; -[_TtC24BitmojiExtensionSettings45BitmojiExtensionKeyboardEnabledViewController init] */

void FUN_102468e94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiExtensionSettings.BitmojiExtensionKeyboardEnabledViewController",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102468ec0);
  (*pcVar1)();
}



/* Entry: 102468ef4; end: 102468f5b; -[_TtC24BitmojiExtensionSettings45BitmojiExtensionKeyboardEnabledViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102468f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102468f40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102468f14) */
/* WARNING: Removing unreachable block (ram,0x000102468f44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102468ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9c190));
  return;
}



/* Entry: 102468f5c; end: 102468fc3;  */

void FUN_102468f5c(void)

{
  func_0x000107c61168(&PTR_PTR_112842dd0);
  return;
}



/* Entry: 102468fc4; end: 10246900f;  */

void FUN_102468fc4(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010246900c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 102469010; end: 10246905f;  */

void FUN_102469010(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102469a80;
  plVar3[5] = param_1;
  plVar3[6] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[7] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  plVar3[9] = lVar2;
  func_0x000107c5fca8();
  plVar3[10] = lVar1;
  plVar3[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102468af8,lVar1,lVar2);
  return;
}



/* Entry: 102469060; end: 1024690d7;  */

void FUN_102469060(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1024690d8;
  plVar7[5] = lVar3;
  plVar7[6] = lVar5;
  iVar1 = *piVar2;
  plVar6 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar6,(code *)((long)iVar1 + (long)piVar2),uVar4);
  plVar7[7] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = 0x10245fd84;
                    /* WARNING: Could not recover jumptable at 0x00010245fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 1024690d8; end: 102469113;  */

void FUN_1024690d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102469110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102469114; end: 10246918b;  */

void FUN_102469114(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102469a3c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10246918c; end: 10246921b;  */

undefined *
FUN_10246918c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_102469114(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 10246921c; end: 10246937b;  */

ulong FUN_10246921c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10246937c);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10246918c(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102469378);
      (*pcVar1)();
    }
    FUN_10246937c(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10246937c; end: 1024695a7;  */

long FUN_10246937c(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102469494);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102469498);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102469a3c(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102469a3c(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102469490);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1024695a8; end: 102469a3b;  */

undefined * FUN_1024695a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_98 [48];
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c52610(puVar2);
  func_0x000107c59594(0x4024000000000000,puVar2);
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5af9c();
  func_0x000107c61180();
  func_0x000107c55258(puVar3);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c53840(puVar3);
  puVar5 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar5);
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c59c6c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c3d5b4(puVar2);
  func_0x000107c3d5b4(puVar2);
  func_0x000107c3d89c(puVar1);
  lVar7 = 0x112d360b8;
  FUN_102469114(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 9;
  *(undefined8 *)(lVar8 + 0x10) = 4;
  puVar6 = puVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar9 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  puVar10 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  *(undefined **)(lVar8 + 0x20) = puVar10;
  puVar6 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar9 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  puVar10 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  *(undefined **)(lVar8 + 0x28) = puVar10;
  puVar6 = puVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar9 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  puVar10 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  *(undefined **)(lVar8 + 0x30) = puVar10;
  puVar6 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar9 = puVar1;
  func_0x000107c3ec1c(puVar1);
  func_0x000107c61180();
  puVar10 = puVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  *(undefined **)(lVar8 + 0x38) = puVar10;
  lStack_68 = lVar8;
  func_0x000107c61534(lVar7,auStack_98);
  *(undefined8 *)(lVar7 + 0x18) = 5;
  *(undefined8 *)(lVar7 + 0x10) = 2;
  puVar6 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar9 = puVar6;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar7 + 0x20) = puVar9;
  puVar6 = puVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar9 = puVar6;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  *(undefined **)(lVar7 + 0x28) = puVar9;
  func_0x0001011d6d7c(lVar7);
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar7 = lStack_68;
  uVar11 = 0;
  FUN_102469a3c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar8 = lVar7;
  func_0x000107c5fc48(lVar7,uVar11);
  func_0x000107c3d048(puVar6);
  func_0x000107c6142c(lVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 102469a3c; end: 102469a7b;  */

void FUN_102469a3c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102469a7c; end: 102469a83;  */

void FUN_102469a7c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000102468db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102469a84; end: 102469ce3;  */

undefined1  [16] FUN_102469a84(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe6;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f09f6f0);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010daa9f40);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102469b50);
  (*pcVar1)();
}



/* Entry: 102469ce4; end: 102469d2b;  */

undefined1  [16] FUN_102469ce4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x654b5f656c746974;
  func_0x000107c5fadc(0x654b5f656c746974,0xee006472616f6279);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010daa9f40);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10246a6e8);
  (*pcVar1)();
}



/* Entry: 102469d2c; end: 10246a5ef;  */

undefined1  [16] FUN_102469d2c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f09f710);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010daa9f40);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102469df8);
  (*pcVar1)();
}



/* Entry: 10246a5f0; end: 10246a637;  */

undefined1  [16] FUN_10246a5f0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x5f73736563637573;
  func_0x000107c5fadc(0x5f73736563637573,0xef315f6c6562616c);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010daa9f40);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10246a6e8);
  (*pcVar1)();
}



/* Entry: 10246a638; end: 10246a6e7;  */

undefined1  [16] FUN_10246a638(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010daa9f40);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10246a6e8);
  (*pcVar1)();
}



/* Entry: 10246a6e8; end: 10246a6f7;  */

undefined1  [16] FUN_10246a6e8(void)

{
  return ZEXT816(0x11050c308);
}



/* Entry: 10246a6f8; end: 10246a79b;  */

/* WARNING: Possible PIC construction at 0x00010246a784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246a788) */

void FUN_10246a6f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = &UNK_11050c3f0;
  func_0x000107c613fc(&UNK_11050c3f0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  uVar3 = 0x112e9c1e8;
  func_0x0001000285a8(0x112e9c1e8,&UNK_10daa9fe8);
  func_0x000107c613fc();
  pcVar4 = FUN_10246a7d8;
  func_0x0001000841fc(FUN_10246a7d8,puVar2,uVar3);
  func_0x000100084214(&UNK_10daa9fb0,0x32,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10246a79c; end: 10246a7ab;  */

undefined1  [16] FUN_10246a79c(void)

{
  return ZEXT816(0x11050c3d0);
}



/* Entry: 10246a7ac; end: 10246a7d7;  */

void FUN_10246a7ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10246a7d8; end: 10246a9b3;  */

void FUN_10246a7d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *param_2;
  func_0x0001000285a8(0x112e9c1f0,&UNK_10daa9ff0);
  puVar2 = &uStack_48;
  uStack_48 = uVar4;
  func_0x0001000838ec(puVar2);
  func_0x00010246a874(uVar3,uVar1,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000100082720("PreviewCustomojiPickerViewControllerEntryPointProvider",0x36,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10246a9b4; end: 10246ac57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246a9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9c200) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c208) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c210) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 10246ac58; end: 10246ac7f; -[_TtC36PreviewCustomojiPickerImplementation36PreviewCustomojiPickerViewController viewDidLoad] */

void FUN_10246ac58(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010246aa30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10246ac80; end: 10246acd7; -[_TtC36PreviewCustomojiPickerImplementation36PreviewCustomojiPickerViewController initWithCoder:] */

void FUN_10246ac80(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PreviewCustomojiPickerImplementation/CustomojiPickerViewController.swift",
                      0x48,2,0xb,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10246acd8);
  (*pcVar1)();
}



/* Entry: 10246acd8; end: 10246b1b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246acd8(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 != 0) {
      func_0x000107c615f0(param_1);
      func_0x000100083b20(&puStack_b8);
      uVar14 = *(undefined8 *)(puStack_b8 + _DAT_112e9c240);
      uVar1 = *(undefined8 *)((long)(puStack_b8 + _DAT_112e9c240) + 8);
      uVar15 = *(undefined8 *)(puStack_b8 + _DAT_112e9c248);
      puVar4 = &UNK_11050c558;
      func_0x000107c613fc(&UNK_11050c558,0x18,7);
      *(undefined **)(puVar4 + 0x10) = puStack_b8;
      puVar5 = &UNK_11050c580;
      func_0x000107c613fc(&UNK_11050c580,0x18,7);
      *(undefined **)(puVar5 + 0x10) = puStack_b8;
      puVar6 = PTR_PTR_1126aa878;
      func_0x000107c610f8(PTR_PTR_1126aa878);
      func_0x000107c61174(puStack_b8);
      puVar7 = puStack_b8;
      func_0x000107c61174();
      func_0x000107c61174(uVar15);
      func_0x000107c5fadc(uVar14,uVar1);
      puVar13 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = FUN_10246b280;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      pcStack_a8 = FUN_10246b330;
      puStack_a0 = &UNK_11050c598;
      ppuVar8 = &puStack_b8;
      puStack_90 = puVar4;
      func_0x000107c60bc4(ppuVar8);
      uStack_c8 = 0x10246b2dc;
      puStack_e8 = puVar13;
      uStack_e0 = 0x42000000;
      puStack_d8 = &UNK_1000f6b44;
      puStack_d0 = &UNK_11050c5c0;
      ppuVar9 = &puStack_e8;
      puStack_c0 = puVar5;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c46e9c(puVar6);
      func_0x000107c61170(uVar15);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(uVar14);
      func_0x000107c61574(puStack_c0);
      func_0x000107c61574(puStack_90);
      puVar4 = PTR_PTR_1126aa880;
      func_0x000107c610f8();
      func_0x000107c49520();
      func_0x000107c61170(puVar6);
      func_0x000107c61174();
      func_0x000107c5a050();
      func_0x000107c61174();
      lVar10 = lVar3;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10246b1a8);
        (*pcVar2)();
      }
      func_0x000107c3d89c();
      func_0x000107c61170();
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x18) = 9;
      *(undefined8 *)(lVar10 + 0x10) = 4;
      puVar5 = puVar4;
      func_0x000107c4acb0();
      func_0x000107c61180();
      lVar11 = lVar3;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10246b1ac);
        (*pcVar2)();
      }
      lVar12 = lVar11;
      func_0x000107c4acb0();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      puVar13 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(puVar5);
      *(undefined **)(lVar10 + 0x20) = puVar13;
      puVar5 = puVar4;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      lVar11 = lVar3;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10246b1b0);
        (*pcVar2)();
      }
      lVar12 = lVar11;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      puVar13 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(puVar5);
      *(undefined **)(lVar10 + 0x28) = puVar13;
      puVar5 = puVar4;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar11 = lVar3;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10246b1b4);
        (*pcVar2)();
      }
      lVar12 = lVar11;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      puVar13 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(puVar5);
      *(undefined **)(lVar10 + 0x30) = puVar13;
      puVar5 = puVar4;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      lVar11 = lVar3;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10246b1b8);
        (*pcVar2)();
      }
      puVar13 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar12 = lVar11;
      func_0x000107c3ec1c(lVar11);
      func_0x000107c61180();
      func_0x000107c61170(lVar11);
      puVar6 = puVar5;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      func_0x000107c61170(puVar5);
      *(undefined **)(lVar10 + 0x38) = puVar6;
      uVar14 = 0;
      func_0x000100847984(0);
      func_0x000107c5fc48(lVar10,uVar14);
      func_0x000107c61574(lVar10);
      func_0x000107c3d048(puVar13);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar7);
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10246b1b8; end: 10246b1d3;  */

void FUN_10246b1b8(long param_1,long param_2)

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



/* Entry: 10246b1d4; end: 10246b207;  */

void FUN_10246b1d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10246b208; end: 10246b217;  */

undefined1  [16] FUN_10246b208(void)

{
  return ZEXT816(0x11050c538);
}



/* Entry: 10246b218; end: 10246b25f; -[_TtC36PreviewCustomojiPickerImplementation36PreviewCustomojiPickerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010246b234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246b238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246b218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9c210));
  return;
}



/* Entry: 10246b260; end: 10246b27f;  */

void FUN_10246b260(void)

{
  func_0x000107c61168(&PTR_PTR_112842eb0);
  return;
}



/* Entry: 10246b280; end: 10246b32f;  */

void FUN_10246b280(long param_1)

{
  long unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x10)) + 0x68))();
  if (param_1 != 0) {
    func_0x000107c411c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 10246b330; end: 10246b37b;  */

void FUN_10246b330(long param_1,undefined8 param_2)

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



/* Entry: 10246b37c; end: 10246b38b;  */

void FUN_10246b37c(long param_1,long param_2)

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



/* Entry: 10246b38c; end: 10246b3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246b38c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9c250;
  func_0x000107c61428(unaff_x20 + _DAT_112e9c250,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 10246b3d0; end: 10246b51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246b3d0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9c250;
  func_0x000107c61428(unaff_x20 + _DAT_112e9c250,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10246b51c; end: 10246b5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10246b51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112e9c250;
  func_0x000107c61614(unaff_x20 + _DAT_112e9c250,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9c240);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c248) = param_3;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  puVar4 = auStack_78;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 10246b5fc; end: 10246b6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10246b5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar3 = _DAT_112e9c250;
  func_0x000107c61614(unaff_x20 + _DAT_112e9c250,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e9c240);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e9c248) = param_3;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_4);
  func_0x0001003345b4();
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_3);
  puVar4 = &stack0xffffffffffffff98;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  return puVar4;
}



/* Entry: 10246b6cc; end: 10246b78b; -[_TtC27PreviewCustomojiPickerScope27PreviewCustomojiPickerScope initWithText:loggingContext:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246b6cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec();
  lVar3 = _DAT_112e9c250;
  func_0x000107c61614(param_1 + _DAT_112e9c250,0);
  puVar1 = (undefined8 *)(param_1 + _DAT_112e9c240);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112e9c248) = param_4;
  func_0x000107c61428(param_1 + lVar3,auStack_58,1,0);
  lVar3 = param_1 + lVar3;
  func_0x000107c61604(lVar3,param_5);
  func_0x0001003345b4();
  puVar2 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_68,puVar2);
  return;
}



/* Entry: 10246b78c; end: 10246b7e7; -[_TtC27PreviewCustomojiPickerScope27PreviewCustomojiPickerScope init] */

void FUN_10246b78c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewCustomojiPickerScope.PreviewCustomojiPickerScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10246b7b8);
  (*pcVar1)();
}



/* Entry: 10246b7e8; end: 10246b857; -[_TtC27PreviewCustomojiPickerScope27PreviewCustomojiPickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10246b7e8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e9c240 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c248));
  param_1 = param_1 + _DAT_112e9c250;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10246b858; end: 10246b8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246b858(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033e908();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9c288) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10246b8c4; end: 10246b8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246b8c4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033e908();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9c288) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10246b8cc; end: 10246b917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246b8cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9c288) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10246b918; end: 10246b99f; -[_TtC27PreviewCustomojiPickerScope42PreviewCustomojiPickerScopeFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246b918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 10246b9a0; end: 10246b9ff; -[_TtC27PreviewCustomojiPickerScope42PreviewCustomojiPickerScopeFactoryServices init] */

void FUN_10246b9a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PreviewCustomojiPickerScope.PreviewCustomojiPickerScopeFactoryServices",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10246b9cc);
  (*pcVar1)();
}



/* Entry: 10246ba00; end: 10246ba0f;  */

undefined1  [16] FUN_10246ba00(void)

{
  return ZEXT816(0x11050c688);
}



/* Entry: 10246ba10; end: 10246ba2f; -[_TtC27PreviewCustomojiPickerScope42PreviewCustomojiPickerScopeFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246ba10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9c288));
  return;
}



/* Entry: 10246ba30; end: 10246bc67;  */

void FUN_10246ba30(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  
  uVar4 = *param_2;
  func_0x0001000285a8(0x112e9c2c8,&UNK_10daaa1b0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar4;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112e9c2d0,&UNK_10daaa1b8);
  puVar2 = &UNK_11050c7c0;
  func_0x000107c613fc(&UNK_11050c7c0,0xa0,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = param_8;
  *(undefined8 *)(puVar2 + 0x38) = param_11;
  *(undefined8 *)(puVar2 + 0x40) = param_13;
  *(undefined8 *)(puVar2 + 0x48) = param_14;
  *(undefined8 *)(puVar2 + 0x50) = param_17;
  *(undefined8 *)(puVar2 + 0x58) = param_3;
  *(undefined8 *)(puVar2 + 0x60) = param_7;
  *(undefined8 *)(puVar2 + 0x68) = param_9;
  *(undefined8 *)(puVar2 + 0x70) = param_10;
  *(undefined8 *)(puVar2 + 0x78) = param_12;
  *(undefined8 *)(puVar2 + 0x80) = param_19;
  *(undefined8 *)(puVar2 + 0x88) = param_15;
  *(undefined8 *)(puVar2 + 0x90) = param_16;
  *(undefined8 *)(puVar2 + 0x98) = param_18;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_18);
  uVar4 = 0x10246bcb4;
  func_0x0001000823a8(0x10246bcb4,puVar2);
  func_0x000100082720("ContentPostSendUpsellPluginRegistryServiceProvider",0x32,2);
  uVar3 = uVar4;
  FUN_10246bfd8();
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  func_0x000100082720("ContentPostSendUpsellPluginServicesImplementationEntryPointProvider",0x43,2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10246bc68; end: 10246bcf7;  */

void FUN_10246bc68(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10246ba30(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 10246bcf8; end: 10246bed3;  */

/* WARNING: Possible PIC construction at 0x00010246be2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246be3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246be4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246be5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246be6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246be7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246be8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246be9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010246beac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246bea0) */
/* WARNING: Removing unreachable block (ram,0x00010246be90) */
/* WARNING: Removing unreachable block (ram,0x00010246be80) */
/* WARNING: Removing unreachable block (ram,0x00010246be70) */
/* WARNING: Removing unreachable block (ram,0x00010246be60) */
/* WARNING: Removing unreachable block (ram,0x00010246be50) */
/* WARNING: Removing unreachable block (ram,0x00010246be40) */
/* WARNING: Removing unreachable block (ram,0x00010246be30) */
/* WARNING: Removing unreachable block (ram,0x00010246beb0) */

void FUN_10246bcf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11050c7e8;
  func_0x000107c613fc(&UNK_11050c7e8,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  uVar2 = 0x112e9c2d8;
  func_0x0001000285a8(0x112e9c2d8,&UNK_10daaa1c0);
  func_0x000107c613fc();
  pcVar3 = FUN_10246bf84;
  func_0x0001000841fc(FUN_10246bf84,puVar1,uVar2);
  func_0x000100084214("ContentPostSendUpsellPluginRegistryServiceProvider",0x32,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10246bed4; end: 10246bf83;  */

void FUN_10246bed4(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    FUN_1029c036c(param_12,param_13,param_14,param_15,param_16,param_17,param_10,param_18,param_19,
                  param_20);
    pcVar1 = "ContentShareUpsellPluginPluginProvider";
    uVar2 = 0x26;
  }
  else {
    FUN_10246c55c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
    pcVar1 = "ContentPromoteUpsellPluginPluginProvider";
    uVar2 = 0x28;
    param_12 = param_3;
  }
  func_0x000100082720(pcVar1,uVar2,2);
  *param_1 = param_12;
  return;
}



/* Entry: 10246bf84; end: 10246bfd7;  */

void FUN_10246bf84(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10246bed4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10246bfd8; end: 10246c023;  */

void FUN_10246bfd8(undefined8 param_1)

{
  func_0x0001000285a8(0x112e9c2e0,&UNK_10daaa1d0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10246c024,param_1);
  return;
}



/* Entry: 10246c024; end: 10246c083;  */

void FUN_10246c024(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10246c384();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11050c880;
  *param_1 = lVar1;
  return;
}



/* Entry: 10246c084; end: 10246c0b3;  */

void FUN_10246c084(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 10246c0b4; end: 10246c207;  */

undefined * FUN_10246c0b4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  long lStack_58;
  
  func_0x0001029c5de0();
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    func_0x000107c6142c(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar9 = 0x20;
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uStack_60 = *(undefined1 *)(param_1 + lVar9);
      func_0x00010008a7c8(&lStack_58,&uStack_60);
      lVar3 = lStack_58;
      if (lStack_58 != 0) {
        func_0x000100083b20(&uStack_60);
        func_0x000107c61574(lVar3);
        uVar2 = CONCAT71(uStack_5f,uStack_60);
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_10246c24c(0,puVar4 + 1,1,puVar6);
        }
        uVar7 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar7 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar7 + 0x18));
          FUN_10246c24c(puVar6,uVar1 + 1,1,puVar5);
          uVar7 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(uVar7 + uVar1 * 8 + 0x20) = uVar2;
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    func_0x000107c6142c(param_1);
  }
  return puVar6;
}



/* Entry: 10246c208; end: 10246c22b;  */

void FUN_10246c208(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10246c22c; end: 10246c24b;  */

void FUN_10246c22c(void)

{
  FUN_10246c0b4();
  return;
}



/* Entry: 10246c24c; end: 10246c373;  */

ulong FUN_10246c24c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10246c374);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10246c3a4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10246c370);
      (*pcVar1)();
    }
    FUN_10246c424(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10246c374; end: 10246c383;  */

undefined1  [16] FUN_10246c374(void)

{
  return ZEXT816(0x11050c8a0);
}



/* Entry: 10246c384; end: 10246c3a3;  */

void FUN_10246c384(void)

{
  func_0x000107c61168(&PTR_PTR_112e9c328);
  return;
}



/* Entry: 10246c3a4; end: 10246c423;  */

undefined * FUN_10246c3a4(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_10246c548();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10246c424; end: 10246c547;  */

long FUN_10246c424(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10246c544);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10246c548);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e9c388;
        func_0x0001000285a8(0x112e9c388,&UNK_10daaa280);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e9c388;
      func_0x0001000285a8(0x112e9c388,&UNK_10daaa280);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10246c540);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10246c548; end: 10246c55b;  */

void FUN_10246c548(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9c390 == (undefined *)0x0 || ((ulong)puRam0000000112e9c390 & 1) != 0) {
    puVar1 = &UNK_10e90a45a;
    func_0x000107c61518(&UNK_10e90a45a,0x38,0,0);
    puRam0000000112e9c390 = puVar1;
  }
  return;
}



/* Entry: 10246c55c; end: 10246cb33;  */

void FUN_10246c55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c398,&UNK_10daaa290);
  puVar1 = &UNK_11050c970;
  func_0x000107c613fc(&UNK_11050c970,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(0x10246c660,puVar1);
  return;
}



/* Entry: 10246cb34; end: 10246cb67;  */

void FUN_10246cb34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10246cb68; end: 10246cc1f; -[_TtC26ContentPromoteUpsellPlugin26ContentPromoteUpsellPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010246cc04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246cc08) */
/* WARNING: Removing unreachable block (ram,0x00010246ce8c) */
/* WARNING: Removing unreachable block (ram,0x00010246ce98) */
/* WARNING: Removing unreachable block (ram,0x00010246ce94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10246cb68(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c3a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c3b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c3b8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c3e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c3d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c3d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c3e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e9c3c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e9c3c0));
  return;
}



/* Entry: 10246cc20; end: 10246cc8f; -[_TtC26ContentPromoteUpsellPlugin26ContentPromoteUpsellPlugin type] */

void FUN_10246cc20(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x00010246c8e8();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_113187380;
    func_0x000107c61174(PTR_PTR_113187380);
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5d0f0();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10246cc90; end: 10246cd53; -[_TtC26ContentPromoteUpsellPlugin26ContentPromoteUpsellPlugin canApplyWithParams:] */

void FUN_10246cc90(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x00010246c8e8();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c5061c(puVar2,param_2,puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    puVar2 = puVar1;
    func_0x000107c3f39c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10246cd54; end: 10246cdb7; -[_TtC26ContentPromoteUpsellPlugin26ContentPromoteUpsellPlugin applyWithParams:] */

/* WARNING: Possible PIC construction at 0x00010246cda0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010246cda4) */

void FUN_10246cd54(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x00010246c8e8();
  if (param_1 != 0) {
    func_0x000107c3e054();
    func_0x000107c615e8(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10246cdb8; end: 10246cdc7;  */

undefined1  [16] FUN_10246cdb8(void)

{
  return ZEXT816(0x11050c998);
}



/* Entry: 10246cdc8; end: 10246cde7;  */

void FUN_10246cdc8(void)

{
  func_0x000107c61168(&PTR_PTR_112843128);
  return;
}



/* Entry: 10246cde8; end: 10246ce8b; -[_TtC26ContentPromoteUpsellPlugin26ContentPromoteUpsellPlugin getLastAppliedUnixTimestamp] */

void FUN_10246cde8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x00010246c8e8();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c5061c(puVar2,param_2,puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
  }
  else {
    puVar2 = puVar1;
    func_0x000107c440e0();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10246ce8c; end: 10246ceab;  */

void FUN_10246ce8c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10246ceac; end: 10246ceef;  */

void FUN_10246ceac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9c418 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aa888;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e9c418 = puVar1;
  return;
}



/* Entry: 10246cef0; end: 10246d0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10246cef0(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = *(ulong *)(lVar1 + _DAT_112e9c3c8);
  func_0x000107c4141c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  uVar2 = uVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (uVar2 != 0) {
    func_0x00010451338c();
    uVar4 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 == 0) {
      func_0x000107c615e8(uVar2);
    }
    else {
      uVar3 = uVar4;
      func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_topmostViewController_11267b0f0);
      if ((uVar3 & 1) == 0) {
        func_0x000107c615e8(uVar2);
        func_0x000107c615e8(uVar4);
      }
      else {
        uVar3 = uVar4;
        func_0x000107c5cc6c(uVar4);
        func_0x000107c61180();
        func_0x000107c615e8(uVar4);
        uVar4 = uVar2;
        func_0x000107c409cc();
        func_0x000107c61180();
        if (uVar4 != 0) {
          uVar5 = *(undefined8 *)(lVar1 + _DAT_112e9c3b8);
          func_0x000107c5dbd4(uVar5);
          func_0x000107c61180();
          uVar6 = uVar4;
          func_0x000107c40978(uVar4);
          func_0x000107c61180();
          func_0x000107c615e8(uVar2);
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(uVar4);
          func_0x000107c61170(uVar5);
          goto LAB_10246d098;
        }
        func_0x000107c615e8(uVar2);
        func_0x000107c61170(uVar3);
      }
    }
  }
  uVar6 = 0;
LAB_10246d098:
  func_0x000107c61170(lVar1);
  return uVar6;
}



/* Entry: 10246d0bc; end: 10246d423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10246d0bc(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  puVar2 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c453e4();
    func_0x000107c5061c(puVar7);
    func_0x000107c61180();
  }
  else {
    uVar3 = *(ulong *)(puVar2 + _DAT_112e9c3e0);
    func_0x000107c4f3e4();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar4 != 0) {
      uVar3 = uVar4;
      func_0x000107c4f378();
      func_0x000107c61180();
      func_0x000107c615e8(uVar4);
      uVar4 = 0x112d4bd28;
      func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
      uVar5 = uVar3;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar3);
      if (uVar5 >> 0x3e == 0) {
        uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar3 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar3 != 0) {
        lVar13 = 4;
        do {
          uVar12 = lVar13 - 4;
          if ((uVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10246d390);
              (*pcVar1)();
            }
            uVar11 = *(ulong *)(uVar5 + lVar13 * 8);
            func_0x000107c615f0(uVar11);
            uVar9 = uVar4;
          }
          else {
            uVar11 = uVar12;
            uVar9 = uVar5;
            func_0x000100f1cdf4();
          }
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10246d28c);
            (*pcVar1)();
          }
          uVar10 = lVar13 - 3;
          uVar4 = uVar11;
          func_0x000107c3ee4c();
          func_0x000107c61180();
          uVar12 = uVar4;
          func_0x000107c44fd8();
          func_0x000107c61180();
          func_0x000107c61170(uVar4);
          uVar4 = uVar9;
          if (uVar12 != 0) {
            uVar6 = uVar12;
            func_0x000107c5faec();
            uVar4 = uVar9;
            func_0x000107c61170(uVar12);
            if ((uVar6 == param_1) && (uVar9 == param_2)) {
              func_0x000107c6142c(uVar5);
              uVar5 = uVar9;
            }
            else {
              uVar4 = uVar9;
              func_0x000107c605b8(uVar6,uVar9,param_1,param_2,0);
              func_0x000107c6142c(uVar9);
              if ((uVar6 & 1) == 0) goto LAB_10246d1d0;
            }
            func_0x000107c6142c(uVar5);
            uVar3 = uVar11;
            func_0x000107c3ee50();
            func_0x000107c61180();
            func_0x000107c615e8(uVar11);
            uVar5 = uVar3;
            func_0x000107c41214();
            func_0x000107c61180();
            func_0x000107c61170(uVar3);
            if (uVar5 == 0) goto LAB_10246d3b4;
            uVar3 = uVar5;
            func_0x000107c5ee30(uVar5);
            func_0x000107c61170(uVar5);
            puVar7 = PTR_PTR_1126b3540;
            func_0x000107c61168(PTR_PTR_1126b3540);
            uVar5 = uVar3;
            func_0x000107c5ee20(uVar3,uVar4);
            func_0x000107c5061c(puVar7);
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            func_0x00010006c090(uVar3,uVar4);
            goto LAB_10246d3f8;
          }
LAB_10246d1d0:
          func_0x000107c615e8(uVar11);
          lVar13 = lVar13 + 1;
        } while (uVar10 != uVar3);
      }
      func_0x000107c6142c(uVar5);
    }
LAB_10246d3b4:
    puVar7 = PTR_PTR_1126b3540;
    func_0x000107c61168(PTR_PTR_1126b3540);
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c453e4();
    func_0x000107c5061c(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
  }
LAB_10246d3f8:
  func_0x000107c61170(puVar2);
  return puVar7;
}


