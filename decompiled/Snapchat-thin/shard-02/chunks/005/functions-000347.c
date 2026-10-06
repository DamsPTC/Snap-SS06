/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e22134; end: 101e2215f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e22134(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = auStack_78;
  func_0x000107c61428(lVar7 + 0x10,puVar4,0,0);
  puVar2 = (undefined1 *)(lVar7 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x0001000d224c(&puStack_a8);
    puVar5 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      if ((param_2 == 0) || (param_1 != 0)) {
        puVar12 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000103bd9708(0);
        func_0x000107c610f8();
        uVar3 = 1;
        func_0x000103bd965c(1);
        func_0x000107c5c3c8(puVar12);
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        (*pcVar1)(puVar12);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar5);
      }
      else {
        puVar6 = PTR_PTR_1126bc7b8;
        func_0x000107c61168();
        func_0x000107c615f0(param_2);
        func_0x000107c430f0();
        func_0x000107c61180();
        if (puVar6 != (undefined *)0x0) {
          func_0x000107c615f0(puVar6);
          lVar7 = param_2;
          func_0x000107c4c970();
          func_0x000107c61180();
          func_0x000107c615e8(puVar6);
          if (lVar7 != 0) {
            func_0x000107c61170(lVar7);
            func_0x0001000d224c(&puStack_a8);
            puVar10 = puStack_a8;
            if (puStack_a8 == (undefined *)0x0) {
              puVar9 = PTR_PTR_1126af5d0;
              func_0x000107c61168();
              puVar4 = puVar9;
              FUN_101e21b6c();
              puVar12 = &UNK_11048af98;
              func_0x000107c613f8(&UNK_11048af98,puVar4,0,0);
              *puVar4 = 2;
              puVar10 = puVar12;
              func_0x000107c5ed2c();
              func_0x000107c614ac(puVar12);
              func_0x000107c42d78(puVar9);
              func_0x000107c61180();
              func_0x000107c61170(puVar10);
              (*pcVar1)(puVar9);
            }
            else {
              puVar12 = PTR_PTR_1126bfb98;
              func_0x000107c61168();
              puVar9 = puVar6;
              func_0x000107c4e150(puVar6);
              func_0x000107c61180();
              func_0x000107c50470();
              func_0x000107c61170(puVar9);
              if (((ulong)puVar12 & 1) == 0) {
                lVar7 = param_2;
                func_0x000107c4c970();
                func_0x000107c61180();
                if (lVar7 != 0) {
                  lVar11 = lVar7;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar7);
                  puVar12 = (undefined1 *)0xd000000000000016;
                  func_0x000107c5fadc(0xd000000000000016,0x800000010f013170);
                  puVar9 = &UNK_11048ae60;
                  func_0x000107c613fc(&UNK_11048ae60,0x18,7);
                  func_0x000107c61614(puVar9 + 0x10,puVar2);
                  puVar8 = &UNK_11048b030;
                  func_0x000107c613fc(&UNK_11048b030,0x40,7);
                  *(code **)(puVar8 + 0x10) = pcVar1;
                  *(undefined8 *)(puVar8 + 0x18) = uVar3;
                  *(undefined **)(puVar8 + 0x20) = puVar9;
                  *(long *)(puVar8 + 0x28) = param_2;
                  *(long *)(puVar8 + 0x30) = lVar11;
                  *(undefined1 **)(puVar8 + 0x38) = puVar4;
                  uStack_88 = 0x101e23004;
                  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_a0 = 0x42000000;
                  pcStack_98 = FUN_101e22bc4;
                  puStack_90 = &UNK_11048b048;
                  ppuVar13 = &puStack_a8;
                  puStack_80 = puVar8;
                  func_0x000107c60bc4(ppuVar13);
                  puVar9 = puStack_80;
                  func_0x000107c615f0(param_2);
                  func_0x000107c6157c(uVar3);
                  func_0x000107c61574(puVar9);
                  func_0x000107c5039c(puVar10);
                  func_0x000107c61170(puVar5);
                  func_0x000107c615e8(param_2);
                  func_0x000107c615e8(puVar6);
                  func_0x000107c61170(puVar2);
                  func_0x000107c60bd0(ppuVar13);
                  func_0x000107c615e8(puVar10);
                  goto LAB_101e21d10;
                }
                puVar9 = PTR_PTR_1126af5d0;
                func_0x000107c61168();
                puVar4 = puVar9;
                FUN_101e21b6c();
                puVar12 = &UNK_11048af98;
                func_0x000107c613f8(&UNK_11048af98,puVar4,0,0);
                *puVar4 = 5;
                puVar8 = puVar12;
                func_0x000107c5ed2c();
                func_0x000107c614ac(puVar12);
                func_0x000107c42d78(puVar9);
                func_0x000107c61180();
              }
              else {
                puVar9 = PTR_PTR_1126af5d0;
                func_0x000107c61168(PTR_PTR_1126af5d0);
                func_0x000103bd9708(0);
                func_0x000107c610f8();
                puVar8 = (undefined *)0x1;
                func_0x000103bd965c(1);
                func_0x000107c5c3c8(puVar9);
                func_0x000107c61180();
              }
              func_0x000107c61170(puVar8);
              (*pcVar1)(puVar9);
              func_0x000107c615e8(puVar10);
            }
            func_0x000107c61170(puVar9);
            func_0x000107c61170(puVar5);
            func_0x000107c615e8(param_2);
            func_0x000107c615e8(puVar6);
            puVar12 = puVar2;
            goto LAB_101e21d10;
          }
        }
        puVar12 = PTR_PTR_1126af5d0;
        func_0x000107c61168(PTR_PTR_1126af5d0);
        func_0x000103bd9708(0);
        func_0x000107c610f8();
        uVar3 = 1;
        func_0x000103bd965c(1);
        func_0x000107c5c3c8(puVar12);
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        (*pcVar1)(puVar12);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar5);
        func_0x000107c615e8(param_2);
        func_0x000107c615e8(puVar6);
      }
      goto LAB_101e21d10;
    }
    func_0x000107c61170(puVar2);
  }
  puVar12 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  puVar4 = puVar12;
  FUN_101e21b6c();
  puVar5 = &UNK_11048af98;
  func_0x000107c613f8(&UNK_11048af98,puVar4,0,0);
  *puVar4 = 2;
  puVar6 = puVar5;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar5);
  func_0x000107c42d78(puVar12);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  (*pcVar1)(puVar12);
