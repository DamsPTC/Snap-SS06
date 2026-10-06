/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031b56e4; end: 1031b5903;  */

/* WARNING: Possible PIC construction at 0x0001031b5810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b5850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b58c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b5890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b58a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b5894) */
/* WARNING: Removing unreachable block (ram,0x0001031b58c8) */
/* WARNING: Removing unreachable block (ram,0x0001031b5854) */
/* WARNING: Removing unreachable block (ram,0x0001031b58a8) */
/* WARNING: Removing unreachable block (ram,0x0001031b5858) */
/* WARNING: Removing unreachable block (ram,0x0001031b58ac) */
/* WARNING: Removing unreachable block (ram,0x0001031b58a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b56e4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = _DAT_112f48ee0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f48ee0);
  if (lVar3 != 0) {
    func_0x000107c5c008();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + _DAT_11307f518);
      puVar2 = (undefined1 *)((undefined8 *)(lVar3 + _DAT_11307f518))[1];
      func_0x000107c61434(puVar2);
      func_0x000107c61170(lVar3);
      if (puVar2 != (undefined1 *)0x0) {
        lVar4 = *(long *)(unaff_x20 + lVar4);
        puVar7 = puVar2;
        if (lVar4 != 0) {
          func_0x000107c405e8();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar4 = *(long *)(unaff_x20 + _DAT_112f48ea8);
            func_0x000107c5c734();
            func_0x000107c61180();
            if (lVar4 != 0) {
              lVar3 = lVar4;
              func_0x000107c49ea4();
              func_0x000107c615e8(lVar4);
              lVar4 = _DAT_112f48e80;
              if ((int)lVar3 != 0) {
                puVar7 = auStack_68;
                func_0x000107c61428(unaff_x20 + _DAT_112f48e80,puVar7,0,0);
                uVar5 = unaff_x20 + lVar4;
                func_0x000107c61618();
                if (uVar5 != 0) {
                  uVar6 = uVar5;
                  func_0x000107c5c82c();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar5);
                  uVar5 = uVar6;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar6);
                  uVar5 = uVar5 & 0xffffffffffff;
                  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
                    uVar5 = (ulong)puVar7 >> 0x38 & 0xf;
                  }
                  if (uVar5 == 0) goto code_r0x000107c6142c;
                }
              }
            }
            lVar4 = *(long *)(unaff_x20 + _DAT_112f48e98);
            func_0x000107c5c734();
            func_0x000107c61180();
            puVar7 = puVar2;
            if (lVar4 != 0) {
              func_0x000107c5fadc(uVar1,puVar2);
            }
          }
        }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 1031b5904; end: 1031b595b;  */

