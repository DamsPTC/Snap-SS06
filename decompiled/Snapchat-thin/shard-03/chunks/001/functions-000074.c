/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10247f410; end: 10247f457;  */

void FUN_10247f410(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126affc0;
  func_0x000107c61168();
  func_0x000107c5dd5c();
  func_0x000107c61180();
  uVar2 = *param_2;
  *param_2 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10247f458; end: 10247fc87;  */

/* WARNING: Possible PIC construction at 0x00010247f564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247f724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247f76c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247f728) */
/* WARNING: Removing unreachable block (ram,0x00010247f568) */
/* WARNING: Removing unreachable block (ram,0x00010247f650) */
/* WARNING: Removing unreachable block (ram,0x00010247f66c) */
/* WARNING: Removing unreachable block (ram,0x00010247f694) */
/* WARNING: Removing unreachable block (ram,0x00010247f6a4) */
/* WARNING: Removing unreachable block (ram,0x00010247f758) */
/* WARNING: Removing unreachable block (ram,0x00010247f6e0) */
/* WARNING: Removing unreachable block (ram,0x00010247f770) */
/* WARNING: Removing unreachable block (ram,0x00010247f77c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247f458(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_2 + _DAT_112e9d0e8);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + _DAT_112e9d0f0);
  func_0x000107c5c800();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    func_0x0001000285a8(0x112e9d198,&UNK_10daabbc8);
    func_0x000107c613fc();
    func_0x00010095c380(0);
    func_0x000107c615f0(lVar2);
    func_0x000107c5b198(param_1);
    func_0x000107c61180();
    func_0x000107c610f8(PTR_PTR_1126b0018);
    func_0x000107c48770();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10247fc88; end: 10247fcff;  */

/* WARNING: Possible PIC construction at 0x00010247fce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247fce8) */

void FUN_10247fc88(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10247fd00; end: 10247fe4f;  */

/* WARNING: Possible PIC construction at 0x00010247b788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247b818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247b7f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247fd00(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  bool bVar5;
  long lVar6;
  long alStack_50 [2];
  long lStack_40;
  
  lVar6 = _DAT_112e9d058;
  if (*(long *)(unaff_x20 + _DAT_112e9d058) != 0) {
    func_0x000107c4ff34();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar6);
    *(undefined8 *)(unaff_x20 + lVar6) = 0;
    func_0x000107c61170(uVar1);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9d0f8);
  lVar6 = lVar3;
  func_0x000107c49cd8();
  if ((int)lVar6 == 0) {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112e9d108);
    uVar2 = uVar4;
    func_0x000107c49cd8();
    if ((int)uVar2 == 0) goto LAB_10247fdd8;
LAB_10247fdb4:
    bVar5 = false;
LAB_10247fdb8:
    func_0x000107c5194c();
    func_0x000107c61180();
    if (uVar4 == 0) {
      if (!bVar5) goto LAB_10247fdd8;
    }
    else {
      func_0x000107c61170();
    }
  }
  else {
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      uVar4 = *(ulong *)(unaff_x20 + _DAT_112e9d108);
      uVar2 = uVar4;
      func_0x000107c49cd8();
      if ((uVar2 & 1) != 0) {
        bVar5 = true;
        goto LAB_10247fdb8;
      }
      goto LAB_10247fdec;
    }
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112e9d108);
    uVar2 = uVar4;
    func_0x000107c49cd8();
    if ((uVar2 & 1) != 0) goto LAB_10247fdb4;
LAB_10247fdd8:
    if (*(char *)(unaff_x20 + _DAT_112e9d068) != '\x01') {
      uVar4 = *(ulong *)(unaff_x20 + _DAT_112e9d0b0);
      uVar2 = uVar4;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (uVar2 == 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_112e9d158);
        (**(code **)(lVar6 + 0x18))();
        if (((uVar2 & 1) == 0) || (func_0x0001000d224c(alStack_50), alStack_50[0] == 0)) {
          lVar6 = unaff_x20 + _DAT_112e9d030;
          func_0x000107c61618();
          if (lVar6 == 0) {
            return;
          }
          func_0x000107c40d4c();
        }
        else {
          lStack_40 = alStack_50[0];
          func_0x000107c6157c(*(undefined8 *)(lVar6 + 0x28));
          func_0x000100075034(0x102481ac0,alStack_50,PTR___sytN_11034f1b0 + 8);
        }
      }
      else {
        func_0x000107c61170();
        func_0x000107c4ffe8(uVar4);
        func_0x000107c61180();
      }
      goto code_r0x000107c615e8;
    }
  }
LAB_10247fdec:
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9d0b0);
  lVar6 = lVar3;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c61170();
  func_0x000107c4ffe8(lVar3);
  func_0x000107c61180();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10247fe50; end: 10247fe77; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow memoriesPickerV2DidDismiss] */

void FUN_10247fe50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10247fd00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10247fe78; end: 10248004b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10247fe78(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112e9d158);
  (**(code **)(lVar7 + 0x18))();
  if (((param_1 & 1) != 0) && (func_0x0001000d224c(&puStack_60), puStack_60 != (undefined *)0x0)) {
    uVar5 = *(undefined8 *)(lVar7 + 0x28);
    puStack_50 = puStack_60;
    func_0x000107c6157c(uVar5);
    func_0x000100075034(FUN_102480b18,&puStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(puStack_60);
    func_0x000107c61574(uVar5);
  }
  func_0x000103aff278(0);
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112e9d148);
  func_0x000103afe52c();
  if ((uVar1 & 1) == 0) {
    lVar7 = *(long *)(unaff_x20 + _DAT_112e9d040);
    if (lVar7 != 0) {
      iVar6 = 0;
      goto LAB_10247ff64;
    }
  }
  else {
    iVar6 = (int)*(undefined8 *)(unaff_x20 + _DAT_112e9d108);
    func_0x000107c49cd8();
    lVar7 = *(long *)(unaff_x20 + _DAT_112e9d040);
    if (lVar7 != 0) {
LAB_10247ff64:
      *(undefined1 *)(unaff_x20 + _DAT_112e9d068) = 1;
      puVar2 = &UNK_11050e690;
      func_0x000107c613fc(&UNK_11050e690,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_11050e6b8;
      func_0x000107c613fc(&UNK_11050e6b8,0x19,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      puVar3[0x18] = (char)iVar6;
      pcStack_40 = FUN_102480af0;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000b0c7c;
      puStack_48 = &UNK_11050e6d0;
      ppuVar4 = &puStack_60;
      puStack_38 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar2 = puStack_38;
      func_0x000107c61174(lVar7);
      func_0x000107c61574(puVar2);
      func_0x000107c41864(lVar7);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar7);
      return;
    }
    if (iVar6 != 0) {
      FUN_10247bd44();
      return;
    }
  }
  FUN_10247bc5c();
  return;
}



/* Entry: 10248004c; end: 1024800cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248004c(long param_1,ulong param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61604(param_1 + _DAT_112e9d038,0);
    if ((param_2 & 1) == 0) {
      FUN_10247bc5c();
    }
    else {
      FUN_10247bd44();
    }
    *(undefined1 *)(param_1 + _DAT_112e9d068) = 0;
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1024800d0; end: 1024800f7; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow onCameraIconClicked] */

void FUN_1024800d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10247fe78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024800f8; end: 1024801e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024800f8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e9d0c0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11302bad8);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(lVar1);
    uVar2 = uVar3;
    func_0x000107c5b198(uVar3);
    func_0x000107c61180();
    func_0x000107c615e8(uVar3);
    lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112e9d140) + _DAT_112ff73d0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(uVar2);
    }
    else {
      func_0x000107c5c92c(0x4062c00000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1024801e8; end: 1024803f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1024801e8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 >> 0x3e == 0) {
    uVar10 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar10 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024803dc);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar11;
        param_2 = param_1;
        func_0x000102480754(uVar11,param_1,&PTR_PTR_1126becd8,0x112d51360);
      }
      uVar1 = uVar11 + 1;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024803d8);
        (*pcVar2)();
      }
      uVar8 = uVar7;
      func_0x000107c5d0f0();
      if ((int)uVar8 == 2) {
        uVar10 = uVar7;
        func_0x000107c5c97c();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        if (uVar10 != 0) {
          uVar11 = uVar10;
          func_0x000107c50108();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          if (uVar11 != 0) {
            uVar10 = uVar11;
            func_0x000107c5ee30(uVar11);
            func_0x000107c61170(uVar11);
            puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
            func_0x000107c61168();
            uVar11 = uVar10;
            func_0x000107c5ee20(uVar10,param_2);
            func_0x000107c51770();
            func_0x000107c61180();
            func_0x000107c61170(uVar11);
            if (puVar6 != (undefined *)0x0) {
              puVar5 = PTR_PTR_1126ae558;
              func_0x000107c61168(PTR_PTR_1126ae558);
              func_0x000107c61174(puVar6);
              func_0x000107c451b0(puVar5);
              func_0x000107c61180();
              func_0x00010006c090(uVar10,param_2);
              func_0x000107c61170(puVar6);
              func_0x000107c61170(puVar6);
              return puVar5;
            }
            func_0x00010006c090(uVar10,param_2);
          }
        }
        break;
      }
      func_0x000107c61170(uVar7);
      uVar11 = uVar11 + 1;
    } while (uVar1 != uVar10);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112e9d0c0);
  func_0x000107c5194c();
  func_0x000107c61180();
  puVar6 = (undefined *)0x0;
  if (lVar3 != 0) {
    uVar9 = *(undefined8 *)(lVar3 + _DAT_11302bad8);
    func_0x000107c615f0(uVar9);
    func_0x000107c61170(lVar3);
    uVar4 = uVar9;
    func_0x000107c5b198(uVar9);
    func_0x000107c61180();
    func_0x000107c615e8(uVar9);
    puVar5 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112e9d140) + _DAT_112ff73d0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c61170(uVar4);
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar5;
      func_0x000107c5c92c(0x4062c00000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(puVar5);
    }
  }
  return puVar6;
}