LAB_101e21d10:
  func_0x000107c61170(puVar12);
  return;
}



/* Entry: 101e22160; end: 101e22247; -[_TtC29MemoriesStreamingServicesImpl20MemoriesStreamerImpl streamFeaturedSnap:originalSnap:snapDetail:queue:completion:] */

void FUN_101e22160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11048afb8;
  func_0x000107c613fc(&UNK_11048afb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000101e21130(param_3,param_4,param_5,param_6,FUN_101e22f3c,puVar1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101e22248; end: 101e222a7; -[_TtC29MemoriesStreamingServicesImpl20MemoriesStreamerImpl init] */

void FUN_101e22248(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesStreamingServicesImpl.MemoriesStreamerImpl",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e22274);
  (*pcVar1)();
}



/* Entry: 101e222a8; end: 101e2231f; -[_TtC29MemoriesStreamingServicesImpl20MemoriesStreamerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e222a8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e30790));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e30798));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e307a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e307a8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e307b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e307b8));
  return;
}



/* Entry: 101e22320; end: 101e22623;  */

/* WARNING: Possible PIC construction at 0x000101e22538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e225dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e225cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e225e0) */
/* WARNING: Removing unreachable block (ram,0x000101e2253c) */
/* WARNING: Removing unreachable block (ram,0x000101e225d0) */

void FUN_101e22320(long param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined1 auStack_78 [24];
  
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_2 >> 0x20);
    uVar7 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((param_2 >> 0x30 & 0xff) == 0) goto LAB_101e224d0;
      }
      else {
        iVar8 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar8,(int)param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e2261c);
          (*pcVar2)();
        }
        lVar9 = (long)(iVar8 - (int)param_1);
LAB_101e223b8:
        func_0x00010006c00c();
        if (lVar9 < 1) goto LAB_101e224d0;
      }
      if (param_4 >> 0x3c < 0xf) {
        uVar1 = (uint)(param_4 >> 0x20);
        uVar7 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar7 != 0) {
            iVar8 = (int)((ulong)param_3 >> 0x20);
            if (SBORROW4(iVar8,(int)param_3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101e22624);
              (*pcVar2)();
            }
            lVar9 = (long)(iVar8 - (int)param_3);
            goto LAB_101e22438;
          }
          if ((param_4 >> 0x30 & 0xff) == 0) goto LAB_101e224b4;
LAB_101e22454:
          func_0x000107c61428(param_7 + 0x10,auStack_78,0,0);
          puVar3 = (undefined *)(param_7 + 0x10);
          func_0x000107c61618();
          if (puVar3 == (undefined *)0x0) {
            puVar4 = PTR_PTR_1126af5d0;
            func_0x000107c61168();
            puVar5 = puVar4;
            FUN_101e21b6c();
            puVar6 = &UNK_11048af98;
            func_0x000107c613f8(&UNK_11048af98,puVar5,0,0);
            *puVar5 = 2;
            puVar3 = puVar6;
            func_0x000107c5ed2c();
            func_0x000107c614ac(puVar6);
            func_0x000107c42d78(puVar4);
            func_0x000107c61180();
          }
          else {
            FUN_101e22628(param_8,param_1,param_2,param_3,param_4,param_9,param_10,param_5,param_6);
          }
          goto code_r0x000107c61170;
        }
        if (uVar7 == 2) {
          lVar9 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
          if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101e22620);
            (*pcVar2)();
          }
LAB_101e22438:
          func_0x00010006c00c(param_3,param_4);
          if (0 < lVar9) goto LAB_101e22454;
        }
LAB_101e224b4:
        func_0x0001000b44c0(param_3,param_4);
      }
    }
    else if (uVar7 == 2) {
      lVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
      if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e223a8);
        (*pcVar2)();
      }
      goto LAB_101e223b8;
    }
LAB_101e224d0:
    func_0x0001000b44c0(param_1,param_2);
  }
  puVar4 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  puVar5 = puVar4;
  FUN_101e21b6c();
  puVar6 = &UNK_11048af98;
  func_0x000107c613f8(&UNK_11048af98,puVar5,0,0);
  *puVar5 = 1;
  puVar3 = puVar6;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar6);
  func_0x000107c42d78(puVar4);
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101e22624; end: 101e22627;  */

void FUN_101e22624(void)

{
  FUN_101e22320();
  return;
}



/* Entry: 101e22628; end: 101e22bc3;  */

/* WARNING: Possible PIC construction at 0x000101e226f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e22718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e227e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2286c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2298c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2299c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e229fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e22a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e22b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e22b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e22b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e22b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e228f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e22b98) */
/* WARNING: Removing unreachable block (ram,0x000101e22b88) */
/* WARNING: Removing unreachable block (ram,0x000101e22b78) */
/* WARNING: Removing unreachable block (ram,0x000101e22b68) */
/* WARNING: Removing unreachable block (ram,0x000101e22a10) */
/* WARNING: Removing unreachable block (ram,0x000101e22a00) */
/* WARNING: Removing unreachable block (ram,0x000101e229a0) */
/* WARNING: Removing unreachable block (ram,0x000101e22990) */
/* WARNING: Removing unreachable block (ram,0x000101e22870) */
/* WARNING: Removing unreachable block (ram,0x000101e227e4) */
/* WARNING: Removing unreachable block (ram,0x000101e22bc0) */
/* WARNING: Removing unreachable block (ram,0x000101e22834) */
/* WARNING: Removing unreachable block (ram,0x000101e22908) */
/* WARNING: Removing unreachable block (ram,0x000101e2290c) */
/* WARNING: Removing unreachable block (ram,0x000101e22858) */
/* WARNING: Removing unreachable block (ram,0x000101e2271c) */
/* WARNING: Removing unreachable block (ram,0x000101e226fc) */
/* WARNING: Removing unreachable block (ram,0x000101e228f4) */
/* WARNING: Removing unreachable block (ram,0x000101e22b9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e22628(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long alStack_90 [6];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x0001044d77a8(0);
  uVar2 = param_1;
  func_0x000107c307cc();
  func_0x0001044d691c();
  if ((uVar2 & 1) == 0) {
    func_0x0001000d224c(alStack_90);
    if (alStack_90[0] == 0) {
      puVar4 = PTR_PTR_1126af5d0;
      func_0x000107c61168();
      puVar5 = puVar4;
      FUN_101e21b6c();
      puVar6 = &UNK_11048af98;
      func_0x000107c613f8(&UNK_11048af98,puVar5,0,0);
      *puVar5 = 2;
      puVar3 = puVar6;
      func_0x000107c5ed2c();
      func_0x000107c614ac(puVar6);
      func_0x000107c42d78(puVar4);
      func_0x000107c61180();
    }
    else {
      func_0x000103bd9eec(0);
      func_0x000103bd99ec(param_1);
      puVar3 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      puVar6 = PTR_PTR_1126b1060;
      func_0x000107c610f8(PTR_PTR_1126b1060);
      func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
      func_0x000107c47d08(puVar6);
    }
  }
  else {
    func_0x000107c61168(PTR_PTR_1126af5d0);
    puVar3 = (undefined *)0x0;
    func_0x00010443c4d8(0);
    func_0x00010443c320();
    func_0x000107c5ed2c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 101e22bc4; end: 101e22c9b;  */