void FUN_1031b5904(ulong param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_1031b56e4();
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1031b595c; end: 1031b599f; -[_TtC20SCAIStoryReplyPlugin22AIStoryReplyController didSelectInputItem:] */

void FUN_1031b595c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1031b612c();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031b59a0; end: 1031b59a3; -[_TtC20SCAIStoryReplyPlugin22AIStoryReplyController didDeselectInputItem:] */

void FUN_1031b59a0(void)

{
  return;
}



/* Entry: 1031b59a4; end: 1031b59a7; -[_TtC20SCAIStoryReplyPlugin22AIStoryReplyController didCollapseInputItem:] */

void FUN_1031b59a4(void)

{
  return;
}



/* Entry: 1031b59a8; end: 1031b59ab; -[_TtC20SCAIStoryReplyPlugin22AIStoryReplyController didUncollapseInputItem:] */

void FUN_1031b59a8(void)

{
  return;
}



/* Entry: 1031b59ac; end: 1031b5a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b59ac(ulong param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f48e88;
  if ((param_1 & 1) == 0) {
    func_0x0001031b3b80();
    func_0x000103ed1ac4();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112f48e88;
    func_0x000107c61428(param_2 + _DAT_112f48e88,auStack_48,0,0);
    lVar1 = param_2 + lVar1;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c53d8c();
  }
  else {
    func_0x000107c61428(param_2 + _DAT_112f48e88,auStack_48,0,0);
    param_2 = param_2 + lVar1;
    func_0x000107c61618();
    lVar1 = param_2;
    if (param_2 != 0) {
      func_0x0001031b3b80();
      func_0x000107c53d8c(param_2);
      func_0x000107c61170(param_2);
      func_0x000107c61170(lVar1);
    }
    func_0x0001031b3b80();
    func_0x000103ed1a10();
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1031b5a98; end: 1031b5c73; -[_TtC20SCAIStoryReplyPlugin22AIStoryReplyController aiReplyGenerationDidUpdateLoadingStateWithIsLoading:] */

void FUN_1031b5a98(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001031b3b10();
  puVar2 = &UNK_11061bcd0;
  func_0x000107c613fc(&UNK_11061bcd0,0x20,7);
  puVar2[0x10] = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uStack_40 = 0x1031b653c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11061bce8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1031b5c74; end: 1031b5fa3; -[_TtC20SCAIStoryReplyPlugin22AIStoryReplyController aiReplyGenerationDidFailWithErrorWithErrorMessage:debugErrorMessage:] */

void FUN_1031b5c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c5faec();
  if (param_4 == 0) {
    param_4 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec();
  }
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001031b3b10();
  puVar2 = &UNK_11061bc80;
  func_0x000107c613fc(&UNK_11061bc80,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(long *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  uStack_50 = 0x1031b6544;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11061bc98;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar1);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1031b5fa4; end: 1031b60a7; -[_TtC20SCAIStoryReplyPlugin22AIStoryReplyController aiReplyGenerationDidGenerateResultWithAiStoryReplyText:] */

void FUN_1031b5fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c5faec();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001031b3b10();
  puVar2 = &UNK_11061bc30;
  func_0x000107c613fc(&UNK_11061bc30,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uStack_50 = 0x1031b6548;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11061bc48;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar1);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 1031b60a8; end: 1031b612b; -[_TtC20SCAIStoryReplyPlugin22AIStoryReplyController plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001031b60e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b6100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b60e8) */
/* WARNING: Removing unreachable block (ram,0x0001031b6104) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b60a8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1031b612c; end: 1031b62bf;  */

/* WARNING: Possible PIC construction at 0x0001031b5610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b56cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b6288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b5810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b5850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b58c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b5890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b58a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b5894) */
/* WARNING: Removing unreachable block (ram,0x0001031b58c8) */
/* WARNING: Removing unreachable block (ram,0x0001031b5854) */
/* WARNING: Removing unreachable block (ram,0x0001031b58a8) */
/* WARNING: Removing unreachable block (ram,0x0001031b5858) */
/* WARNING: Removing unreachable block (ram,0x0001031b58ac) */
/* WARNING: Removing unreachable block (ram,0x0001031b628c) */
/* WARNING: Removing unreachable block (ram,0x0001031b56d0) */
/* WARNING: Removing unreachable block (ram,0x0001031b5614) */
/* WARNING: Removing unreachable block (ram,0x0001031b58a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b612c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  
  lVar13 = unaff_x20;
  func_0x000107c614f0();
  lVar8 = *(long *)(unaff_x20 + _DAT_112f48ed0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar9 = lVar8;
    func_0x000107c3da94();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    lVar8 = lVar9;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar9 = lVar8;
    func_0x000107c5bcc0();
    func_0x000107c61170(lVar8);
    lVar8 = _DAT_112f48e80;
    if (lVar9 == 3) {
      lVar8 = *(long *)(unaff_x20 + _DAT_112f48ea8);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar8 != 0) {
        lVar9 = lVar8;
        func_0x000107c49ea4();
        func_0x000107c615e8(lVar8);
        if ((int)lVar9 != 0) {
          func_0x0001031b3b10();
          puVar10 = &UNK_11061bd20;
          func_0x000107c613fc(&UNK_11061bd20,0x18,7);
          func_0x000107c61614(puVar10 + 0x10);
          puVar11 = &UNK_11061bd98;
          func_0x000107c613fc(&UNK_11061bd98,0x20,7);
          *(undefined **)(puVar11 + 0x10) = puVar10;
          *(long *)(puVar11 + 0x18) = lVar13;
          func_0x000107c6157c(puVar10);
          FUN_1031b4de8(lVar8,0x1031b6390,puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_release_11034f4c0)(puVar10);
          return;
        }
      }
      lVar13 = _DAT_112f48ee0;
      lVar8 = *(long *)(unaff_x20 + _DAT_112f48ee0);
      if (lVar8 != 0) {
        func_0x000107c5c008();
        func_0x000107c61180();
        if (lVar8 != 0) {
          uVar1 = *(undefined8 *)(lVar8 + _DAT_11307f518);
          puVar2 = (undefined1 *)((undefined8 *)(lVar8 + _DAT_11307f518))[1];
          func_0x000107c61434(puVar2);
          func_0x000107c61170(lVar8);
          if (puVar2 != (undefined1 *)0x0) {
            lVar13 = *(long *)(unaff_x20 + lVar13);
            puVar12 = puVar2;
            if (lVar13 != 0) {
              func_0x000107c405e8();
              func_0x000107c61180();
              if (lVar13 != 0) {
                lVar13 = *(long *)(unaff_x20 + _DAT_112f48ea8);
                func_0x000107c5c734();
                func_0x000107c61180();
                if (lVar13 != 0) {
                  lVar8 = lVar13;
                  func_0x000107c49ea4();
                  func_0x000107c615e8(lVar13);
                  lVar13 = _DAT_112f48e80;
                  if ((int)lVar8 != 0) {
                    puVar12 = auStack_68;
                    func_0x000107c61428(unaff_x20 + _DAT_112f48e80,puVar12,0,0);
                    uVar6 = unaff_x20 + lVar13;
                    func_0x000107c61618();
                    if (uVar6 != 0) {
                      uVar7 = uVar6;
                      func_0x000107c5c82c();
                      func_0x000107c61180();
                      func_0x000107c61170(uVar6);
                      uVar6 = uVar7;
                      func_0x000107c5faec();
                      func_0x000107c61170(uVar7);
                      uVar6 = uVar6 & 0xffffffffffff;
                      if (((ulong)puVar12 & 0x2000000000000000) != 0) {
                        uVar6 = (ulong)puVar12 >> 0x38 & 0xf;
                      }
                      if (uVar6 == 0) goto code_r0x000107c6142c;
                    }
                  }
                }
                lVar13 = *(long *)(unaff_x20 + _DAT_112f48e98);
                func_0x000107c5c734();
                func_0x000107c61180();
                puVar12 = puVar2;
                if (lVar13 != 0) {
                  func_0x000107c5fadc(uVar1,puVar2);
                }
              }
            }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar12);
            return;
          }
        }
      }
      return;
    }
    if (lVar9 == 1) {
      func_0x000107c61428(unaff_x20 + _DAT_112f48e80,auStack_78,0,0);
      puVar10 = (undefined *)(unaff_x20 + lVar8);
      func_0x000107c61618();
      if (puVar10 != (undefined *)0x0) {
        puVar11 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x00010439c014(0);
        func_0x000107c610f8();
        puVar3 = (undefined *)0x17;
        func_0x00010439b9d8(0x17,0,0,0x2b,0,0,0x2e,0);
        puVar4 = *(undefined **)(unaff_x20 + _DAT_112f48ed8);
        func_0x000107c3eda8(puVar4);
        func_0x000107c61180();
        func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f48e90));
        lVar13 = _DAT_112f48ee0;
        puVar5 = *(undefined **)(unaff_x20 + _DAT_112f48ee0);
        puVar14 = puVar3;
        if (puVar5 != (undefined *)0x0) {
          func_0x000107c405e8();
          func_0x000107c61180();
          if (puVar5 != (undefined *)0x0) {
            lVar13 = *(long *)(unaff_x20 + lVar13);
            if (lVar13 != 0) {
              func_0x000107c5c008();
              func_0x000107c61180();
              if (lVar13 != 0) {
                uVar1 = *(undefined8 *)(lVar13 + _DAT_11307f518);
                puVar12 = (undefined1 *)((undefined8 *)(lVar13 + _DAT_11307f518))[1];
                func_0x000107c61434(puVar12);
                func_0x000107c61170(lVar13);
                if (puVar12 != (undefined1 *)0x0) {
                  lVar13 = *(long *)(unaff_x20 + _DAT_112f48ea0);
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  if (lVar13 != 0) {
                    func_0x000107c5fadc(uVar1,puVar12);
                  }
                  goto code_r0x000107c6142c;
                }
              }
            }
            func_0x000107c61170(puVar10);
            puVar10 = puVar11;
            puVar14 = puVar4;
            puVar11 = puVar3;
            puVar4 = puVar5;
          }
        }
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar14);
        func_0x000107c61170(puVar4);
      }
      return;
    }
  }
  return;
}



/* Entry: 1031b62c0; end: 1031b62f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b62c0(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f48e88;
  uVar2 = (ulong)*(byte *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
    func_0x0001031b3b80();
    func_0x000103ed1ac4();
    func_0x000107c61170(uVar2);
    lVar1 = _DAT_112f48e88;
    func_0x000107c61428(lVar3 + _DAT_112f48e88,auStack_48,0,0);
    lVar1 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c53d8c();
  }
  else {
    func_0x000107c61428(lVar3 + _DAT_112f48e88,auStack_48,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    lVar1 = lVar3;
    if (lVar3 != 0) {
      func_0x0001031b3b80();
      func_0x000107c53d8c(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar1);
    }
    func_0x0001031b3b80();
    func_0x000103ed1a10();
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1031b62f8; end: 1031b6377;  */

void FUN_1031b62f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128bee28);
  return;
}



/* Entry: 1031b6378; end: 1031b6397;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b6378(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar4 = lVar1;
  func_0x0001031b3b80(lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000103ed1ac4();
  func_0x000107c61170(lVar4);
  lVar4 = _DAT_112f48e88;
  func_0x000107c61428(lVar1 + _DAT_112f48e88,auStack_48,0,0);
  lVar4 = lVar1 + lVar4;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c53d8c();
    func_0x000107c61170(lVar4);
  }
  puVar2 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c5fadc(uVar3,uVar5);
  func_0x000107c409d8(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  lVar4 = *(long *)(lVar1 + _DAT_112f48eb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c5c2e0();
    func_0x000107c615e8(lVar4);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1031b6398; end: 1031b63bb;  */

void FUN_1031b6398(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 1031b63bc; end: 1031b63cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b63bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = param_1;
  func_0x000107c3ebcc();
  if ((int)uVar4 != 0) {
    func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + _DAT_112f48ec0);
      func_0x000107c61174();
      func_0x000107c61170(lVar5);
      lVar5 = lVar8;
      func_0x000107c5a850();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      (**(code **)(lVar5 + 0x10))(lVar5,1);
      func_0x000107c60bd0(lVar5);
    }
  }
  puVar6 = &UNK_11061beb0;
  func_0x000107c613fc(&UNK_11061beb0,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  pcStack_50 = FUN_1031b63f0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11061bec8;
  ppuVar7 = &puStack_70;
  puStack_48 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_48;
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(uVar2);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 1031b63cc; end: 1031b63ef;  */

void FUN_1031b63cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(1);
  return;
}



/* Entry: 1031b63f0; end: 1031b6423;  */

void FUN_1031b63f0(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000107c3ebcc(*(undefined8 *)(unaff_x20 + 0x20));
  (*pcVar1)();
  return;
}



/* Entry: 1031b6424; end: 1031b643b;  */