/* Entry: 1024803f8; end: 102480493; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:] */

/* WARNING: Possible PIC construction at 0x00010248047c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102480480) */

void FUN_1024803f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  uVar1 = 0;
  FUN_102481618(0,0x112d51360,&PTR_PTR_1126becd8);
  func_0x000107c5fc54(param_6,uVar1);
  func_0x000107c61174(param_1);
  FUN_1024812c4(param_4,param_5,param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_5);
  return;
}



/* Entry: 102480494; end: 102480497; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow didSendSnap] */

void FUN_102480494(void)

{
  return;
}



/* Entry: 102480498; end: 10248049b; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow didSaveSnap] */

void FUN_102480498(void)

{
  return;
}



/* Entry: 10248049c; end: 1024804c3; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow didTapMemoriesSideButton] */

void FUN_10248049c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10247c494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024804c4; end: 10248061b; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow removeQuickCutScopeWithScope:] */

void FUN_1024804c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_1024814bc();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10248061c; end: 102480643; -[_TtC29CreatorsSpotlightSubmissionV235CreatorsSpotlightSubmissionWorkflow directorModeScopeDidComplete] */

void FUN_10248061c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010248051c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102480644; end: 102480667;  */

void FUN_102480644(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d62788;
  plVar5 = (long *)&UNK_10d928550;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102481618(0,0x112d62390,&PTR_PTR_1126aff40);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102480668; end: 10248090f;  */

void FUN_102480668(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102481618(0,param_1,param_2);
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



/* Entry: 102480910; end: 102480987;  */

void FUN_102480910(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102480988();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102480988; end: 102480acf;  */

undefined *
FUN_102480988(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102480ad0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = param_5;
    func_0x0001024806e0(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar6,param_5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102480ad0; end: 102480aef;  */

void FUN_102480ad0(void)

{
  func_0x000107c61168(&PTR_PTR_1128443b8);
  return;
}



/* Entry: 102480af0; end: 102480b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102480af0(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61604(lVar2 + _DAT_112e9d038,0);
    if ((bVar1 & 1) == 0) {
      FUN_10247bc5c();
    }
    else {
      FUN_10247bd44();
    }
    *(undefined1 *)(lVar2 + _DAT_112e9d068) = 0;
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102480b18; end: 102480b2f;  */

void FUN_102480b18(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102482cec(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102480b30; end: 102480f3f;  */

undefined * FUN_102480b30(ulong param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined *puStack_78;
  undefined *puStack_70;
  char cStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102480910(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar14 = puStack_70;
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102480f40);
      (*pcVar1)();
    }
    func_0x0001000285a8(0x112d627b0,&UNK_10daabba0);
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar16 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar6 = *puVar16;
        func_0x000107c61174(uVar6);
        uVar4 = uVar6;
        func_0x000100759c94();
        uVar5 = 0x112d627b8;
        func_0x0001000285a8(0x112d627b8,&UNK_10d928588);
        uVar7 = 0;
        func_0x000100775264(0,1,FUN_10247ec2c,0,uVar5);
        func_0x000107c61574(uVar4);
        uVar5 = 0;
        func_0x000104889f74(0,1,FUN_10247ec58,0);
        func_0x000107c61170(uVar6);
        func_0x000107c61574(uVar7);
        uVar15 = *(ulong *)(puVar14 + 0x10);
        puStack_70 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar15) {
          FUN_102480910(1 < *(ulong *)(puVar14 + 0x18),uVar15 + 1,1);
        }
        *(ulong *)(puStack_70 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puStack_70 + uVar15 * 8 + 0x20) = uVar5;
        uVar13 = uVar13 - 1;
        puVar14 = puStack_70;
        puVar16 = puVar16 + 1;
      } while (uVar13 != 0);
    }
    else {
      uVar15 = 0;
      do {
        uVar3 = uVar15;
        func_0x000101351ca4(uVar15,param_1);
        uVar12 = uVar3;
        func_0x000100759c94();
        uVar5 = 0x112d627b8;
        func_0x0001000285a8(0x112d627b8,&UNK_10d928588);
        uVar4 = 0;
        func_0x000100775264(0,1,FUN_10247ec2c,0,uVar5);
        func_0x000107c61574(uVar12);
        uVar5 = 0;
        func_0x000104889f74(0,1,FUN_10247ec58,0);
        func_0x000107c615e8(uVar3);
        func_0x000107c61574(uVar4);
        uVar3 = *(ulong *)(puVar14 + 0x10);
        puStack_70 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar3) {
          FUN_102480910(1 < *(ulong *)(puVar14 + 0x18),uVar3 + 1,1);
        }
        uVar15 = uVar15 + 1;
        *(ulong *)(puStack_70 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puStack_70 + uVar3 * 8 + 0x20) = uVar5;
        puVar14 = puStack_70;
      } while (uVar13 != uVar15);
    }
  }
  func_0x0001000285a8(0x112e9d188,&UNK_10daabbb0);
  puVar11 = puVar14;
  func_0x00010488813c(puVar14);
  func_0x000107c6142c(puVar14);
  func_0x0001048886ac(&puStack_70);
  func_0x000107c61574(puVar11);
  puVar14 = puStack_70;
  if (cStack_68 == '\x01') {
    puStack_78 = puStack_70;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_78,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    FUN_102481658(puVar14,1);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar13 = 0;
    uVar15 = *(ulong *)(puStack_70 + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (uVar15 != uVar13) {
      if (*(ulong *)(puVar14 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102480f24);
        (*pcVar1)();
      }
      lVar8 = *(long *)(puVar14 + uVar13 * 8 + 0x20);
      uVar13 = uVar13 + 1;
      if (lVar8 != 0) {
        func_0x000107c61174();
        puVar10 = puVar11;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) ||
           (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar9 = puVar11;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          FUN_102482eb0(0,puVar9 + 1,1,puVar11);
        }
        uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar3 = *(ulong *)(uVar12 + 0x10);
        puVar11 = puVar10;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar3) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          FUN_102482eb0(puVar11,uVar3 + 1,1,puVar10);
          uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar12 + 0x10) = uVar3 + 1;
        *(long *)(uVar12 + uVar3 * 8 + 0x20) = lVar8;
      }
    }
    FUN_102481658(puVar14,cStack_68);
  }
  return puVar11;
}



/* Entry: 102480f40; end: 1024812c3;  */