void FUN_101e22bc4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar5 = param_2;
    func_0x000107c6157c(uVar2);
    lVar4 = -0x1000000000000000;
  }
  else {
    lVar4 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    lVar5 = lVar4;
    func_0x000107c61170(lVar3);
  }
  if (param_3 == 0) {
    lVar5 = -0x1000000000000000;
  }
  else {
    lVar3 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
    func_0x000107c61170(lVar3);
  }
  (*pcVar1)(param_2,lVar4,param_3,lVar5);
  func_0x0001000b44c0(param_3,lVar5);
  func_0x0001000b44c0(param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101e22c9c; end: 101e22d73;  */

/* WARNING: Possible PIC construction at 0x000101e22d4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e22d50) */

void FUN_101e22c9c(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126af5d0;
  func_0x000107c61168();
  if (param_1 == 0) {
    func_0x000103bd9708(0);
    func_0x000107c610f8();
    puVar4 = (undefined *)0x0;
    func_0x000103bd965c(0);
    func_0x000107c5c3c8(puVar1);
  }
  else {
    puVar2 = puVar1;
    FUN_101e21b6c();
    puVar3 = &UNK_11048af98;
    func_0x000107c613f8(&UNK_11048af98,puVar2,0,0);
    *puVar2 = 6;
    puVar4 = puVar3;
    func_0x000107c5ed2c();
    func_0x000107c614ac(puVar3);
    func_0x000107c42d78(puVar1);
  }
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 101e22d74; end: 101e22d93;  */

void FUN_101e22d74(void)

{
  func_0x000107c61168(&PTR_PTR_112805ae0);
  return;
}



/* Entry: 101e22d94; end: 101e22efb;  */

int FUN_101e22d94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101e22e10;
        goto LAB_101e22df4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101e22df4:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_101e22e10:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101e22efc; end: 101e22f3b;  */

void FUN_101e22efc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e307f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da19510;
  func_0x000107c61520(&UNK_10da19510,&UNK_11048af98);
  puRam0000000112e307f0 = puVar1;
  return;
}



/* Entry: 101e22f3c; end: 101e22f53;  */

void FUN_101e22f3c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101e22f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101e22f54; end: 101e22fbb;  */

void FUN_101e22f54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101e22fbc; end: 101e22fe3;  */

void FUN_101e22fbc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101e22fe4; end: 101e23007;  */

void FUN_101e22fe4(long param_1,long param_2)

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



/* Entry: 101e23008; end: 101e2319b;  */

void FUN_101e23008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 101e2319c; end: 101e231ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e2319c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = 0;
  FUN_101e22d74(0,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112e30790) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112e30798) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112e307a0) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112e307a8) = uVar1;
  *(undefined8 *)(lVar6 + _DAT_112e307b0) = uVar4;
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(auStack_78);
  puVar7 = auStack_78;
  func_0x0001000a8868(puVar7,uStack_60);
  uVar8 = 2;
  func_0x000100774b74(2,0xe,1,uStack_60,uStack_58,puVar7);
  *(undefined8 *)(lVar6 + _DAT_112e307b8) = uVar8;
  func_0x0001000834e4(auStack_78);
  lStack_88 = lVar6;
  lStack_80 = lVar5;
  func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e231ac; end: 101e231e3;  */

void FUN_101e231ac(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101e231e4; end: 101e231eb;  */

void FUN_101e231e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101e231ec; end: 101e23227;  */

/* WARNING: Possible PIC construction at 0x000101e231f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e23208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e23218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e2320c) */
/* WARNING: Removing unreachable block (ram,0x000101e231fc) */
/* WARNING: Removing unreachable block (ram,0x000101e2321c) */

void FUN_101e231ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e23228; end: 101e232b7;  */

void FUN_101e23228(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e232b8; end: 101e232db;  */

void FUN_101e232b8(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_11048b258;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11048b210;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_11048b218;
  return;
}



/* Entry: 101e232dc; end: 101e23353;  */

void FUN_101e232dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e2377c;
                    /* WARNING: Could not recover jumptable at 0x000101e23350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101e23414(param_1,param_2,param_3);
  return;
}



/* Entry: 101e23354; end: 101e233cb;  */

void FUN_101e23354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e233cc;
                    /* WARNING: Could not recover jumptable at 0x000101e233c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101e23414(param_1,param_2,param_3);
  return;
}



/* Entry: 101e233cc; end: 101e23413;  */

void FUN_101e233cc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e23410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e23414; end: 101e2342f;  */

void FUN_101e23414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e23430,0,0);
  return;
}



/* Entry: 101e23430; end: 101e2371b;  */