void FUN_1031b6424(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar4 = &UNK_11061c068;
  func_0x000107c613fc(&UNK_11061c068,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1031b648c;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1031b6494;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1031b4c28;
  puStack_78 = &UNK_11061c080;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11061c0b8;
  func_0x000107c613fc(&UNK_11061c0b8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  puVar7 = &UNK_11061c0e0;
  func_0x000107c613fc(&UNK_11061c0e0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1031b64b4;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_70 = (code *)0x1031b6534;
  puStack_90 = puVar9;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1031b4c28;
  puStack_78 = &UNK_11061c0f8;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar9 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  func_0x000107c4c7ec(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(uVar1);
  puVar9 = puVar4;
  func_0x000107c61544(puVar4,"",0x6f,0x88,0x11,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1031b4b80);
    (*pcVar3)();
  }
  puVar4 = puVar7;
  func_0x000107c61544(puVar7,"",0x6f,0x8e,0x20,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1031b4b84);
  (*pcVar3)();
}



/* Entry: 1031b643c; end: 1031b645b;  */

void FUN_1031b643c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031b645c; end: 1031b646b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b645c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112f48e98);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      func_0x000107c5be30(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + _DAT_112f48f08);
    lVar4 = ((undefined8 *)(lVar3 + _DAT_112f48f08))[1];
    func_0x000107c61434(lVar4);
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_b0,0,0);
      lVar3 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar5 = *(long *)(lVar3 + _DAT_112f48ea0);
        func_0x000107c61174();
        func_0x000107c61170(lVar3);
        lVar3 = lVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar3 != 0) {
          func_0x000107c5fadc(uVar6,lVar4);
          func_0x000107c6142c(lVar4);
          func_0x000107c5c82c();
          func_0x000107c61180();
          if (param_1 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1031b486c);
            (*pcVar2)();
          }
          func_0x000107c4b9b4(lVar3);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(param_1);
          goto LAB_1031b4810;
        }
      }
      func_0x000107c6142c(lVar4);
    }
  }
LAB_1031b4810:
  func_0x000107c61428(unaff_x20 + 0x10,auStack_98,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f48f08);
    uVar6 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    func_0x000107c61170();
    func_0x000107c6142c(uVar6);
  }
  return;
}



/* Entry: 1031b646c; end: 1031b648b;  */

void FUN_1031b646c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031b648c; end: 1031b6493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b648c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_2 != 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112f48e98);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c5be30(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1031b6494; end: 1031b64b3;  */

void FUN_1031b6494(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031b64b4; end: 1031b654b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b64b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar2 = lVar4 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112f48ee0;
  if (lVar2 == 0) {
    return;
  }
  if ((param_2 != 1) || (lVar6 = *(long *)(lVar2 + _DAT_112f48ee0), lVar6 == 0)) goto LAB_1031b4dcc;
  func_0x000107c405e8();
  func_0x000107c61180();
  if (lVar6 == 0) goto LAB_1031b4dcc;
  lVar3 = *(long *)(lVar2 + lVar3);
  if (lVar3 != 0) {
    func_0x000107c5c008();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + _DAT_11307f518);
      lVar1 = ((long *)(lVar3 + _DAT_11307f518))[1];
      func_0x000107c61434(lVar1);
      func_0x000107c61170(lVar3);
      if (lVar1 != 0) {
        func_0x000107c61428(lVar4 + 0x10,auStack_70,0,0);
        lVar4 = lVar4 + 0x10;
        func_0x000107c61618();
        if (lVar4 != 0) {
          lVar3 = *(long *)(lVar4 + _DAT_112f48ea0);
          func_0x000107c61174();
          func_0x000107c61170(lVar4);
          lVar4 = lVar3;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar3);
          if (lVar4 != 0) {
            func_0x000107c5fadc(lVar5,lVar1);
            func_0x000107c6142c(lVar1);
            func_0x000107c4b9b0(lVar4);
            func_0x000107c615e8(lVar4);
            func_0x000107c61170(lVar6);
            lVar2 = lVar5;
            goto LAB_1031b4dc4;
          }
        }
        func_0x000107c6142c(lVar1);
      }
    }
  }
LAB_1031b4dc4:
  func_0x000107c61170(lVar2);
LAB_1031b4dcc:
  func_0x000107c61170();
  return;
}



/* Entry: 1031b654c; end: 1031b6583;  */

void FUN_1031b654c(long param_1)

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



/* Entry: 1031b6584; end: 1031b65c7; -[_TtC20SCAIStoryReplyPlugin26AIStoryReplyPluginProvider providerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031b6584(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f48f58;
  func_0x000107c61428(param_1 + _DAT_112f48f58,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1031b65c8; end: 1031b6617; -[_TtC20SCAIStoryReplyPlugin26AIStoryReplyPluginProvider setProviderType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b65c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f48f58;
  func_0x000107c61428(param_1 + _DAT_112f48f58,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1031b6618; end: 1031b6677; -[_TtC20SCAIStoryReplyPlugin26AIStoryReplyPluginProvider init] */

void FUN_1031b6618(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAIStoryReplyPlugin.AIStoryReplyPluginProvider",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031b6644);
  (*pcVar1)();
}



/* Entry: 1031b6678; end: 1031b672f; -[_TtC20SCAIStoryReplyPlugin26AIStoryReplyPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031b6694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b66b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b66d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b66f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b6714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b66f8) */
/* WARNING: Removing unreachable block (ram,0x0001031b66d8) */
/* WARNING: Removing unreachable block (ram,0x0001031b66b8) */
/* WARNING: Removing unreachable block (ram,0x0001031b6698) */
/* WARNING: Removing unreachable block (ram,0x0001031b6718) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b6678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f48f60));
  return;
}



/* Entry: 1031b6730; end: 1031b67a3; -[_TtC20SCAIStoryReplyPlugin26AIStoryReplyPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1031b6730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1031b67ac(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031b67a4; end: 1031b67ab; -[_TtC20SCAIStoryReplyPlugin26AIStoryReplyPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1031b67a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1031b67ac; end: 1031b69fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b67ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f48f60);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f48f68);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f48f70);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f48f78);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f48f80);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f48f88);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f48f90);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f48f98);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f48fa0);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f48fa8);
  lVar1 = 0;
  FUN_1031b36b8();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112f48e28) = 2;
  *(undefined8 *)(lVar2 + _DAT_112f48e30) = 0;
  *(undefined8 *)(lVar2 + _DAT_112f48e38) = 0;
  func_0x000107c61614(lVar2 + _DAT_112f48e40,0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar4 = &UNK_11061c130;
  func_0x000107c613fc(&UNK_11061c130,0x68,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  *(undefined8 *)(puVar4 + 0x30) = uVar6;
  *(undefined8 *)(puVar4 + 0x38) = uVar9;
  *(undefined8 *)(puVar4 + 0x40) = uVar8;
  *(undefined8 *)(puVar4 + 0x48) = uVar7;
  *(undefined8 *)(puVar4 + 0x50) = uVar11;
  *(undefined8 *)(puVar4 + 0x58) = uVar15;
  *(undefined8 *)(puVar4 + 0x60) = uVar13;
  uStack_70 = 0x1031b6a1c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1031b654c;
  puStack_78 = &UNK_11061c148;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_68;
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  *(undefined **)(lVar2 + _DAT_112f48e48) = puVar3;
  lStack_a0 = lVar2;
  lStack_98 = lVar1;
  func_0x000107c61154(&lStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031b69fc; end: 1031b6a57;  */

void FUN_1031b69fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128bef90);
  return;
}



/* Entry: 1031b6a58; end: 1031b6a73;  */

void FUN_1031b6a58(long param_1,long param_2)

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



/* Entry: 1031b6a74; end: 1031b7007;  */

void FUN_1031b6a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_11061c180;
  func_0x000107c613fc(&UNK_11061c180,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(FUN_1031b7008,puVar1);
  return;
}