undefined8 FUN_102480f40(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  func_0x000107c45218();
  func_0x000107c61180();
  puVar4 = &UNK_11050eb90;
  func_0x000107c613fc(&UNK_11050eb90,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_48;
  puVar5 = &UNK_11050ebb8;
  func_0x000107c613fc(&UNK_11050ebb8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1024816cc;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x102481a60;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_101382510;
  puStack_60 = &UNK_11050ebd0;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c668(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(param_1);
  uVar2 = uStack_48;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x6d,0x3cd,0x3b,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102481088);
  (*pcVar3)();
}



/* Entry: 1024812c4; end: 1024814bb;  */

/* WARNING: Possible PIC construction at 0x00010248148c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010248149c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024814a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024812c4(ulong param_1,long param_2,undefined *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long alStack_70 [2];
  long lStack_60;
  
  puVar5 = (undefined *)0x0;
  if ((param_1 & 1) != 0) {
    FUN_1024801e8(param_3);
    puVar5 = param_3;
  }
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112e9d0c0);
  func_0x000107c4ffe8();
  func_0x000107c61180();
  func_0x000107c615e8();
  lVar7 = *(long *)(unaff_x20 + _DAT_112e9d158);
  if ((param_1 & 1) == 0) {
    FUN_102481b08(0xd000000000000010,0x800000010f0a0a30,0,0);
  }
  else {
    (**(code **)(lVar7 + 0x18))();
    if (((uVar3 & 1) != 0) &&
       (func_0x0001000d224c(alStack_70), lVar2 = alStack_70[0], alStack_70[0] != 0)) {
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      lStack_60 = alStack_70[0];
      func_0x000107c6157c(uVar6);
      func_0x000100075034(0x102481aac,alStack_70,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(uVar6);
    }
    lVar7 = *(long *)(param_2 + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar7 != 0) {
      plVar1 = (long *)(param_2 + 0x10) + lVar7 * 2;
      lVar7 = *plVar1;
      lVar2 = plVar1[1];
      puVar4 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(long *)(puVar4 + 0x20) = lVar7;
      *(long *)(puVar4 + 0x28) = lVar2;
      func_0x000107c61434(lVar2);
    }
    func_0x0001000d224c(alStack_70);
    if (alStack_70[0] == 0) {
      func_0x000107c6142c(puVar4);
    }
    else {
      func_0x000107c5fc48(puVar4,PTR___sSSN_11034da80);
      func_0x000107c5aef8(alStack_70[0]);
      func_0x000107c615e8(alStack_70[0]);
      puVar5 = puVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1024814bc; end: 102481537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024814bc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9d0d0);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    FUN_102481b08(0xd000000000000010,0x800000010f0a0a30,0,0);
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
  }
  return;
}



/* Entry: 102481538; end: 10248155f;  */

/* WARNING: Possible PIC construction at 0x00010247eaa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247eaa8) */

void FUN_102481538(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126b25c0;
  func_0x000107c610f8(PTR_PTR_1126b25c0,uVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c453e4();
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = uVar2;
  func_0x000102481088(uVar2,param_1,0);
  if ((uVar3 & 1) != 0) {
    func_0x000107c5b198(uVar2);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 102481560; end: 10248157f;  */

void FUN_102481560(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102481580; end: 1024815bf;  */

void FUN_102481580(void)

{
  long unaff_x20;
  
  FUN_10247d82c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_10247d898);
  return;
}



/* Entry: 1024815c0; end: 1024815db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024815c0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5677c(param_1,lVar2,0);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61604(lVar2 + _DAT_112e9d050,param_1);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c3e2c0(uVar1);
  return;
}



/* Entry: 1024815dc; end: 1024815ff;  */

undefined8 FUN_1024815dc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102481600; end: 102481617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102481600(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  puVar4 = *(undefined **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_78,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_102480b30();
    uVar11 = *(undefined8 *)(lVar3 + _DAT_112e9d158);
    func_0x000107c6157c(uVar11);
    func_0x000107c61434(puVar4);
    FUN_102481b08(0xd000000000000012,0x800000010f0a0aa0,puVar4,0);
    func_0x000107c61574(uVar11);
    puVar5 = puVar4;
    func_0x000107c6142c(puVar4);
    puVar14 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((ulong)puVar4 >> 0x3e == 0) {
      puVar8 = *(undefined **)(puVar14 + 0x10);
    }
    else {
      puVar5 = puVar14;
      if ((undefined *)0x7fffffffffffffff < puVar4) {
        puVar5 = puVar4;
      }
      func_0x000107c60480();
      puVar8 = puVar5;
    }
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar7 = (undefined *)0x0;
    while (puVar8 != puVar7) {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar14 + 0x10) <= puVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10247d18c);
          (*pcVar2)();
        }
        puVar5 = *(undefined **)(puVar4 + (long)puVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar7;
        func_0x000102480754(puVar7,puVar4,&PTR_PTR_1126aff40,0x112d62390);
      }
      if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10247d188);
        (*pcVar2)();
      }
      puVar13 = puVar7 + 1;
      puVar6 = puVar5;
      func_0x00010247e660();
      func_0x000107c61170();
      puVar7 = puVar7 + 1;
      if (puVar6 != (undefined *)0x0) {
        puVar5 = puVar12;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar12 < 0)) || (((ulong)puVar12 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar12 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar12) {
              puVar7 = puVar12;
            }
            func_0x000107c60480(puVar7);
          }
          puVar5 = (undefined *)0x0;
          func_0x000100fb4ec0(0,puVar7 + 1,1,puVar12);
          puVar12 = puVar5;
        }
        uVar10 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar10 + 0x10);
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
          func_0x000100fb4ec0(puVar5,uVar1 + 1,1,puVar12);
          uVar10 = (ulong)puVar5 & 0xffffffffffffff8;
          puVar12 = puVar5;
        }
        *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
        *(undefined **)(uVar10 + uVar1 * 8 + 0x20) = puVar6;
        puVar7 = puVar13;
      }
    }
    FUN_10247aac8();
    puVar14 = &UNK_11050e690;
    func_0x000107c613fc(&UNK_11050e690,0x18,7);
    func_0x000107c61614(puVar14 + 0x10,lVar3);
    puVar8 = &UNK_11050eaa0;
    func_0x000107c613fc(&UNK_11050eaa0,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar14;
    *(undefined **)(puVar8 + 0x18) = puVar12;
    *(undefined **)(puVar8 + 0x20) = puVar4;
    uStack_88 = 0x10248160c;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11050eab8;
    ppuVar9 = &puStack_a8;
    puStack_80 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_80);
    func_0x000107c4e524(puVar5);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar3);
    func_0x000107c615e8(puVar5);
  }
  return;
}



/* Entry: 102481618; end: 102481657;  */