void FUN_101e23430(void)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  ulong *puVar13;
  
  puVar4 = *(ulong **)(unaff_x22 + 0x10);
  func_0x000107c5ee20(puVar4,*(undefined8 *)(unaff_x22 + 0x18));
  puVar5 = puVar4;
  func_0x000107c3085c();
  func_0x000107c61170();
  if ((int)puVar5 == 0) {
    uVar9 = *(ulong *)(unaff_x22 + 0x10);
    uVar12 = *(ulong *)(unaff_x22 + 0x18);
    FUN_101e2373c();
    func_0x000107c613f8(&UNK_1104d5c78,puVar4,0,0);
    *puVar4 = uVar9;
    puVar4[1] = uVar12;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  else {
    puVar5 = *(ulong **)(unaff_x22 + 0x10);
    func_0x000107c5ee20(puVar5,*(undefined8 *)(unaff_x22 + 0x18));
    puVar4 = puVar5;
    func_0x000107c30864();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar4 != (ulong *)0x0) {
      puVar5 = puVar4;
      func_0x000107c5fc54(puVar4,PTR___s10Foundation4DataVN_110350ae0);
      func_0x000107c61170();
      uVar12 = puVar5[2];
      uVar9 = *(ulong *)(unaff_x22 + 0x20);
      if (uVar12 != 0) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e2371c);
          (*pcVar3)();
        }
        if (uVar12 <= uVar9) {
          uVar9 = 0;
          puVar13 = puVar5 + 5;
          while( true ) {
            if (puVar5[2] <= uVar9) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101e23718);
              (*pcVar3)();
            }
            puVar7 = (ulong *)puVar13[-1];
            uVar1 = *puVar13;
            uVar2 = (uint)(uVar1 >> 0x20);
            uVar8 = uVar2 >> 0x1e;
            if (1 < uVar2 >> 0x1e) break;
            if (uVar8 == 0) {
              if ((uVar1 & 0xff000000000000) == 0) goto LAB_101e23690;
            }
            else {
              uVar10 = (ulong)(int)puVar7;
              uVar11 = (long)puVar7 >> 0x20;
LAB_101e2360c:
              puVar4 = puVar7;
              func_0x00010006c00c(puVar7,uVar1);
              if (uVar10 == uVar11) goto LAB_101e23690;
            }
            puVar4 = puVar7;
            func_0x000107c5ee20(puVar7,uVar1);
            puVar6 = puVar4;
            func_0x000107c30860();
            func_0x000107c61170();
            if ((int)puVar6 == 0) {
              FUN_101e2373c();
              func_0x000107c613f8(&UNK_1104d5c78,puVar4,0,0);
              puVar4[2] = 0;
              *puVar4 = 0;
              goto LAB_101e236e8;
            }
            uVar9 = uVar9 + 1;
            func_0x00010006c090(puVar7,uVar1);
            puVar13 = puVar13 + 2;
            puVar4 = puVar7;
            if (uVar12 == uVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101e2368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(unaff_x22 + 8))(puVar5);
              return;
            }
          }
          if (uVar8 == 2) {
            uVar10 = puVar7[2];
            uVar11 = puVar7[3];
            goto LAB_101e2360c;
          }
LAB_101e23690:
          FUN_101e2373c();
          func_0x000107c613f8(&UNK_1104d5c78,puVar4,0,0);
          puVar4[2] = 0;
          *puVar4 = 1;
LAB_101e236e8:
          puVar4[1] = 0;
          *(undefined1 *)(puVar4 + 3) = 5;
          func_0x000107c61654();
          func_0x00010006c090(puVar7,uVar1);
          func_0x000107c6142c(puVar5);
          goto LAB_101e2359c;
        }
      }
      func_0x000107c6142c();
      FUN_101e2373c();
      func_0x000107c613f8(&UNK_1104d5c78,puVar5,0,0);
      *puVar5 = uVar12;
      puVar5[1] = uVar9;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 4;
      func_0x000107c61654();
      goto LAB_101e2359c;
    }
    uVar12 = *(ulong *)(unaff_x22 + 0x18);
    uVar1 = *(ulong *)(unaff_x22 + 0x20);
    uVar9 = *(ulong *)(unaff_x22 + 0x10);
    FUN_101e2373c();
    func_0x000107c613f8(&UNK_1104d5c78,puVar5,0,0);
    *puVar5 = uVar9;
    puVar5[1] = uVar12;
    puVar5[2] = uVar1;
    *(undefined1 *)(puVar5 + 3) = 3;
  }
  func_0x000107c61654();
  func_0x00010006c00c(uVar9,uVar12);
LAB_101e2359c:
                    /* WARNING: Could not recover jumptable at 0x000101e235bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e2371c; end: 101e2373b;  */

undefined1  [16] FUN_101e2371c(void)

{
  return ZEXT816(0x11048b238);
}



/* Entry: 101e2373c; end: 101e2377b;  */

void FUN_101e2373c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e30930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da64c00;
  func_0x000107c61520(&UNK_10da64c00,&UNK_1104d5c78);
  puRam0000000112e30930 = puVar1;
  return;
}



/* Entry: 101e2377c; end: 101e2377f;  */

void FUN_101e2377c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e23410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e23780; end: 101e23817;  */