/* Entry: 1031b7008; end: 1031b702b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b7008(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  lVar2 = lStack_68;
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  uVar1 = 0x112e4de20;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  func_0x00010017da58(lVar2,uVar1);
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(lVar2);
  func_0x000107c61174();
  puVar5 = puVar4;
  FUN_1031b702c();
  puVar6 = PTR_PTR_1126c6770;
  func_0x000107c610f8();
  func_0x000107c495a4();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&lStack_68);
  lVar2 = lStack_68;
  lVar7 = *(long *)(lStack_68 + _DAT_112fbf810);
  func_0x000107c61174();
  func_0x000107c61170(lVar2);
  lVar2 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar2 == 0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    plVar14 = (long *)0x0;
  }
  else {
    lVar7 = lVar2;
    func_0x000107c3da70();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_112fbf848);
    uVar15 = *(undefined8 *)(lVar7 + _DAT_112fbf850);
    uVar16 = *(undefined8 *)(lVar7 + _DAT_112fbf840);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    func_0x000107c4d80c();
    func_0x000107c61180();
    func_0x000107c61170(lStack_68);
    func_0x000100083b20(&lStack_70);
    uVar9 = *(undefined8 *)(lStack_70 + _DAT_112f496e0);
    func_0x000107c61174();
    func_0x000107c61170(lStack_70);
    func_0x000100083b20(&uStack_78);
    uVar1 = uStack_78;
    uVar10 = uStack_78;
    FUN_1031b717c();
    func_0x000107c61170(uVar1);
    func_0x000100083b20(&uStack_78);
    uVar1 = uStack_78;
    func_0x000107c42e5c();
    func_0x000107c61180();
    func_0x000107c61170(uStack_78);
    func_0x000100083b20(&uStack_80);
    lVar11 = 0;
    FUN_1031b69fc();
    lVar12 = lVar11;
    func_0x000107c610f8();
    *(undefined8 *)(lVar12 + _DAT_112f48f58) = 1;
    *(undefined8 *)(lVar12 + _DAT_112f48f60) = uVar8;
    *(undefined8 *)(lVar12 + _DAT_112f48f68) = uVar15;
    *(undefined8 *)(lVar12 + _DAT_112f48f70) = uVar16;
    *(long *)(lVar12 + _DAT_112f48f78) = lVar2;
    *(undefined8 *)(lVar12 + _DAT_112f48f80) = uVar9;
    *(undefined8 *)(lVar12 + _DAT_112f48f88) = uVar10;
    *(undefined **)(lVar12 + _DAT_112f48f90) = puVar6;
    *(undefined8 *)(lVar12 + _DAT_112f48f98) = uVar1;
    *(undefined **)(lVar12 + _DAT_112f48fa0) = puVar3;
    *(undefined8 *)(lVar12 + _DAT_112f48fa8) = uStack_80;
    puVar5 = PTR_s_init_1125d9248;
    lStack_90 = lVar12;
    lStack_88 = lVar11;
    func_0x000107c61174();
    func_0x000107c61174(uVar15);
    func_0x000107c61174(uVar16);
    func_0x000107c61174();
    func_0x000107c61174(lVar2);
    func_0x000107c61174(uVar10);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(puVar3);
    uVar13 = uStack_80;
    func_0x000107c61174(uStack_80);
    plVar14 = &lStack_90;
    func_0x000107c61154(plVar14,puVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar7);
  }
  *param_1 = (long)plVar14;
  return;
}



/* Entry: 1031b702c; end: 1031b717b;  */

undefined * FUN_1031b702c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_1031b7334();
  uVar1 = param_1;
  uVar6 = param_2;
  func_0x0001031b7404();
  uVar2 = uVar1;
  uVar7 = uVar6;
  func_0x0001031b74d4();
  uVar3 = uVar2;
  uVar8 = uVar7;
  func_0x0001031b75a0();
  puVar4 = PTR_PTR_1126c6790;
  func_0x000107c610f8(PTR_PTR_1126c6790);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(uVar1,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c5fadc(uVar2,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x000107c5fadc(uVar3,uVar8);
  func_0x000107c6142c(uVar8);
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c48b80(puVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  return puVar4;
}



/* Entry: 1031b717c; end: 1031b72e3;  */

undefined * FUN_1031b717c(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_b0;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar4 = &UNK_11061c1c8;
    func_0x000107c613fc(&UNK_11061c1c8,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    puVar5 = &UNK_11061c1f0;
    func_0x000107c613fc(&UNK_11061c1f0,0x18,7);
    *(long *)(puVar5 + 0x10) = lVar3;
    puVar6 = PTR_PTR_1126c6798;
    func_0x000107c610f8(PTR_PTR_1126c6798);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_1031b72e4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1001de374;
    puStack_68 = &UNK_11061c208;
    ppuVar7 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar7);
    pcStack_90 = FUN_1031b7300;
    puStack_b0 = puVar1;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_100288f10;
    puStack_98 = &UNK_11061c230;
    puStack_88 = puVar5;
    func_0x000107c60bc4(&puStack_b0);
    func_0x000107c61174(lVar3);
    func_0x000107c46b5c(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puStack_88);
    func_0x000107c61574(puStack_58);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031b72e4);
  (*pcVar2)();
}



/* Entry: 1031b72e4; end: 1031b72ff;  */

void FUN_1031b72e4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c3ab0c();
  }
  return;
}



/* Entry: 1031b7300; end: 1031b7333;  */

void FUN_1031b7300(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c160910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAIStoryReplyDisclaimerAccepte_112635c60,
             param_1 & 1);
  return;
}



/* Entry: 1031b7334; end: 1031b766b;  */

undefined1  [16] FUN_1031b7334(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe2;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f12c990);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f12c920);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031b7404);
  (*pcVar1)();
}



/* Entry: 1031b766c; end: 1031b767b;  */

void FUN_1031b766c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031b767c; end: 1031b769b;  */

void FUN_1031b767c(void)

{
  func_0x000107c61168(&PTR_PTR_112f49018);
  return;
}



/* Entry: 1031b769c; end: 1031b778b;  */

void FUN_1031b769c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1031b767c();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0x73656c6b72617073;
  func_0x000107c5fadc(0x73656c6b72617073,0xed00006e6f63692d);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam00000001138070d8 = puVar3;
  return;
}



/* Entry: 1031b778c; end: 1031b7a3b;  */

void FUN_1031b778c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f467d8,&UNK_10db93a70);
  puVar1 = &UNK_11061c310;
  func_0x000107c613fc(&UNK_11061c310,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(0x1031b78a0,puVar1);
  return;
}



/* Entry: 1031b7a3c; end: 1031b7a4b;  */

undefined1  [16] FUN_1031b7a3c(void)

{
  return ZEXT816(0x11061c338);
}



/* Entry: 1031b7a4c; end: 1031b7a5b; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin inputItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b7a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f490e0));
  return;
}



/* Entry: 1031b7a5c; end: 1031b7a8f; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin setInputItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b7a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f490e0);
  *(undefined8 *)(param_1 + _DAT_112f490e0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1031b7a90; end: 1031b7aaf; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin inputContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b7a90(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f490e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031b7ab0; end: 1031b7b0b; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin setInputContext:] */

/* WARNING: Possible PIC construction at 0x0001031b7af8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b7afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b7ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61604(param_1 + _DAT_112f490e8,param_3);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1031b7b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1031b7b0c; end: 1031b800b;  */