void FUN_102481618(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102481658; end: 10248167b;  */

void FUN_102481658(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10248167c; end: 1024816c3;  */

void FUN_10248167c(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024816c4; end: 1024816cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024816c4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long alStack_60 [2];
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    return;
  }
  lVar5 = lVar7;
  func_0x000107c5b198();
  func_0x000107c61180();
  lVar3 = lVar5;
  func_0x000107c44a2c();
  func_0x000107c61170(lVar5);
  if ((int)lVar3 != 0) {
    lVar5 = lVar7;
    func_0x000107c5b198();
    func_0x000107c61180();
    lVar3 = lVar5;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10247e2c8);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10247e2cc);
      (*pcVar1)();
    }
    lVar3 = lVar5;
    func_0x000107c40808();
    func_0x000107c61170(lVar5);
    if (0 < lVar3) {
      FUN_10247c618(lVar7);
      goto LAB_10247e2a8;
    }
  }
  lVar7 = _DAT_112e9d058;
  uVar4 = 0;
  if (*(long *)(lVar2 + _DAT_112e9d058) != 0) {
    func_0x000107c4ff34();
    uVar4 = *(ulong *)(lVar2 + lVar7);
    *(undefined8 *)(lVar2 + lVar7) = 0;
    func_0x000107c61170();
  }
  lVar7 = *(long *)(lVar2 + _DAT_112e9d158);
  (**(code **)(lVar7 + 0x18))();
  if (((uVar4 & 1) != 0) && (func_0x0001000d224c(alStack_60), alStack_60[0] != 0)) {
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    lStack_50 = alStack_60[0];
    func_0x000107c6157c(uVar6);
    func_0x000100075034(0x102481ae8,alStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(alStack_60[0]);
    func_0x000107c61574(uVar6);
  }
  lVar7 = _DAT_112e9d0b0;
  lVar5 = *(long *)(lVar2 + _DAT_112e9d0b0);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c61170();
    uVar6 = *(undefined8 *)(lVar2 + lVar7);
    func_0x000107c4ffe8(uVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(uVar6);
    return;
  }
LAB_10247e2a8:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1024816cc; end: 1024816f7;  */

void FUN_1024816cc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1024816f8; end: 102481713;  */

void FUN_1024816f8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126affc0;
  func_0x000107c61168(PTR_PTR_1126affc0,puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c60a44(auStack_48,0x4014000000000000,1000);
  func_0x000107c5d19c();
  func_0x000107c61180();
  uVar3 = *puVar1;
  *puVar1 = puVar2;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102481714; end: 10248175f;  */

void FUN_102481714(code *param_1,code *param_2)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102481760; end: 10248176b;  */

/* WARNING: Possible PIC construction at 0x00010247f840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247f878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247f8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247f924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247f958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fc38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247faac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010247fa84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010247fb44) */
/* WARNING: Removing unreachable block (ram,0x00010247fbac) */
/* WARNING: Removing unreachable block (ram,0x00010247fbb8) */
/* WARNING: Removing unreachable block (ram,0x00010247fbc0) */
/* WARNING: Removing unreachable block (ram,0x00010247fb10) */
/* WARNING: Removing unreachable block (ram,0x00010247fab0) */
/* WARNING: Removing unreachable block (ram,0x00010247fba8) */
/* WARNING: Removing unreachable block (ram,0x00010247fb90) */
/* WARNING: Removing unreachable block (ram,0x00010247fce8) */
/* WARNING: Removing unreachable block (ram,0x00010247fc3c) */
/* WARNING: Removing unreachable block (ram,0x00010247fc2c) */
/* WARNING: Removing unreachable block (ram,0x00010247fc14) */
/* WARNING: Removing unreachable block (ram,0x00010247f95c) */
/* WARNING: Removing unreachable block (ram,0x00010247fb48) */
/* WARNING: Removing unreachable block (ram,0x00010247f960) */
/* WARNING: Removing unreachable block (ram,0x00010247f96c) */
/* WARNING: Removing unreachable block (ram,0x00010247fb50) */
/* WARNING: Removing unreachable block (ram,0x00010247f974) */
/* WARNING: Removing unreachable block (ram,0x00010247fc04) */
/* WARNING: Removing unreachable block (ram,0x00010247f928) */
/* WARNING: Removing unreachable block (ram,0x00010247f8c8) */
/* WARNING: Removing unreachable block (ram,0x00010247f87c) */
/* WARNING: Removing unreachable block (ram,0x00010247fa8c) */
/* WARNING: Removing unreachable block (ram,0x00010247f8a4) */
/* WARNING: Removing unreachable block (ram,0x00010247f844) */
/* WARNING: Removing unreachable block (ram,0x00010247fa0c) */
/* WARNING: Removing unreachable block (ram,0x00010247f848) */
/* WARNING: Removing unreachable block (ram,0x00010247fa48) */
/* WARNING: Removing unreachable block (ram,0x00010247f864) */
/* WARNING: Removing unreachable block (ram,0x00010247fa88) */

void FUN_102481760(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  undefined8 unaff_x23;
  long lVar10;
  long alStack_f0 [14];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar2 + 0x10,auStack_80,0,0);
  puVar6 = (undefined1 *)(lVar2 + 0x10);
  func_0x000107c61618();
  if (puVar6 == (undefined1 *)0x0) {
    FUN_10248176c();
    puVar7 = &UNK_11050ef70;
    uVar9 = 0;
    func_0x000107c613f8(&UNK_11050ef70,puVar6,0,0);
    *puVar6 = 0;
    func_0x00010488ade0();
    puVar8 = puVar7;
    func_0x000107c614ac();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
    func_0x000107c60e78();
    *(long *)((long)alStack_f0 + lVar4) = lVar10;
    *(undefined8 *)((long)alStack_f0 + lVar4 + 8) = unaff_x23;
    *(long *)((long)alStack_f0 + lVar4 + 0x10) = lVar5;
    *(undefined **)((long)alStack_f0 + lVar4 + 0x18) = puVar7;
    *(undefined8 *)((long)alStack_f0 + lVar4 + 0x20) = uVar3;
    *(undefined8 *)((long)alStack_f0 + lVar4 + 0x28) = uVar3;
    *(undefined1 **)((long)alStack_f0 + lVar4 + 0x30) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_f0 + lVar4 + 0x38) = FUN_10247fc88;
    pcVar1 = *(code **)(puVar8 + 0x20);
    uVar3 = *(undefined8 *)(puVar8 + 0x28);
    func_0x000107c6157c(uVar3);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(uVar9);
    (*pcVar1)(puVar6,uVar9);
    func_0x000107c61574(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10248176c; end: 1024817ab;  */

void FUN_10248176c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9d1a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daabc60;
  func_0x000107c61520(&UNK_10daabc60,&UNK_11050ef70);
  puRam0000000112e9d1a0 = puVar1;
  return;
}



/* Entry: 1024817ac; end: 1024817c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024817ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c5677c();
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61604(lVar1 + _DAT_112e9d038,param_1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e9d080);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c3e2c0(uVar2);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 1024817c4; end: 1024817ef;  */

void FUN_1024817c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024817f0; end: 10248195f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024817f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61604(lVar3 + _DAT_112e9d038,0);
    func_0x000107c61170(lVar3);
  }
  ppuVar4 = (undefined **)0x0;
  if (param_1 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000b0c7c;
    puStack_60 = &UNK_11050eea0;
    ppuVar4 = &puStack_78;
    lStack_58 = param_1;
    uStack_50 = param_2;
    func_0x000107c60bc4(ppuVar4);
    uVar2 = uStack_50;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c41864(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102481960; end: 10248199f;  */

void FUN_102481960(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e9d1a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daabc38;
  func_0x000107c61520(&UNK_10daabc38,&UNK_11050ef70);
  puRam0000000112e9d1a8 = puVar1;
  return;
}



/* Entry: 1024819a0; end: 102481a6f;  */

void FUN_1024819a0(long param_1,long param_2)

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



/* Entry: 102481a70; end: 102481afb;  */

void FUN_102481a70(void)

{
  FUN_102480b18();
  return;
}



/* Entry: 102481afc; end: 102481b07;  */

void FUN_102481afc(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 102481b08; end: 102481bbf;  */

void FUN_102481b08(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  long alStack_90 [2];
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  uVar3 = *unaff_x20;
  uVar1 = param_1;
  (*(code *)unaff_x20[3])();
  if ((uVar1 & 1) != 0) {
    func_0x0001000d224c(alStack_90);
    if (alStack_90[0] != 0) {
      uVar2 = unaff_x20[5];
      lStack_60 = alStack_90[0];
      uStack_80 = param_1;
      uStack_78 = param_2;
      uStack_70 = param_3;
      uStack_68 = param_4;
      uStack_58 = uVar3;
      func_0x000107c6157c(uVar2);
      func_0x000100075034(0x102482d84,alStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(alStack_90[0]);
      func_0x000107c61574(uVar2);
    }
  }
  return;
}



/* Entry: 102481bc0; end: 102481dc7;  */

undefined1  [16] FUN_102481bc0(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (0 < *unaff_x20) {
    puVar2 = (undefined *)0x0;
    func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar4 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      func_0x0001000d182c(puVar4,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = 0x6567616d69;
    *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = 0xe500000000000000;
  }
  if (0 < unaff_x20[1]) {
    puVar2 = puVar4;
    func_0x000107c61558();
    puVar3 = puVar4;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
    }
    uVar1 = *(ulong *)(puVar3 + 0x10);
    puVar4 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      func_0x0001000d182c(puVar4,uVar1 + 1,1,puVar3);
    }
    *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = 0x6f65646976;
    *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = 0xe500000000000000;
  }
  if (unaff_x20[2] < 1) {
    lVar5 = *(long *)(puVar4 + 0x10);
  }
  else {
    puVar2 = puVar4;
    func_0x000107c61558();
    puVar3 = puVar4;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
    }
    uVar1 = *(ulong *)(puVar3 + 0x10);
    lVar5 = uVar1 + 1;
    puVar4 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      func_0x0001000d182c(puVar4,lVar5,1,puVar3);
    }
    *(long *)(puVar4 + 0x10) = lVar5;
    *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = 0x636f645f70616e73;
    *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = 0xe800000000000000;
  }
  if (lVar5 == 0) {
    uVar6 = 0xe700000000000000;
    uVar7 = 0x6e776f6e6b6e75;
  }
  else if (lVar5 == 1) {
    uVar7 = *(undefined8 *)(puVar4 + 0x20);
    uVar6 = *(undefined8 *)(puVar4 + 0x28);
    func_0x000107c61434(uVar6);
  }
  else {
    uVar6 = 0xe500000000000000;
    uVar7 = 0x646578696d;
  }
  func_0x000107c6142c(puVar4);
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 102481dc8; end: 102481e7f;  */

void FUN_102481dc8(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long alStack_60 [2];
  long lStack_50;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x18))();
  if ((param_1 & 1) != 0) {
    func_0x0001000d224c(alStack_60);
    if (alStack_60[0] != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
      lStack_50 = alStack_60[0];
      func_0x000107c6157c(uVar2);
      func_0x000100075034(FUN_102482d6c,alStack_60,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(alStack_60[0]);
      func_0x000107c61574(uVar2);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102481e80; end: 102481ebf;  */

void FUN_102481e80(void)

{
  FUN_102481dc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102481ec0; end: 102482927;  */

void FUN_102481ec0(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  long extraout_x8;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long alStack_d8 [7];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  byte bStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  uStack_e8 = param_6;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = *param_1;
  func_0x000107c61558(lVar4);
  lStack_a0 = *param_1;
  func_0x00010018433c(0x6867696c746f7073,0xec00000032765f74,0x776f6c66,0xe400000000000000,lVar4);
  lVar4 = lStack_a0;
  *param_1 = lStack_a0;
  func_0x000107c61434(param_3);
  func_0x000107c61558(lVar4);
  lStack_a0 = *param_1;
  func_0x00010018433c(param_2,param_3,0x6573616870,0xe500000000000000,lVar4);
  *param_1 = lStack_a0;
  func_0x000107c61558();
  lVar4 = lStack_a0;
  lStack_a0 = *param_1;
  func_0x00010018433c(0x65757274,0xe400000000000000,0xd000000000000012,0x800000010f0a0b50,lVar4);
  *param_1 = lStack_a0;
  lVar4 = lStack_a0;
  if (param_4 != 0) {
    FUN_102482928(&lStack_a0,param_4);
    lVar4 = lStack_a0 + lStack_98;
    if (lStack_90 < 1) {
      if (SCARRY8(lStack_a0,lStack_98)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10248291c);
        (*pcVar2)();
      }
      uVar15 = 0x725f6172656d6163;
      if (lVar4 < 1) {
        uVar15 = 0x6e776f6e6b6e75;
      }
      uVar13 = 0xe700000000000000;
      uVar14 = 0xeb000000006c6c6f;
    }
    else {
      if (SCARRY8(lStack_a0,lStack_98)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102482918);
        (*pcVar2)();
      }
      uVar15 = 0x646578696d;
      if (lVar4 < 1) {
        uVar15 = 0x636f645f70616e73;
      }
      uVar13 = 0xe800000000000000;
      uVar14 = 0xe500000000000000;
    }
    if (lVar4 < 1) {
      uVar14 = uVar13;
    }
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0x656372756f73,0xe600000000000000,lVar4);
    *param_1 = alStack_d8[0];
    if (param_4 >> 0x3e == 0) {
      param_4 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      if (-1 < (long)param_4) {
        param_4 = param_4 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (param_4 == 0) {
      uVar15 = 0x30;
      uVar14 = 0xe100000000000000;
    }
    else {
      bVar3 = 4 < param_4 - 6;
      uVar15 = 0x30315f36;
      if (bVar3) {
        uVar15 = 0x73756c705f3131;
      }
      uVar14 = 0xe400000000000000;
      if (bVar3) {
        uVar14 = 0xe700000000000000;
      }
      bVar3 = 2 < param_4 - 3;
      uVar13 = 0x355f33;
      if (bVar3) {
        uVar13 = uVar15;
      }
      uVar1 = 0xe300000000000000;
      if (bVar3) {
        uVar1 = uVar14;
      }
      if (param_4 == 1) {
        uVar13 = 0x31;
        uVar1 = 0xe100000000000000;
      }
      uVar15 = 0x32;
      if (param_4 != 2) {
        uVar15 = uVar13;
      }
      uVar14 = 0xe100000000000000;
      if (param_4 != 2) {
        uVar14 = uVar1;
      }
    }
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0xd000000000000016,0x800000010f0a0be0,lVar4);
    *param_1 = alStack_d8[0];
    FUN_102481bc0();
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0x79745f616964656d,0xea00000000006570,lVar4);
    *param_1 = alStack_d8[0];
    plVar11 = alStack_d8;
    FUN_102483c90(&lStack_a0,plVar11);
    uVar15 = uStack_70;
    FUN_1024831b0(uStack_70);
    func_0x000102483cd4(&lStack_a0);
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,plVar11,0x7079745f74696465,0xea00000000007365,lVar4);
    *param_1 = alStack_d8[0];
    if (lStack_88 == 0) {
      uVar14 = 0xe100000000000000;
      uVar15 = 0x30;
    }
    else if (lStack_88 == 2) {
      uVar14 = 0xe100000000000000;
      uVar15 = 0x32;
    }
    else if (lStack_88 == 1) {
      uVar14 = 0xe100000000000000;
      uVar15 = 0x31;
    }
    else if (lStack_88 - 3U < 3) {
      uVar15 = 0x355f33;
      uVar14 = 0xe300000000000000;
    }
    else {
      bVar3 = 4 < lStack_88 - 6U;
      uVar15 = 0x30315f36;
      if (bVar3) {
        uVar15 = 0x73756c705f3131;
      }
      uVar14 = 0xe400000000000000;
      if (bVar3) {
        uVar14 = 0xe700000000000000;
      }
    }
    func_0x000107c61558();
    lVar4 = alStack_d8[0];
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0xd00000000000001b,0x800000010f0a0ba0,lVar4);
    *param_1 = alStack_d8[0];
    if (lStack_80 == 0) {
      uVar14 = 0xe100000000000000;
      uVar15 = 0x30;
    }
    else if (lStack_80 == 2) {
      uVar14 = 0xe100000000000000;
      uVar15 = 0x32;
    }
    else if (lStack_80 == 1) {
      uVar14 = 0xe100000000000000;
      uVar15 = 0x31;
    }
    else if (lStack_80 - 3U < 3) {
      uVar15 = 0x355f33;
      uVar14 = 0xe300000000000000;
    }
    else {
      bVar3 = 4 < lStack_80 - 6U;
      uVar15 = 0x30315f36;
      if (bVar3) {
        uVar15 = 0x73756c705f3131;
      }
      uVar14 = 0xe400000000000000;
      if (bVar3) {
        uVar14 = 0xe700000000000000;
      }
    }
    func_0x000107c61558();
    lVar4 = alStack_d8[0];
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0xd000000000000017,0x800000010f0a0bc0,lVar4);
    func_0x000102483cd4(&lStack_a0);
    *param_1 = alStack_d8[0];
    bVar3 = (bStack_78 & 1) == 0;
    uVar15 = 0x65757274;
    if (bVar3) {
      uVar15 = 0x65736c6166;
    }
    uVar14 = 0xe400000000000000;
    if (bVar3) {
      uVar14 = 0xe500000000000000;
    }
    func_0x000107c61558();
    lVar4 = alStack_d8[0];
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0x6973756d5f736168,0xe900000000000063,lVar4);
    *param_1 = alStack_d8[0];
    lVar4 = alStack_d8[0];
  }
  if (param_5 != 0) {
    func_0x000107c61174();
    uVar5 = param_5;
    func_0x000107c44a2c();
    if ((int)uVar5 == 0) {
LAB_102482570:
      uVar15 = 0x30;
      uVar14 = 0xe100000000000000;
    }
    else {
      uVar5 = param_5;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (uVar5 == 0) goto LAB_102482920;
      uVar6 = uVar5;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102482928);
        (*pcVar2)();
      }
      uVar5 = uVar6;
      func_0x000107c40808();
      func_0x000107c61170(uVar6);
      if (uVar5 == 0) goto LAB_102482570;
      bVar3 = 4 < uVar5 - 6;
      uVar15 = 0x30315f36;
      if (bVar3) {
        uVar15 = 0x73756c705f3131;
      }
      uVar14 = 0xe400000000000000;
      if (bVar3) {
        uVar14 = 0xe700000000000000;
      }
      bVar3 = 2 < uVar5 - 3;
      uVar13 = 0x355f33;
      if (bVar3) {
        uVar13 = uVar15;
      }
      uVar1 = 0xe300000000000000;
      if (bVar3) {
        uVar1 = uVar14;
      }
      if (uVar5 == 1) {
        uVar13 = 0x31;
        uVar1 = 0xe100000000000000;
      }
      uVar15 = 0x32;
      if (uVar5 != 2) {
        uVar15 = uVar13;
      }
      uVar14 = 0xe100000000000000;
      if (uVar5 != 2) {
        uVar14 = uVar1;
      }
    }
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0xd00000000000001b,0x800000010f0a0ba0,lVar4);
    *param_1 = alStack_d8[0];
    uVar5 = param_5;
    func_0x000102483520();
    if (uVar5 == 0) {
      uVar15 = 0x30;
      uVar14 = 0xe100000000000000;
    }
    else {
      bVar3 = 4 < uVar5 - 6;
      uVar15 = 0x30315f36;
      if (bVar3) {
        uVar15 = 0x73756c705f3131;
      }
      uVar14 = 0xe400000000000000;
      if (bVar3) {
        uVar14 = 0xe700000000000000;
      }
      bVar3 = 2 < uVar5 - 3;
      uVar13 = 0x355f33;
      if (bVar3) {
        uVar13 = uVar15;
      }
      uVar1 = 0xe300000000000000;
      if (bVar3) {
        uVar1 = uVar14;
      }
      if (uVar5 == 1) {
        uVar13 = 0x31;
        uVar1 = 0xe100000000000000;
      }
      uVar15 = 0x32;
      if (uVar5 != 2) {
        uVar15 = uVar13;
      }
      uVar14 = 0xe100000000000000;
      if (uVar5 != 2) {
        uVar14 = uVar1;
      }
    }
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0xd000000000000017,0x800000010f0a0bc0,lVar4);
    *param_1 = alStack_d8[0];
    uVar5 = param_5;
    FUN_102483708();
    bVar3 = (uVar5 & 1) == 0;
    uVar15 = 0x65757274;
    if (bVar3) {
      uVar15 = 0x65736c6166;
    }
    uVar14 = 0xe400000000000000;
    if (bVar3) {
      uVar14 = 0xe500000000000000;
    }
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar15,uVar14,0x6973756d5f736168,0xe900000000000063,lVar4);
    *param_1 = alStack_d8[0];
    uVar5 = param_5;
    FUN_102483a5c(param_5);
    uVar6 = uVar5;
    FUN_1024831b0();
    func_0x000107c6142c(uVar5);
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    alStack_d8[0] = *param_1;
    func_0x00010018433c(uVar6,uVar14,0x7079745f74696465,0xea00000000007365,lVar4);
    func_0x000107c61170(param_5);
    *param_1 = alStack_d8[0];
    lVar4 = alStack_d8[0];
  }
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  lVar8 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar9 = puVar7;
  func_0x000107c4a6cc();
  func_0x000107c61170(lVar8);
  if ((int)puVar9 != 0) {
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c5f9dc(lVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    alStack_d8[0] = 0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = alStack_d8[0];
    func_0x000107c61174(alStack_d8[0]);
    if (puVar7 == (undefined *)0x0) {
      lVar8 = lVar4;
      func_0x000107c5ed30();
      func_0x000107c61170(lVar4);
      func_0x000107c61654();
      func_0x000107c614ac(lVar8);
    }
    else {
      puVar10 = puVar7;
      func_0x000107c5ee30(puVar7);
      func_0x000107c61170(puVar7);
      func_0x000107c5fb04(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      puVar7 = puVar10;
      puVar12 = puVar9;
      func_0x000107c5faf0(puVar10,puVar9,auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x00010006c090(puVar10,puVar9);
      if (puVar12 != (undefined *)0x0) {
        func_0x000107c5fadc(puVar7,puVar12);
        func_0x000107c6142c(puVar12);
        uVar15 = 0xd000000000000021;
        func_0x000107c5fadc(0xd000000000000021,0x800000010f0a0b70);
        func_0x000107c56be8(uStack_e8);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar15);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_102482920:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102482924);
  (*pcVar2)();
}



/* Entry: 102482928; end: 102482ceb;  */

void FUN_102482928(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 unaff_x20;
  undefined1 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined *puStack_80;
  
  uStack_8f = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_97 = 0;
  uStack_a0 = 0;
  puStack_80 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  else {
    uVar1 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar1 = param_2;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
  }
  PTR___swiftEmptySetSingleton_11034f1d8 = puVar5;
  if (uVar1 == 0) {
    uVar10 = 0;
    uVar13 = 0;
    uVar11 = 0;
    puVar15 = (undefined *)0x0;
    uVar17 = 0;
    puVar18 = (undefined *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    if ((long)uVar1 < 1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x102482cec);
      (*pcVar9)();
    }
    pcVar9 = (code *)0x0;
    uVar11 = 0;
    uVar17 = 0;
    uVar12 = 0;
    puVar5 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    puVar16 = (undefined *)0x0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(param_2 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar12;
        func_0x00010118a0b4(uVar12,param_2);
      }
      uVar12 = uVar12 + 1;
      uVar2 = uVar8;
      func_0x000107c45218();
      func_0x000107c61180();
      puVar3 = &UNK_11050eff0;
      func_0x000107c613fc(&UNK_11050eff0,0x18,7);
      *(undefined8 **)(puVar3 + 0x10) = &uStack_b0;
      func_0x000100cf3a84(pcVar9,puVar16);
      puVar15 = &UNK_11050f018;
      func_0x000107c613fc(&UNK_11050f018,0x20,7);
      *(code **)(puVar15 + 0x10) = FUN_102483cfc;
      *(undefined **)(puVar15 + 0x18) = puVar3;
      puVar16 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0x102483d18;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0x42000000;
      puStack_d0 = &UNK_1019fdb4c;
      puStack_c8 = &UNK_11050f030;
      ppuVar4 = &puStack_e0;
      puStack_b8 = puVar15;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_b8);
      puVar15 = &UNK_11050f068;
      func_0x000107c613fc(&UNK_11050f068,0x18,7);
      *(undefined8 **)(puVar15 + 0x10) = &uStack_b0;
      func_0x000100cf3a84(uVar11,puVar5);
      puVar5 = &UNK_11050f090;
      func_0x000107c613fc(&UNK_11050f090,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = 0x102483d3c;
      *(undefined **)(puVar5 + 0x18) = puVar15;
      uStack_c0 = 0x102483d58;
      puStack_e0 = puVar16;
      uStack_d8 = 0x42000000;
      puStack_d0 = &UNK_101a36974;
      puStack_c8 = &UNK_11050f0a8;
      ppuVar6 = &puStack_e0;
      puStack_b8 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_b8);
      puVar18 = &UNK_11050f0e0;
      func_0x000107c613fc(&UNK_11050f0e0,0x20,7);
      *(undefined8 **)(puVar18 + 0x10) = &uStack_b0;
      *(undefined8 *)(puVar18 + 0x18) = unaff_x20;
      func_0x000100cf3a84(uVar17,puVar14);
      puVar5 = &UNK_11050f108;
      func_0x000107c613fc(&UNK_11050f108,0x20,7);
      uVar17 = 0x102483d60;
      *(undefined8 *)(puVar5 + 0x10) = 0x102483d60;
      *(undefined **)(puVar5 + 0x18) = puVar18;
      uStack_c0 = 0x102483d68;
      puStack_e0 = puVar16;
      uStack_d8 = 0x42000000;
      puStack_d0 = &UNK_101382510;
      puStack_c8 = &UNK_11050f120;
      ppuVar7 = &puStack_e0;
      puStack_b8 = puVar5;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_b8);
      func_0x000107c4c668(uVar2);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar2);
      pcVar9 = FUN_102483cfc;
      uVar11 = 0x102483d3c;
      puVar5 = puVar15;
      puVar14 = puVar18;
      puVar16 = puVar3;
    } while (uVar1 != uVar12);
    uStack_f8 = CONCAT71(uStack_97,uStack_98);
    uStack_100 = uStack_a0;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    uVar17 = 0x102483d60;
    uVar13 = CONCAT71(uStack_8f,uStack_90);
    uVar11 = 0x102483d3c;
    puVar5 = puStack_80;
    uVar10 = uStack_88;
  }
  func_0x000100cf3a84();
  func_0x000100cf3a84(uVar11,puVar15);
  func_0x000100cf3a84(uVar17,puVar18);
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  param_1[4] = uVar13;
  *(undefined1 *)(param_1 + 5) = uVar10;
  param_1[6] = puVar5;
  return;
}