void FUN_101e23780(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x0001002a6244();
  func_0x000107c613fc();
  FUN_101e2386c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101e23818; end: 101e2386b;  */

undefined8 FUN_101e23818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101e2386c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101e2386c; end: 101e23a4f;  */

void FUN_101e2386c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar1 = PTR_PTR_1126a9610;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101e23a50; end: 101e23a8b;  */

void FUN_101e23a50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e23a8c; end: 101e23adb;  */

void FUN_101e23a8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101e23adc; end: 101e23b1f;  */

undefined1  [16] FUN_101e23adc(void)

{
  return ZEXT816(0x11048b340);
}



/* Entry: 101e23b20; end: 101e23b47;  */

void FUN_101e23b20(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e23b48; end: 101e23b93;  */

undefined8 FUN_101e23b48(void)

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



/* Entry: 101e23b94; end: 101e23be7;  */

undefined8 FUN_101e23b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001006ed320(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101e23be8; end: 101e23c23;  */

void FUN_101e23be8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e23c24; end: 101e23c67;  */

undefined1  [16] FUN_101e23c24(void)

{
  return ZEXT816(0x11048b4e0);
}



/* Entry: 101e23c68; end: 101e23cbb;  */

void FUN_101e23c68(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e23cbc; end: 101e23f23;  */

long FUN_101e23cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  func_0x000100794ea4();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100794f30();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100794fbc();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
  return unaff_x20;
}



/* Entry: 101e23f24; end: 101e23fb7;  */

void FUN_101e23f24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101e23fb8; end: 101e23ffb;  */

undefined1  [16] FUN_101e23fb8(void)

{
  return ZEXT816(0x11048b5a8);
}



/* Entry: 101e23ffc; end: 101e2404f;  */

void FUN_101e23ffc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e24050; end: 101e24107;  */

long FUN_101e24050(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001006f850c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001006f8588();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001006f85b0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101e24108; end: 101e2413b;  */

void FUN_101e24108(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e2413c; end: 101e2417f;  */

undefined1  [16] FUN_101e2413c(void)

{
  return ZEXT816(0x11048b670);
}



/* Entry: 101e24180; end: 101e241d3;  */

void FUN_101e24180(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e241d4; end: 101e244bb;  */

long FUN_101e241d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a9618;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f013230);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f013250);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 101e244bc; end: 101e24507;  */

void FUN_101e244bc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e24508; end: 101e24557;  */

undefined8 FUN_101e24508(void)

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



/* Entry: 101e24558; end: 101e2459b;  */

undefined1  [16] FUN_101e24558(void)

{
  return ZEXT816(0x11048b738);
}



/* Entry: 101e2459c; end: 101e245c3;  */

void FUN_101e2459c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e245c4; end: 101e245cb;  */

undefined8 FUN_101e245c4(void)

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



/* Entry: 101e245cc; end: 101e2462f;  */

undefined8
FUN_101e245cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101e24630(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101e24630; end: 101e24883;  */

void FUN_101e24630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a9620;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x65706f6373;
  func_0x000107c5fadc(0x65706f6373,0xe500000000000000);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f013230);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1c950);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f013250);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 101e24884; end: 101e248c7;  */

void FUN_101e24884(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e248c8; end: 101e24917;  */

undefined8 FUN_101e248c8(void)

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



/* Entry: 101e24918; end: 101e2495b;  */

undefined1  [16] FUN_101e24918(void)

{
  return ZEXT816(0x11048b800);
}



/* Entry: 101e2495c; end: 101e24983;  */

void FUN_101e2495c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e24984; end: 101e2498b;  */

undefined8 FUN_101e24984(void)

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



/* Entry: 101e2498c; end: 101e24ee7;  */

void FUN_101e2498c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  puVar1 = PTR_PTR_1126a9628;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef19c70);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00aca0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0x726553636973756d;
  func_0x000107c5fadc(0x726553636973756d,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f013270);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  *(undefined **)(unaff_x20 + 0x60) = puVar3;
  return;
}



/* Entry: 101e24ee8; end: 101e24f73;  */

void FUN_101e24ee8(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101e24f74; end: 101e24fc3;  */

undefined8 FUN_101e24f74(void)

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



/* Entry: 101e24fc4; end: 101e25007;  */

undefined1  [16] FUN_101e24fc4(void)

{
  return ZEXT816(0x11048b8c8);
}



/* Entry: 101e25008; end: 101e2502f;  */

void FUN_101e25008(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e25030; end: 101e25037;  */

undefined8 FUN_101e25030(void)

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



/* Entry: 101e25038; end: 101e25183;  */

long FUN_101e25038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000100795bc0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100795c40();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100795c88();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101e25184; end: 101e251cf;  */

void FUN_101e25184(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e251d0; end: 101e25213;  */

undefined1  [16] FUN_101e251d0(void)

{
  return ZEXT816(0x11048b990);
}



/* Entry: 101e25214; end: 101e2528b;  */

void FUN_101e25214(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101e2528c; end: 101e2529b;  */

void FUN_101e2528c(void)

{
  return;
}



/* Entry: 101e2529c; end: 101e25343;  */

long FUN_101e2529c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c613fc();
  lVar2 = 0x112e31150;
  func_0x0001000285a8(0x112e31150,&UNK_10da1a4b0);
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar3 = (undefined8 *)(lVar2 + 0x70);
  *puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c61428(puVar3,auStack_58,1,0);
  *puVar3 = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(long *)(unaff_x20 + 0x20) = lVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 101e25344; end: 101e256af;  */

/* WARNING: Possible PIC construction at 0x000101e25414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2546c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e25488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2551c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e25590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2566c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e2567c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e254a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e25680) */
/* WARNING: Removing unreachable block (ram,0x000101e25670) */
/* WARNING: Removing unreachable block (ram,0x000101e25594) */
/* WARNING: Removing unreachable block (ram,0x000101e255c4) */
/* WARNING: Removing unreachable block (ram,0x000101e255cc) */
/* WARNING: Removing unreachable block (ram,0x000101e255d4) */
/* WARNING: Removing unreachable block (ram,0x000101e255a4) */
/* WARNING: Removing unreachable block (ram,0x000101e255e4) */
/* WARNING: Removing unreachable block (ram,0x000101e255ac) */
/* WARNING: Removing unreachable block (ram,0x000101e255dc) */
/* WARNING: Removing unreachable block (ram,0x000101e255b4) */
/* WARNING: Removing unreachable block (ram,0x000101e255ec) */
/* WARNING: Removing unreachable block (ram,0x000101e255bc) */
/* WARNING: Removing unreachable block (ram,0x000101e255f0) */
/* WARNING: Removing unreachable block (ram,0x000101e25520) */
/* WARNING: Removing unreachable block (ram,0x000101e2548c) */
/* WARNING: Removing unreachable block (ram,0x000101e25470) */
/* WARNING: Removing unreachable block (ram,0x000101e254ac) */
/* WARNING: Removing unreachable block (ram,0x000101e25484) */
/* WARNING: Removing unreachable block (ram,0x000101e25418) */
/* WARNING: Removing unreachable block (ram,0x000101e254a4) */

void FUN_101e25344(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c449ac();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x000107c4d2a4();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c404d4();
      func_0x000107c61180();
      func_0x000107c5cda4();
      if (lVar1 != 0) {
        lVar3 = *(long *)(unaff_x20 + 0x10);
        param_1 = lVar1;
        func_0x000107c61174(lVar1);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar2 = lVar3;
          func_0x000107c41050();
          func_0x000107c61180();
          func_0x000107c615e8(lVar3);
          if (lVar2 != 0) {
            func_0x000107c5faec(lVar2);
            param_1 = lVar2;
            goto code_r0x000107c61170;
          }
        }
        func_0x000107c61174(param_1);
        FUN_101e2697c(0,0,lVar1);
      }
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101e256b0; end: 101e25737;  */

void FUN_101e256b0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x28) = param_5;
  *(long *)(unaff_x22 + 0x30) = param_6;
  *(long *)(unaff_x22 + 0x18) = param_3;
  *(long *)(unaff_x22 + 0x20) = param_4;
  *(long *)(unaff_x22 + 0x10) = param_2;
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101e25738;
  plVar1[0x13] = param_6;
  plVar1[0x14] = param_2;
  plVar1[0x11] = param_4;
  plVar1[0x12] = param_5;
  plVar1[0x10] = param_3;
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x15] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x16] = uVar3;
  lVar4 = 0;
  func_0x000107c5eea4();
  plVar1[0x17] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x18] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x19] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x1a] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25948,0,0);
  return;
}