/* WARNING: Possible PIC construction at 0x0001031b7da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7fd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b7b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b81d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b7fd8) */
/* WARNING: Removing unreachable block (ram,0x0001031b7fc4) */
/* WARNING: Removing unreachable block (ram,0x0001031b7fb4) */
/* WARNING: Removing unreachable block (ram,0x0001031b7f28) */
/* WARNING: Removing unreachable block (ram,0x0001031b7f18) */
/* WARNING: Removing unreachable block (ram,0x0001031b7f04) */
/* WARNING: Removing unreachable block (ram,0x0001031b7e80) */
/* WARNING: Removing unreachable block (ram,0x0001031b7e38) */
/* WARNING: Removing unreachable block (ram,0x0001031b7df0) */
/* WARNING: Removing unreachable block (ram,0x0001031b7da8) */
/* WARNING: Removing unreachable block (ram,0x0001031b81d4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b7b0c(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = unaff_x20 + _DAT_112f490e8;
  func_0x000107c61618();
  if (uVar7 == 0) {
    if (*(long *)(unaff_x20 + _DAT_112f490d8) != 0) {
      func_0x000107c41864();
    }
    uVar7 = *(ulong *)(unaff_x20 + _DAT_112f490d0);
    *(undefined8 *)(unaff_x20 + _DAT_112f490d0) = 0;
  }
  else {
    uVar2 = uVar7;
    FUN_1031b8438();
    if ((((uVar2 & 1) != 0) && (*(long *)(unaff_x20 + _DAT_112f490d0) == 0)) &&
       (lVar3 = *(long *)(unaff_x20 + _DAT_112f490c8), lVar3 != 0)) {
      func_0x000107c61174();
      func_0x000107c5cbdc();
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      uVar7 = *(ulong *)(unaff_x20 + _DAT_112f49078);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f49080);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f49088);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f49090);
      lVar5 = 0;
      func_0x0001031bb79c();
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar5 + _DAT_112f49190);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar5 + _DAT_112f491f0) = 0;
      *(undefined8 *)(lVar5 + _DAT_112f491f8) = 0;
      *(undefined **)(lVar5 + _DAT_112f49198) = puVar4;
      *(long *)(lVar5 + _DAT_112f491a0) = lVar3;
      func_0x0001000285a8(0x112ec00f8,&UNK_10daddaf0);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(uVar8);
      func_0x000107c61174(uVar9);
      func_0x000107c61174(uVar6);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c3ff84(uVar7);
      func_0x000107c61180();
      func_0x0001000bda74();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 1031b800c; end: 1031b810b;  */

void FUN_1031b800c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *param_1;
  pcStack_60 = FUN_1031b8844;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100b61264;
  puStack_68 = &UNK_11061c440;
  uStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar2);
  pcStack_60 = (code *)0x1031b884c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10317f38c;
  puStack_68 = &UNK_11061c468;
  uStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar2);
  func_0x000107c4c6bc(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 1031b810c; end: 1031b81e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b810c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f490c8);
    *(undefined8 *)(lVar1 + _DAT_112f490c8) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001031b819c();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1031b81e8; end: 1031b8293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b81e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f490c8);
    *(undefined8 *)(lVar1 + _DAT_112f490c8) = param_1;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1031b7b0c();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1031b8294; end: 1031b82d7;  */

void FUN_1031b8294(void)

{
  func_0x000107c614f0();
  func_0x0001031b819c();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031b82d8; end: 1031b832f; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin dealloc] */

void FUN_1031b82d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x0001031b819c();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031b8330; end: 1031b8437; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031b8330(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f49078));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f49080));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f49088));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f49090));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f49098));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f490a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f490a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f490b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f490b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f490c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f490c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f490d0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f490d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f490e0));
  param_1 = param_1 + _DAT_112f490e8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1031b8438; end: 1031b862b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b8438(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112f490c8);
  uVar5 = 0;
  uStack_78 = unaff_x19;
  if (uVar1 == 0) goto LAB_1031b85f8;
  func_0x000107c61174();
  uVar5 = uVar1;
  func_0x000107c5c008();
  func_0x000107c61180();
  uStack_78 = uVar1;
  if (uVar5 == 0) {
LAB_1031b8590:
    uVar5 = uVar1;
    func_0x000107c44ad8();
    uVar2 = unaff_x21;
    if (((int)uVar5 == 0) || (uVar5 = uVar1, func_0x000107c4a1f4(), (uVar5 & 1) != 0)) {
      unaff_x20 = uVar1;
      func_0x000107c4f868();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        unaff_x20 = uVar1;
        func_0x000107c5ac8c();
        func_0x000107c61170(uVar1);
        uVar5 = (ulong)((uint)unaff_x20 ^ 1);
        goto LAB_1031b85f8;
      }
      func_0x000107c61170(uVar1);
      uVar1 = unaff_x20;
    }
  }
  else {
    unaff_x22 = *(undefined8 *)(uVar5 + _DAT_11307f580);
    unaff_x20 = ((undefined8 *)(uVar5 + _DAT_11307f580))[1];
    func_0x000100de78a0(unaff_x22,unaff_x20);
    func_0x000107c61170(uVar5);
    unaff_x21 = uVar5;
    if (0xe < unaff_x20 >> 0x3c) goto LAB_1031b8590;
    uVar2 = 0;
    FUN_1031b8800();
    func_0x000107c614e8();
    uVar3 = unaff_x22;
    func_0x000107c5ee20(unaff_x22,unaff_x20);
    uStack_50 = 0;
    func_0x000107c4e380();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    unaff_x21 = uStack_50;
    if (uVar2 == 0) {
      uVar5 = uStack_50;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(uVar5);
      func_0x000107c61654();
      func_0x000107c614ac(unaff_x21);
      func_0x0001000b44c0(unaff_x22,unaff_x20);
      goto LAB_1031b8590;
    }
    func_0x000107c61174();
    uVar5 = uVar2;
    func_0x000107c3fecc();
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c44a74();
    func_0x0001000b44c0(unaff_x22,unaff_x20);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    unaff_x21 = uVar2;
    if ((int)uVar4 == 0) goto LAB_1031b8590;
  }
  func_0x000107c61170(uVar1);
  uVar5 = 0;
  unaff_x21 = uVar2;
LAB_1031b85f8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    ppuVar7 = &puStack_c0;
    pcStack_68 = FUN_1031b862c;
    pcVar6 = "updateReactionMenu()";
    uStack_90 = unaff_x22;
    uStack_88 = unaff_x21;
    uStack_80 = unaff_x20;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x0001000c10c0("updateReactionMenu()");
    func_0x000107c61180();
    uStack_a0 = 0x1031b87dc;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_11061c418;
    uStack_98 = uVar5;
    func_0x000107c60bc4(&puStack_c0);
    uVar1 = uStack_98;
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(uVar1);
    func_0x000107c4e524(pcVar6);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c615e8(pcVar6);
    return;
  }
  return;
}



/* Entry: 1031b862c; end: 1031b86e3;  */

void FUN_1031b862c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "updateReactionMenu()";
  func_0x0001000c10c0("updateReactionMenu()");
  func_0x000107c61180();
  uStack_40 = 0x1031b87dc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11061c418;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1031b86e4; end: 1031b8773;  */

void FUN_1031b86e4(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c50588();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c5cf44();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1031b8774; end: 1031b87bf; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin init] */

void FUN_1031b8774(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextStoryReactionMenuPlugin.ContextStoryReactionMenuPlugin",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031b87a0);
  (*pcVar1)();
}



/* Entry: 1031b87c0; end: 1031b87c7; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin position] */

undefined8 FUN_1031b87c0(void)

{
  return 0;
}



/* Entry: 1031b87c8; end: 1031b87cf; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin pluginType] */

undefined8 FUN_1031b87c8(void)

{
  return 3;
}



/* Entry: 1031b87d0; end: 1031b87ff; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin configureInputItem:] */

void FUN_1031b87d0(void)

{
  return;
}



/* Entry: 1031b8800; end: 1031b8843;  */

void FUN_1031b8800(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f49118 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b2378;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f49118 = puVar1;
  return;
}



/* Entry: 1031b8844; end: 1031b8863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b8844(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f490c8);
    *(undefined8 *)(lVar1 + _DAT_112f490c8) = 0;
    func_0x000107c61170();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x0001031b819c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1031b8864; end: 1031b8867; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin createItemController] */

void FUN_1031b8864(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1031b8868; end: 1031b886b; -[_TtC32SCContextStoryReactionMenuPlugin30ContextStoryReactionMenuPlugin createDrawer] */

void FUN_1031b8868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1031b886c; end: 1031b8a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b886c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f49120) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f49128) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f49130) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f49138) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f49140) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f49148) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f49150) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f49158) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f49160) = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031b8a44; end: 1031b8aa3; -[_TtC32SCContextStoryReactionMenuPlugin38ContextStoryReactionMenuPluginProvider init] */

void FUN_1031b8a44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextStoryReactionMenuPlugin.ContextStoryReactionMenuPluginProvider",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031b8a70);
  (*pcVar1)();
}