/* Entry: 102482cec; end: 102482d6b;  */

void FUN_102482cec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c6142c(*param_1);
  *param_1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar1 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0a0b70);
  func_0x000107c56be8(param_2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102482d6c; end: 102482da3;  */

void FUN_102482d6c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102482cec(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102482da4; end: 102482eaf;  */

/* WARNING: Possible PIC construction at 0x000102482e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102482e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102482e10) */
/* WARNING: Removing unreachable block (ram,0x000102482eac) */
/* WARNING: Removing unreachable block (ram,0x000102482e14) */
/* WARNING: Removing unreachable block (ram,0x000102482e28) */
/* WARNING: Removing unreachable block (ram,0x000102482ea0) */

void FUN_102482da4(long param_1,long param_2)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  
  if (SCARRY8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102482ea0);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  func_0x000107c5b198();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c44a2c();
  if ((int)lVar3 == 0) {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    lVar3 = param_1;
    func_0x000102483520();
    if (SCARRY8(*(long *)(param_2 + 0x20),lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102482ea8);
      (*pcVar1)();
    }
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + lVar3;
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      lVar3 = param_1;
      FUN_102483708();
      bVar2 = (byte)lVar3;
    }
    else {
      bVar2 = 1;
    }
    *(byte *)(param_2 + 0x28) = bVar2 & 1;
    FUN_102483a5c(param_1);
    func_0x00010105ba6c();
  }
  else {
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102482eac);
      (*pcVar1)();
    }
    func_0x000107c4e928();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102482eb0; end: 102482ecb;  */