/* Entry: 101e25738; end: 101e25787;  */

void FUN_101e25738(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x40) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25788,0,0);
  return;
}



/* Entry: 101e25788; end: 101e2589b;  */

void FUN_101e25788(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x40) != '\x01') goto LAB_101e25880;
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) goto LAB_101e25880;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c5fadc(uVar2,uVar5);
  lVar4 = *(long *)(lVar4 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_101e25830:
    uVar5 = 0xe200000000000000;
    lVar4 = 0x5a5a;
  }
  else {
    lVar3 = lVar4;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar3 == 0) goto LAB_101e25830;
    lVar4 = lVar3;
    func_0x000107c5faec(lVar3);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c5fadc(lVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c4bce4(lVar1);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(lVar1);
LAB_101e25880:
                    /* WARNING: Could not recover jumptable at 0x000101e25898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e2589c; end: 101e25947;  */

void FUN_101e2589c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  lVar3 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25948,0,0);
  return;
}



/* Entry: 101e25948; end: 101e25a47;  */

void FUN_101e25948(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x80);
  puVar4 = PTR___ss6UInt64VN_11034f048;
  puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fb78(uVar3,uVar8);
  *(undefined **)(unaff_x22 + 0xd8) = puVar4;
  *(undefined **)(unaff_x22 + 0xe0) = puVar5;
  func_0x000107c5eea0(uVar7);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  func_0x000107c6157c(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25a48,uVar8,0);
  return;
}



/* Entry: 101e25a48; end: 101e25adb;  */

void FUN_101e25a48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61428(lVar3 + 0x70,unaff_x22 + 0x28,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  uVar1 = uVar2;
  func_0x000107c61434();
  FUN_101e27010();
  func_0x000107c6142c(uVar2);
  uVar2 = *(undefined8 *)(lVar3 + 0x70);
  *(undefined8 *)(lVar3 + 0x70) = uVar1;
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25adc,0,0);
  return;
}



/* Entry: 101e25adc; end: 101e25b23;  */

void FUN_101e25adc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x20);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar1;
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25b24,uVar1,0);
  return;
}



/* Entry: 101e25b24; end: 101e25c07;  */

void FUN_101e25b24(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0xf0);
  func_0x000107c61428(lVar6 + 0x70,unaff_x22 + 0x40,0,0);
  lVar6 = *(long *)(lVar6 + 0x70);
  if (*(long *)(lVar6 + 0x10) == 0) {
    bVar5 = true;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0xd8);
    uVar3 = *(ulong *)(unaff_x22 + 0xe0);
    func_0x000107c61434(lVar6);
    func_0x000100029284(lVar2);
    bVar5 = (uVar3 & 1) == 0;
    if (!bVar5) {
      (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x10))
                (*(undefined8 *)(unaff_x22 + 0xb0),
                 *(long *)(lVar6 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0xc0) + 0x48) * lVar2,
                 *(undefined8 *)(unaff_x22 + 0xb8));
    }
    func_0x000107c6142c(lVar6);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar6 = *(long *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  pcVar4 = *(code **)(lVar6 + 0x38);
  *(code **)(unaff_x22 + 0xf8) = pcVar4;
  (*pcVar4)(uVar7,bVar5,1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25c08,0,0);
  return;
}



/* Entry: 101e25c08; end: 101e25d3b;  */

void FUN_101e25c08(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = uVar4;
  (**(code **)(lVar1 + 0x30))(uVar4,1,uVar3);
  if ((int)uVar2 == 1) {
    func_0x000101e272a0(uVar4,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 200);
    (**(code **)(lVar1 + 0x20))(uVar2,uVar4,uVar3);
    func_0x000107c5ee68(uVar2);
    pcVar6 = *(code **)(lVar1 + 8);
    (*pcVar6)(uVar2,uVar3);
    if (param_1 < 1.0) {
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xe0));
      uVar3 = *(undefined8 *)(unaff_x22 + 200);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
      (*pcVar6)(uVar4,*(undefined8 *)(unaff_x22 + 0xb8));
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar2);
      func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101e25cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(0);
      return;
    }
  }
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar3;
  func_0x000107c6157c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25d3c,uVar3,0);
  return;
}



/* Entry: 101e25d3c; end: 101e25def;  */

void FUN_101e25d3c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(unaff_x22 + 0xf8);
  lVar4 = *(long *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x10))(uVar6,*(undefined8 *)(unaff_x22 + 0xd0),uVar3);
  (*pcVar1)(uVar6,0,1,uVar3);
  func_0x000107c61428(lVar4 + 0x70,unaff_x22 + 0x58,0x21,0);
  func_0x000100fd88c8(uVar6,uVar2,uVar5);
  func_0x000107c614a8(unaff_x22 + 0x58);
  func_0x000107c61574(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25df0,0,0);
  return;
}



/* Entry: 101e25df0; end: 101e25e5b;  */

void FUN_101e25df0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e25e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 101e25e5c; end: 101e25f03; -[_TtC35MusicContentRestrictionServicesImpl34MusicContentRestrictionCheckerImpl updatePagePropertiesFor:pageProperties:snapId:viewSource:] */

void FUN_101e25e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_5);
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_101e25344(param_3,param_4,param_5,param_2,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101e25f04; end: 101e25f5f; -[_TtC35MusicContentRestrictionServicesImpl34MusicContentRestrictionCheckerImpl isContentAvailableInCurrentCountry:trackId:] */

uint FUN_101e25f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101e26bf8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 101e25f60; end: 101e25fd7;  */

undefined1  [16] FUN_101e25f60(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar3 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar3 = 1;
    }
    uVar2 = 7;
    if (uVar3 == 0) {
      uVar2 = 0xb;
    }
    uVar2 = uVar2 | uVar1 << 0x10;
    func_0x000107c5fb64(uVar2,param_1,param_2);
    func_0x000107c5fbcc();
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
  return ZEXT816(0);
}



/* Entry: 101e25fd8; end: 101e260bf;  */