/* Entry: 1031b8aa4; end: 1031b8b4b; -[_TtC32SCContextStoryReactionMenuPlugin38ContextStoryReactionMenuPluginProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031b8ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b8ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b8b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b8b20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b8b04) */
/* WARNING: Removing unreachable block (ram,0x0001031b8ae4) */
/* WARNING: Removing unreachable block (ram,0x0001031b8ac4) */
/* WARNING: Removing unreachable block (ram,0x0001031b8b24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b8aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f49120));
  return;
}



/* Entry: 1031b8b4c; end: 1031b8b53; -[_TtC32SCContextStoryReactionMenuPlugin38ContextStoryReactionMenuPluginProvider providerType] */

undefined8 FUN_1031b8b4c(void)

{
  return 1;
}



/* Entry: 1031b8b54; end: 1031b8bc7; -[_TtC32SCContextStoryReactionMenuPlugin38ContextStoryReactionMenuPluginProvider createPluginWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1031b8b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1031b8bd0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031b8bc8; end: 1031b8bcf; -[_TtC32SCContextStoryReactionMenuPlugin38ContextStoryReactionMenuPluginProvider createObserverWithActiveConversationInformation:replyAllGroupId:] */

void FUN_1031b8bc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1031b8bd0; end: 1031b8edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1031b8bd0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lStack_70;
  long lStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f49120);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112f49128);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f49130);
  uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f49138);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f49140);
  uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112f49148);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f49150);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f49158);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f49160);
  lVar2 = 0;
  func_0x0001031b87a0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112f490c0;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112f490c8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f490d0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f490d8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f490e0) = 0;
  func_0x000107c61614(lVar3 + _DAT_112f490e8,0);
  *(undefined8 *)(lVar3 + _DAT_112f49078) = uVar10;
  *(undefined8 *)(lVar3 + _DAT_112f49080) = uVar13;
  *(undefined8 *)(lVar3 + _DAT_112f49088) = uVar12;
  *(undefined8 *)(lVar3 + _DAT_112f49090) = uVar19;
  *(undefined8 *)(lVar3 + _DAT_112f49098) = uVar18;
  *(undefined8 *)(lVar3 + _DAT_112f490a0) = uVar17;
  *(undefined8 *)(lVar3 + _DAT_112f490a8) = uVar16;
  *(undefined8 *)(lVar3 + _DAT_112f490b0) = uVar14;
  *(undefined8 *)(lVar3 + _DAT_112f490b8) = uVar11;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar19);
  func_0x000107c61174(uVar18);
  func_0x000107c61174(uVar17);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar11);
  plVar5 = &lStack_70;
  func_0x000107c61154(plVar5,puVar7);
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001000b637c();
  plVar6 = param_1;
  FUN_10317f5ec();
  func_0x000104884898();
  func_0x000107c61574(param_1);
  puVar7 = &UNK_11061c4a0;
  func_0x000107c613fc(&UNK_11061c4a0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,plVar5);
  func_0x000107c61170(plVar5);
  pcVar8 = FUN_1031b8efc;
  puVar9 = puVar7;
  (**(code **)(*plVar6 + 0x60))(FUN_1031b8efc);
  func_0x000107c61574(plVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c614f0(pcVar8);
  uVar4 = *(undefined8 *)((long)plVar5 + _DAT_112f490c0);
  pcVar15 = *(code **)(puVar9 + 0x10);
  func_0x000107c6157c(uVar4);
  (*pcVar15)();
  func_0x000107c61170(plVar5);
  func_0x000107c615e8(pcVar8);
  func_0x000107c61574(uVar4);
  return plVar5;
}



/* Entry: 1031b8edc; end: 1031b8efb;  */

void FUN_1031b8edc(void)

{
  func_0x000107c61168(&PTR_PTR_1128bf1d0);
  return;
}



/* Entry: 1031b8efc; end: 1031b8f03;  */

void FUN_1031b8efc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar2 = &puStack_80;
  ppuVar3 = &puStack_80;
  uVar4 = *param_1;
  pcStack_60 = FUN_1031b8844;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100b61264;
  puStack_68 = &UNK_11061c440;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  pcStack_60 = (code *)0x1031b884c;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10317f38c;
  puStack_68 = &UNK_11061c468;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4c6bc(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1031b8f04; end: 1031b8f73; -[_TtC32SCContextStoryReactionMenuPlugin31StoryReactionMenuViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b8f04(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f49190);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112f491f0) = 0;
  *(undefined8 *)(param_1 + _DAT_112f491f8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCContextStoryReactionMenuPlugin/StoryReactionMenuViewController.swift",0x46,
                      2,0x45,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031b8f74);
  (*pcVar2)();
}



/* Entry: 1031b8f74; end: 1031b8fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b8f74(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c41864(*(undefined8 *)(unaff_x20 + _DAT_112f49198));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031b8fc8; end: 1031b9033; -[_TtC32SCContextStoryReactionMenuPlugin31StoryReactionMenuViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b8fc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f49198);
  func_0x000107c61174();
  func_0x000107c41864(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031b9034; end: 1031b912f; -[_TtC32SCContextStoryReactionMenuPlugin31StoryReactionMenuViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031b9074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b90c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b90e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031b9104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b90e8) */
/* WARNING: Removing unreachable block (ram,0x0001031b90c8) */
/* WARNING: Removing unreachable block (ram,0x0001031b9078) */
/* WARNING: Removing unreachable block (ram,0x0001031b9108) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b9034(long param_1)

{
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f49190),
                      ((undefined8 *)(param_1 + _DAT_112f49190))[1]);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f49198));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f491a0));
  return;
}



/* Entry: 1031b9130; end: 1031b96f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b9130(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = _DAT_112f491f8;
  if (*(long *)(unaff_x20 + _DAT_112f491f8) != 0) {
    return;
  }
  func_0x0001000d224c(&puStack_a0);
  puVar8 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    return;
  }
  puVar3 = puStack_a0;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(puVar8);
  if (puVar3 == (undefined *)0x0) {
    return;
  }
  puVar4 = PTR_PTR_1126ab018;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59a2c();
  func_0x0001000d224c(&puStack_a0);
  puVar8 = puStack_a0;
  if (puStack_a0 != (undefined *)0x0) {
    puVar14 = puStack_a0;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    if (puVar14 != (undefined *)0x0) {
      func_0x000107c5fb14(puVar14);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      goto LAB_1031b9244;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_1031b9244:
  func_0x000107c52ae0(puVar4);
  func_0x000107c61170(puVar14);
  puVar5 = PTR_PTR_1126ab020;
  func_0x000107c610f8(PTR_PTR_1126ab020);
  func_0x000107c453e4();
  func_0x0001000d224c(&puStack_a0);
  puVar8 = puStack_a0;
  func_0x000107c52704(puVar5);
  func_0x000107c615e8(puVar8);
  func_0x0001000d224c(&puStack_a0);
  func_0x000107c57b50(puVar5);
  func_0x000107c615e8(puStack_a0);
  puVar8 = &UNK_11061c4c8;
  puVar6 = puVar8;
  func_0x000107c613fc(&UNK_11061c4c8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1031bb7bc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11061c4e0;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  func_0x000107c56d58(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c613fc(&UNK_11061c4c8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  pcStack_80 = (code *)0x1031bb7e0;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10252755c;
  puStack_88 = &UNK_11061c508;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar8;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  func_0x000107c56e20(puVar5);
  func_0x000107c60bd0(ppuVar7);
  pcStack_80 = FUN_1031ba044;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10252755c;
  puStack_88 = &UNK_11061c530;
  ppuVar7 = &puStack_a0;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c56e1c(puVar5);
  func_0x000107c60bd0(ppuVar7);
  puVar8 = PTR_PTR_1126ab028;
  func_0x000107c610f8();
  func_0x000107c49520();
  func_0x000107c5a050();
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1031b96e8);
    (*pcVar2)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170(lVar9);
  lVar9 = 0x112d360b8;
  FUN_1031bb9d8(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x18) = 9;
  *(undefined8 *)(lVar9 + 0x10) = 4;
  puVar14 = puVar8;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1031b96ec);
    (*pcVar2)();
  }
  lVar11 = lVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  puVar6 = puVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lVar11);
  *(undefined **)(lVar9 + 0x20) = puVar6;
  puVar14 = puVar8;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1031b96f0);
    (*pcVar2)();
  }
  lVar11 = lVar10;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  puVar6 = puVar14;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lVar11);
  *(undefined **)(lVar9 + 0x28) = puVar6;
  puVar14 = puVar8;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar10 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar11 = lVar10;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    puVar6 = puVar14;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    func_0x000107c61170(lVar11);
    *(undefined **)(lVar9 + 0x30) = puVar6;
    puVar14 = puVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar10 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar10 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar11 = lVar10;
      func_0x000107c3ec1c(lVar10);
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      puVar12 = puVar14;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar14);
      func_0x000107c61170(lVar11);
      *(undefined **)(lVar9 + 0x38) = puVar12;
      uVar13 = 0;
      FUN_1031bba80(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar10 = lVar9;
      func_0x000107c5fc48(lVar9,uVar13);
      func_0x000107c61574(lVar9);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar10);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      uVar13 = *(undefined8 *)(unaff_x20 + lVar1);
      *(undefined **)(unaff_x20 + lVar1) = puVar8;
      func_0x000107c61170(uVar13);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1031b96f8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031b96f4);
  (*pcVar2)();
}



/* Entry: 1031b96f8; end: 1031b970b; -[_TtC32SCContextStoryReactionMenuPlugin31StoryReactionMenuViewController viewWillAppear:] */