ulong FUN_102482eb0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102483014);
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
  FUN_102483014(uVar2,uVar4,FUN_102480644);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102483010);
      (*pcVar1)();
    }
    FUN_102483094(0,uVar2,uVar3 + 0x20,param_4,0x112d62390,&PTR_PTR_1126aff40);
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



/* Entry: 102482ecc; end: 102483013;  */

ulong FUN_102482ecc(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102483014);
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
  FUN_102483014(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102483010);
      (*pcVar1)();
    }
    FUN_102483094(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102483014; end: 102483093;  */

undefined * FUN_102483014(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 102483094; end: 1024831af;  */

long FUN_102483094(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024831ac);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024831b0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102483d70(0,param_5,param_6);
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
      FUN_102483d70(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1024831a8);
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



/* Entry: 1024831b0; end: 1024832af;  */

/* WARNING: Removing unreachable block (ram,0x0001024832a4) */

undefined1  [16] FUN_1024831b0(long param_1)

{
  undefined8 **ppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 ***pppuVar9;
  undefined1 auVar10 [16];
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pppuVar9 = *(undefined8 ****)(param_1 + 0x10);
  if (pppuVar9 == (undefined8 ***)0x0) {
    uVar8 = 0xe400000000000000;
    uVar7 = 0x656e6f6e;
  }
  else {
    func_0x000107c61434();
    pppuVar3 = pppuVar9;
    func_0x00010109b448(pppuVar9,0);
    pppuVar4 = &ppuStack_58;
    func_0x00010109b930(pppuVar4,pppuVar3 + 4,pppuVar9,param_1);
    func_0x00010109bac0(ppuStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
    if (pppuVar4 != pppuVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024832a4);
      (*pcVar2)();
    }
    ppuStack_58 = pppuVar3;
    func_0x000101b7c750(&ppuStack_58);
    ppuVar1 = ppuStack_58;
    uVar5 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar6 = uVar5;
    func_0x00010011d734();
    uVar7 = 0x7c;
    uVar8 = 0xe100000000000000;
    func_0x000107c5fa80(0x7c,0xe100000000000000,uVar5,uVar6);
    func_0x000107c61574(ppuVar1);
  }
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Entry: 1024832b0; end: 102483707;  */

undefined * FUN_1024832b0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar5 = param_1;
  func_0x000107c44a2c();
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((int)lVar5 != 0) {
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10248351c);
      (*pcVar3)();
    }
    lVar5 = param_1;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102483520);
      (*pcVar3)();
    }
    lStack_d8 = lVar5;
    lStack_d0 = lVar12;
    func_0x000107c600f4(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_80,lVar4,param_1);
    puVar2 = PTR___sypN_11034f1a8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_68 != 0) {
      func_0x000100102924(auStack_80,auStack_a0);
      func_0x000100102924(auStack_a0,auStack_c8);
      uVar8 = 0;
      FUN_102483d70(0,0x112d55598,&PTR_PTR_1126b25d0);
      plVar9 = &lStack_a8;
      func_0x000107c6147c(plVar9,auStack_c8,puVar2 + 8,uVar8,6);
      lVar5 = lStack_a8;
      if ((((ulong)plVar9 & 1) != 0) && (lStack_a8 != 0)) {
        puVar7 = puVar10;
        func_0x000107c61550();
        if (((int)puVar7 == 0) ||
           (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar6 = puVar10;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_102482ecc(0,puVar6 + 1,1,puVar10,&UNK_101a0fcbc,0x112d55598,&PTR_PTR_1126b25d0);
        }
        uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar11 + 0x10);
        puVar10 = puVar7;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_102482ecc(puVar10,uVar1 + 1,1,puVar7,&UNK_101a0fcbc,0x112d55598,&PTR_PTR_1126b25d0);
          uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
        *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar5;
      }
      func_0x000107c601c0(auStack_80,lVar4,param_1);
    }
    func_0x000107c61170(lStack_d8);
    (**(code **)(lStack_d0 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  }
  return puVar10;
}