bool FUN_101e25fd8(double param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *puVar4;
  
  lVar3 = 0x112de84a8;
  func_0x0001000285a8(0x112de84a8,&UNK_10da1a5d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(&stack0xffffffffffffffa0 + -extraout_x8);
  uVar1 = param_2[1];
  *puVar4 = *param_2;
  *(undefined8 *)(&stack0xffffffffffffffa8 + -extraout_x8) = uVar1;
  iVar2 = *(int *)(lVar3 + 0x30);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)puVar4 + (long)iVar2,param_3,lVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c5ee68((long)puVar4 + (long)iVar2);
  func_0x000101e272a0(puVar4,0x112de84a8,&UNK_10da1a5d0);
  return param_1 < 1.0;
}



/* Entry: 101e260c0; end: 101e260f3;  */

void FUN_101e260c0(void)

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



/* Entry: 101e260f4; end: 101e262eb;  */

void FUN_101e260f4(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  long lStack_90;
  code *pcStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0;
  uStack_c8 = param_2;
  lStack_c0 = param_1;
  pcStack_88 = param_4;
  func_0x000107c5eea4();
  lStack_98 = *(long *)(lVar7 + -8);
  lStack_90 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puStack_a0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_b0 = (ulong *)(param_3 + 0x40);
  lStack_b8 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puStack_b0;
  lVar7 = 0;
  lStack_80 = param_3;
  do {
    lVar4 = lStack_90;
    lVar3 = lStack_98;
    puVar2 = puStack_a0;
    if (uVar11 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e262ec);
          (*pcVar5)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar12) {
          FUN_101e262ec(lStack_c0,uStack_c8,lStack_b8,lStack_80);
          return;
        }
        uVar11 = puStack_b0[lVar12];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uStack_78 = uVar11 - 1 & uVar11;
    }
    else {
      uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uStack_78 = uVar11 - 1 & uVar11;
      lVar12 = lVar7;
    }
    uStack_a8 = LZCOUNT(uVar9) | lVar12 << 6;
    puVar8 = (undefined8 *)(*(long *)(lStack_80 + 0x30) + uStack_a8 * 0x10);
    uStack_70 = *puVar8;
    uVar1 = puVar8[1];
    uStack_68 = uVar1;
    (**(code **)(lStack_98 + 0x10))
              (puStack_a0,*(long *)(lStack_80 + 0x38) + *(long *)(lStack_98 + 0x48) * uStack_a8,
               lStack_90);
    func_0x000107c61434(uVar1);
    puVar8 = &uStack_70;
    (*pcStack_88)(puVar8,puVar2);
    (**(code **)(lVar3 + 8))(puVar2,lVar4);
    func_0x000107c6142c(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    uVar11 = uStack_78;
    lVar7 = lVar12;
    if (((ulong)puVar8 & 1) != 0) {
      uVar9 = uStack_a8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lStack_c0 + uVar9) = *(ulong *)(lStack_c0 + uVar9) | 1L << (uStack_a8 & 0x3f);
      bVar6 = SCARRY8(lStack_b8,1);
      lStack_b8 = lStack_b8 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e262b4);
        (*pcVar5)();
      }
    }
  } while( true );
}



/* Entry: 101e262ec; end: 101e26593;  */

undefined * FUN_101e262ec(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [72];
  
  lVar6 = 0;
  func_0x000107c5eea4();
  lStack_b0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lStack_b8 = (long)&puStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      func_0x000107c6157c(param_4);
      puVar7 = param_4;
    }
    else {
      lStack_c8 = lVar6;
      func_0x0001000285a8(0x112d52ae0,&UNK_10d9192a0);
      puVar7 = param_3;
      func_0x000107c60498();
      if (param_2 < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = *param_1;
      }
      lVar13 = lStack_c8;
      lVar6 = 0;
      puStack_d0 = param_4;
      do {
        if (uVar14 == 0) {
          do {
            lVar15 = lVar6 + 1;
            if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e2658c);
              (*pcVar4)();
            }
            if (param_2 <= lVar15) {
              return puVar7;
            }
            uVar14 = param_1[lVar15];
            lVar6 = lVar6 + 1;
          } while (uVar14 == 0);
          uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
        }
        else {
          uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar14 = uVar14 - 1 & uVar14;
          lVar15 = lVar6;
        }
        uVar9 = LZCOUNT(uVar9) | lVar15 << 6;
        puVar1 = (undefined8 *)(*(long *)(puStack_d0 + 0x30) + uVar9 * 0x10);
        lStack_c0 = *(long *)(lStack_b0 + 0x48);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        (**(code **)(lStack_b0 + 0x10))
                  (lStack_b8,*(long *)(puStack_d0 + 0x38) + lStack_c0 * uVar9,lVar13);
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar7 + 0x28));
        func_0x000107c61434(uVar3);
        puVar8 = auStack_a8;
        func_0x000107c5fb58(puVar8,uVar2,uVar3);
        func_0x000107c606a8();
        lVar13 = lStack_c8;
        uVar12 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
        uVar11 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar9 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar7 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar5 = false;
          uVar9 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101e26590);
              (*pcVar4)();
            }
            uVar10 = 0;
            if (uVar11 != uVar9) {
              uVar10 = uVar11;
            }
            bVar5 = (bool)(uVar11 == uVar9 | bVar5);
          } while (*(ulong *)(puVar7 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar7 + uVar10 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar7 + uVar10 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar7 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        (**(code **)(lStack_b0 + 0x20))
                  (*(long *)(puVar7 + 0x38) + uVar9 * lStack_c0,lStack_b8,lStack_c8);
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        bVar5 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101e26594);
          (*pcVar4)();
        }
        lVar6 = lVar15;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar7;
}



/* Entry: 101e26594; end: 101e266df;  */

uint FUN_101e26594(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  code *apcStack_70 [2];
  
  lVar4 = 0x112de84a8;
  apcStack_70[1] = param_3;
  func_0x0001000285a8(0x112de84a8,&UNK_10da1a5d0);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)apcStack_70 + lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = (undefined8 *)(lVar8 - extraout_x12);
  uVar1 = param_1[1];
  *puVar6 = *param_1;
  puVar6[1] = uVar1;
  iVar2 = *(int *)(lVar5 + 0x30);
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x10))((long)puVar6 + (long)iVar2,param_2,lVar5);
  FUN_101e27250(puVar6,lVar8);
  iVar2 = *(int *)(lVar4 + 0x30);
  func_0x000107c61434(uVar1);
  lVar4 = lVar8;
  (*apcStack_70[1])(lVar8,lVar8 + iVar2);
  func_0x000101e272a0(puVar6,0x112de84a8,&UNK_10da1a5d0);
  (**(code **)(lVar7 + 8))(lVar8 + iVar2,lVar5);
  func_0x000107c6142c(*(undefined8 *)((long)apcStack_70 + lVar3 + 8));
  return ((uint)lVar4 ^ 0xffffffff) & 1;
}