void FUN_1031b96f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_1031b9130();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1031b970c; end: 1031b978b;  */

/* WARNING: Possible PIC construction at 0x0001031b9754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031b9758) */
/* WARNING: Removing unreachable block (ram,0x0001031b9760) */
/* WARNING: Removing unreachable block (ram,0x0001031b9768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b970c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112f491f0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f491f0);
  if (*(long *)(unaff_x20 + _DAT_112f491f8) == 0) {
    if (lVar2 == 0) {
      return;
    }
  }
  else if (lVar2 == 0) {
    uVar3 = 0;
    goto LAB_1031b9750;
  }
  func_0x000107c42018(lVar2,param_2,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
LAB_1031b9750:
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1031b978c; end: 1031b979f; -[_TtC32SCContextStoryReactionMenuPlugin31StoryReactionMenuViewController viewDidDisappear:] */

void FUN_1031b978c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  FUN_1031b970c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1031b97a0; end: 1031b98c7;  */

void FUN_1031b97a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *param_4;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,uVar2,param_3);
  (*param_5)();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1031b98c8; end: 1031b991b;  */

void FUN_1031b98c8(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1031b991c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1031b991c; end: 1031b9bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b991c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  func_0x0001000d224c(&puStack_70);
  puVar1 = puStack_70;
  if (puStack_70 != (undefined *)0x0) {
    func_0x0001000d224c(&puStack_70);
    puVar4 = puStack_70;
    if (puStack_70 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      puVar2 = puStack_70;
      func_0x000107c41050();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      if (puVar2 == (undefined *)0x0) {
        puVar2 = (undefined *)0x0;
        param_2 = 0;
      }
      else {
        func_0x000107c5fb14(puVar2);
      }
    }
    FUN_1031bccf0();
    func_0x000107c6142c(param_2);
    puVar3 = PTR_PTR_1126aaa18;
    func_0x000107c610f8(PTR_PTR_1126aaa18);
    func_0x000107c453e4();
    func_0x0001000d224c(&puStack_70);
    puVar4 = puStack_70;
    func_0x000107c52704(puVar3);
    func_0x000107c615e8(puVar4);
    func_0x0001000d224c(&puStack_70);
    func_0x000107c57b50(puVar3);
    func_0x000107c615e8(puStack_70);
    puVar4 = &UNK_11061c4c8;
    func_0x000107c613fc(&UNK_11061c4c8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uStack_50 = 0x1031bbd34;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10252755c;
    puStack_58 = &UNK_11061c7d8;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c56e20(puVar3);
    func_0x000107c60bd0(ppuVar5);
    FUN_1031bccd0(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar2);
    func_0x000107c61174(puVar3);
    func_0x000107c615f0(puVar1);
    puVar4 = puVar2;
    FUN_1031bc730(puVar2,puVar3,puVar1);
    puVar6 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    lVar7 = _DAT_112f491f0;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f491f0);
    *(undefined **)(unaff_x20 + _DAT_112f491f0) = puVar6;
    func_0x000107c61170(uVar8);
    if (*(long *)(unaff_x20 + lVar7) != 0) {
      func_0x000107c5a070();
      if (*(long *)(unaff_x20 + lVar7) != 0) {
        func_0x000107c52684();
        if (*(long *)(unaff_x20 + lVar7) != 0) {
          func_0x000107c5921c();
          lVar7 = *(long *)(unaff_x20 + lVar7);
          if (lVar7 != 0) {
            func_0x000107c61174();
            func_0x000107c4ef3c(0x3fe3333333333333);
            func_0x000107c61170(lVar7);
          }
        }
      }
    }
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1031b9bd0; end: 1031b9c2b;  */

void FUN_1031b9bd0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1031b9c2c(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1031b9c2c; end: 1031ba043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031b9c2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  
  pcVar14 = *(code **)(unaff_x20 + _DAT_112f49190);
  if (pcVar14 != (code *)0x0) {
    param_2 = ((undefined8 *)(unaff_x20 + _DAT_112f49190))[1];
    func_0x000107c6157c(param_2);
    (*pcVar14)();
    func_0x00010058d43c(pcVar14);
  }
  lVar16 = *(long *)(unaff_x20 + _DAT_112f491a0);
  lVar2 = lVar16;
  func_0x000107c5c008();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar16;
    func_0x000107c40674();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5faec();
    uVar15 = param_2;
    func_0x000107c61170(lVar3);
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f491c8) + _DAT_112fc2100);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f491d0) + _DAT_112fb9ae0);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c424f8();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar13 = 0;
      uVar15 = 0xe000000000000000;
    }
    else {
      lVar13 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    lVar3 = param_1;
    func_0x000107c3ea08();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c49820();
      func_0x000107c61170(lVar3);
    }
    FUN_103967af8(0);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    FUN_103966750(lVar13,uVar15,puVar7);
    func_0x000107c6142c(uVar15);
    func_0x000107c61170(puVar7);
    puVar7 = &UNK_11061c568;
    puVar8 = puVar7;
    func_0x000107c613fc(&UNK_11061c568,0x20,7);
    *(undefined8 *)(puVar8 + 0x18) = 0;
    *(undefined8 *)(puVar8 + 0x10) = 0;
    func_0x000107c613fc(&UNK_11061c568,0x20,7);
    *(undefined8 *)(puVar7 + 0x18) = 0;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    func_0x000107c3f894(lVar16);
    func_0x000107c61180();
    puStack_a0 = (undefined8 *)(puVar7 + 0x10);
    puStack_98 = (undefined *)lVar4;
    pcStack_90 = (code *)param_2;
    puStack_70 = (undefined8 *)(puVar8 + 0x10);
    func_0x000104522a44(FUN_1031bb7e8,auStack_80,0x1031bb818,&puStack_b0);
    func_0x000107c61170(lVar16);
    uVar15 = *(undefined8 *)(lVar2 + _DAT_11307f518);
    uVar1 = ((undefined8 *)(lVar2 + _DAT_11307f518))[1];
    func_0x000107c61434(uVar1);
    FUN_1031ba154(uVar15,uVar1);
    func_0x000107c6142c(uVar1);
    pcVar9 = "sendReaction(_:)";
    func_0x0001000c10c0();
    func_0x000107c61180();
    puVar10 = &UNK_11061c4c8;
    func_0x000107c613fc(&UNK_11061c4c8,0x18,7);
    func_0x000107c61614(puVar10 + 0x10);
    puVar11 = &UNK_11061c590;
    func_0x000107c613fc(&UNK_11061c590,0x68,7);
    *(undefined **)(puVar11 + 0x10) = puVar10;
    *(undefined8 *)(puVar11 + 0x18) = uVar5;
    *(undefined **)(puVar11 + 0x20) = puVar8;
    *(undefined **)(puVar11 + 0x28) = puVar7;
    *(long *)(puVar11 + 0x30) = param_1;
    *(long *)(puVar11 + 0x38) = lVar2;
    *(long *)(puVar11 + 0x40) = lVar4;
    *(undefined8 *)(puVar11 + 0x48) = param_2;
    *(undefined8 *)(puVar11 + 0x50) = uVar15;
    *(undefined8 *)(puVar11 + 0x58) = uVar6;
    *(long *)(puVar11 + 0x60) = lVar13;
    pcStack_90 = FUN_1031bb848;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = (undefined8 *)&UNK_1000f6b44;
    puStack_98 = &UNK_11061c5a8;
    ppuVar12 = &puStack_b0;
    puStack_88 = puVar11;
    func_0x000107c60bc4(ppuVar12);
    puVar10 = puStack_88;
    func_0x000107c615f0(uVar5);
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar2);
    func_0x000107c61174(uVar15);
    func_0x000107c615f0(uVar6);
    func_0x000107c61174(lVar13);
    func_0x000107c61574(puVar10);
    func_0x000107c4e524(pcVar9);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar5);
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(lVar13);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(uVar15);
    func_0x000107c615e8(pcVar9);
  }
  return;
}