/* Entry: 102483708; end: 1024837f7;  */

bool FUN_102483708(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  FUN_1024832b0();
  uVar6 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar5 == uVar4) break;
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024837e4);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_1 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar4;
      func_0x00010121c1ac(uVar4,param_1);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024837e0);
      (*pcVar1)();
    }
    func_0x0001044e03bc(0);
    uVar3 = uVar2;
    func_0x0001044de834();
    func_0x000107c61170(uVar2);
    uVar2 = uVar4 + 1;
  } while ((uVar3 & 1) == 0);
  func_0x000107c6142c(param_1);
  return uVar5 != uVar4;
}



/* Entry: 1024837f8; end: 102483a5b;  */

undefined1  [16] FUN_1024837f8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar2 = param_1;
  func_0x000107c44990();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x000107c4ce20();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102483a50);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c4ce50();
    func_0x000107c61170(lVar2);
    uVar4 = 0x6e6f6974706163;
    uVar5 = 0xe700000000000000;
    switch((int)lVar3) {
    case 1:
    case 10:
    case 0xc:
    case 0xd:
code_r0x000102483970:
      uVar5 = 0xe700000000000000;
      uVar4 = 0x72656b63697473;
      break;
    case 2:
      break;
    case 3:
      uVar5 = 0xec00000072656b63;
      uVar4 = 0x6974735f6f666e69;
      break;
    default:
      goto LAB_102483898;
    case 5:
    case 6:
      uVar5 = 0xec00000073746964;
      uVar4 = 0x655f79636167656c;
      break;
    case 7:
code_r0x0001024839e0:
      uVar5 = 0xe600000000000000;
      uVar4 = 0x7265746c6966;
      break;
    case 8:
code_r0x0001024839cc:
      uVar5 = 0xe700000000000000;
      uVar4 = 0x676e6977617264;
      break;
    case 9:
code_r0x0001024839f4:
      uVar4 = 0x7061635f6f747561;
      uVar5 = 0xed0000736e6f6974;
      break;
    case 0xb:
code_r0x0001024839b0:
      uVar4 = 0x656d686361747461;
      uVar5 = 0xea0000000000746e;
      break;
    case 0xe:
    case 0xf:
code_r0x0001024839a0:
      uVar5 = 0xe400000000000000;
      uVar4 = 0x736e656c;
    }
    goto code_r0x00010248398c;
  }
LAB_102483898:
  lVar2 = param_1;
  func_0x000107c44904();
  if ((int)lVar2 != 0) {
    lVar2 = param_1;
    func_0x000107c4a764();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102483a54);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c44864();
    func_0x000107c61170(lVar2);
    if ((int)lVar3 != 0) {
      func_0x000107c4a764();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102483a58);
        (*pcVar1)();
      }
      lVar2 = param_1;
      func_0x000107c42924();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102483a5c);
        (*pcVar1)();
      }
      lVar3 = lVar2;
      func_0x000107c42930();
      func_0x000107c61170(lVar2);
      uVar4 = 0x6e6f6974706163;
      uVar5 = 0xe700000000000000;
      switch((int)lVar3) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 0xc:
      case 0xd:
      case 0x11:
      case 0x15:
      case 0x18:
      case 0x1c:
        goto code_r0x000102483970;
      case 7:
      case 0x13:
        uVar5 = 0xe500000000000000;
        uVar4 = 0x636973756d;
        break;
      default:
        goto LAB_102483984;
      case 0xb:
        break;
      case 0x10:
        goto code_r0x0001024839e0;
      case 0x12:
        goto code_r0x0001024839b0;
      case 0x14:
        goto code_r0x0001024839cc;
      case 0x16:
        goto code_r0x0001024839f4;
      case 0x19:
      case 0x1b:
        goto code_r0x0001024839a0;
      }
      goto code_r0x00010248398c;
    }
  }
LAB_102483984:
  uVar4 = 0x74635f726568746f;
  uVar5 = 0xed00006d6574695f;
code_r0x00010248398c:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 102483a5c; end: 102483c8f;  */

undefined * FUN_102483a5c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  FUN_1024832b0();
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102483c3c);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar9;
        param_2 = param_1;
        func_0x00010121c1ac(uVar9,param_1);
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102483c38);
        (*pcVar2)();
      }
      func_0x0001044e03bc(0);
      uVar5 = uVar4;
      func_0x0001044de834();
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar4;
        func_0x000107c4abb4();
        iVar3 = (int)uVar5;
        if (2 < iVar3) {
          if (iVar3 == 4) {
            uVar6 = uVar4;
            func_0x000107c40dc8();
            func_0x000107c61180();
            if (uVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102483c8c);
              (*pcVar2)();
            }
            uVar5 = uVar6;
            FUN_1024837f8();
            func_0x000107c61170(uVar6);
          }
          else {
            if (iVar3 != 3) goto LAB_102483bc4;
            param_2 = 0xea0000000000746e;
            uVar5 = 0x656d686361747461;
          }
          goto LAB_102483ac8;
        }
        if (iVar3 == 1) {
          uVar5 = uVar4;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102483c90);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c3e240();
          func_0x000107c61170(uVar5);
          if ((int)uVar6 != 5) {
            param_2 = 0xe500000000000000;
            uVar5 = 0x616964656d;
            goto LAB_102483ac8;
          }
        }
        else if (iVar3 == 2) {
          param_2 = 0xe700000000000000;
          uVar5 = 0x6e6f6974706163;
          goto LAB_102483ac8;
        }
LAB_102483bc4:
        func_0x000107c61170(uVar4);
      }
      else {
        param_2 = 0xe500000000000000;
        uVar5 = 0x636973756d;
LAB_102483ac8:
        func_0x000100403b00(auStack_78,uVar5,param_2);
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(uStack_70);
        param_2 = uVar5;
      }
      uVar9 = uVar9 + 1;
      puVar7 = puStack_68;
    } while (uVar1 != uVar8);
  }
  func_0x000107c6142c(param_1);
  return puVar7;
}



/* Entry: 102483c90; end: 102483cfb;  */

undefined8 * FUN_102483c90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[4] = param_1[4];
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)(param_1 + 5);
  param_2[6] = param_1[6];
  func_0x000107c61434();
  return param_2;
}