/* Entry: 101e266e0; end: 101e267ab;  */

void FUN_101e266e0(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e267ac);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      func_0x000107c60ee4(param_2,param_3 << 3);
    }
    func_0x000107c6157c(param_4);
    FUN_101e260f4(param_2,param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      func_0x000107c61574(param_4);
    }
    else {
      *param_7 = unaff_x21;
      func_0x000107c61574(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e267a8);
  (*pcVar1)();
}



/* Entry: 101e267ac; end: 101e2697b;  */

int FUN_101e267ac(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar11 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar5 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c5eb88(uVar5);
  func_0x000100e8b654();
  uVar4 = uVar5;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c601f0(uVar5,PTR___sSSN_11034da80,lVar3);
  (**(code **)(lVar11 + 8))(uVar5,lVar2);
  uVar5 = uVar4;
  func_0x000107c5fb5c(uVar4,puVar8);
  if (uVar5 == 2) {
    puVar7 = puVar8;
    func_0x000107c5fb24();
    uVar5 = uVar4;
    puVar9 = puVar7;
    func_0x000100ed7ed4();
    if (puVar9 != (undefined *)0x0) {
      puVar10 = puVar7;
      FUN_101e25f60();
      func_0x000107c6142c(puVar7);
      puVar7 = puVar9;
      if (puVar10 != (undefined *)0x0) {
        uVar6 = uVar5;
        func_0x000107c5fa6c(uVar5,puVar9);
        puVar7 = puVar10;
        if (((uVar6 & 1) == 0) ||
           (uVar6 = uVar4, func_0x000107c5fa6c(uVar4,puVar10), (uVar6 & 1) == 0)) {
          func_0x000107c6142c(puVar9);
        }
        else {
          func_0x000107c5fa58(uVar5,puVar9);
          func_0x000107c6142c(puVar9);
          if (((uint)uVar5 & 0xff00) != 0x100) {
            func_0x000107c5fa58(uVar4,puVar10);
            func_0x000107c6142c(puVar10);
            func_0x000107c6142c(puVar8);
            if (((uint)uVar4 & 0xff00) == 0x100) {
              return 0x2a3;
            }
            uVar1 = ((uint)uVar5 & 0xff) * 0x1a + ((uint)uVar4 & 0xff);
            if (0x97d < uVar1) {
              uVar1 = 0x97e;
            }
            return uVar1 - 0x6db;
          }
        }
      }
    }
    func_0x000107c6142c(puVar7);
  }
  func_0x000107c6142c(puVar8);
  return 0x2a3;
}



/* Entry: 101e2697c; end: 101e26b3b;  */

bool FUN_101e2697c(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return true;
  }
  func_0x000107c61174();
  lVar4 = param_3;
  func_0x000107c40894();
  lVar11 = param_3;
  lVar7 = param_3;
  if ((int)lVar4 == 2) {
    func_0x000107c40858();
    func_0x000107c61180();
    if (lVar11 == 0) {
      bVar1 = false;
      goto LAB_101e26b18;
    }
    lVar4 = lVar11;
    func_0x000107c40878();
    func_0x000107c61180();
    if (lVar4 == 0) {
      bVar1 = false;
    }
    else {
      lVar6 = lVar11;
      func_0x000107c4087c();
      FUN_101e267ac(param_1,param_2);
      lVar8 = lVar11;
      if (lVar6 == 0) {
        bVar1 = false;
        lVar5 = param_3;
        lVar7 = lVar4;
      }
      else {
        lVar11 = 0;
        do {
          lVar7 = lVar4;
          func_0x000107c5dc14();
          uVar10 = (uint)param_1;
          bVar2 = (uint)lVar7 == uVar10;
          bVar1 = uVar10 < 0x80000000 && bVar2;
          lVar5 = lVar4;
          lVar7 = param_3;
          if (uVar10 < 0x80000000 && bVar2) break;
          lVar11 = lVar11 + 1;
          lVar5 = param_3;
          lVar7 = lVar4;
        } while (lVar6 != lVar11);
      }
LAB_101e26b00:
      lVar11 = lVar7;
      param_3 = lVar5;
      func_0x000107c61170(lVar8);
    }
LAB_101e26b10:
    func_0x000107c61170(lVar11);
  }
  else {
    if ((int)lVar4 == 1) {
      func_0x000107c4085c();
      func_0x000107c61180();
      if (lVar11 != 0) {
        lVar5 = lVar11;
        func_0x000107c40878();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar4 = lVar11;
          func_0x000107c4087c();
          FUN_101e267ac(param_1,param_2);
          lVar8 = lVar11;
          if (lVar4 == 0) {
            bVar1 = true;
          }
          else {
            lVar11 = 0;
            do {
              lVar6 = lVar5;
              func_0x000107c5dc14();
              iVar9 = (int)param_1;
              bVar2 = (int)lVar6 != iVar9;
              bVar1 = iVar9 < 0 || bVar2;
              bVar3 = lVar4 + -1 != lVar11;
              lVar11 = lVar11 + 1;
            } while ((iVar9 < 0 || bVar2) && bVar3);
          }
          goto LAB_101e26b00;
        }
        bVar1 = true;
        goto LAB_101e26b10;
      }
    }
    bVar1 = true;
  }
LAB_101e26b18:
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 101e26b3c; end: 101e26bbb;  */

void FUN_101e26b3c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101e26bbc;
  plVar8[5] = lVar3;
  plVar8[6] = lVar9;
  plVar8[3] = lVar2;
  plVar8[4] = lVar1;
  plVar8[2] = lVar7;
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  plVar8[7] = (long)plVar4;
  *plVar4 = (long)plVar8;
  plVar4[1] = (long)FUN_101e25738;
  plVar4[0x13] = lVar9;
  plVar4[0x14] = lVar7;
  plVar4[0x11] = lVar1;
  plVar4[0x12] = lVar3;
  plVar4[0x10] = lVar2;
  lVar7 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar6 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar6;
  lVar7 = 0;
  func_0x000107c5eea4();
  plVar4[0x17] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar4[0x18] = lVar7;
  uVar6 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x19] = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1a] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e25948,0,0);
  return;
}