/* Entry: 1031ba044; end: 1031ba047;  */

void FUN_1031ba044(void)

{
  return;
}



/* Entry: 1031ba048; end: 1031ba153;  */

void FUN_1031ba048(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1031b9c2c(param_1);
    pcVar1 = "presentTray()";
    func_0x0001000c10c0("presentTray()");
    func_0x000107c61180();
    puVar2 = &UNK_11061c810;
    func_0x000107c613fc(&UNK_11061c810,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    uStack_58 = 0x1031bbd3c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11061c828;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1031ba154; end: 1031bb5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031ba154(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 auStack_190 [6];
  undefined1 auStack_160 [8];
  long lStack_158;
  undefined1 auStack_150 [16];
  undefined8 *puStack_140;
  undefined1 auStack_130 [16];
  undefined8 *puStack_120;
  undefined1 auStack_110 [16];
  undefined8 *puStack_100;
  long alStack_f0 [2];
  undefined8 *puStack_e0;
  long alStack_d0 [2];
  undefined8 *puStack_c0;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined1 auStack_90 [16];
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lStack_158 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_158 + 0x40));
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = 0xffffffffffffffff;
  auStack_70[0] = 0xffffffffffffffff;
  lVar10 = *(long *)(unaff_x20 + _DAT_112f491a0);
  lVar2 = lVar10;
  func_0x000107c5c008();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar11 = *(long *)(lVar2 + _DAT_11307f528);
    lVar3 = lVar11;
    func_0x000107c61174(lVar11);
    func_0x000107c61170(lVar2);
    if (lVar11 != 0) {
      puStack_140 = auStack_70;
      puStack_120 = puStack_140;
      puStack_100 = puStack_140;
      puStack_e0 = puStack_140;
      puStack_c0 = puStack_140;
      plStack_a0 = puStack_140;
      plStack_80 = puStack_140;
      *(undefined8 *)((long)auStack_190 + lVar9 + 0x20) = 0x1031bbd1c;
      *(undefined1 **)((long)auStack_190 + lVar9 + 0x28) = auStack_150;
      *(undefined8 *)((long)auStack_190 + lVar9 + 0x10) = 0x1031bbd0c;
      *(undefined1 **)((long)auStack_190 + lVar9 + 0x18) = auStack_130;
      *(undefined8 *)((long)auStack_190 + lVar9) = 0x1031bbcfc;
      *(undefined1 **)((long)auStack_190 + lVar9 + 8) = auStack_110;
      func_0x0001044bb4b8(0x1031bbc94,auStack_b0,0x1031bbccc,auStack_90,0x1031bbcdc,alStack_d0,
                          0x1031bbcec,alStack_f0);
      func_0x000107c61170(lVar3);
    }
  }
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
  }
  puVar4 = PTR_PTR_1126b6080;
  func_0x000107c610f8(PTR_PTR_1126b6080);
  func_0x000107c48a90();
  func_0x000107c61170(param_1);
  alStack_d0[0] = 0;
  alStack_f0[0] = 0;
  lVar2 = lVar10;
  func_0x000107c3f894(lVar10);
  func_0x000107c61180();
  plStack_80 = alStack_f0;
  plStack_a0 = alStack_d0;
  puVar8 = auStack_90;
  func_0x000104522a44(FUN_1031bbc84,puVar8,0x1031bbc8c,auStack_b0);
  func_0x000107c61170(lVar2);
  lVar3 = alStack_d0[0];
  lVar2 = alStack_f0[0];
  if (alStack_d0[0] == 0) {
    lVar11 = 0;
    puVar5 = PTR___sSSN_11034da80;
  }
  else {
    lVar11 = alStack_d0[0];
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(alStack_d0[0],PTR___sSSN_11034da80);
    puVar5 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar5;
  if (lVar2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = lVar2;
    func_0x000107c5fc48(lVar2,puVar5);
    puVar8 = puVar5;
  }
  puVar5 = PTR_PTR_1126b5be8;
  func_0x000107c610f8(PTR_PTR_1126b5be8);
  *(undefined8 *)((long)auStack_190 + lVar9 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)((long)auStack_190 + lVar9 + 0x20) = 0;
  *(undefined8 *)((long)auStack_190 + lVar9 + 0x10) = 0xffffffffffffffff;
  func_0x000107c45794();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar12);
  puVar6 = PTR_PTR_1126b1a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c3f8e4(lVar10);
  puVar7 = puVar6;
  func_0x000107c5e7ec();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar7;
  func_0x000107c5e4a4(puVar7);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar8);
  }
  puVar8 = puVar6;
  func_0x000107c5e870(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c5eea0(auStack_160 + lVar9);
  func_0x000107c5ee70();
  (**(code **)(lStack_158 + 8))(auStack_160 + lVar9,lVar1);
  puVar6 = puVar8;
  func_0x000107c5e5b0(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  puVar8 = puVar6;
  func_0x000107c5e800(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar8;
  func_0x000107c5e500(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c405e8();
  func_0x000107c61180();
  if (lVar10 != 0) {
    lVar9 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
    puVar8 = PTR_PTR_1126b5f90;
    func_0x000107c610f8(PTR_PTR_1126b5f90);
    func_0x000107c5fadc(lVar9,lVar1);
    func_0x000107c6142c(lVar1);
    func_0x000107c4613c(puVar8);
    func_0x000107c61170(lVar9);
    puVar7 = puVar6;
    func_0x000107c5e4e4(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
  }
  puVar8 = puVar6;
  func_0x000107c3ecc8(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c(lVar3);
  return puVar8;
}



/* Entry: 1031bb5cc; end: 1031bb5d3;  */

void FUN_1031bb5cc(void)

{
  return;
}



/* Entry: 1031bb5d4; end: 1031bb65f;  */

/* WARNING: Possible PIC construction at 0x0001031bb628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031bb62c) */

void FUN_1031bb5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = param_3;
  }
  lVar2 = -0x2000000000000000;
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  func_0x000107c61434(param_4);
  func_0x000107c5fb78(uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1031bb660; end: 1031bb663;  */

void FUN_1031bb660(void)

{
  return;
}



/* Entry: 1031bb664; end: 1031bb6d3;  */

void FUN_1031bb664(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  lVar2 = *param_3;
  *param_3 = lVar1;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 1031bb6d4; end: 1031bb76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031bb6d4(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar5 = 0x30;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = *(undefined8 *)(param_4 + _DAT_112f491a0);
  func_0x000107c40674();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  lVar4 = *param_3;
  *param_3 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}