/* Entry: 102483cfc; end: 102483d6f;  */

void FUN_102483cfc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = **(long **)(unaff_x20 + 0x10);
  if (!SCARRY8(lVar2,1)) {
    **(long **)(unaff_x20 + 0x10) = lVar2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102483d18);
  (*pcVar1)();
}



/* Entry: 102483d70; end: 102483ddb;  */

void FUN_102483d70(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102483ddc; end: 102483de3;  */

void FUN_102483ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 102483de4; end: 102483ed7;  */

undefined8 * FUN_102483de4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102483ed8; end: 102483f8b;  */

int FUN_102483ed8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102483f8c; end: 102483ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102483f8c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102484380();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9d268) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102483ff8; end: 102484063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102483ff8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9d268) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102484064; end: 1024840c3; -[_TtC57SendToPublicProfileOnboardingScopedFactoryServiceProvider45SCSendToPublicProfileOnboardingScopedServices init] */

void FUN_102484064(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToPublicProfileOnboardingScopedFactoryServiceProvider.SCSendToPublicProfileOnboardingScopedServices"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102484090);
  (*pcVar1)();
}



/* Entry: 1024840c4; end: 1024840d3; -[_TtC57SendToPublicProfileOnboardingScopedFactoryServiceProvider45SCSendToPublicProfileOnboardingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024840c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9d268));
  return;
}



/* Entry: 1024840d4; end: 10248413f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024840d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11050f3a8;
  func_0x000107c613fc(&UNK_11050f3a8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102484418,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102484140; end: 1024841db;  */

void FUN_102484140(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11050f2b8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11050f2b8;
  return;
}



/* Entry: 1024841dc; end: 102484213;  */

void FUN_1024841dc(long *param_1)

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



/* Entry: 102484214; end: 10248421b;  */

undefined8 FUN_102484214(void)

{
  return 0x1b;
}



/* Entry: 10248421c; end: 10248434f;  */

void FUN_10248421c(undefined8 *param_1)

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
  puVar1 = &UNK_11050f3d0;
  func_0x000107c613fc(&UNK_11050f3d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024843f0;
  func_0x00010058fa64(FUN_1024843f0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102484350; end: 10248437f;  */

undefined ** FUN_102484350(void)

{
  return &PTR_DAT_113066eb0;
}



/* Entry: 102484380; end: 10248439f;  */

void FUN_102484380(void)

{
  func_0x000107c61168(&PTR_PTR_112844740);
  return;
}



/* Entry: 1024843a0; end: 1024843ef;  */

undefined1  [16] FUN_1024843a0(void)

{
  return ZEXT816(0x11050f308);
}



/* Entry: 1024843f0; end: 102484417;  */

void FUN_1024843f0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102484418; end: 10248441b;  */

void FUN_102484418(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10248441c; end: 1024844ff;  */

/* WARNING: Possible PIC construction at 0x0001024844c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024844d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024844cc) */
/* WARNING: Removing unreachable block (ram,0x0001024844dc) */

void FUN_10248441c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11050f458;
  func_0x000107c613fc(&UNK_11050f458,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112e9d2d8;
  func_0x0001000285a8(0x112e9d2d8,&UNK_10daabfd0);
  func_0x000107c613fc();
  pcVar3 = FUN_102484918;
  func_0x0001000841fc(FUN_102484918,puVar1,uVar2);
  func_0x000100084214(&UNK_10daabf90,0x3b,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102484500; end: 10248451f;  */

/* WARNING: Possible PIC construction at 0x0001024844c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024844d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024844cc) */
/* WARNING: Removing unreachable block (ram,0x0001024844dc) */

void FUN_102484500(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11050f458;
  func_0x000107c613fc(&UNK_11050f458,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112e9d2d8;
  func_0x0001000285a8(0x112e9d2d8,&UNK_10daabfd0);
  func_0x000107c613fc();
  pcVar6 = FUN_102484918;
  func_0x0001000841fc(FUN_102484918,puVar4,uVar5);
  func_0x000100084214(&UNK_10daabf90,0x3b,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102484520; end: 1024848d3;  */

void FUN_102484520(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e9d2e0,&UNK_10daabfd8);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102485e1c();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_102485ea8();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024841dc;
  func_0x0001000823a8(FUN_1024841dc,0);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopedServicesCleanupRelayServiceProvider",
                      0x48,2);
  puVar5 = puVar2;
  FUN_102485cd0();
  func_0x000100082720("SendToPublicProfileOnboardingScopeGraphBridgeServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e9d2e8,&UNK_10daabff0);
  puVar6 = &UNK_11050f480;
  func_0x000107c613fc(&UNK_11050f480,0x48,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 **)(puVar6 + 0x40) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102484928;
  func_0x0001000823a8(0x102484928,puVar6);
  func_0x000100082720("SCSendToBusinessProfileEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e9d2f0,&UNK_10daabfe0);
  puVar6 = &UNK_11050f4a8;
  func_0x000107c613fc(&UNK_11050f4a8,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x10248493c;
  func_0x0001000823a8(0x10248493c,puVar6);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112e9d270,&UNK_10daabd10);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x102484948;
  func_0x0001000823a8(0x102484948,uVar7);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopeInitializationServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e9d260,&UNK_10daabd00);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102484950;
  func_0x0001000823a8(0x102484950,uVar8);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopedServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11050f4d0;
  func_0x000107c613fc(&UNK_11050f4d0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102484958;
  func_0x0001000823a8(0x102484958,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopeEntryPointProvider",0x36,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1024848d4; end: 102484917;  */

void FUN_1024848d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102484918; end: 10248495f;  */

void FUN_102484918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar12 = *param_2;
  func_0x0001000285a8(0x112e9d2e0,&UNK_10daabfd8);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_102485e1c();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_102485ea8();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024841dc;
  func_0x0001000823a8(FUN_1024841dc,0);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopedServicesCleanupRelayServiceProvider",
                      0x48,2);
  puVar5 = puVar2;
  FUN_102485cd0();
  func_0x000100082720("SendToPublicProfileOnboardingScopeGraphBridgeServicesServiceProvider",0x44,2)
  ;
  func_0x0001000285a8(0x112e9d2e8,&UNK_10daabff0);
  puVar6 = &UNK_11050f480;
  func_0x000107c613fc(&UNK_11050f480,0x48,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 *)(puVar6 + 0x28) = uVar8;
  *(undefined8 *)(puVar6 + 0x30) = uVar10;
  *(undefined8 *)(puVar6 + 0x38) = uVar11;
  *(undefined8 **)(puVar6 + 0x40) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x102484928;
  func_0x0001000823a8(0x102484928,puVar6);
  func_0x000100082720("SCSendToBusinessProfileEntryPointWrapperServiceProvider",0x37,2);
  func_0x0001000285a8(0x112e9d2f0,&UNK_10daabfe0);
  puVar6 = &UNK_11050f4a8;
  func_0x000107c613fc(&UNK_11050f4a8,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar8 = 0x10248493c;
  func_0x0001000823a8(0x10248493c,puVar6);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112e9d270,&UNK_10daabd10);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x102484948;
  func_0x0001000823a8(0x102484948,uVar8);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopeInitializationServiceProvider",0x41,2);
  func_0x0001000285a8(0x112e9d260,&UNK_10daabd00);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x102484950;
  func_0x0001000823a8(0x102484950,uVar9);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopedServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11050f4d0;
  func_0x000107c613fc(&UNK_11050f4d0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x102484958;
  func_0x0001000823a8(0x102484958,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopeEntryPointProvider",0x36,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 102484960; end: 10248520f;  */

void FUN_102484960(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  FUN_102485388();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x18) = puVar6;
  puVar6 = PTR_PTR_1126aa8c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar6;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f0a0e70);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar6);
  uVar8 = 0x536f725070616e73;
  func_0x000107c5fadc(0x536f725070616e73,0xef73656369767265);
  func_0x000107c5a49c(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar10);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar8);
  uVar9 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(uVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(uStack_98);
  *param_1 = param_2;
  return;
}



/* Entry: 102485210; end: 10248527b;  */

void FUN_102485210(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10248527c; end: 102485283;  */

undefined8 FUN_10248527c(void)

{
  return 0x1b;
}



/* Entry: 102485284; end: 102485307;  */

void FUN_102485284(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1024853c8,param_2,FUN_1024853cc,param_2,FUN_1024853f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102485308; end: 102485357;  */

undefined8 FUN_102485308(void)

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



/* Entry: 102485358; end: 102485387;  */

void FUN_102485358(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11050f4e8;
  return;
}



/* Entry: 102485388; end: 1024853a7;  */

void FUN_102485388(void)

{
  func_0x000107c61168(&PTR_PTR_112e9d360);
  return;
}



/* Entry: 1024853a8; end: 1024853cb;  */

undefined1  [16] FUN_1024853a8(void)

{
  return ZEXT816(0x11050f528);
}


